/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02337f68; name: FUN_02337f68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02337f68(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],undefined1 param_5 [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined1 auVar14 [12];
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar15 [16];
  float fVar18;
  undefined1 auVar16 [16];
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  int iVar31;
  int iVar35;
  undefined8 uVar32;
  int iVar36;
  int iVar37;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uVar38;
  undefined1 auVar39 [16];
  float fVar40;
  undefined8 uVar41;
  float fVar43;
  undefined1 auVar42 [16];
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  float fVar60;
  undefined8 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined8 uVar66;
  float fVar69;
  float fVar70;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar71;
  float fVar72;
  undefined8 uVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  
  fVar12 = param_2._0_4_ - param_4._0_4_;
  fVar17 = param_2._4_4_ - param_4._4_4_;
  fVar19 = param_2._8_4_ - param_4._8_4_;
  fVar20 = param_2._12_4_ - param_4._12_4_;
  auVar8._0_4_ = fVar12 * fVar12 + fVar17 * fVar17;
  auVar8._4_4_ = fVar19 * fVar19 + fVar20 * fVar20;
  auVar8._8_4_ = fVar12 * fVar12 + fVar17 * fVar17;
  auVar8._12_4_ = fVar19 * fVar19 + fVar20 * fVar20;
  auVar22 = NEON_ext(auVar8,auVar8,4,1);
  uVar21 = a64_TBL(ZEXT816(0),param_5,DAT_03cb56c8);
  auVar9._0_4_ = auVar22._0_4_ + auVar22._4_4_;
  auVar9._4_4_ = auVar22._8_4_ + auVar22._12_4_;
  auVar9._8_4_ = auVar22._0_4_ + auVar22._4_4_;
  auVar9._12_4_ = auVar22._8_4_ + auVar22._12_4_;
  uVar61 = a64_TBL(ZEXT816(0),param_5,DAT_03cb54d8);
  auVar28 = NEON_frsqrte(auVar9,4);
  auVar22._4_4_ = auVar9._4_4_ * auVar28._4_4_;
  auVar22._0_4_ = auVar9._0_4_ * auVar28._0_4_;
  auVar22._8_4_ = auVar9._8_4_ * auVar28._8_4_;
  auVar22._12_4_ = auVar9._12_4_ * auVar28._12_4_;
  auVar22 = NEON_frsqrts(auVar28,auVar22,4);
  auVar39._0_4_ = auVar28._0_4_ * auVar22._0_4_;
  auVar39._4_4_ = auVar28._4_4_ * auVar22._4_4_;
  auVar39._8_4_ = auVar28._8_4_ * auVar22._8_4_;
  auVar39._12_4_ = auVar28._12_4_ * auVar22._12_4_;
  auVar42._0_4_ = auVar9._0_4_ * auVar39._0_4_;
  auVar42._4_4_ = auVar9._4_4_ * auVar39._4_4_;
  auVar42._8_4_ = auVar9._8_4_ * auVar39._8_4_;
  auVar42._12_4_ = auVar9._12_4_ * auVar39._12_4_;
  iVar31 = -(uint)(auVar9._0_4_ == 0.0);
  iVar35 = -(uint)(auVar9._4_4_ == 0.0);
  iVar36 = -(uint)(auVar9._8_4_ == 0.0);
  iVar37 = -(uint)(auVar9._12_4_ == 0.0);
  uVar66 = a64_TBL(ZEXT816(0),param_5,DAT_03cb5488);
  auVar22 = NEON_frsqrts(auVar39,auVar42,4);
  uVar73 = a64_TBL(ZEXT816(0),param_5,DAT_03cb54c0);
  fVar12 = fVar12 * auVar39._0_4_ * auVar22._0_4_;
  fVar17 = fVar17 * auVar39._4_4_ * auVar22._4_4_;
  fVar19 = fVar19 * auVar39._8_4_ * auVar22._8_4_;
  fVar20 = fVar20 * auVar39._12_4_ * auVar22._12_4_;
  fVar13 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                           CONCAT12((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10),
                                    CONCAT11((byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar31 >> 8),
                                             SUB41(fVar12,0) & ~(byte)iVar31)));
  auVar14._0_8_ =
       CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                CONCAT16((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10),
                         CONCAT15((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar35 >> 8),
                                  CONCAT14(SUB41(fVar17,0) & ~(byte)iVar35,fVar13))));
  auVar14[8] = SUB41(fVar19,0) & ~(byte)iVar36;
  auVar14[9] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar36 >> 8);
  auVar14[10] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
  auVar14[0xb] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
  auVar15[0xc] = SUB41(fVar20,0) & ~(byte)iVar37;
  auVar15._0_12_ = auVar14;
  auVar15[0xd] = (byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar37 >> 8);
  auVar15[0xe] = (byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10);
  auVar15[0xf] = (byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18);
  uVar38 = a64_TBL(ZEXT816(0),auVar15,DAT_03cb5488);
  uVar24 = a64_TBL(ZEXT816(0),auVar15,DAT_03cb54c0);
  uVar41 = a64_TBL(ZEXT816(0),auVar15,DAT_03cb56c8);
  uVar32 = a64_TBL(ZEXT816(0),auVar15,DAT_03cb54d8);
  fVar30 = (float)((ulong)uVar38 >> 0x20);
  fVar43 = (float)((ulong)uVar41 >> 0x20);
  fVar12 = (float)uVar21 * (float)uVar38 - (float)uVar66 * (float)uVar41;
  fVar17 = (float)((ulong)uVar21 >> 0x20) * fVar30 - (float)((ulong)uVar66 >> 0x20) * fVar43;
  fVar19 = (float)uVar61 * (float)uVar24 - (float)uVar73 * (float)uVar32;
  fVar20 = (float)((ulong)uVar61 >> 0x20) * (float)((ulong)uVar24 >> 0x20) -
           (float)((ulong)uVar73 >> 0x20) * (float)((ulong)uVar32 >> 0x20);
  fVar18 = (float)((ulong)auVar14._0_8_ >> 0x20);
  auVar10._0_4_ = fVar12 * fVar12 + fVar17 * fVar17;
  auVar10._4_4_ = fVar19 * fVar19 + fVar20 * fVar20;
  auVar10._8_4_ = fVar12 * fVar12 + fVar17 * fVar17;
  auVar10._12_4_ = fVar19 * fVar19 + fVar20 * fVar20;
  auVar22 = NEON_ext(auVar10,auVar10,4,1);
  auVar11._0_4_ = auVar22._0_4_ + auVar22._4_4_;
  auVar11._4_4_ = auVar22._8_4_ + auVar22._12_4_;
  auVar11._8_4_ = auVar22._0_4_ + auVar22._4_4_;
  auVar11._12_4_ = auVar22._8_4_ + auVar22._12_4_;
  auVar22 = NEON_frsqrte(auVar11,4);
  auVar74._0_4_ = auVar11._0_4_ * auVar22._0_4_;
  auVar74._4_4_ = auVar11._4_4_ * auVar22._4_4_;
  auVar74._8_4_ = auVar11._8_4_ * auVar22._8_4_;
  auVar74._12_4_ = auVar11._12_4_ * auVar22._12_4_;
  auVar28 = NEON_frsqrts(auVar22,auVar74,4);
  auVar67._0_4_ = auVar22._0_4_ * auVar28._0_4_;
  auVar67._4_4_ = auVar22._4_4_ * auVar28._4_4_;
  auVar67._8_4_ = auVar22._8_4_ * auVar28._8_4_;
  auVar67._12_4_ = auVar22._12_4_ * auVar28._12_4_;
  auVar75._0_4_ = auVar11._0_4_ * auVar67._0_4_;
  auVar75._4_4_ = auVar11._4_4_ * auVar67._4_4_;
  auVar75._8_4_ = auVar11._8_4_ * auVar67._8_4_;
  auVar75._12_4_ = auVar11._12_4_ * auVar67._12_4_;
  iVar31 = -(uint)(auVar11._0_4_ == 0.0);
  iVar35 = -(uint)(auVar11._4_4_ == 0.0);
  iVar36 = -(uint)(auVar11._8_4_ == 0.0);
  iVar37 = -(uint)(auVar11._12_4_ == 0.0);
  auVar22 = NEON_frsqrts(auVar67,auVar75,4);
  fVar12 = fVar12 * auVar67._0_4_ * auVar22._0_4_;
  fVar17 = fVar17 * auVar67._4_4_ * auVar22._4_4_;
  fVar19 = fVar19 * auVar67._8_4_ * auVar22._8_4_;
  fVar20 = fVar20 * auVar67._12_4_ * auVar22._12_4_;
  bVar44 = SUB41(fVar12,0) & ~(byte)iVar31;
  bVar45 = (byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar31 >> 8);
  bVar46 = (byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
  bVar47 = (byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
  bVar48 = SUB41(fVar17,0) & ~(byte)iVar35;
  bVar49 = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar35 >> 8);
  bVar50 = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
  bVar51 = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
  bVar52 = SUB41(fVar19,0) & ~(byte)iVar36;
  bVar53 = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar36 >> 8);
  bVar54 = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
  bVar55 = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
  bVar56 = SUB41(fVar20,0) & ~(byte)iVar37;
  bVar57 = (byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar37 >> 8);
  bVar58 = (byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10);
  bVar59 = (byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18);
  auVar22 = NEON_fmov(0x3f800000,4);
  auVar28[1] = bVar45;
  auVar28[0] = bVar44;
  auVar28[2] = bVar46;
  auVar28[3] = bVar47;
  auVar28[4] = bVar48;
  auVar28[5] = bVar49;
  auVar28[6] = bVar50;
  auVar28[7] = bVar51;
  auVar28[8] = bVar52;
  auVar28[9] = bVar53;
  auVar28[10] = bVar54;
  auVar28[0xb] = bVar55;
  auVar28[0xc] = bVar56;
  auVar28[0xd] = bVar57;
  auVar28[0xe] = bVar58;
  auVar28[0xf] = bVar59;
  uVar21 = a64_TBL(ZEXT816(0),auVar28,DAT_03cb5488);
  auVar77[1] = bVar45;
  auVar77[0] = bVar44;
  auVar77[2] = bVar46;
  auVar77[3] = bVar47;
  auVar77[4] = bVar48;
  auVar77[5] = bVar49;
  auVar77[6] = bVar50;
  auVar77[7] = bVar51;
  auVar77[8] = bVar52;
  auVar77[9] = bVar53;
  auVar77[10] = bVar54;
  auVar77[0xb] = bVar55;
  auVar77[0xc] = bVar56;
  auVar77[0xd] = bVar57;
  auVar77[0xe] = bVar58;
  auVar77[0xf] = bVar59;
  uVar61 = a64_TBL(ZEXT816(0),auVar77,DAT_03cb56c8);
  fVar12 = (float)CONCAT13(bVar47,CONCAT12(bVar46,CONCAT11(bVar45,bVar44)));
  fVar17 = (float)CONCAT13(bVar51,CONCAT12(bVar50,CONCAT11(bVar49,bVar48)));
  fVar29 = (float)uVar41 * (float)uVar21 - (float)uVar38 * (float)uVar61;
  fVar30 = fVar43 * (float)((ulong)uVar21 >> 0x20) - fVar30 * (float)((ulong)uVar61 >> 0x20);
  auVar1[1] = bVar45;
  auVar1[0] = bVar44;
  auVar1[2] = bVar46;
  auVar1[3] = bVar47;
  auVar1[4] = bVar48;
  auVar1[5] = bVar49;
  auVar1[6] = bVar50;
  auVar1[7] = bVar51;
  auVar1[8] = bVar52;
  auVar1[9] = bVar53;
  auVar1[10] = bVar54;
  auVar1[0xb] = bVar55;
  auVar1[0xc] = bVar56;
  auVar1[0xd] = bVar57;
  auVar1[0xe] = bVar58;
  auVar1[0xf] = bVar59;
  uVar61 = a64_TBL(ZEXT816(0),auVar1,DAT_03cb54c0);
  auVar2[1] = bVar45;
  auVar2[0] = bVar44;
  auVar2[2] = bVar46;
  auVar2[3] = bVar47;
  auVar2[4] = bVar48;
  auVar2[5] = bVar49;
  auVar2[6] = bVar50;
  auVar2[7] = bVar51;
  auVar2[8] = bVar52;
  auVar2[9] = bVar53;
  auVar2[10] = bVar54;
  auVar2[0xb] = bVar55;
  auVar2[0xc] = bVar56;
  auVar2[0xd] = bVar57;
  auVar2[0xe] = bVar58;
  auVar2[0xf] = bVar59;
  uVar21 = a64_TBL(ZEXT816(0),auVar2,DAT_03cb54d8);
  fVar20 = (float)uVar32 * (float)uVar61 - (float)uVar24 * (float)uVar21;
  fVar19 = auVar14._8_4_;
  fVar60 = auVar22._0_4_ + (float)_DAT_03cab3a0 * fVar12 + (float)_DAT_03cac210 * fVar30 +
           (float)_DAT_03cabb00 * fVar19;
  fVar62 = auVar22._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar12 +
           (float)((ulong)_DAT_03cac210 >> 0x20) * fVar30 +
           (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar19;
  fVar63 = auVar22._8_4_ + (float)_UNK_03cab3a8 * fVar12 + (float)_UNK_03cac218 * fVar30 +
           (float)_UNK_03cabb08 * fVar19;
  fVar64 = auVar22._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar12 +
           (float)((ulong)_UNK_03cac218 >> 0x20) * fVar30 +
           (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar19;
  auVar3[1] = bVar45;
  auVar3[0] = bVar44;
  auVar3[2] = bVar46;
  auVar3[3] = bVar47;
  auVar3[4] = bVar48;
  auVar3[5] = bVar49;
  auVar3[6] = bVar50;
  auVar3[7] = bVar51;
  auVar3[8] = bVar52;
  auVar3[9] = bVar53;
  auVar3[10] = bVar54;
  auVar3[0xb] = bVar55;
  auVar3[0xc] = bVar56;
  auVar3[0xd] = bVar57;
  auVar3[0xe] = bVar58;
  auVar3[0xf] = bVar59;
  auVar4[1] = bVar45;
  auVar4[0] = bVar44;
  auVar4[2] = bVar46;
  auVar4[3] = bVar47;
  auVar4[4] = bVar48;
  auVar4[5] = bVar49;
  auVar4[6] = bVar50;
  auVar4[7] = bVar51;
  auVar4[8] = bVar52;
  auVar4[9] = bVar53;
  auVar4[10] = bVar54;
  auVar4[0xb] = bVar55;
  auVar4[0xc] = bVar56;
  auVar4[0xd] = bVar57;
  auVar4[0xe] = bVar58;
  auVar4[0xf] = bVar59;
  auVar22 = NEON_ext(auVar3,auVar4,8,1);
  fVar72 = fVar13 + auVar22._0_4_;
  auVar7._8_4_ = -fVar18 + fVar20;
  auVar7._4_4_ = fVar72;
  fVar12 = (float)((uint)fVar60 ^ ((uint)fVar60 ^ (uint)fVar62) & -(uint)(fVar60 <= fVar62));
  fVar19 = (float)((uint)fVar60 ^ ((uint)fVar60 ^ (uint)fVar62) & -(uint)(fVar60 <= fVar62));
  fVar43 = (float)((uint)fVar60 ^ ((uint)fVar60 ^ (uint)fVar62) & -(uint)(fVar60 <= fVar62));
  fVar40 = (float)((uint)fVar60 ^ ((uint)fVar60 ^ (uint)fVar62) & -(uint)(fVar60 <= fVar62));
  auVar28 = NEON_fmov(0x40800000,4);
  auVar68._0_4_ = SQRT(fVar60) * 0.5 * auVar28._0_4_;
  auVar68._4_4_ = SQRT(fVar62) * 0.5 * auVar28._4_4_;
  auVar68._8_4_ = SQRT(fVar63) * 0.5 * auVar28._8_4_;
  auVar68._12_4_ = SQRT(fVar64) * 0.5 * auVar28._12_4_;
  auVar77 = NEON_frecpe(auVar68,4);
  auVar28 = NEON_frecps(auVar77,auVar68,4);
  auVar76._0_4_ = auVar77._0_4_ * auVar28._0_4_;
  auVar76._4_4_ = auVar77._4_4_ * auVar28._4_4_;
  auVar76._8_4_ = auVar77._8_4_ * auVar28._8_4_;
  auVar76._12_4_ = auVar77._12_4_ * auVar28._12_4_;
  auVar28 = NEON_frecps(auVar76,auVar68,4);
  fVar65 = auVar76._0_4_ * auVar28._0_4_;
  fVar69 = auVar76._4_4_ * auVar28._4_4_;
  fVar70 = auVar76._8_4_ * auVar28._8_4_;
  fVar71 = auVar76._12_4_ * auVar28._12_4_;
  auVar7._0_4_ = ((float)CONCAT13(bVar51,CONCAT12(bVar50,CONCAT11(bVar49,bVar48))) + fVar29) *
                 fVar65;
  auVar25._0_8_ = auVar7._0_8_ << 0x20;
  auVar25._8_4_ = fVar72 * fVar65;
  auVar25._12_4_ = (-fVar18 + fVar20) * fVar65;
  auVar33._0_4_ = (fVar17 + fVar29) * fVar69;
  auVar33._4_4_ = (fVar17 + fVar30) * fVar69;
  auVar33._8_4_ = (fVar18 + fVar20) * fVar69;
  auVar33._12_4_ =
       (-(float)CONCAT13(bVar55,CONCAT12(bVar54,CONCAT11(bVar53,bVar52))) + fVar13) * fVar69;
  auVar16._0_4_ = (fVar13 + auVar22._0_4_) * fVar70;
  auVar16._4_4_ = (fVar18 + fVar20) * fVar70;
  auVar16._12_4_ =
       ((float)CONCAT13(bVar51,CONCAT12(bVar50,CONCAT11(bVar49,bVar48))) - fVar29) * fVar70;
  auVar34._8_8_ = auVar33._8_8_;
  auVar34._4_4_ = SQRT(fVar62) * 0.5;
  auVar34._0_4_ = auVar33._0_4_;
  auVar26._4_12_ = auVar25._4_12_;
  auVar26._0_4_ = SQRT(fVar60) * 0.5;
  auVar16._8_4_ = SQRT(fVar63) * 0.5;
  auVar23._0_4_ = (fVar20 - fVar18) * fVar71;
  auVar23._4_4_ =
       (fVar13 - (float)CONCAT13(bVar55,CONCAT12(bVar54,CONCAT11(bVar53,bVar52)))) * fVar71;
  auVar23._8_4_ = (fVar17 - fVar29) * fVar71;
  auVar5._4_4_ = -(uint)(fVar60 <= fVar62);
  auVar5._0_4_ = -(uint)(fVar60 <= fVar62);
  auVar5._8_4_ = -(uint)(fVar60 <= fVar62);
  auVar5._12_4_ = -(uint)(fVar60 <= fVar62);
  auVar23._12_4_ = SQRT(fVar64) * 0.5;
  auVar6._4_4_ = -(uint)(fVar19 <= fVar63);
  auVar6._0_4_ = -(uint)(fVar12 <= fVar63);
  auVar6._8_4_ = -(uint)(fVar43 <= fVar63);
  auVar6._12_4_ = -(uint)(fVar40 <= fVar63);
  auVar16 = auVar16 ^ (auVar16 ^ auVar26 ^ (auVar26 ^ auVar34) & auVar5) & ~auVar6;
  auVar27._0_4_ =
       -(uint)((float)((uint)fVar12 ^ ((uint)fVar12 ^ (uint)fVar63) & -(uint)(fVar12 <= fVar63)) <=
              fVar64);
  auVar27._4_4_ =
       -(uint)((float)((uint)fVar19 ^ ((uint)fVar19 ^ (uint)fVar63) & -(uint)(fVar19 <= fVar63)) <=
              fVar64);
  auVar27._8_4_ =
       -(uint)((float)((uint)fVar43 ^ ((uint)fVar43 ^ (uint)fVar63) & -(uint)(fVar43 <= fVar63)) <=
              fVar64);
  auVar27._12_4_ =
       -(uint)((float)((uint)fVar40 ^ ((uint)fVar40 ^ (uint)fVar63) & -(uint)(fVar40 <= fVar63)) <=
              fVar64);
  FUN_0199ae60(param_1,auVar16 ^ (auVar16 ^ auVar23) & auVar27);
  return;
}


