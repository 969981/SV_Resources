/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03241cc4; name: FUN_03241cc4
 */


undefined8 FUN_03241cc4(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  iVar5 = *(int *)(param_1 + 0x20);
  lVar13 = (long)iVar5;
  iVar7 = *(int *)(param_1 + 0x30);
  lVar12 = (long)iVar7;
  plVar2 = (long *)(param_1 + 0x18);
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < *(int *)(param_2 + 0x20) + iVar5) {
    FUN_02e9b11c(plVar2,PTR_PTR_047d1a50);
  }
  plVar3 = (long *)(param_1 + 0x28);
  if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < *(int *)(param_2 + 0x30) + iVar7) {
    FUN_02ecf594(plVar3,PTR_PTR_047d1a50);
  }
  iVar8 = *(int *)(param_2 + 0x20);
  puVar14 = *(undefined8 **)(param_2 + 0x18);
  iVar6 = *(int *)(param_1 + 0x20);
  iVar4 = iVar6 + iVar8;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar4) {
    FUN_02e8df28(plVar2,PTR_PTR_047d1a50,(long)iVar4);
  }
  if (iVar8 != 0) {
    puVar9 = (undefined8 *)(*plVar2 + (long)iVar6 * 0x10);
    lVar11 = (long)iVar8 * 0x10 + -0x10;
    puVar10 = puVar14;
    if (((uint)lVar11 >> 4 & 1) == 0) {
      puVar9[1] = puVar14[1];
      *puVar9 = *puVar14;
      puVar10 = puVar14 + 2;
      puVar9 = puVar9 + 2;
    }
    if (lVar11 != 0) {
      do {
        puVar9[1] = puVar10[1];
        *puVar9 = *puVar10;
        puVar9[3] = puVar10[3];
        puVar1 = puVar10 + 2;
        puVar10 = puVar10 + 4;
        puVar9[2] = *puVar1;
        puVar9 = puVar9 + 4;
      } while (puVar10 != puVar14 + (long)iVar8 * 2);
    }
  }
  *(int *)(param_1 + 0x20) = iVar4;
  iVar8 = *(int *)(param_2 + 0x30);
  puVar14 = *(undefined8 **)(param_2 + 0x28);
  iVar6 = *(int *)(param_1 + 0x30);
  iVar4 = iVar6 + iVar8;
  if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar4) {
    FUN_02ebb440(plVar3,PTR_PTR_047d1a50,(long)iVar4);
  }
  if (iVar8 != 0) {
    puVar9 = (undefined8 *)(*plVar3 + (long)iVar6 * 0x10);
    lVar11 = (long)iVar8 * 0x10 + -0x10;
    puVar10 = puVar14;
    if (((uint)lVar11 >> 4 & 1) == 0) {
      uVar16 = puVar14[1];
      *puVar9 = *puVar14;
      puVar9[1] = uVar16;
      puVar10 = puVar14 + 2;
      puVar9 = puVar9 + 2;
    }
    if (lVar11 != 0) {
      do {
        uVar16 = puVar10[1];
        *puVar9 = *puVar10;
        puVar9[1] = uVar16;
        puVar1 = puVar10 + 2;
        uVar16 = puVar10[3];
        puVar10 = puVar10 + 4;
        puVar9[2] = *puVar1;
        puVar9[3] = uVar16;
        puVar9 = puVar9 + 4;
      } while (puVar10 != puVar14 + (long)iVar8 * 2);
    }
  }
  *(int *)(param_1 + 0x30) = iVar4;
  if ((param_3 != (undefined8 *)0x0) && (iVar5 < *(int *)(param_1 + 0x20))) {
    do {
      puVar14 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar13 * 0x10);
      uVar19 = puVar14[1];
      uVar16 = *puVar14;
      uVar20 = *param_3;
      uVar21 = param_3[2];
      fVar15 = (float)uVar16;
      uVar23 = param_3[4];
      uVar22 = param_3[6];
      fVar17 = (float)((ulong)uVar16 >> 0x20);
      fVar18 = (float)uVar19;
      puVar14 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar13 * 0x10);
      puVar14[1] = CONCAT44((int)((ulong)uVar19 >> 0x20),
                            (float)param_3[7] + (float)param_3[1] * fVar15 +
                            (float)param_3[3] * fVar17 + (float)param_3[5] * fVar18);
      *puVar14 = CONCAT44((float)((ulong)uVar22 >> 0x20) + (float)((ulong)uVar20 >> 0x20) * fVar15 +
                          (float)((ulong)uVar21 >> 0x20) * fVar17 +
                          (float)((ulong)uVar23 >> 0x20) * fVar18,
                          (float)uVar22 + (float)uVar20 * fVar15 + (float)uVar21 * fVar17 +
                          (float)uVar23 * fVar18);
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x20));
  }
  if ((0 < iVar5) && (iVar7 < *(int *)(param_1 + 0x30))) {
    lVar13 = lVar12 << 4;
    do {
      lVar12 = lVar12 + 1;
      *(int *)(*(long *)(param_1 + 0x28) + lVar13) =
           *(int *)(*(long *)(param_1 + 0x28) + lVar13) + iVar5;
      lVar11 = *(long *)(param_1 + 0x28) + lVar13;
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + iVar5;
      lVar11 = *(long *)(param_1 + 0x28) + lVar13;
      lVar13 = lVar13 + 0x10;
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + iVar5;
    } while (lVar12 < *(int *)(param_1 + 0x30));
  }
  return 0;
}


