/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014e0160; name: FUN_014e0160
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014e0160(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_00d1a240(param_1,0x80047f80);
  *param_1 = &PTR_FUN_04567d70;
  param_1[4] = &PTR_LAB_04567eb8;
  param_1[5] = &DAT_04567fe0;
  param_1[6] = &PTR_LAB_04568038;
  param_1[7] = &PTR_LAB_04568060;
  param_1[0x2c] = 0xffffffffffffffff;
  param_1[0x2d] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0x1000100;
  uVar2 = _UNK_03cabe58;
  uVar1 = _DAT_03cabe50;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined1 *)((long)param_1 + 0x1a2) = 0;
  *(undefined4 *)((long)param_1 + 0x1a4) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x33] = uVar2;
  param_1[0x32] = uVar1;
  FUN_00c6a514(param_1 + 7,0);
  FUN_014e0214(param_1,param_2);
  memset(param_1 + 0x36,0,0x88);
  return;
}


