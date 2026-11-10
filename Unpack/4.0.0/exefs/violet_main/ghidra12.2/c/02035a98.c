/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02035a98; name: FUN_02035a98
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_02035a98(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  undefined2 uVar6;
  undefined3 uVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [12];
  float *pfVar11;
  long lVar12;
  short sVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  float fVar45;
  undefined8 uVar46;
  undefined1 auVar47 [12];
  float fVar51;
  float fVar53;
  float fVar54;
  undefined1 auVar48 [16];
  float fVar52;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar55;
  float fVar56;
  undefined6 uVar57;
  byte bVar63;
  float fVar60;
  byte bVar64;
  float fVar65;
  undefined1 auVar58 [12];
  float fVar61;
  float fVar62;
  float fVar66;
  undefined1 auVar59 [16];
  int iVar67;
  int iVar69;
  int iVar70;
  float fVar71;
  undefined1 auVar68 [16];
  undefined1 auVar72 [16];
  int iVar73;
  int iVar77;
  int iVar78;
  int iVar79;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  int iVar82;
  int iVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  
  auVar22._8_8_ = _UNK_03cabe58;
  auVar22._0_8_ = _DAT_03cabe50;
  lVar12 = *(long *)(param_1 + 0x48);
  if ((lVar12 != 0) && (*(short *)(lVar12 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar12 + 0x1a);
    sVar13 = *(short *)(lVar12 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar13) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02035afc;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02035afc:
        bVar4 = false;
      }
      if (bVar4) {
        lVar12 = *(long *)(lVar12 + 0x10);
        if (lVar12 == 0) {
          return auVar22;
        }
        plVar14 = (long *)(lVar12 + -0x28);
        pfVar11 = (float *)(**(code **)(*(long *)(lVar12 + -0x28) + 0x68))(auVar22,plVar14);
        fVar45 = *pfVar11;
        fVar51 = pfVar11[1];
        fVar53 = pfVar11[2];
        fVar54 = pfVar11[3];
        fVar5 = (float)*(undefined8 *)(pfVar11 + 4);
        fVar66 = (float)((ulong)*(undefined8 *)(pfVar11 + 4) >> 0x20);
        fVar20 = (float)*(undefined8 *)(pfVar11 + 6);
        fVar21 = (float)((ulong)*(undefined8 *)(pfVar11 + 6) >> 0x20);
        fVar55 = pfVar11[8];
        fVar60 = pfVar11[9];
        fVar65 = pfVar11[10];
        fVar71 = pfVar11[0xb] * pfVar11[0xb];
        auVar92._0_4_ = fVar5 * fVar5 + fVar66 * fVar66;
        auVar92._4_4_ = fVar20 * fVar20 + fVar21 * fVar21;
        auVar92._8_4_ = fVar5 * fVar5 + fVar66 * fVar66;
        auVar92._12_4_ = fVar20 * fVar20 + fVar21 * fVar21;
        auVar15._0_4_ = fVar55 * fVar55 + fVar60 * fVar60;
        auVar15._4_4_ = fVar65 * fVar65 + fVar71;
        auVar15._8_4_ = fVar55 * fVar55 + fVar60 * fVar60;
        auVar15._12_4_ = fVar65 * fVar65 + fVar71;
        auVar16._0_4_ = fVar45 * fVar45 + fVar51 * fVar51;
        auVar16._4_4_ = fVar53 * fVar53 + fVar54 * fVar54;
        auVar16._8_4_ = fVar45 * fVar45 + fVar51 * fVar51;
        auVar16._12_4_ = fVar53 * fVar53 + fVar54 * fVar54;
        auVar25 = NEON_ext(auVar92,auVar92,4,1);
        auVar68 = NEON_ext(auVar15,auVar15,4,1);
        auVar22 = NEON_ext(auVar16,auVar16,4,1);
        auVar17._0_4_ = auVar25._0_4_ + auVar25._4_4_;
        auVar17._4_4_ = auVar25._8_4_ + auVar25._12_4_;
        auVar17._8_4_ = auVar25._0_4_ + auVar25._4_4_;
        auVar17._12_4_ = auVar25._8_4_ + auVar25._12_4_;
        auVar18._0_4_ = auVar68._0_4_ + auVar68._4_4_;
        auVar18._4_4_ = auVar68._8_4_ + auVar68._12_4_;
        auVar18._8_4_ = auVar68._0_4_ + auVar68._4_4_;
        auVar18._12_4_ = auVar68._8_4_ + auVar68._12_4_;
        auVar19._0_4_ = auVar22._0_4_ + auVar22._4_4_;
        auVar19._4_4_ = auVar22._8_4_ + auVar22._12_4_;
        auVar19._8_4_ = auVar22._0_4_ + auVar22._4_4_;
        auVar19._12_4_ = auVar22._8_4_ + auVar22._12_4_;
        auVar25 = NEON_frsqrte(auVar17,4);
        auVar68 = NEON_frsqrte(auVar18,4);
        iVar73 = -(uint)(auVar19._0_4_ == 0.0);
        iVar77 = -(uint)(auVar19._4_4_ == 0.0);
        iVar78 = -(uint)(auVar19._8_4_ == 0.0);
        iVar79 = -(uint)(auVar19._12_4_ == 0.0);
        auVar22 = NEON_frsqrte(auVar19,4);
        auVar87._0_4_ = auVar19._0_4_ * auVar22._0_4_;
        auVar87._4_4_ = auVar19._4_4_ * auVar22._4_4_;
        auVar87._8_4_ = auVar19._8_4_ * auVar22._8_4_;
        auVar87._12_4_ = auVar19._12_4_ * auVar22._12_4_;
        auVar90._0_4_ = auVar17._0_4_ * auVar25._0_4_;
        auVar90._4_4_ = auVar17._4_4_ * auVar25._4_4_;
        auVar90._8_4_ = auVar17._8_4_ * auVar25._8_4_;
        auVar90._12_4_ = auVar17._12_4_ * auVar25._12_4_;
        iVar8 = -(uint)(auVar17._0_4_ == 0.0);
        iVar9 = -(uint)(auVar17._4_4_ == 0.0);
        iVar82 = -(uint)(auVar17._8_4_ == 0.0);
        iVar83 = -(uint)(auVar17._12_4_ == 0.0);
        auVar88 = NEON_frsqrts(auVar22,auVar87,4);
        auVar72._0_4_ = auVar22._0_4_ * auVar88._0_4_;
        auVar72._4_4_ = auVar22._4_4_ * auVar88._4_4_;
        auVar72._8_4_ = auVar22._8_4_ * auVar88._8_4_;
        auVar72._12_4_ = auVar22._12_4_ * auVar88._12_4_;
        auVar22 = NEON_frsqrts(auVar25,auVar90,4);
        auVar88._4_4_ = auVar18._4_4_ * auVar68._4_4_;
        auVar88._0_4_ = auVar18._0_4_ * auVar68._0_4_;
        auVar88._8_4_ = auVar18._8_4_ * auVar68._8_4_;
        auVar88._12_4_ = auVar18._12_4_ * auVar68._12_4_;
        auVar88 = NEON_frsqrts(auVar68,auVar88,4);
        auVar23._0_4_ = auVar19._0_4_ * auVar72._0_4_;
        auVar23._4_4_ = auVar19._4_4_ * auVar72._4_4_;
        auVar23._8_4_ = auVar19._8_4_ * auVar72._8_4_;
        auVar23._12_4_ = auVar19._12_4_ * auVar72._12_4_;
        auVar80._0_4_ = auVar25._0_4_ * auVar22._0_4_;
        auVar80._4_4_ = auVar25._4_4_ * auVar22._4_4_;
        auVar80._8_4_ = auVar25._8_4_ * auVar22._8_4_;
        auVar80._12_4_ = auVar25._12_4_ * auVar22._12_4_;
        auVar84._0_4_ = auVar68._0_4_ * auVar88._0_4_;
        auVar84._4_4_ = auVar68._4_4_ * auVar88._4_4_;
        auVar84._8_4_ = auVar68._8_4_ * auVar88._8_4_;
        auVar84._12_4_ = auVar68._12_4_ * auVar88._12_4_;
        auVar68 = NEON_frsqrts(auVar72,auVar23,4);
        auVar22 = NEON_fmov(0x3f800000,4);
        auVar26._0_4_ = auVar17._0_4_ * auVar80._0_4_;
        auVar26._4_4_ = auVar17._4_4_ * auVar80._4_4_;
        auVar26._8_4_ = auVar17._8_4_ * auVar80._8_4_;
        auVar26._12_4_ = auVar17._12_4_ * auVar80._12_4_;
        auVar91._0_4_ = auVar18._0_4_ * auVar84._0_4_;
        auVar91._4_4_ = auVar18._4_4_ * auVar84._4_4_;
        auVar91._8_4_ = auVar18._8_4_ * auVar84._8_4_;
        auVar91._12_4_ = auVar18._12_4_ * auVar84._12_4_;
        iVar67 = -(uint)(auVar18._0_4_ == 0.0);
        iVar69 = -(uint)(auVar18._4_4_ == 0.0);
        iVar70 = -(uint)(auVar18._8_4_ == 0.0);
        auVar25 = NEON_frsqrts(auVar80,auVar26,4);
        auVar92 = NEON_frsqrts(auVar84,auVar91,4);
        fVar45 = fVar45 * auVar72._0_4_ * auVar68._0_4_;
        fVar51 = fVar51 * auVar72._4_4_ * auVar68._4_4_;
        fVar53 = fVar53 * auVar72._8_4_ * auVar68._8_4_;
        fVar54 = fVar54 * auVar72._12_4_ * auVar68._12_4_;
        fVar71 = (float)CONCAT13((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18),
                                 CONCAT12((byte)((uint)fVar45 >> 0x10) &
                                          ~(byte)((uint)iVar73 >> 0x10),
                                          CONCAT11((byte)((uint)fVar45 >> 8) &
                                                   ~(byte)((uint)iVar73 >> 8),
                                                   SUB41(fVar45,0) & ~(byte)iVar73)));
        uVar46 = CONCAT17((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18),
                          CONCAT16((byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10),
                                   CONCAT15((byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar77 >> 8),
                                            CONCAT14(SUB41(fVar51,0) & ~(byte)iVar77,fVar71))));
        auVar47._0_10_ =
             CONCAT19((byte)((uint)fVar53 >> 8) & ~(byte)((uint)iVar78 >> 8),
                      CONCAT18(SUB41(fVar53,0) & ~(byte)iVar78,uVar46));
        auVar47[10] = (byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10);
        auVar47[0xb] = (byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18);
        auVar48[0xc] = SUB41(fVar54,0) & ~(byte)iVar79;
        auVar48._0_12_ = auVar47;
        auVar48[0xd] = (byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar79 >> 8);
        auVar48[0xe] = (byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar79 >> 0x10);
        auVar48[0xf] = (byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar79 >> 0x18);
        auVar88 = NEON_fmov(0x40800000,4);
        fVar5 = fVar5 * auVar80._0_4_ * auVar25._0_4_;
        fVar66 = fVar66 * auVar80._4_4_ * auVar25._4_4_;
        fVar20 = fVar20 * auVar80._8_4_ * auVar25._8_4_;
        fVar21 = fVar21 * auVar80._12_4_ * auVar25._12_4_;
        fVar55 = fVar55 * auVar84._0_4_ * auVar92._0_4_;
        fVar60 = fVar60 * auVar84._4_4_ * auVar92._4_4_;
        fVar65 = fVar65 * auVar84._8_4_ * auVar92._8_4_;
        bVar29 = SUB41(fVar5,0) & ~(byte)iVar8;
        bVar30 = (byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar8 >> 8);
        bVar31 = (byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10);
        bVar32 = (byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18);
        bVar33 = SUB41(fVar66,0) & ~(byte)iVar9;
        bVar34 = (byte)((uint)fVar66 >> 8) & ~(byte)((uint)iVar9 >> 8);
        bVar35 = (byte)((uint)fVar66 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
        bVar36 = (byte)((uint)fVar66 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
        bVar37 = SUB41(fVar20,0) & ~(byte)iVar82;
        bVar38 = (byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar82 >> 8);
        bVar39 = (byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar82 >> 0x10);
        bVar40 = (byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar82 >> 0x18);
        bVar41 = SUB41(fVar21,0) & ~(byte)iVar83;
        bVar42 = (byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar83 >> 8);
        bVar43 = (byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10);
        bVar44 = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18);
        auVar92 = NEON_ext(auVar48,auVar48,8,1);
        fVar5 = (float)CONCAT13(bVar36,CONCAT12(bVar35,CONCAT11(bVar34,bVar33)));
        fVar56 = (float)CONCAT13((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18),
                                 CONCAT12((byte)((uint)fVar55 >> 0x10) &
                                          ~(byte)((uint)iVar67 >> 0x10),
                                          CONCAT11((byte)((uint)fVar55 >> 8) &
                                                   ~(byte)((uint)iVar67 >> 8),
                                                   SUB41(fVar55,0) & ~(byte)iVar67)));
        uVar57 = CONCAT15((byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar69 >> 8),
                          CONCAT14(SUB41(fVar60,0) & ~(byte)iVar69,fVar56));
        bVar63 = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
        bVar64 = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
        auVar58._0_8_ = CONCAT17(bVar64,CONCAT16(bVar63,uVar57));
        auVar58[8] = SUB41(fVar65,0) & ~(byte)iVar70;
        auVar58[9] = (byte)((uint)fVar65 >> 8) & ~(byte)((uint)iVar70 >> 8);
        auVar58[10] = (byte)((uint)fVar65 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
        auVar58[0xb] = (byte)((uint)fVar65 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
        auVar25[1] = bVar30;
        auVar25[0] = bVar29;
        auVar25[2] = bVar31;
        auVar25[3] = bVar32;
        auVar25[4] = bVar33;
        auVar25[5] = bVar34;
        auVar25[6] = bVar35;
        auVar25[7] = bVar36;
        auVar25[8] = bVar37;
        auVar25[9] = bVar38;
        auVar25[10] = bVar39;
        auVar25[0xb] = bVar40;
        auVar25[0xc] = bVar41;
        auVar25[0xd] = bVar42;
        auVar25[0xe] = bVar43;
        auVar25[0xf] = bVar44;
        auVar68[1] = bVar30;
        auVar68[0] = bVar29;
        auVar68[2] = bVar31;
        auVar68[3] = bVar32;
        auVar68[4] = bVar33;
        auVar68[5] = bVar34;
        auVar68[6] = bVar35;
        auVar68[7] = bVar36;
        auVar68[8] = bVar37;
        auVar68[9] = bVar38;
        auVar68[10] = bVar39;
        auVar68[0xb] = bVar40;
        auVar68[0xc] = bVar41;
        auVar68[0xd] = bVar42;
        auVar68[0xe] = bVar43;
        auVar68[0xf] = bVar44;
        auVar25 = NEON_ext(auVar25,auVar68,8,1);
        fVar61 = (float)((ulong)auVar58._0_8_ >> 0x20);
        fVar52 = (float)((ulong)uVar46 >> 0x20);
        uVar6 = (undefined2)((uint6)uVar57 >> 0x20);
        fVar66 = auVar58._8_4_;
        fVar21 = auVar22._0_4_ + (float)_DAT_03cab3a0 * fVar71 + (float)_DAT_03cac210 * fVar5 +
                 (float)_DAT_03cabb00 * fVar66;
        fVar45 = auVar22._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar71 +
                 (float)((ulong)_DAT_03cac210 >> 0x20) * fVar5 +
                 (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar66;
        fVar51 = auVar22._8_4_ + (float)_UNK_03cab3a8 * fVar71 + (float)_UNK_03cac218 * fVar5 +
                 (float)_UNK_03cabb08 * fVar66;
        fVar53 = auVar22._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar71 +
                 (float)((ulong)_UNK_03cac218 >> 0x20) * fVar5 +
                 (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar66;
        fVar20 = auVar25._0_4_;
        fVar5 = fVar52 - (float)CONCAT13(bVar32,CONCAT12(bVar31,CONCAT11(bVar30,bVar29)));
        auVar27._0_4_ = SQRT(fVar21) * 0.5 * auVar88._0_4_;
        auVar27._4_4_ = SQRT(fVar45) * 0.5 * auVar88._4_4_;
        auVar27._8_4_ = SQRT(fVar51) * 0.5 * auVar88._8_4_;
        auVar27._12_4_ = SQRT(fVar53) * 0.5 * auVar88._12_4_;
        fVar71 = auVar92._0_4_ + fVar56;
        fVar62 = fVar20 + -fVar61;
        auVar10._8_4_ = fVar62;
        auVar10._4_4_ = fVar71;
        auVar22 = NEON_frecpe(auVar27,4);
        auVar25 = NEON_frecps(auVar22,auVar27,4);
        lVar12 = *(long *)(lVar12 + 8);
        auVar85._4_4_ = fVar45;
        auVar85._0_4_ = fVar45;
        auVar85._8_4_ = fVar45;
        auVar85._12_4_ = fVar45;
        auVar59._4_4_ = fVar21;
        auVar59._0_4_ = fVar21;
        auVar59._8_4_ = fVar21;
        auVar59._12_4_ = fVar21;
        auVar89._0_4_ = -(uint)(fVar21 <= fVar45);
        auVar89._4_4_ = -(uint)(fVar21 <= fVar45);
        auVar89._8_4_ = -(uint)(fVar21 <= fVar45);
        auVar89._12_4_ = -(uint)(fVar21 <= fVar45);
        psVar1 = (short *)(lVar12 + 0x1a);
        auVar74._0_4_ = auVar22._0_4_ * auVar25._0_4_;
        auVar74._4_4_ = auVar22._4_4_ * auVar25._4_4_;
        auVar74._8_4_ = auVar22._8_4_ * auVar25._8_4_;
        auVar74._12_4_ = auVar22._12_4_ * auVar25._12_4_;
        auVar59 = auVar59 ^ (auVar59 ^ auVar85) & auVar89;
        auVar86._4_4_ = fVar51;
        auVar86._0_4_ = fVar51;
        auVar86._8_4_ = fVar51;
        auVar86._12_4_ = fVar51;
        auVar93._0_4_ = -(uint)(auVar59._0_4_ <= fVar51);
        auVar93._4_4_ = -(uint)(auVar59._4_4_ <= fVar51);
        auVar93._8_4_ = -(uint)(auVar59._8_4_ <= fVar51);
        auVar93._12_4_ = -(uint)(auVar59._12_4_ <= fVar51);
        auVar22 = NEON_frecps(auVar74,auVar27,4);
        auVar59 = auVar59 ^ (auVar59 ^ auVar86) & auVar93;
        auVar24._0_4_ = -(uint)(auVar59._0_4_ <= fVar53);
        auVar24._4_4_ = -(uint)(auVar59._4_4_ <= fVar53);
        auVar24._8_4_ = -(uint)(auVar59._8_4_ <= fVar53);
        auVar24._12_4_ = -(uint)(auVar59._12_4_ <= fVar53);
        uVar7 = CONCAT12(auVar47[10],(short)((unkuint10)auVar47._0_10_ >> 0x40));
        fVar66 = (float)CONCAT13(auVar47[0xb],uVar7);
        fVar54 = auVar74._0_4_ * auVar22._0_4_;
        fVar55 = auVar74._4_4_ * auVar22._4_4_;
        fVar60 = auVar74._8_4_ * auVar22._8_4_;
        fVar65 = auVar74._12_4_ * auVar22._12_4_;
        auVar10._0_4_ =
             (fVar52 + (float)CONCAT13(bVar32,CONCAT12(bVar31,CONCAT11(bVar30,bVar29)))) * fVar54;
        auVar49._0_8_ = auVar10._0_8_ << 0x20;
        auVar49._8_4_ = fVar71 * fVar54;
        auVar49._12_4_ = fVar62 * fVar54;
        auVar75._0_4_ =
             (fVar52 + (float)CONCAT13(bVar32,CONCAT12(bVar31,CONCAT11(bVar30,bVar29)))) * fVar55;
        auVar75._4_4_ = fVar55 * 0.0;
        auVar75._8_4_ = (fVar20 + (float)CONCAT13(bVar64,CONCAT12(bVar63,uVar6))) * fVar55;
        auVar75._12_4_ = (fVar56 + -auVar47._8_4_) * fVar55;
        auVar81._0_4_ = (auVar92._0_4_ + fVar56) * fVar60;
        auVar81._4_4_ = (fVar20 + fVar61) * fVar60;
        auVar81._12_4_ = fVar5 * fVar60;
        auVar28._0_4_ = (fVar20 - (float)CONCAT13(bVar64,CONCAT12(bVar63,uVar6))) * fVar65;
        auVar28._4_4_ = (fVar56 - fVar66) * fVar65;
        auVar28._8_4_ = fVar5 * fVar65;
        auVar50._4_12_ = auVar49._4_12_;
        auVar50._0_4_ = SQRT(fVar21) * 0.5;
        auVar76._8_8_ = auVar75._8_8_;
        auVar76._4_4_ = SQRT(fVar45) * 0.5;
        auVar76._0_4_ = auVar75._0_4_;
        auVar81._8_4_ = SQRT(fVar51) * 0.5;
        auVar28._12_4_ = SQRT(fVar53) * 0.5;
        auVar50 = auVar50 ^ (auVar50 ^ auVar76) & auVar89;
        auVar50 = auVar50 ^ (auVar50 ^ auVar81) & auVar93;
        auVar50 = auVar50 ^ (auVar50 ^ auVar28) & auVar24;
        do {
          sVar13 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar13 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*plVar14 + 0x50))(plVar14);
          return auVar50;
        }
        if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.",auVar50);
        }
        return auVar50;
      }
      sVar13 = sVar2;
    } while (sVar2 != 0);
  }
  return auVar22;
}


