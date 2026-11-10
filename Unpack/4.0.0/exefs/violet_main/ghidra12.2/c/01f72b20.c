/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f72b20; name: FUN_01f72b20
 */


void FUN_01f72b20(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,long *param_5)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_047cfbb0 + 0x10);
  lVar1 = FUN_01cf7e20();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = lVar1;
  lVar1 = FUN_01cf7e20();
  param_1[7] = 0;
  param_1[8] = lVar1;
  param_1[9] = 2;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_01f77718(param_1 + 10,param_2);
  FUN_01f77718(param_1 + 0xe,param_3);
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0x100000003;
  param_1[0x16] = 0;
  lVar1 = FUN_01cf7e20();
  param_1[0x17] = lVar1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  lVar1 = FUN_01cf7e20();
  param_1[0x1b] = lVar1;
  lVar1 = FUN_01cf7e20();
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = lVar1;
  lVar1 = FUN_01cf7e20();
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = lVar1;
  lVar1 = FUN_01cf7e20();
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 1;
  param_1[0x2d] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = lVar1;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  lVar1 = FUN_01cf7e20();
  param_1[0x2e] = lVar1;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  FUN_01e74fb0(param_1 + 0x32);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = *param_4;
  param_1[0x36] = *param_5;
  param_1[0x37] = 0;
  lVar1 = FUN_01cf7e20();
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = lVar1;
  return;
}


