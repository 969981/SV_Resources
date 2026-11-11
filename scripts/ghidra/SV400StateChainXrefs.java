// SV400 read-only state-chain references, native saved Ghidra 12.2 database.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.ReferenceManager;
import java.io.File;
import java.io.PrintWriter;
public class SV400StateChainXrefs extends GhidraScript {
    private String a(Address x) { return x == null ? "" : x.toString(); }
    private String safe(Object s) {
        return s == null ? "" : s.toString().replace('\t', ' ').replace('\n', ' ').replace('\r', ' ');
    }
    private String f(Address a) {
        Function fun = currentProgram.getFunctionManager().getFunctionContaining(a);
        return fun == null ? "" : a(fun.getEntryPoint()) + ":" + fun.getName();
    }
    private String instruction(Instruction i) { return i == null ? "" : a(i.getAddress()) + ":" + safe(i); }
    private String around(Address a) {
        Listing l = currentProgram.getListing();
        Instruction i = l.getInstructionContaining(a);
        if (i == null) return "";
        Instruction before = l.getInstructionBefore(i.getAddress());
        Instruction after = l.getInstructionAfter(i.getAddress());
        return instruction(before) + " | " + instruction(i) + " | " + instruction(after);
    }
    private void target(PrintWriter out, ReferenceManager rm, Address to) throws Exception {
        ReferenceIterator it = rm.getReferencesTo(to);
        int count = 0;
        while (it.hasNext()) {
            monitor.checkCancelled();
            Reference r = it.next();
            count++;
            if (count > 500) continue;
            out.println(a(to) + "\t" + a(r.getFromAddress()) + "\t" +
                safe(r.getReferenceType()) + "\t" + r.getReferenceType().isRead() + "\t" +
                r.getReferenceType().isWrite() + "\t" + f(r.getFromAddress()) + "\t" +
                around(r.getFromAddress()));
        }
        println("target " + a(to) + " refs=" + count);
    }
    private String raw(Address a) {
        try {
            byte[] bytes = new byte[64];
            currentProgram.getMemory().getBytes(a, bytes);
            StringBuilder sb = new StringBuilder();
            for (byte b: bytes) sb.append(String.format("%02x", b & 0xff));
            return sb.toString();
        } catch (Exception e) { return "ERROR:" + safe(e); }
    }
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) throw new IllegalArgumentException("output dir required");
        File folder = new File(args[0]); folder.mkdirs();
        ReferenceManager rm = currentProgram.getReferenceManager();
        try (PrintWriter out = new PrintWriter(new File(folder,"state_xrefs.tsv"), "UTF-8")) {
            out.println("target\tfrom\ttype\tread\twrite\tfrom_function\tinstruction_context");
            for (long address=0x04842068L; address<=0x048420e8L; address+=4)
                target(out, rm, toAddr(String.format("%08x",address)));
            String[] extras={"0159b96c","0159ba2c","017dcd80","048350f8","04835100",
                "04835110","047d8b18","047d8b20","047d8b28","047d4df8","047d4e00","047d4e08"};
            for (String s:extras) target(out,rm,toAddr(s));
        }
        try (PrintWriter out = new PrintWriter(new File(folder,"pointer_origins.tsv"), "UTF-8")) {
            out.println("address\tfunction\tblock\tdata_type\tdata_value\traw64_hex\treferences_from");
            String[] origins={"03e2e01c","0408b1f8","04540058","0159b9c8","0159b9d0",
                "0159b9d4","0159ba20","0159ba24"};
            for (String s:origins) {
                Address a=toAddr(s);
                ghidra.program.model.listing.Data d=currentProgram.getListing().getDataContaining(a);
                ghidra.program.model.mem.MemoryBlock b=currentProgram.getMemory().getBlock(a);
                StringBuilder refs=new StringBuilder();
                for (Reference r:rm.getReferencesFrom(a)) refs.append(a(r.getToAddress())).append(':').append(r.getReferenceType()).append(';');
                out.println(s+"\t"+f(a)+"\t"+(b==null?"":safe(b.getName()))+"\t"+
                    (d==null?"":safe(d.getDataType().getName()))+"\t"+(d==null?"":safe(d.getValue()))+"\t"+
                    raw(a)+"\t"+refs);
            }
        }
        println("state-chain xrefs completed, image_base=" + a(currentProgram.getImageBase()));
    }
}
