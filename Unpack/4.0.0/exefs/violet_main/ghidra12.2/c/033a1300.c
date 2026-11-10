/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033a1300; name: FUN_033a1300
 */


void FUN_033a1300(long *param_1)

{
  *param_1 = (long)&PTR_LAB_047b2f20;
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


