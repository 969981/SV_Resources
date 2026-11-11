// SV400 saved-Ghidra read-only probe: whole-program literal-offset and virtual-call candidates.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import java.io.*;
public class SV400EditionIndirectCandidates extends GhidraScript {
 String s(Object a){return a==null?"":a.toString().replace('\t',' ').replace('\n',' ').replace('\r',' ');}
 String f(Address a){Function x=currentProgram.getFunctionManager().getFunctionContaining(a);return x==null?"":x.getEntryPoint().toString();}
 String ctx(Instruction i){
  Listing l=currentProgram.getListing();Instruction b=l.getInstructionBefore(i.getAddress());Instruction n=l.getInstructionAfter(i.getAddress());
  Instruction n2=n==null?null:l.getInstructionAfter(n.getAddress());
  Instruction n3=n2==null?null:l.getInstructionAfter(n2.getAddress());
  return s(b)+" | "+s(i)+" | "+s(n)+" | "+s(n2)+" | "+s(n3);
 }
 public void run() throws Exception {
  String[] argv=getScriptArgs();if(argv.length<1)throw new IllegalArgumentException("output dir");
  File dir=new File(argv[0]);dir.mkdirs();
  try(PrintWriter out=new PrintWriter(new File(dir,"indirect_candidates.tsv"),"UTF-8");
      PrintWriter summary=new PrintWriter(new File(dir,"summary.tsv"),"UTF-8")){
   out.println("kind\taddress\tfunction\tinstruction\tcontext\tlimit_note");
   int insCount=0, versionOffset=0, vtableOffset=0, blr=0;
   InstructionIterator it=currentProgram.getListing().getInstructions(true);
   while(it.hasNext()) {
    if(insCount%150000==0)monitor.checkCancelled();
    Instruction i=it.next();insCount++;
    String d=s(i);
    String kind=null;
    if(d.contains("#0xb0bc")||d.contains("#0xb0b8")){kind="LARGE_EDITION_FIELD_OFFSET";versionOffset++;}
    else if(d.contains("#0x88")&&("ldr".equals(i.getMnemonicString())||"add".equals(i.getMnemonicString()))){kind="VTABLE_OFFSET_88_CANDIDATE";vtableOffset++;}
    if(kind!=null) {
     int total="LARGE_EDITION_FIELD_OFFSET".equals(kind)?versionOffset:vtableOffset;
     if(total<=25000)out.println(kind+"\t"+i.getAddress()+"\t"+f(i.getAddress())+"\t"+d+"\t"+ctx(i)+"\t"+(total>25000?"TRUNCATED":""));
    }
    if(insCount%4000000==0)println("scanned="+insCount+" large_offset="+versionOffset+" vtable_88="+vtableOffset);
   }
   summary.println("program\t"+currentProgram.getName());
   summary.println("image_base\t"+currentProgram.getImageBase());
   summary.println("instruction_count\t"+insCount);
   summary.println("large_offset_imm_hits\t"+versionOffset);
   summary.println("vtable_offset_88_candidate_hits\t"+vtableOffset);
   summary.println("note\tAddress offset matches are candidates; prove pointer provenance before dispatch or object-type claims");
   println("Indirect candidates complete scanned="+insCount+" B_off="+versionOffset+" vtable_off="+vtableOffset);
  }
 }
}
