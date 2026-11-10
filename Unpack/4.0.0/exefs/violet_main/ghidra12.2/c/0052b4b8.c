/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052b4b8; name: FUN_0052b4b8
 */


undefined8 FUN_0052b4b8(long *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    *param_1 = *param_1 + (long)param_3;
    return 0;
  }
  param_2 = param_2 - param_3;
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = (int)param_1[6];
  if ((int)param_1[5] <= (int)param_1[6]) {
    iVar1 = (int)param_1[5];
  }
  iVar2 = iVar1 - (int)param_1[3];
  if (iVar2 < param_2) {
    if (iVar2 < 1) {
      return 0;
    }
    *(int *)(param_1 + 3) = iVar1;
    (**(code **)(*(long *)param_1[2] + 0x20))();
    return 0;
  }
  uVar4 = (**(code **)(*(long *)param_1[2] + 0x20))((long *)param_1[2],param_2);
  if ((uVar4 & 1) == 0) {
    uVar3 = (**(code **)(*(long *)param_1[2] + 0x28))();
    *(undefined4 *)(param_1 + 3) = uVar3;
    return 0;
  }
  *(int *)(param_1 + 3) = (int)param_1[3] + param_2;
  return 1;
}


