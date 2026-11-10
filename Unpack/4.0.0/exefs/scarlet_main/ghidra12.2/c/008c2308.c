/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c2308; name: FUN_008c2308
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c2308(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x88) + 0x10) + 0xfU & 0xfffffffffffffff0);
  *(undefined8 **)(*(long *)(param_1 + 0x88) + 0x10) = puVar5 + 6;
  uVar2 = DAT_03cab628;
  uVar1 = DAT_03cab620;
  puVar5[4] = 0;
  puVar5[5] = 0;
  uVar4 = _UNK_03cabe68;
  uVar3 = _DAT_03cabe60;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined8 **)(param_1 + 0x20) = puVar5;
  puVar5[1] = uVar2;
  *puVar5 = uVar1;
  puVar5[3] = uVar4;
  puVar5[2] = uVar3;
  uVar1 = _DAT_03caa5b0;
  puVar5[5] = _UNK_03caa5b8;
  puVar5[4] = uVar1;
  if ((*(long *)(param_1 + 0x30) == 0) ||
     ((*(byte *)(*(long *)(param_1 + 0x28) + 0x91) >> 1 & 1) == 0)) {
    return;
  }
  FUN_008c1678(param_1 + 0x40);
  return;
}


