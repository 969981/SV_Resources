/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026fc280; name: FUN_026fc280
 */


void FUN_026fc280(undefined8 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined8 param_4,undefined1 (*param_5) [16],undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar29 [16];
  
  fVar7 = *(float *)(param_1 + 4);
  fVar9 = (float)param_1[2] * fVar7;
  fVar10 = (float)((ulong)param_1[2] >> 0x20) * fVar7;
  auVar29 = *param_2;
  fVar11 = *(float *)param_2[2];
  fVar21 = (float)*(undefined8 *)param_2[1] * fVar11;
  fVar22 = (float)((ulong)*(undefined8 *)param_2[1] >> 0x20) * fVar11;
  fVar23 = (float)*(undefined8 *)(param_2[1] + 8) * fVar11;
  fVar25 = (float)((ulong)*(undefined8 *)(param_2[1] + 8) >> 0x20) * fVar11;
  fVar27 = 1.0 / (fVar11 * fVar11);
  fVar11 = (float)*param_1;
  fVar12 = auVar29._0_4_;
  fVar8 = (float)((ulong)*param_1 >> 0x20);
  fVar13 = auVar29._4_4_;
  fVar24 = (float)param_1[1];
  fVar14 = auVar29._8_4_;
  fVar26 = (float)((ulong)param_1[1] >> 0x20);
  fVar15 = auVar29._12_4_;
  fVar28 = (fVar11 - fVar12) * fVar21;
  fVar30 = (fVar8 - fVar13) * fVar22;
  fVar31 = (fVar24 - fVar14) * fVar23;
  fVar32 = (fVar26 - fVar15) * fVar25;
  fVar16 = fVar11 + fVar9;
  fVar18 = fVar8 + fVar10;
  fVar19 = fVar24 + (float)param_1[3] * fVar7;
  fVar20 = fVar26 + (float)((ulong)param_1[3] >> 0x20) * fVar7;
  auVar29._0_4_ = fVar28 + fVar30;
  auVar29._4_4_ = fVar31 + fVar32;
  auVar29._8_4_ = fVar28 + fVar30;
  auVar29._12_4_ = fVar31 + fVar32;
  auVar29 = NEON_ext(auVar29,auVar29,4,1);
  fVar7 = (fVar16 - fVar12) * fVar21;
  fVar28 = (fVar18 - fVar13) * fVar22;
  fVar30 = (fVar19 - fVar14) * fVar23;
  fVar31 = (fVar20 - fVar15) * fVar25;
  auVar17._0_4_ = fVar7 + fVar28;
  auVar17._4_4_ = fVar30 + fVar31;
  auVar17._8_4_ = fVar7 + fVar28;
  auVar17._12_4_ = fVar30 + fVar31;
  fVar28 = fVar11 - (auVar29._0_4_ + auVar29._4_4_) * fVar21 * fVar27;
  fVar30 = fVar8 - (auVar29._8_4_ + auVar29._12_4_) * fVar22 * fVar27;
  fVar24 = fVar24 - (auVar29._0_4_ + auVar29._4_4_) * fVar23 * fVar27;
  fVar26 = fVar26 - (auVar29._8_4_ + auVar29._12_4_) * fVar25 * fVar27;
  auVar29 = NEON_ext(auVar17,auVar17,4,1);
  fVar7 = (fVar16 - (auVar29._0_4_ + auVar29._4_4_) * fVar21 * fVar27) - fVar28;
  fVar16 = (fVar18 - (auVar29._8_4_ + auVar29._12_4_) * fVar22 * fVar27) - fVar30;
  fVar18 = (fVar19 - (auVar29._0_4_ + auVar29._4_4_) * fVar23 * fVar27) - fVar24;
  fVar19 = (fVar20 - (auVar29._8_4_ + auVar29._12_4_) * fVar25 * fVar27) - fVar26;
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (fVar7 < 1.1920929e-07) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar7)) {
      bVar1 = fVar7 < -1.1920929e-07;
      bVar3 = fVar7 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  bVar2 = false;
  if ((!bVar3 && bVar1 == bVar4) && (bVar2 = false, !NAN(fVar16))) {
    bVar2 = fVar16 < 1.1920929e-07;
  }
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (bVar2) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar16)) {
      bVar1 = fVar16 < -1.1920929e-07;
      bVar3 = fVar16 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  if (bVar3 || bVar1 != bVar4) {
    fVar12 = fVar7 * (fVar12 - fVar28);
    fVar13 = fVar16 * (fVar13 - fVar30);
    fVar24 = fVar18 * (fVar14 - fVar24);
    fVar26 = fVar19 * (fVar15 - fVar26);
    auVar5._0_4_ = fVar12 + fVar13;
    auVar5._4_4_ = fVar24 + fVar26;
    auVar5._8_4_ = fVar12 + fVar13;
    auVar5._12_4_ = fVar24 + fVar26;
    auVar6._0_4_ = fVar7 * fVar7 + fVar16 * fVar16;
    auVar6._4_4_ = fVar18 * fVar18 + fVar19 * fVar19;
    auVar6._8_4_ = fVar7 * fVar7 + fVar16 * fVar16;
    auVar6._12_4_ = fVar18 * fVar18 + fVar19 * fVar19;
    auVar29 = NEON_ext(auVar5,auVar5,4,1);
    auVar17 = NEON_ext(auVar6,auVar6,4,1);
    fVar7 = (auVar29._0_4_ + auVar29._4_4_) / (auVar17._0_4_ + auVar17._4_4_);
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    fVar7 = (float)NEON_fminnm(fVar7,0x3f800000);
  }
  else {
    fVar7 = 0.0;
  }
  auVar29 = FUN_026fc1c0(CONCAT44(fVar8 + fVar10 * fVar7,fVar11 + fVar9 * fVar7),param_2,param_6);
  if (param_5 != (undefined1 (*) [16])0x0) {
    *param_5 = auVar29;
  }
  if (param_3 != (undefined1 (*) [16])0x0) {
    auVar29 = FUN_026fc1c0(param_1,param_4);
    *param_3 = auVar29;
  }
  return;
}


