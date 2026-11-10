/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026fbb1c; name: FUN_026fbb1c
 */


undefined1  [16] FUN_026fbb1c(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
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
  float fVar37;
  float fVar38;
  float fVar40;
  float fVar41;
  undefined1 auVar39 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar52 [16];
  
  fVar27 = *(float *)(param_2 + 4);
  fVar37 = fVar27 * fVar27;
  fVar23 = *(float *)(param_2 + 2);
  fVar24 = *(float *)((long)param_2 + 0x14);
  fVar25 = *(float *)(param_2 + 3);
  fVar26 = *(float *)((long)param_2 + 0x1c);
  fVar43 = fVar23 * fVar27;
  fVar45 = fVar24 * fVar27;
  fVar47 = fVar25 * fVar27;
  fVar49 = fVar26 * fVar27;
  fVar1 = *(float *)(param_1 + 2);
  fVar2 = *(float *)((long)param_1 + 0x14);
  fVar3 = *(float *)(param_1 + 3);
  fVar14 = (float)*param_1;
  fVar19 = (float)*param_2;
  fVar29 = fVar14 - fVar19;
  fVar15 = (float)((ulong)*param_1 >> 0x20);
  fVar20 = (float)((ulong)*param_2 >> 0x20);
  fVar30 = fVar15 - fVar20;
  fVar16 = (float)param_1[1];
  fVar21 = (float)param_2[1];
  fVar31 = fVar16 - fVar21;
  fVar17 = (float)((ulong)param_1[1] >> 0x20);
  fVar22 = (float)((ulong)param_2[1] >> 0x20);
  fVar32 = fVar17 - fVar22;
  fVar18 = *(float *)(param_1 + 4);
  fVar28 = *(float *)((long)param_1 + 0x1c) * fVar18;
  auVar39._0_4_ = fVar29 * fVar43 + fVar30 * fVar45;
  auVar39._4_4_ = fVar31 * fVar47 + fVar32 * fVar49;
  auVar39._8_4_ = fVar29 * fVar43 + fVar30 * fVar45;
  auVar39._12_4_ = fVar31 * fVar47 + fVar32 * fVar49;
  auVar39 = NEON_ext(auVar39,auVar39,4,1);
  fVar33 = fVar14 + fVar1 * fVar18;
  fVar34 = fVar15 + fVar2 * fVar18;
  fVar35 = fVar16 + fVar3 * fVar18;
  fVar36 = fVar17 + fVar28;
  fVar38 = fVar33 - fVar19;
  fVar40 = fVar34 - fVar20;
  fVar41 = fVar35 - fVar21;
  fVar42 = fVar36 - fVar22;
  fVar44 = fVar38 * fVar43;
  fVar46 = fVar40 * fVar45;
  fVar48 = fVar41 * fVar47;
  fVar50 = fVar42 * fVar49;
  fVar51 = fVar14 - (auVar39._0_4_ + auVar39._4_4_) * (fVar43 / fVar37);
  fVar53 = fVar15 - (auVar39._8_4_ + auVar39._12_4_) * (fVar45 / fVar37);
  fVar54 = fVar16 - (auVar39._0_4_ + auVar39._4_4_) * (fVar47 / fVar37);
  fVar55 = fVar17 - (auVar39._8_4_ + auVar39._12_4_) * (fVar49 / fVar37);
  auVar52._0_4_ = fVar44 + fVar46;
  auVar52._4_4_ = fVar48 + fVar50;
  auVar52._8_4_ = fVar44 + fVar46;
  auVar52._12_4_ = fVar48 + fVar50;
  auVar39 = NEON_ext(auVar52,auVar52,4,1);
  fVar33 = (fVar33 - (fVar43 / fVar37) * (auVar39._0_4_ + auVar39._4_4_)) - fVar51;
  fVar34 = (fVar34 - (fVar45 / fVar37) * (auVar39._8_4_ + auVar39._12_4_)) - fVar53;
  fVar35 = (fVar35 - (fVar47 / fVar37) * (auVar39._0_4_ + auVar39._4_4_)) - fVar54;
  fVar36 = (fVar36 - (fVar49 / fVar37) * (auVar39._8_4_ + auVar39._12_4_)) - fVar55;
  bVar4 = false;
  bVar6 = true;
  bVar7 = false;
  if (fVar33 < 1.1920929e-07) {
    bVar4 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar33)) {
      bVar4 = fVar33 < -1.1920929e-07;
      bVar6 = fVar33 == -1.1920929e-07;
      bVar7 = false;
    }
  }
  bVar5 = false;
  if ((!bVar6 && bVar4 == bVar7) && (bVar5 = false, !NAN(fVar34))) {
    bVar5 = fVar34 < 1.1920929e-07;
  }
  bVar4 = false;
  bVar6 = true;
  bVar7 = false;
  if (bVar5) {
    bVar4 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar34)) {
      bVar4 = fVar34 < -1.1920929e-07;
      bVar6 = fVar34 == -1.1920929e-07;
      bVar7 = false;
    }
  }
  bVar5 = false;
  if ((!bVar6 && bVar4 == bVar7) && (bVar5 = false, !NAN(fVar35))) {
    bVar5 = fVar35 < 1.1920929e-07;
  }
  bVar4 = false;
  bVar6 = true;
  bVar7 = false;
  if (bVar5) {
    bVar4 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar35)) {
      bVar4 = fVar35 < -1.1920929e-07;
      bVar6 = fVar35 == -1.1920929e-07;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar4 != bVar7) {
    fVar37 = (fVar19 - fVar51) * fVar33;
    fVar43 = (fVar20 - fVar53) * fVar34;
    fVar44 = (fVar21 - fVar54) * fVar35;
    fVar45 = (fVar22 - fVar55) * fVar36;
    auVar8._0_4_ = fVar37 + fVar43;
    auVar8._4_4_ = fVar44 + fVar45;
    auVar8._8_4_ = fVar37 + fVar43;
    auVar8._12_4_ = fVar44 + fVar45;
    auVar9._0_4_ = fVar33 * fVar33 + fVar34 * fVar34;
    auVar9._4_4_ = fVar35 * fVar35 + fVar36 * fVar36;
    auVar9._8_4_ = fVar33 * fVar33 + fVar34 * fVar34;
    auVar9._12_4_ = fVar35 * fVar35 + fVar36 * fVar36;
    auVar52 = NEON_ext(auVar8,auVar8,4,1);
    auVar39 = NEON_ext(auVar9,auVar9,4,1);
    fVar33 = (auVar52._0_4_ + auVar52._4_4_) / (auVar39._0_4_ + auVar39._4_4_);
    if ((0.0 < fVar33) &&
       (fVar31 = fVar41, fVar32 = fVar42, fVar29 = fVar38, fVar30 = fVar40, fVar33 < 1.0)) {
      fVar29 = (fVar14 + fVar1 * fVar18 * fVar33) - fVar19;
      fVar30 = (fVar15 + fVar2 * fVar18 * fVar33) - fVar20;
      fVar31 = (fVar16 + fVar3 * fVar18 * fVar33) - fVar21;
      fVar32 = (fVar17 + fVar28 * fVar33) - fVar22;
    }
  }
  auVar10._0_4_ = fVar23 * fVar29 + fVar24 * fVar30;
  auVar10._4_4_ = fVar25 * fVar31 + fVar26 * fVar32;
  auVar10._8_4_ = fVar23 * fVar29 + fVar24 * fVar30;
  auVar10._12_4_ = fVar25 * fVar31 + fVar26 * fVar32;
  auVar39 = NEON_ext(auVar10,auVar10,4,1);
  fVar31 = auVar39._0_4_ + auVar39._4_4_;
  fVar32 = 1.0;
  if (fVar31 < 0.0) {
    fVar32 = 0.0;
  }
  fVar32 = fVar32 * fVar31;
  fVar31 = 1.0;
  if (fVar27 <= fVar32) {
    fVar31 = 0.0;
  }
  fVar29 = 1.0;
  if (fVar27 > fVar32) {
    fVar29 = 0.0;
  }
  fVar31 = fVar32 * fVar31 + fVar27 * fVar29;
  fVar19 = fVar19 + fVar23 * fVar31;
  fVar20 = fVar20 + fVar24 * fVar31;
  fVar21 = fVar21 + fVar25 * fVar31;
  fVar23 = fVar1 * (fVar19 - fVar14);
  fVar24 = fVar2 * (fVar20 - fVar15);
  fVar25 = fVar3 * (fVar21 - fVar16);
  fVar26 = *(float *)((long)param_1 + 0x1c) * ((fVar22 + fVar26 * fVar31) - fVar17);
  auVar11._0_4_ = fVar23 + fVar24;
  auVar11._4_4_ = fVar25 + fVar26;
  auVar11._8_4_ = fVar23 + fVar24;
  auVar11._12_4_ = fVar25 + fVar26;
  auVar39 = NEON_ext(auVar11,auVar11,4,1);
  fVar24 = auVar39._0_4_ + auVar39._4_4_;
  fVar23 = 1.0;
  if (fVar24 < 0.0) {
    fVar23 = 0.0;
  }
  fVar23 = fVar23 * fVar24;
  fVar24 = 1.0;
  if (fVar18 <= fVar23) {
    fVar24 = 0.0;
  }
  fVar25 = 1.0;
  if (fVar18 > fVar23) {
    fVar25 = 0.0;
  }
  fVar23 = fVar23 * fVar24 + fVar18 * fVar25;
  fVar19 = (fVar14 + fVar1 * fVar23) - fVar19;
  fVar20 = (fVar15 + fVar2 * fVar23) - fVar20;
  fVar21 = (fVar16 + fVar3 * fVar23) - fVar21;
  fVar19 = fVar19 * fVar19;
  fVar20 = fVar20 * fVar20;
  fVar21 = fVar21 * fVar21;
  auVar12._0_4_ = fVar19 + fVar20;
  auVar12._4_4_ = fVar21 + 0.0;
  auVar12._8_4_ = fVar19 + fVar20;
  auVar12._12_4_ = fVar21 + 0.0;
  auVar39 = NEON_ext(auVar12,auVar12,4,1);
  auVar13._0_4_ = auVar39._0_4_ + auVar39._4_4_;
  auVar13._4_4_ = auVar39._8_4_ + auVar39._12_4_;
  auVar13._8_4_ = auVar39._0_4_ + auVar39._4_4_;
  auVar13._12_4_ = auVar39._8_4_ + auVar39._12_4_;
  return auVar13;
}


