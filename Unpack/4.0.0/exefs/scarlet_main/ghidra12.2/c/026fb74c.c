/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026fb74c; name: FUN_026fb74c
 */


undefined8 FUN_026fb74c(float *param_1,float *param_2,float *param_3,float *param_4)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  undefined1 auVar7 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  fVar5 = param_1[8];
  fVar6 = param_1[4] * fVar5;
  fVar8 = param_1[5] * fVar5;
  fVar9 = param_1[6] * fVar5;
  fVar5 = param_1[7] * fVar5;
  fVar10 = *param_1 - *param_2;
  fVar11 = param_1[1] - param_2[1];
  fVar12 = param_1[2] - param_2[2];
  fVar13 = param_1[3] - param_2[3];
  auVar7._0_4_ = fVar6 * fVar10 + fVar8 * fVar11;
  auVar7._4_4_ = fVar9 * fVar12 + fVar5 * fVar13;
  auVar7._8_4_ = fVar6 * fVar10 + fVar8 * fVar11;
  auVar7._12_4_ = fVar9 * fVar12 + fVar5 * fVar13;
  auVar7 = NEON_ext(auVar7,auVar7,4,1);
  auVar14._0_4_ = fVar6 * fVar6 + fVar8 * fVar8;
  auVar14._4_4_ = fVar9 * fVar9 + fVar5 * fVar5;
  auVar14._8_4_ = fVar6 * fVar6 + fVar8 * fVar8;
  auVar14._12_4_ = fVar9 * fVar9 + fVar5 * fVar5;
  auVar4._0_4_ = fVar10 * fVar10 + fVar11 * fVar11;
  auVar4._4_4_ = fVar12 * fVar12 + fVar13 * fVar13;
  auVar4._8_4_ = fVar10 * fVar10 + fVar11 * fVar11;
  auVar4._12_4_ = fVar12 * fVar12 + fVar13 * fVar13;
  auVar14 = NEON_ext(auVar14,auVar14,4,1);
  fVar5 = auVar7._0_4_ + auVar7._4_4_;
  fVar5 = fVar5 + fVar5;
  auVar7 = NEON_ext(auVar4,auVar4,4,1);
  fVar6 = auVar14._0_4_ + auVar14._4_4_;
  fVar8 = fVar5 * fVar5 + fVar6 * -4.0 * ((auVar7._0_4_ + auVar7._4_4_) - param_2[4] * param_2[4]);
  if (0.0 <= fVar8) {
    fVar9 = SQRT(fVar8);
    if (NAN(fVar9)) {
      fVar9 = sqrtf(fVar8);
    }
    auVar7 = NEON_fmov(0x3f800000,4);
    fVar8 = auVar7._0_4_ / (fVar6 + fVar6);
    fVar6 = fVar8 * (-fVar5 - fVar9);
    bVar1 = false;
    bVar2 = true;
    if (0.0 <= fVar6) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar6)) {
        bVar1 = fVar6 == 1.0;
        bVar2 = 1.0 <= fVar6;
      }
    }
    if (bVar2 && !bVar1) {
      fVar6 = fVar8 * (fVar9 - fVar5);
      bVar1 = false;
      bVar2 = true;
      if (0.0 <= fVar6) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar6)) {
          bVar1 = fVar6 == 1.0;
          bVar2 = 1.0 <= fVar6;
        }
      }
      if (bVar2 && !bVar1) goto LAB_026fb7c8;
    }
    if (param_4 != (float *)0x0) {
      *param_4 = fVar6;
    }
    if (param_3 != (float *)0x0) {
      fVar13 = param_1[8];
      fVar10 = *param_1;
      fVar11 = param_1[1];
      fVar12 = param_1[3];
      fVar5 = param_1[4];
      fVar8 = param_1[5];
      fVar9 = param_1[7];
      param_3[2] = param_1[2] + param_1[6] * fVar13 * fVar6;
      param_3[3] = fVar12 + fVar9 * fVar13 * fVar6;
      *param_3 = fVar10 + fVar5 * fVar13 * fVar6;
      param_3[1] = fVar11 + fVar8 * fVar13 * fVar6;
    }
    uVar3 = 1;
  }
  else {
LAB_026fb7c8:
    uVar3 = 0;
  }
  return uVar3;
}


