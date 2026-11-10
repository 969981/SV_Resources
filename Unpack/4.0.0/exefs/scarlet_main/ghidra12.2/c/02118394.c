/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02118394; name: FUN_02118394
 */


long FUN_02118394(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = param_1 + (ulong)param_2 * 8;
  if (4 < param_2) {
    lVar1 = param_1 + 0x28;
  }
  return lVar1;
}


