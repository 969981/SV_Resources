/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c6ab24; name: FUN_00c6ab24
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c6ab24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_00d1a22c(param_1,0);
  *param_1 = &PTR_FUN_045a3800;
  param_1[0x24] = 0;
  param_1[4] = &PTR_LAB_045a3948;
  param_1[5] = &DAT_045a3a70;
  param_1[6] = &PTR_LAB_045a3ac8;
  param_1[7] = &PTR_LAB_045a3af0;
  *(undefined4 *)(param_1 + 0x25) = 0xffff0000;
  *(undefined4 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  uVar2 = _UNK_03cabe58;
  uVar1 = _DAT_03cabe50;
  param_1[0x3a] = 0x3f4ccccd3f000000;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = uVar2;
  param_1[0x2c] = uVar1;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = uVar2;
  param_1[0x32] = uVar1;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = uVar2;
  param_1[0x38] = uVar1;
  param_1[0x3b] = 0x83e4ccccd;
  return;
}


