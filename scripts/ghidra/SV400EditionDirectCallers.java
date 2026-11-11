// Ghidra 12.2 read-only exact callers of edition resolver and class constructor.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;
public class SV400EditionDirectCallers extends GhidraScript {
 public void run()throws Exception{
  File root=new File(getScriptArgs()[0]);root.mkdirs();
  DecompInterface d=new DecompInterface();d.openProgram(currentProgram);
  try(PrintWriter p=new PrintWriter(new File(root,"callers.tsv"),"UTF-8")){
   p.println("target\tfrom\ttype\tcaller\tcontext");
   for(String t:new String[]{"00e55738","0175d004","01dad39c","0159b96c"}){
    ReferenceIterator refs=currentProgram.getReferenceManager().getReferencesTo(toAddr(t));
    HashSet<String> seen=new HashSet<String>();int count=0,attempts=0;
    while(refs.hasNext()){
     monitor.checkCancelled();Reference r=refs.next();count++;
     Function f=currentProgram.getFunctionManager().getFunctionContaining(r.getFromAddress());
     String name=f==null?"":f.getEntryPoint().toString();
     Instruction x=currentProgram.getListing().getInstructionContaining(r.getFromAddress());
     StringBuilder ctx=new StringBuilder();
     if(x!=null){
      for(int n=0;n<6;n++){Instruction q=currentProgram.getListing().getInstructionBefore(x.getAddress());if(q==null)break;x=q;}
      for(int n=0;n<18&&x!=null;n++){ctx.append(x.toString()).append(" | ");x=currentProgram.getListing().getInstructionAfter(x.getAddress());}
     }
     if(count<=250)p.println(t+"\t"+r.getFromAddress()+"\t"+r.getReferenceType()+"\t"+name+"\t"+ctx);
     if(f==null||!r.getReferenceType().isCall()||seen.contains(name)||attempts>=12)continue;
     seen.add(name);attempts++;
     DecompileResults z=d.decompileFunction(f,15,monitor);
     if(z!=null&&z.decompileCompleted()&&z.getDecompiledFunction()!=null){
      File out=new File(root,"c/"+t+"/"+name+".c");out.getParentFile().mkdirs();
      try(PrintWriter w=new PrintWriter(out,"UTF-8")){w.print(z.getDecompiledFunction().getC());}
     }
    }
    println("target="+t+" xrefs="+count+" caller_C_attempts="+attempts);
   }
  }finally{d.dispose();}
 }
}
