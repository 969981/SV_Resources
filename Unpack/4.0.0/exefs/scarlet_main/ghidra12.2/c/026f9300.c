/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f9300; name: FUN_026f9300
 */


void FUN_026f9300(undefined1 param_1 [16],long param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar36 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  fVar8 = param_1._0_4_;
  fVar9 = *(float *)(param_2 + 0x1d0);
  fVar15 = *(float *)(param_2 + 0x1b0);
  fVar16 = *(float *)(param_2 + 0x1b4);
  fVar17 = *(float *)(param_2 + 0x1b8);
  fVar18 = *(float *)(param_2 + 0x1bc);
  fVar19 = (float)*(undefined8 *)(param_2 + 0x1c0) * fVar9;
  fVar20 = (float)((ulong)*(undefined8 *)(param_2 + 0x1c0) >> 0x20) * fVar9;
  fVar21 = (float)*(undefined8 *)(param_2 + 0x1c8) * fVar9;
  fVar9 = (float)((ulong)*(undefined8 *)(param_2 + 0x1c8) >> 0x20) * fVar9;
  fVar14 = (float)*(undefined8 *)(param_2 + 0x170);
  fVar24 = fVar14 * fVar14;
  fVar31 = fVar8 * fVar14;
  fVar32 = param_1._4_4_ * fVar14;
  fVar33 = param_1._8_4_ * fVar14;
  fVar34 = param_1._12_4_ * fVar14;
  fVar27 = fVar15 + fVar19;
  fVar28 = fVar16 + fVar20;
  fVar29 = fVar17 + fVar21;
  fVar30 = fVar18 + fVar9;
  fVar10 = (float)*param_3;
  fVar11 = (float)((ulong)*param_3 >> 0x20);
  uVar22 = CONCAT44(fVar16 - fVar11,fVar15 - fVar10);
  fVar12 = (float)param_3[1];
  fVar13 = (float)((ulong)param_3[1] >> 0x20);
  uVar23 = CONCAT44(fVar18 - fVar13,fVar17 - fVar12);
  fVar35 = (fVar15 - fVar10) * fVar31;
  fVar37 = (fVar16 - fVar11) * fVar32;
  fVar38 = (fVar17 - fVar12) * fVar33;
  fVar40 = (fVar18 - fVar13) * fVar34;
  auVar25._0_4_ = fVar35 + fVar37;
  auVar25._4_4_ = fVar38 + fVar40;
  auVar25._8_4_ = fVar35 + fVar37;
  auVar25._12_4_ = fVar38 + fVar40;
  auVar25 = NEON_ext(auVar25,auVar25,4,1);
  fVar35 = fVar27 - fVar10;
  fVar37 = fVar28 - fVar11;
  auVar26._0_8_ = CONCAT44(fVar37,fVar35);
  auVar26._8_4_ = fVar29 - fVar12;
  auVar26._12_4_ = fVar30 - fVar13;
  fVar35 = fVar31 * fVar35;
  fVar37 = fVar32 * fVar37;
  fVar38 = fVar15 - (auVar25._0_4_ + auVar25._4_4_) * (fVar31 / fVar24);
  fVar40 = fVar16 - (auVar25._8_4_ + auVar25._12_4_) * (fVar32 / fVar24);
  fVar39 = fVar17 - (auVar25._0_4_ + auVar25._4_4_) * (fVar33 / fVar24);
  fVar41 = fVar18 - (auVar25._8_4_ + auVar25._12_4_) * (fVar34 / fVar24);
  auVar36._0_4_ = fVar35 + fVar37;
  auVar36._4_4_ = fVar33 * auVar26._8_4_ + fVar34 * auVar26._12_4_;
  auVar36._8_4_ = fVar35 + fVar37;
  auVar36._12_4_ = fVar33 * auVar26._8_4_ + fVar34 * auVar26._12_4_;
  auVar25 = NEON_ext(auVar36,auVar36,4,1);
  fVar35 = (fVar27 - (fVar31 / fVar24) * (auVar25._0_4_ + auVar25._4_4_)) - fVar38;
  fVar37 = (fVar28 - (fVar32 / fVar24) * (auVar25._8_4_ + auVar25._12_4_)) - fVar40;
  fVar27 = (fVar29 - (fVar33 / fVar24) * (auVar25._0_4_ + auVar25._4_4_)) - fVar39;
  fVar24 = (fVar30 - (fVar34 / fVar24) * (auVar25._8_4_ + auVar25._12_4_)) - fVar41;
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (fVar35 < 1.1920929e-07) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar35)) {
      bVar1 = fVar35 < -1.1920929e-07;
      bVar3 = fVar35 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  bVar2 = false;
  if ((!bVar3 && bVar1 == bVar4) && (bVar2 = false, !NAN(fVar37))) {
    bVar2 = fVar37 < 1.1920929e-07;
  }
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (bVar2) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar37)) {
      bVar1 = fVar37 < -1.1920929e-07;
      bVar3 = fVar37 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  bVar2 = false;
  if ((!bVar3 && bVar1 == bVar4) && (bVar2 = false, !NAN(fVar27))) {
    bVar2 = fVar27 < 1.1920929e-07;
  }
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (bVar2) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar27)) {
      bVar1 = fVar27 < -1.1920929e-07;
      bVar3 = fVar27 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  if (bVar3 || bVar1 != bVar4) {
    fVar28 = (fVar10 - fVar38) * fVar35;
    fVar29 = (fVar11 - fVar40) * fVar37;
    fVar30 = (fVar12 - fVar39) * fVar27;
    fVar31 = (fVar13 - fVar41) * fVar24;
    auVar5._0_4_ = fVar28 + fVar29;
    auVar5._4_4_ = fVar30 + fVar31;
    auVar5._8_4_ = fVar28 + fVar29;
    auVar5._12_4_ = fVar30 + fVar31;
    auVar6._0_4_ = fVar35 * fVar35 + fVar37 * fVar37;
    auVar6._4_4_ = fVar27 * fVar27 + fVar24 * fVar24;
    auVar6._8_4_ = fVar35 * fVar35 + fVar37 * fVar37;
    auVar6._12_4_ = fVar27 * fVar27 + fVar24 * fVar24;
    auVar36 = NEON_ext(auVar5,auVar5,4,1);
    auVar25 = NEON_ext(auVar6,auVar6,4,1);
    fVar24 = (auVar36._0_4_ + auVar36._4_4_) / (auVar25._0_4_ + auVar25._4_4_);
    if ((0.0 < fVar24) && (uVar23 = auVar26._8_8_, uVar22 = auVar26._0_8_, fVar24 < 1.0)) {
      uVar22 = CONCAT44((fVar16 + fVar20 * fVar24) - fVar11,(fVar15 + fVar19 * fVar24) - fVar10);
      uVar23 = CONCAT44((fVar18 + fVar9 * fVar24) - fVar13,(fVar17 + fVar21 * fVar24) - fVar12);
    }
  }
  fVar15 = fVar8 * (float)uVar22;
  fVar16 = param_1._4_4_ * (float)((ulong)uVar22 >> 0x20);
  fVar17 = param_1._8_4_ * (float)uVar23;
  fVar18 = param_1._12_4_ * (float)((ulong)uVar23 >> 0x20);
  auVar7._0_4_ = fVar15 + fVar16;
  auVar7._4_4_ = fVar17 + fVar18;
  auVar7._8_4_ = fVar15 + fVar16;
  auVar7._12_4_ = fVar17 + fVar18;
  auVar25 = NEON_ext(auVar7,auVar7,4,1);
  fVar15 = auVar25._0_4_ + auVar25._4_4_;
  fVar16 = 1.0;
  if (fVar15 < 0.0) {
    fVar16 = 0.0;
  }
  fVar16 = fVar16 * fVar15;
  fVar15 = 1.0;
  if (fVar14 <= fVar16) {
    fVar15 = 0.0;
  }
  fVar17 = 1.0;
  if (fVar14 > fVar16) {
    fVar17 = 0.0;
  }
  fVar15 = fVar16 * fVar15 + fVar14 * fVar17;
  if (fVar15 / fVar14 <= 0.0) {
    local_28 = param_3[3];
    local_38 = param_3[1];
    local_40 = *param_3;
    uStack_30 = param_3[2];
  }
  else {
    FUN_00f729c4(fVar10 + fVar8 * fVar15,*(undefined4 *)(param_3 + 2),&local_40);
  }
  FUN_026f8944(param_2,&local_40);
  return;
}


