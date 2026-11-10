/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


