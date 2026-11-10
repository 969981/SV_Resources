/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033b3fc8; name: FUN_033b3fc8
 */


void FUN_033b3fc8(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_LAB_047b3450;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))();
  }
  param_1[5] = 0;
  puVar1 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


