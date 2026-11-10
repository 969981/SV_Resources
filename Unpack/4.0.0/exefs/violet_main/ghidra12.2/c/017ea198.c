/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017ea198; name: FUN_017ea198
 */


void FUN_017ea198(undefined8 *param_1,undefined8 param_2)

{
  FUN_017ea1fc();
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = &PTR_LAB_04569e40;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[4] = &PTR_LAB_04569e70;
  param_1[5] = 0;
  param_1[8] = 0x666666666666666;
  param_1[9] = 0;
  param_1[0xd] = 0x666666666666666;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  param_1[6] = 0;
  param_1[7] = param_2;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  return;
}


