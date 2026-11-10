/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008e4244; name: FUN_008e4244
 */


void FUN_008e4244(undefined8 param_1,long param_2,long param_3,uint param_4,undefined8 param_5,
                 long param_6)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  lVar6 = *(long *)(param_3 + 0x418);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  uVar9 = *(undefined8 *)(param_6 + 0x30);
  uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x238) + 0x338);
  if (param_4 == 3) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(*(long *)(param_3 + 0x238) + (ulong)param_4 * 8 + 0x340);
  }
  uVar2 = FUN_008dfe14(param_1,param_3,param_4,uVar10);
  if ((uVar2 & 1) != 0) {
    uVar1 = *(undefined4 *)(*(long *)(param_3 + 0x238) + 0x3d0);
    uVar3 = FUN_008ee7cc(param_3 + 0x7a8,*(undefined4 *)(lVar6 + 0x38));
    FUN_008f0b9c(param_1,uVar1,uVar3,0x50,*(undefined8 *)(param_3 + 0x818));
    for (lVar11 = *(long *)(lVar6 + 0x18); lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x68)) {
      if (0 < *(int *)(lVar11 + 0x78)) {
        FUN_008e43a8(param_1,uVar8,uVar9,param_3,uVar10,uVar7,lVar6,lVar11);
      }
    }
    iVar5 = *(int *)(param_3 + 0x230);
    if (0 < iVar5) {
      lVar11 = 0;
      lVar12 = 0x18;
      do {
        lVar4 = *(long *)(*(long *)(param_3 + 0xb0) + lVar12);
        if (((lVar4 != 0) && (*(char *)(lVar4 + 0x90) != '\0')) && (0 < *(int *)(lVar4 + 0x78))) {
          FUN_008e43a8(param_1,uVar8,uVar9,param_3,uVar10,uVar7,lVar6);
          iVar5 = *(int *)(param_3 + 0x230);
        }
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 0x20;
      } while (lVar11 < iVar5);
    }
  }
  return;
}


