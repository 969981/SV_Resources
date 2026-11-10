/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ca6b54; name: FUN_00ca6b54
 */


void FUN_00ca6b54(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  FUN_00ca6ccc();
  lVar4 = *(long *)(param_1 + 0xf0);
  if (lVar4 != 0) {
    lVar3 = *(long *)(param_1 + 0xf8);
    uVar5 = (*(long *)(param_1 + 0x100) - lVar3 >> 3) * 0x38e38e39;
    if ((int)uVar5 != 0) {
      uVar8 = uVar5 & 0xffffffff;
      FUN_00c75684(*(undefined8 *)(lVar4 + 200),0,lVar3 + 0x38);
      if ((((uVar8 != 1) && (FUN_00c75684(*(undefined8 *)(lVar4 + 200),1,lVar3 + 0x80), uVar8 != 2))
          && (FUN_00c75684(*(undefined8 *)(lVar4 + 200),2,lVar3 + 200), uVar8 != 3)) &&
         ((FUN_00c75684(*(undefined8 *)(lVar4 + 200),3,lVar3 + 0x110), uVar8 != 4 &&
          (FUN_00c75684(*(undefined8 *)(lVar4 + 200),4,lVar3 + 0x158), uVar8 != 5)))) {
        lVar6 = lVar3 + 0x1a0;
        uVar7 = 5;
        do {
          FUN_00c75684(*(undefined8 *)(lVar4 + 200),uVar7 & 0xffffffff,lVar6);
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + 0x48;
        } while (uVar8 != uVar7);
      }
    }
    FUN_00c752dc(lVar4,lVar3,uVar5 & 0xffffffff);
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x70);
    if (*(long **)(*(long *)(param_1 + 0x38) + 0x78) != plVar1) {
      lVar3 = *plVar1;
      lVar4 = *(long *)(lVar3 + 0x30);
      if (lVar4 == *(long *)(lVar3 + 0x38)) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(lVar4 + 0x44);
      }
      FUN_00c4db90(*(undefined8 *)(*(long *)(param_1 + 0xf0) + 200),uVar2,0,0,0,0);
      return;
    }
  }
  return;
}


