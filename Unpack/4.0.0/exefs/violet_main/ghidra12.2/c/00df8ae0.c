/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00df8ae0; name: FUN_00df8ae0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00df8ae0(undefined8 *param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  
  FUN_00d1a240(param_1,0x80008080);
  uVar4 = _UNK_03cabe68;
  uVar3 = _DAT_03cabe60;
  uVar2 = DAT_03cab620;
  param_1[0x25] = DAT_03cab628;
  param_1[0x24] = uVar2;
  param_1[0x27] = uVar4;
  param_1[0x26] = uVar3;
  uVar4 = _UNK_03cabe58;
  uVar3 = _DAT_03cabe50;
  uVar2 = _DAT_03caa5b0;
  param_1[0x29] = _UNK_03caa5b8;
  param_1[0x28] = uVar2;
  param_1[0x2b] = uVar4;
  param_1[0x2a] = uVar3;
  uVar2 = _DAT_03caa980;
  param_1[0x2d] = _UNK_03caa988;
  param_1[0x2c] = uVar2;
  param_1[0x2f] = uVar4;
  param_1[0x2e] = uVar3;
  param_1[0x31] = 0;
  *(undefined8 *)((long)param_1 + 0x18d) = 0;
  *param_1 = &DAT_045e8f38;
  param_1[4] = &PTR_LAB_045e9098;
  param_1[5] = &DAT_045e91c0;
  param_1[0x30] = 0;
  param_1[6] = &PTR_LAB_045e9218;
  puVar6 = param_1 + 7;
  *puVar6 = &PTR_LAB_045e9240;
  memset(param_1 + 0x33,0,0x50);
  param_1[0x43] = 0;
  param_1[0x42] = &DAT_03c886bc;
  param_1[0x41] = &DAT_cbf29ce484222645;
  param_1[0x3d] = &DAT_cbf29ce484222645;
  param_1[0x3e] = &DAT_03c886bc;
  *(undefined2 *)((long)param_1 + 0x22c) = 1;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  if ((*(char *)(param_1 + 0xb) == -0x7d) && (*(char *)((long)param_1 + 0x59) == -0x7d)) {
    return;
  }
  uVar1 = *(undefined2 *)(param_1 + 0xb);
  *(undefined2 *)(param_1 + 0xb) = 0x8383;
  if (param_1[9] == 0) {
    ppuVar5 = &PTR_LAB_045e9240;
  }
  else {
    FUN_00c6a584(param_1[9],puVar6);
    ppuVar5 = (undefined **)*puVar6;
  }
  (*(code *)ppuVar5[4])(puVar6,uVar1);
  return;
}


