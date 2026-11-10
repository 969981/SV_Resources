/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01758258; name: FUN_01758258
 */


void FUN_01758258(undefined8 *param_1,undefined8 param_2)

{
  FUN_0175861c();
  *param_1 = &PTR_LAB_045e0e28;
  param_1[4] = &PTR_LAB_045e0e58;
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[7] = 0x1c71c71c71c71c7;
  param_1[8] = 0;
  param_1[6] = param_2;
  param_1[0xb] = 0x1c71c71c71c71c7;
  param_1[0xc] = 0;
  param_1[0xd] = param_1[9];
  param_1[0xe] = 0;
  param_1[10] = param_2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_017582d0();
  DAT_0485ed88 = param_2;
  return;
}


