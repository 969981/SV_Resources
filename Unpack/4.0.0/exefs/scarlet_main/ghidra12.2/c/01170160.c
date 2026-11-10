/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01170160; name: FUN_01170160
 */


void FUN_01170160(undefined1 (*param_1) [16],undefined1 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  int iVar11;
  int iVar19;
  undefined1 auVar13 [12];
  int iVar17;
  undefined1 auVar14 [16];
  float fVar12;
  float fVar18;
  int iVar20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar23 [12];
  float fVar26;
  undefined1 auVar24 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar25 [16];
  undefined1 auVar32 [16];
  
  auVar16 = *param_1;
  iVar1 = (int)(ABS(auVar16._0_4_) * 1.2732395);
  iVar2 = (int)(ABS(auVar16._4_4_) * 1.2732395);
  iVar3 = (int)(ABS(auVar16._8_4_) * 1.2732395);
  iVar4 = (int)(ABS(auVar16._12_4_) * 1.2732395);
  auVar14._0_4_ = iVar1 + 1;
  auVar14._4_4_ = iVar2 + 1;
  auVar14._8_4_ = iVar3 + 1;
  auVar14._12_4_ = iVar4 + 1;
  uVar9 = CONCAT44(auVar14._4_4_,auVar14._0_4_);
  auVar32._0_8_ = uVar9 & 0xfffffffefffffffe;
  auVar32._8_4_ = auVar14._8_4_ & 0xfffffffe;
  auVar32._12_4_ = auVar14._12_4_ & 0xfffffffe;
  auVar10[8] = 0xe1;
  auVar10._0_8_ = 0xffffffe1ffffffe1;
  auVar10[9] = 0xff;
  auVar10[10] = 0xff;
  auVar10[0xb] = 0xff;
  auVar10[0xc] = 0xe1;
  auVar10[0xd] = 0xff;
  auVar10[0xe] = 0xff;
  auVar10[0xf] = 0xff;
  auVar10 = NEON_sshl(auVar16,auVar10,4);
  auVar24 = NEON_scvtf(auVar32,4);
  fVar21 = auVar24._0_4_;
  fVar26 = auVar24._4_4_;
  fVar28 = auVar24._8_4_;
  fVar30 = auVar24._12_4_;
  fVar21 = ABS(auVar16._0_4_) + fVar21 * -0.78515625 + fVar21 * -0.00024187565 +
           fVar21 * -3.774895e-08;
  fVar26 = ABS(auVar16._4_4_) + fVar26 * -0.78515625 + fVar26 * -0.00024187565 +
           fVar26 * -3.774895e-08;
  fVar28 = ABS(auVar16._8_4_) + fVar28 * -0.78515625 + fVar28 * -0.00024187565 +
           fVar28 * -3.774895e-08;
  fVar30 = ABS(auVar16._12_4_) + fVar30 * -0.78515625 + fVar30 * -0.00024187565 +
           fVar30 * -3.774895e-08;
  fVar22 = fVar21 * fVar21;
  fVar27 = fVar26 * fVar26;
  fVar29 = fVar28 * fVar28;
  fVar31 = fVar30 * fVar30;
  iVar11 = -(uint)((auVar14._0_4_ & 2) != 0);
  iVar17 = -(uint)((auVar14._4_4_ & 2) != 0);
  iVar19 = -(uint)((auVar14._8_8_ & 2) != 0);
  iVar20 = -(uint)((auVar14._8_8_ & 0x200000000) != 0);
  auVar32 = NEON_fmov(0x3f800000,4);
  fVar5 = fVar22 * fVar22 * (fVar22 * (fVar22 * 2.4433157e-05 + -0.0013887316) + 0.041666646) +
          fVar22 * -0.5 + auVar32._0_4_;
  fVar6 = fVar27 * fVar27 * (fVar27 * (fVar27 * 2.4433157e-05 + -0.0013887316) + 0.041666646) +
          fVar27 * -0.5 + auVar32._4_4_;
  fVar7 = fVar29 * fVar29 * (fVar29 * (fVar29 * 2.4433157e-05 + -0.0013887316) + 0.041666646) +
          fVar29 * -0.5 + auVar32._8_4_;
  fVar8 = fVar31 * fVar31 * (fVar31 * (fVar31 * 2.4433157e-05 + -0.0013887316) + 0.041666646) +
          fVar31 * -0.5 + auVar32._12_4_;
  fVar12 = (float)CONCAT13((byte)((uint)fVar5 >> 0x18) & (byte)((uint)iVar11 >> 0x18),
                           CONCAT12((byte)((uint)fVar5 >> 0x10) & (byte)((uint)iVar11 >> 0x10),
                                    CONCAT11((byte)((uint)fVar5 >> 8) & (byte)((uint)iVar11 >> 8),
                                             SUB41(fVar5,0) & (byte)iVar11)));
  auVar13._0_8_ =
       CONCAT17((byte)((uint)fVar6 >> 0x18) & (byte)((uint)iVar17 >> 0x18),
                CONCAT16((byte)((uint)fVar6 >> 0x10) & (byte)((uint)iVar17 >> 0x10),
                         CONCAT15((byte)((uint)fVar6 >> 8) & (byte)((uint)iVar17 >> 8),
                                  CONCAT14(SUB41(fVar6,0) & (byte)iVar17,fVar12))));
  auVar13[8] = SUB41(fVar7,0) & (byte)iVar19;
  auVar13[9] = (byte)((uint)fVar7 >> 8) & (byte)((uint)iVar19 >> 8);
  auVar13[10] = (byte)((uint)fVar7 >> 0x10) & (byte)((uint)iVar19 >> 0x10);
  auVar13[0xb] = (byte)((uint)fVar7 >> 0x18) & (byte)((uint)iVar19 >> 0x18);
  auVar24[0xc] = SUB41(fVar8,0) & (byte)iVar20;
  auVar24._0_12_ = auVar13;
  auVar24[0xd] = (byte)((uint)fVar8 >> 8) & (byte)((uint)iVar20 >> 8);
  auVar24[0xe] = (byte)((uint)fVar8 >> 0x10) & (byte)((uint)iVar20 >> 0x10);
  auVar24[0xf] = (byte)((uint)fVar8 >> 0x18) & (byte)((uint)iVar20 >> 0x18);
  fVar18 = (float)((ulong)auVar13._0_8_ >> 0x20);
  fVar21 = fVar21 + fVar21 * fVar22 * (fVar22 * (fVar22 * -0.00019515296 + 0.008332161) +
                                      -0.16666655);
  fVar26 = fVar26 + fVar26 * fVar27 * (fVar27 * (fVar27 * -0.00019515296 + 0.008332161) +
                                      -0.16666655);
  fVar28 = fVar28 + fVar28 * fVar29 * (fVar29 * (fVar29 * -0.00019515296 + 0.008332161) +
                                      -0.16666655);
  fVar30 = fVar30 + fVar30 * fVar31 * (fVar31 * (fVar31 * -0.00019515296 + 0.008332161) +
                                      -0.16666655);
  iVar11 = -(uint)((auVar14._0_4_ & 2) == 0);
  iVar17 = -(uint)((auVar14._4_4_ & 2) == 0);
  iVar19 = -(uint)((auVar14._8_4_ & 2) == 0);
  iVar20 = -(uint)((auVar14._12_4_ & 2) == 0);
  fVar22 = (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & (byte)((uint)iVar11 >> 0x18),
                           CONCAT12((byte)((uint)fVar21 >> 0x10) & (byte)((uint)iVar11 >> 0x10),
                                    CONCAT11((byte)((uint)fVar21 >> 8) & (byte)((uint)iVar11 >> 8),
                                             SUB41(fVar21,0) & (byte)iVar11)));
  auVar23._0_8_ =
       CONCAT17((byte)((uint)fVar26 >> 0x18) & (byte)((uint)iVar17 >> 0x18),
                CONCAT16((byte)((uint)fVar26 >> 0x10) & (byte)((uint)iVar17 >> 0x10),
                         CONCAT15((byte)((uint)fVar26 >> 8) & (byte)((uint)iVar17 >> 8),
                                  CONCAT14(SUB41(fVar26,0) & (byte)iVar17,fVar22))));
  auVar23[8] = SUB41(fVar28,0) & (byte)iVar19;
  auVar23[9] = (byte)((uint)fVar28 >> 8) & (byte)((uint)iVar19 >> 8);
  auVar23[10] = (byte)((uint)fVar28 >> 0x10) & (byte)((uint)iVar19 >> 0x10);
  auVar23[0xb] = (byte)((uint)fVar28 >> 0x18) & (byte)((uint)iVar19 >> 0x18);
  auVar25[0xc] = SUB41(fVar30,0) & (byte)iVar20;
  auVar25._0_12_ = auVar23;
  auVar25[0xd] = (byte)((uint)fVar30 >> 8) & (byte)((uint)iVar20 >> 8);
  auVar25[0xe] = (byte)((uint)fVar30 >> 0x10) & (byte)((uint)iVar20 >> 0x10);
  auVar25[0xf] = (byte)((uint)fVar30 >> 0x18) & (byte)((uint)iVar20 >> 0x18);
  auVar15._0_4_ = fVar22 + fVar12;
  fVar27 = (float)((ulong)auVar23._0_8_ >> 0x20);
  auVar15._4_4_ = fVar27 + fVar18;
  auVar15._8_4_ = auVar23._8_4_ + auVar13._8_4_;
  auVar15._12_4_ = auVar25._12_4_ + auVar24._12_4_;
  auVar16 = NEON_fmin(auVar15,auVar32,4);
  fVar26 = (fVar26 - fVar27) + (fVar6 - fVar18);
  fVar28 = (fVar28 - auVar23._8_4_) + (fVar7 - auVar13._8_4_);
  fVar30 = (fVar30 - auVar25._12_4_) + (fVar8 - auVar24._12_4_);
  param_2[8] = auVar16[8];
  param_2[9] = auVar16[9];
  param_2[10] = auVar16[10];
  param_2[0xb] = (byte)(((uint)((byte)auVar14._8_4_ & 4) << 0x1d) >> 0x18) ^
                 (byte)((uint)(auVar10._8_4_ << 0x1f) >> 0x18) ^ auVar16[0xb];
  param_2[0xc] = auVar16[0xc];
  param_2[0xd] = auVar16[0xd];
  param_2[0xe] = auVar16[0xe];
  param_2[0xf] = (byte)(((uint)((byte)auVar14._12_4_ & 4) << 0x1d) >> 0x18) ^
                 (byte)((uint)(auVar10._12_4_ << 0x1f) >> 0x18) ^ auVar16[0xf];
  *param_2 = auVar16[0];
  param_2[1] = auVar16[1];
  param_2[2] = auVar16[2];
  param_2[3] = (byte)(((uint)((byte)auVar14._0_4_ & 4) << 0x1d) >> 0x18) ^
               (byte)((uint)(auVar10._0_4_ << 0x1f) >> 0x18) ^ auVar16[3];
  param_2[4] = auVar16[4];
  param_2[5] = auVar16[5];
  param_2[6] = auVar16[6];
  param_2[7] = (byte)(((uint)((byte)auVar14._4_4_ & 4) << 0x1d) >> 0x18) ^
               (byte)((uint)(auVar10._4_4_ << 0x1f) >> 0x18) ^ auVar16[7];
  auVar16[4] = SUB41(fVar26,0);
  auVar16._0_4_ = (fVar21 - fVar22) + (fVar5 - fVar12);
  auVar16[5] = (char)((uint)fVar26 >> 8);
  auVar16[6] = (char)((uint)fVar26 >> 0x10);
  auVar16[7] = (char)((uint)fVar26 >> 0x18);
  auVar16[8] = SUB41(fVar28,0);
  auVar16[9] = (char)((uint)fVar28 >> 8);
  auVar16[10] = (char)((uint)fVar28 >> 0x10);
  auVar16[0xb] = (char)((uint)fVar28 >> 0x18);
  auVar16[0xc] = SUB41(fVar30,0);
  auVar16[0xd] = (char)((uint)fVar30 >> 8);
  auVar16[0xe] = (char)((uint)fVar30 >> 0x10);
  auVar16[0xf] = (char)((uint)fVar30 >> 0x18);
  auVar16 = NEON_fmin(auVar16,auVar32,4);
  param_3[1] = CONCAT17((byte)(((uint)((6U - (char)iVar4 | 1) + 2 & 4) << 0x1d) >> 0x18) ^
                        auVar16[0xf],
                        CONCAT16(auVar16[0xe],
                                 CONCAT15(auVar16[0xd],
                                          CONCAT14(auVar16[0xc],
                                                   CONCAT13((byte)(((uint)((6U - (char)iVar3 | 1) +
                                                                           2 & 4) << 0x1d) >> 0x18)
                                                            ^ auVar16[0xb],auVar16._8_3_)))));
  *param_3 = CONCAT17((byte)(((uint)((6U - (char)iVar2 | 1) + 2 & 4) << 0x1d) >> 0x18) ^ auVar16[7],
                      CONCAT16(auVar16[6],
                               CONCAT15(auVar16[5],
                                        CONCAT14(auVar16[4],
                                                 CONCAT13((byte)(((uint)((6U - (char)iVar1 | 1) + 2
                                                                        & 4) << 0x1d) >> 0x18) ^
                                                          auVar16[3],auVar16._0_3_)))));
  return;
}


