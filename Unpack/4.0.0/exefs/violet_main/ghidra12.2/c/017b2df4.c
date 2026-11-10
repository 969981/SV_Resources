/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017b2df4; name: FUN_017b2df4
 */


void FUN_017b2df4(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_017b331c();
  *param_1 = &PTR_LAB_045a7ef0;
  param_1[4] = &PTR_LAB_045a7f20;
  FUN_017b322c(param_1 + 5);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_017b301c(param_1 + 0x10);
  FUN_017b3054(param_1 + 0x1b);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2c),false,0);
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x34),false,0);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x38] = 0;
  FUN_017b3448(param_1 + 0x3b);
  *(undefined1 *)(param_1 + 0xa0) = 0;
  memset(param_1 + 0xa2,0,0x90);
  param_1[0xa4] = 0;
  puVar1 = PTR_DAT_047dd9c0;
  param_1[0xa5] = 0;
  param_1[0xa2] = puVar1 + 0x10;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  memset(param_1 + 0xb4,0,0x91);
  param_1[0x40] = FUN_015f10d8;
  param_1[0x41] = &LAB_02b6cabc;
  param_1[0x42] = &LAB_02b6cac0;
  param_1[0x43] = &LAB_02b6cacc;
  param_1[0x50] = FUN_0173be98;
  param_1[0x52] = &LAB_02b6cadc;
  param_1[0x60] = &LAB_00d0bbb8;
  param_1[0x61] = &LAB_02b6caf4;
  param_1[0x62] = &LAB_02b6caf8;
  param_1[99] = &LAB_02b6cb04;
  param_1[0x70] = &LAB_018cd198;
  param_1[0x71] = &LAB_02b6cb10;
  param_1[0x51] = &LAB_02b6cad8;
  param_1[0x72] = &LAB_02b6cb14;
  param_1[0x53] = &LAB_02b6cae8;
  param_1[0x73] = &LAB_02b6cb20;
  param_1[0x80] = &LAB_017c875c;
  param_1[0x81] = &LAB_02b6cb2c;
  param_1[0x82] = &LAB_02b6cb30;
  param_1[0x83] = &LAB_02b6cb3c;
  param_1[0x44] = param_1;
  param_1[0x54] = param_1;
  param_1[100] = param_1;
  param_1[0x74] = param_1;
  param_1[0x84] = param_1;
  param_1[0x94] = param_1;
  param_1[0x91] = &LAB_02b6cb48;
  param_1[0x93] = &LAB_02b6cb58;
  param_1[0x92] = &LAB_02b6cb4c;
  param_1[0x90] = &LAB_016c2eac;
  return;
}


