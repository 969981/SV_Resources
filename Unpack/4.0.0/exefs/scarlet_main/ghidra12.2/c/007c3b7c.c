/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c3b7c; name: FUN_007c3b7c
 */


void FUN_007c3b7c(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_047d1070 + 0x10);
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      operator_delete(param_1);
      return;
    }
    FUN_007c2c10(lVar1,param_1);
  }
  param_1[1] = 1;
  operator_delete(param_1);
  return;
}


