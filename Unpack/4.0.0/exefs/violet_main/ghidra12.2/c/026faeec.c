/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026faeec; name: FUN_026faeec
 */


void FUN_026faeec(float *param_1,undefined8 *param_2,undefined1 (*param_3) [16],undefined8 param_4,
                 undefined8 *param_5,float *param_6)

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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar30 [16];
  float fVar34;
  float fVar35;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar36 [16];
  
  fVar8 = param_1[8];
  fVar18 = *param_1;
  fVar19 = param_1[1];
  fVar20 = param_1[2];
  fVar21 = param_1[3];
  fVar22 = (float)*(undefined8 *)(param_1 + 4) * fVar8;
  fVar23 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) * fVar8;
  fVar24 = (float)*(undefined8 *)(param_1 + 6) * fVar8;
  fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) * fVar8;
  fVar17 = *(float *)(param_2 + 4);
  fVar13 = (float)param_2[2];
  fVar29 = fVar13 * fVar17;
  fVar14 = (float)((ulong)param_2[2] >> 0x20);
  fVar31 = fVar14 * fVar17;
  fVar15 = (float)param_2[3];
  fVar32 = fVar15 * fVar17;
  fVar16 = (float)((ulong)param_2[3] >> 0x20);
  fVar33 = fVar16 * fVar17;
  fVar34 = 1.0 / (fVar17 * fVar17);
  fVar25 = fVar18 + fVar22;
  fVar26 = fVar19 + fVar23;
  fVar27 = fVar20 + fVar24;
  fVar28 = fVar21 + fVar8;
  fVar9 = (float)*param_2;
  fVar10 = (float)((ulong)*param_2 >> 0x20);
  fVar11 = (float)param_2[1];
  fVar12 = (float)((ulong)param_2[1] >> 0x20);
  fVar35 = (fVar18 - fVar9) * fVar29;
  fVar37 = (fVar19 - fVar10) * fVar31;
  fVar38 = (fVar20 - fVar11) * fVar32;
  fVar39 = (fVar21 - fVar12) * fVar33;
  auVar36._0_4_ = fVar35 + fVar37;
  auVar36._4_4_ = fVar38 + fVar39;
  auVar36._8_4_ = fVar35 + fVar37;
  auVar36._12_4_ = fVar38 + fVar39;
  auVar36 = NEON_ext(auVar36,auVar36,4,1);
  fVar35 = (fVar25 - fVar9) * fVar29;
  fVar37 = (fVar26 - fVar10) * fVar31;
  fVar38 = (fVar27 - fVar11) * fVar32;
  fVar39 = (fVar28 - fVar12) * fVar33;
  auVar30._0_4_ = fVar35 + fVar37;
  auVar30._4_4_ = fVar38 + fVar39;
  auVar30._8_4_ = fVar35 + fVar37;
  auVar30._12_4_ = fVar38 + fVar39;
  fVar35 = fVar18 - (auVar36._0_4_ + auVar36._4_4_) * fVar29 * fVar34;
  fVar37 = fVar19 - (auVar36._8_4_ + auVar36._12_4_) * fVar31 * fVar34;
  fVar38 = fVar20 - (auVar36._0_4_ + auVar36._4_4_) * fVar32 * fVar34;
  fVar39 = fVar21 - (auVar36._8_4_ + auVar36._12_4_) * fVar33 * fVar34;
  auVar36 = NEON_ext(auVar30,auVar30,4,1);
  fVar25 = (fVar25 - (auVar36._0_4_ + auVar36._4_4_) * fVar29 * fVar34) - fVar35;
  fVar26 = (fVar26 - (auVar36._8_4_ + auVar36._12_4_) * fVar31 * fVar34) - fVar37;
  fVar27 = (fVar27 - (auVar36._0_4_ + auVar36._4_4_) * fVar32 * fVar34) - fVar38;
  fVar28 = (fVar28 - (auVar36._8_4_ + auVar36._12_4_) * fVar33 * fVar34) - fVar39;
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (fVar25 < 1.1920929e-07) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar25)) {
      bVar1 = fVar25 < -1.1920929e-07;
      bVar3 = fVar25 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  bVar2 = false;
  if ((!bVar3 && bVar1 == bVar4) && (bVar2 = false, !NAN(fVar26))) {
    bVar2 = fVar26 < 1.1920929e-07;
  }
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (bVar2) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar26)) {
      bVar1 = fVar26 < -1.1920929e-07;
      bVar3 = fVar26 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  if (bVar3 || bVar1 != bVar4) {
    fVar29 = fVar25 * (fVar9 - fVar35);
    fVar35 = fVar26 * (fVar10 - fVar37);
    fVar31 = fVar27 * (fVar11 - fVar38);
    fVar37 = fVar28 * (fVar12 - fVar39);
    auVar5._0_4_ = fVar29 + fVar35;
    auVar5._4_4_ = fVar31 + fVar37;
    auVar5._8_4_ = fVar29 + fVar35;
    auVar5._12_4_ = fVar31 + fVar37;
    auVar6._0_4_ = fVar25 * fVar25 + fVar26 * fVar26;
    auVar6._4_4_ = fVar27 * fVar27 + fVar28 * fVar28;
    auVar6._8_4_ = fVar25 * fVar25 + fVar26 * fVar26;
    auVar6._12_4_ = fVar27 * fVar27 + fVar28 * fVar28;
    auVar30 = NEON_ext(auVar5,auVar5,4,1);
    auVar36 = NEON_ext(auVar6,auVar6,4,1);
    fVar25 = (auVar30._0_4_ + auVar30._4_4_) / (auVar36._0_4_ + auVar36._4_4_);
    if (fVar25 <= 0.0) {
      fVar25 = 0.0;
    }
    fVar25 = (float)NEON_fminnm(fVar25,0x3f800000);
  }
  else {
    fVar25 = 0.0;
  }
  fVar18 = fVar13 * ((fVar18 + fVar22 * fVar25) - fVar9);
  fVar19 = fVar14 * ((fVar19 + fVar23 * fVar25) - fVar10);
  fVar20 = fVar15 * ((fVar20 + fVar24 * fVar25) - fVar11);
  fVar21 = fVar16 * ((fVar21 + fVar8 * fVar25) - fVar12);
  auVar7._0_4_ = fVar18 + fVar19;
  auVar7._4_4_ = fVar20 + fVar21;
  auVar7._8_4_ = fVar18 + fVar19;
  auVar7._12_4_ = fVar20 + fVar21;
  auVar36 = NEON_ext(auVar7,auVar7,4,1);
  fVar18 = auVar36._0_4_ + auVar36._4_4_;
  if (param_6 != (float *)0x0) {
    *param_6 = fVar18 / fVar17;
  }
  if (param_5 != (undefined8 *)0x0) {
    param_5[1] = CONCAT44(fVar12 + fVar16 * (auVar36._8_4_ + auVar36._12_4_),
                          fVar11 + fVar15 * (auVar36._0_4_ + auVar36._4_4_));
    *param_5 = CONCAT44(fVar10 + fVar14 * (auVar36._8_4_ + auVar36._12_4_),fVar9 + fVar13 * fVar18);
  }
  if (param_3 != (undefined1 (*) [16])0x0) {
    auVar36 = FUN_026fc1c0(param_1,param_4);
    *param_3 = auVar36;
  }
  return;
}


