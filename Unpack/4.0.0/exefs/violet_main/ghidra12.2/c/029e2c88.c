/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029e2c88; name: FUN_029e2c88
 */


undefined8 FUN_029e2c88(int *param_1,long *param_2)

{
  uint *puVar1;
  ulong uVar2;
  
  uVar2 = FUN_019367c0(param_2,param_1);
  if ((uVar2 & 1) != 0) {
    if ((4 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar2 != 0)) {
      if ((ulong)param_2[1] < 9) {
        return 0;
      }
      if (param_2[1] - 8U < (long)param_1 + (uVar2 - *param_2)) {
        return 0;
      }
    }
    uVar2 = FUN_019c3824(param_1,param_2,6);
    if ((((uVar2 & 1) != 0) &&
        (((*(ushort *)((long)param_1 - (long)*param_1) < 7 ||
          (uVar2 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[3], uVar2 == 0)) ||
         (puVar1 = (uint *)((long)param_1 + uVar2),
         uVar2 = FUN_029e2da4((long)puVar1 + (ulong)*puVar1,param_2), (uVar2 & 1) != 0)))) &&
       ((uVar2 = FUN_019c3824(param_1,param_2,8), (uVar2 & 1) != 0 &&
        (((*(ushort *)((long)param_1 - (long)*param_1) < 9 ||
          (uVar2 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[4], uVar2 == 0)) ||
         (puVar1 = (uint *)((long)param_1 + uVar2),
         uVar2 = FUN_029e2da4((long)puVar1 + (ulong)*puVar1,param_2), (uVar2 & 1) != 0)))))) {
      *(int *)(param_2 + 2) = (int)param_2[2] + -1;
      return 1;
    }
  }
  return 0;
}


