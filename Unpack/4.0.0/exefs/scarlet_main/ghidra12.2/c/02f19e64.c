/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f19e64; name: FUN_02f19e64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f19e64(long param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,float *param_5
                 ,undefined1 (*param_6) [16],float *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar7;
  undefined1 auVar6 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar15;
  int iVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar25;
  ulong uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  uVar4 = *param_2;
  *(undefined8 *)(param_1 + 0x78) = param_2[1];
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  uVar4 = *param_3;
  *(undefined8 *)(param_1 + 0xb8) = param_3[1];
  *(undefined8 *)(param_1 + 0xb0) = uVar4;
  uVar2 = _UNK_03cabe68;
  uVar1 = _DAT_03cabe60;
  uVar4 = DAT_03cab620;
  *(undefined8 *)(param_1 + 0x48) = DAT_03cab628;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  uVar4 = _DAT_03caa5b0;
  auVar17._8_8_ = _UNK_03caaa68;
  auVar17._0_8_ = _DAT_03caaa60;
  auVar34._8_8_ = _UNK_03cabbb8;
  auVar34._0_8_ = _DAT_03cabbb0;
  *(undefined8 *)(param_1 + 0x68) = _UNK_03caa5b8;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  auVar30 = *param_6;
  auVar6._0_12_ = auVar30._0_12_;
  auVar6._12_4_ = 0;
  fVar13 = auVar30._0_4_;
  fVar14 = auVar30._4_4_;
  auVar21 = a64_TBL(ZEXT816(0),auVar6,auVar17);
  auVar6 = a64_TBL(ZEXT816(0),auVar6,auVar34);
  fVar5 = auVar6._0_4_;
  auVar27._0_4_ = fVar5 * fVar5;
  auVar27._4_4_ = auVar6._4_4_ * auVar6._4_4_;
  auVar27._8_4_ = auVar6._8_4_ * auVar6._8_4_;
  auVar27._12_4_ = auVar6._12_4_ * auVar6._12_4_;
  auVar32 = NEON_ext(auVar27,auVar27,8,1);
  fVar3 = auVar32._0_4_ + auVar32._4_4_;
  auVar29._4_12_ = auVar21._4_12_;
  auVar29._0_4_ = -auVar21._0_4_;
  auVar21._4_12_ = auVar6._4_12_;
  auVar21._0_4_ = -fVar5;
  uVar26 = CONCAT44(-(uint)(fVar13 * fVar13 + fVar14 * fVar14 <
                           auVar27._0_4_ + auVar27._4_4_ + fVar3),
                    -(uint)(fVar13 * fVar13 + fVar14 * fVar14 <
                           auVar27._0_4_ + auVar27._4_4_ + fVar3)) & 0x100000001;
  iVar15 = (int)uVar26;
  iVar18 = (int)(uVar26 >> 0x20);
  auVar28._0_4_ = (iVar15 << 0x1f) >> 0x1f;
  auVar28._4_4_ = (iVar18 << 0x1f) >> 0x1f;
  auVar28._8_4_ = (iVar15 << 0x1f) >> 0x1f;
  auVar28._12_4_ = (iVar18 << 0x1f) >> 0x1f;
  auVar29 = auVar29 ^ (auVar29 ^ auVar21) & auVar28;
  fVar5 = auVar29._0_4_;
  fVar25 = auVar29._4_4_;
  fVar24 = auVar29._8_4_;
  fVar3 = fVar5 * fVar5 + fVar25 * fVar25 + fVar24 * fVar24;
  auVar32 = ZEXT816(0);
  *(long *)(param_1 + 0x88) = auVar30._8_8_;
  *(long *)(param_1 + 0x80) = auVar30._0_8_;
  *(long *)(param_1 + 0x98) = auVar29._8_8_;
  *(long *)(param_1 + 0x90) = auVar29._0_8_;
  auVar22 = ZEXT816(0);
  if (fVar3 != 0.0) {
    fVar3 = SQRT(fVar3);
    fVar23 = SQRT(fVar5 * fVar5 + fVar25 * fVar25 + fVar24 * fVar24);
    auVar22._0_4_ = fVar5 / fVar3;
    auVar22._4_4_ = fVar25 / fVar23;
    auVar22._8_4_ = fVar24 / fVar3;
    auVar22._12_4_ = auVar29._12_4_ / fVar23;
  }
  auVar6 = NEON_ext(auVar30,auVar30,4,1);
  auVar21 = NEON_ext(auVar22,auVar22,4,1);
  auVar19._0_4_ = fVar13 * auVar21._0_4_ - auVar6._0_4_ * auVar22._0_4_;
  auVar19._4_4_ = fVar14 * auVar21._4_4_ - auVar6._4_4_ * auVar22._4_4_;
  auVar19._8_4_ = auVar30._8_4_ * auVar22._0_4_ - fVar13 * auVar22._8_4_;
  auVar19._12_4_ = auVar30._12_4_ * auVar22._4_4_ - fVar14 * auVar22._12_4_;
  auVar30 = NEON_ext(auVar19,auVar19,4,1);
  *(long *)(param_1 + 0x98) = auVar22._8_8_;
  *(long *)(param_1 + 0x90) = auVar22._0_8_;
  *(ulong *)(param_1 + 0xa8) = (ulong)(uint)auVar19._0_4_;
  *(long *)(param_1 + 0xa0) = auVar30._0_8_;
  fVar3 = *param_4;
  fVar5 = param_4[1];
  fVar13 = param_4[2];
  fVar14 = param_4[3];
  fVar25 = fVar3 * fVar3 + fVar5 * fVar5 + fVar13 * fVar13;
  auVar30 = ZEXT816(0);
  *(float *)(param_1 + 0x128) = fVar13;
  *(float *)(param_1 + 300) = fVar14;
  *(float *)(param_1 + 0x120) = fVar3;
  *(float *)(param_1 + 0x124) = fVar5;
  if (fVar25 != 0.0) {
    fVar25 = SQRT(fVar25);
    fVar24 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar13 * fVar13);
    auVar30._0_4_ = fVar3 / fVar25;
    auVar30._4_4_ = fVar5 / fVar24;
    auVar30._8_4_ = fVar13 / fVar25;
    auVar30._12_4_ = fVar14 / fVar24;
  }
  *(long *)(param_1 + 0x128) = auVar30._8_8_;
  *(long *)(param_1 + 0x120) = auVar30._0_8_;
  fVar3 = *param_5;
  fVar5 = param_5[1];
  fVar13 = param_5[2];
  fVar14 = param_5[3];
  *(float *)(param_1 + 0x158) = fVar13;
  *(float *)(param_1 + 0x15c) = fVar14;
  *(float *)(param_1 + 0x150) = fVar3;
  *(float *)(param_1 + 0x154) = fVar5;
  fVar25 = fVar3 * fVar3 + fVar5 * fVar5 + fVar13 * fVar13;
  auVar20 = ZEXT816(0);
  if (fVar25 != 0.0) {
    fVar25 = SQRT(fVar25);
    fVar24 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar13 * fVar13);
    auVar20._0_4_ = fVar3 / fVar25;
    auVar20._4_4_ = fVar5 / fVar24;
    auVar20._8_4_ = fVar13 / fVar25;
    auVar20._12_4_ = fVar14 / fVar24;
  }
  auVar31._0_12_ = auVar30._0_12_;
  auVar31._12_4_ = 0;
  *(long *)(param_1 + 0x158) = auVar20._8_8_;
  *(long *)(param_1 + 0x150) = auVar20._0_8_;
  *(long *)(param_1 + 0x198) = auVar20._8_8_;
  *(long *)(param_1 + 400) = auVar20._0_8_;
  auVar21 = a64_TBL(ZEXT816(0),auVar31,auVar34);
  fVar5 = auVar21._0_4_;
  auVar33._0_4_ = fVar5 * fVar5;
  auVar33._4_4_ = auVar21._4_4_ * auVar21._4_4_;
  auVar33._8_4_ = auVar21._8_4_ * auVar21._8_4_;
  auVar33._12_4_ = auVar21._12_4_ * auVar21._12_4_;
  auVar34 = NEON_ext(auVar33,auVar33,8,1);
  auVar6 = a64_TBL(ZEXT816(0),auVar31,auVar17);
  fVar25 = auVar30._0_4_;
  fVar24 = auVar30._4_4_;
  fVar3 = auVar34._0_4_ + auVar34._4_4_;
  auVar8._4_12_ = auVar6._4_12_;
  auVar8._0_4_ = -auVar6._0_4_;
  auVar11._4_12_ = auVar21._4_12_;
  auVar11._0_4_ = -fVar5;
  uVar26 = CONCAT44(-(uint)(fVar25 * fVar25 + fVar24 * fVar24 <
                           auVar33._0_4_ + auVar33._4_4_ + fVar3),
                    -(uint)(fVar25 * fVar25 + fVar24 * fVar24 <
                           auVar33._0_4_ + auVar33._4_4_ + fVar3)) & 0x100000001;
  iVar15 = (int)uVar26;
  iVar18 = (int)(uVar26 >> 0x20);
  auVar16._0_4_ = (iVar15 << 0x1f) >> 0x1f;
  auVar16._4_4_ = (iVar18 << 0x1f) >> 0x1f;
  auVar16._8_4_ = (iVar15 << 0x1f) >> 0x1f;
  auVar16._12_4_ = (iVar18 << 0x1f) >> 0x1f;
  auVar11 = auVar11 ^ (auVar11 ^ auVar8) & ~auVar16;
  fVar5 = auVar11._0_4_;
  fVar13 = auVar11._4_4_;
  fVar14 = auVar11._8_4_;
  fVar3 = fVar5 * fVar5 + fVar13 * fVar13 + fVar14 * fVar14;
  auVar9 = ZEXT816(0);
  *(long *)(param_1 + 0x138) = auVar11._8_8_;
  *(long *)(param_1 + 0x130) = auVar11._0_8_;
  if (fVar3 != 0.0) {
    fVar3 = SQRT(fVar3);
    fVar23 = SQRT(fVar5 * fVar5 + fVar13 * fVar13 + fVar14 * fVar14);
    auVar9._0_4_ = fVar5 / fVar3;
    auVar9._4_4_ = fVar13 / fVar23;
    auVar9._8_4_ = fVar14 / fVar3;
    auVar9._12_4_ = auVar11._12_4_ / fVar23;
  }
  *(long *)(param_1 + 0x138) = auVar9._8_8_;
  *(long *)(param_1 + 0x130) = auVar9._0_8_;
  fVar3 = *param_7;
  fVar5 = param_7[1];
  fVar13 = param_7[2];
  fVar14 = param_7[3];
  *(float *)(param_1 + 0x168) = fVar13;
  *(float *)(param_1 + 0x16c) = fVar14;
  *(float *)(param_1 + 0x160) = fVar3;
  *(float *)(param_1 + 0x164) = fVar5;
  fVar23 = fVar3 * fVar3 + fVar5 * fVar5 + fVar13 * fVar13;
  if (fVar23 != 0.0) {
    fVar23 = SQRT(fVar23);
    fVar7 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar13 * fVar13);
    auVar32._0_4_ = fVar3 / fVar23;
    auVar32._4_4_ = fVar5 / fVar7;
    auVar32._8_4_ = fVar13 / fVar23;
    auVar32._12_4_ = fVar14 / fVar7;
  }
  auVar6 = NEON_ext(auVar30,auVar30,4,1);
  auVar17 = NEON_ext(auVar9,auVar9,4,1);
  auVar21 = NEON_ext(auVar32,auVar32,4,1);
  auVar34 = NEON_ext(auVar20,auVar20,4,1);
  *(long *)(param_1 + 0x1a8) = auVar32._8_8_;
  *(long *)(param_1 + 0x1a0) = auVar32._0_8_;
  auVar10._0_4_ = fVar25 * auVar17._0_4_ - auVar6._0_4_ * auVar9._0_4_;
  auVar10._4_4_ = fVar24 * auVar17._4_4_ - auVar6._4_4_ * auVar9._4_4_;
  auVar10._8_4_ = auVar30._8_4_ * auVar9._0_4_ - fVar25 * auVar9._8_4_;
  auVar10._12_4_ = auVar30._12_4_ * auVar9._4_4_ - fVar24 * auVar9._12_4_;
  auVar30 = NEON_ext(auVar10,auVar10,4,1);
  auVar12._0_4_ = auVar20._0_4_ * auVar21._0_4_ - auVar34._0_4_ * auVar32._0_4_;
  auVar12._4_4_ = auVar20._4_4_ * auVar21._4_4_ - auVar34._4_4_ * auVar32._4_4_;
  auVar12._8_4_ = auVar20._8_4_ * auVar32._0_4_ - auVar20._0_4_ * auVar32._8_4_;
  auVar12._12_4_ = auVar20._12_4_ * auVar32._4_4_ - auVar20._4_4_ * auVar32._12_4_;
  auVar6 = NEON_ext(auVar12,auVar12,4,1);
  *(ulong *)(param_1 + 0x148) = (ulong)(uint)auVar10._0_4_;
  *(long *)(param_1 + 0x140) = auVar30._0_8_;
  *(long *)(param_1 + 0x168) = auVar32._8_8_;
  *(long *)(param_1 + 0x160) = auVar32._0_8_;
  *(ulong *)(param_1 + 0x178) = (ulong)(uint)auVar12._0_4_;
  *(long *)(param_1 + 0x170) = auVar6._0_8_;
  return;
}


