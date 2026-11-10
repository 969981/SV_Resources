/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0252ba3c; name: FUN_0252ba3c
 */


void FUN_0252ba3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045ce2e8;
  param_1[4] = &PTR_LAB_045ce318;
  thunk_FUN_026f32bc();
  FUN_026f2fb0(param_1 + 8);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 6));
  return;
}


