/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030096bc; name: FUN_030096bc
 */


void FUN_030096bc(long *param_1)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 0x334) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x19a4)) && (param_1[0x333] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x333],(ulong)*(uint *)((long)param_1 + 0x19a4) << 3);
  }
  param_1[0x333] = 0;
  *(undefined4 *)((long)param_1 + 0x19a4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x329) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x194c)) && (param_1[0x328] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x328],(ulong)*(uint *)((long)param_1 + 0x194c) << 2);
  }
  param_1[0x328] = 0;
  *(undefined4 *)((long)param_1 + 0x194c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x30f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x187c)) && (param_1[0x30e] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x30e],(ulong)*(uint *)((long)param_1 + 0x187c) * 0xc);
  }
  param_1[0x30e] = 0;
  *(undefined4 *)((long)param_1 + 0x187c) = 0x80000000;
  puVar1 = PTR_DAT_047d1a40;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[7],(ulong)*(uint *)((long)param_1 + 0x44) << 5);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[5],(ulong)*(uint *)((long)param_1 + 0x34) << 4);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  return;
}


