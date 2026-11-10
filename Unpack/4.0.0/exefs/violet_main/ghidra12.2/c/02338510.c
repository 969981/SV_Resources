/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02338510; name: FUN_02338510
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02338510(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
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
  float fVar18;
  undefined1 auVar12 [16];
  int iVar19;
  int iVar22;
  undefined4 uVar23;
  int iVar24;
  undefined1 auVar20 [16];
  int iVar25;
  undefined1 auVar21 [16];
  undefined8 uVar26;
  undefined1 auVar27 [12];
  float fVar38;
  float fVar39;
  float fVar41;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar40;
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined8 uVar42;
  float fVar44;
  undefined1 auVar43 [16];
  float fVar45;
  float fVar50;
  float fVar51;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar52;
  undefined1 auVar49 [16];
  float fVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined1 auVar56 [12];
  float fVar59;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
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
  
  fVar18 = param_1._12_4_;
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
  auVar20 = NEON_ext(auVar2,auVar2,4,1);
  auVar3._0_4_ = auVar20._0_4_ + auVar20._4_4_;
  auVar3._4_4_ = auVar20._8_4_ + auVar20._12_4_;
  auVar3._8_4_ = auVar20._0_4_ + auVar20._4_4_;
  auVar3._12_4_ = auVar20._8_4_ + auVar20._12_4_;
  auVar20 = NEON_frsqrte(auVar3,4);
  auVar46._0_4_ = auVar3._0_4_ * auVar20._0_4_;
  auVar46._4_4_ = auVar3._4_4_ * auVar20._4_4_;
  auVar46._8_4_ = auVar3._8_4_ * auVar20._8_4_;
  auVar46._12_4_ = auVar3._12_4_ * auVar20._12_4_;
  auVar47 = NEON_frsqrts(auVar20,auVar46,4);
  auVar43._0_4_ = auVar20._0_4_ * auVar47._0_4_;
  auVar43._4_4_ = auVar20._4_4_ * auVar47._4_4_;
  auVar43._8_4_ = auVar20._8_4_ * auVar47._8_4_;
  auVar43._12_4_ = auVar20._12_4_ * auVar47._12_4_;
  auVar48._0_4_ = auVar3._0_4_ * auVar43._0_4_;
  auVar48._4_4_ = auVar3._4_4_ * auVar43._4_4_;
  auVar48._8_4_ = auVar3._8_4_ * auVar43._8_4_;
  auVar48._12_4_ = auVar3._12_4_ * auVar43._12_4_;
  iVar19 = -(uint)(auVar3._0_4_ == 0.0);
  iVar22 = -(uint)(auVar3._4_4_ == 0.0);
  iVar24 = -(uint)(auVar3._8_4_ == 0.0);
  iVar25 = -(uint)(auVar3._12_4_ == 0.0);
  auVar20 = NEON_frsqrts(auVar43,auVar48,4);
  fVar7 = fVar7 * auVar43._0_4_ * auVar20._0_4_;
  fVar13 = fVar13 * auVar43._4_4_ * auVar20._4_4_;
  fVar15 = fVar15 * auVar43._8_4_ * auVar20._8_4_;
  fVar17 = fVar17 * auVar43._12_4_ * auVar20._12_4_;
  fVar7 = (float)CONCAT13((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                          CONCAT12((byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                   CONCAT11((byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar19 >> 8),
                                            SUB41(fVar7,0) & ~(byte)iVar19)));
  auVar9._0_8_ = CONCAT17((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                          CONCAT16((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                                   CONCAT15((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                            CONCAT14(SUB41(fVar13,0) & ~(byte)iVar22,fVar7))));
  auVar9[8] = SUB41(fVar15,0) & ~(byte)iVar24;
  auVar9[9] = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar24 >> 8);
  auVar9[10] = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
  auVar9[0xb] = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
  auVar10[0xc] = SUB41(fVar17,0) & ~(byte)iVar25;
  auVar10._0_12_ = auVar9;
  auVar10[0xd] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar25 >> 8);
  auVar10[0xe] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
  auVar10[0xf] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
  uVar42 = a64_TBL(ZEXT816(0),param_6,DAT_03cb56c8);
  uVar55 = a64_TBL(ZEXT816(0),param_6,DAT_03cb54d8);
  uVar63 = a64_TBL(ZEXT816(0),auVar10,DAT_03cb5488);
  uVar68 = a64_TBL(ZEXT816(0),param_6,DAT_03cb5488);
  uVar26 = a64_TBL(ZEXT816(0),param_6,DAT_03cb54c0);
  uVar54 = a64_TBL(ZEXT816(0),auVar10,DAT_03cb54c0);
  uVar73 = a64_TBL(ZEXT816(0),auVar10,DAT_03cb56c8);
  uVar76 = a64_TBL(ZEXT816(0),auVar10,DAT_03cb54d8);
  fVar38 = (float)((ulong)uVar63 >> 0x20);
  fVar39 = (float)((ulong)uVar73 >> 0x20);
  fVar17 = (float)uVar42 * (float)uVar63 - (float)uVar68 * (float)uVar73;
  fVar44 = (float)((ulong)uVar42 >> 0x20) * fVar38 - (float)((ulong)uVar68 >> 0x20) * fVar39;
  fVar13 = (float)uVar55 * (float)uVar54 - (float)uVar26 * (float)uVar76;
  fVar15 = (float)((ulong)uVar55 >> 0x20) * (float)((ulong)uVar54 >> 0x20) -
           (float)((ulong)uVar26 >> 0x20) * (float)((ulong)uVar76 >> 0x20);
  auVar4._0_4_ = fVar17 * fVar17 + fVar44 * fVar44;
  auVar4._4_4_ = fVar13 * fVar13 + fVar15 * fVar15;
  auVar4._8_4_ = fVar17 * fVar17 + fVar44 * fVar44;
  auVar4._12_4_ = fVar13 * fVar13 + fVar15 * fVar15;
  auVar20 = NEON_ext(auVar4,auVar4,4,1);
  auVar5._0_4_ = auVar20._0_4_ + auVar20._4_4_;
  auVar5._4_4_ = auVar20._8_4_ + auVar20._12_4_;
  auVar5._8_4_ = auVar20._0_4_ + auVar20._4_4_;
  auVar5._12_4_ = auVar20._8_4_ + auVar20._12_4_;
  auVar20 = NEON_frsqrte(auVar5,4);
  auVar69._0_4_ = auVar5._0_4_ * auVar20._0_4_;
  auVar69._4_4_ = auVar5._4_4_ * auVar20._4_4_;
  auVar69._8_4_ = auVar5._8_4_ * auVar20._8_4_;
  auVar69._12_4_ = auVar5._12_4_ * auVar20._12_4_;
  auVar47 = NEON_frsqrts(auVar20,auVar69,4);
  auVar57._0_4_ = auVar20._0_4_ * auVar47._0_4_;
  auVar57._4_4_ = auVar20._4_4_ * auVar47._4_4_;
  auVar57._8_4_ = auVar20._8_4_ * auVar47._8_4_;
  auVar57._12_4_ = auVar20._12_4_ * auVar47._12_4_;
  auVar70._0_4_ = auVar5._0_4_ * auVar57._0_4_;
  auVar70._4_4_ = auVar5._4_4_ * auVar57._4_4_;
  auVar70._8_4_ = auVar5._8_4_ * auVar57._8_4_;
  auVar70._12_4_ = auVar5._12_4_ * auVar57._12_4_;
  iVar19 = -(uint)(auVar5._0_4_ == 0.0);
  iVar22 = -(uint)(auVar5._4_4_ == 0.0);
  iVar24 = -(uint)(auVar5._8_4_ == 0.0);
  iVar25 = -(uint)(auVar5._12_4_ == 0.0);
  auVar20 = NEON_frsqrts(auVar57,auVar70,4);
  fVar17 = fVar17 * auVar57._0_4_ * auVar20._0_4_;
  fVar44 = fVar44 * auVar57._4_4_ * auVar20._4_4_;
  fVar13 = fVar13 * auVar57._8_4_ * auVar20._8_4_;
  fVar15 = fVar15 * auVar57._12_4_ * auVar20._12_4_;
  fVar41 = (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                           CONCAT12((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                    CONCAT11((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar19 >> 8),
                                             SUB41(fVar17,0) & ~(byte)iVar19)));
  auVar56._0_8_ =
       CONCAT17((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                CONCAT16((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                         CONCAT15((byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                  CONCAT14(SUB41(fVar44,0) & ~(byte)iVar22,fVar41))));
  auVar56[8] = SUB41(fVar13,0) & ~(byte)iVar24;
  auVar56[9] = (byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar24 >> 8);
  auVar56[10] = (byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
  auVar56[0xb] = (byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
  auVar58[0xc] = SUB41(fVar15,0) & ~(byte)iVar25;
  auVar58._0_12_ = auVar56;
  auVar58[0xd] = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar25 >> 8);
  auVar58[0xe] = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
  auVar58[0xf] = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
  uVar42 = a64_TBL(ZEXT816(0),auVar58,DAT_03cb5488);
  uVar26 = a64_TBL(ZEXT816(0),auVar58,DAT_03cb56c8);
  auVar74 = NEON_ext(auVar58,auVar58,8,1);
  fVar15 = (float)uVar73 * (float)uVar42 - (float)uVar63 * (float)uVar26;
  fVar17 = fVar39 * (float)((ulong)uVar42 >> 0x20) - fVar38 * (float)((ulong)uVar26 >> 0x20);
  auVar20 = NEON_fmov(0x3f800000,4);
  fVar13 = auVar9._8_4_;
  fVar44 = auVar20._0_4_ + (float)_DAT_03cab3a0 * fVar41 + (float)_DAT_03cac210 * fVar17 +
           (float)_DAT_03cabb00 * fVar13;
  fVar38 = auVar20._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar41 +
           (float)((ulong)_DAT_03cac210 >> 0x20) * fVar17 +
           (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar13;
  fVar39 = auVar20._8_4_ + (float)_UNK_03cab3a8 * fVar41 + (float)_UNK_03cac218 * fVar17 +
           (float)_UNK_03cabb08 * fVar13;
  fVar41 = auVar20._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar41 +
           (float)((ulong)_UNK_03cac218 >> 0x20) * fVar17 +
           (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar13;
  auVar20 = NEON_fmov(0x40800000,4);
  auVar62._0_4_ = SQRT(fVar44) * 0.5 * auVar20._0_4_;
  auVar62._4_4_ = SQRT(fVar38) * 0.5 * auVar20._4_4_;
  auVar62._8_4_ = SQRT(fVar39) * 0.5 * auVar20._8_4_;
  auVar62._12_4_ = SQRT(fVar41) * 0.5 * auVar20._12_4_;
  auVar20 = NEON_frecpe(auVar62,4);
  uVar26 = a64_TBL(ZEXT816(0),auVar58,DAT_03cb54c0);
  auVar47 = NEON_frecps(auVar20,auVar62,4);
  auVar64._0_4_ = auVar20._0_4_ * auVar47._0_4_;
  auVar64._4_4_ = auVar20._4_4_ * auVar47._4_4_;
  auVar64._8_4_ = auVar20._8_4_ * auVar47._8_4_;
  auVar64._12_4_ = auVar20._12_4_ * auVar47._12_4_;
  uVar42 = a64_TBL(ZEXT816(0),auVar58,DAT_03cb54d8);
  auVar20 = NEON_frecps(auVar64,auVar62,4);
  fVar53 = (float)uVar76 * (float)uVar26 - (float)uVar54 * (float)uVar42;
  fVar13 = (float)((ulong)auVar9._0_8_ >> 0x20);
  fVar45 = auVar64._0_4_ * auVar20._0_4_;
  fVar50 = auVar64._4_4_ * auVar20._4_4_;
  fVar51 = auVar64._8_4_ * auVar20._8_4_;
  fVar52 = auVar64._12_4_ * auVar20._12_4_;
  fVar59 = (float)((ulong)auVar56._0_8_ >> 0x20);
  fVar72 = fVar7 + auVar74._0_4_;
  auVar1._8_4_ = -fVar13 + fVar53;
  auVar1._4_4_ = fVar72;
  auVar75._4_4_ = fVar44;
  auVar75._0_4_ = fVar44;
  auVar75._8_4_ = fVar44;
  auVar75._12_4_ = fVar44;
  auVar20._4_4_ = fVar38;
  auVar20._0_4_ = fVar38;
  auVar20._8_4_ = fVar38;
  auVar20._12_4_ = fVar38;
  auVar47._4_4_ = -(uint)(fVar44 <= fVar38);
  auVar47._0_4_ = -(uint)(fVar44 <= fVar38);
  auVar47._8_4_ = -(uint)(fVar44 <= fVar38);
  auVar47._12_4_ = -(uint)(fVar44 <= fVar38);
  auVar75 = auVar75 ^ (auVar75 ^ auVar20) & auVar47;
  auVar1._0_4_ = (fVar59 + fVar15) * fVar45;
  auVar65._0_8_ = auVar1._0_8_ << 0x20;
  auVar65._8_4_ = fVar72 * fVar45;
  auVar65._12_4_ = (-fVar13 + fVar53) * fVar45;
  auVar66._4_12_ = auVar65._4_12_;
  auVar66._0_4_ = SQRT(fVar44) * 0.5;
  auVar60._0_4_ = (fVar59 + fVar15) * fVar50;
  auVar60._4_4_ = (fVar59 + fVar17) * fVar50;
  auVar60._8_4_ = (fVar13 + fVar53) * fVar50;
  auVar60._12_4_ = (-auVar56._8_4_ + fVar7) * fVar50;
  auVar61._8_8_ = auVar60._8_8_;
  auVar61._4_4_ = SQRT(fVar38) * 0.5;
  auVar61._0_4_ = auVar60._0_4_;
  auVar11._0_4_ = (fVar7 + auVar74._0_4_) * fVar51;
  auVar11._4_4_ = (fVar13 + fVar53) * fVar51;
  auVar11._12_4_ = (fVar59 - fVar15) * fVar51;
  auVar74._4_4_ = -(uint)(fVar44 <= fVar38);
  auVar74._0_4_ = -(uint)(fVar44 <= fVar38);
  auVar74._8_4_ = -(uint)(fVar44 <= fVar38);
  auVar74._12_4_ = -(uint)(fVar44 <= fVar38);
  auVar67._4_4_ = fVar39;
  auVar67._0_4_ = fVar39;
  auVar67._8_4_ = fVar39;
  auVar67._12_4_ = fVar39;
  auVar21._0_4_ = (fVar53 - fVar13) * fVar52;
  auVar21._4_4_ = (fVar7 - auVar56._8_4_) * fVar52;
  auVar21._8_4_ = (fVar59 - fVar15) * fVar52;
  auVar71._0_4_ = -(uint)(auVar75._0_4_ <= fVar39);
  auVar71._4_4_ = -(uint)(auVar75._4_4_ <= fVar39);
  auVar71._8_4_ = -(uint)(auVar75._8_4_ <= fVar39);
  auVar71._12_4_ = -(uint)(auVar75._12_4_ <= fVar39);
  auVar11._8_4_ = SQRT(fVar39) * 0.5;
  auVar67 = auVar67 ^ (auVar67 ^ auVar75) & ~auVar71;
  auVar21._12_4_ = SQRT(fVar41) * 0.5;
  auVar28._0_4_ = -(uint)(auVar67._0_4_ <= fVar41);
  auVar28._4_4_ = -(uint)(auVar67._4_4_ <= fVar41);
  auVar28._8_4_ = -(uint)(auVar67._8_4_ <= fVar41);
  auVar28._12_4_ = -(uint)(auVar67._12_4_ <= fVar41);
  auVar21 = auVar21 ^ (auVar21 ^
                      auVar11 ^ (auVar11 ^ auVar61 ^ (auVar61 ^ auVar66) & ~auVar74) & ~auVar71) &
                      ~auVar28;
  uVar23 = auVar21._4_4_;
  auVar49._4_4_ = uVar23;
  auVar49._0_4_ = uVar23;
  auVar49._8_4_ = uVar23;
  auVar49._12_4_ = uVar23;
  auVar6._0_4_ = fVar8 * fVar8 + fVar14 * fVar14;
  auVar6._4_4_ = fVar16 * fVar16 + fVar18 * fVar18;
  auVar6._8_4_ = fVar8 * fVar8 + fVar14 * fVar14;
  auVar6._12_4_ = fVar16 * fVar16 + fVar18 * fVar18;
  auVar20 = NEON_ext(auVar6,auVar6,4,1);
  fVar7 = auVar20._0_4_ + auVar20._4_4_;
  fVar13 = auVar20._8_4_ + auVar20._12_4_;
  fVar15 = auVar20._0_4_ + auVar20._4_4_;
  fVar17 = auVar20._8_4_ + auVar20._12_4_;
  fVar8 = -fVar8 / fVar7;
  fVar14 = -fVar14 / fVar13;
  fVar16 = -fVar16 / fVar15;
  fVar18 = fVar18 / fVar17;
  iVar19 = -(uint)(fVar7 == 0.0);
  iVar22 = -(uint)(fVar13 == 0.0);
  iVar24 = -(uint)(fVar15 == 0.0);
  iVar25 = -(uint)(fVar17 == 0.0);
  auVar30._0_4_ =
       CONCAT13((byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                CONCAT12((byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                         CONCAT11((byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar19 >> 8),
                                  SUB41(fVar8,0) & ~(byte)iVar19)));
  auVar27._0_8_ =
       CONCAT17((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                CONCAT16((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                         CONCAT15((byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                  CONCAT14(SUB41(fVar14,0) & ~(byte)iVar22,auVar30._0_4_))));
  auVar27[8] = SUB41(fVar16,0) & ~(byte)iVar24;
  auVar27[9] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar24 >> 8);
  auVar27[10] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
  auVar27[0xb] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
  auVar29[0xc] = SUB41(fVar18,0) & ~(byte)iVar25;
  auVar29._0_12_ = auVar27;
  auVar29[0xd] = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar25 >> 8);
  auVar29[0xe] = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
  auVar29[0xf] = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
  uVar23 = auVar21._8_4_;
  auVar12._4_4_ = uVar23;
  auVar12._0_4_ = uVar23;
  auVar12._8_4_ = uVar23;
  auVar12._12_4_ = uVar23;
  auVar32._12_4_ = auVar29._12_4_;
  uVar40 = auVar27._8_4_;
  auVar20 = NEON_ext(auVar12,auVar21,0xc,1);
  NEON_ext(auVar49,auVar20,0xc,1);
  uVar23 = (undefined4)((ulong)auVar27._0_8_ >> 0x20);
  auVar30._4_12_ = auVar29._4_12_;
  auVar32._0_8_ = auVar30._0_8_;
  auVar32._8_4_ = uVar23;
  auVar31._8_8_ = auVar32._8_8_;
  auVar31._4_4_ = uVar40;
  auVar31._0_4_ = auVar30._0_4_;
  auVar33._0_12_ = auVar31._0_12_;
  auVar33._12_4_ = uVar40;
  auVar20 = NEON_ext(auVar33,auVar33,8,1);
  auVar34._4_12_ = auVar33._4_12_;
  auVar34._0_4_ = auVar20._0_4_;
  auVar36._0_8_ = auVar34._0_8_;
  auVar36._8_4_ = auVar20._8_4_;
  auVar36._12_4_ = uVar40;
  auVar35._8_8_ = auVar36._8_8_;
  auVar35._4_4_ = auVar30._0_4_;
  auVar35._0_4_ = auVar20._0_4_;
  auVar37._0_12_ = auVar35._0_12_;
  auVar37._12_4_ = uVar23;
  auVar20 = NEON_ext(auVar37,auVar20,8,1);
  NEON_ext(auVar20,auVar20,0xc,1);
  FUN_02337538();
  return;
}


