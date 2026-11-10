/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f1fc50; name: FUN_02f1fc50
 */


void FUN_02f1fc50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
                 undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  double dVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  fVar8 = (float)*param_3;
  fVar9 = (float)((ulong)*param_3 >> 0x20);
  fVar10 = fVar8 * (float)*param_2 * 0.5;
  fVar11 = fVar9 * (float)((ulong)*param_2 >> 0x20) * 0.5;
  fVar12 = fVar8 * (float)param_2[1] * 0.5;
  fVar13 = fVar9 * (float)((ulong)param_2[1] >> 0x20) * 0.5;
  auVar22._4_4_ = fVar11;
  auVar22._0_4_ = fVar10;
  auVar22._8_4_ = fVar12;
  auVar22._12_4_ = fVar13;
  auVar27._4_4_ = fVar11;
  auVar27._0_4_ = fVar10;
  auVar27._8_4_ = fVar12;
  auVar27._12_4_ = fVar13;
  auVar28 = NEON_ext(auVar22,auVar27,4,1);
  fVar14 = fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12;
  fVar16 = fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12;
  auVar22 = *param_4;
  auVar27 = NEON_ext(auVar22,auVar22,8,1);
  uVar26 = NEON_ext(auVar22._0_8_,auVar27._0_8_,4,1);
  fVar21 = auVar22._0_4_;
  fVar23 = auVar22._4_4_;
  fVar24 = auVar22._8_4_;
  fVar25 = auVar22._12_4_;
  fVar17 = fVar21 * auVar28._0_4_ - fVar10 * (float)uVar26;
  fVar18 = fVar23 * auVar28._4_4_ - fVar11 * (float)((ulong)uVar26 >> 0x20);
  fVar19 = fVar24 * fVar10 - fVar12 * fVar21;
  fVar20 = fVar25 * fVar11 - fVar13 * fVar23;
  auVar5._4_4_ = fVar18;
  auVar5._0_4_ = fVar17;
  auVar5._8_4_ = fVar19;
  auVar5._12_4_ = fVar20;
  auVar6._4_4_ = fVar18;
  auVar6._0_4_ = fVar17;
  auVar6._8_4_ = fVar19;
  auVar6._12_4_ = fVar20;
  auVar27 = NEON_ext(auVar5,auVar6,4,1);
  fVar18 = fVar10 * fVar21;
  fVar19 = fVar11 * fVar23;
  uVar26 = NEON_fmov(0x3f800000,4);
  fVar14 = fVar14 * (fVar14 * (fVar14 * -0.0029562549 + -0.02144013) + -0.33352822) + (float)uVar26;
  auVar28._4_4_ = fVar19;
  auVar28._0_4_ = fVar18;
  auVar28._8_4_ = fVar12 * fVar24;
  auVar28._12_4_ = fVar13 * fVar25;
  auVar1._4_4_ = fVar19;
  auVar1._0_4_ = fVar18;
  auVar1._8_4_ = fVar12 * fVar24;
  auVar1._12_4_ = fVar13 * fVar25;
  auVar22 = NEON_ext(auVar28,auVar1,8,1);
  fVar13 = fVar10 * fVar25 + auVar27._0_4_ + fVar21 * fVar14;
  fVar16 = fVar11 * fVar25 + auVar27._4_4_ +
           fVar23 * (fVar16 * (fVar16 * (fVar16 * -0.0029562549 + -0.02144013) + -0.33352822) +
                    (float)((ulong)uVar26 >> 0x20));
  fVar17 = fVar12 * fVar25 + fVar17 + fVar24 * fVar14;
  fVar18 = fVar14 * fVar25 - (fVar18 + fVar19 + auVar22._0_4_);
  fVar11 = fVar13 * fVar13;
  fVar12 = fVar16 * fVar16;
  auVar2._4_4_ = fVar12;
  auVar2._0_4_ = fVar11;
  auVar2._8_4_ = fVar17 * fVar17;
  auVar2._12_4_ = fVar18 * fVar18;
  auVar3._4_4_ = fVar12;
  auVar3._0_4_ = fVar11;
  auVar3._8_4_ = fVar17 * fVar17;
  auVar3._12_4_ = fVar18 * fVar18;
  auVar22 = NEON_ext(auVar2,auVar3,8,1);
  fVar10 = auVar22._0_4_ + auVar22._4_4_;
  fVar19 = SQRT(fVar11 + fVar12 + fVar10);
  fVar10 = SQRT(fVar11 + fVar12 + fVar10);
  dVar7 = *(double *)param_4[2];
  *(ulong *)(*param_4 + 8) = CONCAT44(fVar18 / fVar10,fVar17 / fVar19);
  *(ulong *)*param_4 = CONCAT44(fVar16 / fVar10,fVar13 / fVar19);
  uVar4 = param_1[1];
  uVar26 = *param_1;
  dVar15 = *(double *)(param_4[1] + 8);
  *(double *)param_4[1] = *(double *)param_4[1] + (double)(fVar8 * (float)uVar26);
  *(double *)(param_4[1] + 8) = dVar15 + (double)(fVar9 * (float)((ulong)uVar26 >> 0x20));
  *(double *)param_4[2] = dVar7 + (double)(fVar8 * (float)uVar4);
  return;
}


