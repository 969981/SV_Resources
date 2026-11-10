/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f95b00; name: FUN_01f95b00
 */


void FUN_01f95b00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04563410;
  param_1[4] = &PTR_LAB_04563488;
  param_1[5] = &DAT_045634d8;
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x19));
  FUN_01f95b40(param_1);
  return;
}


