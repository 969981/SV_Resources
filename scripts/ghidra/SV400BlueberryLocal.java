// Read-only Blueberry BP / BBQ local function inventory from verified Ghidra 12.2 project.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;
public class SV400BlueberryLocal extends GhidraScript {
 private String clean(Object x){return x==null?"":x.toString().replace('\t',' ').replace('\n',' ');}
 public void run() throws Exception {
  File out=new File(getScriptArgs()[0]);out.mkdirs();
  DecompInterface dc=new DecompInterface();dc.openProgram(currentProgram);
  int processed=0,ok=0;
  try(PrintWriter index=new PrintWriter(new File(out,"functions.tsv"),"UTF-8");
      PrintWriter calls=new PrintWriter(new File(out,"wallet_references.tsv"),"UTF-8")){
   index.println("entry\tlength\tdecompile\tkey_BP\tkey_BBQ\toffset_1c8\toffset_1cc\twriter_call\tfunc_abstract");
   calls.println("from\ttype\tcaller\tcontext");
   for(String target:new String[]{"02afa3cc","02add878","02add480","02addd90"}){
    ReferenceIterator ri=currentProgram.getReferenceManager().getReferencesTo(toAddr(target));
    while(ri.hasNext()){
     monitor.checkCancelled();Reference r=ri.next();
     Function f=currentProgram.getFunctionManager().getFunctionContaining(r.getFromAddress());
     Instruction ins=currentProgram.getListing().getInstructionContaining(r.getFromAddress());
     calls.println(r.getFromAddress()+"\t"+r.getReferenceType()+"\t"+(f==null?"":f.getEntryPoint())+
       "\t"+(ins==null?"":clean(ins)));
    }
   }
   String[][] ranges={{"02af9900","02afae00"},{"02adcc00","02ae1500"}};
   for(String[] range:ranges){
    long end=Long.parseLong(range[1],16);
    FunctionIterator fs=currentProgram.getFunctionManager().getFunctions(toAddr(range[0]),true);
    while(fs.hasNext()){
     monitor.checkCancelled();
     Function f=fs.next();
     if(f.getEntryPoint().getOffset()>=end)break;
     if(++processed>140)break;
     String name=f.getEntryPoint().toString();
     DecompileResults dr=dc.decompileFunction(f,8,monitor);
     String c=(dr!=null&&dr.decompileCompleted()&&dr.getDecompiledFunction()!=null)?
       dr.getDecompiledFunction().getC():"";
     boolean bp=c.contains("0x66a33824"),bbq=c.contains("0x7bf02dbe");
     boolean countA=c.contains("+ 0x1c8"),countB=c.contains("+ 0x1cc");
     boolean writer=c.contains("FUN_02afa3cc");
     String status=c.isEmpty()?"FAIL":"OK";
     String abstractHint=(bp?"BP_BLOCK ":"")+(bbq?"BBQ_BLOCK ":"")+
       (countA||countB?"QUEST_COUNTER ":"")+(writer?"BP_WRITER_CALL ":"");
     index.println(name+"\t"+f.getBody().getNumAddresses()+"\t"+status+"\t"+bp+"\t"+bbq+
       "\t"+countA+"\t"+countB+"\t"+writer+"\t"+abstractHint);
     if(!c.isEmpty()){
      File file=new File(out,"c/"+name+".c");file.getParentFile().mkdirs();
      try(PrintWriter cw=new PrintWriter(file,"UTF-8")){cw.println(c);}
      ok++;
     }
    }
   }
   println("Blueberry native inventory inspected="+processed+" decompiled="+ok);
  }finally{dc.dispose();}
 }
}
