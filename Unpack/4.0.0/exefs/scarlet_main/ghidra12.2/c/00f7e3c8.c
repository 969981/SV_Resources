/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f7e3c8; name: FUN_00f7e3c8
 */


long FUN_00f7e3c8(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 < 5) {
    lVar1 = param_1 + (ulong)param_2 * 0x38 + 0x28;
  }
  return lVar1;
}


