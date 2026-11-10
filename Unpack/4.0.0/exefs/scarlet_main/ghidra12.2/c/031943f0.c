/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031943f0; name: FUN_031943f0
 */


void FUN_031943f0(undefined8 param_1,long param_2,int param_3,int param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  
  puVar10 = PTR_PTR_047d1a50;
  if (param_4 != 0) {
    fVar17 = (float)param_1;
    param_4 = param_4 + -1;
    do {
      iVar6 = *(int *)(param_2 + 0x20);
      lVar16 = (long)iVar6;
      iVar7 = *(int *)(param_2 + 0x30);
      iVar14 = (int)(lVar16 + 3);
      iVar13 = iVar7;
      if ((int)(*(uint *)(param_2 + 0x24) & 0x7fffffff) < iVar14) {
        FUN_02e8df28(param_2 + 0x18,puVar10,lVar16 + 3);
        iVar13 = *(int *)(param_2 + 0x30);
      }
      *(int *)(param_2 + 0x20) = iVar14;
      iVar13 = iVar13 + 3;
      if ((int)(*(uint *)(param_2 + 0x34) & 0x7fffffff) < iVar13) {
        FUN_02ebb440(param_2 + 0x28,puVar10,(long)iVar13);
      }
      piVar4 = (int *)(*(long *)(param_2 + 0x28) + (long)param_3 * 0x10);
      *(int *)(param_2 + 0x30) = iVar13;
      iVar8 = *piVar4;
      lVar15 = *(long *)(param_2 + 0x18);
      piVar11 = piVar4 + 1;
      iVar13 = *piVar11;
      piVar12 = piVar4 + 2;
      iVar14 = *piVar12;
      lVar2 = lVar16 + 1;
      puVar9 = (undefined8 *)(lVar15 + (long)iVar13 * 0x10);
      uVar29 = puVar9[1];
      uVar25 = *puVar9;
      lVar3 = lVar16 + 2;
      puVar9 = (undefined8 *)(lVar15 + (long)iVar8 * 0x10);
      uVar22 = puVar9[1];
      uVar19 = *puVar9;
      fVar18 = (float)uVar19 + (float)uVar25;
      fVar20 = (float)((ulong)uVar19 >> 0x20) + (float)((ulong)uVar25 >> 0x20);
      fVar21 = (float)uVar22 + (float)uVar29;
      fVar23 = (float)((ulong)uVar22 >> 0x20) + (float)((ulong)uVar29 >> 0x20);
      fVar30 = fVar18 * fVar18 + fVar20 * fVar20 + fVar21 * fVar21;
      fVar24 = 0.0;
      fVar27 = 0.0;
      fVar28 = 0.0;
      fVar26 = 0.0;
      puVar9 = (undefined8 *)(lVar15 + lVar16 * 0x10);
      puVar9[1] = CONCAT44(fVar23,fVar21);
      *puVar9 = CONCAT44(fVar20,fVar18);
      if (fVar30 != 0.0) {
        fVar30 = SQRT(fVar30);
        fVar26 = SQRT(fVar18 * fVar18 + fVar20 * fVar20 + fVar21 * fVar21);
        fVar24 = fVar18 / fVar30;
        fVar27 = fVar20 / fVar26;
        fVar28 = fVar21 / fVar30;
        fVar26 = fVar23 / fVar26;
      }
      puVar9 = (undefined8 *)(lVar15 + lVar16 * 0x10);
      puVar9[1] = CONCAT44(fVar17 * fVar26,fVar17 * fVar28);
      *puVar9 = CONCAT44(fVar17 * fVar27,fVar17 * fVar24);
      puVar9 = (undefined8 *)(lVar15 + (long)iVar13 * 0x10);
      uVar22 = puVar9[1];
      uVar19 = *puVar9;
      puVar9 = (undefined8 *)(lVar15 + (long)iVar14 * 0x10);
      uVar29 = puVar9[1];
      uVar25 = *puVar9;
      fVar18 = (float)uVar19 + (float)uVar25;
      fVar20 = (float)((ulong)uVar19 >> 0x20) + (float)((ulong)uVar25 >> 0x20);
      fVar21 = (float)uVar22 + (float)uVar29;
      fVar23 = (float)((ulong)uVar22 >> 0x20) + (float)((ulong)uVar29 >> 0x20);
      fVar30 = fVar18 * fVar18 + fVar20 * fVar20 + fVar21 * fVar21;
      fVar24 = 0.0;
      fVar27 = 0.0;
      fVar28 = 0.0;
      fVar26 = 0.0;
      puVar9 = (undefined8 *)(lVar15 + lVar2 * 0x10);
      puVar9[1] = CONCAT44(fVar23,fVar21);
      *puVar9 = CONCAT44(fVar20,fVar18);
      if (fVar30 != 0.0) {
        fVar30 = SQRT(fVar30);
        fVar26 = SQRT(fVar18 * fVar18 + fVar20 * fVar20 + fVar21 * fVar21);
        fVar24 = fVar18 / fVar30;
        fVar27 = fVar20 / fVar26;
        fVar28 = fVar21 / fVar30;
        fVar26 = fVar23 / fVar26;
      }
      puVar9 = (undefined8 *)(lVar15 + lVar2 * 0x10);
      puVar9[1] = CONCAT44(fVar17 * fVar26,fVar17 * fVar28);
      *puVar9 = CONCAT44(fVar17 * fVar27,fVar17 * fVar24);
      puVar9 = (undefined8 *)(lVar15 + (long)iVar14 * 0x10);
      uVar22 = puVar9[1];
      uVar19 = *puVar9;
      puVar9 = (undefined8 *)(lVar15 + (long)iVar8 * 0x10);
      uVar29 = puVar9[1];
      uVar25 = *puVar9;
      fVar18 = (float)uVar19 + (float)uVar25;
      fVar20 = (float)((ulong)uVar19 >> 0x20) + (float)((ulong)uVar25 >> 0x20);
      fVar21 = (float)uVar22 + (float)uVar29;
      fVar23 = (float)((ulong)uVar22 >> 0x20) + (float)((ulong)uVar29 >> 0x20);
      fVar30 = fVar18 * fVar18 + fVar20 * fVar20 + fVar21 * fVar21;
      fVar26 = 0.0;
      fVar27 = 0.0;
      fVar28 = 0.0;
      fVar24 = 0.0;
      puVar9 = (undefined8 *)(lVar15 + lVar3 * 0x10);
      puVar9[1] = CONCAT44(fVar23,fVar21);
      *puVar9 = CONCAT44(fVar20,fVar18);
      if (fVar30 != 0.0) {
        fVar30 = SQRT(fVar30);
        fVar24 = SQRT(fVar18 * fVar18 + fVar20 * fVar20 + fVar21 * fVar21);
        fVar26 = fVar18 / fVar30;
        fVar27 = fVar20 / fVar24;
        fVar28 = fVar21 / fVar30;
        fVar24 = fVar23 / fVar24;
      }
      puVar9 = (undefined8 *)(lVar15 + lVar3 * 0x10);
      puVar9[1] = CONCAT44(fVar17 * fVar24,fVar17 * fVar28);
      *puVar9 = CONCAT44(fVar17 * fVar27,fVar17 * fVar26);
      lVar16 = *(long *)(param_2 + 0x28);
      piVar1 = (int *)(lVar16 + (long)(iVar7 + 1) * 0x10);
      piVar5 = (int *)(lVar16 + (long)iVar7 * 0x10);
      *piVar5 = *piVar4;
      piVar5[1] = iVar6;
      iVar14 = (int)lVar3;
      piVar5[2] = iVar14;
      *piVar1 = iVar6;
      piVar5 = (int *)(lVar16 + (long)(iVar7 + 2) * 0x10);
      iVar13 = (int)lVar2;
      piVar1[1] = *piVar11;
      piVar1[2] = iVar13;
      *piVar5 = iVar14;
      piVar5[1] = iVar13;
      piVar5[2] = *piVar12;
      *piVar4 = iVar6;
      *piVar11 = iVar13;
      *piVar12 = iVar14;
      FUN_031943f0(param_1,param_2,iVar7,param_4);
      FUN_031943f0(param_1,param_2,iVar7 + 1,param_4);
      FUN_031943f0(param_1,param_2,iVar7 + 2,param_4);
      param_4 = param_4 + -1;
    } while (param_4 != -1);
  }
  return;
}


