/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d707f0; name: FUN_00d707f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d707f0(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 *param_3,long param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  long lVar7;
  short sVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined1 auVar28 [12];
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar38;
  undefined1 auVar36 [12];
  float fVar39;
  float fVar40;
  undefined1 auVar37 [16];
  int iVar41;
  float fVar42;
  float fVar43;
  int iVar47;
  undefined8 uVar44;
  int iVar50;
  undefined1 auVar45 [16];
  float fVar48;
  float fVar49;
  float fVar51;
  int iVar52;
  float fVar53;
  undefined1 auVar46 [16];
  undefined8 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  int iVar57;
  int iVar58;
  int iVar59;
  undefined8 uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar67;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  int iVar72;
  undefined8 uVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar79;
  float fVar80;
  undefined8 uVar81;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined1 auVar82 [16];
  float fVar84;
  float fVar88;
  undefined1 auVar83 [16];
  float fVar89;
  undefined8 uVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined8 uVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  long *local_38;
  
  fVar35 = param_2._12_4_;
  fVar34 = param_2._8_4_;
  fVar33 = param_2._4_4_;
  fVar26 = param_2._0_4_;
  auVar10._0_4_ = fVar26 * fVar26 + fVar33 * fVar33;
  auVar10._4_4_ = fVar34 * fVar34 + fVar35 * fVar35;
  auVar10._8_4_ = fVar26 * fVar26 + fVar33 * fVar33;
  auVar10._12_4_ = fVar34 * fVar34 + fVar35 * fVar35;
  auVar45 = NEON_ext(auVar10,auVar10,4,1);
  auVar11._0_4_ = auVar45._0_4_ + auVar45._4_4_;
  auVar11._4_4_ = auVar45._8_4_ + auVar45._12_4_;
  auVar11._8_4_ = auVar45._0_4_ + auVar45._4_4_;
  auVar11._12_4_ = auVar45._8_4_ + auVar45._12_4_;
  auVar45 = NEON_frsqrte(auVar11,4);
  fVar24 = (float)_UNK_03cabe68;
  fVar25 = (float)((ulong)_UNK_03cabe68 >> 0x20);
  fVar22 = (float)_DAT_03cabe60;
  fVar23 = (float)((ulong)_DAT_03cabe60 >> 0x20);
  auVar61._0_4_ = auVar11._0_4_ * auVar45._0_4_;
  auVar61._4_4_ = auVar11._4_4_ * auVar45._4_4_;
  auVar61._8_4_ = auVar11._8_4_ * auVar45._8_4_;
  auVar61._12_4_ = auVar11._12_4_ * auVar45._12_4_;
  auVar62 = NEON_frsqrts(auVar45,auVar61,4);
  auVar55._0_4_ = auVar45._0_4_ * auVar62._0_4_;
  auVar55._4_4_ = auVar45._4_4_ * auVar62._4_4_;
  auVar55._8_4_ = auVar45._8_4_ * auVar62._8_4_;
  auVar55._12_4_ = auVar45._12_4_ * auVar62._12_4_;
  auVar63._0_4_ = auVar11._0_4_ * auVar55._0_4_;
  auVar63._4_4_ = auVar11._4_4_ * auVar55._4_4_;
  auVar63._8_4_ = auVar11._8_4_ * auVar55._8_4_;
  auVar63._12_4_ = auVar11._12_4_ * auVar55._12_4_;
  iVar41 = -(uint)(auVar11._0_4_ == 0.0);
  iVar47 = -(uint)(auVar11._4_4_ == 0.0);
  iVar50 = -(uint)(auVar11._8_4_ == 0.0);
  iVar52 = -(uint)(auVar11._12_4_ == 0.0);
  auVar45 = NEON_frsqrts(auVar55,auVar63,4);
  fVar26 = fVar26 * auVar55._0_4_ * auVar45._0_4_;
  fVar33 = fVar33 * auVar55._4_4_ * auVar45._4_4_;
  fVar34 = fVar34 * auVar55._8_4_ * auVar45._8_4_;
  fVar35 = fVar35 * auVar55._12_4_ * auVar45._12_4_;
  auVar62._8_4_ = fVar24;
  auVar62._0_8_ = _DAT_03cabe60;
  auVar62._12_4_ = fVar25;
  uVar54 = a64_TBL(ZEXT816(0),auVar62,DAT_03cb54c0);
  auVar29[0] = SUB41(fVar26,0) & ~(byte)iVar41;
  auVar29[1] = (byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar41 >> 8);
  auVar29[2] = (byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
  auVar29[3] = (byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
  auVar29[4] = SUB41(fVar33,0) & ~(byte)iVar47;
  auVar29[5] = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar47 >> 8);
  auVar29[6] = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10);
  auVar29[7] = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18);
  auVar29[8] = SUB41(fVar34,0) & ~(byte)iVar50;
  auVar29[9] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar50 >> 8);
  auVar29[10] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
  auVar29[0xb] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
  auVar29[0xc] = SUB41(fVar35,0) & ~(byte)iVar52;
  auVar29[0xd] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar52 >> 8);
  auVar29[0xe] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
  auVar29[0xf] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
  auVar71._8_4_ = fVar24;
  auVar71._0_8_ = _DAT_03cabe60;
  auVar71._12_4_ = fVar25;
  uVar73 = a64_TBL(ZEXT816(0),auVar71,DAT_03cb56c8);
  auVar75._8_4_ = fVar24;
  auVar75._0_8_ = _DAT_03cabe60;
  auVar75._12_4_ = fVar25;
  uVar60 = a64_TBL(ZEXT816(0),auVar75,DAT_03cb54d8);
  auVar82._8_4_ = fVar24;
  auVar82._0_8_ = _DAT_03cabe60;
  auVar82._12_4_ = fVar25;
  uVar81 = a64_TBL(ZEXT816(0),auVar82,DAT_03cb5488);
  uVar44 = a64_TBL(ZEXT816(0),auVar29,DAT_03cb5488);
  uVar90 = a64_TBL(ZEXT816(0),auVar29,DAT_03cb54c0);
  uVar93 = a64_TBL(ZEXT816(0),auVar29,DAT_03cb56c8);
  uVar27 = a64_TBL(ZEXT816(0),auVar29,DAT_03cb54d8);
  fVar38 = (float)((ulong)uVar73 >> 0x20);
  fVar67 = (float)((ulong)uVar60 >> 0x20);
  fVar42 = (float)((ulong)uVar81 >> 0x20);
  fVar48 = (float)((ulong)uVar54 >> 0x20);
  fVar33 = (float)uVar73 * (float)uVar44 - (float)uVar81 * (float)uVar93;
  fVar35 = fVar38 * (float)((ulong)uVar44 >> 0x20) - fVar42 * (float)((ulong)uVar93 >> 0x20);
  fVar26 = (float)uVar60 * (float)uVar90 - (float)uVar54 * (float)uVar27;
  fVar34 = fVar67 * (float)((ulong)uVar90 >> 0x20) - fVar48 * (float)((ulong)uVar27 >> 0x20);
  auVar12._0_4_ = fVar33 * fVar33 + fVar35 * fVar35;
  auVar12._4_4_ = fVar26 * fVar26 + fVar34 * fVar34;
  auVar12._8_4_ = fVar33 * fVar33 + fVar35 * fVar35;
  auVar12._12_4_ = fVar26 * fVar26 + fVar34 * fVar34;
  auVar45 = NEON_ext(auVar12,auVar12,4,1);
  auVar13._0_4_ = auVar45._0_4_ + auVar45._4_4_;
  auVar13._4_4_ = auVar45._8_4_ + auVar45._12_4_;
  auVar13._8_4_ = auVar45._0_4_ + auVar45._4_4_;
  auVar13._12_4_ = auVar45._8_4_ + auVar45._12_4_;
  auVar45 = NEON_frsqrte(auVar13,4);
  auVar94._0_4_ = auVar13._0_4_ * auVar45._0_4_;
  auVar94._4_4_ = auVar13._4_4_ * auVar45._4_4_;
  auVar94._8_4_ = auVar13._8_4_ * auVar45._8_4_;
  auVar94._12_4_ = auVar13._12_4_ * auVar45._12_4_;
  auVar62 = NEON_frsqrts(auVar45,auVar94,4);
  auVar91._0_4_ = auVar45._0_4_ * auVar62._0_4_;
  auVar91._4_4_ = auVar45._4_4_ * auVar62._4_4_;
  auVar91._8_4_ = auVar45._8_4_ * auVar62._8_4_;
  auVar91._12_4_ = auVar45._12_4_ * auVar62._12_4_;
  auVar95._0_4_ = auVar13._0_4_ * auVar91._0_4_;
  auVar95._4_4_ = auVar13._4_4_ * auVar91._4_4_;
  auVar95._8_4_ = auVar13._8_4_ * auVar91._8_4_;
  auVar95._12_4_ = auVar13._12_4_ * auVar91._12_4_;
  iVar41 = -(uint)(auVar13._0_4_ == 0.0);
  iVar47 = -(uint)(auVar13._4_4_ == 0.0);
  iVar50 = -(uint)(auVar13._8_4_ == 0.0);
  iVar52 = -(uint)(auVar13._12_4_ == 0.0);
  auVar45 = NEON_frsqrts(auVar91,auVar95,4);
  fVar33 = fVar33 * auVar91._0_4_ * auVar45._0_4_;
  fVar35 = fVar35 * auVar91._4_4_ * auVar45._4_4_;
  fVar26 = fVar26 * auVar91._8_4_ * auVar45._8_4_;
  fVar34 = fVar34 * auVar91._12_4_ * auVar45._12_4_;
  fVar33 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18),
                           CONCAT12((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10),
                                    CONCAT11((byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar41 >> 8),
                                             SUB41(fVar33,0) & ~(byte)iVar41)));
  auVar28._0_8_ =
       CONCAT17((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18),
                CONCAT16((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10),
                         CONCAT15((byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar47 >> 8),
                                  CONCAT14(SUB41(fVar35,0) & ~(byte)iVar47,fVar33))));
  auVar28[8] = SUB41(fVar26,0) & ~(byte)iVar50;
  auVar28[9] = (byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar50 >> 8);
  auVar28[10] = (byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
  auVar28[0xb] = (byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
  auVar30[0xc] = SUB41(fVar34,0) & ~(byte)iVar52;
  auVar30._0_12_ = auVar28;
  auVar30[0xd] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar52 >> 8);
  auVar30[0xe] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
  auVar30[0xf] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
  uVar27 = a64_TBL(ZEXT816(0),auVar30,DAT_03cb56c8);
  uVar44 = a64_TBL(ZEXT816(0),auVar30,DAT_03cb54d8);
  uVar90 = a64_TBL(ZEXT816(0),auVar30,DAT_03cb5488);
  uVar93 = a64_TBL(ZEXT816(0),auVar30,DAT_03cb54c0);
  fVar35 = auVar28._8_4_;
  fVar34 = (float)((ulong)auVar28._0_8_ >> 0x20);
  fVar26 = (float)uVar81 * (float)uVar27 - (float)uVar73 * (float)uVar90;
  fVar38 = fVar42 * (float)((ulong)uVar27 >> 0x20) - fVar38 * (float)((ulong)uVar90 >> 0x20);
  fVar42 = (float)uVar54 * (float)uVar44 - (float)uVar60 * (float)uVar93;
  fVar48 = fVar48 * (float)((ulong)uVar44 >> 0x20) - fVar67 * (float)((ulong)uVar93 >> 0x20);
  auVar14._0_4_ = fVar22 + fVar23;
  auVar14._4_4_ = fVar24 + fVar25;
  auVar14._8_4_ = fVar22 + fVar23;
  auVar14._12_4_ = fVar24 + fVar25;
  auVar45 = NEON_ext(auVar14,auVar14,4,1);
  auVar15._0_4_ = auVar45._0_4_ + auVar45._4_4_;
  auVar15._4_4_ = auVar45._8_4_ + auVar45._12_4_;
  auVar15._8_4_ = auVar45._0_4_ + auVar45._4_4_;
  auVar15._12_4_ = auVar45._8_4_ + auVar45._12_4_;
  fVar48 = fVar48 * fVar48;
  auVar16._0_4_ = fVar26 * fVar26 + fVar38 * fVar38;
  auVar16._4_4_ = fVar42 * fVar42 + fVar48;
  auVar16._8_4_ = fVar26 * fVar26 + fVar38 * fVar38;
  auVar16._12_4_ = fVar42 * fVar42 + fVar48;
  auVar45 = NEON_ext(auVar16,auVar16,4,1);
  auVar56._0_12_ = param_1._0_12_;
  auVar56._12_4_ = 0x3f800000;
  auVar17._0_4_ = auVar45._0_4_ + auVar45._4_4_;
  auVar17._4_4_ = auVar45._8_4_ + auVar45._12_4_;
  auVar17._8_4_ = auVar45._0_4_ + auVar45._4_4_;
  auVar17._12_4_ = auVar45._8_4_ + auVar45._12_4_;
  auVar45 = NEON_frsqrte(auVar17,4);
  auVar82 = NEON_fmov(0x3f800000,4);
  auVar62 = NEON_frsqrte(auVar15,4);
  auVar70._0_4_ = auVar17._0_4_ * auVar45._0_4_;
  auVar70._4_4_ = auVar17._4_4_ * auVar45._4_4_;
  auVar70._8_4_ = auVar17._8_4_ * auVar45._8_4_;
  auVar70._12_4_ = auVar17._12_4_ * auVar45._12_4_;
  auVar74._0_4_ = auVar15._0_4_ * auVar62._0_4_;
  auVar74._4_4_ = auVar15._4_4_ * auVar62._4_4_;
  auVar74._8_4_ = auVar15._8_4_ * auVar62._8_4_;
  auVar74._12_4_ = auVar15._12_4_ * auVar62._12_4_;
  auVar71 = NEON_frsqrts(auVar45,auVar70,4);
  auVar75 = NEON_frsqrts(auVar62,auVar74,4);
  auVar64._0_4_ = auVar45._0_4_ * auVar71._0_4_;
  auVar64._4_4_ = auVar45._4_4_ * auVar71._4_4_;
  auVar64._8_4_ = auVar45._8_4_ * auVar71._8_4_;
  auVar64._12_4_ = auVar45._12_4_ * auVar71._12_4_;
  auVar68._0_4_ = auVar62._0_4_ * auVar75._0_4_;
  auVar68._4_4_ = auVar62._4_4_ * auVar75._4_4_;
  auVar68._8_4_ = auVar62._8_4_ * auVar75._8_4_;
  auVar68._12_4_ = auVar62._12_4_ * auVar75._12_4_;
  auVar76._0_4_ = auVar17._0_4_ * auVar64._0_4_;
  auVar76._4_4_ = auVar17._4_4_ * auVar64._4_4_;
  auVar76._8_4_ = auVar17._8_4_ * auVar64._8_4_;
  auVar76._12_4_ = auVar17._12_4_ * auVar64._12_4_;
  iVar41 = -(uint)(auVar17._0_4_ == 0.0);
  iVar47 = -(uint)(auVar17._4_4_ == 0.0);
  iVar50 = -(uint)(auVar17._8_4_ == 0.0);
  auVar45 = NEON_frsqrts(auVar64,auVar76,4);
  auVar92._0_4_ = auVar15._0_4_ * auVar68._0_4_;
  auVar92._4_4_ = auVar15._4_4_ * auVar68._4_4_;
  auVar92._8_4_ = auVar15._8_4_ * auVar68._8_4_;
  auVar92._12_4_ = auVar15._12_4_ * auVar68._12_4_;
  iVar52 = -(uint)(auVar15._0_4_ == 0.0);
  iVar57 = -(uint)(auVar15._4_4_ == 0.0);
  iVar58 = -(uint)(auVar15._8_4_ == 0.0);
  iVar59 = -(uint)(auVar15._12_4_ == 0.0);
  auVar62 = NEON_frsqrts(auVar68,auVar92,4);
  fVar26 = fVar26 * auVar64._0_4_ * auVar45._0_4_;
  fVar38 = fVar38 * auVar64._4_4_ * auVar45._4_4_;
  fVar42 = fVar42 * auVar64._8_4_ * auVar45._8_4_;
  fVar48 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18),
                           CONCAT12((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10),
                                    CONCAT11((byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar41 >> 8),
                                             SUB41(fVar26,0) & ~(byte)iVar41)));
  auVar36._0_8_ =
       CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18),
                CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10),
                         CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar47 >> 8),
                                  CONCAT14(SUB41(fVar38,0) & ~(byte)iVar47,fVar48))));
  auVar36[8] = SUB41(fVar42,0) & ~(byte)iVar50;
  auVar36[9] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar50 >> 8);
  auVar36[10] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
  auVar36[0xb] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
  fVar42 = (float)((ulong)auVar36._0_8_ >> 0x20);
  fVar87 = auVar36._8_4_;
  fVar79 = auVar82._0_4_ + (float)_DAT_03cab3a0 * fVar33 + (float)_DAT_03cac210 +
           (float)_DAT_03cabb00 * fVar87;
  fVar84 = auVar82._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar33 +
           (float)((ulong)_DAT_03cac210 >> 0x20) + (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar87;
  fVar86 = auVar82._8_4_ + (float)_UNK_03cab3a8 * fVar33 + (float)_UNK_03cac218 +
           (float)_UNK_03cabb08 * fVar87;
  fVar88 = auVar82._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar33 +
           (float)((ulong)_UNK_03cac218 >> 0x20) + (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar87;
  fVar22 = auVar68._0_4_ * auVar62._0_4_ * fVar22;
  fVar23 = auVar68._4_4_ * auVar62._4_4_ * fVar23;
  fVar24 = auVar68._8_4_ * auVar62._8_4_ * fVar24;
  fVar25 = auVar68._12_4_ * auVar62._12_4_ * fVar25;
  auVar18._0_4_ = fVar48 * fVar48 + fVar42 * fVar42;
  auVar18._4_4_ = fVar87 * fVar87 + 0.0;
  auVar18._8_4_ = fVar48 * fVar48 + fVar42 * fVar42;
  auVar18._12_4_ = fVar87 * fVar87 + 0.0;
  fVar38 = (float)((uint)fVar79 ^ ((uint)fVar79 ^ (uint)fVar84) & -(uint)(fVar79 <= fVar84));
  fVar67 = (float)((uint)fVar79 ^ ((uint)fVar79 ^ (uint)fVar84) & -(uint)(fVar79 <= fVar84));
  fVar39 = (float)((uint)fVar79 ^ ((uint)fVar79 ^ (uint)fVar84) & -(uint)(fVar79 <= fVar84));
  fVar40 = (float)((uint)fVar79 ^ ((uint)fVar79 ^ (uint)fVar84) & -(uint)(fVar79 <= fVar84));
  auVar45 = NEON_ext(auVar18,auVar18,4,1);
  auVar19._0_4_ = auVar45._0_4_ + auVar45._4_4_;
  auVar19._4_4_ = auVar45._8_4_ + auVar45._12_4_;
  auVar19._8_4_ = auVar45._0_4_ + auVar45._4_4_;
  auVar19._12_4_ = auVar45._8_4_ + auVar45._12_4_;
  auVar45 = NEON_ext(auVar30,auVar30,8,1);
  auVar82 = NEON_fmov(0x40800000,4);
  auVar37._0_4_ =
       -(uint)((float)((uint)fVar38 ^ ((uint)fVar38 ^ (uint)fVar86) & -(uint)(fVar38 <= fVar86)) <=
              fVar88);
  auVar37._4_4_ =
       -(uint)((float)((uint)fVar67 ^ ((uint)fVar67 ^ (uint)fVar86) & -(uint)(fVar67 <= fVar86)) <=
              fVar88);
  auVar37._8_4_ =
       -(uint)((float)((uint)fVar39 ^ ((uint)fVar39 ^ (uint)fVar86) & -(uint)(fVar39 <= fVar86)) <=
              fVar88);
  auVar37._12_4_ =
       -(uint)((float)((uint)fVar40 ^ ((uint)fVar40 ^ (uint)fVar86) & -(uint)(fVar40 <= fVar86)) <=
              fVar88);
  auVar71 = NEON_frsqrte(auVar19,4);
  auVar20._0_4_ = fVar33 * fVar33 + fVar34 * fVar34;
  auVar20._4_4_ = fVar35 * fVar35 + 0.0;
  auVar20._8_4_ = fVar33 * fVar33 + fVar34 * fVar34;
  auVar20._12_4_ = fVar35 * fVar35 + 0.0;
  auVar62 = NEON_ext(auVar20,auVar20,4,1);
  auVar21._0_4_ = auVar62._0_4_ + auVar62._4_4_;
  auVar21._4_4_ = auVar62._8_4_ + auVar62._12_4_;
  auVar21._8_4_ = auVar62._0_4_ + auVar62._4_4_;
  auVar21._12_4_ = auVar62._8_4_ + auVar62._12_4_;
  auVar96._0_4_ = auVar19._0_4_ * auVar71._0_4_;
  auVar96._4_4_ = auVar19._4_4_ * auVar71._4_4_;
  auVar96._8_4_ = auVar19._8_4_ * auVar71._8_4_;
  auVar96._12_4_ = auVar19._12_4_ * auVar71._12_4_;
  auVar75 = NEON_frsqrte(auVar21,4);
  auVar62 = NEON_frsqrts(auVar71,auVar96,4);
  auVar100._0_4_ = auVar21._0_4_ * auVar75._0_4_;
  auVar100._4_4_ = auVar21._4_4_ * auVar75._4_4_;
  auVar100._8_4_ = auVar21._8_4_ * auVar75._8_4_;
  auVar100._12_4_ = auVar21._12_4_ * auVar75._12_4_;
  auVar83._0_4_ = auVar71._0_4_ * auVar62._0_4_;
  auVar83._4_4_ = auVar71._4_4_ * auVar62._4_4_;
  auVar83._8_4_ = auVar71._8_4_ * auVar62._8_4_;
  auVar83._12_4_ = auVar71._12_4_ * auVar62._12_4_;
  auVar99._0_4_ = SQRT(fVar79) * 0.5 * auVar82._0_4_;
  auVar99._4_4_ = SQRT(fVar84) * 0.5 * auVar82._4_4_;
  auVar99._8_4_ = SQRT(fVar86) * 0.5 * auVar82._8_4_;
  auVar99._12_4_ = SQRT(fVar88) * 0.5 * auVar82._12_4_;
  auVar71 = NEON_frsqrts(auVar75,auVar100,4);
  auVar62 = NEON_frecpe(auVar99,4);
  auVar98._0_4_ = auVar75._0_4_ * auVar71._0_4_;
  auVar98._4_4_ = auVar75._4_4_ * auVar71._4_4_;
  auVar98._8_4_ = auVar75._8_4_ * auVar71._8_4_;
  auVar98._12_4_ = auVar75._12_4_ * auVar71._12_4_;
  auVar101._0_4_ = auVar19._0_4_ * auVar83._0_4_;
  auVar101._4_4_ = auVar19._4_4_ * auVar83._4_4_;
  auVar101._8_4_ = auVar19._8_4_ * auVar83._8_4_;
  auVar101._12_4_ = auVar19._12_4_ * auVar83._12_4_;
  auVar71 = NEON_frsqrts(auVar83,auVar101,4);
  auVar75 = NEON_frecps(auVar62,auVar99,4);
  fVar80 = fVar48 * auVar83._0_4_ * auVar71._0_4_;
  fVar85 = fVar42 * auVar83._4_4_ * auVar71._4_4_;
  fVar87 = fVar87 * auVar83._8_4_ * auVar71._8_4_;
  fVar89 = auVar83._12_4_ * auVar71._12_4_ * 0.0;
  auVar97._0_4_ = auVar62._0_4_ * auVar75._0_4_;
  auVar97._4_4_ = auVar62._4_4_ * auVar75._4_4_;
  auVar97._8_4_ = auVar62._8_4_ * auVar75._8_4_;
  auVar97._12_4_ = auVar62._12_4_ * auVar75._12_4_;
  auVar62 = NEON_frecps(auVar97,auVar99,4);
  fVar26 = auVar45._0_4_ + fVar48;
  auVar6._8_4_ = -fVar42 + 0.0;
  auVar6._4_4_ = fVar26;
  fVar43 = auVar97._0_4_ * auVar62._0_4_;
  fVar49 = auVar97._4_4_ * auVar62._4_4_;
  fVar51 = auVar97._8_4_ * auVar62._8_4_;
  fVar53 = auVar97._12_4_ * auVar62._12_4_;
  auVar31._0_4_ = auVar21._0_4_ * auVar98._0_4_;
  auVar31._4_4_ = auVar21._4_4_ * auVar98._4_4_;
  auVar31._8_4_ = auVar21._8_4_ * auVar98._8_4_;
  auVar31._12_4_ = auVar21._12_4_ * auVar98._12_4_;
  iVar41 = -(uint)(auVar21._0_4_ == 0.0);
  iVar47 = -(uint)(auVar21._4_4_ == 0.0);
  iVar50 = -(uint)(auVar21._8_4_ == 0.0);
  iVar72 = -(uint)(auVar21._12_4_ == 0.0);
  auVar62 = NEON_frsqrts(auVar98,auVar31,4);
  auVar69._0_4_ = (0.0 - fVar42) * fVar53;
  auVar69._4_4_ = (fVar48 - fVar35) * fVar53;
  auVar69._8_4_ = fVar34 * fVar53;
  auVar6._0_4_ = (fVar34 + 0.0) * fVar43;
  auVar65._0_8_ = auVar6._0_8_ << 0x20;
  auVar65._8_4_ = fVar26 * fVar43;
  auVar65._12_4_ = (-fVar42 + 0.0) * fVar43;
  auVar69._12_4_ = SQRT(fVar88) * 0.5;
  auVar77._0_4_ = (fVar34 + 0.0) * fVar49;
  auVar77._4_4_ = fVar49 * 0.0;
  auVar77._8_4_ = (fVar42 + 0.0) * fVar49;
  auVar77._12_4_ = (fVar48 + -fVar35) * fVar49;
  auVar46._0_4_ = (auVar45._0_4_ + fVar48) * fVar51;
  auVar46._4_4_ = (fVar42 + 0.0) * fVar51;
  auVar46._12_4_ = fVar34 * fVar51;
  auVar78._8_8_ = auVar77._8_8_;
  auVar78._4_4_ = SQRT(fVar84) * 0.5;
  auVar78._0_4_ = auVar77._0_4_;
  fVar33 = fVar33 * auVar98._0_4_ * auVar62._0_4_;
  fVar34 = fVar34 * auVar98._4_4_ * auVar62._4_4_;
  fVar35 = fVar35 * auVar98._8_4_ * auVar62._8_4_;
  fVar26 = auVar98._12_4_ * auVar62._12_4_ * 0.0;
  auVar32._0_8_ =
       CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18),
                CONCAT16((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10),
                         CONCAT15((byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar47 >> 8),
                                  CONCAT14(SUB41(fVar34,0) & ~(byte)iVar47,
                                           CONCAT13((byte)((uint)fVar33 >> 0x18) &
                                                    ~(byte)((uint)iVar41 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar33 >> 0x10) &
                                                             ~(byte)((uint)iVar41 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar33 >> 8) &
                                                                      ~(byte)((uint)iVar41 >> 8),
                                                                      SUB41(fVar33,0) &
                                                                      ~(byte)iVar41)))))));
  auVar32[8] = SUB41(fVar35,0) & ~(byte)iVar50;
  auVar32[9] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar50 >> 8);
  auVar32[10] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
  auVar32[0xb] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
  auVar32[0xc] = SUB41(fVar26,0) & ~(byte)iVar72;
  auVar32[0xd] = (byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar72 >> 8);
  auVar32[0xe] = (byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10);
  auVar32[0xf] = (byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18);
  auVar66._4_12_ = auVar65._4_12_;
  auVar66._0_4_ = SQRT(fVar79) * 0.5;
  param_3[1] = auVar32._8_8_;
  *param_3 = auVar32._0_8_;
  *(byte *)(param_3 + 3) = SUB41(fVar24,0) & ~(byte)iVar58;
  *(byte *)((long)param_3 + 0x19) = (byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar58 >> 8);
  *(byte *)((long)param_3 + 0x1a) = (byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
  *(byte *)((long)param_3 + 0x1b) = (byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
  *(byte *)((long)param_3 + 0x1c) = SUB41(fVar25,0) & ~(byte)iVar59;
  *(byte *)((long)param_3 + 0x1d) = (byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar59 >> 8);
  *(byte *)((long)param_3 + 0x1e) = (byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
  *(byte *)((long)param_3 + 0x1f) = (byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
  *(byte *)(param_3 + 2) = SUB41(fVar22,0) & ~(byte)iVar52;
  *(byte *)((long)param_3 + 0x11) = (byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar52 >> 8);
  *(byte *)((long)param_3 + 0x12) = (byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
  *(byte *)((long)param_3 + 0x13) = (byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
  *(byte *)((long)param_3 + 0x14) = SUB41(fVar23,0) & ~(byte)iVar57;
  *(byte *)((long)param_3 + 0x15) = (byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar57 >> 8);
  *(byte *)((long)param_3 + 0x16) = (byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
  *(byte *)((long)param_3 + 0x17) = (byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
  iVar41 = -(uint)(auVar19._0_4_ == 0.0);
  iVar47 = -(uint)(auVar19._4_4_ == 0.0);
  iVar50 = -(uint)(auVar19._8_4_ == 0.0);
  iVar52 = -(uint)(auVar19._12_4_ == 0.0);
  auVar46._8_4_ = SQRT(fVar86) * 0.5;
  auVar45._4_4_ = -(uint)(fVar79 <= fVar84);
  auVar45._0_4_ = -(uint)(fVar79 <= fVar84);
  auVar45._8_4_ = -(uint)(fVar79 <= fVar84);
  auVar45._12_4_ = -(uint)(fVar79 <= fVar84);
  auVar5._4_4_ = -(uint)(fVar67 <= fVar86);
  auVar5._0_4_ = -(uint)(fVar38 <= fVar86);
  auVar5._8_4_ = -(uint)(fVar39 <= fVar86);
  auVar5._12_4_ = -(uint)(fVar40 <= fVar86);
  auVar46 = auVar46 ^ (auVar46 ^ auVar66 ^ (auVar66 ^ auVar78) & auVar45) & ~auVar5;
  *(byte *)(param_3 + 5) = SUB41(fVar87,0) & ~(byte)iVar50;
  *(byte *)((long)param_3 + 0x29) = (byte)((uint)fVar87 >> 8) & ~(byte)((uint)iVar50 >> 8);
  *(byte *)((long)param_3 + 0x2a) = (byte)((uint)fVar87 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
  *(byte *)((long)param_3 + 0x2b) = (byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
  *(byte *)((long)param_3 + 0x2c) = SUB41(fVar89,0) & ~(byte)iVar52;
  *(byte *)((long)param_3 + 0x2d) = (byte)((uint)fVar89 >> 8) & ~(byte)((uint)iVar52 >> 8);
  *(byte *)((long)param_3 + 0x2e) = (byte)((uint)fVar89 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
  *(byte *)((long)param_3 + 0x2f) = (byte)((uint)fVar89 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
  *(byte *)(param_3 + 4) = SUB41(fVar80,0) & ~(byte)iVar41;
  *(byte *)((long)param_3 + 0x21) = (byte)((uint)fVar80 >> 8) & ~(byte)((uint)iVar41 >> 8);
  *(byte *)((long)param_3 + 0x22) = (byte)((uint)fVar80 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
  *(byte *)((long)param_3 + 0x23) = (byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
  *(byte *)((long)param_3 + 0x24) = SUB41(fVar85,0) & ~(byte)iVar47;
  *(byte *)((long)param_3 + 0x25) = (byte)((uint)fVar85 >> 8) & ~(byte)((uint)iVar47 >> 8);
  *(byte *)((long)param_3 + 0x26) = (byte)((uint)fVar85 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10);
  *(byte *)((long)param_3 + 0x27) = (byte)((uint)fVar85 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18);
  param_3[7] = auVar56._8_8_;
  param_3[6] = param_1._0_8_;
  lVar7 = *(long *)(param_4 + 0x70);
  auVar46 = auVar46 ^ (auVar46 ^ auVar69) & auVar37;
  if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) {
LAB_00d70b48:
    FUN_00d6d590(&local_38,param_4);
    if (local_38 != (long *)0x0) {
      *(undefined4 *)(local_38 + 0xf) = 0x101;
      lVar7 = local_38[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      local_38[0x11] = param_1._8_8_;
      local_38[0x10] = param_1._0_8_;
      local_38[0x13] = auVar46._8_8_;
      local_38[0x12] = auVar46._0_8_;
      do {
        sVar8 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar8 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_38 + 0x50))();
      }
      else if (sVar8 == 0) {
LAB_00d70c68:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    *(undefined2 *)((long)param_3 + 0x135) = 0x101;
    return;
  }
  psVar1 = (short *)(lVar7 + 0x1a);
  sVar8 = *(short *)(lVar7 + 0x1a);
LAB_00d70bd8:
  sVar2 = *psVar1;
  if (sVar2 == sVar8) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_00d70c00;
    bVar4 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00d70c00:
    bVar4 = false;
  }
  if (!bVar4) goto code_r0x00d70c08;
  lVar7 = *(long *)(lVar7 + 0x10);
  if (lVar7 != 0) {
    plVar9 = (long *)(lVar7 + -0x28);
    FUN_01e21a0c(param_1,plVar9);
    FUN_01413048(auVar46,plVar9);
    lVar7 = *(long *)(lVar7 + 0x70);
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar8 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar8 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))(plVar9);
    }
    else if (sVar8 == 0) goto LAB_00d70c68;
  }
  goto LAB_00d70b48;
code_r0x00d70c08:
  sVar8 = sVar2;
  if (sVar2 == 0) goto LAB_00d70b48;
  goto LAB_00d70bd8;
}


