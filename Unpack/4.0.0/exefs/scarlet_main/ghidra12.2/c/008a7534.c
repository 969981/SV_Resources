/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a7534; name: FUN_008a7534
 */


void FUN_008a7534(long param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  lVar7 = *(long *)(param_1 + 0x18);
  puVar4 = *(undefined8 **)(param_2 + 8);
  if (lVar7 != 0) {
    puVar4 = (undefined8 *)(lVar7 + 0x70);
  }
  fVar10 = *(float *)(param_1 + 0x48);
  fVar12 = *(float *)(param_1 + 0x4c);
  if ((*(char *)(param_2 + 0x1c) != '\0') && ((*(byte *)(param_1 + 0x58) >> 2 & 1) != 0)) {
    fVar10 = *(float *)(param_2 + 0x10) * fVar10;
    fVar12 = *(float *)(param_2 + 0x14) * fVar12;
  }
  bVar5 = *(byte *)(param_1 + 0x5b) >> 4 & 3;
  fVar13 = *(float *)(param_1 + 0x38);
  fVar11 = *(float *)(param_1 + 0x30);
  fVar15 = *(float *)(param_1 + 0x34);
  if (bVar5 == 2) {
    fVar16 = *(float *)(lVar7 + 0x50);
    fVar17 = 0.5;
LAB_008a75ac:
    fVar11 = fVar11 + fVar16 * fVar17;
  }
  else if (bVar5 == 1) {
    fVar16 = *(float *)(lVar7 + 0x50);
    fVar17 = -0.5;
    goto LAB_008a75ac;
  }
  bVar5 = *(byte *)(param_1 + 0x5b) >> 6;
  if (bVar5 == 2) {
    fVar16 = *(float *)(lVar7 + 0x54);
    fVar17 = -0.5;
  }
  else {
    if (bVar5 != 1) goto LAB_008a75e4;
    fVar16 = *(float *)(lVar7 + 0x54);
    fVar17 = 0.5;
  }
  fVar15 = fVar15 + fVar16 * fVar17;
LAB_008a75e4:
  if ((*(float *)(param_1 + 0x3c) != 0.0) || (*(float *)(param_1 + 0x40) != 0.0)) {
    fVar16 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
    fVar16 = fVar16 / *(float *)PTR_FloatDegree180_047d2390;
    uVar8 = (ulong)(*(float *)(param_1 + 0x3c) * fVar16);
    uVar6 = (ulong)(fVar16 * *(float *)(param_1 + 0x40));
    uVar9 = (ulong)(fVar16 * *(float *)(param_1 + 0x44));
    uVar27 = puVar4[3];
    pfVar1 = (float *)(PTR_SinCosSampleTable_047d2398 + (uVar8 >> 0x18 & 0xff) * 0x10);
    pfVar2 = (float *)(PTR_SinCosSampleTable_047d2398 + (uVar6 >> 0x18 & 0xff) * 0x10);
    fVar16 = (float)((uint)uVar8 & 0xffffff) * 5.9604645e-08;
    fVar18 = (float)((uint)uVar6 & 0xffffff) * 5.9604645e-08;
    pfVar3 = (float *)(PTR_SinCosSampleTable_047d2398 + (uVar9 >> 0x18 & 0xff) * 0x10);
    fVar29 = pfVar1[1] + pfVar1[3] * fVar16;
    fVar17 = *pfVar1 + pfVar1[2] * fVar16;
    fVar22 = (float)((uint)uVar9 & 0xffffff) * 5.9604645e-08;
    fVar28 = pfVar2[1] + pfVar2[3] * fVar18;
    fVar16 = *pfVar2 + pfVar2[2] * fVar18;
    fVar30 = pfVar3[1] + pfVar3[3] * fVar22;
    fVar18 = *pfVar3 + pfVar3[2] * fVar22;
    fVar32 = fVar10 * -fVar28;
    fVar31 = fVar16 * fVar30 * fVar10;
    fVar10 = fVar16 * fVar18 * fVar10;
    fVar19 = fVar17 * fVar16;
    fVar21 = fVar29 * fVar16 * fVar12;
    fVar20 = (fVar29 * fVar28 * fVar18 - fVar17 * fVar30) * fVar12;
    fVar12 = (fVar29 * fVar28 * fVar30 + fVar17 * fVar18) * fVar12;
    fVar16 = fVar29 * fVar30 + fVar28 * fVar17 * fVar18;
    fVar17 = fVar28 * fVar17 * fVar30 - fVar29 * fVar18;
    uVar14 = puVar4[5];
    fVar29 = (float)*puVar4;
    fVar30 = (float)((ulong)*puVar4 >> 0x20);
    fVar24 = (float)puVar4[2];
    fVar25 = (float)((ulong)puVar4[2] >> 0x20);
    fVar23 = (float)puVar4[1];
    fVar26 = (float)uVar27;
    fVar18 = (float)puVar4[4];
    fVar22 = (float)((ulong)puVar4[4] >> 0x20);
    fVar28 = (float)uVar14;
    *(ulong *)(param_1 + 0x78) =
         CONCAT44((float)((ulong)puVar4[1] >> 0x20) +
                  fVar11 * fVar29 + fVar15 * fVar30 + fVar13 * fVar23,
                  fVar16 * fVar29 + fVar17 * fVar30 + fVar19 * fVar23 + 0.0);
    *(ulong *)(param_1 + 0x70) =
         CONCAT44(fVar20 * fVar29 + fVar12 * fVar30 + fVar21 * fVar23 + 0.0,
                  fVar10 * fVar29 + fVar31 * fVar30 + fVar32 * fVar23 + 0.0);
    *(ulong *)(param_1 + 0x88) =
         CONCAT44((float)((ulong)uVar27 >> 0x20) +
                  fVar11 * fVar24 + fVar15 * fVar25 + fVar13 * fVar26,
                  fVar16 * fVar24 + fVar17 * fVar25 + fVar19 * fVar26 + 0.0);
    *(ulong *)(param_1 + 0x80) =
         CONCAT44(fVar20 * fVar24 + fVar12 * fVar25 + fVar21 * fVar26 + 0.0,
                  fVar10 * fVar24 + fVar31 * fVar25 + fVar32 * fVar26 + 0.0);
    *(ulong *)(param_1 + 0x98) =
         CONCAT44((float)((ulong)uVar14 >> 0x20) +
                  fVar11 * fVar18 + fVar15 * fVar22 + fVar13 * fVar28,
                  fVar16 * fVar18 + fVar17 * fVar22 + fVar19 * fVar28 + 0.0);
    *(ulong *)(param_1 + 0x90) =
         CONCAT44(fVar20 * fVar18 + fVar12 * fVar22 + fVar21 * fVar28 + 0.0,
                  fVar10 * fVar18 + fVar31 * fVar22 + fVar32 * fVar28 + 0.0);
    return;
  }
  if (*(float *)(param_1 + 0x44) == 0.0) {
    uVar14 = puVar4[3];
    fVar18 = (float)puVar4[1];
    fVar16 = (float)*puVar4;
    fVar17 = (float)((ulong)*puVar4 >> 0x20);
    fVar19 = (float)uVar14;
    fVar28 = (float)((ulong)puVar4[2] >> 0x20);
    fVar22 = (float)puVar4[2];
    uVar27 = puVar4[5];
    fVar20 = (float)puVar4[4];
    fVar21 = (float)((ulong)puVar4[4] >> 0x20);
    fVar29 = (float)uVar27;
    *(ulong *)(param_1 + 0x78) =
         CONCAT44((float)((ulong)puVar4[1] >> 0x20) +
                  fVar11 * fVar16 + fVar15 * fVar17 + fVar13 * fVar18,fVar18);
    *(ulong *)(param_1 + 0x70) = CONCAT44(fVar12 * fVar17,fVar10 * fVar16);
    *(ulong *)(param_1 + 0x88) =
         CONCAT44((float)((ulong)uVar14 >> 0x20) +
                  fVar11 * fVar22 + fVar15 * fVar28 + fVar13 * fVar19,fVar19);
    *(ulong *)(param_1 + 0x80) = CONCAT44(fVar12 * fVar28,fVar10 * fVar22);
    *(ulong *)(param_1 + 0x98) =
         CONCAT44((float)((ulong)uVar27 >> 0x20) +
                  fVar11 * fVar20 + fVar15 * fVar21 + fVar13 * fVar29,fVar29);
    *(ulong *)(param_1 + 0x90) = CONCAT44(fVar12 * fVar21,fVar10 * fVar20);
    return;
  }
  fVar16 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
  uVar8 = (ulong)(*(float *)(param_1 + 0x44) * (fVar16 / *(float *)PTR_FloatDegree180_047d2390));
  pfVar1 = (float *)(PTR_SinCosSampleTable_047d2398 + (uVar8 >> 0x18 & 0xff) * 0x10);
  fVar16 = (float)((uint)uVar8 & 0xffffff) * 5.9604645e-08;
  fVar17 = *pfVar1 + pfVar1[2] * fVar16;
  uVar27 = puVar4[3];
  fVar18 = pfVar1[1] + pfVar1[3] * fVar16;
  fVar16 = fVar18 * -fVar12;
  fVar18 = fVar18 * fVar10;
  fVar10 = fVar17 * fVar10;
  fVar17 = fVar17 * fVar12;
  uVar14 = puVar4[5];
  fVar19 = (float)*puVar4;
  fVar20 = (float)((ulong)*puVar4 >> 0x20);
  fVar21 = (float)puVar4[1];
  fVar29 = (float)puVar4[2];
  fVar30 = (float)((ulong)puVar4[2] >> 0x20);
  fVar23 = (float)uVar27;
  fVar12 = (float)puVar4[4];
  fVar22 = (float)((ulong)puVar4[4] >> 0x20);
  fVar28 = (float)uVar14;
  *(ulong *)(param_1 + 0x78) =
       CONCAT44((float)((ulong)puVar4[1] >> 0x20) +
                fVar11 * fVar19 + fVar15 * fVar20 + fVar13 * fVar21,
                fVar19 * 0.0 + fVar20 * 0.0 + fVar21 * 1.0 + 0.0);
  *(ulong *)(param_1 + 0x70) =
       CONCAT44(fVar16 * fVar19 + fVar17 * fVar20 + fVar21 * 0.0 + 0.0,
                fVar10 * fVar19 + fVar18 * fVar20 + fVar21 * 0.0 + 0.0);
  *(ulong *)(param_1 + 0x88) =
       CONCAT44((float)((ulong)uVar27 >> 0x20) + fVar11 * fVar29 + fVar15 * fVar30 + fVar13 * fVar23
                ,fVar29 * 0.0 + fVar30 * 0.0 + fVar23 * 1.0 + 0.0);
  *(ulong *)(param_1 + 0x80) =
       CONCAT44(fVar16 * fVar29 + fVar17 * fVar30 + fVar23 * 0.0 + 0.0,
                fVar10 * fVar29 + fVar18 * fVar30 + fVar23 * 0.0 + 0.0);
  *(ulong *)(param_1 + 0x98) =
       CONCAT44((float)((ulong)uVar14 >> 0x20) + fVar11 * fVar12 + fVar15 * fVar22 + fVar13 * fVar28
                ,fVar12 * 0.0 + fVar22 * 0.0 + fVar28 * 1.0 + 0.0);
  *(ulong *)(param_1 + 0x90) =
       CONCAT44(fVar16 * fVar12 + fVar17 * fVar22 + fVar28 * 0.0 + 0.0,
                fVar10 * fVar12 + fVar18 * fVar22 + fVar28 * 0.0 + 0.0);
  return;
}


