/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00515df0; name: FUN_00515df0
 */


long FUN_00515df0(long param_1)

{
  long lVar1;
  
  lVar1 = (long)*(int *)(param_1 + 0x18);
  return lVar1 / 1000000 + *(long *)(param_1 + 0x10) * 1000 +
         (ulong)(lVar1 < -999999 && 0 < lVar1 % 1000000);
}


