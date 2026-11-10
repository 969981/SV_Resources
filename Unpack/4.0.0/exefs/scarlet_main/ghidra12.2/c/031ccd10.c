/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031ccd10; name: FUN_031ccd10
 */


void FUN_031ccd10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  byte bVar14;
  ulong uVar13;
  byte bVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar20;
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  uint uVar26;
  undefined1 auVar25 [16];
  uint uVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar34;
  undefined8 uVar33;
  uint uVar35;
  float fVar36;
  uint uVar39;
  float fVar40;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  fVar11 = (float)param_2[1];
  fVar12 = (float)((ulong)param_2[1] >> 0x20);
  fVar9 = (float)*param_2;
  fVar10 = (float)((ulong)*param_2 >> 0x20);
  fVar5 = (float)*param_3;
  auVar21._0_4_ = fVar9 * fVar5;
  fVar6 = (float)((ulong)*param_3 >> 0x20);
  auVar21._4_4_ = fVar10 * fVar6;
  fVar7 = (float)param_3[1];
  auVar21._8_4_ = fVar11 * fVar7;
  fVar8 = (float)((ulong)param_3[1] >> 0x20);
  auVar21._12_4_ = fVar12 * fVar8;
  auVar17 = NEON_ext(auVar21,auVar21,8,1);
  fVar4 = auVar17._0_4_ + auVar17._4_4_;
  fVar3 = auVar21._0_4_ + auVar21._4_4_ + fVar4;
  fVar4 = auVar21._0_4_ + auVar21._4_4_ + fVar4;
  uVar13 = CONCAT44(-(uint)(fVar4 < 0.0),-(uint)(fVar3 < 0.0)) & 0x8000000080000000;
  bVar14 = (byte)(uVar13 >> 0x18);
  fVar3 = (float)CONCAT13(bVar14 ^ (byte)((uint)fVar3 >> 0x18),SUB43(fVar3,0));
  bVar15 = (byte)(uVar13 >> 0x38);
  if (0.999 <= fVar3) {
    uVar16 = *param_4;
    uVar33 = NEON_fmov(0x3f800000,4);
    fVar3 = (float)uVar33 - (float)uVar16;
    fVar4 = (float)((ulong)uVar33 >> 0x20) - (float)((ulong)uVar16 >> 0x20);
  }
  else {
    auVar17._0_4_ = ABS(fVar3);
    fVar18 = (float)(CONCAT17(bVar15 ^ (byte)((uint)fVar4 >> 0x18),
                              CONCAT16((char)((uint)fVar4 >> 0x10),
                                       CONCAT15((char)((uint)fVar4 >> 8),
                                                CONCAT14(SUB41(fVar4,0),fVar3)))) >> 0x20);
    auVar17._4_4_ = ABS(fVar18);
    auVar17._8_4_ = ABS(fVar3);
    auVar17._12_4_ = ABS(fVar18);
    auVar24 = NEON_fmov(0x3f800000,4);
    auVar21 = NEON_fmin(auVar17,auVar24,4);
    fVar4 = auVar21._0_4_;
    uVar16 = NEON_fmov(0x3f800000,4);
    fVar22 = (auVar24._0_4_ - fVar4) * 0.5;
    uVar27 = -(uint)(0.5 < fVar4);
    fVar23 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)(fVar4 * fVar4)) & ~uVar27);
    fVar29 = (float)((uint)SQRT(fVar22) ^ ((uint)SQRT(fVar22) ^ (uint)fVar4) & ~uVar27);
    fVar29 = fVar29 + fVar29 * fVar23 * (fVar23 * (fVar23 * (fVar23 * (fVar23 * 0.0421632 +
                                                                      0.024181312) + 0.045470025) +
                                                  0.074953005) + 0.16666752);
    fVar22 = (float)uVar16;
    fVar23 = (float)((ulong)uVar16 >> 0x20);
    uVar13 = auVar21._0_8_ ^
             (auVar21._0_8_ ^
             (ulong)((uint)fVar29 ^ ((uint)fVar29 ^ (uint)(1.5707964 - (fVar29 + fVar29))) & uVar27)
             ) & ~(ulong)-(uint)(fVar4 < 0.0001);
    fVar4 = 1.5707964 -
            (float)CONCAT13((byte)(-(uint)(fVar3 < 0.0) >> 0x18) & 0x80 ^ (byte)(uVar13 >> 0x18),
                            (int3)uVar13);
    fVar29 = (float)*param_4 * fVar4;
    fVar20 = (float)((ulong)*param_4 >> 0x20) * fVar4;
    uVar33 = CONCAT44(fVar20,fVar29);
    uVar32 = CONCAT44(fVar4 - fVar20,fVar4 - fVar29);
    do {
      fVar4 = (float)(int)(((float)uVar32 + 3.1415927) * 0.15915494);
      auVar24._0_4_ = (float)uVar32 + fVar4 * -6.2831855;
      uVar32 = CONCAT44((float)((ulong)uVar32 >> 0x20) + fVar4 * -6.2831855,auVar24._0_4_);
      uVar31 = NEON_fminnm(uVar32,0x40490fdb40490fdb,4);
      uVar31 = NEON_fmax(uVar31,0xc0490fdbc0490fdb,4);
    } while ((float)uVar31 != auVar24._0_4_);
    do {
      fVar4 = (float)(int)(((float)uVar33 + 3.1415927) * 0.15915494);
      auVar19._0_4_ = (float)uVar33 + fVar4 * -6.2831855;
      uVar33 = CONCAT44((float)((ulong)uVar33 >> 0x20) + fVar4 * -6.2831855,auVar19._0_4_);
      uVar32 = NEON_fminnm(uVar33,0x40490fdb40490fdb,4);
      uVar32 = NEON_fmax(uVar32,0xc0490fdbc0490fdb,4);
    } while ((float)uVar32 != auVar19._0_4_);
    auVar24._4_4_ = auVar24._0_4_;
    auVar24._8_4_ = auVar24._0_4_;
    auVar24._12_4_ = auVar24._0_4_;
    auVar19._4_4_ = auVar19._0_4_;
    auVar19._8_4_ = auVar19._0_4_;
    auVar19._12_4_ = auVar19._0_4_;
    uVar35 = (int)(ABS(auVar24._0_4_) * 1.2732395) + 1;
    uVar39 = (int)(ABS(auVar24._0_4_) * 1.2732395) + 1;
    uVar27 = (int)(ABS(auVar19._0_4_) * 1.2732395) + 1;
    uVar26 = (int)(ABS(auVar19._0_4_) * 1.2732395) + 1;
    auVar37._0_8_ = CONCAT44(uVar39,uVar35) & 0xfffffffefffffffe;
    auVar37._8_4_ = (int)(ABS(auVar24._0_4_) * 1.2732395) + 1U & 0xfffffffe;
    auVar37._12_4_ = (int)(ABS(auVar24._0_4_) * 1.2732395) + 1U & 0xfffffffe;
    auVar38._8_4_ = 0xffffffe1;
    auVar38._0_8_ = 0xffffffe1ffffffe1;
    auVar38._12_4_ = 0xffffffe1;
    auVar28 = NEON_sshl(auVar24,auVar38,4);
    fVar29 = fVar22 / SQRT(fVar22 - fVar3 * fVar3);
    fVar18 = fVar23 / SQRT(fVar23 - fVar18 * fVar18);
    auVar21 = NEON_sshl(auVar19,auVar38,4);
    auVar38 = NEON_scvtf(auVar37,4);
    auVar25._0_8_ = CONCAT44(uVar26,uVar27) & 0xfffffffefffffffe;
    auVar25._8_4_ = (int)(ABS(auVar19._0_4_) * 1.2732395) + 1U & 0xfffffffe;
    auVar25._12_4_ = (int)(ABS(auVar19._0_4_) * 1.2732395) + 1U & 0xfffffffe;
    auVar17 = NEON_scvtf(auVar25,4);
    fVar20 = auVar38._0_4_;
    fVar34 = auVar38._4_4_;
    fVar3 = auVar17._0_4_;
    fVar4 = auVar17._4_4_;
    fVar20 = ((ABS(auVar24._0_4_) - fVar20 * 0.78515625) - fVar20 * 0.00024187565) -
             fVar20 * 3.774895e-08;
    fVar34 = ((ABS(auVar24._0_4_) - fVar34 * 0.78515625) - fVar34 * 0.00024187565) -
             fVar34 * 3.774895e-08;
    fVar36 = fVar20 * fVar20;
    fVar40 = fVar34 * fVar34;
    uVar13 = CONCAT44(fVar34 + fVar34 * fVar40 * (fVar40 * (0.008332161 - fVar40 * 0.00019515296) +
                                                 -0.16666655),
                      fVar20 + fVar20 * fVar36 * (fVar36 * (0.008332161 - fVar36 * 0.00019515296) +
                                                 -0.16666655));
    iVar2 = -(uint)((uVar39 & 2) == 0);
    fVar3 = ((ABS(auVar19._0_4_) - fVar3 * 0.78515625) - fVar3 * 0.00024187565) -
            fVar3 * 3.774895e-08;
    fVar20 = ((ABS(auVar19._0_4_) - fVar4 * 0.78515625) - fVar4 * 0.00024187565) -
             fVar4 * 3.774895e-08;
    fVar34 = fVar3 * fVar3;
    fVar30 = fVar20 * fVar20;
    uVar33 = NEON_fmin(uVar13 ^ (uVar13 ^ CONCAT44((fVar40 * fVar40 * (fVar40 * (fVar40 * 
                                                  2.4433157e-05 + -0.0013887316) + 0.041666646) -
                                                  fVar40 * 0.5) + fVar23,
                                                  (fVar36 * fVar36 * (fVar36 * (fVar36 * 
                                                  2.4433157e-05 + -0.0013887316) + 0.041666646) -
                                                  fVar36 * 0.5) + fVar22)) &
                                ~CONCAT17((char)((uint)iVar2 >> 0x18),
                                          CONCAT16((char)((uint)iVar2 >> 0x10),
                                                   CONCAT15((char)((uint)iVar2 >> 8),
                                                            CONCAT14((char)iVar2,
                                                                     -(uint)((uVar35 & 2) == 0))))),
                       uVar16,4);
    fVar4 = (float)CONCAT13((byte)(((uint)((byte)uVar35 & 4) << 0x1d) >> 0x18) ^
                            (byte)((uint)(auVar28._0_4_ << 0x1f) >> 0x18) ^
                            (byte)((ulong)uVar33 >> 0x18),(int3)uVar33);
    uVar13 = CONCAT44((fVar30 * fVar30 * (fVar30 * (fVar30 * 2.4433157e-05 + -0.0013887316) +
                                         0.041666646) - fVar30 * 0.5) + fVar23,
                      (fVar34 * fVar34 * (fVar34 * (fVar34 * 2.4433157e-05 + -0.0013887316) +
                                         0.041666646) - fVar34 * 0.5) + fVar22);
    iVar2 = -(uint)((uVar26 & 2) == 0);
    uVar16 = NEON_fmin(uVar13 ^ (uVar13 ^ CONCAT44(fVar20 + fVar20 * fVar30 * (fVar30 * (0.008332161
                                                                                        - fVar30 * 
                                                  0.00019515296) + -0.16666655),
                                                  fVar3 + fVar3 * fVar34 * (fVar34 * (0.008332161 -
                                                                                     fVar34 * 
                                                  0.00019515296) + -0.16666655))) &
                                CONCAT17((char)((uint)iVar2 >> 0x18),
                                         CONCAT16((char)((uint)iVar2 >> 0x10),
                                                  CONCAT15((char)((uint)iVar2 >> 8),
                                                           CONCAT14((char)iVar2,
                                                                    -(uint)((uVar27 & 2) == 0))))),
                       uVar16,4);
    fVar22 = (float)CONCAT13((byte)(((uint)((byte)uVar27 & 4) << 0x1d) >> 0x18) ^
                             (byte)((uint)(auVar21._0_4_ << 0x1f) >> 0x18) ^
                             (byte)((ulong)uVar16 >> 0x18),(int3)uVar16);
    fVar3 = fVar29 * fVar4;
    fVar4 = fVar18 * fVar4;
    uVar16 = CONCAT44(fVar18 * fVar22,fVar29 * fVar22);
  }
  fVar22 = (float)CONCAT13(bVar14 ^ (byte)((ulong)uVar16 >> 0x18),(int3)uVar16);
  fVar23 = (float)(CONCAT17(bVar15 ^ (byte)((ulong)uVar16 >> 0x38),
                            CONCAT16((char)((ulong)uVar16 >> 0x30),
                                     CONCAT15((char)((ulong)uVar16 >> 0x28),
                                              CONCAT14((char)((ulong)uVar16 >> 0x20),fVar22)))) >>
                  0x20);
  fVar5 = fVar9 * fVar3 + fVar5 * fVar22;
  fVar6 = fVar10 * fVar4 + fVar6 * fVar23;
  fVar7 = fVar11 * fVar3 + fVar7 * fVar22;
  fVar8 = fVar12 * fVar4 + fVar8 * fVar23;
  fVar9 = fVar5 * fVar5;
  fVar10 = fVar6 * fVar6;
  auVar28._4_4_ = fVar10;
  auVar28._0_4_ = fVar9;
  auVar28._8_4_ = fVar7 * fVar7;
  auVar28._12_4_ = fVar8 * fVar8;
  auVar1._4_4_ = fVar10;
  auVar1._0_4_ = fVar9;
  auVar1._8_4_ = fVar7 * fVar7;
  auVar1._12_4_ = fVar8 * fVar8;
  auVar21 = NEON_ext(auVar28,auVar1,8,1);
  fVar4 = auVar21._0_4_ + auVar21._4_4_;
  fVar3 = fVar9 + fVar10 + fVar4;
  if (fVar3 == 0.0) {
    uVar16 = 0;
    uVar33 = 0;
  }
  else {
    fVar3 = SQRT(fVar3);
    fVar4 = SQRT(fVar9 + fVar10 + fVar4);
    uVar16 = CONCAT44(fVar6 / fVar4,fVar5 / fVar3);
    uVar33 = CONCAT44(fVar8 / fVar4,fVar7 / fVar3);
  }
  param_1[1] = uVar33;
  *param_1 = uVar16;
  return;
}


