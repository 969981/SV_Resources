/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026fa648; name: FUN_026fa648
 */


void FUN_026fa648(float *param_1,undefined8 *param_2)

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
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  auVar19 = *(undefined1 (*) [16])(param_1 + 4);
  uVar18 = a64_TBL(ZEXT816(0),auVar19,DAT_03cb56c8);
  auVar7 = *(undefined1 (*) [16])(param_2 + 2);
  uVar23 = a64_TBL(ZEXT816(0),auVar7,DAT_03cb5488);
  uVar22 = a64_TBL(ZEXT816(0),auVar19,DAT_03cb5488);
  uVar16 = a64_TBL(ZEXT816(0),auVar7,DAT_03cb56c8);
  uVar21 = a64_TBL(ZEXT816(0),auVar19,DAT_03cb54d8);
  uVar13 = a64_TBL(ZEXT816(0),auVar19,DAT_03cb54c0);
  uVar20 = a64_TBL(ZEXT816(0),auVar7,DAT_03cb54d8);
  fVar12 = (float)uVar18 * (float)uVar23 - (float)uVar22 * (float)uVar16;
  fVar14 = (float)((ulong)uVar18 >> 0x20) * (float)((ulong)uVar23 >> 0x20) -
           (float)((ulong)uVar22 >> 0x20) * (float)((ulong)uVar16 >> 0x20);
  uVar16 = a64_TBL(ZEXT816(0),auVar7,DAT_03cb54c0);
  fVar15 = (float)uVar21 * (float)uVar16 - (float)uVar13 * (float)uVar20;
  fVar17 = (float)((ulong)uVar21 >> 0x20) * (float)((ulong)uVar16 >> 0x20) -
           (float)((ulong)uVar13 >> 0x20) * (float)((ulong)uVar20 >> 0x20);
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (fVar12 < 1.1920929e-07) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar12)) {
      bVar1 = fVar12 < -1.1920929e-07;
      bVar3 = fVar12 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  bVar2 = false;
  if ((!bVar3 && bVar1 == bVar4) && (bVar2 = false, !NAN(fVar14))) {
    bVar2 = fVar14 < 1.1920929e-07;
  }
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (bVar2) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar14)) {
      bVar1 = fVar14 < -1.1920929e-07;
      bVar3 = fVar14 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  bVar2 = false;
  if ((!bVar3 && bVar1 == bVar4) && (bVar2 = false, !NAN(fVar15))) {
    bVar2 = fVar15 < 1.1920929e-07;
  }
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (bVar2) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar15)) {
      bVar1 = fVar15 < -1.1920929e-07;
      bVar3 = fVar15 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  if (bVar3 || bVar1 != bVar4) {
    fVar8 = fVar12 * (*param_1 - (float)*param_2);
    fVar9 = fVar14 * (param_1[1] - (float)((ulong)*param_2 >> 0x20));
    fVar10 = fVar15 * (param_1[2] - (float)param_2[1]);
    fVar11 = fVar17 * (param_1[3] - (float)((ulong)param_2[1] >> 0x20));
    auVar5._0_4_ = fVar12 * fVar12 + fVar14 * fVar14;
    auVar5._4_4_ = fVar15 * fVar15 + fVar17 * fVar17;
    auVar5._8_4_ = fVar12 * fVar12 + fVar14 * fVar14;
    auVar5._12_4_ = fVar15 * fVar15 + fVar17 * fVar17;
    NEON_ext(auVar5,auVar5,4,1);
    auVar6._0_4_ = fVar8 + fVar9;
    auVar6._4_4_ = fVar10 + fVar11;
    auVar6._8_4_ = fVar8 + fVar9;
    auVar6._12_4_ = fVar10 + fVar11;
    NEON_ext(auVar6,auVar6,4,1);
  }
  else {
    fVar12 = (float)*param_2;
    fVar14 = (float)((ulong)*param_2 >> 0x20);
    fVar15 = (float)param_2[1];
    fVar17 = auVar7._0_4_ * (*param_1 - fVar12);
    fVar8 = auVar7._4_4_ * (param_1[1] - fVar14);
    fVar9 = auVar7._8_4_ * (param_1[2] - fVar15);
    fVar10 = auVar7._12_4_ * (param_1[3] - (float)((ulong)param_2[1] >> 0x20));
    auVar19._0_4_ = fVar17 + fVar8;
    auVar19._4_4_ = fVar9 + fVar10;
    auVar19._8_4_ = fVar17 + fVar8;
    auVar19._12_4_ = fVar9 + fVar10;
    auVar19 = NEON_ext(auVar19,auVar19,4,1);
    fVar12 = *param_1 - (fVar12 + auVar7._0_4_ * (auVar19._0_4_ + auVar19._4_4_));
    fVar14 = param_1[1] - (fVar14 + auVar7._4_4_ * (auVar19._8_4_ + auVar19._12_4_));
    fVar15 = param_1[2] - (fVar15 + auVar7._8_4_ * (auVar19._0_4_ + auVar19._4_4_));
    fVar12 = fVar12 * fVar12;
    fVar14 = fVar14 * fVar14;
    fVar15 = fVar15 * fVar15;
    auVar7._0_4_ = fVar12 + fVar14;
    auVar7._4_4_ = fVar15 + 0.0;
    auVar7._8_4_ = fVar12 + fVar14;
    auVar7._12_4_ = fVar15 + 0.0;
    auVar19 = NEON_ext(auVar7,auVar7,4,1);
    fVar12 = auVar19._0_4_ + auVar19._4_4_;
    if (NAN(SQRT(fVar12))) {
      sqrtf(fVar12);
      return;
    }
  }
  return;
}


