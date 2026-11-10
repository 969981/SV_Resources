/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03534948; name: FUN_03534948
 */


void FUN_03534948(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_047c93b0;
  param_1[3] = &PTR_LAB_047c9500;
  param_1[5] = &PTR_FUN_047c9528;
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 0x30))();
  }
  FUN_0353190c(param_1);
  return;
}


