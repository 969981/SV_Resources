/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00da13c0; name: FUN_00da13c0
 */


undefined8 FUN_00da13c0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar10 = *param_2;
  lVar12 = *(long *)(*param_4 + 0x280);
  lVar11 = *(long *)(*param_4 + 0x248);
  uVar1 = lVar12 + *(int *)(lVar10 + 0x468);
  lVar9 = *param_1;
  iVar3 = *(int *)(*(long *)(lVar11 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80 +
                  0x78);
  uVar1 = lVar12 + *(int *)(lVar9 + 0x468);
  iVar4 = *(int *)(*(long *)(lVar11 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80 +
                  0x78);
  bVar6 = SBORROW4(iVar3,iVar4);
  iVar2 = iVar3 - iVar4;
  if (iVar3 == iVar4) {
    bVar6 = SBORROW4(*(int *)(lVar10 + 0x4f4),*(int *)(lVar9 + 0x4f4));
    iVar2 = *(int *)(lVar10 + 0x4f4) - *(int *)(lVar9 + 0x4f4);
  }
  lVar13 = *param_3;
  uVar1 = lVar12 + *(int *)(lVar13 + 0x468);
  iVar5 = *(int *)(*(long *)(lVar11 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80 +
                  0x78);
  bVar7 = SBORROW4(iVar5,iVar3);
  iVar4 = iVar5 - iVar3;
  if (iVar5 == iVar3) {
    bVar7 = SBORROW4(*(int *)(lVar13 + 0x4f4),*(int *)(lVar10 + 0x4f4));
    iVar4 = *(int *)(lVar13 + 0x4f4) - *(int *)(lVar10 + 0x4f4);
  }
  bVar7 = iVar4 < 0 != bVar7;
  if (iVar2 < 0 != bVar6) {
    if (bVar7) {
      *param_1 = lVar13;
      uVar8 = 1;
    }
    else {
      *param_1 = lVar10;
      *param_2 = lVar9;
      lVar10 = *param_3;
      lVar12 = *(long *)(*param_4 + 0x280);
      lVar11 = *(long *)(*param_4 + 0x248);
      uVar1 = lVar12 + *(int *)(lVar10 + 0x468);
      iVar3 = *(int *)(*(long *)(lVar11 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80
                      + 0x78);
      uVar1 = lVar12 + *(int *)(lVar9 + 0x468);
      iVar4 = *(int *)(*(long *)(lVar11 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80
                      + 0x78);
      bVar6 = SBORROW4(iVar3,iVar4);
      iVar2 = iVar3 - iVar4;
      if (iVar3 == iVar4) {
        bVar6 = SBORROW4(*(int *)(lVar10 + 0x4f4),*(int *)(lVar9 + 0x4f4));
        iVar2 = *(int *)(lVar10 + 0x4f4) - *(int *)(lVar9 + 0x4f4);
      }
      if (iVar2 < 0 == bVar6) {
        return 1;
      }
      uVar8 = 2;
      *param_2 = lVar10;
    }
    *param_3 = lVar9;
    return uVar8;
  }
  if (!bVar7) {
    return 0;
  }
  *param_2 = lVar13;
  *param_3 = lVar10;
  lVar10 = *param_2;
  lVar12 = *(long *)(*param_4 + 0x280);
  lVar11 = *(long *)(*param_4 + 0x248);
  uVar1 = lVar12 + *(int *)(lVar10 + 0x468);
  lVar9 = *param_1;
  iVar2 = *(int *)(*(long *)(lVar11 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80 +
                  0x78);
  uVar1 = lVar12 + *(int *)(lVar9 + 0x468);
  iVar3 = *(int *)(*(long *)(lVar11 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80 +
                  0x78);
  if (iVar2 == iVar3) {
    if (*(int *)(lVar10 + 0x4f4) < *(int *)(lVar9 + 0x4f4)) {
LAB_00da1588:
      *param_1 = lVar10;
      *param_2 = lVar9;
      return 2;
    }
  }
  else if (iVar2 < iVar3) goto LAB_00da1588;
  return 1;
}


