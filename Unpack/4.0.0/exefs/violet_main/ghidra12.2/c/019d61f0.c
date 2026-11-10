/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019d61f0; name: FUN_019d61f0
 */


int FUN_019d61f0(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  
  iVar1 = FUN_019d65a0();
  if (*(float *)(param_4 + 4) < *(float *)(param_5 + 4)) {
    FUN_019d6070(param_4,param_5);
    if (*(float *)(param_4 + 4) <= *(float *)(param_3 + 4)) {
      iVar1 = iVar1 + 1;
    }
    else {
      FUN_019d6070(param_3,param_4);
      if (*(float *)(param_3 + 4) <= *(float *)(param_2 + 4)) {
        iVar1 = iVar1 + 2;
      }
      else {
        FUN_019d6070(param_2,param_3);
        if (*(float *)(param_2 + 4) <= *(float *)(param_1 + 4)) {
          iVar1 = iVar1 + 3;
        }
        else {
          FUN_019d6070(param_1,param_2);
          iVar1 = iVar1 + 4;
        }
      }
    }
  }
  return iVar1;
}


