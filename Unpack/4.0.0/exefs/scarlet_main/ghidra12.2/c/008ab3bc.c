/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008ab3bc; name: FUN_008ab3bc
 */


long FUN_008ab3bc(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_008b4d30(param_1,0x10,0x230);
    if ((param_3 == 0) && ((*(byte *)(param_2 + 4) >> 1 & 1) == 0)) {
      return lVar2;
    }
    lVar3 = FUN_008b4d30(param_1,0x10,0x230);
    lVar3 = lVar3 + lVar2;
  }
  if (param_3 == 0) {
    return lVar3;
  }
  bVar1 = *(byte *)(param_3 + 8);
  uVar6 = (uint)bVar1;
  if ((bVar1 & 1) == 0) {
    if ((bVar1 >> 1 & 1) != 0) goto LAB_008ab4c8;
LAB_008ab42c:
    if ((uVar6 >> 2 & 1) == 0) goto LAB_008ab464;
  }
  else {
    lVar2 = 2;
    if ((bVar1 & 0x20) != 0) {
      lVar2 = 3;
    }
    lVar4 = FUN_008b4d30(param_1,0x10,0x230);
    lVar5 = FUN_008b4d30(param_1,0x10,0xe0);
    uVar6 = (uint)*(byte *)(param_3 + 8);
    lVar3 = lVar3 + lVar4 * lVar2 + lVar5;
    if ((*(byte *)(param_3 + 8) >> 1 & 1) == 0) goto LAB_008ab42c;
LAB_008ab4c8:
    lVar2 = 2;
    if ((uVar6 & 0x20) != 0) {
      lVar2 = 3;
    }
    lVar4 = FUN_008b4d30(param_1,0x10,0x230);
    lVar5 = FUN_008b4d30(param_1,0x10,0xe0);
    uVar6 = (uint)*(byte *)(param_3 + 8);
    lVar3 = lVar3 + lVar4 * lVar2 + lVar5;
    if ((*(byte *)(param_3 + 8) >> 2 & 1) == 0) goto LAB_008ab464;
  }
  lVar2 = 2;
  if ((uVar6 & 0x20) != 0) {
    lVar2 = 3;
  }
  lVar4 = FUN_008b4d30(param_1,0x10,0x230);
  lVar5 = FUN_008b4d30(param_1,0x10,0xe0);
  lVar3 = lVar3 + lVar4 * lVar2 + lVar5;
LAB_008ab464:
  lVar2 = FUN_008b4d30(param_1,0x10,0x230);
  return lVar2 + lVar3;
}


