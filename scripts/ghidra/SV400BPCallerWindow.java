// SV 4.0.0 read-only BP credit caller xrefs and ARM64 windows.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
public class SV400BPCallerWindow extends GhidraScript {
 public void run()throws Exception {
  File out=new File(getScriptArgs()[0]);out.mkdirs();
  try(PrintWriter p=new PrintWriter(new File(out,"bp_caller_window.tsv"),"UTF-8");
      PrintWriter xrefs=new PrintWriter(new File(out,"bp_references.tsv"),"UTF-8")){
   p.println("anchor\taddress\tbytes\tinstruction\tfunction\tflows");
   for(long anchor:new long[]{0x009209c0L}){
    long start=anchor-0x300,end=anchor+0x400;
    InstructionIterator it=currentProgram.getListing().getInstructions(toAddr(String.format("%08x",start)),true);
    while(it.hasNext()){
     monitor.checkCancelled();Instruction ins=it.next();
     if(ins.getAddress().getOffset()>end)break;
     Function fn=currentProgram.getFunctionManager().getFunctionContaining(ins.getAddress());
     StringBuilder bytes=new StringBuilder();for(byte b:ins.getBytes())bytes.append(String.format("%02x",b&255));
     StringBuilder flows=new StringBuilder();
     for(Reference r:currentProgram.getReferenceManager().getReferencesFrom(ins.getAddress()))
      if(r.getReferenceType().isCall()||r.getReferenceType().isJump())flows.append(r.getReferenceType()).append(':').append(r.getToAddress()).append(';');
     p.println(String.format("%08x",anchor)+"\t"+ins.getAddress()+"\t"+bytes+"\t"+
      ins.toString().replace('\t',' ')+"\t"+(fn==null?"":fn.getEntryPoint())+"\t"+flows);
    }
   }
   xrefs.println("target\tfrom\ttype\tcaller_entry");
   for(String t:new String[]{"02afa2c4","02afa3cc","02add878","02ad814c","02ad889c"}){
    ReferenceIterator it=currentProgram.getReferenceManager().getReferencesTo(toAddr(t));int count=0;
    while(it.hasNext()){
     monitor.checkCancelled();Reference r=it.next();Function f=currentProgram.getFunctionManager().getFunctionContaining(r.getFromAddress());
     if(++count<=200)xrefs.println(t+"\t"+r.getFromAddress()+"\t"+r.getReferenceType()+"\t"+
       (f==null?"":f.getEntryPoint()));
    }
    println("BP caller "+t+" refs="+count);
   }
  }
 }
}
