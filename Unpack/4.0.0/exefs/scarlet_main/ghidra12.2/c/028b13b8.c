/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b13b8; name: FUN_028b13b8
 */


void FUN_028b13b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045e6ed0;
  param_1[4] = &PTR_LAB_045e6f00;
  FUN_028b13f4(param_1 + 8);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 6));
  return;
}


