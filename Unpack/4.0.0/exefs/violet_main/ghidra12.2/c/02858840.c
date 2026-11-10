/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02858840; name: FUN_02858840
 */


void FUN_02858840(undefined8 *param_1)

{
  param_1[4] = 0;
  *param_1 = &PTR_LAB_045e48c0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_LAB_045e48f0;
  FUN_02858900(param_1 + 5);
  param_1[4] = param_1 + 5;
  param_1[0x4d] = 0x1400000000;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  param_1[0x4c] = &PTR_LAB_045e4988;
  FUN_028588d8(param_1 + 0x50);
  param_1[0x4f] = param_1 + 0x50;
  param_1[0x50] = &PTR_LAB_045e4a30;
  param_1[1] = param_1 + 3;
  param_1[2] = param_1 + 0x4c;
  return;
}


