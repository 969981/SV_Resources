/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b4f90; name: FUN_008b4f90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b4f90(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = _UNK_03cabe68;
  uVar1 = _DAT_03cabe60;
  uVar4 = DAT_03cab628;
  uVar3 = DAT_03cab620;
  param_1[1] = DAT_03cab628;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  uVar2 = _UNK_03caa5b8;
  uVar1 = _DAT_03caa5b0;
  param_1[5] = _UNK_03caa5b8;
  param_1[4] = uVar1;
  uVar6 = _UNK_03cabd18;
  uVar5 = _DAT_03cabd10;
  if ((*(byte *)(param_2 + 0x18e) >> 3 & 1) != 0) {
    param_1[1] = uVar4;
    *param_1 = uVar3;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    param_1[5] = uVar2;
    param_1[4] = uVar1;
  }
  return;
}


