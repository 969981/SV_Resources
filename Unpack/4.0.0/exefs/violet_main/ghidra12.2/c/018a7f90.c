/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018a7f90; name: FUN_018a7f90
 */


void FUN_018a7f90(long *param_1)

{
  long lVar1;
  long lVar2;
  long local_58;
  long lStack_50;
  long local_48;
  long local_40;
  long *plStack_38;
  
  lVar1 = *param_1;
  if ((ulong)(param_1[2] - lVar1 >> 5) < 8) {
    lVar2 = param_1[1];
    local_40 = 0;
    plStack_38 = param_1 + 3;
    local_58 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],0x100,8);
    if (local_58 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    lStack_50 = local_58 + (lVar2 - lVar1 >> 5) * 0x20;
    local_40 = local_58 + 0x100;
    local_48 = lStack_50;
    FUN_018a8040(param_1,&local_58);
    FUN_018a80a8(&local_58);
  }
  return;
}


