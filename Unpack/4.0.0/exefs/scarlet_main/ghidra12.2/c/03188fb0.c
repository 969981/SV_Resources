/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03188fb0; name: FUN_03188fb0
 */


void FUN_03188fb0(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_LAB_04696100;
  param_1[4] = (long)&PTR_LAB_04696140;
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


