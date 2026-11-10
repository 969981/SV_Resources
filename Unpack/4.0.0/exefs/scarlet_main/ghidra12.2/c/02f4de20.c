/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f4de20; name: FUN_02f4de20
 */


void FUN_02f4de20(long param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined1 (*param_4) [16],float *param_5,float *param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar12;
  undefined8 uVar13;
  undefined1 auVar15 [16];
  undefined8 uVar14;
  undefined1 auVar16 [16];
  float fVar18;
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  
  fVar3 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  uVar14 = *(undefined8 *)*param_3;
  fVar2 = (float)((ulong)uVar14 >> 0x20);
  auVar8._12_4_ = fVar3;
  auVar8._0_12_ = *(undefined1 (*) [12])*param_3;
  auVar7._12_4_ = fVar3;
  auVar7._0_12_ = *(undefined1 (*) [12])*param_3;
  auVar7 = NEON_ext(auVar8,auVar7,8,1);
  auVar8 = *param_4;
  auVar15 = NEON_ext(auVar8,auVar8,8,1);
  uVar6 = NEON_ext(uVar14,auVar7._0_8_,4,1);
  uVar13 = NEON_ext(auVar8._0_8_,auVar15._0_8_,4,1);
  auVar15._0_4_ = (float)uVar14 * (float)uVar13 - auVar8._0_4_ * (float)uVar6;
  auVar15._4_4_ =
       fVar2 * (float)((ulong)uVar13 >> 0x20) - auVar8._4_4_ * (float)((ulong)uVar6 >> 0x20);
  auVar15._8_4_ = (float)*(undefined8 *)(*param_3 + 8) * auVar8._0_4_ - auVar8._8_4_ * (float)uVar14
  ;
  auVar15._12_4_ = fVar3 * auVar8._4_4_ - auVar8._12_4_ * fVar2;
  auVar8 = NEON_ext(auVar15,auVar15,4,1);
  if (ABS(*(float *)*param_2 * auVar8._0_4_ + *(float *)(*param_2 + 4) * auVar8._4_4_ +
          *(float *)(*param_2 + 8) * auVar15._0_4_) < 1.1920929e-07) {
    *(undefined4 *)(param_2[4] + 8) = 1;
    *(undefined4 *)(param_3[4] + 8) = 1;
    *(undefined4 *)(param_4[4] + 8) = 1;
    auVar8 = *param_2;
    auVar7 = *param_3;
    auVar15 = NEON_ext(auVar8,auVar8,8,1);
    auVar19 = NEON_ext(auVar7,auVar7,8,1);
    uVar14 = NEON_ext(auVar8._0_8_,auVar15._0_8_,4,1);
    uVar6 = NEON_ext(auVar7._0_8_,auVar19._0_8_,4,1);
    iVar1 = *(int *)(param_1 + 8);
    auVar19._0_4_ = auVar8._0_4_ * (float)uVar6 - auVar7._0_4_ * (float)uVar14;
    auVar19._4_4_ =
         auVar8._4_4_ * (float)((ulong)uVar6 >> 0x20) -
         auVar7._4_4_ * (float)((ulong)uVar14 >> 0x20);
    auVar19._8_4_ = auVar8._8_4_ * auVar7._0_4_ - auVar7._8_4_ * auVar8._0_4_;
    auVar19._12_4_ = auVar8._12_4_ * auVar7._4_4_ - auVar7._12_4_ * auVar8._4_4_;
    auVar8 = NEON_ext(auVar19,auVar19,4,1);
    fVar2 = auVar8._0_4_;
    fVar3 = auVar8._4_4_;
    fVar12 = fVar2 * fVar2 + fVar3 * fVar3 + auVar19._0_4_ * auVar19._0_4_;
    if (fVar12 <= 1.1920929e-07) {
      *(undefined4 *)(param_2[4] + 8) = 2;
      *(undefined4 *)(param_3[4] + 8) = 2;
      fVar2 = *(float *)*param_3 * *param_5;
      fVar3 = *(float *)(*param_3 + 4) * param_5[1];
      fVar4 = *(float *)(*param_3 + 8) * param_5[2];
      fVar12 = fVar2 + fVar3 + fVar4;
      fVar4 = fVar2 + fVar3 + fVar4;
      fVar2 = *param_5 - *(float *)*param_3 * fVar12;
      fVar3 = param_5[1] - *(float *)(*param_3 + 4) * fVar4;
      fVar12 = param_5[2] - *(float *)(*param_3 + 8) * fVar12;
      fVar4 = param_5[3] - *(float *)(*param_3 + 0xc) * fVar4;
      param_6[2] = fVar12;
      param_6[3] = fVar4;
      *param_6 = fVar2;
      param_6[1] = fVar3;
      fVar5 = *(float *)*param_2 * fVar2;
      fVar10 = *(float *)(*param_2 + 4) * fVar3;
      fVar11 = *(float *)(*param_2 + 8) * fVar12;
      fVar9 = fVar5 + fVar10 + fVar11;
      fVar11 = fVar5 + fVar10 + fVar11;
      fVar2 = fVar2 - *(float *)*param_2 * fVar9;
      fVar3 = fVar3 - *(float *)(*param_2 + 4) * fVar11;
      fVar12 = fVar12 - *(float *)(*param_2 + 8) * fVar9;
      fVar4 = fVar4 - *(float *)(*param_2 + 0xc) * fVar11;
    }
    else {
      fVar12 = SQRT(fVar12);
      fVar9 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + auVar19._0_4_ * auVar19._0_4_);
      fVar2 = fVar2 / fVar12;
      fVar3 = fVar3 / fVar9;
      fVar12 = auVar19._0_4_ / fVar12;
      fVar4 = fVar2 * *param_5;
      fVar10 = fVar3 * param_5[1];
      fVar11 = fVar12 * param_5[2];
      fVar5 = fVar4 + fVar10 + fVar11;
      fVar11 = fVar4 + fVar10 + fVar11;
      fVar2 = fVar2 * fVar5 + 0.0;
      fVar3 = fVar3 * fVar11 + 0.0;
      fVar12 = fVar12 * fVar5 + 0.0;
      fVar4 = (0.0 / fVar9) * fVar11 + 0.0;
    }
    param_6[2] = fVar12;
    param_6[3] = fVar4;
    *param_6 = fVar2;
    param_6[1] = fVar3;
    if (iVar1 == *(int *)(param_1 + 8)) {
      auVar8 = *param_2;
      auVar15 = NEON_ext(auVar8,auVar8,8,1);
      auVar7 = *param_4;
      auVar19 = NEON_ext(auVar7,auVar7,8,1);
      uVar14 = NEON_ext(auVar8._0_8_,auVar15._0_8_,4,1);
      uVar6 = NEON_ext(auVar7._0_8_,auVar19._0_8_,4,1);
      auVar16._0_4_ = auVar8._0_4_ * (float)uVar6 - auVar7._0_4_ * (float)uVar14;
      auVar16._4_4_ =
           auVar8._4_4_ * (float)((ulong)uVar6 >> 0x20) -
           auVar7._4_4_ * (float)((ulong)uVar14 >> 0x20);
      auVar16._8_4_ = auVar8._8_4_ * auVar7._0_4_ - auVar7._8_4_ * auVar8._0_4_;
      auVar16._12_4_ = auVar8._12_4_ * auVar7._4_4_ - auVar7._12_4_ * auVar8._4_4_;
      auVar8 = NEON_ext(auVar16,auVar16,4,1);
      fVar4 = auVar8._0_4_;
      fVar5 = auVar8._4_4_;
      fVar9 = fVar4 * fVar4 + fVar5 * fVar5 + auVar16._0_4_ * auVar16._0_4_;
      if (fVar9 <= 1.1920929e-07) {
        *(undefined4 *)(param_2[4] + 8) = 2;
        *(undefined4 *)(param_4[4] + 8) = 2;
        fVar2 = *(float *)*param_4 * *param_6;
        fVar3 = *(float *)(*param_4 + 4) * param_6[1];
        fVar4 = *(float *)(*param_4 + 8) * param_6[2];
        fVar12 = fVar2 + fVar3 + fVar4;
        fVar4 = fVar2 + fVar3 + fVar4;
        fVar2 = *param_6 - *(float *)*param_4 * fVar12;
        fVar3 = param_6[1] - *(float *)(*param_4 + 4) * fVar4;
        fVar12 = param_6[2] - *(float *)(*param_4 + 8) * fVar12;
        fVar4 = param_6[3] - *(float *)(*param_4 + 0xc) * fVar4;
        param_6[2] = fVar12;
        param_6[3] = fVar4;
        *param_6 = fVar2;
        param_6[1] = fVar3;
        fVar5 = *(float *)*param_2 * fVar2;
        fVar10 = *(float *)(*param_2 + 4) * fVar3;
        fVar11 = *(float *)(*param_2 + 8) * fVar12;
        fVar9 = fVar5 + fVar10 + fVar11;
        fVar11 = fVar5 + fVar10 + fVar11;
        fVar2 = fVar2 - *(float *)*param_2 * fVar9;
        fVar3 = fVar3 - *(float *)(*param_2 + 4) * fVar11;
        fVar12 = fVar12 - *(float *)(*param_2 + 8) * fVar9;
        fVar4 = fVar4 - *(float *)(*param_2 + 0xc) * fVar11;
      }
      else {
        fVar9 = SQRT(fVar9);
        fVar18 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + auVar16._0_4_ * auVar16._0_4_);
        fVar4 = fVar4 / fVar9;
        fVar5 = fVar5 / fVar18;
        fVar9 = auVar16._0_4_ / fVar9;
        fVar2 = fVar2 * fVar4;
        fVar3 = fVar3 * fVar5;
        fVar12 = fVar12 * fVar9;
        fVar10 = fVar12 + fVar2 + fVar3;
        fVar11 = fVar12 + fVar2 + fVar3;
        fVar2 = fVar4 * fVar10 + 0.0;
        fVar3 = fVar5 * fVar11 + 0.0;
        fVar12 = fVar9 * fVar10 + 0.0;
        fVar4 = (0.0 / fVar18) * fVar11 + 0.0;
      }
      param_6[2] = fVar12;
      param_6[3] = fVar4;
      *param_6 = fVar2;
      param_6[1] = fVar3;
    }
    if (iVar1 == *(int *)(param_1 + 8)) {
      auVar8 = *param_3;
      auVar15 = NEON_ext(auVar8,auVar8,8,1);
      auVar7 = *param_4;
      auVar19 = NEON_ext(auVar7,auVar7,8,1);
      uVar14 = NEON_ext(auVar8._0_8_,auVar15._0_8_,4,1);
      uVar6 = NEON_ext(auVar7._0_8_,auVar19._0_8_,4,1);
      auVar17._0_4_ = auVar8._0_4_ * (float)uVar6 - auVar7._0_4_ * (float)uVar14;
      auVar17._4_4_ =
           auVar8._4_4_ * (float)((ulong)uVar6 >> 0x20) -
           auVar7._4_4_ * (float)((ulong)uVar14 >> 0x20);
      auVar17._8_4_ = auVar8._8_4_ * auVar7._0_4_ - auVar7._8_4_ * auVar8._0_4_;
      auVar17._12_4_ = auVar8._12_4_ * auVar7._4_4_ - auVar7._12_4_ * auVar8._4_4_;
      auVar8 = NEON_ext(auVar17,auVar17,4,1);
      fVar5 = auVar8._0_4_;
      fVar9 = auVar8._4_4_;
      fVar4 = fVar5 * fVar5 + fVar9 * fVar9 + auVar17._0_4_ * auVar17._0_4_;
      if (fVar4 <= 1.1920929e-07) {
        *(undefined4 *)(param_3[4] + 8) = 2;
        *(undefined4 *)(param_4[4] + 8) = 2;
        fVar12 = (float)*(undefined8 *)(*param_4 + 8);
        fVar2 = (float)*(undefined8 *)*param_4;
        fVar3 = (float)((ulong)*(undefined8 *)*param_4 >> 0x20);
        fVar4 = fVar2 * *param_6;
        fVar9 = fVar3 * param_6[1];
        fVar10 = fVar12 * param_6[2];
        fVar5 = fVar4 + fVar9 + fVar10;
        fVar10 = fVar4 + fVar9 + fVar10;
        fVar2 = *param_6 - fVar2 * fVar5;
        fVar3 = param_6[1] - fVar3 * fVar10;
        fVar4 = param_6[2] - fVar12 * fVar5;
        fVar12 = param_6[3] - (float)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20) * fVar10;
        *(ulong *)(param_6 + 2) = CONCAT44(fVar12,fVar4);
        *(ulong *)param_6 = CONCAT44(fVar3,fVar2);
        fVar5 = *(float *)*param_3 * fVar2;
        fVar10 = *(float *)(*param_3 + 4) * fVar3;
        fVar11 = *(float *)(*param_3 + 8) * fVar4;
        fVar9 = fVar5 + fVar10 + fVar11;
        fVar11 = fVar5 + fVar10 + fVar11;
        fVar2 = fVar2 - *(float *)*param_3 * fVar9;
        fVar3 = fVar3 - *(float *)(*param_3 + 4) * fVar11;
        fVar4 = fVar4 - *(float *)(*param_3 + 8) * fVar9;
        fVar12 = fVar12 - *(float *)(*param_3 + 0xc) * fVar11;
      }
      else {
        fVar4 = SQRT(fVar4);
        fVar10 = SQRT(fVar5 * fVar5 + fVar9 * fVar9 + auVar17._0_4_ * auVar17._0_4_);
        fVar5 = fVar5 / fVar4;
        fVar9 = fVar9 / fVar10;
        fVar4 = auVar17._0_4_ / fVar4;
        fVar2 = fVar2 * fVar5;
        fVar3 = fVar3 * fVar9;
        fVar12 = fVar12 * fVar4;
        fVar11 = fVar12 + fVar2 + fVar3;
        fVar12 = fVar12 + fVar2 + fVar3;
        fVar2 = fVar5 * fVar11 + 0.0;
        fVar3 = fVar9 * fVar12 + 0.0;
        fVar4 = fVar4 * fVar11 + 0.0;
        fVar12 = (0.0 / fVar10) * fVar12 + 0.0;
      }
      *(ulong *)(param_6 + 2) = CONCAT44(fVar12,fVar4);
      *(ulong *)param_6 = CONCAT44(fVar3,fVar2);
      return;
    }
  }
  else {
    param_6[0] = 0.0;
    param_6[1] = 0.0;
    param_6[2] = 0.0;
    param_6[3] = 0.0;
  }
  return;
}


