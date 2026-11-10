/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f73294; name: FUN_00f73294
 */


void FUN_00f73294(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
                 float *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  undefined1 auVar16 [16];
  float fVar19;
  
  fVar13 = param_2._12_4_;
  fVar12 = param_2._8_4_;
  fVar11 = param_2._4_4_;
  fVar10 = param_2._0_4_;
  fVar9 = param_1._12_4_;
  fVar8 = param_1._8_4_;
  fVar7 = param_1._4_4_;
  fVar6 = param_1._0_4_;
  auVar16._0_4_ = fVar10 * fVar10 + fVar11 * fVar11;
  auVar16._4_4_ = fVar12 * fVar12 + fVar13 * fVar13;
  auVar16._8_4_ = fVar10 * fVar10 + fVar11 * fVar11;
  auVar16._12_4_ = fVar12 * fVar12 + fVar13 * fVar13;
  param_5[0xc] = ABS(param_4);
  auVar16 = NEON_ext(auVar16,auVar16,4,1);
  fVar15 = SQRT(auVar16._0_4_ + auVar16._4_4_);
  if (((ABS(fVar15) < 1.1920929e-07) || (param_3 < 0.0)) || (ABS(param_3) < 1.1920929e-07)) {
    fVar10 = fVar6 - fVar6;
    fVar11 = fVar7 - fVar7;
    fVar12 = fVar8 - fVar8;
    fVar13 = fVar9 - fVar9;
    auVar5._0_4_ = fVar10 * fVar10 + fVar11 * fVar11;
    auVar5._4_4_ = fVar12 * fVar12 + fVar13 * fVar13;
    auVar5._8_4_ = fVar10 * fVar10 + fVar11 * fVar11;
    auVar5._12_4_ = fVar12 * fVar12 + fVar13 * fVar13;
    auVar16 = NEON_ext(auVar5,auVar5,4,1);
    fVar14 = SQRT(auVar16._0_4_ + auVar16._4_4_);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (fVar14 < 1.1920929e-07) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar14)) {
        bVar1 = fVar14 < -1.1920929e-07;
        bVar2 = fVar14 == -1.1920929e-07;
        bVar3 = false;
      }
    }
    fVar15 = fVar6;
    fVar17 = fVar7;
    fVar18 = fVar8;
    fVar19 = fVar9;
    if (bVar2 || bVar1 != bVar3) {
      fVar10 = fVar10 / fVar14;
      fVar11 = fVar11 / fVar14;
      fVar12 = fVar12 / fVar14;
      fVar13 = fVar13 / fVar14;
    }
  }
  else {
    param_3 = param_3 * 0.5;
    fVar10 = fVar10 * (param_3 / fVar15);
    fVar11 = fVar11 * (param_3 / SQRT(auVar16._8_4_ + auVar16._12_4_));
    fVar12 = fVar12 * (param_3 / SQRT(auVar16._0_4_ + auVar16._4_4_));
    fVar13 = fVar13 * (param_3 / SQRT(auVar16._8_4_ + auVar16._12_4_));
    fVar15 = fVar6 + fVar10;
    fVar17 = fVar7 + fVar11;
    fVar18 = fVar8 + fVar12;
    fVar19 = fVar9 + fVar13;
    fVar10 = (fVar6 - fVar10) - fVar15;
    fVar11 = (fVar7 - fVar11) - fVar17;
    fVar12 = (fVar8 - fVar12) - fVar18;
    fVar13 = (fVar9 - fVar13) - fVar19;
    auVar4._0_4_ = fVar10 * fVar10 + fVar11 * fVar11;
    auVar4._4_4_ = fVar12 * fVar12 + fVar13 * fVar13;
    auVar4._8_4_ = fVar10 * fVar10 + fVar11 * fVar11;
    auVar4._12_4_ = fVar12 * fVar12 + fVar13 * fVar13;
    auVar16 = NEON_ext(auVar4,auVar4,4,1);
    fVar14 = SQRT(auVar16._0_4_ + auVar16._4_4_);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (fVar14 < 1.1920929e-07) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar14)) {
        bVar1 = fVar14 < -1.1920929e-07;
        bVar2 = fVar14 == -1.1920929e-07;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      fVar10 = fVar10 / fVar14;
      fVar11 = fVar11 / fVar14;
      fVar12 = fVar12 / fVar14;
      fVar13 = fVar13 / fVar14;
    }
  }
  param_5[8] = fVar14;
  param_5[2] = fVar18;
  param_5[3] = fVar19;
  *param_5 = fVar15;
  param_5[1] = fVar17;
  *(ulong *)(param_5 + 6) = CONCAT44(fVar13,fVar12);
  *(ulong *)(param_5 + 4) = CONCAT44(fVar11,fVar10);
  return;
}


