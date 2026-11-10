/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f64d8; name: FUN_017f64d8
 */


void FUN_017f64d8(long *param_1)

{
  long lVar1;
  
  FUN_017f6558(param_1,param_1[6]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_0175601c(param_1 + 1);
  return;
}


