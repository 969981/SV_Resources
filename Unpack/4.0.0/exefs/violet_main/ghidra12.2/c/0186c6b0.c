/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0186c6b0; name: FUN_0186c6b0
 */


void FUN_0186c6b0(undefined8 *param_1)

{
  FUN_0186c72c();
  *(undefined4 *)(param_1 + 0xe) = 0;
  *param_1 = &DAT_0456a000;
  param_1[4] = &PTR_LAB_0456a030;
  param_1[10] = 0x400000008;
  param_1[0xb] = 0x20000000f;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0x3f8000003f733333;
  param_1[0xd] = 0x3f800000;
  *(undefined4 *)(param_1 + 5) = 1;
  FUN_0186cbc8(param_1);
  return;
}


