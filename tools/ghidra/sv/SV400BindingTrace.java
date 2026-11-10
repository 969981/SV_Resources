// R17: read-only Ghidra 12.2 original SV400 class-name reference analysis.
// Never infer C++ ABI, CFunction pointer or original registration solely from a string.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.nio.charset.StandardCharsets;

public class SV400BindingTrace extends GhidraScript {
  boolean match(Address a,int... expected){
    try{for(int j=0;j<expected.length;j++)
      if((currentProgram.getMemory().getByte(a.add(j))&255)!=expected[j])return false;
      return true;
    }catch(Exception e){return false;}
  }
  Address root() throws Exception {
    Address absolute=currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(0x13fe21cL);
    Address rebased=currentProgram.getImageBase().add(0x13fe21cL);
    if(match(absolute,0x21,0x38,0x01,0xd0,0x21,0x2c,0x2f,0x91))return absolute;
    if(match(rebased,0x21,0x38,0x01,0xd0,0x21,0x2c,0x2f,0x91))return rebased;
    throw new Exception("ELF image base mismatch: no original ADRP/ADD machine words");
  }
  @Override protected void run()throws Exception {
    String[] args=getScriptArgs();
    if(args.length!=2||(!args[1].equals("scarlet_main")&&!args[1].equals("violet_main")))
      throw new Exception("expected <out.txt> <scarlet_main|violet_main>");
    Address code=root(),name=code.add(0x3b04bcbL-0x13fe21cL);
    byte[] token="cE35B3EB3".getBytes(StandardCharsets.US_ASCII);
    for(int i=0;i<token.length;i++)
      if(currentProgram.getMemory().getByte(name.add(i))!=token[i])
        throw new Exception("Original native class string location mismatch");
    File out=new File(args[0]).getAbsoluteFile();
    out.getParentFile().mkdirs();
    try(PrintWriter pw=new PrintWriter(new OutputStreamWriter(
         new FileOutputStream(out),StandardCharsets.UTF_8))){
      pw.println("KIND=R17_GHIDRA12_ORIGINAL_SV400_CLASS_STRING_REF");
      pw.println("GAME="+args[1]);
      pw.println("IMAGE_BASE="+currentProgram.getImageBase());
      pw.println("CODE_XREF_RVA=0x13fe21c");
      pw.println("CODE_XREF_ADDRESS="+code);
      pw.println("CODE_WORDS=D0013821 912F2C21");
      pw.println("CLASS_LITERAL_RVA=0x3b04bcb");
      pw.println("CLASS_LITERAL_ADDRESS="+name);
      pw.println("CLASS_NAME=cE35B3EB3");
      int n=0;
      for(Reference ref:currentProgram.getReferenceManager().getReferencesTo(name)){
        pw.println("DATA_XREF="+ref.getFromAddress()+" TYPE="+ref.getReferenceType());
        if(++n>=100)break;
      }
      pw.println("GHIDRA_REFS_TO_CLASS_LITERAL="+n);
      Function f=currentProgram.getFunctionManager().getFunctionContaining(code);
      if(f==null){
        pw.println("FUNCTION_STATUS=NO_GHIDRA_IDENTIFIED_FUNCTION");
        pw.println("DECOMPILATION_STATUS=NOT_ATTEMPTED");
      }else{
        pw.println("FUNCTION_STATUS=GHIDRA_FUNCTION_CONTAINS_CLASS_STRING_REF_ONLY");
        pw.println("FUNCTION_ENTRY="+f.getEntryPoint());
        pw.println("FUNCTION_NAME="+f.getName());
        pw.println("FUNCTION_BODY="+f.getBody().getMinAddress()+".."+f.getBody().getMaxAddress());
        pw.println("FUNCTION_SIGNATURE="+f.getSignature());
        DecompInterface d=new DecompInterface();
        try{
          if(!d.openProgram(currentProgram))pw.println("DECOMPILATION_STATUS=OPEN_FAILED");
          else {
            DecompileResults r=d.decompileFunction(f,45,monitor);
            if(r!=null&&r.decompileCompleted()&&r.getDecompiledFunction()!=null){
              String c=r.getDecompiledFunction().getC();
              pw.println("DECOMPILATION_STATUS=GHIDRA_C_PSEUDOCODE_ONLY");
              pw.println("DECOMPILED_C_BEGIN");
              pw.println(c.substring(0,Math.min(c.length(),25000)));
              pw.println("DECOMPILED_C_END");
            }else pw.println("DECOMPILATION_STATUS="+(r==null?"NULL":r.getErrorMessage()));
          }
        }catch(Exception e){pw.println("DECOMPILATION_STATUS=EXCEPTION "+e);}
        finally{d.dispose();}
      }
      pw.println("INSTRUCTIONS_BEGIN");
      Listing listing=currentProgram.getListing();
      Instruction ins=listing.getInstructionAfter(code.subtract(0x100));
      int steps=0;
      while(ins!=null&&ins.getAddress().compareTo(code.add(0x1a0))<=0&&steps++<220){
        pw.print(ins.getAddress()+" "+ins.getMnemonicString()+" "+ins);
        if(ins.getFlowType().isCall()||ins.getFlowType().isJump()){
          pw.print(" FLOWS=");
          for(Address t:ins.getFlows())pw.print(t+",");
        }
        pw.println();
        ins=ins.getNext();
      }
      pw.println("INSTRUCTIONS_END");
      pw.println("CLOSURE_ENTRY_STATUS=NOT_RESOLVED");
      pw.println("CPP_ABI_STATUS=NOT_RESOLVED");
      pw.println("GAME_RUNTIME_STATUS=NOT_OBSERVED");
    }
    println("R17 SV400 Ghidra verified original "+args[1]+" xref "+code);
  }
}