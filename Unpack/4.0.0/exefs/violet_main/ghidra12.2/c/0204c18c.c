/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0204c18c; name: FUN_0204c18c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0204c18c(undefined1 param_1 [16],long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  long lVar19;
  short sVar20;
  long *plVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar28 [12];
  float fVar31;
  float fVar33;
  float fVar34;
  undefined1 auVar29 [16];
  float fVar32;
  undefined1 auVar30 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  int iVar43;
  int iVar45;
  undefined8 uVar44;
  int iVar46;
  int iVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 uVar55;
  undefined1 auVar56 [16];
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  float fVar73;
  undefined8 uVar74;
  float fVar75;
  float fVar76;
  undefined8 uVar77;
  float fVar81;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar82;
  float fVar83;
  undefined8 uVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  
  fVar34 = param_1._12_4_;
  fVar33 = param_1._8_4_;
  fVar31 = param_1._4_4_;
  fVar26 = param_1._0_4_;
  lVar19 = *(long *)(param_2 + 0x48);
  if ((lVar19 != 0) && (*(short *)(lVar19 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar19 + 0x1a);
    sVar20 = *(short *)(lVar19 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar20) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0204c1e0;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0204c1e0:
        bVar4 = false;
      }
      if (bVar4) {
        lVar19 = *(long *)(lVar19 + 0x10);
        if (lVar19 == 0) {
          return;
        }
        auVar22._0_4_ = fVar26 * fVar26 + fVar31 * fVar31;
        auVar22._4_4_ = fVar33 * fVar33 + fVar34 * fVar34;
        auVar22._8_4_ = fVar26 * fVar26 + fVar31 * fVar31;
        auVar22._12_4_ = fVar33 * fVar33 + fVar34 * fVar34;
        auVar35 = NEON_ext(auVar22,auVar22,4,1);
        auVar23._0_4_ = auVar35._0_4_ + auVar35._4_4_;
        auVar23._4_4_ = auVar35._8_4_ + auVar35._12_4_;
        auVar23._8_4_ = auVar35._0_4_ + auVar35._4_4_;
        auVar23._12_4_ = auVar35._8_4_ + auVar35._12_4_;
        auVar35 = NEON_frsqrte(auVar23,4);
        auVar50._0_4_ = auVar23._0_4_ * auVar35._0_4_;
        auVar50._4_4_ = auVar23._4_4_ * auVar35._4_4_;
        auVar50._8_4_ = auVar23._8_4_ * auVar35._8_4_;
        auVar50._12_4_ = auVar23._12_4_ * auVar35._12_4_;
        uVar48 = (undefined4)_UNK_03cabe68;
        uVar49 = (undefined4)((ulong)_UNK_03cabe68 >> 0x20);
        auVar51 = NEON_frsqrts(auVar35,auVar50,4);
        auVar53._0_4_ = auVar35._0_4_ * auVar51._0_4_;
        auVar53._4_4_ = auVar35._4_4_ * auVar51._4_4_;
        auVar53._8_4_ = auVar35._8_4_ * auVar51._8_4_;
        auVar53._12_4_ = auVar35._12_4_ * auVar51._12_4_;
        auVar56._0_4_ = auVar23._0_4_ * auVar53._0_4_;
        auVar56._4_4_ = auVar23._4_4_ * auVar53._4_4_;
        auVar56._8_4_ = auVar23._8_4_ * auVar53._8_4_;
        auVar56._12_4_ = auVar23._12_4_ * auVar53._12_4_;
        iVar43 = -(uint)(auVar23._0_4_ == 0.0);
        iVar45 = -(uint)(auVar23._4_4_ == 0.0);
        iVar46 = -(uint)(auVar23._8_4_ == 0.0);
        iVar47 = -(uint)(auVar23._12_4_ == 0.0);
        auVar35 = NEON_frsqrts(auVar53,auVar56,4);
        fVar26 = fVar26 * auVar53._0_4_ * auVar35._0_4_;
        fVar31 = fVar31 * auVar53._4_4_ * auVar35._4_4_;
        fVar33 = fVar33 * auVar53._8_4_ * auVar35._8_4_;
        fVar34 = fVar34 * auVar53._12_4_ * auVar35._12_4_;
        fVar27 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                                 CONCAT12((byte)((uint)fVar26 >> 0x10) &
                                          ~(byte)((uint)iVar43 >> 0x10),
                                          CONCAT11((byte)((uint)fVar26 >> 8) &
                                                   ~(byte)((uint)iVar43 >> 8),
                                                   SUB41(fVar26,0) & ~(byte)iVar43)));
        auVar28._0_8_ =
             CONCAT17((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18),
                      CONCAT16((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10),
                               CONCAT15((byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar45 >> 8),
                                        CONCAT14(SUB41(fVar31,0) & ~(byte)iVar45,fVar27))));
        auVar28[8] = SUB41(fVar33,0) & ~(byte)iVar46;
        auVar28[9] = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar46 >> 8);
        auVar28[10] = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
        auVar28[0xb] = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
        auVar29[0xc] = SUB41(fVar34,0) & ~(byte)iVar47;
        auVar29._0_12_ = auVar28;
        auVar29[0xd] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar47 >> 8);
        auVar29[0xe] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10);
        auVar29[0xf] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18);
        auVar35._8_4_ = uVar48;
        auVar35._0_8_ = _DAT_03cabe60;
        auVar35._12_4_ = uVar49;
        uVar38 = a64_TBL(ZEXT816(0),auVar35,DAT_03cb56c8);
        auVar51._8_4_ = uVar48;
        auVar51._0_8_ = _DAT_03cabe60;
        auVar51._12_4_ = uVar49;
        uVar74 = a64_TBL(ZEXT816(0),auVar51,DAT_03cb54d8);
        auVar89._8_4_ = uVar48;
        auVar89._0_8_ = _DAT_03cabe60;
        auVar89._12_4_ = uVar49;
        uVar77 = a64_TBL(ZEXT816(0),auVar89,DAT_03cb5488);
        auVar5._8_4_ = uVar48;
        auVar5._0_8_ = _DAT_03cabe60;
        auVar5._12_4_ = uVar49;
        uVar84 = a64_TBL(ZEXT816(0),auVar5,DAT_03cb54c0);
        uVar7 = a64_TBL(ZEXT816(0),auVar29,DAT_03cb54d8);
        uVar52 = a64_TBL(ZEXT816(0),auVar29,DAT_03cb5488);
        uVar44 = a64_TBL(ZEXT816(0),auVar29,DAT_03cb54c0);
        uVar55 = a64_TBL(ZEXT816(0),auVar29,DAT_03cb56c8);
        fVar39 = (float)((ulong)uVar52 >> 0x20);
        fVar73 = (float)((ulong)uVar55 >> 0x20);
        fVar32 = (float)((ulong)auVar28._0_8_ >> 0x20);
        fVar33 = (float)uVar74 * (float)uVar44 - (float)uVar84 * (float)uVar7;
        fVar34 = (float)((ulong)uVar74 >> 0x20) * (float)((ulong)uVar44 >> 0x20) -
                 (float)((ulong)uVar84 >> 0x20) * (float)((ulong)uVar7 >> 0x20);
        fVar26 = (float)uVar38 * (float)uVar52 - (float)uVar77 * (float)uVar55;
        fVar31 = (float)((ulong)uVar38 >> 0x20) * fVar39 - (float)((ulong)uVar77 >> 0x20) * fVar73;
        auVar24._0_4_ = fVar26 * fVar26 + fVar31 * fVar31;
        auVar24._4_4_ = fVar33 * fVar33 + fVar34 * fVar34;
        auVar24._8_4_ = fVar26 * fVar26 + fVar31 * fVar31;
        auVar24._12_4_ = fVar33 * fVar33 + fVar34 * fVar34;
        auVar35 = NEON_ext(auVar24,auVar24,4,1);
        auVar25._0_4_ = auVar35._0_4_ + auVar35._4_4_;
        auVar25._4_4_ = auVar35._8_4_ + auVar35._12_4_;
        auVar25._8_4_ = auVar35._0_4_ + auVar35._4_4_;
        auVar25._12_4_ = auVar35._8_4_ + auVar35._12_4_;
        auVar35 = NEON_frsqrte(auVar25,4);
        plVar21 = (long *)(lVar19 + -0x28);
        auVar85._0_4_ = auVar25._0_4_ * auVar35._0_4_;
        auVar85._4_4_ = auVar25._4_4_ * auVar35._4_4_;
        auVar85._8_4_ = auVar25._8_4_ * auVar35._8_4_;
        auVar85._12_4_ = auVar25._12_4_ * auVar35._12_4_;
        auVar51 = NEON_frsqrts(auVar35,auVar85,4);
        auVar78._0_4_ = auVar35._0_4_ * auVar51._0_4_;
        auVar78._4_4_ = auVar35._4_4_ * auVar51._4_4_;
        auVar78._8_4_ = auVar35._8_4_ * auVar51._8_4_;
        auVar78._12_4_ = auVar35._12_4_ * auVar51._12_4_;
        auVar86._0_4_ = auVar25._0_4_ * auVar78._0_4_;
        auVar86._4_4_ = auVar25._4_4_ * auVar78._4_4_;
        auVar86._8_4_ = auVar25._8_4_ * auVar78._8_4_;
        auVar86._12_4_ = auVar25._12_4_ * auVar78._12_4_;
        iVar43 = -(uint)(auVar25._0_4_ == 0.0);
        iVar45 = -(uint)(auVar25._4_4_ == 0.0);
        iVar46 = -(uint)(auVar25._8_4_ == 0.0);
        iVar47 = -(uint)(auVar25._12_4_ == 0.0);
        auVar35 = NEON_frsqrts(auVar78,auVar86,4);
        fVar26 = fVar26 * auVar78._0_4_ * auVar35._0_4_;
        fVar31 = fVar31 * auVar78._4_4_ * auVar35._4_4_;
        fVar33 = fVar33 * auVar78._8_4_ * auVar35._8_4_;
        fVar34 = fVar34 * auVar78._12_4_ * auVar35._12_4_;
        bVar57 = SUB41(fVar26,0) & ~(byte)iVar43;
        bVar58 = (byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar43 >> 8);
        bVar59 = (byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10);
        bVar60 = (byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18);
        bVar61 = SUB41(fVar31,0) & ~(byte)iVar45;
        bVar62 = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar45 >> 8);
        bVar63 = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
        bVar64 = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
        bVar65 = SUB41(fVar33,0) & ~(byte)iVar46;
        bVar66 = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar46 >> 8);
        bVar67 = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
        bVar68 = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
        bVar69 = SUB41(fVar34,0) & ~(byte)iVar47;
        bVar70 = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar47 >> 8);
        bVar71 = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10);
        bVar72 = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18);
        auVar35 = NEON_fmov(0x3f800000,4);
        auVar8[1] = bVar58;
        auVar8[0] = bVar57;
        auVar8[2] = bVar59;
        auVar8[3] = bVar60;
        auVar8[4] = bVar61;
        auVar8[5] = bVar62;
        auVar8[6] = bVar63;
        auVar8[7] = bVar64;
        auVar8[8] = bVar65;
        auVar8[9] = bVar66;
        auVar8[10] = bVar67;
        auVar8[0xb] = bVar68;
        auVar8[0xc] = bVar69;
        auVar8[0xd] = bVar70;
        auVar8[0xe] = bVar71;
        auVar8[0xf] = bVar72;
        uVar74 = a64_TBL(ZEXT816(0),auVar8,DAT_03cb5488);
        auVar9[1] = bVar58;
        auVar9[0] = bVar57;
        auVar9[2] = bVar59;
        auVar9[3] = bVar60;
        auVar9[4] = bVar61;
        auVar9[5] = bVar62;
        auVar9[6] = bVar63;
        auVar9[7] = bVar64;
        auVar9[8] = bVar65;
        auVar9[9] = bVar66;
        auVar9[10] = bVar67;
        auVar9[0xb] = bVar68;
        auVar9[0xc] = bVar69;
        auVar9[0xd] = bVar70;
        auVar9[0xe] = bVar71;
        auVar9[0xf] = bVar72;
        uVar38 = a64_TBL(ZEXT816(0),auVar9,DAT_03cb56c8);
        fVar26 = (float)CONCAT13(bVar60,CONCAT12(bVar59,CONCAT11(bVar58,bVar57)));
        fVar31 = (float)CONCAT13(bVar64,CONCAT12(bVar63,CONCAT11(bVar62,bVar61)));
        fVar37 = (float)uVar55 * (float)uVar74 - (float)uVar52 * (float)uVar38;
        fVar39 = fVar73 * (float)((ulong)uVar74 >> 0x20) - fVar39 * (float)((ulong)uVar38 >> 0x20);
        auVar10[1] = bVar58;
        auVar10[0] = bVar57;
        auVar10[2] = bVar59;
        auVar10[3] = bVar60;
        auVar10[4] = bVar61;
        auVar10[5] = bVar62;
        auVar10[6] = bVar63;
        auVar10[7] = bVar64;
        auVar10[8] = bVar65;
        auVar10[9] = bVar66;
        auVar10[10] = bVar67;
        auVar10[0xb] = bVar68;
        auVar10[0xc] = bVar69;
        auVar10[0xd] = bVar70;
        auVar10[0xe] = bVar71;
        auVar10[0xf] = bVar72;
        uVar74 = a64_TBL(ZEXT816(0),auVar10,DAT_03cb54c0);
        auVar11[1] = bVar58;
        auVar11[0] = bVar57;
        auVar11[2] = bVar59;
        auVar11[3] = bVar60;
        auVar11[4] = bVar61;
        auVar11[5] = bVar62;
        auVar11[6] = bVar63;
        auVar11[7] = bVar64;
        auVar11[8] = bVar65;
        auVar11[9] = bVar66;
        auVar11[10] = bVar67;
        auVar11[0xb] = bVar68;
        auVar11[0xc] = bVar69;
        auVar11[0xd] = bVar70;
        auVar11[0xe] = bVar71;
        auVar11[0xf] = bVar72;
        uVar38 = a64_TBL(ZEXT816(0),auVar11,DAT_03cb54d8);
        fVar34 = (float)uVar7 * (float)uVar74 - (float)uVar44 * (float)uVar38;
        fVar33 = auVar28._8_4_;
        fVar73 = auVar35._0_4_ + (float)_DAT_03cab3a0 * fVar26 + (float)_DAT_03cac210 * fVar39 +
                 (float)_DAT_03cabb00 * fVar33;
        fVar75 = auVar35._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar26 +
                 (float)((ulong)_DAT_03cac210 >> 0x20) * fVar39 +
                 (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar33;
        fVar76 = auVar35._8_4_ + (float)_UNK_03cab3a8 * fVar26 + (float)_UNK_03cac218 * fVar39 +
                 (float)_UNK_03cabb08 * fVar33;
        fVar26 = auVar35._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar26 +
                 (float)((ulong)_UNK_03cac218 >> 0x20) * fVar39 +
                 (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar33;
        auVar12[1] = bVar58;
        auVar12[0] = bVar57;
        auVar12[2] = bVar59;
        auVar12[3] = bVar60;
        auVar12[4] = bVar61;
        auVar12[5] = bVar62;
        auVar12[6] = bVar63;
        auVar12[7] = bVar64;
        auVar12[8] = bVar65;
        auVar12[9] = bVar66;
        auVar12[10] = bVar67;
        auVar12[0xb] = bVar68;
        auVar12[0xc] = bVar69;
        auVar12[0xd] = bVar70;
        auVar12[0xe] = bVar71;
        auVar12[0xf] = bVar72;
        auVar13[1] = bVar58;
        auVar13[0] = bVar57;
        auVar13[2] = bVar59;
        auVar13[3] = bVar60;
        auVar13[4] = bVar61;
        auVar13[5] = bVar62;
        auVar13[6] = bVar63;
        auVar13[7] = bVar64;
        auVar13[8] = bVar65;
        auVar13[9] = bVar66;
        auVar13[10] = bVar67;
        auVar13[0xb] = bVar68;
        auVar13[0xc] = bVar69;
        auVar13[0xd] = bVar70;
        auVar13[0xe] = bVar71;
        auVar13[0xf] = bVar72;
        auVar35 = NEON_ext(auVar12,auVar13,8,1);
        fVar83 = fVar27 + auVar35._0_4_;
        auVar18._8_4_ = -fVar32 + fVar34;
        auVar18._4_4_ = fVar83;
        auVar79._4_4_ = fVar75;
        auVar79._0_4_ = fVar75;
        auVar79._8_4_ = fVar75;
        auVar79._12_4_ = fVar75;
        auVar54._4_4_ = fVar73;
        auVar54._0_4_ = fVar73;
        auVar54._8_4_ = fVar73;
        auVar54._12_4_ = fVar73;
        auVar14._4_4_ = -(uint)(fVar73 <= fVar75);
        auVar14._0_4_ = -(uint)(fVar73 <= fVar75);
        auVar14._8_4_ = -(uint)(fVar73 <= fVar75);
        auVar14._12_4_ = -(uint)(fVar73 <= fVar75);
        auVar54 = auVar54 ^ (auVar54 ^ auVar79) & auVar14;
        auVar51 = NEON_fmov(0x40800000,4);
        auVar87._4_4_ = fVar76;
        auVar87._0_4_ = fVar76;
        auVar87._8_4_ = fVar76;
        auVar87._12_4_ = fVar76;
        iVar43 = -(uint)(auVar54._0_4_ <= fVar76);
        iVar45 = -(uint)(auVar54._4_4_ <= fVar76);
        iVar46 = -(uint)(auVar54._8_4_ <= fVar76);
        iVar47 = -(uint)(auVar54._12_4_ <= fVar76);
        auVar80._0_4_ = SQRT(fVar73) * 0.5 * auVar51._0_4_;
        auVar80._4_4_ = SQRT(fVar75) * 0.5 * auVar51._4_4_;
        auVar80._8_4_ = SQRT(fVar76) * 0.5 * auVar51._8_4_;
        auVar80._12_4_ = SQRT(fVar26) * 0.5 * auVar51._12_4_;
        auVar16._4_4_ = iVar45;
        auVar16._0_4_ = iVar43;
        auVar16._8_4_ = iVar46;
        auVar16._12_4_ = iVar47;
        auVar54 = auVar54 ^ (auVar54 ^ auVar87) & auVar16;
        auVar89 = NEON_frecpe(auVar80,4);
        auVar51 = NEON_frecps(auVar89,auVar80,4);
        auVar88._0_4_ = auVar89._0_4_ * auVar51._0_4_;
        auVar88._4_4_ = auVar89._4_4_ * auVar51._4_4_;
        auVar88._8_4_ = auVar89._8_4_ * auVar51._8_4_;
        auVar88._12_4_ = auVar89._12_4_ * auVar51._12_4_;
        auVar51 = NEON_frecps(auVar88,auVar80,4);
        fVar33 = auVar88._0_4_ * auVar51._0_4_;
        fVar39 = auVar88._4_4_ * auVar51._4_4_;
        fVar81 = auVar88._8_4_ * auVar51._8_4_;
        fVar82 = auVar88._12_4_ * auVar51._12_4_;
        auVar18._0_4_ =
             ((float)CONCAT13(bVar64,CONCAT12(bVar63,CONCAT11(bVar62,bVar61))) + fVar37) * fVar33;
        auVar40._0_8_ = auVar18._0_8_ << 0x20;
        auVar40._8_4_ = fVar83 * fVar33;
        auVar40._12_4_ = (-fVar32 + fVar34) * fVar33;
        auVar30._0_4_ = (fVar27 + auVar35._0_4_) * fVar81;
        auVar30._4_4_ = (fVar32 + fVar34) * fVar81;
        auVar30._12_4_ =
             ((float)CONCAT13(bVar64,CONCAT12(bVar63,CONCAT11(bVar62,bVar61))) - fVar37) * fVar81;
        auVar41._4_12_ = auVar40._4_12_;
        auVar41._0_4_ = SQRT(fVar73) * 0.5;
        auVar30._8_4_ = SQRT(fVar76) * 0.5;
        auVar36._0_4_ = (fVar34 - fVar32) * fVar82;
        auVar36._4_4_ =
             (fVar27 - (float)CONCAT13(bVar68,CONCAT12(bVar67,CONCAT11(bVar66,bVar65)))) * fVar82;
        auVar36._8_4_ = (fVar31 - fVar37) * fVar82;
        auVar6._4_4_ = SQRT(fVar75) * 0.5;
        auVar6._0_4_ = (fVar31 + fVar37) * fVar39;
        auVar6._8_4_ = (fVar32 + fVar34) * fVar39;
        auVar6._12_4_ =
             (-(float)CONCAT13(bVar68,CONCAT12(bVar67,CONCAT11(bVar66,bVar65))) + fVar27) * fVar39;
        auVar15._4_4_ = -(uint)(fVar73 <= fVar75);
        auVar15._0_4_ = -(uint)(fVar73 <= fVar75);
        auVar15._8_4_ = -(uint)(fVar73 <= fVar75);
        auVar15._12_4_ = -(uint)(fVar73 <= fVar75);
        auVar36._12_4_ = SQRT(fVar26) * 0.5;
        auVar17._4_4_ = iVar45;
        auVar17._0_4_ = iVar43;
        auVar17._8_4_ = iVar46;
        auVar17._12_4_ = iVar47;
        auVar30 = auVar30 ^ (auVar30 ^ auVar41 ^ (auVar41 ^ auVar6) & auVar15) & ~auVar17;
        auVar42._0_4_ = -(uint)(auVar54._0_4_ <= fVar26);
        auVar42._4_4_ = -(uint)(auVar54._4_4_ <= fVar26);
        auVar42._8_4_ = -(uint)(auVar54._8_4_ <= fVar26);
        auVar42._12_4_ = -(uint)(auVar54._12_4_ <= fVar26);
        auVar30 = auVar30 ^ (auVar30 ^ auVar36) & auVar42;
        *(long *)(lVar19 + 0xb0) = auVar30._8_8_;
        *(long *)(lVar19 + 0xa8) = auVar30._0_8_;
        if (*(char *)(lVar19 + 0xcc) == '\0') {
          *(undefined1 *)(lVar19 + 0xcc) = 1;
          (**(code **)(*plVar21 + 0x78))(plVar21);
        }
        lVar19 = *(long *)(lVar19 + 8);
        psVar1 = (short *)(lVar19 + 0x1a);
        do {
          sVar20 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar20 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar20 == 1) {
          *(undefined8 *)(lVar19 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0204c4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar21 + 0x50))(plVar21);
          return;
        }
        if (sVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar20 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


