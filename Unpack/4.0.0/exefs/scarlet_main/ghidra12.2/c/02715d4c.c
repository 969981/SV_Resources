/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02715d4c; name: FUN_02715d4c
 */


void FUN_02715d4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045d1fd8;
  param_1[4] = &PTR_LAB_045d2010;
  if (param_1[0x41] != 0) {
    (**(code **)(*(long *)(param_1[0x41] + 0x20) + 0x18))();
  }
  FUN_02715dc4(param_1 + 0x34);
  FUN_02715dc4(param_1 + 0x27);
  FUN_02715dc4(param_1 + 0x1a);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x18));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x14));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x10));
  FUN_02715f8c(param_1 + 6);
  return;
}


