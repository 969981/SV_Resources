/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019d65a0; name: FUN_019d65a0
 */


int FUN_019d65a0(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  
  iVar1 = FUN_019d6650();
  if (*(float *)(param_3 + 4) < *(float *)(param_4 + 4)) {
    FUN_019d6070(param_3,param_4);
    if (*(float *)(param_3 + 4) <= *(float *)(param_2 + 4)) {
      iVar1 = iVar1 + 1;
    }
    else {
      FUN_019d6070(param_2,param_3);
      if (*(float *)(param_2 + 4) <= *(float *)(param_1 + 4)) {
        iVar1 = iVar1 + 2;
      }
      else {
        FUN_019d6070(param_1,param_2);
        iVar1 = iVar1 + 3;
      }
    }
  }
  return iVar1;
}


