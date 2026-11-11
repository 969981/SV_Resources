// Recover temporary BBQ quest routines from saved Ghidra project, rollback on exit.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.SourceType;
import java.io.*;
public class SV400BlueberryQuestRecover extends GhidraScript {
 public void run() throws Exception {
  File dir=new File(getScriptArgs()[0]);dir.mkdirs();
  int tx=currentProgram.startTransaction("Temporary quest function recovery");
  DecompInterface dec=new DecompInterface();
  try(PrintWriter log=new PrintWriter(new File(dir,"recovered.tsv"),"UTF-8")){
   log.println("entry\tend\tcreated\tstatus\terror");
   dec.openProgram(currentProgram);
   for(String[] span:new String[][]{{"02ad814c","02ad8898"},{"02ad889c","02ad8b84"}}){
    boolean created=false;String status="",error="";
    try{
     Address start=toAddr(span[0]);
     Function f=currentProgram.getFunctionManager().getFunctionAt(start);
     if(f==null){
      f=currentProgram.getFunctionManager().createFunction("TEMP_BBQ_"+span[0],
       currentProgram.getGlobalNamespace(),start,
       new AddressSet(start,toAddr(span[1])),SourceType.ANALYSIS);
      created=true;
     }
     if(f==null){status="NO_FUNCTION";}
     else{
      DecompileResults r=dec.decompileFunction(f,75,monitor);
      if(r!=null&&r.decompileCompleted()&&r.getDecompiledFunction()!=null){
       status="OK";
       try(PrintWriter out=new PrintWriter(new File(dir,span[0]+".c"),"UTF-8")){
        out.print(r.getDecompiledFunction().getC());
       }
      }else{status="FAILED";error=r==null?"null":r.getErrorMessage();}
     }
    }catch(Exception e){status="EXCEPTION";error=e.toString();}
    log.println(span[0]+"\t"+span[1]+"\t"+created+"\t"+status+"\t"+error.replace('\n',' '));
    println("BQ recovery "+span[0]+" "+status+" "+error);
   }
  }finally{dec.dispose();currentProgram.endTransaction(tx,false);}
  println("Changes rolled back");
 }
}
