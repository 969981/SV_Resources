/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f72c6c; name: FUN_01f72c6c
 */


void FUN_01f72c6c(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_047cfbf8 + 0x10);
  lVar1 = FUN_01cf7e20();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = lVar1;
  lVar1 = FUN_01cf7e20();
  param_1[7] = 0;
  param_1[8] = lVar1;
  *(undefined4 *)(param_1 + 9) = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_01f7135c(param_1 + 10,param_3);
  FUN_01f7135c(param_1 + 0xe,param_4);
  lVar1 = FUN_01cf7e20();
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  param_1[0x15] = lVar1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  return;
}


