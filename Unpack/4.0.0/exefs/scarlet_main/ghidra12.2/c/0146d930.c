/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0146d930; name: FUN_0146d930
 */


int FUN_0146d930(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  
  iVar1 = FUN_0146d7c0();
  if (*(int *)(param_5 + 0x20) < *(int *)(param_4 + 0x20)) {
    FUN_011f9ce0(param_4,param_5);
    if (*(int *)(param_4 + 0x20) < *(int *)(param_3 + 0x20)) {
      FUN_011f9ce0(param_3,param_4);
      if (*(int *)(param_3 + 0x20) < *(int *)(param_2 + 0x20)) {
        FUN_011f9ce0(param_2,param_3);
        if (*(int *)(param_2 + 0x20) < *(int *)(param_1 + 0x20)) {
          FUN_011f9ce0(param_1,param_2);
          iVar1 = iVar1 + 4;
        }
        else {
          iVar1 = iVar1 + 3;
        }
      }
      else {
        iVar1 = iVar1 + 2;
      }
    }
    else {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


