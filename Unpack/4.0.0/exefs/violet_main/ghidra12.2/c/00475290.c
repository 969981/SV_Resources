/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00475290; name: FUN_00475290
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00475290(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = _UNK_03cabff8;
  uVar1 = _DAT_03cabff0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar4 = _UNK_03cac1e8;
  uVar3 = _DAT_03cac1e0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar4 = _UNK_03cabf28;
  uVar3 = _DAT_03cabf20;
  uVar2 = _UNK_03caafa8;
  uVar1 = _DAT_03caafa0;
  param_1[0x1a] = 0x1c00000000;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return 1;
}


