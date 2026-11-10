/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012ad714; name: FUN_012ad714
 */


void FUN_012ad714(undefined8 *param_1)

{
  FUN_016717fc();
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 1;
  *param_1 = &PTR_FUN_045d04b8;
  param_1[1] = &PTR_LAB_045d05d8;
  nn::os::InitializeLightEvent(param_1 + 8,0,1);
  return;
}


