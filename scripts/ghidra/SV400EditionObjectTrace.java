// Read-only SV400 vtable slot and edition object offsets; saved Ghidra program.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;
public class SV400EditionObjectTrace extends GhidraScript {
 String a(Address x){return x==null?"":x.toString();}
 String clean(Object x){return x==null?"":x.toString().replace('\t',' ').replace('\n',' ').replace('\r',' ');}
 String f(Address x){Function v=currentProgram.getFunctionManager().getFunctionContaining(x);return v==null?"":a(v.getEntryPoint());}
 String ctx(Address x){Instruction i=currentProgram.getListing().getInstructionContaining(x);
  if(i==null)return "";Instruction p=currentProgram.getListing().getInstructionBefore(x);
  Instruction n=currentProgram.getListing().getInstructionAfter(x);
  return clean(p)+" | "+clean(i)+" | "+clean(n);}
 void xrefs(PrintWriter o,String kind,Address target,int cap) throws Exception {
  ReferenceIterator it=currentProgram.getReferenceManager().getReferencesTo(target);int count=0;
  while(it.hasNext()){monitor.checkCancelled();Reference r=it.next();count++;
   if(count<=cap)o.println(kind+"\t"+a(target)+"\t"+a(r.getFromAddress())+"\t"+r.getReferenceType()+"\t"+f(r.getFromAddress())+"\t"+ctx(r.getFromAddress()));}
  println(kind+" "+a(target)+" refs="+count);
 }
 public void run() throws Exception {
  String[] argv=getScriptArgs();if(argv.length<1)throw new IllegalArgumentException("Output directory");
  File dir=new File(argv[0]);dir.mkdirs();
  try(PrintWriter tbl=new PrintWriter(new File(dir,"table.tsv"),"UTF-8");
      PrintWriter refs=new PrintWriter(new File(dir,"refs.tsv"),"UTF-8");
      PrintWriter fields=new PrintWriter(new File(dir,"fields.tsv"),"UTF-8");
      PrintWriter roots=new PrintWriter(new File(dir,"roots.tsv"),"UTF-8")){
   tbl.println("slot\tpointer_value\tslot_symbol\ttarget_symbol\tfunction_at_target\tblock");
   refs.println("kind\ttarget\tfrom\ttype\tfunction\tcontext");
   fields.println("root_group\tfunction\taddress\tfield\tinstruction\tcontext");
   roots.println("root_address\tstatic_pointer_value\tpointer_block\tfirst_deref_value");
   Set<Function> candidates=new LinkedHashSet<Function>();
   String[] globals={"047d8b20","047d8b28","047d4e00","047d4e08","047d4df8","047d8b18","0485a098"};
   for(String g:globals){
    Address x=toAddr(g);long value=0,deref=0;String block="";
    try{value=currentProgram.getMemory().getLong(x);Address p=toAddr(String.format("%08x",value));
      ghidra.program.model.mem.MemoryBlock b=currentProgram.getMemory().getBlock(p);
      block=b==null?"":b.getName();
      if(currentProgram.getMemory().contains(p))deref=currentProgram.getMemory().getLong(p);
    }catch(Exception ignored){}
    roots.println(g+"\t"+String.format("%016x",value)+"\t"+block+"\t"+String.format("%016x",deref));
    xrefs(refs,"GLOBAL",x,650);
    ReferenceIterator it=currentProgram.getReferenceManager().getReferencesTo(x);
    while(it.hasNext()){Reference r=it.next();Function v=currentProgram.getFunctionManager().getFunctionContaining(r.getFromAddress());
      if(v!=null)candidates.add(v);}
   }
   // 768-byte neighborhood of the .data function-pointer slot
   for(long off=-0x180;off<=0x180;off+=8){
    Address slot=toAddr(String.format("%08x",0x04540058L+off));long v=0;
    try{v=currentProgram.getMemory().getLong(slot);}catch(Exception ignored){}
    Address ptr=toAddr(String.format("%08x",v));Symbol s=currentProgram.getSymbolTable().getPrimarySymbol(slot);
    Symbol ts=currentProgram.getSymbolTable().getPrimarySymbol(ptr);
    Function tf=currentProgram.getFunctionManager().getFunctionAt(ptr);
    ghidra.program.model.mem.MemoryBlock b=currentProgram.getMemory().getBlock(slot);
    tbl.println(a(slot)+"\t"+String.format("%016x",v)+"\t"+clean(s==null?"":s.getName(true))+
      "\t"+clean(ts==null?"":ts.getName(true))+"\t"+(tf==null?"":tf.getName())+"\t"+(b==null?"":b.getName()));
    xrefs(refs,"TABLE",slot,80);
   }
   int scanned=0,hits=0; 
   for(Function fun:candidates){
    monitor.checkCancelled();
    InstructionIterator it=currentProgram.getListing().getInstructions(fun.getBody(),true);int local=0;
    while(it.hasNext()&&scanned<1200000&&local<90000){
     Instruction i=it.next();scanned++;local++;String d=clean(i);
     String match=d.contains("#0xb0bc")?"0xb0bc":d.contains("#0xb0b8")?"0xb0b8":
                  d.contains("#0x2c")?"0x2c":d.contains("#0x28")?"0x28":null;
     if(match!=null){hits++;if(hits<7000)fields.println("ROOT_XREF_FUNCTION\t"+a(fun.getEntryPoint())+
       "\t"+a(i.getAddress())+"\t"+match+"\t"+d+"\t"+ctx(i.getAddress()));}
    }
    if(scanned>=1200000)break;
   }
   println("Done functions="+candidates.size()+" scanned="+scanned+" field_candidates="+hits);
  }
 }
}
