/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012b15ec; name: FUN_012b15ec
 */


void FUN_012b15ec(undefined8 *param_1,undefined8 param_2)

{
  FUN_012b180c();
  *param_1 = &PTR_FUN_045ad650;
  param_1[8] = 0;
  param_1[4] = &PTR_LAB_045ad680;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_012b2020(param_1 + 9);
  param_1[0xd] = 0;
  param_1[0xe] = param_2;
  FUN_012b1674(param_1 + 0x10,param_2);
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = &PTR_FUN_045ad6a0;
  nn::hid::InitializeNpad();
  FUN_012b4f98(param_1);
  return;
}


