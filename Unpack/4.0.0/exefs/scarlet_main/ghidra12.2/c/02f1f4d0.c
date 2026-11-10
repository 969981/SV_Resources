/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f1f4d0; name: FUN_02f1f4d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f1f4d0(long param_1,undefined1 (*param_2) [16],undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar9;
  undefined1 auVar8 [16];
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar16;
  undefined1 auVar15 [16];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  fVar4 = (float)*param_3;
  fVar7 = (float)((ulong)*param_3 >> 0x20);
  if (fVar4 <= 0.0) {
    dVar21 = (double)fVar4;
    fVar5 = (float)((ulong)*(undefined8 *)param_2[3] >> 0x20);
    dVar2 = *(double *)param_2[1] + dVar21 * (double)(float)*(undefined8 *)(param_2[3] + 8);
    auVar30._0_4_ = fVar4 * (float)*(undefined8 *)(param_2[2] + 8) * 0.5;
    auVar30._4_4_ = fVar7 * (float)((ulong)*(undefined8 *)(param_2[2] + 8) >> 0x20) * 0.5;
    auVar30._8_4_ = fVar4 * (float)*(undefined8 *)param_2[3] * 0.5;
    auVar30._12_4_ = fVar7 * fVar5 * 0.5;
    auVar24 = NEON_ext(auVar30,auVar30,4,1);
    fVar9 = auVar30._8_4_ * auVar30._8_4_ +
            auVar30._0_4_ * auVar30._0_4_ + auVar30._4_4_ * auVar30._4_4_;
    fVar1 = auVar30._8_4_ * auVar30._8_4_ +
            auVar30._0_4_ * auVar30._0_4_ + auVar30._4_4_ * auVar30._4_4_;
    auVar28 = *param_2;
    auVar27 = NEON_ext(auVar28,auVar28,8,1);
    uVar26 = NEON_ext(auVar28._0_8_,auVar27._0_8_,4,1);
    dVar6 = dVar21 * (double)fVar5;
    fVar10 = auVar28._0_4_;
    fVar14 = auVar28._4_4_;
    fVar16 = auVar28._8_4_;
    fVar17 = auVar28._12_4_;
    dVar3 = *(double *)(param_2[1] + 8) +
            dVar21 * (double)(float)((ulong)*(undefined8 *)(param_2[3] + 8) >> 0x20);
    fVar4 = auVar30._0_4_ * fVar10;
    fVar7 = auVar30._4_4_ * fVar14;
    auVar20._0_4_ = auVar24._0_4_ * fVar10 - auVar30._0_4_ * (float)uVar26;
    auVar20._4_4_ = auVar24._4_4_ * fVar14 - auVar30._4_4_ * (float)((ulong)uVar26 >> 0x20);
    auVar20._8_4_ = auVar30._0_4_ * fVar16 - auVar30._8_4_ * fVar10;
    auVar20._12_4_ = auVar30._4_4_ * fVar17 - auVar30._12_4_ * fVar14;
    auVar24 = NEON_ext(auVar20,auVar20,4,1);
    uVar26 = NEON_fmov(0x3f800000,4);
    fVar5 = fVar9 * (fVar9 * (fVar9 * -0.0029562549 + -0.02144013) + -0.33352822) + (float)uVar26;
    auVar28._4_4_ = fVar7;
    auVar28._0_4_ = fVar4;
    auVar28._8_4_ = auVar30._8_4_ * fVar16;
    auVar28._12_4_ = auVar30._12_4_ * fVar17;
    auVar27._4_4_ = fVar7;
    auVar27._0_4_ = fVar4;
    auVar27._8_4_ = auVar30._8_4_ * fVar16;
    auVar27._12_4_ = auVar30._12_4_ * fVar17;
    auVar28 = NEON_ext(auVar28,auVar27,8,1);
    fVar4 = fVar5 * fVar17 - (fVar4 + fVar7 + auVar28._0_4_);
    fVar7 = auVar30._0_4_ * fVar17 + auVar24._0_4_ + fVar10 * fVar5;
    fVar9 = auVar30._4_4_ * fVar17 + auVar24._4_4_ +
            fVar14 * (fVar1 * (fVar1 * (fVar1 * -0.0029562549 + -0.02144013) + -0.33352822) +
                     (float)((ulong)uVar26 >> 0x20));
    fVar5 = auVar30._8_4_ * fVar17 + auVar20._0_4_ + fVar16 * fVar5;
    dVar21 = dVar6 + *(double *)param_2[2];
  }
  else {
    dVar21 = (double)fVar4;
    auVar25._0_4_ = fVar4 * (float)*(undefined8 *)param_2[7] * 0.5;
    auVar25._4_4_ = fVar7 * (float)((ulong)*(undefined8 *)param_2[7] >> 0x20) * 0.5;
    auVar25._8_4_ = fVar4 * (float)*(undefined8 *)(param_2[7] + 8) * 0.5;
    auVar25._12_4_ = fVar7 * (float)((ulong)*(undefined8 *)(param_2[7] + 8) >> 0x20) * 0.5;
    auVar30 = NEON_ext(auVar25,auVar25,4,1);
    dVar2 = *(double *)param_2[1] + dVar21 * (double)(float)*(undefined8 *)param_2[6];
    fVar4 = auVar25._0_4_ * auVar25._0_4_ + auVar25._4_4_ * auVar25._4_4_ +
            auVar25._8_4_ * auVar25._8_4_;
    fVar5 = auVar25._0_4_ * auVar25._0_4_ + auVar25._4_4_ * auVar25._4_4_ +
            auVar25._8_4_ * auVar25._8_4_;
    dVar3 = *(double *)(param_2[1] + 8) +
            dVar21 * (double)(float)((ulong)*(undefined8 *)param_2[6] >> 0x20);
    dVar6 = dVar21 * (double)(float)((ulong)*(undefined8 *)(param_2[6] + 8) >> 0x20);
    auVar28 = *param_2;
    auVar27 = NEON_ext(auVar28,auVar28,8,1);
    uVar26 = NEON_ext(auVar28._0_8_,auVar27._0_8_,4,1);
    fVar1 = auVar28._0_4_;
    fVar10 = auVar28._4_4_;
    fVar14 = auVar28._8_4_;
    fVar16 = auVar28._12_4_;
    auVar24._0_4_ = fVar1 * auVar30._0_4_ - auVar25._0_4_ * (float)uVar26;
    auVar24._4_4_ = fVar10 * auVar30._4_4_ - auVar25._4_4_ * (float)((ulong)uVar26 >> 0x20);
    auVar24._8_4_ = fVar14 * auVar25._0_4_ - auVar25._8_4_ * fVar1;
    auVar24._12_4_ = fVar16 * auVar25._4_4_ - auVar25._12_4_ * fVar10;
    auVar28 = NEON_ext(auVar24,auVar24,4,1);
    uVar26 = NEON_fmov(0x3f800000,4);
    fVar4 = fVar4 * (fVar4 * (fVar4 * -0.0029562549 + -0.02144013) + -0.33352822) + (float)uVar26;
    fVar7 = auVar25._0_4_ * fVar16 + auVar28._0_4_ + fVar1 * fVar4;
    fVar9 = auVar25._4_4_ * fVar16 + auVar28._4_4_ +
            fVar10 * (fVar5 * (fVar5 * (fVar5 * -0.0029562549 + -0.02144013) + -0.33352822) +
                     (float)((ulong)uVar26 >> 0x20));
    fVar5 = auVar25._8_4_ * fVar16 + auVar24._0_4_ + fVar14 * fVar4;
    dVar21 = *(double *)param_2[2] + dVar21 * (double)(float)*(undefined8 *)(param_2[6] + 8);
    auVar11._0_4_ = auVar25._0_4_ * fVar1;
    auVar11._4_4_ = auVar25._4_4_ * fVar10;
    auVar11._8_4_ = auVar25._8_4_ * fVar14;
    auVar11._12_4_ = auVar25._12_4_ * fVar16;
    auVar28 = NEON_ext(auVar11,auVar11,8,1);
    fVar4 = fVar4 * fVar16 - (auVar11._0_4_ + auVar11._4_4_ + auVar28._0_4_);
  }
  auVar12._0_4_ = fVar7 * fVar7;
  auVar12._4_4_ = fVar9 * fVar9;
  auVar12._8_4_ = fVar5 * fVar5;
  auVar12._12_4_ = fVar4 * fVar4;
  auVar28 = NEON_ext(auVar12,auVar12,8,1);
  fVar1 = auVar28._0_4_ + auVar28._4_4_;
  fVar10 = SQRT(auVar12._0_4_ + auVar12._4_4_ + fVar1);
  fVar1 = SQRT(auVar12._0_4_ + auVar12._4_4_ + fVar1);
  auVar8._0_4_ = fVar7 / fVar10;
  auVar8._4_4_ = fVar9 / fVar1;
  auVar8._8_4_ = fVar5 / fVar10;
  auVar8._12_4_ = fVar4 / fVar1;
  auVar13._0_4_ = -*(float *)(param_1 + 0xa0);
  auVar13._4_4_ = -*(float *)(param_1 + 0xa4);
  auVar13._8_4_ = -*(float *)(param_1 + 0xa8);
  auVar13._12_4_ = *(undefined4 *)(param_1 + 0xac);
  auVar15._8_8_ = _UNK_03caab28;
  auVar15._0_8_ = _DAT_03caab20;
  auVar18._8_8_ = _UNK_03caa778;
  auVar18._0_8_ = _DAT_03caa770;
  auVar30 = a64_TBL(ZEXT816(0),auVar8,auVar15);
  auVar28 = a64_TBL(ZEXT816(0),auVar8,auVar18);
  auVar19._8_8_ = _UNK_03caa6a8;
  auVar19._0_8_ = _DAT_03caa6a0;
  auVar22._8_8_ = _UNK_03caab38;
  auVar22._0_8_ = _DAT_03caab30;
  auVar20 = a64_TBL(ZEXT816(0),auVar13,auVar19);
  auVar27 = a64_TBL(ZEXT816(0),auVar13,auVar22);
  auVar29._8_8_ = _UNK_03cab148;
  auVar29._0_8_ = _DAT_03cab140;
  auVar23._0_4_ = auVar28._0_4_ * auVar27._0_4_ - auVar30._0_4_ * auVar20._0_4_;
  auVar23._4_4_ = auVar28._4_4_ * auVar27._4_4_ - auVar30._4_4_ * auVar20._4_4_;
  auVar23._8_4_ = auVar28._8_4_ * auVar27._8_4_ - auVar30._8_4_ * auVar20._8_4_;
  auVar23._12_4_ = auVar28._12_4_ * auVar27._12_4_ - auVar30._12_4_ * auVar20._12_4_;
  auVar24 = a64_TBL(ZEXT816(0),auVar23,auVar29);
  fVar7 = auVar24._12_4_ - (auVar28._12_4_ * auVar20._12_4_ + auVar30._12_4_ * auVar27._12_4_);
  fVar1 = -(auVar24._0_4_ - (auVar28._0_4_ * auVar20._0_4_ + auVar30._0_4_ * auVar27._0_4_));
  fVar16 = -(auVar24._4_4_ - (auVar28._4_4_ * auVar20._4_4_ + auVar30._4_4_ * auVar27._4_4_));
  fVar10 = -(auVar24._8_4_ - (auVar28._8_4_ * auVar20._8_4_ + auVar30._8_4_ * auVar27._8_4_));
  fVar5 = fVar16 + fVar16;
  fVar9 = fVar10 + fVar10;
  fVar17 = (fVar1 + fVar1) * fVar1;
  fVar4 = (fVar1 + fVar1) * fVar7;
  fVar10 = 1.0 - fVar10 * fVar9;
  fVar31 = fVar9 * fVar16 - fVar4;
  fVar33 = fVar10 - fVar5 * fVar16;
  fVar10 = fVar10 - fVar17;
  fVar34 = fVar5 * fVar1 + fVar9 * fVar7;
  fVar32 = fVar5 * fVar1 - fVar9 * fVar7;
  fVar4 = fVar9 * fVar16 + fVar4;
  fVar35 = fVar9 * fVar1 - fVar5 * fVar7;
  fVar7 = fVar9 * fVar1 + fVar5 * fVar7;
  fVar14 = *(float *)(param_1 + 0x1c);
  fVar5 = (1.0 - fVar17) - fVar5 * fVar16;
  fVar16 = *(float *)(param_1 + 0x2c);
  fVar9 = *(float *)(param_1 + 0xc);
  param_4[1] = CONCAT44(fVar31,fVar35);
  *param_4 = CONCAT44(fVar34,fVar33);
  param_4[3] = CONCAT44(fVar7,fVar4);
  param_4[2] = CONCAT44(fVar10,fVar32);
  dVar2 = dVar2 - (double)(fVar7 * fVar16 + fVar32 * fVar14 + fVar33 * fVar9);
  dVar3 = dVar3 - (double)(fVar31 * fVar16 + fVar10 * fVar14 + fVar34 * fVar9);
  dVar6 = (dVar6 + 0.0) - (double)(fVar16 * 0.0 + fVar7 * fVar14 + fVar31 * fVar9);
  fVar1 = (float)dVar2;
  dVar21 = dVar21 - (double)(fVar5 * fVar16 + fVar4 * fVar14 + fVar35 * fVar9);
  fVar4 = (float)dVar3;
  fVar9 = (float)dVar21;
  fVar10 = (float)dVar6;
  param_4[5] = (ulong)(uint)fVar5;
  param_4[4] = CONCAT44(fVar31,fVar7);
  *(float *)(param_4 + 7) = fVar9;
  *(float *)((long)param_4 + 0x3c) = fVar10;
  *(float *)(param_4 + 6) = fVar1;
  *(float *)((long)param_4 + 0x34) = fVar4;
  param_4[9] = CONCAT44((float)(dVar6 - (double)fVar10),(float)(dVar21 - (double)fVar9));
  param_4[8] = CONCAT44((float)(dVar3 - (double)fVar4),(float)(dVar2 - (double)fVar1));
  return;
}


