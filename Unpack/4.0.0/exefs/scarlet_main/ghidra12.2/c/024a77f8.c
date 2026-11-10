/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a77f8; name: FUN_024a77f8
 */


void FUN_024a77f8(ulong param_1)

{
  code *pcVar1;
  
  if (0xaaaaaaaaaaaaaaa < param_1) {
    FUN_024a6ed0();
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x24a7824);
    (*pcVar1)();
  }
  operator_new(param_1 * 0x18);
  return;
}


