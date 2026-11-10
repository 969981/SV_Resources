/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fc2fe0; name: FUN_02fc2fe0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fc2fe0(long param_1,long param_2,int param_3,uint param_4,undefined8 *param_5,
                 double *param_6,undefined8 *param_7,long *param_8)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  long *plVar3;
  long lVar4;
  double dVar5;
  float fVar6;
  float fVar8;
  double dVar7;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  undefined1 auVar16 [16];
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  
  *param_8 = param_2;
  lVar2 = *(long *)(param_2 + 0x78);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x18) != '\x15')) {
    *(undefined4 *)(param_8 + 3) = 0xffffffff;
    param_8[4] = lVar2;
  }
  else {
    plVar3 = (long *)(lVar2 + (ulong)(byte)param_3 * 8 + 0x48);
    lVar4 = *plVar3;
    lVar2 = 0;
    if (lVar4 != 0) {
      lVar2 = lVar4 + (long)plVar3;
    }
    param_8[4] = lVar2;
    *(uint *)(param_8 + 3) = param_3 << 0x1d | 0x1fffffff;
  }
  pauVar1 = (undefined1 (*) [16])
            (*(long *)(*(long *)(*(long *)(param_1 + 0x298) + 8) + 0x150) +
            (long)*(int *)(param_2 + 0x80) * 0x80);
  param_8[1] = (long)pauVar1;
  param_8[2] = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x298) + 8) + 0x8a8) + 0x48) +
               (ulong)*(ushort *)(param_2 + 0x8a) * 0x50;
  if ((param_4 & 1) == 0) {
    dVar5 = *(double *)pauVar1[1];
    dVar7 = *(double *)(pauVar1[1] + 8);
    dVar9 = 0.0;
    dVar10 = *(double *)pauVar1[2];
    auVar30 = *pauVar1;
  }
  else {
    fVar6 = -(float)*(undefined8 *)(param_1 + 0x2b8);
    fVar8 = -(float)((ulong)*(undefined8 *)(param_1 + 0x2b8) >> 0x20);
    fVar15 = (float)((ulong)*(undefined8 *)pauVar1[3] >> 0x20);
    dVar9 = (double)fVar6;
    fVar11 = (float)*(undefined8 *)(pauVar1[2] + 8) * fVar6 * 0.5;
    fVar12 = (float)((ulong)*(undefined8 *)(pauVar1[2] + 8) >> 0x20) * fVar8 * 0.5;
    fVar13 = (float)*(undefined8 *)pauVar1[3] * fVar6 * 0.5;
    fVar14 = fVar15 * fVar8 * 0.5;
    dVar5 = *(double *)pauVar1[1] + dVar9 * (double)(float)*(undefined8 *)(pauVar1[3] + 8);
    dVar7 = *(double *)(pauVar1[1] + 8) +
            dVar9 * (double)(float)((ulong)*(undefined8 *)(pauVar1[3] + 8) >> 0x20);
    auVar29._4_4_ = fVar12;
    auVar29._0_4_ = fVar11;
    auVar29._8_4_ = fVar13;
    auVar29._12_4_ = fVar14;
    auVar33._4_4_ = fVar12;
    auVar33._0_4_ = fVar11;
    auVar33._8_4_ = fVar13;
    auVar33._12_4_ = fVar14;
    auVar33 = NEON_ext(auVar29,auVar33,4,1);
    dVar9 = dVar9 * (double)fVar15;
    fVar6 = fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12;
    fVar17 = fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12;
    auVar30 = *pauVar1;
    auVar29 = NEON_ext(auVar30,auVar30,8,1);
    uVar28 = NEON_ext(auVar30._0_8_,auVar29._0_8_,4,1);
    fVar18 = auVar30._0_4_;
    fVar24 = auVar30._4_4_;
    fVar34 = auVar30._8_4_;
    fVar35 = auVar30._12_4_;
    auVar19._0_4_ = auVar33._0_4_ * fVar18 - fVar11 * (float)uVar28;
    auVar19._4_4_ = auVar33._4_4_ * fVar24 - fVar12 * (float)((ulong)uVar28 >> 0x20);
    auVar19._8_4_ = fVar11 * fVar34 - fVar13 * fVar18;
    auVar19._12_4_ = fVar12 * fVar35 - fVar14 * fVar24;
    auVar30 = NEON_ext(auVar19,auVar19,4,1);
    uVar28 = NEON_fmov(0x3f800000,4);
    fVar15 = fVar6 * (fVar6 * (fVar6 * -0.0029562549 + -0.02144013) + -0.33352822) + (float)uVar28;
    fVar6 = fVar11 * fVar18;
    fVar8 = fVar12 * fVar24;
    fVar18 = fVar11 * fVar35 + auVar30._0_4_ + fVar18 * fVar15;
    fVar12 = fVar12 * fVar35 + auVar30._4_4_ +
             fVar24 * (fVar17 * (fVar17 * (fVar17 * -0.0029562549 + -0.02144013) + -0.33352822) +
                      (float)((ulong)uVar28 >> 0x20));
    fVar17 = fVar13 * fVar35 + auVar19._0_4_ + fVar34 * fVar15;
    dVar10 = dVar9 + *(double *)pauVar1[2];
    auVar23._4_4_ = fVar8;
    auVar23._0_4_ = fVar6;
    auVar23._8_4_ = fVar13 * fVar34;
    auVar23._12_4_ = fVar14 * fVar35;
    auVar32._4_4_ = fVar8;
    auVar32._0_4_ = fVar6;
    auVar32._8_4_ = fVar13 * fVar34;
    auVar32._12_4_ = fVar14 * fVar35;
    auVar30 = NEON_ext(auVar23,auVar32,8,1);
    fVar8 = fVar15 * fVar35 - (fVar6 + fVar8 + auVar30._0_4_);
    dVar9 = dVar9 + 0.0;
    auVar16._0_4_ = fVar18 * fVar18;
    auVar16._4_4_ = fVar12 * fVar12;
    auVar16._8_4_ = fVar17 * fVar17;
    auVar16._12_4_ = fVar8 * fVar8;
    auVar30 = NEON_ext(auVar16,auVar16,8,1);
    fVar6 = auVar30._0_4_ + auVar30._4_4_;
    fVar11 = SQRT(auVar16._0_4_ + auVar16._4_4_ + fVar6);
    fVar6 = SQRT(auVar16._0_4_ + auVar16._4_4_ + fVar6);
    auVar30._0_4_ = fVar18 / fVar11;
    auVar30._4_4_ = fVar12 / fVar6;
    auVar30._8_4_ = fVar17 / fVar11;
    auVar30._12_4_ = fVar8 / fVar6;
  }
  param_5[1] = auVar30._8_8_;
  *param_5 = auVar30._0_8_;
  auVar20._8_8_ = _UNK_03caa778;
  auVar20._0_8_ = _DAT_03caa770;
  *param_6 = dVar5;
  param_6[1] = dVar7;
  auVar29 = a64_TBL(ZEXT816(0),auVar30,auVar20);
  param_6[2] = dVar10;
  param_6[3] = dVar9;
  auVar21._0_4_ = -*(float *)(param_2 + 0xa0);
  auVar21._4_4_ = -*(float *)(param_2 + 0xa4);
  auVar21._8_4_ = -*(float *)(param_2 + 0xa8);
  auVar31._8_8_ = _UNK_03caa6a8;
  auVar31._0_8_ = _DAT_03caa6a0;
  auVar21._12_4_ = *(undefined4 *)(param_2 + 0xac);
  auVar25._8_8_ = _UNK_03caab28;
  auVar25._0_8_ = _DAT_03caab20;
  auVar30 = a64_TBL(ZEXT816(0),auVar30,auVar25);
  auVar26._8_8_ = _UNK_03caab38;
  auVar26._0_8_ = _DAT_03caab30;
  auVar32 = a64_TBL(ZEXT816(0),auVar21,auVar31);
  auVar33 = a64_TBL(ZEXT816(0),auVar21,auVar26);
  auVar22._0_4_ = auVar29._0_4_ * auVar33._0_4_ - auVar30._0_4_ * auVar32._0_4_;
  auVar22._4_4_ = auVar29._4_4_ * auVar33._4_4_ - auVar30._4_4_ * auVar32._4_4_;
  auVar22._8_4_ = auVar29._8_4_ * auVar33._8_4_ - auVar30._8_4_ * auVar32._8_4_;
  auVar22._12_4_ = auVar29._12_4_ * auVar33._12_4_ - auVar30._12_4_ * auVar32._12_4_;
  auVar27._8_8_ = _UNK_03cab148;
  auVar27._0_8_ = _DAT_03cab140;
  auVar23 = a64_TBL(ZEXT816(0),auVar22,auVar27);
  fVar8 = auVar23._12_4_ - (auVar29._12_4_ * auVar32._12_4_ + auVar30._12_4_ * auVar33._12_4_);
  fVar11 = -(auVar23._0_4_ - (auVar29._0_4_ * auVar32._0_4_ + auVar30._0_4_ * auVar33._0_4_));
  fVar14 = -(auVar23._4_4_ - (auVar29._4_4_ * auVar32._4_4_ + auVar30._4_4_ * auVar33._4_4_));
  fVar12 = -(auVar23._8_4_ - (auVar29._8_4_ * auVar32._8_4_ + auVar30._8_4_ * auVar33._8_4_));
  fVar18 = fVar14 + fVar14;
  fVar13 = fVar12 + fVar12;
  fVar24 = (fVar11 + fVar11) * fVar11;
  fVar6 = (fVar11 + fVar11) * fVar8;
  fVar12 = 1.0 - fVar12 * fVar13;
  fVar35 = fVar13 * fVar14 - fVar6;
  fVar38 = fVar18 * fVar11 + fVar13 * fVar8;
  fVar34 = fVar18 * fVar11 - fVar13 * fVar8;
  fVar36 = fVar13 * fVar11 + fVar18 * fVar8;
  fVar6 = fVar13 * fVar14 + fVar6;
  fVar17 = *(float *)(param_2 + 0xc);
  fVar37 = fVar12 - fVar18 * fVar14;
  fVar12 = fVar12 - fVar24;
  fVar13 = fVar13 * fVar11 - fVar18 * fVar8;
  fVar15 = *(float *)(param_2 + 0x1c);
  fVar8 = (1.0 - fVar24) - fVar18 * fVar14;
  fVar11 = *(float *)(param_2 + 0x2c);
  param_7[1] = CONCAT44(fVar35,fVar13);
  *param_7 = CONCAT44(fVar38,fVar37);
  param_7[3] = CONCAT44(fVar36,fVar6);
  param_7[2] = CONCAT44(fVar12,fVar34);
  dVar5 = dVar5 - (double)(fVar36 * fVar11 + fVar34 * fVar15 + fVar37 * fVar17);
  dVar7 = dVar7 - (double)(fVar35 * fVar11 + fVar12 * fVar15 + fVar38 * fVar17);
  fVar14 = (float)dVar5;
  dVar9 = dVar9 - (double)(fVar11 * 0.0 + fVar36 * fVar15 + fVar35 * fVar17);
  fVar12 = (float)dVar7;
  dVar10 = dVar10 - (double)(fVar8 * fVar11 + fVar6 * fVar15 + fVar13 * fVar17);
  fVar11 = (float)dVar10;
  fVar6 = (float)dVar9;
  param_7[5] = (ulong)(uint)fVar8;
  param_7[4] = CONCAT44(fVar35,fVar36);
  *(float *)(param_7 + 7) = fVar11;
  *(float *)((long)param_7 + 0x3c) = fVar6;
  *(float *)(param_7 + 6) = fVar14;
  *(float *)((long)param_7 + 0x34) = fVar12;
  param_7[9] = CONCAT44((float)(dVar9 - (double)fVar6),(float)(dVar10 - (double)fVar11));
  param_7[8] = CONCAT44((float)(dVar7 - (double)fVar12),(float)(dVar5 - (double)fVar14));
  param_8[6] = (long)param_7;
  return;
}


