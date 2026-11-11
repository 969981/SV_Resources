// Targeted read-only registration/consumer evidence for SV 4.0.0 BP/BBQ.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.util.*;
import java.util.regex.*;

public class SV400BPBindingBridge extends GhidraScript {
    private static final long BASE = 0x00100000L;
    private static final long[] TARGETS = {
        0x00920970L, 0x00920A60L, // Lua BP SET / GET wrappers; Ghidra VAs
        0x02AFA3CCL, 0x02AFA2C4L, // native balance set / get
        0x02ADD878L, 0x02ADD480L, // quest result and immediate caller
        0x02AD814CL, 0x02AD889CL  // quest record serializer/deserializer
    };
    private final Map<Long, String> labels = new HashMap<>();
    private String hx(long value) { return String.format("0x%08x", value); }
    private String clean(String s) { return s.replace("\\t", " ").replace("\\r", " ").replace("\\n", " "); }
    private String functionOf(Address a) {
        Function f = currentProgram.getFunctionManager().getFunctionContaining(a);
        return f == null ? "" : f.getEntryPoint().toString();
    }
    private String asciiAt(Address a, int radius) {
        try {
            long pos = Math.max(0, a.getOffset() - radius);
            Address first = toAddr(pos);
            byte[] bs = new byte[radius * 2 + 12];
            int n = currentProgram.getMemory().getBytes(first, bs);
            if (n < 1) return "";
            String s = new String(bs, 0, n, StandardCharsets.ISO_8859_1);
            Matcher m = Pattern.compile("[A-Za-z0-9_./:$-]{4,}").matcher(s);
            StringBuilder out = new StringBuilder();
            while (m.find()) {
                if (out.length() > 0) out.append(" | ");
                out.append(m.group());
                if (out.length() > 550) break;
            }
            return clean(out.toString());
        } catch (Exception ex) { return ""; }
    }
    private byte[] le(long v, int length) {
        byte[] out = new byte[length];
        for (int i = 0; i < length; i++) out[i] = (byte)((v >>> (8*i)) & 0xffL);
        return out;
    }
    private void refs(PrintWriter w) throws Exception {
        w.println("target\tkind\tfrom\ttype\tfrom_function\tfrom_instruction_or_data\tnearby_ascii");
        ReferenceManager rm = currentProgram.getReferenceManager();
        for (long target : TARGETS) {
            monitor.checkCancelled();
            Address tgt = toAddr(target);
            ReferenceIterator it = rm.getReferencesTo(tgt);
            int count = 0;
            while (it.hasNext()) {
                Reference r = it.next();
                if (++count > 1000) break;
                Address from = r.getFromAddress();
                Instruction ins = currentProgram.getListing().getInstructionContaining(from);
                Data dat = currentProgram.getListing().getDataContaining(from);
                String detail = ins != null ? ins.toString() :
                    (dat != null ? dat.getDataType().getName() : "");
                w.println(hx(target)+"\tghidra_xref\t"+from+"\t"+r.getReferenceType()+
                    "\t"+functionOf(from)+"\t"+clean(detail)+"\t"+asciiAt(from,80));
            }
            println("REFS "+hx(target)+" count="+count);
        }
    }
    private void patterns(PrintWriter w) throws Exception {
        w.println("target\tencoding\tfound_at\tblock\tdata_type\tfrom_function\tnearby_ascii");
        Memory mem = currentProgram.getMemory();
        MemoryBlock[] blocks = mem.getBlocks();
        for (long target: TARGETS) {
            for (int width: new int[]{8,4}) {
                for (String variant: new String[]{"ghidra_va", "main_rva"}) {
                    monitor.checkCancelled();
                    long search = variant.equals("ghidra_va") ? target : target-BASE;
                    byte[] pat = le(search,width);
                    int hits=0;
                    for (MemoryBlock b: blocks) {
                        if (!b.isInitialized()) continue;
                        Address cur=b.getStart();
                        while (cur != null && cur.compareTo(b.getEnd()) <= 0) {
                            monitor.checkCancelled();
                            Address a=mem.findBytes(cur,pat,null,true,monitor);
                            if (a==null || !b.contains(a)) break;
                            Data d = currentProgram.getListing().getDataContaining(a);
                            w.println(hx(target)+"\t"+variant+"_le"+(width*8)+"\t"+a+
                                "\t"+b.getName()+"\t"+(d==null ? "":d.getDataType().getName())+
                                "\t"+functionOf(a)+"\t"+asciiAt(a,96));
                            if (++hits >= 150) break;
                            cur=a.add(1);
                        }
                    }
                    println("PTR "+hx(target)+" "+variant+" "+(width*8)+" matches="+hits);
                }
            }
        }
    }
    private void tokenStrings(PrintWriter w) throws Exception {
        w.println("token\taddress\tblock\tcontext");
        Memory mem = currentProgram.getMemory();
        String[] terms={"blueberry","bbq","battlepoint","questreward","questpoint"};
        int count=0;
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized()) continue;
            Address scan=b.getStart();
            byte[] buf = new byte[1024*1024];
            while (scan != null && scan.compareTo(b.getEnd()) <= 0) {
                monitor.checkCancelled();
                long remaining = b.getEnd().getOffset() - scan.getOffset() + 1;
                int n = (int)Math.min(buf.length, remaining);
                if (n<=0) break;
                byte[] cur = n==buf.length ? buf : new byte[n];
                int read = mem.getBytes(scan,cur);
                if (read<=0) break;
                String val = new String(cur,0,read,StandardCharsets.ISO_8859_1).toLowerCase(Locale.ROOT);
                for (String term:terms) {
                    int at=val.indexOf(term);
                    while(at>=0 && count<1000) {
                        Address found=scan.add(at);
                        w.println(term+"\t"+found+"\t"+b.getName()+"\t"+asciiAt(found,80));
                        count++;
                        at=val.indexOf(term,at+term.length());
                    }
                }
                if(count>=1000) break;
                scan=scan.add(read);
            }
            if(count>=1000) break;
        }
        println("TOKEN hits="+count);
    }
    private void windows(PrintWriter w) throws Exception {
        w.println("anchor\taddr\topcode\ttext\tfn\tflows");
        long[] anchors={0x00920970L,0x00920A60L,0x02ADD480L,0x02ADD878L};
        for (long anchor: anchors) {
            Address start=toAddr(anchor-0x180);
            InstructionIterator it = currentProgram.getListing().getInstructions(start,true);
            int emitted=0;
            while(it.hasNext()) {
                monitor.checkCancelled();
                Instruction ins=it.next();
                if(ins.getAddress().getOffset()>anchor+0x300 || ++emitted>350)break;
                StringBuilder flow=new StringBuilder();
                for(Reference r: currentProgram.getReferenceManager().getReferencesFrom(ins.getAddress())){
                    if(r.getReferenceType().isCall()||r.getReferenceType().isJump())
                        flow.append(r.getReferenceType()).append(":").append(r.getToAddress()).append(";");
                }
                w.println(hx(anchor)+"\t"+ins.getAddress()+"\t"+ins.getMnemonicString()+
                          "\t"+clean(ins.toString())+"\t"+functionOf(ins.getAddress())+
                          "\t"+flow);
            }
        }
    }
    public void run() throws Exception {
        File out=new File(getScriptArgs()[0]);out.mkdirs();
        labels.put(TARGETS[0],"bp_set_lua"); labels.put(TARGETS[1],"bp_get_lua");
        try(PrintWriter w=new PrintWriter(new File(out,"bp_registration_refs.tsv"),"UTF-8")){refs(w);}
        try(PrintWriter w=new PrintWriter(new File(out,"bp_pointer_candidates.tsv"),"UTF-8")){patterns(w);}
        try(PrintWriter w=new PrintWriter(new File(out,"bp_named_strings.tsv"),"UTF-8")){tokenStrings(w);}
        try(PrintWriter w=new PrintWriter(new File(out,"bp_quest_windows.tsv"),"UTF-8")){windows(w);}
        println("BP binding bridge evidence exported (read-only; no rename or DB commit).");
    }
}
