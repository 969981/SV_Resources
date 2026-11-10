/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f11744; name: FUN_02f11744
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f11744(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 float *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  int iVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  ulong uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  uVar15 = *param_2;
  *(undefined8 *)(param_1 + 0x78) = param_2[1];
  *(undefined8 *)(param_1 + 0x70) = uVar15;
  uVar15 = *param_3;
  *(undefined8 *)(param_1 + 0xb8) = param_3[1];
  *(undefined8 *)(param_1 + 0xb0) = uVar15;
  uVar16 = param_4[1];
  uVar15 = *param_4;
  fVar10 = (float)uVar15;
  fVar27 = (float)((ulong)uVar15 >> 0x20);
  fVar29 = (float)uVar16;
  *(undefined8 *)(param_1 + 0x48) = uVar16;
  *(undefined8 *)(param_1 + 0x40) = uVar15;
  fVar17 = fVar10 * fVar10 + fVar27 * fVar27 + fVar29 * fVar29;
  fVar11 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  fVar12 = 0.0;
  fVar28 = 0.0;
  fVar21 = 0.0;
  fVar25 = 0.0;
  fVar26 = 0.0;
  if (fVar17 != 0.0) {
    fVar17 = SQRT(fVar17);
    fVar21 = SQRT(fVar10 * fVar10 + fVar27 * fVar27 + fVar29 * fVar29);
    fVar25 = fVar10 / fVar17;
    fVar26 = fVar27 / fVar21;
    fVar28 = fVar29 / fVar17;
    fVar21 = (float)((ulong)uVar16 >> 0x20) / fVar21;
  }
  auVar18._8_8_ = _UNK_03caaa68;
  auVar18._0_8_ = _DAT_03caaa60;
  auVar41._8_8_ = _UNK_03cabbb8;
  auVar41._0_8_ = _DAT_03cabbb0;
  auVar30._4_4_ = fVar26;
  auVar30._0_4_ = fVar25;
  auVar30._8_4_ = fVar28;
  auVar30._12_4_ = 0;
  auVar34 = a64_TBL(ZEXT816(0),auVar30,auVar41);
  fVar27 = auVar34._0_4_;
  auVar38._0_4_ = fVar27 * fVar27;
  auVar38._4_4_ = auVar34._4_4_ * auVar34._4_4_;
  auVar38._8_4_ = auVar34._8_4_ * auVar34._8_4_;
  auVar38._12_4_ = auVar34._12_4_ * auVar34._12_4_;
  auVar42 = NEON_ext(auVar38,auVar38,8,1);
  auVar40._4_4_ = fVar26;
  auVar40._0_4_ = fVar25;
  auVar40._8_4_ = fVar28;
  auVar40._12_4_ = 0;
  auVar30 = a64_TBL(ZEXT816(0),auVar40,auVar18);
  fVar10 = auVar42._0_4_ + auVar42._4_4_;
  auVar42._4_12_ = auVar30._4_12_;
  auVar42._0_4_ = -auVar30._0_4_;
  uVar37 = CONCAT44(-(uint)(fVar25 * fVar25 + fVar26 * fVar26 <
                           auVar38._0_4_ + auVar38._4_4_ + fVar10),
                    -(uint)(fVar25 * fVar25 + fVar26 * fVar26 <
                           auVar38._0_4_ + auVar38._4_4_ + fVar10)) & 0x100000001;
  auVar35._4_12_ = auVar34._4_12_;
  auVar35._0_4_ = -fVar27;
  iVar23 = (int)uVar37;
  iVar24 = (int)(uVar37 >> 0x20);
  auVar39._0_4_ = (iVar23 << 0x1f) >> 0x1f;
  auVar39._4_4_ = (iVar24 << 0x1f) >> 0x1f;
  auVar39._8_4_ = (iVar23 << 0x1f) >> 0x1f;
  auVar39._12_4_ = (iVar24 << 0x1f) >> 0x1f;
  auVar35 = auVar35 ^ (auVar35 ^ auVar42) & ~auVar39;
  fVar27 = auVar35._0_4_;
  fVar29 = auVar35._4_4_;
  fVar17 = auVar35._8_4_;
  fVar10 = fVar27 * fVar27 + fVar29 * fVar29 + fVar17 * fVar17;
  auVar34 = ZEXT816(0);
  *(ulong *)(param_1 + 0x48) = CONCAT44(fVar21,fVar28);
  *(ulong *)(param_1 + 0x40) = CONCAT44(fVar26,fVar25);
  *(long *)(param_1 + 0x58) = auVar35._8_8_;
  *(long *)(param_1 + 0x50) = auVar35._0_8_;
  if (fVar10 != 0.0) {
    fVar10 = SQRT(fVar10);
    fVar33 = SQRT(fVar27 * fVar27 + fVar29 * fVar29 + fVar17 * fVar17);
    auVar34._0_4_ = fVar27 / fVar10;
    auVar34._4_4_ = fVar29 / fVar33;
    auVar34._8_4_ = fVar17 / fVar10;
    auVar34._12_4_ = auVar35._12_4_ / fVar33;
  }
  auVar4._4_4_ = fVar26;
  auVar4._0_4_ = fVar25;
  auVar4._8_4_ = fVar28;
  auVar4._12_4_ = fVar21;
  auVar5._4_4_ = fVar26;
  auVar5._0_4_ = fVar25;
  auVar5._8_4_ = fVar28;
  auVar5._12_4_ = fVar21;
  auVar30 = NEON_ext(auVar4,auVar5,4,1);
  auVar40 = NEON_ext(auVar34,auVar34,4,1);
  fVar10 = fVar25 * auVar40._0_4_ - auVar30._0_4_ * auVar34._0_4_;
  fVar27 = fVar26 * auVar40._4_4_ - auVar30._4_4_ * auVar34._4_4_;
  fVar29 = fVar28 * auVar34._0_4_ - fVar25 * auVar34._8_4_;
  fVar17 = fVar21 * auVar34._4_4_ - fVar26 * auVar34._12_4_;
  auVar6._4_4_ = fVar27;
  auVar6._0_4_ = fVar10;
  auVar6._8_4_ = fVar29;
  auVar6._12_4_ = fVar17;
  auVar7._4_4_ = fVar27;
  auVar7._0_4_ = fVar10;
  auVar7._8_4_ = fVar29;
  auVar7._12_4_ = fVar17;
  auVar30 = NEON_ext(auVar6,auVar7,4,1);
  *(long *)(param_1 + 0x58) = auVar34._8_8_;
  *(long *)(param_1 + 0x50) = auVar34._0_8_;
  *(ulong *)(param_1 + 0x68) = (ulong)(uint)fVar10;
  *(long *)(param_1 + 0x60) = auVar30._0_8_;
  fVar10 = *param_5;
  fVar27 = param_5[1];
  fVar29 = param_5[2];
  fVar17 = param_5[3];
  fVar21 = fVar10 * fVar10 + fVar27 * fVar27 + fVar29 * fVar29;
  fVar33 = 0.0;
  fVar26 = 0.0;
  fVar25 = 0.0;
  fVar28 = 0.0;
  *(float *)(param_1 + 0x88) = fVar29;
  *(float *)(param_1 + 0x8c) = fVar17;
  *(float *)(param_1 + 0x80) = fVar10;
  *(float *)(param_1 + 0x84) = fVar27;
  if (fVar21 != 0.0) {
    fVar21 = SQRT(fVar21);
    fVar26 = SQRT(fVar10 * fVar10 + fVar27 * fVar27 + fVar29 * fVar29);
    fVar25 = fVar10 / fVar21;
    fVar28 = fVar27 / fVar26;
    fVar33 = fVar29 / fVar21;
    fVar26 = fVar17 / fVar26;
  }
  auVar31._12_4_ = fVar26;
  auVar31._8_4_ = fVar33;
  auVar31._4_4_ = fVar28;
  auVar31._0_4_ = fVar25;
  auVar32._0_12_ = auVar31._0_12_;
  auVar32._12_4_ = 0;
  auVar40 = a64_TBL(ZEXT816(0),auVar32,auVar41);
  fVar27 = auVar40._0_4_;
  auVar36._0_4_ = fVar27 * fVar27;
  auVar36._4_4_ = auVar40._4_4_ * auVar40._4_4_;
  auVar36._8_4_ = auVar40._8_4_ * auVar40._8_4_;
  auVar36._12_4_ = auVar40._12_4_ * auVar40._12_4_;
  auVar41 = NEON_ext(auVar36,auVar36,8,1);
  auVar30 = a64_TBL(ZEXT816(0),auVar32,auVar18);
  fVar10 = auVar41._0_4_ + auVar41._4_4_;
  auVar19._4_12_ = auVar30._4_12_;
  auVar19._0_4_ = -auVar30._0_4_;
  auVar22._4_12_ = auVar40._4_12_;
  auVar22._0_4_ = -fVar27;
  uVar37 = CONCAT44(-(uint)(fVar25 * fVar25 + fVar28 * fVar28 <
                           auVar36._0_4_ + auVar36._4_4_ + fVar10),
                    -(uint)(fVar25 * fVar25 + fVar28 * fVar28 <
                           auVar36._0_4_ + auVar36._4_4_ + fVar10)) & 0x100000001;
  iVar23 = (int)uVar37;
  iVar24 = (int)(uVar37 >> 0x20);
  auVar3._4_4_ = (iVar24 << 0x1f) >> 0x1f;
  auVar3._0_4_ = (iVar23 << 0x1f) >> 0x1f;
  auVar3._8_4_ = (iVar23 << 0x1f) >> 0x1f;
  auVar3._12_4_ = (iVar24 << 0x1f) >> 0x1f;
  auVar19 = auVar19 ^ (auVar19 ^ auVar22) & auVar3;
  fVar27 = auVar19._0_4_;
  fVar29 = auVar19._4_4_;
  fVar17 = auVar19._8_4_;
  fVar10 = fVar27 * fVar27 + fVar29 * fVar29 + fVar17 * fVar17;
  *(ulong *)(param_1 + 0x88) = CONCAT44(fVar26,fVar33);
  *(ulong *)(param_1 + 0x80) = CONCAT44(fVar28,fVar25);
  *(long *)(param_1 + 0x98) = auVar19._8_8_;
  *(long *)(param_1 + 0x90) = auVar19._0_8_;
  if (fVar10 != 0.0) {
    fVar10 = SQRT(fVar10);
    fVar12 = SQRT(fVar27 * fVar27 + fVar29 * fVar29 + fVar17 * fVar17);
    fVar11 = fVar27 / fVar10;
    fVar13 = fVar29 / fVar12;
    fVar14 = fVar17 / fVar10;
    fVar12 = auVar19._12_4_ / fVar12;
  }
  auVar8._4_4_ = fVar28;
  auVar8._0_4_ = fVar25;
  auVar8._8_4_ = fVar33;
  auVar8._12_4_ = fVar26;
  auVar9._4_4_ = fVar28;
  auVar9._0_4_ = fVar25;
  auVar9._8_4_ = fVar33;
  auVar9._12_4_ = fVar26;
  auVar30 = NEON_ext(auVar8,auVar9,4,1);
  auVar1._4_4_ = fVar13;
  auVar1._0_4_ = fVar11;
  auVar1._8_4_ = fVar14;
  auVar1._12_4_ = fVar12;
  auVar2._4_4_ = fVar13;
  auVar2._0_4_ = fVar11;
  auVar2._8_4_ = fVar14;
  auVar2._12_4_ = fVar12;
  auVar40 = NEON_ext(auVar1,auVar2,4,1);
  auVar20._0_4_ = fVar25 * auVar40._0_4_ - auVar30._0_4_ * fVar11;
  auVar20._4_4_ = fVar28 * auVar40._4_4_ - auVar30._4_4_ * fVar13;
  auVar20._8_4_ = fVar33 * fVar11 - fVar25 * fVar14;
  auVar20._12_4_ = fVar26 * fVar13 - fVar28 * fVar12;
  auVar30 = NEON_ext(auVar20,auVar20,4,1);
  *(ulong *)(param_1 + 0x98) = CONCAT44(fVar12,fVar14);
  *(ulong *)(param_1 + 0x90) = CONCAT44(fVar13,fVar11);
  *(ulong *)(param_1 + 0xa8) = (ulong)(uint)auVar20._0_4_;
  *(long *)(param_1 + 0xa0) = auVar30._0_8_;
  return;
}


