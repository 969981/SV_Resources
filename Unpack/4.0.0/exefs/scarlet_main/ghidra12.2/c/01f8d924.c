/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f8d924; name: FUN_01f8d924
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f8d924(undefined1 param_1 [16],long param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  undefined1 auVar39 [12];
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  float fVar46;
  byte bVar48;
  uint uVar47;
  byte bVar49;
  float fVar50;
  int iVar51;
  int iVar53;
  undefined8 uVar52;
  int iVar54;
  int iVar55;
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined8 uVar59;
  undefined1 auVar60 [16];
  float fVar62;
  undefined1 auVar61 [16];
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined8 in_register_00005148;
  undefined1 auVar75 [16];
  byte bVar79;
  byte bVar78;
  undefined8 in_register_00005168;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  uint uVar88;
  undefined8 uVar89;
  undefined1 auVar90 [16];
  undefined8 uVar91;
  float fVar94;
  float fVar95;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar96;
  undefined8 uVar97;
  undefined1 auVar98 [12];
  float fVar100;
  float fVar101;
  undefined1 auVar99 [16];
  float fVar102;
  undefined8 uVar103;
  float fVar104;
  undefined8 uVar105;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  int iVar110;
  undefined1 auVar108 [16];
  byte bVar111;
  undefined1 auVar109 [16];
  undefined8 uVar112;
  float fVar115;
  uint uVar116;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  float fVar122;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  undefined1 auVar123 [16];
  float fVar131;
  uint uVar132;
  undefined1 auVar130 [16];
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  
  fVar38 = 0.0 - param_1._0_4_;
  fVar42 = 0.0 - param_1._4_4_;
  fVar43 = 0.0 - param_1._8_4_;
  fVar44 = 0.0 - param_1._12_4_;
  auVar27._0_4_ = fVar38 * fVar38 + fVar42 * fVar42;
  auVar27._4_4_ = fVar43 * fVar43 + fVar44 * fVar44;
  auVar27._8_4_ = fVar38 * fVar38 + fVar42 * fVar42;
  auVar27._12_4_ = fVar43 * fVar43 + fVar44 * fVar44;
  auVar45 = NEON_ext(auVar27,auVar27,4,1);
  auVar28._0_4_ = auVar45._0_4_ + auVar45._4_4_;
  auVar28._4_4_ = auVar45._8_4_ + auVar45._12_4_;
  auVar28._8_4_ = auVar45._0_4_ + auVar45._4_4_;
  auVar28._12_4_ = auVar45._8_4_ + auVar45._12_4_;
  auVar45 = NEON_frsqrte(auVar28,4);
  auVar60._8_8_ = _UNK_03cabe68;
  auVar60._0_8_ = _DAT_03cabe60;
  auVar57._0_4_ = auVar28._0_4_ * auVar45._0_4_;
  auVar57._4_4_ = auVar28._4_4_ * auVar45._4_4_;
  auVar57._8_4_ = auVar28._8_4_ * auVar45._8_4_;
  auVar57._12_4_ = auVar28._12_4_ * auVar45._12_4_;
  auVar58 = NEON_frsqrts(auVar45,auVar57,4);
  uVar97 = a64_TBL(ZEXT816(0),auVar60,DAT_03cb56c8);
  auVar90._0_4_ = auVar45._0_4_ * auVar58._0_4_;
  auVar90._4_4_ = auVar45._4_4_ * auVar58._4_4_;
  auVar90._8_4_ = auVar45._8_4_ * auVar58._8_4_;
  auVar90._12_4_ = auVar45._12_4_ * auVar58._12_4_;
  auVar92._0_4_ = auVar28._0_4_ * auVar90._0_4_;
  auVar92._4_4_ = auVar28._4_4_ * auVar90._4_4_;
  auVar92._8_4_ = auVar28._8_4_ * auVar90._8_4_;
  auVar92._12_4_ = auVar28._12_4_ * auVar90._12_4_;
  iVar51 = -(uint)(auVar28._0_4_ == 0.0);
  iVar53 = -(uint)(auVar28._4_4_ == 0.0);
  iVar54 = -(uint)(auVar28._8_4_ == 0.0);
  iVar55 = -(uint)(auVar28._12_4_ == 0.0);
  auVar45 = NEON_frsqrts(auVar90,auVar92,4);
  uVar103 = a64_TBL(ZEXT816(0),auVar60,DAT_03cb54d8);
  uVar105 = a64_TBL(ZEXT816(0),auVar60,DAT_03cb5488);
  fVar38 = fVar38 * auVar90._0_4_ * auVar45._0_4_;
  fVar42 = fVar42 * auVar90._4_4_ * auVar45._4_4_;
  fVar43 = fVar43 * auVar90._8_4_ * auVar45._8_4_;
  fVar44 = fVar44 * auVar90._12_4_ * auVar45._12_4_;
  fVar38 = (float)CONCAT13((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                           CONCAT12((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10),
                                    CONCAT11((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar51 >> 8),
                                             SUB41(fVar38,0) & ~(byte)iVar51)));
  auVar39._0_8_ =
       CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18),
                CONCAT16((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10),
                         CONCAT15((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar53 >> 8),
                                  CONCAT14(SUB41(fVar42,0) & ~(byte)iVar53,fVar38))));
  auVar39[8] = SUB41(fVar43,0) & ~(byte)iVar54;
  auVar39[9] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar54 >> 8);
  auVar39[10] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10);
  auVar39[0xb] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18);
  auVar40[0xc] = SUB41(fVar44,0) & ~(byte)iVar55;
  auVar40._0_12_ = auVar39;
  auVar40[0xd] = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar55 >> 8);
  auVar40[0xe] = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10);
  auVar40[0xf] = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
  uVar112 = a64_TBL(ZEXT816(0),auVar60,DAT_03cb54c0);
  uVar89 = a64_TBL(ZEXT816(0),auVar40,DAT_03cb5488);
  uVar52 = a64_TBL(ZEXT816(0),auVar40,DAT_03cb54c0);
  uVar91 = a64_TBL(ZEXT816(0),auVar40,DAT_03cb56c8);
  uVar59 = a64_TBL(ZEXT816(0),auVar40,DAT_03cb54d8);
  fVar42 = (float)((ulong)uVar89 >> 0x20);
  fVar44 = (float)((ulong)uVar91 >> 0x20);
  fVar43 = (float)((ulong)auVar39._0_8_ >> 0x20);
  fVar96 = (float)uVar97 * (float)uVar89 - (float)uVar105 * (float)uVar91;
  fVar100 = (float)((ulong)uVar97 >> 0x20) * fVar42 - (float)((ulong)uVar105 >> 0x20) * fVar44;
  fVar102 = (float)uVar103 * (float)uVar52 - (float)uVar112 * (float)uVar59;
  fVar104 = (float)((ulong)uVar103 >> 0x20) * (float)((ulong)uVar52 >> 0x20) -
            (float)((ulong)uVar112 >> 0x20) * (float)((ulong)uVar59 >> 0x20);
  auVar29._0_4_ = fVar96 * fVar96 + fVar100 * fVar100;
  auVar29._4_4_ = fVar102 * fVar102 + fVar104 * fVar104;
  auVar29._8_4_ = fVar96 * fVar96 + fVar100 * fVar100;
  auVar29._12_4_ = fVar102 * fVar102 + fVar104 * fVar104;
  auVar45 = NEON_ext(auVar29,auVar29,4,1);
  auVar30._0_4_ = auVar45._0_4_ + auVar45._4_4_;
  auVar30._4_4_ = auVar45._8_4_ + auVar45._12_4_;
  auVar30._8_4_ = auVar45._0_4_ + auVar45._4_4_;
  auVar30._12_4_ = auVar45._8_4_ + auVar45._12_4_;
  auVar45 = NEON_frsqrte(auVar30,4);
  auVar113._0_4_ = auVar30._0_4_ * auVar45._0_4_;
  auVar113._4_4_ = auVar30._4_4_ * auVar45._4_4_;
  auVar113._8_4_ = auVar30._8_4_ * auVar45._8_4_;
  auVar113._12_4_ = auVar30._12_4_ * auVar45._12_4_;
  auVar58 = NEON_frsqrts(auVar45,auVar113,4);
  auVar106._0_4_ = auVar45._0_4_ * auVar58._0_4_;
  auVar106._4_4_ = auVar45._4_4_ * auVar58._4_4_;
  auVar106._8_4_ = auVar45._8_4_ * auVar58._8_4_;
  auVar106._12_4_ = auVar45._12_4_ * auVar58._12_4_;
  auVar119._0_4_ = auVar30._0_4_ * auVar106._0_4_;
  auVar119._4_4_ = auVar30._4_4_ * auVar106._4_4_;
  auVar119._8_4_ = auVar30._8_4_ * auVar106._8_4_;
  auVar119._12_4_ = auVar30._12_4_ * auVar106._12_4_;
  iVar51 = -(uint)(auVar30._0_4_ == 0.0);
  iVar53 = -(uint)(auVar30._4_4_ == 0.0);
  iVar54 = -(uint)(auVar30._8_4_ == 0.0);
  iVar55 = -(uint)(auVar30._12_4_ == 0.0);
  auVar58 = NEON_frsqrts(auVar106,auVar119,4);
  auVar45 = NEON_fmov(0x40800000,4);
  auVar120 = NEON_fmov(0x3f800000,4);
  fVar96 = fVar96 * auVar106._0_4_ * auVar58._0_4_;
  fVar100 = fVar100 * auVar106._4_4_ * auVar58._4_4_;
  fVar102 = fVar102 * auVar106._8_4_ * auVar58._8_4_;
  fVar104 = fVar104 * auVar106._12_4_ * auVar58._12_4_;
  fVar96 = (float)CONCAT13((byte)((uint)fVar96 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                           CONCAT12((byte)((uint)fVar96 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10),
                                    CONCAT11((byte)((uint)fVar96 >> 8) & ~(byte)((uint)iVar51 >> 8),
                                             SUB41(fVar96,0) & ~(byte)iVar51)));
  auVar98._0_8_ =
       CONCAT17((byte)((uint)fVar100 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18),
                CONCAT16((byte)((uint)fVar100 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10),
                         CONCAT15((byte)((uint)fVar100 >> 8) & ~(byte)((uint)iVar53 >> 8),
                                  CONCAT14(SUB41(fVar100,0) & ~(byte)iVar53,fVar96))));
  auVar98[8] = SUB41(fVar102,0) & ~(byte)iVar54;
  auVar98[9] = (byte)((uint)fVar102 >> 8) & ~(byte)((uint)iVar54 >> 8);
  auVar98[10] = (byte)((uint)fVar102 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10);
  auVar98[0xb] = (byte)((uint)fVar102 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18);
  auVar99[0xc] = SUB41(fVar104,0) & ~(byte)iVar55;
  auVar99._0_12_ = auVar98;
  auVar99[0xd] = (byte)((uint)fVar104 >> 8) & ~(byte)((uint)iVar55 >> 8);
  auVar99[0xe] = (byte)((uint)fVar104 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10);
  auVar99[0xf] = (byte)((uint)fVar104 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
  uVar97 = a64_TBL(ZEXT816(0),auVar99,DAT_03cb5488);
  uVar103 = a64_TBL(ZEXT816(0),auVar99,DAT_03cb56c8);
  fVar131 = auVar120._0_4_;
  fVar124 = auVar120._4_4_;
  fVar126 = auVar120._8_4_;
  fVar128 = auVar120._12_4_;
  auVar93 = NEON_ext(auVar99,auVar99,8,1);
  fVar101 = (float)((ulong)auVar98._0_8_ >> 0x20);
  fVar56 = (float)uVar91 * (float)uVar97 - (float)uVar89 * (float)uVar103;
  fVar44 = fVar44 * (float)((ulong)uVar97 >> 0x20) - fVar42 * (float)((ulong)uVar103 >> 0x20);
  fVar42 = auVar39._8_4_;
  fVar122 = fVar131 + (float)_DAT_03cab3a0 * fVar96 + (float)_DAT_03cac210 * fVar44 +
            (float)_DAT_03cabb00 * fVar42;
  fVar125 = fVar124 + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar96 +
            (float)((ulong)_DAT_03cac210 >> 0x20) * fVar44 +
            (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar42;
  fVar127 = fVar126 + (float)_UNK_03cab3a8 * fVar96 + (float)_UNK_03cac218 * fVar44 +
            (float)_UNK_03cabb08 * fVar42;
  fVar129 = fVar128 + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar96 +
            (float)((ulong)_UNK_03cac218 >> 0x20) * fVar44 +
            (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar42;
  uVar89 = a64_TBL(ZEXT816(0),auVar99,DAT_03cb54c0);
  uVar97 = a64_TBL(ZEXT816(0),auVar99,DAT_03cb54d8);
  fVar102 = (float)uVar59 * (float)uVar89 - (float)uVar52 * (float)uVar97;
  fVar62 = SQRT(fVar125) * 0.5;
  auVar114._0_4_ = SQRT(fVar122) * 0.5 * auVar45._0_4_;
  auVar114._4_4_ = fVar62 * auVar45._4_4_;
  auVar114._8_4_ = SQRT(fVar127) * 0.5 * auVar45._8_4_;
  auVar114._12_4_ = SQRT(fVar129) * 0.5 * auVar45._12_4_;
  auVar58 = NEON_frecpe(auVar114,4);
  auVar45 = NEON_frecps(auVar58,auVar114,4);
  auVar41._0_4_ = auVar58._0_4_ * auVar45._0_4_;
  auVar41._4_4_ = auVar58._4_4_ * auVar45._4_4_;
  auVar41._8_4_ = auVar58._8_4_ * auVar45._8_4_;
  auVar41._12_4_ = auVar58._12_4_ * auVar45._12_4_;
  auVar58 = NEON_fmov(0xbf800000,4);
  auVar45 = NEON_frecps(auVar41,auVar114,4);
  fVar42 = auVar41._0_4_ * auVar45._0_4_;
  fVar44 = auVar41._4_4_ * auVar45._4_4_;
  fVar96 = auVar41._8_4_ * auVar45._8_4_;
  fVar100 = auVar41._12_4_ * auVar45._12_4_;
  fVar104 = (float)((uint)fVar122 ^ ((uint)fVar122 ^ (uint)fVar125) & -(uint)(fVar122 <= fVar125));
  fVar115 = (float)((uint)fVar122 ^ ((uint)fVar122 ^ (uint)fVar125) & -(uint)(fVar122 <= fVar125));
  fVar94 = (float)((uint)fVar122 ^ ((uint)fVar122 ^ (uint)fVar125) & -(uint)(fVar122 <= fVar125));
  fVar95 = (float)((uint)fVar122 ^ ((uint)fVar122 ^ (uint)fVar125) & -(uint)(fVar122 <= fVar125));
  fVar46 = (fVar101 + fVar56) * fVar44;
  fVar50 = (fVar43 + fVar102) * fVar44;
  fVar44 = (-auVar98._8_4_ + fVar38) * fVar44;
  uVar35 = (uint)fVar46 ^
           ((uint)fVar46 ^ (uint)(SQRT(fVar122) * 0.5)) & ~-(uint)(fVar122 <= fVar125);
  uVar47 = (uint)fVar62 ^
           ((uint)fVar62 ^ (uint)((fVar101 + fVar56) * fVar42)) & ~-(uint)(fVar122 <= fVar125);
  uVar88 = (uint)fVar50 ^
           ((uint)fVar50 ^ (uint)((fVar38 + auVar93._0_4_) * fVar42)) & ~-(uint)(fVar122 <= fVar125)
  ;
  uVar132 = (uint)fVar44 ^
            ((uint)fVar44 ^ (uint)((-fVar43 + fVar102) * fVar42)) & ~-(uint)(fVar122 <= fVar125);
  uVar35 = uVar35 ^ (uVar35 ^ (uint)((fVar38 + auVar93._0_4_) * fVar96)) &
                    -(uint)(fVar104 <= fVar127);
  uVar47 = uVar47 ^ (uVar47 ^ (uint)((fVar43 + fVar102) * fVar96)) & -(uint)(fVar115 <= fVar127);
  uVar88 = uVar88 ^ (uVar88 ^ (uint)(SQRT(fVar127) * 0.5)) & -(uint)(fVar94 <= fVar127);
  uVar132 = uVar132 ^ (uVar132 ^ (uint)((fVar101 - fVar56) * fVar96)) & -(uint)(fVar95 <= fVar127);
  fVar62 = (float)(uVar35 ^ (uVar35 ^ (uint)((fVar102 - fVar43) * fVar100)) &
                            -(uint)((float)((uint)fVar104 ^
                                           ((uint)fVar104 ^ (uint)fVar127) &
                                           -(uint)(fVar104 <= fVar127)) <= fVar129));
  fVar122 = (float)(uVar47 ^ (uVar47 ^ (uint)((fVar38 - auVar98._8_4_) * fVar100)) &
                             -(uint)((float)((uint)fVar115 ^
                                            ((uint)fVar115 ^ (uint)fVar127) &
                                            -(uint)(fVar115 <= fVar127)) <= fVar129));
  fVar101 = (float)(uVar88 ^ (uVar88 ^ (uint)((fVar101 - fVar56) * fVar100)) &
                             -(uint)((float)((uint)fVar94 ^
                                            ((uint)fVar94 ^ (uint)fVar127) &
                                            -(uint)(fVar94 <= fVar127)) <= fVar129));
  fVar125 = (float)(uVar132 ^
                   (uVar132 ^ (uint)(SQRT(fVar129) * 0.5)) &
                   -(uint)((float)((uint)fVar95 ^
                                  ((uint)fVar95 ^ (uint)fVar127) & -(uint)(fVar95 <= fVar127)) <=
                          fVar129));
  fVar94 = fVar122 * fVar125 + fVar122 * fVar125;
  fVar95 = fVar101 * fVar125 + fVar101 * fVar125;
  fVar46 = fVar125 * 0.0 + fVar125 * 0.0;
  fVar43 = fVar62 * fVar101 + fVar62 * fVar101;
  fVar44 = fVar62 * fVar122 + fVar62 * fVar122;
  fVar56 = fVar101 * fVar101 + fVar101 * fVar101;
  fVar102 = (fVar62 * fVar125 + fVar62 * fVar125) - (fVar122 * fVar101 + fVar122 * fVar101);
  fVar38 = fVar94 - fVar43;
  fVar104 = fVar95 - fVar44;
  fVar42 = fVar46 - 0.0;
  auVar118._0_4_ = fVar131 - fVar102 * fVar102;
  auVar118._4_4_ = fVar124 - fVar38 * fVar38;
  auVar118._8_4_ = fVar126 - fVar104 * fVar104;
  auVar118._12_4_ = fVar128 - fVar42 * fVar42;
  fVar94 = fVar94 + fVar43;
  fVar95 = fVar95 + fVar44;
  fVar46 = fVar46 + 0.0;
  auVar45 = NEON_fmax(auVar118,ZEXT816(0),4);
  fVar127 = (fVar131 - (fVar122 * fVar122 + fVar122 * fVar122)) - fVar56;
  fVar129 = (fVar124 - (fVar62 * fVar62 + fVar62 * fVar62)) -
            (fVar122 * fVar122 + fVar122 * fVar122);
  auVar107._4_4_ = fVar127;
  auVar107._0_4_ = fVar127;
  auVar107._8_4_ = fVar127;
  auVar107._12_4_ = fVar127;
  auVar117 = NEON_fmin(auVar45,auVar120,4);
  auVar36._4_4_ = fVar104;
  auVar36._0_4_ = fVar104;
  auVar36._8_4_ = fVar104;
  auVar36._12_4_ = fVar104;
  fVar38 = ABS(fVar104 / fVar127);
  fVar42 = ABS(fVar104 / fVar127);
  uVar63 = SUB41(fVar42,0);
  uVar64 = (undefined1)((uint)fVar42 >> 8);
  uVar65 = (undefined1)((uint)fVar42 >> 0x10);
  uVar66 = (undefined1)((uint)fVar42 >> 0x18);
  fVar43 = ABS(fVar104 / fVar127);
  uVar67 = SUB41(fVar43,0);
  uVar68 = (undefined1)((uint)fVar43 >> 8);
  uVar69 = (undefined1)((uint)fVar43 >> 0x10);
  uVar70 = (undefined1)((uint)fVar43 >> 0x18);
  fVar44 = ABS(fVar104 / fVar127);
  uVar71 = SUB41(fVar44,0);
  uVar72 = (undefined1)((uint)fVar44 >> 8);
  uVar73 = (undefined1)((uint)fVar44 >> 0x10);
  uVar74 = (undefined1)((uint)fVar44 >> 0x18);
  fVar115 = auVar58._4_4_;
  auVar45[4] = uVar63;
  auVar45._0_4_ = fVar38;
  auVar45[5] = uVar64;
  auVar45[6] = uVar65;
  auVar45[7] = uVar66;
  auVar45[8] = uVar67;
  auVar45[9] = uVar68;
  auVar45[10] = uVar69;
  auVar45[0xb] = uVar70;
  auVar45[0xc] = uVar71;
  auVar45[0xd] = uVar72;
  auVar45[0xe] = uVar73;
  auVar45[0xf] = uVar74;
  auVar93 = NEON_frecpe(auVar45,4);
  fVar96 = (fVar43 + auVar58._8_4_) / (fVar43 + fVar126);
  fVar100 = (fVar44 + auVar58._12_4_) / (fVar44 + fVar128);
  fVar50 = (float)((uint)fVar115 ^
                  ((uint)fVar115 ^ (uint)fVar124) & -(uint)(0.0 <= fVar104 / fVar127));
  fVar131 = -fVar50;
  auVar2._4_8_ = in_register_00005168;
  auVar2._0_4_ = -(uint)(fVar42 <= 2.4142137);
  auVar76._0_8_ = auVar2._0_8_ << 0x20;
  auVar76._8_4_ = -(uint)(fVar43 <= 2.4142137);
  auVar76._12_4_ = -(uint)(fVar44 <= 2.4142137);
  auVar58[4] = uVar63;
  auVar58._0_4_ = fVar38;
  auVar58[5] = uVar64;
  auVar58[6] = uVar65;
  auVar58[7] = uVar66;
  auVar58[8] = uVar67;
  auVar58[9] = uVar68;
  auVar58[10] = uVar69;
  auVar58[0xb] = uVar70;
  auVar58[0xc] = uVar71;
  auVar58[0xd] = uVar72;
  auVar58[0xe] = uVar73;
  auVar58[0xf] = uVar74;
  auVar45 = NEON_frecps(auVar93,auVar58,4);
  iVar53 = -(uint)(fVar42 <= 0.41421354);
  auVar3._4_8_ = in_register_00005148;
  auVar3._0_4_ = iVar53;
  auVar75._0_8_ = auVar3._0_8_ << 0x20;
  auVar75._8_4_ = -(uint)(fVar43 <= 0.41421354);
  auVar75._12_4_ = -(uint)(fVar44 <= 0.41421354);
  auVar32._0_4_ = auVar93._0_4_ * auVar45._0_4_;
  auVar32._4_4_ = auVar93._4_4_ * auVar45._4_4_;
  auVar32._8_4_ = auVar93._8_4_ * auVar45._8_4_;
  auVar32._12_4_ = auVar93._12_4_ * auVar45._12_4_;
  auVar93[4] = uVar63;
  auVar93._0_4_ = fVar38;
  auVar93[5] = uVar64;
  auVar93[6] = uVar65;
  auVar93[7] = uVar66;
  auVar93[8] = uVar67;
  auVar93[9] = uVar68;
  auVar93[10] = uVar69;
  auVar93[0xb] = uVar70;
  auVar93[0xc] = uVar71;
  auVar93[0xd] = uVar72;
  auVar93[0xe] = uVar73;
  auVar93[0xf] = uVar74;
  auVar45 = NEON_frecps(auVar32,auVar93,4);
  auVar4._4_8_ = auVar32._8_8_;
  auVar4._0_4_ = auVar32._4_4_ * auVar45._4_4_;
  auVar33._0_8_ = auVar4._0_8_ << 0x20;
  auVar33._8_4_ = auVar32._8_4_ * auVar45._8_4_;
  auVar33._12_4_ = auVar32._12_4_ * auVar45._12_4_;
  auVar18[4] = SUB41(fVar96,0);
  auVar18._0_4_ = (fVar42 + fVar115) / (fVar42 + fVar124);
  auVar18[5] = (char)((uint)fVar96 >> 8);
  auVar18[6] = (char)((uint)fVar96 >> 0x10);
  auVar18[7] = (char)((uint)fVar96 >> 0x18);
  auVar18[8] = SUB41(fVar100,0);
  auVar18[9] = (char)((uint)fVar100 >> 8);
  auVar18[10] = (char)((uint)fVar100 >> 0x10);
  auVar18[0xb] = (char)((uint)fVar100 >> 0x18);
  auVar18._12_4_ = 0;
  auVar33 = auVar33 ^ (auVar33 ^ auVar18 << 0x20) & auVar76;
  auVar19[4] = uVar67;
  auVar19._0_4_ = fVar42;
  auVar19[5] = uVar68;
  auVar19[6] = uVar69;
  auVar19[7] = uVar70;
  auVar19[8] = uVar71;
  auVar19[9] = uVar72;
  auVar19[10] = uVar73;
  auVar19[0xb] = uVar74;
  auVar19._12_4_ = 0;
  auVar33 = auVar33 ^ (auVar33 ^ auVar19 << 0x20) & auVar75;
  fVar96 = auVar33._4_4_;
  fVar38 = fVar96 * fVar96;
  fVar43 = auVar33._8_4_ * auVar33._8_4_;
  fVar44 = auVar33._12_4_ * auVar33._12_4_;
  auVar1[8] = 0xcd;
  auVar1._0_8_ = 0x3e4ccccd00000000;
  auVar1[9] = 0xcc;
  auVar1[10] = 0x4c;
  auVar1[0xb] = 0x3e;
  auVar120[0xc] = 0xcd;
  auVar120._0_12_ = auVar1;
  auVar120[0xd] = 0xcc;
  auVar120[0xe] = 0x4c;
  auVar120[0xf] = 0x3e;
  auVar61._8_4_ = 0x3f490fdb;
  auVar61._0_8_ = 0x3f490fdb3f490fdb;
  auVar61._12_4_ = 0x3f490fdb;
  fVar100 = fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * 0.07692308 + -0.09090909) + 0.11111111)
                               + -0.14285715) + 0.2) + -0.33333334;
  auVar5._4_8_ = 0xbeaaaaabbeaaaaab;
  auVar5._0_4_ = fVar100;
  auVar84._0_8_ = auVar5._0_8_ << 0x20;
  auVar84._8_4_ =
       fVar43 * (auVar1._8_4_ +
                fVar43 * (fVar43 * (fVar43 * (fVar43 * 0.07692308 + -0.09090909) + 0.11111111) +
                         -0.14285715)) + -0.33333334;
  auVar84._12_4_ =
       fVar44 * (auVar120._12_4_ +
                fVar44 * (fVar44 * (fVar44 * (fVar44 * 0.07692308 + -0.09090909) + 0.11111111) +
                         -0.14285715)) + -0.33333334;
  auVar109._8_4_ = 0xbfc90fdb;
  auVar109._0_8_ = 0xbfc90fdbbfc90fdb;
  auVar109._12_4_ = 0xbfc90fdb;
  auVar45 = auVar109 ^ (auVar109 ^ auVar61) & auVar76;
  auVar6._1_11_ = auVar75._5_11_;
  auVar6[0] = auVar45[4] & ~(byte)iVar53;
  iVar54 = -(uint)(fVar104 == -INFINITY);
  auVar7._4_8_ = auVar45._8_8_;
  auVar7._0_4_ = iVar54;
  auVar77._0_8_ = auVar7._0_8_ << 0x20;
  auVar77._8_4_ = -(uint)(fVar104 == -INFINITY);
  auVar77._12_4_ = -(uint)(fVar104 == -INFINITY);
  auVar8._1_11_ = auVar77._5_11_;
  auVar8[0] = ~(byte)iVar54;
  bVar48 = (byte)((uint)iVar54 >> 8);
  bVar49 = (byte)((uint)iVar54 >> 0x10);
  bVar79 = (byte)((uint)iVar54 >> 0x18);
  bVar78 = ~bVar79;
  iVar51 = -(uint)(fVar104 == INFINITY);
  bVar80 = ~(byte)iVar51;
  bVar81 = ~(byte)((uint)iVar51 >> 8);
  bVar82 = ~(byte)((uint)iVar51 >> 0x10);
  bVar83 = ~(byte)((uint)iVar51 >> 0x18);
  bVar111 = (byte)((int)fVar104 >> 0x1f);
  auVar121._8_4_ = 0x40490fdb;
  auVar121._0_8_ = 0x40490fdb40490fdb;
  auVar121._12_4_ = 0x40490fdb;
  auVar34._8_4_ = 0xc0490fdb;
  auVar34._0_8_ = 0xc0490fdbc0490fdb;
  auVar34._12_4_ = 0xc0490fdb;
  auVar20[1] = bVar111;
  auVar20[0] = bVar111;
  auVar20[2] = bVar111;
  auVar20[3] = bVar111;
  auVar20[4] = bVar111;
  auVar20[5] = bVar111;
  auVar20[6] = bVar111;
  auVar20[7] = bVar111;
  auVar20[8] = bVar111;
  auVar20[9] = bVar111;
  auVar20[10] = bVar111;
  auVar20[0xb] = bVar111;
  auVar20._12_4_ = 0;
  auVar34 = auVar34 ^ (auVar34 ^ auVar121) & ~(auVar20 << 0x20);
  bVar133 = (byte)((int)fVar127 >> 0x1f);
  auVar9._1_11_ = auVar84._5_11_;
  auVar9[0] = auVar34[4] & bVar133;
  auVar85._0_8_ =
       CONCAT17(auVar34[7] & bVar133,
                CONCAT16(auVar34[6] & bVar133,CONCAT15(auVar34[5] & bVar133,auVar9._0_5_ << 0x20)));
  auVar85[8] = auVar34[8] & bVar133;
  auVar85[9] = auVar34[9] & bVar133;
  auVar85[10] = auVar34[10] & bVar133;
  auVar85[0xb] = auVar34[0xb] & bVar133;
  auVar85[0xc] = auVar34[0xc] & bVar133;
  auVar85[0xd] = auVar34[0xd] & bVar133;
  auVar85[0xe] = auVar34[0xe] & bVar133;
  auVar85[0xf] = auVar34[0xf] & bVar133;
  uVar47 = (uint)(CONCAT17(bVar78,CONCAT16(~bVar49,CONCAT15(~bVar48,auVar8._0_5_ << 0x20))) >> 0x20)
  ;
  uVar35 = auVar34._4_4_ ^ (auVar34._4_4_ ^ 0xc016cbe4) & ~uVar47;
  uVar35 = uVar35 ^ (uVar35 ^ 0x4016cbe4) &
                    ~CONCAT13(bVar83,CONCAT12(bVar82,CONCAT11(bVar81,bVar80)));
  fVar38 = (float)((uint)fVar131 ^ ((uint)fVar131 ^ (uint)fVar50) & -(uint)(fVar42 <= 2.4142137)) *
           ((float)(CONCAT17(auVar45[7] & ~(byte)((uint)iVar53 >> 0x18),
                             CONCAT16(auVar45[6] & ~(byte)((uint)iVar53 >> 0x10),
                                      CONCAT15(auVar45[5] & ~(byte)((uint)iVar53 >> 8),
                                               auVar6._0_5_ << 0x20))) >> 0x20) +
           (fVar124 + fVar38 * fVar100) * fVar96) + (float)((ulong)auVar85._0_8_ >> 0x20);
  iVar51 = -(uint)(fVar127 == -INFINITY);
  auVar10._4_8_ = auVar85._8_8_;
  auVar10._0_4_ = iVar51;
  auVar86._0_8_ = auVar10._0_8_ << 0x20;
  auVar86._8_4_ = -(uint)(fVar127 == -INFINITY);
  auVar86._12_4_ = -(uint)(fVar127 == -INFINITY);
  auVar11._1_11_ = auVar86._5_11_;
  auVar11[0] = ~(byte)iVar51;
  uVar47 = (uint)fVar38 ^ ((uint)fVar38 ^ 0xbfc90fdb) & ~uVar47;
  uVar35 = uVar35 ^ (uVar35 ^ uVar47 ^ (uVar47 ^ 0x3fc90fdb) &
                                       ~CONCAT13(bVar83,CONCAT12(bVar82,CONCAT11(bVar81,bVar80)))) &
                    (uint)(CONCAT17(~(byte)((uint)iVar51 >> 0x18),
                                    CONCAT16(~(byte)((uint)iVar51 >> 0x10),
                                             CONCAT15(~(byte)((uint)iVar51 >> 8),
                                                      auVar11._0_5_ << 0x20))) >> 0x20);
  auVar87._0_4_ = ABS(fVar102 / SQRT(auVar117._0_4_));
  auVar87._4_4_ = ABS(fVar94 / fVar129);
  auVar87._8_4_ = ABS(fVar95 / ((fVar126 - (fVar62 * fVar62 + fVar62 * fVar62)) - fVar56));
  auVar87._12_4_ = ABS(fVar46 / 0.0);
  fVar38 = (auVar87._4_4_ + fVar115) / (auVar87._4_4_ + fVar124);
  auVar45 = NEON_frecpe(auVar87,4);
  auVar58 = NEON_frecps(auVar45,auVar87,4);
  auVar130._0_4_ = auVar45._0_4_ * auVar58._0_4_;
  auVar130._4_4_ = auVar45._4_4_ * auVar58._4_4_;
  auVar130._8_4_ = auVar45._8_4_ * auVar58._8_4_;
  auVar130._12_4_ = auVar45._12_4_ * auVar58._12_4_;
  auVar45 = NEON_frecps(auVar130,auVar87,4);
  uVar88 = -(uint)(auVar87._4_4_ <= 2.4142137);
  auVar21._4_4_ = -(uint)(auVar87._8_4_ <= 2.4142137);
  auVar21._0_4_ = uVar88;
  auVar21._8_4_ = -(uint)(auVar87._12_4_ <= 2.4142137);
  uVar47 = (uint)fVar38 ^ ((uint)fVar38 ^ (uint)(auVar130._4_4_ * auVar45._4_4_)) & ~uVar88;
  uVar132 = -(uint)(auVar87._4_4_ <= 0.41421354);
  fVar43 = (float)(uVar47 ^ (uVar47 ^ (uint)auVar87._4_4_) & uVar132);
  fVar115 = (float)((uint)fVar115 ^
                   ((uint)fVar115 ^ (uint)fVar124) & -(uint)(0.0 <= fVar94 / fVar129));
  fVar42 = fVar43 * fVar43;
  bVar78 = bVar111 & bVar78 & 0x80;
  auVar123._0_11_ = ZEXT111(bVar78) << 0x38;
  auVar123[0xb] = bVar111 & ~(byte)((uint)auVar77._8_4_ >> 0x18) & 0x80;
  auVar123._12_3_ = 0;
  auVar123[0xf] = bVar111 & ~(byte)((uint)auVar77._12_4_ >> 0x18) & 0x80;
  auVar12._1_11_ = auVar123._5_11_;
  auVar12[0] = (byte)iVar54 & 0xdb;
  uVar47 = (uint)(CONCAT17(bVar78 | bVar79 & 0xbf,
                           CONCAT16(bVar49,CONCAT15(bVar48,auVar12._0_5_ << 0x20))) >> 0x20) &
           0xff490fff;
  iVar51 = -(uint)(fVar104 == -0.0);
  bVar48 = (byte)((uint)iVar51 >> 8);
  bVar49 = (byte)((uint)iVar51 >> 0x10);
  bVar78 = (byte)((uint)iVar51 >> 0x18);
  iVar53 = -(uint)(fVar104 == -0.0);
  bVar79 = (byte)((uint)iVar53 >> 8);
  bVar134 = (byte)((uint)iVar53 >> 0x10);
  bVar135 = (byte)((uint)iVar53 >> 0x18);
  iVar54 = -(uint)(fVar104 == -0.0);
  bVar136 = (byte)((uint)iVar54 >> 8);
  bVar137 = (byte)((uint)iVar54 >> 0x10);
  bVar138 = (byte)((uint)iVar54 >> 0x18);
  auVar117._8_4_ = 0xc0490fdb;
  auVar117._0_8_ = 0xc0490fdbc0490fdb;
  auVar117._12_4_ = 0xc0490fdb;
  iVar110 = -(uint)(fVar127 == INFINITY);
  auVar13._4_8_ = auVar107._8_8_;
  auVar13._0_4_ = iVar110;
  auVar108._0_8_ = auVar13._0_8_ << 0x20;
  auVar108._8_4_ = -(uint)(fVar127 == INFINITY);
  auVar108._12_4_ = -(uint)(fVar127 == INFINITY);
  auVar14._1_11_ = auVar108._5_11_;
  auVar14[0] = ~(byte)iVar110;
  iVar55 = -(uint)(fVar104 == 0.0);
  auVar15._4_8_ = auVar36._8_8_;
  auVar15._0_4_ = iVar55;
  auVar37._0_8_ = auVar15._0_8_ << 0x20;
  auVar37._8_4_ = -(uint)(fVar104 == 0.0);
  auVar37._12_4_ = -(uint)(fVar104 == 0.0);
  auVar16._1_11_ = auVar37._5_11_;
  auVar16[0] = ~(byte)iVar55;
  uVar35 = uVar35 ^ (uVar35 ^ uVar47 ^ (uVar47 ^ 0x3f490fdb) &
                                       ~CONCAT13(bVar83,CONCAT12(bVar82,CONCAT11(bVar81,bVar80)))) &
                    ~(uint)(CONCAT17(~(byte)((uint)iVar110 >> 0x18),
                                     CONCAT16(~(byte)((uint)iVar110 >> 0x10),
                                              CONCAT15(~(byte)((uint)iVar110 >> 8),
                                                       auVar14._0_5_ << 0x20))) >> 0x20);
  bVar111 = (~bVar78 & 0x40 | bVar78 & 0xc0) & bVar133;
  auVar25[1] = (~(byte)iVar53 & 0xdb | (byte)iVar53 & 0xdb) & bVar133;
  auVar25[0] = bVar111;
  auVar25[2] = (~bVar79 & 0xf | bVar79 & 0xf) & bVar133;
  auVar25[3] = (~bVar134 & 0x49 | bVar134 & 0x49) & bVar133;
  auVar25[4] = (~bVar135 & 0x40 | bVar135 & 0xc0) & bVar133;
  auVar25[5] = (~(byte)iVar54 & 0xdb | (byte)iVar54 & 0xdb) & bVar133;
  auVar25[6] = (~bVar136 & 0xf | bVar136 & 0xf) & bVar133;
  auVar25[7] = (~bVar137 & 0x49 | bVar137 & 0x49) & bVar133;
  auVar25[8] = (~bVar138 & 0x40 | bVar138 & 0xc0) & bVar133;
  auVar25._9_7_ = 0;
  auVar17._1_11_ = SUB1611(auVar25 << 0x38,5);
  auVar17[0] = (~(byte)iVar51 & 0xdb | (byte)iVar51 & 0xdb) & bVar133;
  fVar38 = (float)(uVar35 ^ (uVar35 ^ (uint)(CONCAT17(bVar111 | bVar78 & ~bVar133 & 0x80,
                                                      CONCAT16((~bVar49 & 0x49 | bVar49 & 0x49) &
                                                               bVar133,CONCAT15((~bVar48 & 0xf |
                                                                                bVar48 & 0xf) &
                                                                                bVar133,auVar17.
                                                  _0_5_ << 0x20))) >> 0x20)) &
                            ~(uint)(CONCAT17(~(byte)((uint)iVar55 >> 0x18),
                                             CONCAT16(~(byte)((uint)iVar55 >> 0x10),
                                                      CONCAT15(~(byte)((uint)iVar55 >> 8),
                                                               auVar16._0_5_ << 0x20))) >> 0x20));
  uVar35 = (uint)fVar38 ^ ((uint)fVar38 ^ (uint)-fVar38) & ~-(uint)(fVar102 < 0.0);
  auVar22._4_8_ = auVar21._4_8_;
  auVar22._0_4_ = uVar88;
  auVar22._12_4_ = 0;
  auVar109 = auVar109 ^ (auVar109 ^ auVar61) & auVar22 << 0x20;
  auVar23._4_4_ = (int)fVar95 >> 0x1f;
  auVar23._0_4_ = (int)fVar94 >> 0x1f;
  auVar23._8_4_ = (int)fVar46 >> 0x1f;
  fVar38 = -fVar115;
  uVar116 = -(uint)(fVar94 == -INFINITY);
  bVar111 = ~(byte)(uVar116 >> 0x18);
  uVar47 = CONCAT13(bVar111,CONCAT12(~(byte)(uVar116 >> 0x10),
                                     CONCAT11(~(byte)(uVar116 >> 8),~(byte)uVar116)));
  auVar24._4_8_ = auVar23._4_8_;
  auVar24._0_4_ = (int)fVar94 >> 0x1f;
  auVar24._12_4_ = 0;
  auVar121 = auVar121 ^ (auVar121 ^ auVar117) & auVar24 << 0x20;
  uVar26 = (auVar121._4_4_ ^ 0xc016cbe4) & uVar47;
  bVar78 = (byte)((int)fVar129 >> 0x1f);
  fVar38 = (float)((uint)fVar38 ^ ((uint)fVar38 ^ (uint)fVar115) & uVar88) *
           ((float)CONCAT13(auVar109[7] & ~(byte)(uVar132 >> 0x18),
                            CONCAT12(auVar109[6] & ~(byte)(uVar132 >> 0x10),
                                     CONCAT11(auVar109[5] & ~(byte)(uVar132 >> 8),
                                              auVar109[4] & ~(byte)uVar132))) +
           (fVar124 +
           fVar42 * (fVar42 * (fVar42 * (fVar42 * (fVar42 * (fVar42 * 0.07692308 + -0.09090909) +
                                                  0.11111111) + -0.14285715) + 0.2) + -0.33333334))
           * fVar43) +
           (float)CONCAT13(auVar121[7] & bVar78,
                           CONCAT12(auVar121[6] & bVar78,
                                    CONCAT11(auVar121[5] & bVar78,auVar121[4] & bVar78)));
  iVar51 = -(uint)(fVar94 == INFINITY);
  uVar132 = (uint)fVar38 ^ ((uint)fVar38 ^ 0xbfc90fdb) & ~uVar47;
  uVar88 = CONCAT13(~(byte)((uint)iVar51 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar51 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar51 >> 8),~(byte)iVar51)));
  iVar51 = -(uint)(fVar129 == INFINITY);
  iVar53 = -(uint)(fVar129 == -INFINITY);
  uVar47 = uVar26 ^ 0xc016cbe4 ^ (uVar26 ^ 0x80000000) & ~uVar88;
  auVar31._0_4_ = fVar62 * fVar62 + fVar122 * fVar122;
  auVar31._4_4_ = fVar101 * fVar101 + fVar125 * fVar125;
  auVar31._8_4_ = fVar62 * fVar62 + fVar122 * fVar122;
  auVar31._12_4_ = fVar101 * fVar101 + fVar125 * fVar125;
  uVar47 = uVar47 ^ (uVar47 ^ uVar132 ^ (uVar132 ^ 0x3fc90fdb) & ~uVar88) &
                    CONCAT13(~(byte)((uint)iVar53 >> 0x18),
                             CONCAT12(~(byte)((uint)iVar53 >> 0x10),
                                      CONCAT11(~(byte)((uint)iVar53 >> 8),~(byte)iVar53)));
  auVar45 = NEON_ext(auVar31,auVar31,4,1);
  uVar47 = uVar47 ^ (uVar47 ^ (CONCAT13((byte)((int)fVar94 >> 0x1f) & bVar111 & 0x80 |
                                        (byte)(((ulong)uVar116 & 0xbf490fdb) >> 0x18),
                                        (int3)((ulong)uVar116 & 0xbf490fdb)) ^ 0x3f490fdb) & uVar88
                              ^ 0x3f490fdb) &
                    ~CONCAT13(~(byte)((uint)iVar51 >> 0x18),
                              CONCAT12(~(byte)((uint)iVar51 >> 0x10),
                                       CONCAT11(~(byte)((uint)iVar51 >> 8),~(byte)iVar51)));
  iVar51 = -(uint)(fVar94 == -0.0);
  bVar111 = (byte)((uint)iVar51 >> 8);
  bVar48 = (byte)((uint)iVar51 >> 0x10);
  bVar49 = (byte)((uint)iVar51 >> 0x18);
  iVar53 = -(uint)(fVar94 == 0.0);
  uVar35 = uVar35 ^ (uVar35 ^ uVar47 ^ (uVar47 ^ CONCAT13((~bVar49 & 0x40 | bVar49 & 0xc0) & bVar78
                                                          | bVar49 & ~bVar78 & 0x80,
                                                          CONCAT12((~bVar48 & 0x49 | bVar48 & 0x49)
                                                                   & bVar78,CONCAT11((~bVar111 & 0xf
                                                                                     | bVar111 & 0xf
                                                                                     ) & bVar78,
                                                                                     (~(byte)iVar51
                                                                                      & 0xdb | (byte
                                                  )iVar51 & 0xdb) & bVar78)))) &
                                       ~CONCAT13(~(byte)((uint)iVar53 >> 0x18),
                                                 CONCAT12(~(byte)((uint)iVar53 >> 0x10),
                                                          CONCAT11(~(byte)((uint)iVar53 >> 8),
                                                                   ~(byte)iVar53)))) &
                    ~-(uint)(ABS(ABS(fVar102) - (auVar45._8_4_ + auVar45._12_4_)) <= 1.1920929e-07);
  *(uint *)(param_2 + 0x2d0) = uVar35;
  *(uint *)(param_2 + 0x860) = uVar35;
  FUN_01828730();
  return;
}


