/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012bf9d4; name: FUN_012bf9d4
 */


void FUN_012bf9d4(undefined8 *param_1)

{
  FUN_012bfa64();
  *param_1 = &PTR_FUN_045e6ed0;
  param_1[4] = &PTR_LAB_045e6f00;
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 1;
  nn::os::InitializeLightEvent(param_1 + 6,0,1);
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_012bfb90(param_1 + 10);
  param_1[0xe] = 0;
  FUN_012bfcc4(param_1 + 0xf);
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  return;
}


