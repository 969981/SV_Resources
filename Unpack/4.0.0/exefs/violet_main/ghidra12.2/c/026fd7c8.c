/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026fd7c8; name: FUN_026fd7c8
 */


void FUN_026fd7c8(undefined1 param_1 [16],undefined8 *param_2)

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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  fVar7 = param_1._0_4_ - (float)*param_2;
  fVar8 = param_1._4_4_ - (float)((ulong)*param_2 >> 0x20);
  fVar9 = param_1._8_4_ - (float)param_2[1];
  fVar10 = param_1._12_4_ - (float)((ulong)param_2[1] >> 0x20);
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
  if ((!bVar3 && bVar1 == bVar4) && (bVar2 = false, !NAN(fVar8))) {
    bVar2 = fVar8 < 1.1920929e-07;
  }
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (bVar2) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar8)) {
      bVar1 = fVar8 < -1.1920929e-07;
      bVar3 = fVar8 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  bVar2 = false;
  if ((!bVar3 && bVar1 == bVar4) && (bVar2 = false, !NAN(fVar9))) {
    bVar2 = fVar9 < 1.1920929e-07;
  }
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (bVar2) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar9)) {
      bVar1 = fVar9 < -1.1920929e-07;
      bVar3 = fVar9 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  if (bVar3 || bVar1 != bVar4) {
    fVar10 = fVar10 * fVar10;
    auVar6._0_4_ = fVar7 * fVar7 + fVar8 * fVar8;
    auVar6._4_4_ = fVar9 * fVar9 + fVar10;
    auVar6._8_4_ = fVar7 * fVar7 + fVar8 * fVar8;
    auVar6._12_4_ = fVar9 * fVar9 + fVar10;
    auVar6 = NEON_ext(auVar6,auVar6,4,1);
    auVar5._0_4_ = auVar6._0_4_ + auVar6._4_4_;
    auVar5._4_4_ = auVar6._8_4_ + auVar6._12_4_;
    auVar5._8_4_ = auVar6._0_4_ + auVar6._4_4_;
    auVar5._12_4_ = auVar6._8_4_ + auVar6._12_4_;
    auVar6 = NEON_frsqrte(auVar5,4);
    auVar12._0_4_ = auVar5._0_4_ * auVar6._0_4_;
    auVar12._4_4_ = auVar5._4_4_ * auVar6._4_4_;
    auVar12._8_4_ = auVar5._8_4_ * auVar6._8_4_;
    auVar12._12_4_ = auVar5._12_4_ * auVar6._12_4_;
    auVar12 = NEON_frsqrts(auVar6,auVar12,4);
    auVar11._0_4_ = auVar6._0_4_ * auVar12._0_4_;
    auVar11._4_4_ = auVar6._4_4_ * auVar12._4_4_;
    auVar11._8_4_ = auVar6._8_4_ * auVar12._8_4_;
    auVar11._12_4_ = auVar6._12_4_ * auVar12._12_4_;
    auVar13._0_4_ = auVar5._0_4_ * auVar11._0_4_;
    auVar13._4_4_ = auVar5._4_4_ * auVar11._4_4_;
    auVar13._8_4_ = auVar5._8_4_ * auVar11._8_4_;
    auVar13._12_4_ = auVar5._12_4_ * auVar11._12_4_;
    NEON_frsqrts(auVar11,auVar13,4);
    return;
  }
  return;
}


