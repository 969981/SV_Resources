/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e5d690; name: FUN_01e5d690
 */


int FUN_01e5d690(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  
  iVar1 = FUN_01e5d5e0();
  if (*(float *)(param_4 + 0x38) < *(float *)(param_5 + 0x38)) {
    FUN_01e5d3f0(param_4,param_5);
    if (*(float *)(param_4 + 0x38) <= *(float *)(param_3 + 0x38)) {
      iVar1 = iVar1 + 1;
    }
    else {
      FUN_01e5d3f0(param_3,param_4);
      if (*(float *)(param_3 + 0x38) <= *(float *)(param_2 + 0x38)) {
        iVar1 = iVar1 + 2;
      }
      else {
        FUN_01e5d3f0(param_2,param_3);
        if (*(float *)(param_2 + 0x38) <= *(float *)(param_1 + 0x38)) {
          iVar1 = iVar1 + 3;
        }
        else {
          FUN_01e5d3f0(param_1,param_2);
          iVar1 = iVar1 + 4;
        }
      }
    }
  }
  return iVar1;
}


