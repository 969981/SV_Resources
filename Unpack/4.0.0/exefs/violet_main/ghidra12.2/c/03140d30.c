/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03140d30; name: FUN_03140d30
 */


void FUN_03140d30(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_LAB_04668088;
  *(undefined4 *)(param_1 + 0xd) = 0;
  puVar1 = PTR_PTR_047d1a50;
  if ((-1 < *(int *)((long)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))
              (puVar1,param_1[10],(ulong)*(uint *)((long)param_1 + 0x5c) << 1);
  }
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))(puVar1);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))
              (puVar1,param_1[5],(ulong)*(uint *)((long)param_1 + 0x34) << 2);
  }
  param_1[5] = 0;
  puVar1 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


