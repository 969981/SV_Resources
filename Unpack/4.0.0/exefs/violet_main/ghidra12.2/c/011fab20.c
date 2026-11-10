/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011fab20; name: FUN_011fab20
 */


undefined8 FUN_011fab20(long param_1,long param_2,long param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 < *(int *)(param_1 + 0x20)) {
    if (*(int *)(param_3 + 0x20) < iVar1) {
      FUN_011f9ce0(param_1,param_3);
    }
    else {
      FUN_011f9ce0(param_1,param_2);
      if (*(int *)(param_3 + 0x20) < *(int *)(param_2 + 0x20)) {
        param_1 = param_2;
        param_2 = param_3;
        goto LAB_011fabc8;
      }
    }
  }
  else {
    if (iVar1 <= *(int *)(param_3 + 0x20)) {
      return 0;
    }
    FUN_011f9ce0(param_2,param_3);
    if (*(int *)(param_2 + 0x20) < *(int *)(param_1 + 0x20)) {
LAB_011fabc8:
      FUN_011f9ce0(param_1,param_2);
      return 2;
    }
  }
  return 1;
}


