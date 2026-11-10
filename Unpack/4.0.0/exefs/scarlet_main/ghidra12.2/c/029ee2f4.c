/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029ee2f4; name: FUN_029ee2f4
 */


void FUN_029ee2f4(long *param_1)

{
  long lVar1;
  
  FUN_029ee334(param_1,param_1[6]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_018aad28(param_1 + 1);
  return;
}


