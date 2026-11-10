/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f76a4c; name: FUN_01f76a4c
 */


void FUN_01f76a4c(long *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_047cfd80;
  *(undefined4 *)(param_1 + 1) = param_2;
  *param_1 = (long)(puVar1 + 0x10);
  lVar2 = FUN_01cf7e20();
  param_1[4] = 0;
  param_1[5] = lVar2;
  *(undefined4 *)(param_1 + 6) = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_01f7135c(param_1 + 7,param_4);
  lVar2 = FUN_01cf7e20();
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = lVar2;
  lVar2 = FUN_01cf7e20();
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = lVar2;
  lVar2 = FUN_01cf7e20();
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = lVar2;
  lVar2 = FUN_01cf7e20();
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = lVar2;
  lVar2 = FUN_01cf7e20();
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = lVar2;
  lVar2 = FUN_01cf7e20();
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = lVar2;
  lVar2 = FUN_01cf7e20();
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = lVar2;
  lVar2 = FUN_01cf7e20();
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = lVar2;
  param_1[0x2b] = (long)(PTR_DAT_047cfd88 + 0x10);
  param_1[0x2c] = 0;
  return;
}


