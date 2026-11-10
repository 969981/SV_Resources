/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dce39c; name: FUN_00dce39c
 */


void FUN_00dce39c(undefined1 (*param_1) [12],undefined8 *param_2)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined8 uVar20;
  float fVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar24;
  undefined1 auVar23 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar38;
  undefined1 auVar37 [16];
  undefined8 uVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  
  fVar35 = (float)*(undefined8 *)(*param_1 + 8);
  fVar30 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  uVar17 = *(undefined8 *)*param_1;
  fVar27 = (float)uVar17;
  fVar34 = (float)((ulong)uVar17 >> 0x20);
  pauVar1 = (undefined1 (*) [12])(param_1[1] + 4);
  fVar19 = (float)((ulong)*(undefined8 *)param_1[2] >> 0x20);
  uVar39 = *(undefined8 *)*pauVar1;
  fVar32 = (float)((ulong)uVar39 >> 0x20);
  auVar18._12_4_ = fVar19;
  auVar18._0_12_ = *pauVar1;
  auVar21._12_4_ = fVar19;
  auVar21._0_12_ = *pauVar1;
  auVar21 = NEON_ext(auVar18,auVar21,8,1);
  auVar37._12_4_ = fVar30;
  auVar37._0_12_ = *param_1;
  auVar4._12_4_ = fVar30;
  auVar4._0_12_ = *param_1;
  auVar18 = NEON_ext(auVar37,auVar4,8,1);
  uVar20 = NEON_ext(uVar39,auVar21._0_8_,4,1);
  uVar17 = NEON_ext(uVar17,auVar18._0_8_,4,1);
  fVar26 = fVar27 * (float)uVar20;
  fVar28 = fVar34 * (float)((ulong)uVar20 >> 0x20);
  fVar29 = fVar35 * (float)uVar39;
  fVar30 = fVar30 * fVar32;
  fVar31 = (float)uVar39 * (float)uVar17;
  fVar32 = fVar32 * (float)((ulong)uVar17 >> 0x20);
  fVar33 = (float)*(undefined8 *)param_1[2] * fVar27;
  auVar22._0_4_ = fVar26 - fVar31;
  auVar22._4_4_ = fVar28 - fVar32;
  auVar22._8_4_ = fVar29 - fVar33;
  auVar22._12_4_ = fVar30 - fVar19 * fVar34;
  auVar18 = NEON_ext(auVar22,auVar22,4,1);
  fVar12 = auVar18._0_4_;
  fVar15 = auVar18._4_4_;
  fVar36 = fVar12 * fVar12 + fVar15 * fVar15 + auVar22._0_4_ * auVar22._0_4_;
  if (1.1920929e-07 <= fVar36) {
    fVar11 = 0.0;
    fVar14 = 0.0;
    fVar16 = 0.0;
    fVar13 = 0.0;
    auVar41 = ZEXT816(0);
    if (fVar36 != 0.0) {
      fVar24 = SQRT(fVar12 * fVar12 + fVar15 * fVar15 + auVar22._0_4_ * auVar22._0_4_);
      auVar41._0_4_ = fVar12 / SQRT(fVar36);
      auVar41._4_4_ = fVar15 / fVar24;
      auVar41._8_4_ = auVar22._0_4_ / SQRT(fVar36);
      auVar41._12_4_ = 0.0 / fVar24;
    }
    auVar18 = *(undefined1 (*) [16])(param_1[2] + 8);
    auVar37 = NEON_ext(auVar18,auVar18,8,1);
    auVar21 = NEON_ext(auVar41,auVar41,4,1);
    uVar39 = NEON_ext(auVar18._0_8_,auVar37._0_8_,4,1);
    fVar12 = auVar18._0_4_;
    fVar15 = auVar18._4_4_;
    fVar36 = auVar18._8_4_;
    fVar24 = auVar18._12_4_;
    fVar38 = (float)((ulong)uVar39 >> 0x20);
    fVar43 = auVar41._0_4_ * (float)uVar39 - fVar12 * auVar21._0_4_;
    fVar44 = auVar41._4_4_ * fVar38 - fVar15 * auVar21._4_4_;
    fVar45 = auVar41._8_4_ * fVar12 - fVar36 * auVar41._0_4_;
    fVar46 = auVar41._12_4_ * fVar15 - fVar24 * auVar41._4_4_;
    auVar9._4_4_ = fVar44;
    auVar9._0_4_ = fVar43;
    auVar9._8_4_ = fVar45;
    auVar9._12_4_ = fVar46;
    auVar10._4_4_ = fVar44;
    auVar10._0_4_ = fVar43;
    auVar10._8_4_ = fVar45;
    auVar10._12_4_ = fVar46;
    auVar18 = NEON_ext(auVar9,auVar10,4,1);
    fVar45 = auVar18._0_4_;
    fVar46 = auVar18._4_4_;
    fVar44 = fVar45 * fVar45 + fVar46 * fVar46 + fVar43 * fVar43;
    auVar23 = ZEXT816(0);
    if (fVar44 != 0.0) {
      fVar44 = SQRT(fVar44);
      fVar25 = SQRT(fVar45 * fVar45 + fVar46 * fVar46 + fVar43 * fVar43);
      auVar23._0_4_ = fVar45 / fVar44;
      auVar23._4_4_ = fVar46 / fVar25;
      auVar23._8_4_ = fVar43 / fVar44;
      auVar23._12_4_ = 0.0 / fVar25;
    }
    auVar18 = NEON_ext(auVar23,auVar23,4,1);
    fVar45 = auVar23._0_4_;
    fVar46 = auVar23._4_4_;
    auVar42._0_4_ = (float)uVar39 * fVar45 - fVar12 * auVar18._0_4_;
    auVar42._4_4_ = fVar38 * fVar46 - fVar15 * auVar18._4_4_;
    auVar42._8_4_ = fVar12 * auVar23._8_4_ - fVar36 * fVar45;
    auVar42._12_4_ = fVar15 * auVar23._12_4_ - fVar24 * fVar46;
    auVar18 = NEON_ext(auVar42,auVar42,4,1);
    fVar38 = auVar18._0_4_;
    fVar43 = auVar18._4_4_;
    fVar44 = fVar38 * fVar38 + fVar43 * fVar43 + auVar42._0_4_ * auVar42._0_4_;
    if (fVar44 != 0.0) {
      fVar44 = SQRT(fVar44);
      fVar13 = SQRT(fVar38 * fVar38 + fVar43 * fVar43 + auVar42._0_4_ * auVar42._0_4_);
      fVar11 = fVar38 / fVar44;
      fVar14 = fVar43 / fVar13;
      fVar16 = auVar42._0_4_ / fVar44;
      fVar13 = 0.0 / fVar13;
    }
    fVar43 = *(float *)param_1[4] - *(float *)(param_1[6] + 8);
    fVar25 = *(float *)(param_1[4] + 4) - *(float *)param_1[7];
    fVar40 = *(float *)(param_1[4] + 8) - *(float *)(param_1[7] + 4);
    auVar21 = NEON_ext(auVar23,auVar23,8,1);
    auVar2._4_4_ = fVar14;
    auVar2._0_4_ = fVar11;
    auVar2._8_4_ = fVar16;
    auVar2._12_4_ = fVar13;
    auVar3._4_4_ = fVar14;
    auVar3._0_4_ = fVar11;
    auVar3._8_4_ = fVar16;
    auVar3._12_4_ = fVar13;
    auVar18 = NEON_ext(auVar2,auVar3,8,1);
    fVar44 = auVar21._0_4_ * fVar40 + fVar45 * fVar43 + fVar46 * fVar25;
    fVar38 = auVar18._0_4_ * fVar40 + fVar11 * fVar43 + fVar14 * fVar25;
    fVar43 = auVar37._0_4_ * fVar40 + fVar12 * fVar43 + fVar15 * fVar25;
    if (param_1[8][8] == '\0') {
      fVar32 = (float)*(undefined8 *)param_1[6];
      fVar19 = (float)*(undefined8 *)(param_1[5] + 4);
      fVar30 = (float)((ulong)*(undefined8 *)(param_1[5] + 4) >> 0x20);
    }
    else {
      fVar31 = fVar31 - fVar26;
      fVar32 = fVar32 - fVar28;
      fVar33 = fVar33 - fVar29;
      fVar30 = fVar19 * fVar34 - fVar30;
      auVar7._4_4_ = fVar32;
      auVar7._0_4_ = fVar31;
      auVar7._8_4_ = fVar33;
      auVar7._12_4_ = fVar30;
      auVar8._4_4_ = fVar32;
      auVar8._0_4_ = fVar31;
      auVar8._8_4_ = fVar33;
      auVar8._12_4_ = fVar30;
      auVar18 = NEON_ext(auVar7,auVar8,4,1);
      fVar29 = (float)*(undefined8 *)param_1[6];
      fVar26 = (float)*(undefined8 *)(param_1[5] + 4);
      fVar28 = (float)((ulong)*(undefined8 *)(param_1[5] + 4) >> 0x20);
      fVar32 = auVar18._0_4_ * fVar26;
      fVar19 = auVar18._4_4_ * fVar28;
      fVar30 = (float)((ulong)*(undefined8 *)param_1[6] >> 0x20) * 0.0;
      auVar5._4_4_ = fVar19;
      auVar5._0_4_ = fVar32;
      auVar5._8_4_ = fVar31 * fVar29;
      auVar5._12_4_ = fVar30;
      auVar6._4_4_ = fVar19;
      auVar6._0_4_ = fVar32;
      auVar6._8_4_ = fVar31 * fVar29;
      auVar6._12_4_ = fVar30;
      auVar18 = NEON_ext(auVar5,auVar6,8,1);
      fVar30 = fVar32 + fVar19 + auVar18._0_4_;
      fVar27 = -(fVar27 * fVar26 + fVar34 * fVar28 + fVar35 * fVar29);
      fVar32 = SQRT(fVar29 * fVar29 + fVar26 * fVar26 + fVar28 * fVar28);
      fVar34 = fVar27 * fVar27 + fVar30 * fVar30 + 0.0;
      if (fVar34 == 0.0) {
        fVar19 = 0.0;
        fVar30 = 0.0;
        fVar34 = 0.0;
      }
      else {
        fVar34 = SQRT(fVar34);
        fVar19 = fVar27 / fVar34;
        fVar30 = fVar30 / SQRT(fVar27 * fVar27 + fVar30 * fVar30 + 0.0);
        fVar34 = 0.0 / fVar34;
      }
      fVar19 = fVar32 * fVar19;
      fVar30 = SQRT(fVar29 * fVar29 + fVar26 * fVar26 + fVar28 * fVar28) * fVar30;
      fVar32 = fVar32 * fVar34;
    }
    fVar19 = fVar19 - fVar44;
    fVar30 = fVar30 - fVar38;
    fVar32 = fVar32 - fVar43;
    fVar27 = fVar19 * fVar19 + fVar30 * fVar30 + fVar32 * fVar32;
    fVar34 = *(float *)param_1[8];
    fVar35 = *(float *)(param_1[8] + 4);
    if (fVar34 * fVar34 * fVar27 <= fVar35 * fVar35) {
      fVar27 = fVar34;
    }
    else {
      if (fVar27 == 0.0) {
        fVar34 = 0.0;
        fVar27 = 0.0;
      }
      else {
        uVar39 = NEON_fmov(0x3f800000,4);
        fVar34 = (float)uVar39 / SQRT(fVar27);
        fVar27 = (float)((ulong)uVar39 >> 0x20) /
                 SQRT(fVar19 * fVar19 + fVar30 * fVar30 + fVar32 * fVar32);
      }
      fVar34 = fVar35 * fVar34;
      fVar27 = fVar35 * fVar27;
    }
    fVar44 = fVar44 + fVar19 * fVar34;
    fVar38 = fVar38 + fVar30 * fVar27;
    fVar43 = fVar43 + fVar32 * fVar34;
    fVar12 = fVar12 * fVar43 + fVar45 * fVar44 + fVar11 * fVar38;
    fVar15 = fVar15 * fVar43 + fVar46 * fVar44 + fVar14 * fVar38;
    fVar27 = fVar36 * fVar43 + auVar23._8_4_ * fVar44 + fVar16 * fVar38;
    fVar34 = fVar24 * fVar43 + auVar23._12_4_ * fVar44 + fVar13 * fVar38;
    param_2[1] = CONCAT44(fVar34,fVar27);
    *param_2 = CONCAT44(fVar15,fVar12);
    fVar32 = *(float *)(param_1[6] + 8);
    fVar19 = *(float *)param_1[7];
    param_2[1] = CONCAT44(*(float *)(param_1[7] + 8) + fVar34,*(float *)(param_1[7] + 4) + fVar27);
    *param_2 = CONCAT44(fVar19 + fVar15,fVar32 + fVar12);
  }
  return;
}


