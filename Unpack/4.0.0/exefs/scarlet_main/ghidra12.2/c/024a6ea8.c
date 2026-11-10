/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a6ea8; name: FUN_024a6ea8
 */


void FUN_024a6ea8(ulong param_1)

{
  code *pcVar1;
  
  if (param_1 >> 0x3c != 0) {
    FUN_024a6ed0();
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x24a6ec4);
    (*pcVar1)();
  }
  operator_new(param_1 << 4);
  return;
}


