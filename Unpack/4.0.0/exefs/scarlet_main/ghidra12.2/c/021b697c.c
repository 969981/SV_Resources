/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


