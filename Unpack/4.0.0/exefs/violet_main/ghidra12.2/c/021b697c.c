/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021b697c; name: FUN_021b697c
 */


void FUN_021b697c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045a2540;
  param_1[4] = &PTR_LAB_045a2688;
  param_1[5] = &DAT_045a27b0;
  param_1[6] = &PTR_LAB_045a2808;
  param_1[7] = &PTR_LAB_045a2830;
  FUN_00db239c(param_1 + 0x27);
  if ((long *)param_1[0x24] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x24] + 0x60))();
  }
  FUN_00e6bfa4(param_1);
  return;
}


