/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0146d7c0; name: FUN_0146d7c0
 */


int FUN_0146d7c0(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  
  iVar1 = FUN_0146d870();
  if (*(int *)(param_4 + 0x20) < *(int *)(param_3 + 0x20)) {
    FUN_011f9ce0(param_3,param_4);
    if (*(int *)(param_3 + 0x20) < *(int *)(param_2 + 0x20)) {
      FUN_011f9ce0(param_2,param_3);
      if (*(int *)(param_2 + 0x20) < *(int *)(param_1 + 0x20)) {
        FUN_011f9ce0(param_1,param_2);
        iVar1 = iVar1 + 3;
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


