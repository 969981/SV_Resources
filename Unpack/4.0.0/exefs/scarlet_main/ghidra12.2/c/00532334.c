/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00532334; name: FUN_00532334
 */


void FUN_00532334(long param_1,int param_2)

{
  if (*(int *)(param_1 + 8) < param_2) {
    FUN_0053234c(param_1,param_2 - *(int *)(param_1 + 8));
    return;
  }
  return;
}


