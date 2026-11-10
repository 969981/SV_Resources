/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03114e6c; name: FUN_03114e6c
 */


void FUN_03114e6c(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_LAB_0464ea00;
  param_1[4] = (long)&PTR_LAB_0464ea40;
  *(undefined4 *)(param_1 + 0x99) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4cc)) && (param_1[0x98] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x98],(ulong)*(uint *)((long)param_1 + 0x4cc) << 6);
  }
  param_1[0x98] = 0;
  *(undefined4 *)((long)param_1 + 0x4cc) = 0x80000000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xe],(ulong)*(uint *)((long)param_1 + 0x7c) << 6);
  }
  param_1[0xe] = 0;
  puVar1 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


