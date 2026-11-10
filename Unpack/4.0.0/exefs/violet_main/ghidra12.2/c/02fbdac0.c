/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fbdac0; name: FUN_02fbdac0
 */


void FUN_02fbdac0(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_LAB_04611e98;
  *(undefined4 *)(param_1 + 0x11) = 0;
  puVar1 = PTR_PTR_047d1a50;
  if ((-1 < *(int *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))
              (puVar1,param_1[0xe],(ulong)*(uint *)((long)param_1 + 0x7c) << 1);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))
              (puVar1,param_1[0xc],(ulong)*(uint *)((long)param_1 + 0x6c) << 2);
  }
  *param_1 = (long)&PTR_LAB_04611f28;
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))
              (puVar1,param_1[10],(ulong)*(uint *)((long)param_1 + 0x5c) << 1);
  }
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))
              (puVar1,param_1[8],(ulong)*(uint *)((long)param_1 + 0x4c) << 3);
  }
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))
              (puVar1,param_1[6],(ulong)*(uint *)((long)param_1 + 0x3c) << 3);
  }
  param_1[6] = 0;
  puVar1 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


