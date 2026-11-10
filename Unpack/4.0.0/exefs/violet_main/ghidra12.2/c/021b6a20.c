/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021b6a20; name: FUN_021b6a20
 */


long FUN_021b6a20(long param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 local_50 [16];
  undefined4 local_40;
  
  if (param_1 != 0) {
    uVar1 = FUN_00c6a72c(param_1,*(undefined8 *)(param_1 + 8));
    local_50._0_8_ = 0;
    local_50._8_8_ = 0;
    if ((*(ushort *)((long)param_2 - (long)*param_2) < 7) ||
       (uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar3 == 0)) {
      lVar2 = 0;
    }
    else {
      lVar2 = (long)param_2 + uVar3;
    }
    local_50 = FUN_00c6a4a0(lVar2);
    local_40 = 0;
    if ((8 < *(ushort *)((long)param_2 - (long)*param_2)) &&
       (uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar3 != 0)) {
      local_40 = *(undefined4 *)((long)param_2 + uVar3);
    }
    FUN_021b6ad0(uVar1,local_50);
  }
  return param_1;
}


