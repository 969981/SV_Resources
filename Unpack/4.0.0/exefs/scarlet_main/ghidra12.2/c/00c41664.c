/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c41664; name: FUN_00c41664
 */


long FUN_00c41664(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  if ((int)param_1[1] != *(int *)(lVar1 + 0x2c)) {
    lVar1 = 0;
  }
  return lVar1;
}


