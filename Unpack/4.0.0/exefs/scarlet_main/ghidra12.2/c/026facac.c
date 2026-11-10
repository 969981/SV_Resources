/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026facac; name: FUN_026facac
 */


undefined8
FUN_026facac(float *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,float *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 auVar10 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar7 = *(undefined8 *)(param_1 + 2);
  uVar6 = *(undefined8 *)param_1;
  fVar8 = (float)*(undefined8 *)(param_1 + 4) * param_1[8];
  fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) * param_1[8];
  fVar5 = (float)param_2[2];
  fVar17 = fVar5 * *(float *)(param_2 + 4);
  fVar15 = (float)((ulong)param_2[2] >> 0x20);
  fVar18 = fVar15 * *(float *)(param_2 + 4);
  fVar19 = fVar8 * fVar18 - fVar11 * fVar17;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (fVar19 < 1.1920929e-07) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar19)) {
      bVar1 = fVar19 < -1.1920929e-07;
      bVar2 = fVar19 == -1.1920929e-07;
      bVar3 = false;
    }
  }
  fVar9 = (float)uVar6;
  fVar12 = (float)((ulong)uVar6 >> 0x20);
  fVar13 = (float)*param_2;
  fVar14 = (float)((ulong)*param_2 >> 0x20);
  if (bVar2 || bVar1 != bVar3) {
    fVar5 = (1.0 / fVar19) * (fVar18 * (fVar13 - fVar9) - fVar17 * (fVar14 - fVar12));
    if (param_4 != (float *)0x0) {
      *param_4 = fVar5;
    }
    if (param_5 != (float *)0x0) {
      *param_5 = (1.0 / fVar19) * (fVar11 * (fVar13 - fVar9) - fVar8 * (fVar14 - fVar12));
    }
    if (param_3 != (undefined8 *)0x0) {
      fVar8 = param_1[8];
      uVar7 = *(undefined8 *)param_1;
      uVar6 = *(undefined8 *)(param_1 + 4);
      param_3[1] = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) * fVar8 * fVar5,
                            (float)*(undefined8 *)(param_1 + 2) +
                            (float)*(undefined8 *)(param_1 + 6) * fVar8 * fVar5);
      *param_3 = CONCAT44((float)((ulong)uVar7 >> 0x20) +
                          (float)((ulong)uVar6 >> 0x20) * fVar8 * fVar5,
                          (float)uVar7 + (float)uVar6 * fVar8 * fVar5);
    }
  }
  else {
    fVar19 = (float)param_2[1];
    fVar8 = fVar5 * (fVar9 - fVar13);
    fVar11 = fVar15 * (fVar12 - fVar14);
    fVar16 = (float)param_2[3];
    fVar17 = fVar16 * ((float)uVar7 - fVar19);
    fVar18 = (float)((ulong)param_2[3] >> 0x20) *
             ((float)((ulong)uVar7 >> 0x20) - (float)((ulong)param_2[1] >> 0x20));
    auVar10._0_4_ = fVar8 + fVar11;
    auVar10._4_4_ = fVar17 + fVar18;
    auVar10._8_4_ = fVar8 + fVar11;
    auVar10._12_4_ = fVar17 + fVar18;
    auVar10 = NEON_ext(auVar10,auVar10,4,1);
    fVar9 = fVar9 - (fVar13 + fVar5 * (auVar10._0_4_ + auVar10._4_4_));
    fVar12 = fVar12 - (fVar14 + fVar15 * (auVar10._8_4_ + auVar10._12_4_));
    fVar8 = (float)uVar7 - (fVar19 + fVar16 * (auVar10._0_4_ + auVar10._4_4_));
    fVar9 = fVar9 * fVar9;
    fVar12 = fVar12 * fVar12;
    fVar8 = fVar8 * fVar8;
    auVar4._0_4_ = fVar9 + fVar12;
    auVar4._4_4_ = fVar8 + 0.0;
    auVar4._8_4_ = fVar9 + fVar12;
    auVar4._12_4_ = fVar8 + 0.0;
    auVar10 = NEON_ext(auVar4,auVar4,4,1);
    fVar8 = auVar10._0_4_ + auVar10._4_4_;
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (fVar8 < 1.1920929e-07) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar8)) {
        bVar1 = fVar8 < -1.1920929e-07;
        bVar2 = fVar8 == -1.1920929e-07;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      return 0;
    }
    if (param_3 != (undefined8 *)0x0) {
      param_3[1] = uVar7;
      *param_3 = uVar6;
    }
    if (param_4 != (float *)0x0) {
      *param_4 = 0.0;
    }
    if (param_5 != (float *)0x0) {
      fVar8 = (float)*param_2 - *param_1;
      bVar1 = false;
      if ((-1.1920929e-07 < fVar8) && (bVar1 = false, !NAN(fVar8))) {
        bVar1 = fVar8 < 1.1920929e-07;
      }
      fVar11 = (float)((ulong)*param_2 >> 0x20) - param_1[1];
      if (!bVar1) {
        fVar11 = fVar8;
      }
      *param_5 = fVar11 / *(float *)(param_2 + 4);
    }
  }
  return 1;
}


