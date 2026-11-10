/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e5d5e0; name: FUN_01e5d5e0
 */


int FUN_01e5d5e0(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  
  iVar1 = FUN_01e5d520();
  if (*(float *)(param_3 + 0x38) < *(float *)(param_4 + 0x38)) {
    FUN_01e5d3f0(param_3,param_4);
    if (*(float *)(param_3 + 0x38) <= *(float *)(param_2 + 0x38)) {
      iVar1 = iVar1 + 1;
    }
    else {
      FUN_01e5d3f0(param_2,param_3);
      if (*(float *)(param_2 + 0x38) <= *(float *)(param_1 + 0x38)) {
        iVar1 = iVar1 + 2;
      }
      else {
        FUN_01e5d3f0(param_1,param_2);
        iVar1 = iVar1 + 3;
      }
    }
  }
  return iVar1;
}


