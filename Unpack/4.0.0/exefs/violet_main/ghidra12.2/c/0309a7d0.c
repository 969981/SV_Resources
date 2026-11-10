/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0309a7d0; name: FUN_0309a7d0
 */


undefined8 FUN_0309a7d0(float *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  int iVar11;
  undefined8 uVar10;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int iVar32;
  float fVar33;
  int iVar34;
  float fVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  undefined1 auVar41 [12];
  int iVar49;
  undefined1 auVar43 [16];
  float fVar48;
  undefined1 auVar44 [16];
  undefined8 uVar40;
  undefined1 auVar42 [12];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined8 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  
  fVar24 = *param_1;
  fVar26 = param_1[1];
  fVar7 = param_1[2];
  fVar23 = (float)*(undefined8 *)(param_1 + 6);
  fVar25 = (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar56 = param_2[1];
  uVar28 = *param_2;
  fVar16 = (float)*(undefined8 *)(param_1 + 4);
  fVar27 = (float)uVar28;
  iVar32 = -(uint)(fVar27 <= fVar16);
  fVar19 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  fVar29 = (float)((ulong)uVar28 >> 0x20);
  iVar34 = -(uint)(fVar29 <= fVar19);
  fVar30 = (float)uVar56;
  iVar36 = -(uint)(fVar30 <= fVar23);
  iVar8 = -(uint)(fVar24 <= fVar27);
  iVar11 = -(uint)(fVar26 <= fVar29);
  iVar13 = -(uint)(fVar7 <= fVar30);
  uVar39 = param_3[1];
  uVar10 = *param_3;
  iVar32 = CONCAT13((byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar11 >> 0x18) &
                    (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar8 >> 0x18) &
                    (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar13 >> 0x18),
                    CONCAT12((byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar11 >> 0x10) &
                             (byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar8 >> 0x10) &
                             (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar13 >> 0x10),
                             CONCAT11((byte)((uint)iVar34 >> 8) & (byte)((uint)iVar11 >> 8) &
                                      (byte)((uint)iVar32 >> 8) & (byte)((uint)iVar8 >> 8) &
                                      (byte)((uint)iVar36 >> 8) & (byte)((uint)iVar13 >> 8),
                                      (byte)iVar34 & (byte)iVar11 & (byte)iVar32 & (byte)iVar8 &
                                      (byte)iVar36 & (byte)iVar13)));
  fVar9 = (float)uVar10;
  iVar8 = -(uint)(fVar24 <= fVar9);
  fVar12 = (float)((ulong)uVar10 >> 0x20);
  iVar11 = -(uint)(fVar26 <= fVar12);
  fVar14 = (float)uVar39;
  iVar13 = -(uint)(fVar7 <= fVar14);
  fVar15 = (float)((ulong)uVar39 >> 0x20);
  iVar34 = -(uint)(fVar9 <= fVar16);
  iVar36 = -(uint)(fVar12 <= fVar19);
  iVar49 = -(uint)(fVar14 <= fVar23);
  iVar8 = CONCAT13((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar11 >> 0x18) &
                   (byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar8 >> 0x18) &
                   (byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar13 >> 0x18),
                   CONCAT12((byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar11 >> 0x10) &
                            (byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar8 >> 0x10) &
                            (byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar13 >> 0x10),
                            CONCAT11((byte)((uint)iVar36 >> 8) & (byte)((uint)iVar11 >> 8) &
                                     (byte)((uint)iVar34 >> 8) & (byte)((uint)iVar8 >> 8) &
                                     (byte)((uint)iVar49 >> 8) & (byte)((uint)iVar13 >> 8),
                                     (byte)iVar36 & (byte)iVar11 & (byte)iVar34 & (byte)iVar8 &
                                     (byte)iVar49 & (byte)iVar13)));
  if (iVar32 != 0 && iVar8 != 0) {
    return 1;
  }
  fVar31 = (float)((ulong)uVar56 >> 0x20);
  if (iVar32 == 0) {
    fVar33 = fVar9 - fVar27;
    fVar35 = fVar12 - fVar29;
    fVar37 = fVar14 - fVar30;
    auVar18 = ZEXT816(0x3f800000);
    auVar57 = NEON_fmov(0x3f800000,4);
    iVar11 = -(uint)(fVar33 == 0.0);
    iVar13 = -(uint)(fVar35 == 0.0);
    iVar32 = -(uint)(fVar37 == 0.0);
    iVar34 = -(uint)(auVar18._0_4_ == 0.0);
    fVar38 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                             CONCAT12((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                      CONCAT11((byte)((uint)fVar33 >> 8) &
                                               ~(byte)((uint)iVar11 >> 8),
                                               SUB41(fVar33,0) & ~(byte)iVar11)));
    auVar42._0_8_ =
         CONCAT17((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                  CONCAT16((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                           CONCAT15((byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar13 >> 8),
                                    CONCAT14(SUB41(fVar35,0) & ~(byte)iVar13,fVar38))));
    auVar42[8] = SUB41(fVar37,0) & ~(byte)iVar32;
    auVar42[9] = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar32 >> 8);
    auVar42[10] = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10);
    auVar42[0xb] = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18);
    auVar45._12_2_ = 0;
    auVar45._0_12_ = auVar42;
    auVar45[0xe] = auVar18[2] & ~(byte)((uint)iVar34 >> 0x10);
    auVar45[0xf] = auVar18[3] & ~(byte)((uint)iVar34 >> 0x18);
    iVar11 = -(uint)(fVar38 == 0.0);
    fVar48 = (float)((ulong)auVar42._0_8_ >> 0x20);
    iVar13 = -(uint)(fVar48 == 0.0);
    iVar32 = -(uint)(auVar42._8_4_ == 0.0);
    iVar34 = -(uint)(auVar45._12_4_ == 0.0);
    auVar46._0_4_ = auVar57._0_4_ / fVar38;
    auVar46._4_4_ = auVar57._4_4_ / fVar48;
    auVar46._8_4_ = auVar57._8_4_ / auVar42._8_4_;
    auVar46._12_4_ = auVar57._12_4_ / auVar45._12_4_;
    auVar59._8_4_ = 0x7f7fffee;
    auVar59._0_8_ = 0x7f7fffee7f7fffee;
    auVar59._12_4_ = 0x7f7fffee;
    auVar18[1] = ~(byte)((uint)iVar11 >> 8);
    auVar18[0] = ~(byte)iVar11;
    auVar18[2] = ~(byte)((uint)iVar11 >> 0x10);
    auVar18[3] = ~(byte)((uint)iVar11 >> 0x18);
    auVar18[4] = ~(byte)iVar13;
    auVar18[5] = ~(byte)((uint)iVar13 >> 8);
    auVar18[6] = ~(byte)((uint)iVar13 >> 0x10);
    auVar18[7] = ~(byte)((uint)iVar13 >> 0x18);
    auVar18[8] = ~(byte)iVar32;
    auVar18[9] = ~(byte)((uint)iVar32 >> 8);
    auVar18[10] = ~(byte)((uint)iVar32 >> 0x10);
    auVar18[0xb] = ~(byte)((uint)iVar32 >> 0x18);
    auVar18[0xc] = ~(byte)iVar34;
    auVar18[0xd] = ~(byte)((uint)iVar34 >> 8);
    auVar18[0xe] = ~(byte)((uint)iVar34 >> 0x10);
    auVar18[0xf] = ~(byte)((uint)iVar34 >> 0x18);
    auVar46 = auVar46 ^ (auVar46 ^ auVar59) & ~auVar18;
    fVar38 = (fVar24 - fVar27) * auVar46._0_4_;
    fVar48 = (fVar26 - fVar29) * auVar46._4_4_;
    uVar20 = (undefined1)((uint)fVar48 >> 8);
    uVar21 = (undefined1)((uint)fVar48 >> 0x10);
    uVar22 = (undefined1)((uint)fVar48 >> 0x18);
    fVar5 = (fVar7 - fVar30) * auVar46._8_4_;
    uVar50 = (undefined1)((uint)fVar5 >> 8);
    uVar51 = (undefined1)((uint)fVar5 >> 0x10);
    uVar52 = (undefined1)((uint)fVar5 >> 0x18);
    fVar6 = (param_1[3] - fVar31) * auVar46._12_4_;
    uVar53 = (undefined1)((uint)fVar6 >> 8);
    uVar54 = (undefined1)((uint)fVar6 >> 0x10);
    uVar55 = (undefined1)((uint)fVar6 >> 0x18);
    auVar47._0_4_ = (fVar16 - fVar27) * auVar46._0_4_;
    auVar47._4_4_ = (fVar19 - fVar29) * auVar46._4_4_;
    auVar47._8_4_ = (fVar23 - fVar30) * auVar46._8_4_;
    auVar47._12_4_ = (fVar25 - fVar31) * auVar46._12_4_;
    auVar57[4] = SUB41(fVar48,0);
    auVar57._0_4_ = fVar38;
    auVar57[5] = uVar20;
    auVar57[6] = uVar21;
    auVar57[7] = uVar22;
    auVar57[8] = SUB41(fVar5,0);
    auVar57[9] = uVar50;
    auVar57[10] = uVar51;
    auVar57[0xb] = uVar52;
    auVar57[0xc] = SUB41(fVar6,0);
    auVar57[0xd] = uVar53;
    auVar57[0xe] = uVar54;
    auVar57[0xf] = uVar55;
    auVar57 = NEON_fmin(auVar57,auVar47,4);
    auVar4[4] = SUB41(fVar48,0);
    auVar4._0_4_ = fVar38;
    auVar4[5] = uVar20;
    auVar4[6] = uVar21;
    auVar4[7] = uVar22;
    auVar4[8] = SUB41(fVar5,0);
    auVar4[9] = uVar50;
    auVar4[10] = uVar51;
    auVar4[0xb] = uVar52;
    auVar4[0xc] = SUB41(fVar6,0);
    auVar4[0xd] = uVar53;
    auVar4[0xe] = uVar54;
    auVar4[0xf] = uVar55;
    auVar18 = NEON_fmax(auVar4,auVar47,4);
    uVar28 = NEON_fmaxp(auVar57._0_8_,auVar57._0_8_,4);
    uVar28 = NEON_fmax(CONCAT44(auVar57._8_4_,auVar57._8_4_),uVar28,4);
    uVar56 = NEON_fminp(auVar18._0_8_,auVar18._0_8_,4);
    uVar40 = NEON_fmin(CONCAT44(auVar18._8_4_,auVar18._8_4_),uVar56,4);
    uVar56 = NEON_fmax(uVar28,0,4);
    uVar28 = NEON_fmov(0x3f800000,4);
    uVar28 = NEON_fmin(uVar40,uVar28,4);
    fVar38 = (float)uVar56;
    if ((bool)(~(fVar38 <= (float)uVar28) & 1)) {
      return 0;
    }
    fVar48 = (float)((ulong)uVar56 >> 0x20);
    uVar28 = CONCAT44(fVar29 + fVar35 * fVar48,fVar27 + fVar33 * fVar38);
    uVar56 = CONCAT44(fVar31 + (fVar15 - fVar31) * fVar48,fVar30 + fVar37 * fVar38);
  }
  if (iVar8 == 0) {
    fVar27 = fVar27 - fVar9;
    fVar29 = fVar29 - fVar12;
    fVar30 = fVar30 - fVar14;
    auVar18 = ZEXT816(0x3f800000);
    auVar57 = NEON_fmov(0x3f800000,4);
    iVar8 = -(uint)(fVar27 == 0.0);
    iVar11 = -(uint)(fVar29 == 0.0);
    iVar13 = -(uint)(fVar30 == 0.0);
    iVar32 = -(uint)(auVar18._0_4_ == 0.0);
    fVar38 = (float)CONCAT13((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                             CONCAT12((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                      CONCAT11((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar8 >> 8)
                                               ,SUB41(fVar27,0) & ~(byte)iVar8)));
    auVar41._0_8_ =
         CONCAT17((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                  CONCAT16((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                           CONCAT15((byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                    CONCAT14(SUB41(fVar29,0) & ~(byte)iVar11,fVar38))));
    auVar41[8] = SUB41(fVar30,0) & ~(byte)iVar13;
    auVar41[9] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar13 >> 8);
    auVar41[10] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10);
    auVar41[0xb] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18);
    auVar43._12_2_ = 0;
    auVar43._0_12_ = auVar41;
    auVar43[0xe] = auVar18[2] & ~(byte)((uint)iVar32 >> 0x10);
    auVar43[0xf] = auVar18[3] & ~(byte)((uint)iVar32 >> 0x18);
    iVar8 = -(uint)(fVar38 == 0.0);
    fVar48 = (float)((ulong)auVar41._0_8_ >> 0x20);
    iVar11 = -(uint)(fVar48 == 0.0);
    iVar13 = -(uint)(auVar41._8_4_ == 0.0);
    iVar32 = -(uint)(auVar43._12_4_ == 0.0);
    auVar44._0_4_ = auVar57._0_4_ / fVar38;
    auVar44._4_4_ = auVar57._4_4_ / fVar48;
    auVar44._8_4_ = auVar57._8_4_ / auVar41._8_4_;
    auVar44._12_4_ = auVar57._12_4_ / auVar43._12_4_;
    auVar58._8_4_ = 0x7f7fffee;
    auVar58._0_8_ = 0x7f7fffee7f7fffee;
    auVar58._12_4_ = 0x7f7fffee;
    auVar3[1] = ~(byte)((uint)iVar8 >> 8);
    auVar3[0] = ~(byte)iVar8;
    auVar3[2] = ~(byte)((uint)iVar8 >> 0x10);
    auVar3[3] = ~(byte)((uint)iVar8 >> 0x18);
    auVar3[4] = ~(byte)iVar11;
    auVar3[5] = ~(byte)((uint)iVar11 >> 8);
    auVar3[6] = ~(byte)((uint)iVar11 >> 0x10);
    auVar3[7] = ~(byte)((uint)iVar11 >> 0x18);
    auVar3[8] = ~(byte)iVar13;
    auVar3[9] = ~(byte)((uint)iVar13 >> 8);
    auVar3[10] = ~(byte)((uint)iVar13 >> 0x10);
    auVar3[0xb] = ~(byte)((uint)iVar13 >> 0x18);
    auVar3[0xc] = ~(byte)iVar32;
    auVar3[0xd] = ~(byte)((uint)iVar32 >> 8);
    auVar3[0xe] = ~(byte)((uint)iVar32 >> 0x10);
    auVar3[0xf] = ~(byte)((uint)iVar32 >> 0x18);
    auVar44 = auVar44 ^ (auVar44 ^ auVar58) & ~auVar3;
    auVar17._0_4_ = (fVar24 - fVar9) * auVar44._0_4_;
    auVar17._4_4_ = (fVar26 - fVar12) * auVar44._4_4_;
    auVar17._8_4_ = (fVar7 - fVar14) * auVar44._8_4_;
    auVar17._12_4_ = (param_1[3] - fVar15) * auVar44._12_4_;
    fVar16 = (fVar16 - fVar9) * auVar44._0_4_;
    fVar19 = (fVar19 - fVar12) * auVar44._4_4_;
    uVar20 = (undefined1)((uint)fVar19 >> 8);
    uVar21 = (undefined1)((uint)fVar19 >> 0x10);
    uVar22 = (undefined1)((uint)fVar19 >> 0x18);
    fVar24 = (fVar23 - fVar14) * auVar44._8_4_;
    fVar26 = (fVar25 - fVar15) * auVar44._12_4_;
    auVar1[4] = SUB41(fVar19,0);
    auVar1._0_4_ = fVar16;
    auVar1[5] = uVar20;
    auVar1[6] = uVar21;
    auVar1[7] = uVar22;
    auVar1._8_4_ = fVar24;
    auVar1._12_4_ = fVar26;
    auVar57 = NEON_fmin(auVar17,auVar1,4);
    auVar2[4] = SUB41(fVar19,0);
    auVar2._0_4_ = fVar16;
    auVar2[5] = uVar20;
    auVar2[6] = uVar21;
    auVar2[7] = uVar22;
    auVar2._8_4_ = fVar24;
    auVar2._12_4_ = fVar26;
    auVar18 = NEON_fmax(auVar17,auVar2,4);
    uVar10 = NEON_fmaxp(auVar57._0_8_,auVar57._0_8_,4);
    uVar10 = NEON_fmax(CONCAT44(auVar57._8_4_,auVar57._8_4_),uVar10,4);
    uVar39 = NEON_fminp(auVar18._0_8_,auVar18._0_8_,4);
    uVar40 = NEON_fmin(CONCAT44(auVar18._8_4_,auVar18._8_4_),uVar39,4);
    uVar39 = NEON_fmax(uVar10,0,4);
    uVar10 = NEON_fmov(0x3f800000,4);
    uVar10 = NEON_fmin(uVar40,uVar10,4);
    fVar16 = (float)uVar39;
    if ((bool)(~(fVar16 <= (float)uVar10) & 1)) {
      return 0;
    }
    fVar19 = (float)((ulong)uVar39 >> 0x20);
    uVar10 = CONCAT44(fVar12 + fVar29 * fVar19,fVar9 + fVar27 * fVar16);
    uVar39 = CONCAT44(fVar15 + (fVar31 - fVar15) * fVar19,fVar14 + fVar30 * fVar16);
  }
  param_2[1] = uVar56;
  *param_2 = uVar28;
  param_3[1] = uVar39;
  *param_3 = uVar10;
  return 1;
}


