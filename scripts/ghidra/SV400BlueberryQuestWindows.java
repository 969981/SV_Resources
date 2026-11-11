// Read-only raw ARM64 windows around the two observed 0x7BF02DBE SCBlock references.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;
public class SV400BlueberryQuestWindows extends GhidraScript {
 String safe(Object o){return o==null?"":o.toString().replace('\t',' ').replace('\n',' ');}
 String bytes(byte[] b){StringBuilder o=new StringBuilder();for(byte v:b)o.append(String.format("%02x",v&0xff));return o.toString();}
 public void run()throws Exception{
  File root=new File(getScriptArgs()[0]);root.mkdirs();
  try(PrintWriter out=new PrintWriter(new File(root,"quest_key_windows.tsv"),"UTF-8");
      PrintWriter summary=new PrintWriter(new File(root,"identity.tsv"),"UTF-8")){
   out.println("anchor\taddress\tbytes\tmnemonic\tflow\tfunction_entry\tcomment");
   summary.println("game\t"+currentProgram.getName());
   summary.println("image_base\t"+currentProgram.getImageBase());
   for(long anchor: new long[]{0x02ad81ccL,0x02ad8918L}){
    Address center=toAddr(String.format("%08x",anchor));
    Function contain=currentProgram.getFunctionManager().getFunctionContaining(center);
    summary.println(String.format("0x%x",anchor)+"\t"+
      (contain==null?"NO_FUNCTION_BOUNDARY":contain.getEntryPoint()));
    long start=anchor-0x600,end=anchor+0x800;
    InstructionIterator it=currentProgram.getListing().getInstructions(toAddr(String.format("%08x",start)),true);
    while(it.hasNext()){
     monitor.checkCancelled();Instruction x=it.next();
     if(x.getAddress().getOffset()>end)break;
     Function f=currentProgram.getFunctionManager().getFunctionContaining(x.getAddress());
     StringBuilder refs=new StringBuilder();
     for(Reference ref: currentProgram.getReferenceManager().getReferencesFrom(x.getAddress())){
       if(ref.getReferenceType().isCall()||ref.getReferenceType().isJump())
        refs.append(ref.getReferenceType()).append(":").append(ref.getToAddress()).append(",");
     }
     out.println(String.format("0x%x",anchor)+"\t"+x.getAddress()+"\t"+bytes(x.getBytes())+"\t"+
       safe(x)+"\t"+x.getFlowType()+"\t"+(f==null?"":f.getEntryPoint())+"\t"+refs);
    }
   }
  }
  println("Blueberry quest block windows completed");
 }
}
