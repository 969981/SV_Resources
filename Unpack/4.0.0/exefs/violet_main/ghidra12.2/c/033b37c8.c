/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b37c8; name: FUN_033b37c8
 */


void FUN_033b37c8(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_LAB_047b3408;
  param_1[3] = (long)(PTR_DAT_047e6900 + 0x10);
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))();
  }
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  puVar1 = PTR_DAT_047d1a00 + 0x10;
  param_1[3] = (long)puVar1;
  *param_1 = (long)puVar1;
  return;
}


