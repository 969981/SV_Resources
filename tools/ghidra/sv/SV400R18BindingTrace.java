// R18 targeted Ghidra recovery for the original SV 4.0.0 native Lua binding path.
// This is static ELF analysis only. It does not claim a live CClosure or guest ABI.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.nio.charset.StandardCharsets;

public class SV400R18BindingTrace extends GhidraScript {
  private Address rva(long value) {
    return currentProgram.getImageBase().add(value);
  }

  private String hex(long value) {
    return String.format("0x%X", value);
  }

  private String bytes(Address a, int count) {
    try {
      byte[] data = new byte[count];
      currentProgram.getMemory().getBytes(a, data);
      StringBuilder out = new StringBuilder();
      for (byte b : data) out.append(String.format("%02X", b & 255));
      return out.toString();
    } catch (Exception e) {
      return "UNREADABLE:" + e.getClass().getSimpleName();
    }
  }

  private void inspectTarget(PrintWriter pw, DecompInterface decomp,
                             String name, long offset, int window,
                             boolean wantC) throws Exception {
    Address a = rva(offset);
    pw.println();
    pw.println("R18_TARGET_BEGIN=" + name);
    pw.println("R18_TARGET_RVA=" + hex(offset));
    pw.println("R18_TARGET_ADDRESS=" + a);
    pw.println("R18_TARGET_BYTES_16=" + bytes(a, 16));

    Function f = currentProgram.getFunctionManager().getFunctionContaining(a);
    if (f == null) {
      try {
        disassemble(a);
        f = createFunction(a, "R18_" + name);
      } catch (Exception e) {
        pw.println("R18_TARGET_FUNCTION_STATUS=NOT_CREATED:" +
                   e.getClass().getSimpleName() + ":" + e.getMessage());
      }
    }

    if (f == null) {
      pw.println("R18_TARGET_FUNCTION_STATUS=NO_GHIDRA_FUNCTION");
    } else {
      pw.println("R18_TARGET_FUNCTION_STATUS=FOUND");
      pw.println("R18_TARGET_FUNCTION_ENTRY=" + f.getEntryPoint());
      pw.println("R18_TARGET_FUNCTION_ENTRY_RVA=" +
                 hex(f.getEntryPoint().subtract(currentProgram.getImageBase())));
      pw.println("R18_TARGET_FUNCTION_BODY=" +
                 f.getBody().getMinAddress() + ".." + f.getBody().getMaxAddress());
      pw.println("R18_TARGET_FUNCTION_SIGNATURE=" + f.getSignature());
      if (wantC) {
        try {
          DecompileResults result = decomp.decompileFunction(f, 90, monitor);
          if (result != null && result.decompileCompleted() &&
              result.getDecompiledFunction() != null) {
            String c = result.getDecompiledFunction().getC();
            pw.println("R18_TARGET_DECOMPILATION_STATUS=GHIDRA_C_PSEUDOCODE");
            pw.println("R18_TARGET_C_BEGIN");
            pw.println(c.substring(0, Math.min(c.length(), 50000)));
            pw.println("R18_TARGET_C_END");
          } else {
            pw.println("R18_TARGET_DECOMPILATION_STATUS=" +
                       (result == null ? "NULL" : result.getErrorMessage()));
          }
        } catch (Exception e) {
          pw.println("R18_TARGET_DECOMPILATION_STATUS=EXCEPTION:" +
                     e.getClass().getSimpleName() + ":" + e.getMessage());
        }
      } else {
        pw.println("R18_TARGET_DECOMPILATION_STATUS=SKIPPED_HANDLER_BLOCK");
      }
    }

    Listing listing = currentProgram.getListing();
    Address start = a.subtract(0x20);
    Address end = a.add(window);
    Instruction ins = listing.getInstructionAt(start);
    if (ins == null) ins = listing.getInstructionAfter(start);
    pw.println("R18_TARGET_ASSEMBLY_BEGIN");
    int count = 0;
    while (ins != null && ins.getAddress().compareTo(end) <= 0 && count++ < 220) {
      pw.print(ins.getAddress() + " " + ins.getMnemonicString() + " " + ins);
      if (ins.getFlowType().isCall() || ins.getFlowType().isJump()) {
        pw.print(" FLOWS=");
        for (Address target : ins.getFlows()) pw.print(target + ",");
      }
      pw.println();
      ins = ins.getNext();
    }
    pw.println("R18_TARGET_ASSEMBLY_END");
    pw.println("R18_TARGET_END=" + name);
  }

  @Override
  protected void run() throws Exception {
    String[] args = getScriptArgs();
    if (args.length != 2 ||
        (!args[1].equals("scarlet_main") && !args[1].equals("violet_main"))) {
      throw new Exception("expected <out.txt> <scarlet_main|violet_main>");
    }

    File out = new File(args[0]).getAbsoluteFile();
    out.getParentFile().mkdirs();
    DecompInterface decomp = new DecompInterface();
    try {
      if (!decomp.openProgram(currentProgram))
        throw new Exception("DecompInterface.openProgram failed");

      try (PrintWriter pw = new PrintWriter(new OutputStreamWriter(
          new FileOutputStream(out), StandardCharsets.UTF_8))) {
        pw.println("KIND=SV400_R18_TARGETED_NATIVE_LUA_BINDING_GHIDRA");
        pw.println("GAME=" + args[1]);
        pw.println("IMAGE_BASE=" + currentProgram.getImageBase());
        pw.println("RUNTIME_STATUS=NOT_OBSERVED");
        pw.println("CPP_ABI_STATUS=NOT_RESOLVED");
        pw.println("CLOSURE_LAYOUT_STATUS=NOT_RESOLVED");

        inspectTarget(pw, decomp, "native_wrapper_f558733FC", 0x1959e40L, 0x220, true);
        inspectTarget(pw, decomp, "lua_stack_reader_index1", 0xb41a10L, 0x180, true);
        inspectTarget(pw, decomp, "lua_stack_reader_index2", 0xb92df0L, 0x180, true);
        inspectTarget(pw, decomp, "lua_precall_candidate", 0x278b0L, 0x220, true);
        inspectTarget(pw, decomp, "other_same_name_wrapper", 0x194e910L, 0x220, true);
        inspectTarget(pw, decomp, "class_registration_callback", 0x1600050L, 0x180, true);
        inspectTarget(pw, decomp, "class_registration_callee", 0xe7d200L, 0x220, true);
        inspectTarget(pw, decomp, "wrapper_slow_path", 0x1959fb4L, 0x180, true);
        inspectTarget(pw, decomp, "lua_SELF_handler_block", 0x42088L, 0x220, false);
        inspectTarget(pw, decomp, "lua_CALL_handler_block", 0x4487cL, 0x280, false);
        inspectTarget(pw, decomp, "lua_CLOSURE_handler_block", 0x453fcL, 0x220, false);

        Address slot = rva(0x46ddf30L);
        pw.println();
        pw.println("R18_GLOBAL_FUNCTION_POINTER_SLOT_RVA=0x46DDF30");
        pw.println("R18_GLOBAL_FUNCTION_POINTER_SLOT_ADDRESS=" + slot);
        pw.println("R18_GLOBAL_FUNCTION_POINTER_SLOT_BYTES_32=" + bytes(slot, 32));
        ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(slot);
        int refCount = 0;
        while (refs.hasNext() && refCount++ < 100) {
          Reference ref = refs.next();
          pw.println("R18_GLOBAL_SLOT_REF=" + ref.getFromAddress() +
                     " TYPE=" + ref.getReferenceType());
        }
        pw.println("R18_GLOBAL_SLOT_REFERENCE_COUNT=" + refCount);
        pw.println("FINAL_STATUS=STATIC_GHIDRA_ONLY_NO_GUEST_RUNTIME_OR_CPP_ABI_CLAIM");
      }
    } finally {
      decomp.dispose();
    }
    println("R18 targeted native Lua binding Ghidra trace written: " + out);
  }
}
