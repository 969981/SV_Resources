// Static scan for Blueberry save keys: 0x66A33824 and 0x7BF02DBE.
// Uses current saved Ghidra 12.2 Program; never changes program or reruns analysis.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import java.io.*;
import java.util.*;
public class SV400BlueberryKeyScan extends GhidraScript {
 String fmt(Object x){return x==null?"":x.toString().replace('\t',' ').replace('\n',' ');}
 String owner(Address at){Function f=currentProgram.getFunctionManager().getFunctionContaining(at);
  return f==null?"":f.getEntryPoint().toString();}
 String region(Instruction ins) {
  Listing l=currentProgram.getListing();
  ArrayList<Instruction> pre=new ArrayList<Instruction>();Instruction x=ins;
  for(int i=0;i<9;i++){Instruction p=l.getInstructionBefore(x.getAddress());if(p==null)break;pre.add(p);x=p;}
  StringBuilder sb=new StringBuilder();
  for(int i=pre.size()-1;i>=0;i--)sb.append(pre.get(i).getAddress()).append(" ").append(fmt(pre.get(i))).append(" | ");
  x=ins;
  for(int i=0;i<12&&x!=null;i++){sb.append(x.getAddress()).append(" ").append(fmt(x)).append(" | ");
   x=l.getInstructionAfter(x.getAddress());}
  return sb.toString();
 }
 public void run()throws Exception {
  File dir=new File(getScriptArgs()[0]);dir.mkdirs();
  try(PrintWriter out=new PrintWriter(new File(dir,"key_candidates.tsv"),"UTF-8");
      PrintWriter summary=new PrintWriter(new File(dir,"summary.tsv"),"UTF-8")){
   out.println("kind\taddress\tfunction\tassembly\tcontext");
   long total=0,keyBBQ=0,keyBP=0;InstructionIterator it=currentProgram.getListing().getInstructions(true);
   while(it.hasNext()){
    total++;if(total%250000==0)monitor.checkCancelled();
    Instruction in=it.next();String d=fmt(in).toLowerCase(Locale.ROOT);
    boolean bbq=(d.contains("0x7bf0")||d.contains("0x2dbe")||d.contains("0x7bf02dbe"));
    boolean bp=(d.contains("0x66a3")||d.contains("0x3824")||d.contains("0x66a33824"));
    if(bbq){keyBBQ++;if(keyBBQ<=800)out.println("BBQ_RECORD_KEY_HALFWORD\t"+in.getAddress()+"\t"+owner(in.getAddress())+"\t"+d+"\t"+region(in));}
    if(bp){keyBP++;if(keyBP<=800)out.println("BP_WALLET_KEY_HALFWORD\t"+in.getAddress()+"\t"+owner(in.getAddress())+"\t"+d+"\t"+region(in));}
   }
   summary.println("program\t"+currentProgram.getName());
   summary.println("instructions\t"+total);
   summary.println("bbq_halfword_instruction_hits\t"+keyBBQ);
   summary.println("bp_halfword_instruction_hits\t"+keyBP);
   summary.println("warning\tLiteral halfwords are candidates; check both halves in same register and actual caller dataflow.");
   println("Blueberry key scan complete ins="+total+" bbq="+keyBBQ+" bp="+keyBP);
  }
 }
}
