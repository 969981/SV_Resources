// R17 Ghidra 12.2 targeted original SV400 code-reference research.
// This helper must never assert native C++ ABI from a class string.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
public class SV400BindingTrace extends GhidraScript {
  @Override protected void run() throws Exception {
    Address a=currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(0x13fe21cL);
    println("SV400 R17 target original class-string xref: "+a);
  }
}
