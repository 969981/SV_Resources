/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f850c; name: FUN_026f850c
 */


bool FUN_026f850c(undefined1 param_1 [16],float *param_2,uint param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar10 = param_1._12_4_;
  fVar9 = param_1._8_4_;
  fVar8 = param_1._4_4_;
  fVar7 = param_1._0_4_;
  fVar12 = fVar7 - *param_2;
  fVar13 = fVar8 - param_2[1];
  fVar14 = fVar9 - param_2[2];
  fVar15 = fVar10 - param_2[3];
  auVar11._0_4_ = fVar12 * fVar12 + fVar13 * fVar13;
  auVar11._4_4_ = fVar14 * fVar14 + fVar15 * fVar15;
  auVar11._8_4_ = fVar12 * fVar12 + fVar13 * fVar13;
  auVar11._12_4_ = fVar14 * fVar14 + fVar15 * fVar15;
  auVar11 = NEON_ext(auVar11,auVar11,4,1);
  fVar1 = auVar11._0_4_ + auVar11._4_4_;
  if (fVar1 <= param_2[0x60]) {
    fVar12 = fVar12 * (float)*(undefined8 *)(param_2 + 8);
    fVar13 = fVar13 * (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
    fVar14 = fVar14 * (float)*(undefined8 *)(param_2 + 10);
    fVar15 = fVar15 * (float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20);
    auVar2._0_4_ = fVar12 + fVar13;
    auVar2._4_4_ = fVar14 + fVar15;
    auVar2._8_4_ = fVar12 + fVar13;
    auVar2._12_4_ = fVar14 + fVar15;
    auVar11 = NEON_ext(auVar2,auVar2,4,1);
    fVar12 = auVar11._0_4_ + auVar11._4_4_;
    if (0.0 < fVar12) {
      fVar12 = fVar12 * fVar12;
      fVar1 = param_2[0x48] * fVar1;
      if (fVar12 <= fVar1) {
        return fVar1 < fVar12;
      }
      if ((param_3 & 1) != 0) {
        return fVar1 < fVar12;
      }
      auVar3._0_4_ = fVar7 * param_2[0x1c] + fVar8 * param_2[0x1d];
      auVar3._4_4_ = fVar9 * param_2[0x1e] + fVar10 * param_2[0x1f];
      auVar3._8_4_ = fVar7 * param_2[0x1c] + fVar8 * param_2[0x1d];
      auVar3._12_4_ = fVar9 * param_2[0x1e] + fVar10 * param_2[0x1f];
      auVar11 = NEON_ext(auVar3,auVar3,4,1);
      if ((((0.0 <= param_2[0x20] + auVar11._0_4_ + auVar11._4_4_) &&
           (auVar4._0_4_ = fVar7 * param_2[0x24] + fVar8 * param_2[0x25],
           auVar4._4_4_ = fVar9 * param_2[0x26] + fVar10 * param_2[0x27],
           auVar4._8_4_ = fVar7 * param_2[0x24] + fVar8 * param_2[0x25],
           auVar4._12_4_ = fVar9 * param_2[0x26] + fVar10 * param_2[0x27],
           auVar11 = NEON_ext(auVar4,auVar4,4,1),
           0.0 <= param_2[0x28] + auVar11._0_4_ + auVar11._4_4_)) &&
          (auVar5._0_4_ = fVar7 * param_2[0x2c] + fVar8 * param_2[0x2d],
          auVar5._4_4_ = fVar9 * param_2[0x2e] + fVar10 * param_2[0x2f],
          auVar5._8_4_ = fVar7 * param_2[0x2c] + fVar8 * param_2[0x2d],
          auVar5._12_4_ = fVar9 * param_2[0x2e] + fVar10 * param_2[0x2f],
          auVar11 = NEON_ext(auVar5,auVar5,4,1),
          0.0 <= param_2[0x30] + auVar11._0_4_ + auVar11._4_4_)) &&
         (auVar6._0_4_ = fVar7 * param_2[0x34] + fVar8 * param_2[0x35],
         auVar6._4_4_ = fVar9 * param_2[0x36] + fVar10 * param_2[0x37],
         auVar6._8_4_ = fVar7 * param_2[0x34] + fVar8 * param_2[0x35],
         auVar6._12_4_ = fVar9 * param_2[0x36] + fVar10 * param_2[0x37],
         auVar11 = NEON_ext(auVar6,auVar6,4,1), 0.0 <= param_2[0x38] + auVar11._0_4_ + auVar11._4_4_
         )) {
        return true;
      }
      return false;
    }
  }
  return false;
}


