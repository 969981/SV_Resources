/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030a43d4; name: FUN_030a43d4
 */


void FUN_030a43d4(long *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  undefined4 *puVar13;
  float fVar14;
  float fVar15;
  
  lVar7 = (long)(int)param_1[1] + -1;
  if ((uint)lVar7 == param_2) {
    *(uint *)(param_1 + 1) = param_2;
    return;
  }
  lVar10 = *param_1;
  puVar8 = *(uint **)(lVar10 + lVar7 * 8);
  fVar14 = (float)puVar8[1];
  fVar15 = *(float *)(*(long *)(lVar10 + (long)(int)param_2 * 8) + 4);
  *(uint **)(lVar10 + (long)(int)param_2 * 8) = puVar8;
  *puVar8 = param_2;
  iVar6 = (int)param_1[1] + -1;
  *(int *)(param_1 + 1) = iVar6;
  if (fVar15 <= fVar14) {
    uVar12 = (long)(int)param_2 << 1 | 1;
    uVar3 = (int)((long)(int)param_2 << 1) + 2;
    if ((int)uVar3 < iVar6) {
      uVar2 = (uint)uVar12;
      if (*(float *)(*(long *)(*param_1 + (long)(int)uVar3 * 8) + 4) <=
          *(float *)(*(long *)(*param_1 + uVar12 * 8) + 4)) {
        uVar2 = uVar3;
      }
      uVar12 = (ulong)uVar2;
    }
    iVar9 = (int)uVar12;
    while (iVar9 < iVar6) {
      lVar7 = *param_1;
      uVar3 = (uint)uVar12;
      lVar10 = *(long *)(lVar7 + (long)(int)uVar3 * 8);
      puVar11 = *(undefined4 **)(lVar7 + (long)(int)param_2 * 8);
      if ((float)puVar11[1] <= *(float *)(lVar10 + 4)) {
        return;
      }
      *(long *)(lVar7 + (long)(int)param_2 * 8) = lVar10;
      lVar10 = (long)(int)uVar3;
      *(undefined4 **)(lVar7 + lVar10 * 8) = puVar11;
      puVar13 = *(undefined4 **)(lVar7 + (long)(int)param_2 * 8);
      uVar5 = *puVar13;
      *puVar13 = *puVar11;
      *puVar11 = uVar5;
      uVar2 = (int)(lVar10 << 1) + 2;
      uVar12 = lVar10 << 1 | 1;
      if ((int)uVar2 < (int)param_1[1]) {
        uVar4 = (uint)uVar12;
        if (*(float *)(*(long *)(*param_1 + (long)(int)uVar2 * 8) + 4) <=
            *(float *)(*(long *)(*param_1 + uVar12 * 8) + 4)) {
          uVar4 = uVar2;
        }
        uVar12 = (ulong)uVar4;
      }
      param_2 = uVar3;
      iVar9 = (int)uVar12;
    }
  }
  else if (0 < (int)param_2) {
    do {
      lVar7 = *param_1;
      uVar3 = (int)(param_2 - 1) >> 1;
      lVar10 = *(long *)(lVar7 + (ulong)uVar3 * 8);
      puVar11 = *(undefined4 **)(lVar7 + (long)(int)param_2 * 8);
      if (*(float *)(lVar10 + 4) < (float)puVar11[1]) {
        return;
      }
      *(long *)(lVar7 + (long)(int)param_2 * 8) = lVar10;
      *(undefined4 **)(lVar7 + (ulong)uVar3 * 8) = puVar11;
      puVar13 = *(undefined4 **)(lVar7 + (long)(int)param_2 * 8);
      uVar5 = *puVar13;
      *puVar13 = *puVar11;
      *puVar11 = uVar5;
      bVar1 = 2 < (int)param_2;
      param_2 = uVar3;
    } while (bVar1);
  }
  return;
}


