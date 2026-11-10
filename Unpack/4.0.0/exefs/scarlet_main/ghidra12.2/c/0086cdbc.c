/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0086cdbc; name: FUN_0086cdbc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0086cdbc(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined *puVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar15;
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  uVar11 = _DAT_03cabaf0;
  *(undefined8 *)(param_1 + 0xd68) = _UNK_03cabaf8;
  *(undefined8 *)(param_1 + 0xd60) = uVar11;
  uVar11 = _DAT_03caa8a0;
  *(undefined8 *)(param_1 + 0xd78) = _UNK_03caa8a8;
  *(undefined8 *)(param_1 + 0xd70) = uVar11;
  uVar12 = *(undefined8 *)(param_1 + 0x8d8);
  uVar11 = *(undefined8 *)(param_1 + 0x8d0);
  fVar27 = (float)uVar11;
  auVar16._0_4_ = *(float *)(param_1 + 0x8e0) - fVar27;
  fVar28 = (float)((ulong)uVar11 >> 0x20);
  auVar16._4_4_ = *(float *)(param_1 + 0x8e4) - fVar28;
  fVar29 = (float)uVar12;
  auVar16._8_4_ = *(float *)(param_1 + 0x8e8) - fVar29;
  fVar30 = (float)((ulong)uVar12 >> 0x20);
  auVar16._12_4_ = *(float *)(param_1 + 0x8ec) - fVar30;
  fVar19 = *(float *)(param_1 + 0x8f0) - fVar27;
  fVar20 = *(float *)(param_1 + 0x8f4) - fVar28;
  fVar21 = *(float *)(param_1 + 0x8f8) - fVar29;
  fVar22 = *(float *)(param_1 + 0x8fc) - fVar30;
  auVar14 = NEON_ext(auVar16,auVar16,4,1);
  *(undefined8 *)(param_1 + 0x1568) = uVar12;
  *(undefined8 *)(param_1 + 0x1560) = uVar11;
  auVar33._4_4_ = fVar20;
  auVar33._0_4_ = fVar19;
  auVar33._8_4_ = fVar21;
  auVar33._12_4_ = fVar22;
  auVar25._4_4_ = fVar20;
  auVar25._0_4_ = fVar19;
  auVar25._8_4_ = fVar21;
  auVar25._12_4_ = fVar22;
  auVar25 = NEON_ext(auVar33,auVar25,4,1);
  auVar33 = *(undefined1 (*) [16])(param_1 + 0x90);
  auVar26._0_4_ = auVar16._0_4_ * auVar25._0_4_ - fVar19 * auVar14._0_4_;
  auVar26._4_4_ = auVar16._4_4_ * auVar25._4_4_ - fVar20 * auVar14._4_4_;
  auVar26._8_4_ = auVar16._8_4_ * fVar19 - fVar21 * auVar16._0_4_;
  auVar26._12_4_ = auVar16._12_4_ * fVar20 - fVar22 * auVar16._4_4_;
  auVar25 = NEON_ext(auVar26,auVar26,4,1);
  fVar13 = auVar25._0_4_;
  fVar15 = auVar25._4_4_;
  auVar14._0_8_ = auVar25._0_8_;
  auVar14._8_4_ = auVar26._0_4_;
  auVar14._12_4_ = 0;
  fVar23 = fVar13 * fVar13 + fVar15 * fVar15 + auVar26._0_4_ * auVar26._0_4_;
  *(undefined4 *)(param_1 + 0xd58) = 2;
  *(ulong *)(param_1 + 0x1d68) = (ulong)(uint)auVar26._0_4_;
  *(undefined8 *)(param_1 + 0x1d60) = auVar14._0_8_;
  puVar9 = PTR_DAT_047d19b0;
  if (fVar23 <= (float)*(undefined8 *)(param_1 + 0x68)) {
    FUN_0086d3b0(param_1,0);
    uVar12 = *(undefined8 *)(param_1 + 0x1568);
    uVar11 = *(undefined8 *)(param_1 + 0x1560);
    auVar14 = *(undefined1 (*) [16])(param_1 + 0x1d60);
    fVar27 = *(float *)(param_1 + 0x2760);
    fVar19 = *(float *)(param_1 + 0x2960);
    fVar20 = *(float *)(param_1 + 0x2560);
    uVar10 = *(undefined1 *)(param_1 + 0x2b60);
  }
  else {
    fVar27 = auVar33._0_4_ - fVar27;
    fVar28 = auVar33._4_4_ - fVar28;
    fVar29 = auVar33._8_4_ - fVar29;
    fVar30 = auVar33._12_4_ - fVar30;
    auVar17._0_4_ = ABS(auVar16._0_4_);
    auVar17._4_4_ = ABS(auVar16._4_4_);
    auVar17._8_4_ = ABS(auVar16._8_4_);
    auVar17._12_4_ = ABS(auVar16._12_4_);
    fVar19 = ABS(fVar19);
    fVar20 = ABS(fVar20);
    *(undefined1 *)(param_1 + 0x2b60) = 0;
    auVar33 = NEON_ext(auVar17,auVar17,8,1);
    auVar1._4_4_ = fVar20;
    auVar1._0_4_ = fVar19;
    auVar1._8_4_ = ABS(fVar21);
    auVar1._12_4_ = ABS(fVar22);
    auVar2._4_4_ = fVar20;
    auVar2._0_4_ = fVar19;
    auVar2._8_4_ = ABS(fVar21);
    auVar2._12_4_ = ABS(fVar22);
    auVar25 = NEON_ext(auVar1,auVar2,8,1);
    auVar34._4_4_ = auVar25._0_4_;
    auVar34._0_4_ = auVar33._0_4_;
    fVar21 = ABS(fVar27);
    fVar22 = ABS(fVar28);
    fVar31 = ABS(fVar29);
    fVar32 = ABS(fVar30);
    auVar6._4_4_ = fVar22;
    auVar6._0_4_ = fVar21;
    auVar6._8_4_ = fVar31;
    auVar6._12_4_ = fVar32;
    auVar7._4_4_ = fVar22;
    auVar7._0_4_ = fVar21;
    auVar7._8_4_ = fVar31;
    auVar7._12_4_ = fVar32;
    auVar33 = NEON_ext(auVar6,auVar7,8,1);
    auVar34._8_8_ = auVar33._0_8_;
    auVar35._4_12_ = auVar33._4_12_;
    auVar35._0_4_ = fVar22;
    auVar18._4_4_ = fVar20;
    auVar18._0_4_ = auVar17._4_4_;
    auVar8._12_4_ = fVar22;
    auVar8._8_4_ = fVar21;
    uVar10 = 0;
    auVar18._8_8_ = auVar35._0_8_;
    fVar20 = (float)*(undefined8 *)(puVar9 + 0x60) / SQRT(fVar23);
    auVar8._4_4_ = fVar19;
    auVar8._0_4_ = auVar17._0_4_;
    auVar33 = NEON_fmax(auVar8,auVar18,4);
    *(float *)(param_1 + 0x2560) = fVar20;
    auVar33 = NEON_fmax(auVar33,auVar34,4);
    auVar25 = NEON_ext(auVar33,auVar33,8,1);
    fVar19 = fVar20 * *(float *)(puVar9 + 0xd0) * auVar25._0_4_ * auVar33._0_4_ * auVar33._4_4_ *
             1.1920929e-07;
    fVar27 = fVar27 * fVar13;
    fVar28 = fVar28 * fVar15;
    fVar29 = fVar29 * auVar26._0_4_;
    fVar30 = fVar30 * 0.0;
    auVar3._4_4_ = fVar28;
    auVar3._0_4_ = fVar27;
    auVar3._8_4_ = fVar29;
    auVar3._12_4_ = fVar30;
    auVar4._4_4_ = fVar28;
    auVar4._0_4_ = fVar27;
    auVar4._8_4_ = fVar29;
    auVar4._12_4_ = fVar30;
    auVar33 = NEON_ext(auVar3,auVar4,8,1);
    fVar27 = fVar20 * (auVar33._0_4_ + fVar27 + fVar28) + fVar19;
    *(float *)(param_1 + 0x2960) = fVar19;
    *(float *)(param_1 + 0x2760) = fVar27;
  }
  *(undefined8 *)(param_1 + 0x1578) = uVar12;
  *(undefined8 *)(param_1 + 0x1570) = uVar11;
  *(float *)(param_1 + 0x2564) = fVar20;
  *(float *)(param_1 + 0x2964) = fVar19;
  *(ulong *)(param_1 + 0x1d78) = CONCAT44(0.0 - auVar14._12_4_,0.0 - auVar14._8_4_);
  *(ulong *)(param_1 + 0x1d70) = CONCAT44(0.0 - auVar14._4_4_,0.0 - auVar14._0_4_);
  *(float *)(param_1 + 0x2764) = (fVar19 + fVar19) - fVar27;
  *(undefined1 *)(param_1 + 0x2b61) = uVar10;
  *(double *)(param_1 + 0x2c00) = 0.0 - *(double *)(param_1 + 0x2be0);
  *(double *)(param_1 + 0x2c08) = 0.0 - *(double *)(param_1 + 0x2be8);
  *(double *)(param_1 + 0x2c10) = 0.0 - *(double *)(param_1 + 0x2bf0);
  dVar5 = *(double *)(param_1 + 0x3bf0);
  *(double *)(param_1 + 0x2c18) = 0.0 - *(double *)(param_1 + 0x2bf8);
  dVar24 = *(double *)(param_1 + 0x3bf8);
  *(double *)(param_1 + 0x3c00) = 0.0 - *(double *)(param_1 + 0x3be0);
  *(double *)(&DAT_00003c08 + param_1) = 0.0 - *(double *)(param_1 + 0x3be8);
  *(double *)(&DAT_00003c10 + param_1) = 0.0 - dVar5;
  *(double *)(param_1 + 0x3c18) = 0.0 - dVar24;
  return;
}


