/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00475310; name: FUN_00475310
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00475310(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = _UNK_03cab468;
  uVar3 = _DAT_03cab460;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar2 = _UNK_03caab78;
  uVar1 = _DAT_03caab70;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  uVar4 = _UNK_03cab198;
  uVar3 = _DAT_03cab190;
  uVar2 = _UNK_03cab0b8;
  uVar1 = _DAT_03cab0b0;
  param_1[0x1a] = 0x3000000000;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return 1;
}


