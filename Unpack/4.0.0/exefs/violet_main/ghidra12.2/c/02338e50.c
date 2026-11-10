/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02338e50; name: FUN_02338e50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02338e50(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],undefined1 param_5 [16],undefined1 param_6 [16])

{
  undefined4 uVar3;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar4;
  uint uVar5;
  undefined1 auVar6 [12];
  float fVar9;
  float fVar11;
  float fVar13;
  undefined1 auVar7 [16];
  uint uVar10;
  uint uVar12;
  uint uVar14;
  undefined1 auVar8 [16];
  int iVar15;
  float fVar16;
  undefined4 uVar17;
  int iVar21;
  undefined1 auVar18 [12];
  int iVar20;
  undefined4 uVar22;
  undefined1 auVar19 [16];
  int iVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar34;
  undefined1 auVar30 [16];
  float fVar32;
  float fVar33;
  undefined1 auVar31 [16];
  float fVar35;
  float fVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined1 auVar44 [12];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar56;
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  float fVar57;
  float fVar58;
  undefined1 auVar59 [16];
  undefined8 uVar60;
  undefined1 auVar61 [16];
  uint uVar62;
  undefined8 uVar63;
  uint uVar67;
  uint uVar68;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  uint uVar69;
  float fVar70;
  undefined8 uVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined8 uVar75;
  
  uVar22 = param_1._8_4_;
  uVar3 = param_1._4_4_;
  fVar4 = param_2._0_4_ - param_5._0_4_;
  fVar9 = param_2._4_4_ - param_5._4_4_;
  fVar11 = param_2._8_4_ - param_5._8_4_;
  fVar13 = param_2._12_4_ - param_5._12_4_;
  auVar19._0_4_ = fVar4 * fVar4 + fVar9 * fVar9;
  auVar19._4_4_ = fVar11 * fVar11 + fVar13 * fVar13;
  auVar19._8_4_ = fVar4 * fVar4 + fVar9 * fVar9;
  auVar19._12_4_ = fVar11 * fVar11 + fVar13 * fVar13;
  auVar19 = NEON_ext(auVar19,auVar19,4,1);
  auVar65._0_4_ = auVar19._0_4_ + auVar19._4_4_;
  auVar65._4_4_ = auVar19._8_4_ + auVar19._12_4_;
  auVar65._8_4_ = auVar19._0_4_ + auVar19._4_4_;
  auVar65._12_4_ = auVar19._8_4_ + auVar19._12_4_;
  auVar19 = NEON_frsqrte(auVar65,4);
  auVar36._0_4_ = auVar65._0_4_ * auVar19._0_4_;
  auVar36._4_4_ = auVar65._4_4_ * auVar19._4_4_;
  auVar36._8_4_ = auVar65._8_4_ * auVar19._8_4_;
  auVar36._12_4_ = auVar65._12_4_ * auVar19._12_4_;
  auVar37 = NEON_frsqrts(auVar19,auVar36,4);
  auVar30._0_4_ = auVar19._0_4_ * auVar37._0_4_;
  auVar30._4_4_ = auVar19._4_4_ * auVar37._4_4_;
  auVar30._8_4_ = auVar19._8_4_ * auVar37._8_4_;
  auVar30._12_4_ = auVar19._12_4_ * auVar37._12_4_;
  auVar38._0_4_ = auVar65._0_4_ * auVar30._0_4_;
  auVar38._4_4_ = auVar65._4_4_ * auVar30._4_4_;
  auVar38._8_4_ = auVar65._8_4_ * auVar30._8_4_;
  auVar38._12_4_ = auVar65._12_4_ * auVar30._12_4_;
  iVar15 = -(uint)(auVar65._0_4_ == 0.0);
  iVar20 = -(uint)(auVar65._4_4_ == 0.0);
  iVar21 = -(uint)(auVar65._8_4_ == 0.0);
  iVar23 = -(uint)(auVar65._12_4_ == 0.0);
  auVar19 = NEON_frsqrts(auVar30,auVar38,4);
  fVar4 = fVar4 * auVar30._0_4_ * auVar19._0_4_;
  fVar9 = fVar9 * auVar30._4_4_ * auVar19._4_4_;
  fVar11 = fVar11 * auVar30._8_4_ * auVar19._8_4_;
  fVar13 = fVar13 * auVar30._12_4_ * auVar19._12_4_;
  fVar4 = (float)CONCAT13((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                          CONCAT12((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                   CONCAT11((byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar15 >> 8),
                                            SUB41(fVar4,0) & ~(byte)iVar15)));
  auVar6._0_8_ = CONCAT17((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                          CONCAT16((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10),
                                   CONCAT15((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar20 >> 8),
                                            CONCAT14(SUB41(fVar9,0) & ~(byte)iVar20,fVar4))));
  auVar6[8] = SUB41(fVar11,0) & ~(byte)iVar21;
  auVar6[9] = (byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar21 >> 8);
  auVar6[10] = (byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
  auVar6[0xb] = (byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
  auVar7[0xc] = SUB41(fVar13,0) & ~(byte)iVar23;
  auVar7._0_12_ = auVar6;
  auVar7[0xd] = (byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar23 >> 8);
  auVar7[0xe] = (byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
  auVar7[0xf] = (byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
  uVar29 = a64_TBL(ZEXT816(0),param_6,DAT_03cb56c8);
  uVar43 = a64_TBL(ZEXT816(0),param_6,DAT_03cb54d8);
  uVar60 = a64_TBL(ZEXT816(0),auVar7,DAT_03cb5488);
  uVar63 = a64_TBL(ZEXT816(0),param_6,DAT_03cb5488);
  uVar25 = a64_TBL(ZEXT816(0),param_6,DAT_03cb54c0);
  uVar42 = a64_TBL(ZEXT816(0),auVar7,DAT_03cb54c0);
  uVar71 = a64_TBL(ZEXT816(0),auVar7,DAT_03cb56c8);
  uVar75 = a64_TBL(ZEXT816(0),auVar7,DAT_03cb54d8);
  fVar24 = (float)((ulong)uVar60 >> 0x20);
  fVar26 = (float)((ulong)uVar71 >> 0x20);
  fVar13 = (float)uVar29 * (float)uVar60 - (float)uVar63 * (float)uVar71;
  fVar32 = (float)((ulong)uVar29 >> 0x20) * fVar24 - (float)((ulong)uVar63 >> 0x20) * fVar26;
  fVar9 = (float)uVar43 * (float)uVar42 - (float)uVar25 * (float)uVar75;
  fVar11 = (float)((ulong)uVar43 >> 0x20) * (float)((ulong)uVar42 >> 0x20) -
           (float)((ulong)uVar25 >> 0x20) * (float)((ulong)uVar75 >> 0x20);
  auVar37._0_4_ = fVar13 * fVar13 + fVar32 * fVar32;
  auVar37._4_4_ = fVar9 * fVar9 + fVar11 * fVar11;
  auVar37._8_4_ = fVar13 * fVar13 + fVar32 * fVar32;
  auVar37._12_4_ = fVar9 * fVar9 + fVar11 * fVar11;
  auVar19 = NEON_ext(auVar37,auVar37,4,1);
  auVar1._0_4_ = auVar19._0_4_ + auVar19._4_4_;
  auVar1._4_4_ = auVar19._8_4_ + auVar19._12_4_;
  auVar1._8_4_ = auVar19._0_4_ + auVar19._4_4_;
  auVar1._12_4_ = auVar19._8_4_ + auVar19._12_4_;
  auVar19 = NEON_frsqrte(auVar1,4);
  auVar64._0_4_ = auVar1._0_4_ * auVar19._0_4_;
  auVar64._4_4_ = auVar1._4_4_ * auVar19._4_4_;
  auVar64._8_4_ = auVar1._8_4_ * auVar19._8_4_;
  auVar64._12_4_ = auVar1._12_4_ * auVar19._12_4_;
  auVar65 = NEON_frsqrts(auVar19,auVar64,4);
  auVar45._0_4_ = auVar19._0_4_ * auVar65._0_4_;
  auVar45._4_4_ = auVar19._4_4_ * auVar65._4_4_;
  auVar45._8_4_ = auVar19._8_4_ * auVar65._8_4_;
  auVar45._12_4_ = auVar19._12_4_ * auVar65._12_4_;
  auVar66._0_4_ = auVar1._0_4_ * auVar45._0_4_;
  auVar66._4_4_ = auVar1._4_4_ * auVar45._4_4_;
  auVar66._8_4_ = auVar1._8_4_ * auVar45._8_4_;
  auVar66._12_4_ = auVar1._12_4_ * auVar45._12_4_;
  iVar15 = -(uint)(auVar1._0_4_ == 0.0);
  iVar20 = -(uint)(auVar1._4_4_ == 0.0);
  iVar21 = -(uint)(auVar1._8_4_ == 0.0);
  iVar23 = -(uint)(auVar1._12_4_ == 0.0);
  auVar19 = NEON_frsqrts(auVar45,auVar66,4);
  fVar13 = fVar13 * auVar45._0_4_ * auVar19._0_4_;
  fVar32 = fVar32 * auVar45._4_4_ * auVar19._4_4_;
  fVar9 = fVar9 * auVar45._8_4_ * auVar19._8_4_;
  fVar11 = fVar11 * auVar45._12_4_ * auVar19._12_4_;
  fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                           CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                    CONCAT11((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar15 >> 8),
                                             SUB41(fVar13,0) & ~(byte)iVar15)));
  auVar44._0_8_ =
       CONCAT17((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                CONCAT16((byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10),
                         CONCAT15((byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar20 >> 8),
                                  CONCAT14(SUB41(fVar32,0) & ~(byte)iVar20,fVar13))));
  auVar44[8] = SUB41(fVar9,0) & ~(byte)iVar21;
  auVar44[9] = (byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar21 >> 8);
  auVar44[10] = (byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
  auVar44[0xb] = (byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
  auVar46[0xc] = SUB41(fVar11,0) & ~(byte)iVar23;
  auVar46._0_12_ = auVar44;
  auVar46[0xd] = (byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar23 >> 8);
  auVar46[0xe] = (byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
  auVar46[0xf] = (byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
  uVar29 = a64_TBL(ZEXT816(0),auVar46,DAT_03cb5488);
  uVar25 = a64_TBL(ZEXT816(0),auVar46,DAT_03cb56c8);
  auVar37 = NEON_ext(auVar46,auVar46,8,1);
  fVar16 = (float)uVar71 * (float)uVar29 - (float)uVar60 * (float)uVar25;
  fVar11 = fVar26 * (float)((ulong)uVar29 >> 0x20) - fVar24 * (float)((ulong)uVar25 >> 0x20);
  auVar19 = NEON_fmov(0x3f800000,4);
  fVar9 = auVar6._8_4_;
  fVar24 = auVar19._0_4_ + (float)_DAT_03cab3a0 * fVar13 + (float)_DAT_03cac210 * fVar11 +
           (float)_DAT_03cabb00 * fVar9;
  fVar26 = auVar19._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar13 +
           (float)((ulong)_DAT_03cac210 >> 0x20) * fVar11 +
           (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar9;
  fVar27 = auVar19._8_4_ + (float)_UNK_03cab3a8 * fVar13 + (float)_UNK_03cac218 * fVar11 +
           (float)_UNK_03cabb08 * fVar9;
  fVar28 = auVar19._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar13 +
           (float)((ulong)_UNK_03cac218 >> 0x20) * fVar11 +
           (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar9;
  fVar33 = SQRT(fVar26) * 0.5;
  fVar34 = SQRT(fVar27) * 0.5;
  auVar19 = NEON_fmov(0x40800000,4);
  auVar59._0_4_ = SQRT(fVar24) * 0.5 * auVar19._0_4_;
  auVar59._4_4_ = fVar33 * auVar19._4_4_;
  auVar59._8_4_ = fVar34 * auVar19._8_4_;
  auVar59._12_4_ = SQRT(fVar28) * 0.5 * auVar19._12_4_;
  auVar19 = NEON_frecpe(auVar59,4);
  uVar25 = a64_TBL(ZEXT816(0),auVar46,DAT_03cb54c0);
  auVar65 = NEON_frecps(auVar19,auVar59,4);
  auVar61._0_4_ = auVar19._0_4_ * auVar65._0_4_;
  auVar61._4_4_ = auVar19._4_4_ * auVar65._4_4_;
  auVar61._8_4_ = auVar19._8_4_ * auVar65._8_4_;
  auVar61._12_4_ = auVar19._12_4_ * auVar65._12_4_;
  uVar29 = a64_TBL(ZEXT816(0),auVar46,DAT_03cb54d8);
  auVar19 = NEON_frecps(auVar61,auVar59,4);
  fVar41 = (float)uVar75 * (float)uVar25 - (float)uVar42 * (float)uVar29;
  fVar11 = (float)((ulong)auVar6._0_8_ >> 0x20);
  fVar35 = auVar61._0_4_ * auVar19._0_4_;
  fVar39 = auVar61._4_4_ * auVar19._4_4_;
  fVar32 = auVar61._8_4_ * auVar19._8_4_;
  fVar40 = auVar61._12_4_ * auVar19._12_4_;
  fVar56 = (float)((ulong)auVar44._0_8_ >> 0x20);
  fVar70 = (float)((uint)fVar24 ^ ((uint)fVar24 ^ (uint)fVar26) & -(uint)(fVar24 <= fVar26));
  fVar72 = (float)((uint)fVar24 ^ ((uint)fVar24 ^ (uint)fVar26) & -(uint)(fVar24 <= fVar26));
  fVar73 = (float)((uint)fVar24 ^ ((uint)fVar24 ^ (uint)fVar26) & -(uint)(fVar24 <= fVar26));
  fVar74 = (float)((uint)fVar24 ^ ((uint)fVar24 ^ (uint)fVar26) & -(uint)(fVar24 <= fVar26));
  fVar57 = (fVar56 + fVar16) * fVar39;
  fVar58 = (fVar11 + fVar41) * fVar39;
  fVar39 = (-auVar44._8_4_ + fVar4) * fVar39;
  fVar9 = (fVar4 + auVar37._0_4_) * fVar32;
  fVar13 = (fVar11 + fVar41) * fVar32;
  fVar32 = (fVar56 - fVar16) * fVar32;
  uVar62 = -(uint)(fVar70 <= fVar27);
  uVar67 = -(uint)(fVar72 <= fVar27);
  uVar68 = -(uint)(fVar73 <= fVar27);
  uVar69 = -(uint)(fVar74 <= fVar27);
  auVar31._4_4_ = uVar3;
  auVar31._0_4_ = uVar3;
  auVar31._8_4_ = uVar3;
  auVar31._12_4_ = uVar3;
  uVar5 = (uint)fVar9 ^
          ((uint)fVar9 ^
          (uint)fVar57 ^ ((uint)fVar57 ^ (uint)(SQRT(fVar24) * 0.5)) & ~-(uint)(fVar24 <= fVar26)) &
          ~uVar62;
  uVar10 = (uint)fVar13 ^
           ((uint)fVar13 ^
           (uint)fVar33 ^
           ((uint)fVar33 ^ (uint)((fVar56 + fVar16) * fVar35)) & ~-(uint)(fVar24 <= fVar26)) &
           ~uVar67;
  uVar12 = (uint)fVar34 ^
           ((uint)fVar34 ^
           (uint)fVar58 ^
           ((uint)fVar58 ^ (uint)((fVar4 + auVar37._0_4_) * fVar35)) & ~-(uint)(fVar24 <= fVar26)) &
           ~uVar68;
  uVar14 = (uint)fVar32 ^
           ((uint)fVar32 ^
           (uint)fVar39 ^
           ((uint)fVar39 ^ (uint)((-fVar11 + fVar41) * fVar35)) & ~-(uint)(fVar24 <= fVar26)) &
           ~uVar69;
  fVar13 = (float)(uVar5 ^ (uVar5 ^ (uint)((fVar41 - fVar11) * fVar40)) &
                           -(uint)((float)((uint)fVar27 ^ ((uint)fVar27 ^ (uint)fVar70) & ~uVar62)
                                  <= fVar28));
  fVar32 = (float)(uVar10 ^ (uVar10 ^ (uint)((fVar4 - auVar44._8_4_) * fVar40)) &
                            -(uint)((float)((uint)fVar27 ^ ((uint)fVar27 ^ (uint)fVar72) & ~uVar67)
                                   <= fVar28));
  fVar16 = (float)(uVar12 ^ (uVar12 ^ (uint)((fVar56 - fVar16) * fVar40)) &
                            -(uint)((float)((uint)fVar27 ^ ((uint)fVar27 ^ (uint)fVar73) & ~uVar68)
                                   <= fVar28));
  fVar4 = (float)(uVar14 ^ (uVar14 ^ (uint)(SQRT(fVar28) * 0.5)) &
                           -(uint)((float)((uint)fVar27 ^ ((uint)fVar27 ^ (uint)fVar74) & ~uVar69)
                                  <= fVar28));
  fVar4 = fVar4 * fVar4;
  auVar2._0_4_ = fVar13 * fVar13 + fVar32 * fVar32;
  auVar2._4_4_ = fVar16 * fVar16 + fVar4;
  auVar2._8_4_ = fVar13 * fVar13 + fVar32 * fVar32;
  auVar2._12_4_ = fVar16 * fVar16 + fVar4;
  auVar19 = NEON_ext(auVar2,auVar2,4,1);
  fVar4 = auVar19._0_4_ + auVar19._4_4_;
  fVar9 = auVar19._8_4_ + auVar19._12_4_;
  fVar11 = auVar19._0_4_ + auVar19._4_4_;
  iVar15 = -(uint)(fVar4 == 0.0);
  iVar20 = -(uint)(fVar9 == 0.0);
  iVar21 = -(uint)(fVar11 == 0.0);
  fVar4 = -fVar13 / fVar4;
  fVar9 = -fVar32 / fVar9;
  fVar11 = -fVar16 / fVar11;
  uVar17 = CONCAT13((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                    CONCAT12((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                             CONCAT11((byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar15 >> 8),
                                      SUB41(fVar4,0) & ~(byte)iVar15)));
  auVar18._0_8_ =
       CONCAT17((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                CONCAT16((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10),
                         CONCAT15((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar20 >> 8),
                                  CONCAT14(SUB41(fVar9,0) & ~(byte)iVar20,uVar17))));
  auVar18[8] = SUB41(fVar11,0) & ~(byte)iVar21;
  auVar18[9] = (byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar21 >> 8);
  auVar18[10] = (byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
  auVar18[0xb] = (byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
  auVar8._4_4_ = uVar22;
  auVar8._0_4_ = uVar22;
  auVar8._8_4_ = uVar22;
  auVar8._12_4_ = uVar22;
  uVar22 = auVar18._8_4_;
  auVar47._4_4_ = uVar22;
  auVar47._0_4_ = uVar22;
  auVar47._8_4_ = uVar22;
  auVar47._12_4_ = uVar22;
  auVar48._4_12_ = auVar47._4_12_;
  auVar48._0_4_ = uVar17;
  uVar3 = (undefined4)((ulong)auVar18._0_8_ >> 0x20);
  auVar50._0_8_ = auVar48._0_8_;
  auVar50._8_4_ = uVar3;
  auVar50._12_4_ = uVar22;
  auVar49._8_8_ = auVar50._8_8_;
  auVar49._4_4_ = uVar22;
  auVar49._0_4_ = uVar17;
  auVar51._0_12_ = auVar49._0_12_;
  auVar51._12_4_ = uVar22;
  auVar65 = NEON_ext(auVar8,param_1,0xc,1);
  auVar19 = NEON_ext(auVar51,auVar51,8,1);
  auVar52._4_12_ = auVar51._4_12_;
  auVar52._0_4_ = auVar19._0_4_;
  auVar54._0_8_ = auVar52._0_8_;
  auVar54._8_4_ = auVar19._8_4_;
  auVar54._12_4_ = uVar22;
  auVar53._8_8_ = auVar54._8_8_;
  auVar53._4_4_ = uVar17;
  auVar53._0_4_ = auVar19._0_4_;
  auVar55._0_12_ = auVar53._0_12_;
  auVar55._12_4_ = uVar3;
  NEON_ext(auVar31,auVar65,0xc,1);
  auVar19 = NEON_ext(auVar55,auVar19,8,1);
  NEON_ext(auVar19,auVar19,0xc,1);
  FUN_023375d8();
  return;
}


