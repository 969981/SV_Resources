/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02785ec8; name: FUN_02785ec8
 */


void FUN_02785ec8(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[4];
  param_1[4] = 0;
  if (lVar1 != 0) {
    FUN_02784b5c(param_1 + 5);
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_0278498c(param_1 + 1);
  return;
}


