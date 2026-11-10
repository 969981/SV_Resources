/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023387a4; name: FUN_023387a4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023387a4(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],undefined1 param_5 [16],undefined1 param_6 [16])

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  undefined1 auVar9 [12];
  float fVar13;
  float fVar15;
  float fVar17;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar14;
  float fVar16;
  undefined1 auVar12 [16];
  int iVar18;
  int iVar21;
  undefined4 uVar22;
  int iVar23;
  undefined1 auVar19 [16];
  int iVar24;
  undefined1 auVar20 [16];
  undefined4 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [12];
  undefined4 uVar31;
  float fVar29;
  float fVar30;
  float fVar32;
  undefined1 auVar28 [16];
  undefined8 uVar33;
  float fVar35;
  undefined1 auVar34 [16];
  float fVar36;
  float fVar41;
  float fVar42;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar43;
  undefined1 auVar40 [16];
  float fVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined1 auVar47 [12];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar59;
  undefined1 auVar50 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  undefined1 auVar56 [16];
  undefined1 auVar55 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined8 uVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined8 uVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  undefined8 uVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined8 uVar76;
  
  fVar16 = param_1._8_4_;
  fVar14 = param_1._4_4_;
  fVar8 = param_1._0_4_;
  fVar7 = param_2._0_4_ - param_5._0_4_;
  fVar13 = param_2._4_4_ - param_5._4_4_;
  fVar15 = param_2._8_4_ - param_5._8_4_;
  fVar17 = param_2._12_4_ - param_5._12_4_;
  auVar2._0_4_ = fVar7 * fVar7 + fVar13 * fVar13;
  auVar2._4_4_ = fVar15 * fVar15 + fVar17 * fVar17;
  auVar2._8_4_ = fVar7 * fVar7 + fVar13 * fVar13;
  auVar2._12_4_ = fVar15 * fVar15 + fVar17 * fVar17;
  auVar19 = NEON_ext(auVar2,auVar2,4,1);
  auVar3._0_4_ = auVar19._0_4_ + auVar19._4_4_;
  auVar3._4_4_ = auVar19._8_4_ + auVar19._12_4_;
  auVar3._8_4_ = auVar19._0_4_ + auVar19._4_4_;
  auVar3._12_4_ = auVar19._8_4_ + auVar19._12_4_;
  auVar19 = NEON_frsqrte(auVar3,4);
  auVar37._0_4_ = auVar3._0_4_ * auVar19._0_4_;
  auVar37._4_4_ = auVar3._4_4_ * auVar19._4_4_;
  auVar37._8_4_ = auVar3._8_4_ * auVar19._8_4_;
  auVar37._12_4_ = auVar3._12_4_ * auVar19._12_4_;
  auVar38 = NEON_frsqrts(auVar19,auVar37,4);
  auVar34._0_4_ = auVar19._0_4_ * auVar38._0_4_;
  auVar34._4_4_ = auVar19._4_4_ * auVar38._4_4_;
  auVar34._8_4_ = auVar19._8_4_ * auVar38._8_4_;
  auVar34._12_4_ = auVar19._12_4_ * auVar38._12_4_;
  auVar39._0_4_ = auVar3._0_4_ * auVar34._0_4_;
  auVar39._4_4_ = auVar3._4_4_ * auVar34._4_4_;
  auVar39._8_4_ = auVar3._8_4_ * auVar34._8_4_;
  auVar39._12_4_ = auVar3._12_4_ * auVar34._12_4_;
  iVar18 = -(uint)(auVar3._0_4_ == 0.0);
  iVar21 = -(uint)(auVar3._4_4_ == 0.0);
  iVar23 = -(uint)(auVar3._8_4_ == 0.0);
  iVar24 = -(uint)(auVar3._12_4_ == 0.0);
  auVar19 = NEON_frsqrts(auVar34,auVar39,4);
  fVar7 = fVar7 * auVar34._0_4_ * auVar19._0_4_;
  fVar13 = fVar13 * auVar34._4_4_ * auVar19._4_4_;
  fVar15 = fVar15 * auVar34._8_4_ * auVar19._8_4_;
  fVar17 = fVar17 * auVar34._12_4_ * auVar19._12_4_;
  fVar7 = (float)CONCAT13((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                          CONCAT12((byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10),
                                   CONCAT11((byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar18 >> 8),
                                            SUB41(fVar7,0) & ~(byte)iVar18)));
  auVar9._0_8_ = CONCAT17((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                          CONCAT16((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                                   CONCAT15((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar21 >> 8),
                                            CONCAT14(SUB41(fVar13,0) & ~(byte)iVar21,fVar7))));
  auVar9[8] = SUB41(fVar15,0) & ~(byte)iVar23;
  auVar9[9] = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar23 >> 8);
  auVar9[10] = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
  auVar9[0xb] = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
  auVar10[0xc] = SUB41(fVar17,0) & ~(byte)iVar24;
  auVar10._0_12_ = auVar9;
  auVar10[0xd] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar24 >> 8);
  auVar10[0xe] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
  auVar10[0xf] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
  uVar33 = a64_TBL(ZEXT816(0),param_6,DAT_03cb56c8);
  uVar46 = a64_TBL(ZEXT816(0),param_6,DAT_03cb54d8);
  uVar63 = a64_TBL(ZEXT816(0),auVar10,DAT_03cb5488);
  uVar68 = a64_TBL(ZEXT816(0),param_6,DAT_03cb5488);
  uVar26 = a64_TBL(ZEXT816(0),param_6,DAT_03cb54c0);
  uVar45 = a64_TBL(ZEXT816(0),auVar10,DAT_03cb54c0);
  uVar73 = a64_TBL(ZEXT816(0),auVar10,DAT_03cb56c8);
  uVar76 = a64_TBL(ZEXT816(0),auVar10,DAT_03cb54d8);
  fVar29 = (float)((ulong)uVar63 >> 0x20);
  fVar30 = (float)((ulong)uVar73 >> 0x20);
  fVar17 = (float)uVar33 * (float)uVar63 - (float)uVar68 * (float)uVar73;
  fVar35 = (float)((ulong)uVar33 >> 0x20) * fVar29 - (float)((ulong)uVar68 >> 0x20) * fVar30;
  fVar13 = (float)uVar46 * (float)uVar45 - (float)uVar26 * (float)uVar76;
  fVar15 = (float)((ulong)uVar46 >> 0x20) * (float)((ulong)uVar45 >> 0x20) -
           (float)((ulong)uVar26 >> 0x20) * (float)((ulong)uVar76 >> 0x20);
  auVar4._0_4_ = fVar17 * fVar17 + fVar35 * fVar35;
  auVar4._4_4_ = fVar13 * fVar13 + fVar15 * fVar15;
  auVar4._8_4_ = fVar17 * fVar17 + fVar35 * fVar35;
  auVar4._12_4_ = fVar13 * fVar13 + fVar15 * fVar15;
  auVar19 = NEON_ext(auVar4,auVar4,4,1);
  auVar5._0_4_ = auVar19._0_4_ + auVar19._4_4_;
  auVar5._4_4_ = auVar19._8_4_ + auVar19._12_4_;
  auVar5._8_4_ = auVar19._0_4_ + auVar19._4_4_;
  auVar5._12_4_ = auVar19._8_4_ + auVar19._12_4_;
  auVar19 = NEON_frsqrte(auVar5,4);
  auVar69._0_4_ = auVar5._0_4_ * auVar19._0_4_;
  auVar69._4_4_ = auVar5._4_4_ * auVar19._4_4_;
  auVar69._8_4_ = auVar5._8_4_ * auVar19._8_4_;
  auVar69._12_4_ = auVar5._12_4_ * auVar19._12_4_;
  auVar38 = NEON_frsqrts(auVar19,auVar69,4);
  auVar48._0_4_ = auVar19._0_4_ * auVar38._0_4_;
  auVar48._4_4_ = auVar19._4_4_ * auVar38._4_4_;
  auVar48._8_4_ = auVar19._8_4_ * auVar38._8_4_;
  auVar48._12_4_ = auVar19._12_4_ * auVar38._12_4_;
  auVar70._0_4_ = auVar5._0_4_ * auVar48._0_4_;
  auVar70._4_4_ = auVar5._4_4_ * auVar48._4_4_;
  auVar70._8_4_ = auVar5._8_4_ * auVar48._8_4_;
  auVar70._12_4_ = auVar5._12_4_ * auVar48._12_4_;
  iVar18 = -(uint)(auVar5._0_4_ == 0.0);
  iVar21 = -(uint)(auVar5._4_4_ == 0.0);
  iVar23 = -(uint)(auVar5._8_4_ == 0.0);
  iVar24 = -(uint)(auVar5._12_4_ == 0.0);
  auVar19 = NEON_frsqrts(auVar48,auVar70,4);
  fVar17 = fVar17 * auVar48._0_4_ * auVar19._0_4_;
  fVar35 = fVar35 * auVar48._4_4_ * auVar19._4_4_;
  fVar13 = fVar13 * auVar48._8_4_ * auVar19._8_4_;
  fVar15 = fVar15 * auVar48._12_4_ * auVar19._12_4_;
  fVar32 = (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                           CONCAT12((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10),
                                    CONCAT11((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar18 >> 8),
                                             SUB41(fVar17,0) & ~(byte)iVar18)));
  auVar47._0_8_ =
       CONCAT17((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                CONCAT16((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                         CONCAT15((byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar21 >> 8),
                                  CONCAT14(SUB41(fVar35,0) & ~(byte)iVar21,fVar32))));
  auVar47[8] = SUB41(fVar13,0) & ~(byte)iVar23;
  auVar47[9] = (byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar23 >> 8);
  auVar47[10] = (byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
  auVar47[0xb] = (byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
  auVar49[0xc] = SUB41(fVar15,0) & ~(byte)iVar24;
  auVar49._0_12_ = auVar47;
  auVar49[0xd] = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar24 >> 8);
  auVar49[0xe] = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
  auVar49[0xf] = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
  uVar33 = a64_TBL(ZEXT816(0),auVar49,DAT_03cb5488);
  uVar26 = a64_TBL(ZEXT816(0),auVar49,DAT_03cb56c8);
  auVar74 = NEON_ext(auVar49,auVar49,8,1);
  fVar15 = (float)uVar73 * (float)uVar33 - (float)uVar63 * (float)uVar26;
  fVar17 = fVar30 * (float)((ulong)uVar33 >> 0x20) - fVar29 * (float)((ulong)uVar26 >> 0x20);
  auVar19 = NEON_fmov(0x3f800000,4);
  fVar13 = auVar9._8_4_;
  fVar35 = auVar19._0_4_ + (float)_DAT_03cab3a0 * fVar32 + (float)_DAT_03cac210 * fVar17 +
           (float)_DAT_03cabb00 * fVar13;
  fVar29 = auVar19._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar32 +
           (float)((ulong)_DAT_03cac210 >> 0x20) * fVar17 +
           (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar13;
  fVar30 = auVar19._8_4_ + (float)_UNK_03cab3a8 * fVar32 + (float)_UNK_03cac218 * fVar17 +
           (float)_UNK_03cabb08 * fVar13;
  fVar32 = auVar19._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar32 +
           (float)((ulong)_UNK_03cac218 >> 0x20) * fVar17 +
           (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar13;
  auVar19 = NEON_fmov(0x40800000,4);
  auVar62._0_4_ = SQRT(fVar35) * 0.5 * auVar19._0_4_;
  auVar62._4_4_ = SQRT(fVar29) * 0.5 * auVar19._4_4_;
  auVar62._8_4_ = SQRT(fVar30) * 0.5 * auVar19._8_4_;
  auVar62._12_4_ = SQRT(fVar32) * 0.5 * auVar19._12_4_;
  auVar19 = NEON_frecpe(auVar62,4);
  uVar26 = a64_TBL(ZEXT816(0),auVar49,DAT_03cb54c0);
  auVar38 = NEON_frecps(auVar19,auVar62,4);
  auVar64._0_4_ = auVar19._0_4_ * auVar38._0_4_;
  auVar64._4_4_ = auVar19._4_4_ * auVar38._4_4_;
  auVar64._8_4_ = auVar19._8_4_ * auVar38._8_4_;
  auVar64._12_4_ = auVar19._12_4_ * auVar38._12_4_;
  uVar33 = a64_TBL(ZEXT816(0),auVar49,DAT_03cb54d8);
  auVar19 = NEON_frecps(auVar64,auVar62,4);
  fVar44 = (float)uVar76 * (float)uVar26 - (float)uVar45 * (float)uVar33;
  fVar13 = (float)((ulong)auVar9._0_8_ >> 0x20);
  fVar36 = auVar64._0_4_ * auVar19._0_4_;
  fVar41 = auVar64._4_4_ * auVar19._4_4_;
  fVar42 = auVar64._8_4_ * auVar19._8_4_;
  fVar43 = auVar64._12_4_ * auVar19._12_4_;
  fVar59 = (float)((ulong)auVar47._0_8_ >> 0x20);
  fVar72 = fVar7 + auVar74._0_4_;
  auVar1._8_4_ = -fVar13 + fVar44;
  auVar1._4_4_ = fVar72;
  auVar75._4_4_ = fVar35;
  auVar75._0_4_ = fVar35;
  auVar75._8_4_ = fVar35;
  auVar75._12_4_ = fVar35;
  auVar19._4_4_ = fVar29;
  auVar19._0_4_ = fVar29;
  auVar19._8_4_ = fVar29;
  auVar19._12_4_ = fVar29;
  auVar38._4_4_ = -(uint)(fVar35 <= fVar29);
  auVar38._0_4_ = -(uint)(fVar35 <= fVar29);
  auVar38._8_4_ = -(uint)(fVar35 <= fVar29);
  auVar38._12_4_ = -(uint)(fVar35 <= fVar29);
  auVar75 = auVar75 ^ (auVar75 ^ auVar19) & auVar38;
  auVar1._0_4_ = (fVar59 + fVar15) * fVar36;
  auVar65._0_8_ = auVar1._0_8_ << 0x20;
  auVar65._8_4_ = fVar72 * fVar36;
  auVar65._12_4_ = (-fVar13 + fVar44) * fVar36;
  auVar66._4_12_ = auVar65._4_12_;
  auVar66._0_4_ = SQRT(fVar35) * 0.5;
  auVar60._0_4_ = (fVar59 + fVar15) * fVar41;
  auVar60._4_4_ = (fVar59 + fVar17) * fVar41;
  auVar60._8_4_ = (fVar13 + fVar44) * fVar41;
  auVar60._12_4_ = (-auVar47._8_4_ + fVar7) * fVar41;
  auVar61._8_8_ = auVar60._8_8_;
  auVar61._4_4_ = SQRT(fVar29) * 0.5;
  auVar61._0_4_ = auVar60._0_4_;
  auVar11._0_4_ = (fVar7 + auVar74._0_4_) * fVar42;
  auVar11._4_4_ = (fVar13 + fVar44) * fVar42;
  auVar11._12_4_ = (fVar59 - fVar15) * fVar42;
  auVar74._4_4_ = -(uint)(fVar35 <= fVar29);
  auVar74._0_4_ = -(uint)(fVar35 <= fVar29);
  auVar74._8_4_ = -(uint)(fVar35 <= fVar29);
  auVar74._12_4_ = -(uint)(fVar35 <= fVar29);
  auVar67._4_4_ = fVar30;
  auVar67._0_4_ = fVar30;
  auVar67._8_4_ = fVar30;
  auVar67._12_4_ = fVar30;
  auVar20._0_4_ = (fVar44 - fVar13) * fVar43;
  auVar20._4_4_ = (fVar7 - auVar47._8_4_) * fVar43;
  auVar20._8_4_ = (fVar59 - fVar15) * fVar43;
  auVar71._0_4_ = -(uint)(auVar75._0_4_ <= fVar30);
  auVar71._4_4_ = -(uint)(auVar75._4_4_ <= fVar30);
  auVar71._8_4_ = -(uint)(auVar75._8_4_ <= fVar30);
  auVar71._12_4_ = -(uint)(auVar75._12_4_ <= fVar30);
  auVar11._8_4_ = SQRT(fVar30) * 0.5;
  auVar67 = auVar67 ^ (auVar67 ^ auVar75) & ~auVar71;
  auVar20._12_4_ = SQRT(fVar32) * 0.5;
  auVar28._0_4_ = -(uint)(auVar67._0_4_ <= fVar32);
  auVar28._4_4_ = -(uint)(auVar67._4_4_ <= fVar32);
  auVar28._8_4_ = -(uint)(auVar67._8_4_ <= fVar32);
  auVar28._12_4_ = -(uint)(auVar67._12_4_ <= fVar32);
  auVar20 = auVar20 ^ (auVar20 ^
                      auVar11 ^ (auVar11 ^ auVar61 ^ (auVar61 ^ auVar66) & ~auVar74) & ~auVar71) &
                      ~auVar28;
  fVar7 = param_1._12_4_ * param_1._12_4_;
  uVar22 = auVar20._4_4_;
  auVar40._4_4_ = uVar22;
  auVar40._0_4_ = uVar22;
  auVar40._8_4_ = uVar22;
  auVar40._12_4_ = uVar22;
  auVar6._0_4_ = fVar8 * fVar8 + fVar14 * fVar14;
  auVar6._4_4_ = fVar16 * fVar16 + fVar7;
  auVar6._8_4_ = fVar8 * fVar8 + fVar14 * fVar14;
  auVar6._12_4_ = fVar16 * fVar16 + fVar7;
  auVar19 = NEON_ext(auVar6,auVar6,4,1);
  fVar7 = auVar19._0_4_ + auVar19._4_4_;
  fVar13 = auVar19._8_4_ + auVar19._12_4_;
  fVar15 = auVar19._0_4_ + auVar19._4_4_;
  fVar8 = -fVar8 / fVar7;
  fVar14 = -fVar14 / fVar13;
  fVar16 = -fVar16 / fVar15;
  iVar18 = -(uint)(fVar7 == 0.0);
  iVar21 = -(uint)(fVar13 == 0.0);
  iVar23 = -(uint)(fVar15 == 0.0);
  uVar25 = CONCAT13((byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                    CONCAT12((byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10),
                             CONCAT11((byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar18 >> 8),
                                      SUB41(fVar8,0) & ~(byte)iVar18)));
  auVar27._0_8_ =
       CONCAT17((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                CONCAT16((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                         CONCAT15((byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar21 >> 8),
                                  CONCAT14(SUB41(fVar14,0) & ~(byte)iVar21,uVar25))));
  auVar27[8] = SUB41(fVar16,0) & ~(byte)iVar23;
  auVar27[9] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar23 >> 8);
  auVar27[10] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
  auVar27[0xb] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
  uVar22 = auVar20._8_4_;
  auVar12._4_4_ = uVar22;
  auVar12._0_4_ = uVar22;
  auVar12._8_4_ = uVar22;
  auVar12._12_4_ = uVar22;
  uVar31 = auVar27._8_4_;
  auVar50._4_4_ = uVar31;
  auVar50._0_4_ = uVar31;
  auVar50._8_4_ = uVar31;
  auVar50._12_4_ = uVar31;
  auVar38 = NEON_ext(auVar12,auVar20,0xc,1);
  uVar22 = (undefined4)((ulong)auVar27._0_8_ >> 0x20);
  auVar51._4_12_ = auVar50._4_12_;
  auVar51._0_4_ = uVar25;
  auVar53._0_8_ = auVar51._0_8_;
  auVar53._8_4_ = uVar22;
  auVar53._12_4_ = uVar31;
  auVar52._8_8_ = auVar53._8_8_;
  auVar52._4_4_ = uVar31;
  auVar52._0_4_ = uVar25;
  auVar54._0_12_ = auVar52._0_12_;
  auVar54._12_4_ = uVar31;
  auVar19 = NEON_ext(auVar54,auVar54,8,1);
  auVar55._4_12_ = auVar54._4_12_;
  auVar55._0_4_ = auVar19._0_4_;
  auVar57._0_8_ = auVar55._0_8_;
  auVar57._8_4_ = auVar19._8_4_;
  auVar57._12_4_ = uVar31;
  auVar56._8_8_ = auVar57._8_8_;
  auVar56._4_4_ = uVar25;
  auVar56._0_4_ = auVar19._0_4_;
  auVar58._0_12_ = auVar56._0_12_;
  auVar58._12_4_ = uVar22;
  NEON_ext(auVar40,auVar38,0xc,1);
  auVar19 = NEON_ext(auVar58,auVar19,8,1);
  NEON_ext(auVar19,auVar19,0xc,1);
  FUN_023375d8();
  return;
}


