/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026fb60c; name: FUN_026fb60c
 */


undefined8 FUN_026fb60c(float *param_1,float *param_2,float *param_3,float *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
  
  fVar10 = param_1[8];
  fVar11 = *param_2 * param_1[4] * fVar10;
  fVar13 = param_2[1] * param_1[5] * fVar10;
  fVar14 = param_2[2] * param_1[6] * fVar10;
  fVar15 = param_2[3] * param_1[7] * fVar10;
  auVar12._0_4_ = fVar11 + fVar13;
  auVar12._4_4_ = fVar14 + fVar15;
  auVar12._8_4_ = fVar11 + fVar13;
  auVar12._12_4_ = fVar14 + fVar15;
  auVar12 = NEON_ext(auVar12,auVar12,4,1);
  fVar4 = auVar12._0_4_ + auVar12._4_4_;
  fVar11 = *param_1;
  fVar13 = param_1[1];
  fVar14 = param_1[2];
  fVar15 = param_1[3];
  fVar6 = fVar11 * *param_2;
  fVar7 = fVar13 * param_2[1];
  fVar8 = fVar14 * param_2[2];
  fVar9 = fVar15 * param_2[3];
  auVar5._0_4_ = fVar6 + fVar7;
  auVar5._4_4_ = fVar8 + fVar9;
  auVar5._8_4_ = fVar6 + fVar7;
  auVar5._12_4_ = fVar8 + fVar9;
  auVar12 = NEON_ext(auVar5,auVar5,4,1);
  fVar6 = auVar12._0_4_ + auVar12._4_4_;
  bVar1 = false;
  if ((fVar4 < *(float *)PTR_DAT_047d41b0) &&
     (bVar1 = false, !NAN(*(float *)PTR_DAT_047d41c0) && !NAN(fVar4))) {
    bVar1 = *(float *)PTR_DAT_047d41c0 < fVar4;
  }
  if (bVar1) {
    fVar6 = fVar6 + param_2[4];
    fVar4 = 0.0;
    fVar7 = 1.0;
    if (*(float *)PTR_DAT_047d4180 <= fVar6) {
      fVar7 = 0.0;
    }
    fVar8 = 1.0;
    if (*(float *)PTR_DAT_047d4180 > fVar6) {
      fVar8 = fVar4;
    }
    fVar6 = fVar6 * fVar8 + fVar6 * *(float *)PTR_DAT_047d41a0 * fVar7;
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (fVar6 < 1.1920929e-07) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar6)) {
        bVar1 = fVar6 < -1.1920929e-07;
        bVar2 = fVar6 == -1.1920929e-07;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      return 0;
    }
    fVar6 = 0.0;
    if (param_3 == (float *)0x0) goto LAB_026fb68c;
  }
  else {
    fVar4 = -(fVar6 + param_2[4]) / fVar4;
    if (param_3 == (float *)0x0) goto LAB_026fb68c;
    fVar11 = fVar11 + param_1[4] * fVar10 * fVar4;
    fVar13 = fVar13 + param_1[5] * fVar10 * fVar4;
    fVar14 = fVar14 + param_1[6] * fVar10 * fVar4;
    fVar15 = fVar15 + param_1[7] * fVar10 * fVar4;
    fVar6 = fVar4;
  }
  fVar4 = fVar6;
  param_3[2] = fVar14;
  param_3[3] = fVar15;
  *param_3 = fVar11;
  param_3[1] = fVar13;
LAB_026fb68c:
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (0.0 <= fVar4) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar4)) {
      bVar1 = fVar4 < 1.0;
      bVar2 = fVar4 == 1.0;
      bVar3 = false;
    }
  }
  if (!bVar2 && bVar1 == bVar3) {
    return 0;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fVar4;
  }
  return 1;
}


