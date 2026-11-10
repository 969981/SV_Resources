// Ghidra 12.2 AArch64: restore functions whose entry is proven by SV 4.0.0
// original .eh_frame FDE, while preserving any overlapping Ghidra function.
//@category PokemonSV
// Usage: -postScript SV400RecoverFDE.java <fde_ranges.csv.gz> <report.csv>
// The input is generated ONLY by tools/home41_ghidra_elf_atlas.py after it
// verifies the original ELF SHA256 and all discovered FDE program-counter ranges.
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.zip.GZIPInputStream;

public class SV400RecoverFDE extends GhidraScript {
    private long fdeCount=0, matched=0, created=0, overlap=0, skipped=0, failed=0;
    private long sizeMismatch=0;

    private static long parseRva(String hex) {
        return Long.parseUnsignedLong(hex.trim().replaceFirst("^0[xX]",""),16);
    }
    private static String csv(String input) {
        if(input==null) return "";
        return "\"" + input.replace("\"","\"\"").replace("\n"," ").replace("\r"," ") + "\"";
    }
    private static String cleanError(Throwable t) {
        String s=t.toString();
        return s.length()>400 ? s.substring(0,400) : s;
    }

    @Override
    public void run() throws Exception {
        String[] argv=getScriptArgs();
        if(argv.length!=2)
            throw new IllegalArgumentException(
                "SV400RecoverFDE.java <fde_25803.csv.gz> <report.csv>");
        Path source=Paths.get(argv[0]).toAbsolutePath();
        Path report=Paths.get(argv[1]).toAbsolutePath();
        Files.createDirectories(report.getParent());
        println("Ghidra imagebase: "+currentProgram.getImageBase());
        FunctionManager manager=currentProgram.getFunctionManager();

        try(BufferedReader reader=new BufferedReader(new InputStreamReader(
                new GZIPInputStream(Files.newInputStream(source)),StandardCharsets.UTF_8));
            BufferedWriter writer=Files.newBufferedWriter(report,StandardCharsets.UTF_8)) {
            String header=reader.readLine();
            if(header==null || !header.startsWith("index,entry_rva,length_bytes,"))
                throw new IllegalArgumentException("Invalid original FDE index header");
            writer.write("rva,fde_bytes,ghidra_bytes,status,error\n");
            String line;
            long prev=-1;
            while((line=reader.readLine())!=null) {
                if((fdeCount%1024)==0) monitor.checkCancelled();
                if(line.isBlank()) continue;
                String[] fields=line.split(",",-1);
                if(fields.length!=5)throw new IllegalArgumentException("Malformed FDE row "+fdeCount);
                long rva=parseRva(fields[1]);
                long len=Long.parseLong(fields[2]);
                if((rva%4)!=0 || len<=0 || rva<=prev)
                    throw new IllegalArgumentException("Unsorted/non-code FDE row "+fdeCount);
                prev=rva;
                fdeCount++;
                Address addr=currentProgram.getImageBase().add(rva);
                String status,error="";
                long body=-1;
                try {
                    if(!currentProgram.getMemory().contains(addr)) {
                        status="UNMAPPED";skipped++;
                    } else if(currentProgram.getMemory().getBlock(addr)==null ||
                              !currentProgram.getMemory().getBlock(addr).isExecute()) {
                        status="NOT_EXECUTABLE";skipped++;
                    } else {
                        Function fn=manager.getFunctionAt(addr);
                        if(fn!=null) {
                            status="ALREADY_PRESENT";matched++;
                        } else {
                            Function container=manager.getFunctionContaining(addr);
                            if(container!=null) {
                                status="INSIDE_EXISTING:"+container.getEntryPoint();
                                overlap++;
                            } else {
                                if(currentProgram.getListing().getInstructionAt(addr)==null)
                                    disassemble(addr);
                                CreateFunctionCmd cmd=new CreateFunctionCmd(addr);
                                boolean ok=cmd.applyTo(currentProgram,monitor);
                                fn=manager.getFunctionAt(addr);
                                if(ok && fn!=null) {status="CREATED";created++;}
                                else {status="CREATE_FAILED";failed++;}
                            }
                        }
                        if(fn!=null) {
                            body=fn.getBody().getNumAddresses();
                            if(body!=len)sizeMismatch++;
                        }
                    }
                } catch(Exception ex) {
                    status="EXCEPTION";error=cleanError(ex);failed++;
                }
                writer.write(String.format("0x%X,%d,%d,%s,%s\n",
                               rva,len,body,csv(status),csv(error)));
                if(fdeCount%1000==0) {
                    writer.flush();
                    println("SV400 FDE recovery "+fdeCount+
                            " matched="+matched+" created="+created+
                            " overlapped="+overlap+" failed="+failed);
                }
            }
        }
        println("SV400 FDE import totals: "+fdeCount+" FDE, already="+matched+
                ", created="+created+", overlap="+overlap+", skipped="+skipped+
                ", failed="+failed+", size_mismatch="+sizeMismatch);
        if(fdeCount == 0) println("WARNING: no validated EH-frame FDEs were supplied");
    }
}
