/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0250aaf4; name: FUN_0250aaf4
 */


void FUN_0250aaf4(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  undefined1 auVar9 [16];
  float extraout_s0;
  float extraout_s0_00;
  float fVar10;
  float fVar11;
  float extraout_s0_01;
  undefined8 uVar12;
  float extraout_var_01;
  float extraout_var_02;
  float extraout_var_04;
  undefined1 auVar13 [16];
  float extraout_var;
  float extraout_var_05;
  undefined1 auVar14 [16];
  undefined8 uVar19;
  undefined1 auVar15 [16];
  float extraout_var_00;
  float extraout_var_03;
  float extraout_var_06;
  undefined1 auVar16 [16];
  float fVar18;
  undefined1 auVar17 [16];
  float extraout_var_07;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  auVar13 = FUN_026fd270(param_2);
  FUN_026fd278(param_2);
  auVar14._0_8_ = CONCAT44(auVar13._4_4_ - extraout_var,auVar13._0_4_ - extraout_s0);
  auVar14._8_4_ = auVar13._8_4_ - extraout_var_02;
  auVar14._12_4_ = auVar13._12_4_ - extraout_var_05;
  uVar19 = auVar14._8_8_;
  auVar15 = FUN_026fd280(param_2);
  FUN_026fd278(param_2);
  auVar7._8_8_ = uVar19;
  auVar7._0_8_ = auVar14._0_8_;
  auVar6._8_8_ = uVar19;
  auVar6._0_8_ = auVar14._0_8_;
  auVar5._8_8_ = uVar19;
  auVar5._0_8_ = auVar14._0_8_;
  auVar13._8_8_ = uVar19;
  auVar13._0_8_ = auVar14._0_8_;
  auVar16._0_4_ = auVar15._0_4_ - extraout_s0_00;
  auVar16._4_4_ = auVar15._4_4_ - extraout_var_00;
  auVar16._8_4_ = auVar15._8_4_ - extraout_var_03;
  auVar16._12_4_ = auVar15._12_4_ - extraout_var_06;
  uVar4 = a64_TBL(ZEXT816(0),auVar13,DAT_03cb56c8);
  uVar19 = a64_TBL(ZEXT816(0),auVar16,DAT_03cb56c8);
  uVar22 = a64_TBL(ZEXT816(0),auVar5,DAT_03cb54d8);
  uVar24 = a64_TBL(ZEXT816(0),auVar16,DAT_03cb5488);
  uVar23 = a64_TBL(ZEXT816(0),auVar6,DAT_03cb5488);
  uVar26 = a64_TBL(ZEXT816(0),auVar16,DAT_03cb54c0);
  uVar25 = a64_TBL(ZEXT816(0),auVar7,DAT_03cb54c0);
  uVar12 = a64_TBL(ZEXT816(0),auVar16,DAT_03cb54d8);
  fVar20 = (float)uVar4 * (float)uVar24 - (float)uVar23 * (float)uVar19;
  fVar21 = (float)((ulong)uVar4 >> 0x20) * (float)((ulong)uVar24 >> 0x20) -
           (float)((ulong)uVar23 >> 0x20) * (float)((ulong)uVar19 >> 0x20);
  fVar10 = (float)uVar22 * (float)uVar26 - (float)uVar25 * (float)uVar12;
  fVar18 = (float)((ulong)uVar22 >> 0x20) * (float)((ulong)uVar26 >> 0x20) -
           (float)((ulong)uVar25 >> 0x20) * (float)((ulong)uVar12 >> 0x20);
  auVar15._0_4_ = fVar20 * fVar20 + fVar21 * fVar21;
  auVar15._4_4_ = fVar10 * fVar10 + fVar18 * fVar18;
  auVar15._8_4_ = fVar20 * fVar20 + fVar21 * fVar21;
  auVar15._12_4_ = fVar10 * fVar10 + fVar18 * fVar18;
  auVar13 = NEON_ext(auVar15,auVar15,4,1);
  fVar11 = SQRT(auVar13._0_4_ + auVar13._4_4_);
  bVar8 = false;
  if ((-1.1920929e-07 < fVar11) && (bVar8 = false, !NAN(fVar11))) {
    bVar8 = fVar11 < 1.1920929e-07;
  }
  iVar1 = -(uint)bVar8;
  auVar17._0_4_ = fVar20 / fVar11;
  auVar17._4_4_ = fVar21 / SQRT(auVar13._8_4_ + auVar13._12_4_);
  auVar17._8_4_ = fVar10 / SQRT(auVar13._0_4_ + auVar13._4_4_);
  auVar17._12_4_ = fVar18 / SQRT(auVar13._8_4_ + auVar13._12_4_);
  auVar2._4_4_ = fVar21;
  auVar2._0_4_ = fVar20;
  auVar2._8_4_ = fVar10;
  auVar2._12_4_ = fVar18;
  auVar3._4_4_ = iVar1;
  auVar3._0_4_ = iVar1;
  auVar3._8_4_ = iVar1;
  auVar3._12_4_ = iVar1;
  auVar17 = auVar17 ^ (auVar17 ^ auVar2) & auVar3;
  param_1[1] = auVar17._8_8_;
  *param_1 = auVar17._0_8_;
  FUN_026fd278(param_2);
  fVar10 = extraout_s0_01 * (float)*param_1;
  fVar11 = extraout_var_01 * (float)((ulong)*param_1 >> 0x20);
  fVar18 = extraout_var_04 * (float)param_1[1];
  fVar20 = extraout_var_07 * (float)((ulong)param_1[1] >> 0x20);
  auVar9._0_4_ = fVar10 + fVar11;
  auVar9._4_4_ = fVar18 + fVar20;
  auVar9._8_4_ = fVar10 + fVar11;
  auVar9._12_4_ = fVar18 + fVar20;
  auVar13 = NEON_ext(auVar9,auVar9,4,1);
  *(float *)(param_1 + 2) = -(auVar13._0_4_ + auVar13._4_4_);
  return;
}


