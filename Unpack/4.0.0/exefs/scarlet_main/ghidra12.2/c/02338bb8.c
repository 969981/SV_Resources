/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02338bb8; name: FUN_02338bb8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02338bb8(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],undefined1 param_5 [16],undefined1 param_6 [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  uint uVar4;
  undefined1 auVar5 [12];
  float fVar8;
  float fVar10;
  float fVar12;
  undefined1 auVar6 [16];
  uint uVar9;
  uint uVar11;
  uint uVar13;
  undefined1 auVar7 [16];
  int iVar14;
  float fVar15;
  undefined1 auVar16 [12];
  int iVar27;
  undefined1 auVar17 [16];
  int iVar29;
  int iVar31;
  undefined1 auVar18 [16];
  undefined4 uVar28;
  undefined4 uVar30;
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  undefined1 auVar19 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar42;
  undefined1 auVar38 [16];
  float fVar40;
  float fVar41;
  undefined1 auVar39 [16];
  float fVar43;
  float fVar47;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined1 auVar52 [12];
  float fVar55;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined8 uVar59;
  undefined1 auVar60 [16];
  uint uVar61;
  undefined8 uVar62;
  uint uVar66;
  uint uVar67;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  uint uVar68;
  float fVar69;
  undefined8 uVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined8 uVar74;
  
  uVar30 = param_1._8_4_;
  uVar28 = param_1._4_4_;
  fVar3 = param_2._0_4_ - param_5._0_4_;
  fVar8 = param_2._4_4_ - param_5._4_4_;
  fVar10 = param_2._8_4_ - param_5._8_4_;
  fVar12 = param_2._12_4_ - param_5._12_4_;
  auVar17._0_4_ = fVar3 * fVar3 + fVar8 * fVar8;
  auVar17._4_4_ = fVar10 * fVar10 + fVar12 * fVar12;
  auVar17._8_4_ = fVar3 * fVar3 + fVar8 * fVar8;
  auVar17._12_4_ = fVar10 * fVar10 + fVar12 * fVar12;
  auVar17 = NEON_ext(auVar17,auVar17,4,1);
  auVar64._0_4_ = auVar17._0_4_ + auVar17._4_4_;
  auVar64._4_4_ = auVar17._8_4_ + auVar17._12_4_;
  auVar64._8_4_ = auVar17._0_4_ + auVar17._4_4_;
  auVar64._12_4_ = auVar17._8_4_ + auVar17._12_4_;
  auVar17 = NEON_frsqrte(auVar64,4);
  auVar44._0_4_ = auVar64._0_4_ * auVar17._0_4_;
  auVar44._4_4_ = auVar64._4_4_ * auVar17._4_4_;
  auVar44._8_4_ = auVar64._8_4_ * auVar17._8_4_;
  auVar44._12_4_ = auVar64._12_4_ * auVar17._12_4_;
  auVar45 = NEON_frsqrts(auVar17,auVar44,4);
  auVar38._0_4_ = auVar17._0_4_ * auVar45._0_4_;
  auVar38._4_4_ = auVar17._4_4_ * auVar45._4_4_;
  auVar38._8_4_ = auVar17._8_4_ * auVar45._8_4_;
  auVar38._12_4_ = auVar17._12_4_ * auVar45._12_4_;
  auVar46._0_4_ = auVar64._0_4_ * auVar38._0_4_;
  auVar46._4_4_ = auVar64._4_4_ * auVar38._4_4_;
  auVar46._8_4_ = auVar64._8_4_ * auVar38._8_4_;
  auVar46._12_4_ = auVar64._12_4_ * auVar38._12_4_;
  iVar14 = -(uint)(auVar64._0_4_ == 0.0);
  iVar27 = -(uint)(auVar64._4_4_ == 0.0);
  iVar29 = -(uint)(auVar64._8_4_ == 0.0);
  iVar31 = -(uint)(auVar64._12_4_ == 0.0);
  auVar17 = NEON_frsqrts(auVar38,auVar46,4);
  fVar3 = fVar3 * auVar38._0_4_ * auVar17._0_4_;
  fVar8 = fVar8 * auVar38._4_4_ * auVar17._4_4_;
  fVar10 = fVar10 * auVar38._8_4_ * auVar17._8_4_;
  fVar12 = fVar12 * auVar38._12_4_ * auVar17._12_4_;
  fVar3 = (float)CONCAT13((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                          CONCAT12((byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                   CONCAT11((byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                            SUB41(fVar3,0) & ~(byte)iVar14)));
  auVar5._0_8_ = CONCAT17((byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                          CONCAT16((byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                                   CONCAT15((byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar27 >> 8),
                                            CONCAT14(SUB41(fVar8,0) & ~(byte)iVar27,fVar3))));
  auVar5[8] = SUB41(fVar10,0) & ~(byte)iVar29;
  auVar5[9] = (byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar29 >> 8);
  auVar5[10] = (byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
  auVar5[0xb] = (byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
  auVar6[0xc] = SUB41(fVar12,0) & ~(byte)iVar31;
  auVar6._0_12_ = auVar5;
  auVar6[0xd] = (byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar31 >> 8);
  auVar6[0xe] = (byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
  auVar6[0xf] = (byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
  uVar37 = a64_TBL(ZEXT816(0),param_6,DAT_03cb56c8);
  uVar51 = a64_TBL(ZEXT816(0),param_6,DAT_03cb54d8);
  uVar59 = a64_TBL(ZEXT816(0),auVar6,DAT_03cb5488);
  uVar62 = a64_TBL(ZEXT816(0),param_6,DAT_03cb5488);
  uVar33 = a64_TBL(ZEXT816(0),param_6,DAT_03cb54c0);
  uVar50 = a64_TBL(ZEXT816(0),auVar6,DAT_03cb54c0);
  uVar70 = a64_TBL(ZEXT816(0),auVar6,DAT_03cb56c8);
  uVar74 = a64_TBL(ZEXT816(0),auVar6,DAT_03cb54d8);
  fVar32 = (float)((ulong)uVar59 >> 0x20);
  fVar34 = (float)((ulong)uVar70 >> 0x20);
  fVar12 = (float)uVar37 * (float)uVar59 - (float)uVar62 * (float)uVar70;
  fVar40 = (float)((ulong)uVar37 >> 0x20) * fVar32 - (float)((ulong)uVar62 >> 0x20) * fVar34;
  fVar8 = (float)uVar51 * (float)uVar50 - (float)uVar33 * (float)uVar74;
  fVar10 = (float)((ulong)uVar51 >> 0x20) * (float)((ulong)uVar50 >> 0x20) -
           (float)((ulong)uVar33 >> 0x20) * (float)((ulong)uVar74 >> 0x20);
  auVar45._0_4_ = fVar12 * fVar12 + fVar40 * fVar40;
  auVar45._4_4_ = fVar8 * fVar8 + fVar10 * fVar10;
  auVar45._8_4_ = fVar12 * fVar12 + fVar40 * fVar40;
  auVar45._12_4_ = fVar8 * fVar8 + fVar10 * fVar10;
  auVar17 = NEON_ext(auVar45,auVar45,4,1);
  auVar1._0_4_ = auVar17._0_4_ + auVar17._4_4_;
  auVar1._4_4_ = auVar17._8_4_ + auVar17._12_4_;
  auVar1._8_4_ = auVar17._0_4_ + auVar17._4_4_;
  auVar1._12_4_ = auVar17._8_4_ + auVar17._12_4_;
  auVar17 = NEON_frsqrte(auVar1,4);
  auVar63._0_4_ = auVar1._0_4_ * auVar17._0_4_;
  auVar63._4_4_ = auVar1._4_4_ * auVar17._4_4_;
  auVar63._8_4_ = auVar1._8_4_ * auVar17._8_4_;
  auVar63._12_4_ = auVar1._12_4_ * auVar17._12_4_;
  auVar64 = NEON_frsqrts(auVar17,auVar63,4);
  auVar53._0_4_ = auVar17._0_4_ * auVar64._0_4_;
  auVar53._4_4_ = auVar17._4_4_ * auVar64._4_4_;
  auVar53._8_4_ = auVar17._8_4_ * auVar64._8_4_;
  auVar53._12_4_ = auVar17._12_4_ * auVar64._12_4_;
  auVar65._0_4_ = auVar1._0_4_ * auVar53._0_4_;
  auVar65._4_4_ = auVar1._4_4_ * auVar53._4_4_;
  auVar65._8_4_ = auVar1._8_4_ * auVar53._8_4_;
  auVar65._12_4_ = auVar1._12_4_ * auVar53._12_4_;
  iVar14 = -(uint)(auVar1._0_4_ == 0.0);
  iVar27 = -(uint)(auVar1._4_4_ == 0.0);
  iVar29 = -(uint)(auVar1._8_4_ == 0.0);
  iVar31 = -(uint)(auVar1._12_4_ == 0.0);
  auVar17 = NEON_frsqrts(auVar53,auVar65,4);
  fVar12 = fVar12 * auVar53._0_4_ * auVar17._0_4_;
  fVar40 = fVar40 * auVar53._4_4_ * auVar17._4_4_;
  fVar8 = fVar8 * auVar53._8_4_ * auVar17._8_4_;
  fVar10 = fVar10 * auVar53._12_4_ * auVar17._12_4_;
  fVar12 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                           CONCAT12((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                    CONCAT11((byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                             SUB41(fVar12,0) & ~(byte)iVar14)));
  auVar52._0_8_ =
       CONCAT17((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                CONCAT16((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                         CONCAT15((byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar27 >> 8),
                                  CONCAT14(SUB41(fVar40,0) & ~(byte)iVar27,fVar12))));
  auVar52[8] = SUB41(fVar8,0) & ~(byte)iVar29;
  auVar52[9] = (byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar29 >> 8);
  auVar52[10] = (byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
  auVar52[0xb] = (byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
  auVar54[0xc] = SUB41(fVar10,0) & ~(byte)iVar31;
  auVar54._0_12_ = auVar52;
  auVar54[0xd] = (byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar31 >> 8);
  auVar54[0xe] = (byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
  auVar54[0xf] = (byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
  uVar37 = a64_TBL(ZEXT816(0),auVar54,DAT_03cb5488);
  uVar33 = a64_TBL(ZEXT816(0),auVar54,DAT_03cb56c8);
  auVar45 = NEON_ext(auVar54,auVar54,8,1);
  fVar15 = (float)uVar70 * (float)uVar37 - (float)uVar59 * (float)uVar33;
  fVar10 = fVar34 * (float)((ulong)uVar37 >> 0x20) - fVar32 * (float)((ulong)uVar33 >> 0x20);
  auVar17 = NEON_fmov(0x3f800000,4);
  fVar8 = auVar5._8_4_;
  fVar32 = auVar17._0_4_ + (float)_DAT_03cab3a0 * fVar12 + (float)_DAT_03cac210 * fVar10 +
           (float)_DAT_03cabb00 * fVar8;
  fVar34 = auVar17._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar12 +
           (float)((ulong)_DAT_03cac210 >> 0x20) * fVar10 +
           (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar8;
  fVar35 = auVar17._8_4_ + (float)_UNK_03cab3a8 * fVar12 + (float)_UNK_03cac218 * fVar10 +
           (float)_UNK_03cabb08 * fVar8;
  fVar36 = auVar17._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar12 +
           (float)((ulong)_UNK_03cac218 >> 0x20) * fVar10 +
           (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar8;
  fVar41 = SQRT(fVar34) * 0.5;
  fVar42 = SQRT(fVar35) * 0.5;
  auVar17 = NEON_fmov(0x40800000,4);
  auVar58._0_4_ = SQRT(fVar32) * 0.5 * auVar17._0_4_;
  auVar58._4_4_ = fVar41 * auVar17._4_4_;
  auVar58._8_4_ = fVar42 * auVar17._8_4_;
  auVar58._12_4_ = SQRT(fVar36) * 0.5 * auVar17._12_4_;
  auVar17 = NEON_frecpe(auVar58,4);
  uVar33 = a64_TBL(ZEXT816(0),auVar54,DAT_03cb54c0);
  auVar64 = NEON_frecps(auVar17,auVar58,4);
  auVar60._0_4_ = auVar17._0_4_ * auVar64._0_4_;
  auVar60._4_4_ = auVar17._4_4_ * auVar64._4_4_;
  auVar60._8_4_ = auVar17._8_4_ * auVar64._8_4_;
  auVar60._12_4_ = auVar17._12_4_ * auVar64._12_4_;
  uVar37 = a64_TBL(ZEXT816(0),auVar54,DAT_03cb54d8);
  auVar17 = NEON_frecps(auVar60,auVar58,4);
  fVar49 = (float)uVar74 * (float)uVar33 - (float)uVar50 * (float)uVar37;
  fVar10 = (float)((ulong)auVar5._0_8_ >> 0x20);
  fVar43 = auVar60._0_4_ * auVar17._0_4_;
  fVar47 = auVar60._4_4_ * auVar17._4_4_;
  fVar40 = auVar60._8_4_ * auVar17._8_4_;
  fVar48 = auVar60._12_4_ * auVar17._12_4_;
  fVar55 = (float)((ulong)auVar52._0_8_ >> 0x20);
  fVar69 = (float)((uint)fVar32 ^ ((uint)fVar32 ^ (uint)fVar34) & -(uint)(fVar32 <= fVar34));
  fVar71 = (float)((uint)fVar32 ^ ((uint)fVar32 ^ (uint)fVar34) & -(uint)(fVar32 <= fVar34));
  fVar72 = (float)((uint)fVar32 ^ ((uint)fVar32 ^ (uint)fVar34) & -(uint)(fVar32 <= fVar34));
  fVar73 = (float)((uint)fVar32 ^ ((uint)fVar32 ^ (uint)fVar34) & -(uint)(fVar32 <= fVar34));
  fVar56 = (fVar55 + fVar15) * fVar47;
  fVar57 = (fVar10 + fVar49) * fVar47;
  fVar47 = (-auVar52._8_4_ + fVar3) * fVar47;
  fVar8 = (fVar3 + auVar45._0_4_) * fVar40;
  fVar12 = (fVar10 + fVar49) * fVar40;
  fVar40 = (fVar55 - fVar15) * fVar40;
  uVar61 = -(uint)(fVar69 <= fVar35);
  uVar66 = -(uint)(fVar71 <= fVar35);
  uVar67 = -(uint)(fVar72 <= fVar35);
  uVar68 = -(uint)(fVar73 <= fVar35);
  auVar39._4_4_ = uVar28;
  auVar39._0_4_ = uVar28;
  auVar39._8_4_ = uVar28;
  auVar39._12_4_ = uVar28;
  uVar4 = (uint)fVar8 ^
          ((uint)fVar8 ^
          (uint)fVar56 ^ ((uint)fVar56 ^ (uint)(SQRT(fVar32) * 0.5)) & ~-(uint)(fVar32 <= fVar34)) &
          ~uVar61;
  uVar9 = (uint)fVar12 ^
          ((uint)fVar12 ^
          (uint)fVar41 ^
          ((uint)fVar41 ^ (uint)((fVar55 + fVar15) * fVar43)) & ~-(uint)(fVar32 <= fVar34)) &
          ~uVar66;
  uVar11 = (uint)fVar42 ^
           ((uint)fVar42 ^
           (uint)fVar57 ^
           ((uint)fVar57 ^ (uint)((fVar3 + auVar45._0_4_) * fVar43)) & ~-(uint)(fVar32 <= fVar34)) &
           ~uVar67;
  uVar13 = (uint)fVar40 ^
           ((uint)fVar40 ^
           (uint)fVar47 ^
           ((uint)fVar47 ^ (uint)((-fVar10 + fVar49) * fVar43)) & ~-(uint)(fVar32 <= fVar34)) &
           ~uVar68;
  fVar40 = (float)(uVar4 ^ (uVar4 ^ (uint)((fVar49 - fVar10) * fVar48)) &
                           -(uint)((float)((uint)fVar35 ^ ((uint)fVar35 ^ (uint)fVar69) & ~uVar61)
                                  <= fVar36));
  fVar32 = (float)(uVar9 ^ (uVar9 ^ (uint)((fVar3 - auVar52._8_4_) * fVar48)) &
                           -(uint)((float)((uint)fVar35 ^ ((uint)fVar35 ^ (uint)fVar71) & ~uVar66)
                                  <= fVar36));
  fVar15 = (float)(uVar11 ^ (uVar11 ^ (uint)((fVar55 - fVar15) * fVar48)) &
                            -(uint)((float)((uint)fVar35 ^ ((uint)fVar35 ^ (uint)fVar72) & ~uVar67)
                                   <= fVar36));
  fVar34 = (float)(uVar13 ^ (uVar13 ^ (uint)(SQRT(fVar36) * 0.5)) &
                            -(uint)((float)((uint)fVar35 ^ ((uint)fVar35 ^ (uint)fVar73) & ~uVar68)
                                   <= fVar36));
  auVar2._0_4_ = fVar40 * fVar40 + fVar32 * fVar32;
  auVar2._4_4_ = fVar15 * fVar15 + fVar34 * fVar34;
  auVar2._8_4_ = fVar40 * fVar40 + fVar32 * fVar32;
  auVar2._12_4_ = fVar15 * fVar15 + fVar34 * fVar34;
  auVar17 = NEON_ext(auVar2,auVar2,4,1);
  fVar3 = auVar17._0_4_ + auVar17._4_4_;
  fVar8 = auVar17._8_4_ + auVar17._12_4_;
  fVar10 = auVar17._0_4_ + auVar17._4_4_;
  fVar12 = auVar17._8_4_ + auVar17._12_4_;
  iVar14 = -(uint)(fVar3 == 0.0);
  iVar27 = -(uint)(fVar8 == 0.0);
  iVar29 = -(uint)(fVar10 == 0.0);
  iVar31 = -(uint)(fVar12 == 0.0);
  fVar3 = -fVar40 / fVar3;
  fVar8 = -fVar32 / fVar8;
  fVar10 = -fVar15 / fVar10;
  fVar34 = fVar34 / fVar12;
  auVar19._0_4_ =
       CONCAT13((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                CONCAT12((byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                         CONCAT11((byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                  SUB41(fVar3,0) & ~(byte)iVar14)));
  auVar16._0_8_ =
       CONCAT17((byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                CONCAT16((byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                         CONCAT15((byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar27 >> 8),
                                  CONCAT14(SUB41(fVar8,0) & ~(byte)iVar27,auVar19._0_4_))));
  auVar16[8] = SUB41(fVar10,0) & ~(byte)iVar29;
  auVar16[9] = (byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar29 >> 8);
  auVar16[10] = (byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
  auVar16[0xb] = (byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
  auVar18[0xc] = SUB41(fVar34,0) & ~(byte)iVar31;
  auVar18._0_12_ = auVar16;
  auVar18[0xd] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar31 >> 8);
  auVar18[0xe] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
  auVar18[0xf] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
  auVar7._4_4_ = uVar30;
  auVar7._0_4_ = uVar30;
  auVar7._8_4_ = uVar30;
  auVar7._12_4_ = uVar30;
  auVar21._12_4_ = auVar18._12_4_;
  uVar30 = auVar16._8_4_;
  auVar17 = NEON_ext(auVar7,param_1,0xc,1);
  uVar28 = (undefined4)((ulong)auVar16._0_8_ >> 0x20);
  NEON_ext(auVar39,auVar17,0xc,1);
  auVar19._4_12_ = auVar18._4_12_;
  auVar21._0_8_ = auVar19._0_8_;
  auVar21._8_4_ = uVar28;
  auVar20._8_8_ = auVar21._8_8_;
  auVar20._4_4_ = uVar30;
  auVar20._0_4_ = auVar19._0_4_;
  auVar22._0_12_ = auVar20._0_12_;
  auVar22._12_4_ = uVar30;
  auVar17 = NEON_ext(auVar22,auVar22,8,1);
  auVar23._4_12_ = auVar22._4_12_;
  auVar23._0_4_ = auVar17._0_4_;
  auVar25._0_8_ = auVar23._0_8_;
  auVar25._8_4_ = auVar17._8_4_;
  auVar25._12_4_ = uVar30;
  auVar24._8_8_ = auVar25._8_8_;
  auVar24._4_4_ = auVar19._0_4_;
  auVar24._0_4_ = auVar17._0_4_;
  auVar26._0_12_ = auVar24._0_12_;
  auVar26._12_4_ = uVar28;
  auVar17 = NEON_ext(auVar26,auVar17,8,1);
  NEON_ext(auVar17,auVar17,0xc,1);
  FUN_02337538();
  return;
}


