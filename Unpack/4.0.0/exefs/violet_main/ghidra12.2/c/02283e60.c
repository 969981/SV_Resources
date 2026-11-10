/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02283e60; name: FUN_02283e60
 */


void FUN_02283e60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045af8f0;
  param_1[4] = &PTR_LAB_045afa38;
  param_1[5] = &DAT_045afb60;
  param_1[6] = &PTR_LAB_045afbb8;
  param_1[7] = &PTR_LAB_045afbe0;
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x29));
  FUN_00e6bfa4(param_1);
  return;
}


