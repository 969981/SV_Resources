/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078fa2c; name: FUN_0078fa2c
 */


void FUN_0078fa2c(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *(long *)(lVar1 + 8) = param_2[1];
  *(long *)param_2[1] = lVar1;
  *param_2 = 0;
  param_2[1] = 0;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return;
}


