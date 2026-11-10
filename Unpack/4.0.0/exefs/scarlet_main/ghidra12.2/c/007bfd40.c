/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007bfd40; name: FUN_007bfd40
 */


void FUN_007bfd40(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = (long)param_2;
  *param_2 = lVar1;
  param_2[1] = (long)param_1;
  if (lVar1 != 0) {
    *(long **)(lVar1 + 8) = param_2;
  }
  return;
}


