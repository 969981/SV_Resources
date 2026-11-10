/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6e440; name: FUN_00c6e440
 */


undefined8 FUN_00c6e440(uint *param_1,uint *param_2,uint *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  
  lVar9 = *param_4;
  uVar1 = *param_2;
  lVar12 = *(long *)(lVar9 + 0x60);
  uVar2 = *param_1;
  lVar11 = *(long *)(lVar12 + (ulong)uVar1 * 8);
  lVar10 = *(long *)(lVar12 + (ulong)uVar2 * 8);
  iVar3 = *(int *)(lVar11 + 0x20);
  iVar4 = *(int *)(lVar10 + 0x20);
  if (iVar3 == iVar4) {
    fVar13 = *(float *)(lVar11 + 0x24);
    fVar14 = *(float *)(lVar10 + 0x24);
    if (fVar13 == fVar14) {
      bVar6 = uVar1 < uVar2;
    }
    else {
      bVar6 = fVar14 <= fVar13;
      if (*(int *)(lVar9 + 0x1e0) == 2) {
        bVar6 = fVar13 < fVar14;
      }
    }
  }
  else {
    bVar6 = iVar3 < iVar4;
  }
  uVar5 = *param_3;
  lVar10 = *(long *)(lVar12 + (ulong)uVar5 * 8);
  iVar4 = *(int *)(lVar10 + 0x20);
  if (iVar4 == iVar3) {
    fVar13 = *(float *)(lVar10 + 0x24);
    fVar14 = *(float *)(lVar11 + 0x24);
    if (fVar13 == fVar14) {
      bVar7 = uVar5 < uVar1;
    }
    else {
      bVar7 = fVar14 <= fVar13;
      if (*(int *)(lVar9 + 0x1e0) == 2) {
        bVar7 = fVar13 < fVar14;
      }
    }
  }
  else {
    bVar7 = iVar4 < iVar3;
  }
  if (!bVar6) {
    if (!bVar7) {
      return 0;
    }
    *param_2 = uVar5;
    *param_3 = uVar1;
    uVar1 = *param_2;
    lVar10 = *(long *)(*param_4 + 0x60);
    uVar2 = *param_1;
    lVar9 = *(long *)(lVar10 + (ulong)uVar1 * 8);
    iVar3 = *(int *)(lVar9 + 0x20);
    lVar10 = *(long *)(lVar10 + (ulong)uVar2 * 8);
    iVar4 = *(int *)(lVar10 + 0x20);
    if (iVar3 == iVar4) {
      fVar13 = *(float *)(lVar9 + 0x24);
      fVar14 = *(float *)(lVar10 + 0x24);
      if (fVar13 == fVar14) {
        if (uVar2 <= uVar1) {
          return 1;
        }
      }
      else if (*(int *)(*param_4 + 0x1e0) == 2) {
        if (fVar14 <= fVar13) {
          return 1;
        }
      }
      else if (fVar13 <= fVar14) {
        return 1;
      }
    }
    else if (iVar4 <= iVar3) {
      return 1;
    }
    *param_1 = uVar1;
    *param_2 = uVar2;
    return 2;
  }
  if (bVar7) {
    *param_1 = uVar5;
    uVar8 = 1;
  }
  else {
    *param_1 = uVar1;
    *param_2 = uVar2;
    uVar1 = *param_3;
    lVar10 = *(long *)(*param_4 + 0x60);
    lVar9 = *(long *)(lVar10 + (ulong)uVar1 * 8);
    iVar3 = *(int *)(lVar9 + 0x20);
    lVar10 = *(long *)(lVar10 + (ulong)uVar2 * 8);
    iVar4 = *(int *)(lVar10 + 0x20);
    if (iVar3 == iVar4) {
      fVar13 = *(float *)(lVar9 + 0x24);
      fVar14 = *(float *)(lVar10 + 0x24);
      if (fVar13 == fVar14) {
        if (uVar2 <= uVar1) {
          return 1;
        }
      }
      else if (*(int *)(*param_4 + 0x1e0) == 2) {
        if (fVar14 <= fVar13) {
          return 1;
        }
      }
      else if (fVar13 <= fVar14) {
        return 1;
      }
    }
    else if (iVar4 <= iVar3) {
      return 1;
    }
    uVar8 = 2;
    *param_2 = uVar1;
  }
  *param_3 = uVar2;
  return uVar8;
}


