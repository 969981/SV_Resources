/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cdea90; name: FUN_00cdea90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cdea90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[8] = 0x3f80000000000000;
  param_1[9] = 0x3f800000;
  uVar5 = _UNK_03cabe68;
  uVar4 = _DAT_03cabe60;
  uVar3 = DAT_03cab620;
  uVar2 = _UNK_03caa5b8;
  uVar1 = _DAT_03caa5b0;
  param_1[1] = DAT_03cab628;
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  uVar4 = _UNK_03cabe58;
  uVar3 = _DAT_03cabe50;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  return;
}


