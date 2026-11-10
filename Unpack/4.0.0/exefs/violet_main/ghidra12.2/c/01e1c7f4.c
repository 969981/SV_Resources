/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1c7f4; name: FUN_01e1c7f4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e1c7f4(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined3 uVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 *puVar13;
  int *piVar14;
  bool bVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  long *plVar19;
  float *pfVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  short sVar29;
  ulong uVar30;
  long *plVar31;
  long *plVar32;
  long lVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  float fVar44;
  undefined1 auVar43 [16];
  float fVar45;
  undefined6 uVar46;
  byte bVar50;
  float fVar49;
  byte bVar51;
  float fVar52;
  undefined1 auVar47 [12];
  float fVar53;
  undefined1 auVar48 [16];
  byte bVar54;
  byte bVar55;
  byte bVar56;
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
  float fVar70;
  float fVar72;
  float fVar73;
  undefined1 auVar71 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar78;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar79 [12];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined8 uVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  int iVar98;
  int iVar99;
  float fVar100;
  float fVar103;
  float fVar104;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar105;
  int iVar106;
  int iVar109;
  int iVar110;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined8 *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  long lStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  int *local_128;
  int *local_120;
  long local_118;
  long *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  long local_f0;
  long local_e8;
  ulong local_b8;
  ulong local_b0;
  undefined8 local_80 [2];
  
  lVar23 = *(long *)(param_1 + 0x88);
  if ((lVar23 != 0) && (*(short *)(lVar23 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar23 + 0x1a);
    sVar29 = *(short *)(lVar23 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar29) {
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar29 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01e1c884;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e1c884:
        bVar15 = false;
      }
      if (bVar15) {
        lVar23 = *(long *)(lVar23 + 0x10);
        if (lVar23 != 0) {
          plVar19 = (long *)FUN_01400aa8();
          if ((((*plVar19 == 0) || (*(short *)(*plVar19 + 0x1a) == 0)) ||
              (lVar24 = *plVar19, lVar24 == 0)) || (*(short *)(lVar24 + 0x1a) == 0))
          goto LAB_01e1c8cc;
          psVar1 = (short *)(lVar24 + 0x1a);
          sVar29 = *(short *)(lVar24 + 0x1a);
          goto LAB_01e1c944;
        }
        break;
      }
      sVar29 = sVar3;
    } while (sVar3 != 0);
  }
  return *(undefined4 *)(param_1 + 0x40);
  while (sVar29 = sVar3, sVar3 != 0) {
LAB_01e1c944:
    sVar3 = *psVar1;
    if (sVar3 == sVar29) {
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar15) {
        *psVar1 = sVar29 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01e1c968;
      bVar15 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01e1c968:
      bVar15 = false;
    }
    if (bVar15) {
      lVar24 = *(long *)(lVar24 + 0x10);
      if (lVar24 != 0) {
        lVar25 = *(long *)(param_1 + 0x50);
        plVar19 = (long *)(lVar24 + -0x28);
        if ((lVar25 == 0) || (*(short *)(lVar25 + 0x1a) == 0)) goto LAB_01e1c990;
        psVar1 = (short *)(lVar25 + 0x1a);
        sVar29 = *(short *)(lVar25 + 0x1a);
        goto LAB_01e1c9e4;
      }
      break;
    }
  }
LAB_01e1c8cc:
  uVar16 = *(undefined4 *)(param_1 + 0x40);
  goto LAB_01e1c8d0;
  while (sVar29 = sVar3, sVar3 != 0) {
LAB_01e1c9e4:
    sVar3 = *psVar1;
    if (sVar3 == sVar29) {
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar15) {
        *psVar1 = sVar29 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01e1ca08;
      bVar15 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01e1ca08:
      bVar15 = false;
    }
    if (bVar15) {
      if (*(long *)(lVar25 + 0x10) != 0) {
        plVar31 = (long *)(*(long *)(lVar25 + 0x10) + -0x28);
        lVar25 = (**(code **)(*plVar31 + 0x68))(plVar31);
        auVar11 = *(undefined1 (*) [16])(lVar25 + 0x30);
        pfVar20 = (float *)(**(code **)(*plVar31 + 0x68))(plVar31);
        fVar45 = *pfVar20;
        fVar49 = pfVar20[1];
        fVar52 = pfVar20[2];
        fVar53 = pfVar20[3];
        fVar41 = (float)*(undefined8 *)(pfVar20 + 4);
        fVar40 = (float)((ulong)*(undefined8 *)(pfVar20 + 4) >> 0x20);
        fVar44 = (float)*(undefined8 *)(pfVar20 + 6);
        fVar100 = (float)((ulong)*(undefined8 *)(pfVar20 + 6) >> 0x20);
        fVar70 = pfVar20[8];
        fVar72 = pfVar20[9];
        fVar73 = pfVar20[10];
        fVar78 = pfVar20[0xb] * pfVar20[0xb];
        auVar34._0_4_ = fVar41 * fVar41 + fVar40 * fVar40;
        auVar34._4_4_ = fVar44 * fVar44 + fVar100 * fVar100;
        auVar34._8_4_ = fVar41 * fVar41 + fVar40 * fVar40;
        auVar34._12_4_ = fVar44 * fVar44 + fVar100 * fVar100;
        auVar35._0_4_ = fVar70 * fVar70 + fVar72 * fVar72;
        auVar35._4_4_ = fVar73 * fVar73 + fVar78;
        auVar35._8_4_ = fVar70 * fVar70 + fVar72 * fVar72;
        auVar35._12_4_ = fVar73 * fVar73 + fVar78;
        auVar36._0_4_ = fVar45 * fVar45 + fVar49 * fVar49;
        auVar36._4_4_ = fVar52 * fVar52 + fVar53 * fVar53;
        auVar36._8_4_ = fVar45 * fVar45 + fVar49 * fVar49;
        auVar36._12_4_ = fVar52 * fVar52 + fVar53 * fVar53;
        auVar74 = NEON_ext(auVar34,auVar34,4,1);
        auVar76 = NEON_ext(auVar35,auVar35,4,1);
        auVar42 = NEON_ext(auVar36,auVar36,4,1);
        auVar37._0_4_ = auVar74._0_4_ + auVar74._4_4_;
        auVar37._4_4_ = auVar74._8_4_ + auVar74._12_4_;
        auVar37._8_4_ = auVar74._0_4_ + auVar74._4_4_;
        auVar37._12_4_ = auVar74._8_4_ + auVar74._12_4_;
        auVar38._0_4_ = auVar76._0_4_ + auVar76._4_4_;
        auVar38._4_4_ = auVar76._8_4_ + auVar76._12_4_;
        auVar38._8_4_ = auVar76._0_4_ + auVar76._4_4_;
        auVar38._12_4_ = auVar76._8_4_ + auVar76._12_4_;
        auVar39._0_4_ = auVar42._0_4_ + auVar42._4_4_;
        auVar39._4_4_ = auVar42._8_4_ + auVar42._12_4_;
        auVar39._8_4_ = auVar42._0_4_ + auVar42._4_4_;
        auVar39._12_4_ = auVar42._8_4_ + auVar42._12_4_;
        auVar76 = NEON_frsqrte(auVar37,4);
        auVar101 = NEON_frsqrte(auVar38,4);
        auVar111._0_4_ = auVar37._0_4_ * auVar76._0_4_;
        auVar111._4_4_ = auVar37._4_4_ * auVar76._4_4_;
        auVar111._8_4_ = auVar37._8_4_ * auVar76._8_4_;
        auVar111._12_4_ = auVar37._12_4_ * auVar76._12_4_;
        auVar42 = NEON_frsqrte(auVar39,4);
        auVar115._0_4_ = auVar38._0_4_ * auVar101._0_4_;
        auVar115._4_4_ = auVar38._4_4_ * auVar101._4_4_;
        auVar115._8_4_ = auVar38._8_4_ * auVar101._8_4_;
        auVar115._12_4_ = auVar38._12_4_ * auVar101._12_4_;
        auVar93._0_4_ = auVar39._0_4_ * auVar42._0_4_;
        auVar93._4_4_ = auVar39._4_4_ * auVar42._4_4_;
        auVar93._8_4_ = auVar39._8_4_ * auVar42._8_4_;
        auVar93._12_4_ = auVar39._12_4_ * auVar42._12_4_;
        auVar116 = NEON_frsqrts(auVar101,auVar115,4);
        iVar106 = -(uint)(auVar38._0_4_ == 0.0);
        iVar109 = -(uint)(auVar38._4_4_ == 0.0);
        iVar110 = -(uint)(auVar38._8_4_ == 0.0);
        iVar9 = -(uint)(auVar37._0_4_ == 0.0);
        iVar10 = -(uint)(auVar37._4_4_ == 0.0);
        iVar98 = -(uint)(auVar37._8_4_ == 0.0);
        iVar99 = -(uint)(auVar37._12_4_ == 0.0);
        iVar18 = -(uint)(auVar39._0_4_ == 0.0);
        iVar17 = -(uint)(auVar39._4_4_ == 0.0);
        iVar5 = -(uint)(auVar39._8_4_ == 0.0);
        iVar6 = -(uint)(auVar39._12_4_ == 0.0);
        auVar74 = NEON_frsqrts(auVar42,auVar93,4);
        auVar80._0_4_ = auVar42._0_4_ * auVar74._0_4_;
        auVar80._4_4_ = auVar42._4_4_ * auVar74._4_4_;
        auVar80._8_4_ = auVar42._8_4_ * auVar74._8_4_;
        auVar80._12_4_ = auVar42._12_4_ * auVar74._12_4_;
        auVar74 = NEON_frsqrts(auVar76,auVar111,4);
        auVar112._0_4_ = auVar39._0_4_ * auVar80._0_4_;
        auVar112._4_4_ = auVar39._4_4_ * auVar80._4_4_;
        auVar112._8_4_ = auVar39._8_4_ * auVar80._8_4_;
        auVar112._12_4_ = auVar39._12_4_ * auVar80._12_4_;
        auVar42 = NEON_fmov(0x3f800000,4);
        auVar94._0_4_ = auVar76._0_4_ * auVar74._0_4_;
        auVar94._4_4_ = auVar76._4_4_ * auVar74._4_4_;
        auVar94._8_4_ = auVar76._8_4_ * auVar74._8_4_;
        auVar94._12_4_ = auVar76._12_4_ * auVar74._12_4_;
        auVar97._0_4_ = auVar101._0_4_ * auVar116._0_4_;
        auVar97._4_4_ = auVar101._4_4_ * auVar116._4_4_;
        auVar97._8_4_ = auVar101._8_4_ * auVar116._8_4_;
        auVar97._12_4_ = auVar101._12_4_ * auVar116._12_4_;
        auVar101 = NEON_frsqrts(auVar80,auVar112,4);
        auVar77._0_4_ = auVar38._0_4_ * auVar97._0_4_;
        auVar77._4_4_ = auVar38._4_4_ * auVar97._4_4_;
        auVar77._8_4_ = auVar38._8_4_ * auVar97._8_4_;
        auVar77._12_4_ = auVar38._12_4_ * auVar97._12_4_;
        auVar75._0_4_ = auVar37._0_4_ * auVar94._0_4_;
        auVar75._4_4_ = auVar37._4_4_ * auVar94._4_4_;
        auVar75._8_4_ = auVar37._8_4_ * auVar94._8_4_;
        auVar75._12_4_ = auVar37._12_4_ * auVar94._12_4_;
        auVar76 = NEON_frsqrts(auVar97,auVar77,4);
        auVar74 = NEON_frsqrts(auVar94,auVar75,4);
        fVar45 = fVar45 * auVar80._0_4_ * auVar101._0_4_;
        fVar49 = fVar49 * auVar80._4_4_ * auVar101._4_4_;
        fVar52 = fVar52 * auVar80._8_4_ * auVar101._8_4_;
        fVar53 = fVar53 * auVar80._12_4_ * auVar101._12_4_;
        fVar45 = (float)CONCAT13((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                                 CONCAT12((byte)((uint)fVar45 >> 0x10) &
                                          ~(byte)((uint)iVar18 >> 0x10),
                                          CONCAT11((byte)((uint)fVar45 >> 8) &
                                                   ~(byte)((uint)iVar18 >> 8),
                                                   SUB41(fVar45,0) & ~(byte)iVar18)));
        uVar92 = CONCAT17((byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                          CONCAT16((byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                                   CONCAT15((byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar17 >> 8),
                                            CONCAT14(SUB41(fVar49,0) & ~(byte)iVar17,fVar45))));
        auVar79._0_10_ =
             CONCAT19((byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar5 >> 8),
                      CONCAT18(SUB41(fVar52,0) & ~(byte)iVar5,uVar92));
        auVar79[10] = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10);
        auVar79[0xb] = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18);
        auVar81[0xc] = SUB41(fVar53,0) & ~(byte)iVar6;
        auVar81._0_12_ = auVar79;
        auVar81[0xd] = (byte)((uint)fVar53 >> 8) & ~(byte)((uint)iVar6 >> 8);
        auVar81[0xe] = (byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10);
        auVar81[0xf] = (byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18);
        fVar70 = fVar70 * auVar97._0_4_ * auVar76._0_4_;
        fVar72 = fVar72 * auVar97._4_4_ * auVar76._4_4_;
        fVar73 = fVar73 * auVar97._8_4_ * auVar76._8_4_;
        fVar41 = fVar41 * auVar94._0_4_ * auVar74._0_4_;
        fVar40 = fVar40 * auVar94._4_4_ * auVar74._4_4_;
        fVar44 = fVar44 * auVar94._8_4_ * auVar74._8_4_;
        fVar100 = fVar100 * auVar94._12_4_ * auVar74._12_4_;
        auVar76 = NEON_ext(auVar81,auVar81,8,1);
        fVar53 = (float)CONCAT13((byte)((uint)fVar70 >> 0x18) & ~(byte)((uint)iVar106 >> 0x18),
                                 CONCAT12((byte)((uint)fVar70 >> 0x10) &
                                          ~(byte)((uint)iVar106 >> 0x10),
                                          CONCAT11((byte)((uint)fVar70 >> 8) &
                                                   ~(byte)((uint)iVar106 >> 8),
                                                   SUB41(fVar70,0) & ~(byte)iVar106)));
        uVar46 = CONCAT15((byte)((uint)fVar72 >> 8) & ~(byte)((uint)iVar109 >> 8),
                          CONCAT14(SUB41(fVar72,0) & ~(byte)iVar109,fVar53));
        bVar50 = (byte)((uint)fVar72 >> 0x10) & ~(byte)((uint)iVar109 >> 0x10);
        bVar51 = (byte)((uint)fVar72 >> 0x18) & ~(byte)((uint)iVar109 >> 0x18);
        auVar47._0_8_ = CONCAT17(bVar51,CONCAT16(bVar50,uVar46));
        auVar47[8] = SUB41(fVar73,0) & ~(byte)iVar110;
        auVar47[9] = (byte)((uint)fVar73 >> 8) & ~(byte)((uint)iVar110 >> 8);
        auVar47[10] = (byte)((uint)fVar73 >> 0x10) & ~(byte)((uint)iVar110 >> 0x10);
        auVar47[0xb] = (byte)((uint)fVar73 >> 0x18) & ~(byte)((uint)iVar110 >> 0x18);
        bVar54 = SUB41(fVar41,0) & ~(byte)iVar9;
        bVar55 = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar9 >> 8);
        bVar56 = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
        bVar57 = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
        bVar58 = SUB41(fVar40,0) & ~(byte)iVar10;
        bVar59 = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar10 >> 8);
        bVar60 = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10);
        bVar61 = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18);
        bVar62 = SUB41(fVar44,0) & ~(byte)iVar98;
        bVar63 = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar98 >> 8);
        bVar64 = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar98 >> 0x10);
        bVar65 = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18);
        bVar66 = SUB41(fVar100,0) & ~(byte)iVar99;
        bVar67 = (byte)((uint)fVar100 >> 8) & ~(byte)((uint)iVar99 >> 8);
        bVar68 = (byte)((uint)fVar100 >> 0x10) & ~(byte)((uint)iVar99 >> 0x10);
        bVar69 = (byte)((uint)fVar100 >> 0x18) & ~(byte)((uint)iVar99 >> 0x18);
        fVar72 = (float)((ulong)uVar92 >> 0x20);
        uVar92 = 0;
        fVar41 = (float)CONCAT13(bVar61,CONCAT12(bVar60,CONCAT11(bVar59,bVar58)));
        fVar44 = auVar47._8_4_;
        fVar40 = auVar42._0_4_ + (float)_DAT_03cab3a0 * fVar45 + (float)_DAT_03cac210 * fVar41 +
                 (float)_DAT_03cabb00 * fVar44;
        fVar49 = auVar42._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar45 +
                 (float)((ulong)_DAT_03cac210 >> 0x20) * fVar41 +
                 (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar44;
        fVar52 = auVar42._8_4_ + (float)_UNK_03cab3a8 * fVar45 + (float)_UNK_03cac218 * fVar41 +
                 (float)_UNK_03cabb08 * fVar44;
        fVar44 = auVar42._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar45 +
                 (float)((ulong)_UNK_03cac218 >> 0x20) * fVar41 +
                 (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar44;
        fVar70 = (float)((ulong)auVar47._0_8_ >> 0x20);
        uVar7 = (undefined2)((uint6)uVar46 >> 0x20);
        auVar42[1] = bVar55;
        auVar42[0] = bVar54;
        auVar42[2] = bVar56;
        auVar42[3] = bVar57;
        auVar42[4] = bVar58;
        auVar42[5] = bVar59;
        auVar42[6] = bVar60;
        auVar42[7] = bVar61;
        auVar42[8] = bVar62;
        auVar42[9] = bVar63;
        auVar42[10] = bVar64;
        auVar42[0xb] = bVar65;
        auVar42[0xc] = bVar66;
        auVar42[0xd] = bVar67;
        auVar42[0xe] = bVar68;
        auVar42[0xf] = bVar69;
        auVar74[1] = bVar55;
        auVar74[0] = bVar54;
        auVar74[2] = bVar56;
        auVar74[3] = bVar57;
        auVar74[4] = bVar58;
        auVar74[5] = bVar59;
        auVar74[6] = bVar60;
        auVar74[7] = bVar61;
        auVar74[8] = bVar62;
        auVar74[9] = bVar63;
        auVar74[10] = bVar64;
        auVar74[0xb] = bVar65;
        auVar74[0xc] = bVar66;
        auVar74[0xd] = bVar67;
        auVar74[0xe] = bVar68;
        auVar74[0xf] = bVar69;
        auVar42 = NEON_ext(auVar42,auVar74,8,1);
        fVar45 = auVar42._0_4_;
        auVar82._4_4_ = fVar40;
        auVar82._0_4_ = fVar40;
        auVar82._8_4_ = fVar40;
        auVar82._12_4_ = fVar40;
        auVar113._4_4_ = fVar49;
        auVar113._0_4_ = fVar49;
        auVar113._8_4_ = fVar49;
        auVar113._12_4_ = fVar49;
        auVar117._0_4_ = -(uint)(fVar40 <= fVar49);
        auVar117._4_4_ = -(uint)(fVar40 <= fVar49);
        auVar117._8_4_ = -(uint)(fVar40 <= fVar49);
        auVar117._12_4_ = -(uint)(fVar40 <= fVar49);
        auVar82 = auVar82 ^ (auVar82 ^ auVar113) & auVar117;
        auVar107._4_4_ = fVar52;
        auVar107._0_4_ = fVar52;
        auVar107._8_4_ = fVar52;
        auVar107._12_4_ = fVar52;
        fVar73 = SQRT(fVar40) * 0.5;
        fVar78 = SQRT(fVar44) * 0.5;
        auVar42 = NEON_fmov(0x40800000,4);
        auVar114._0_4_ = -(uint)(auVar82._0_4_ <= fVar52);
        auVar114._4_4_ = -(uint)(auVar82._4_4_ <= fVar52);
        auVar114._8_4_ = -(uint)(auVar82._8_4_ <= fVar52);
        auVar114._12_4_ = -(uint)(auVar82._12_4_ <= fVar52);
        fVar41 = fVar72 - (float)CONCAT13(bVar57,CONCAT12(bVar56,CONCAT11(bVar55,bVar54)));
        auVar102._0_4_ = fVar73 * auVar42._0_4_;
        auVar102._4_4_ = SQRT(fVar49) * 0.5 * auVar42._4_4_;
        auVar102._8_4_ = SQRT(fVar52) * 0.5 * auVar42._8_4_;
        auVar102._12_4_ = fVar78 * auVar42._12_4_;
        auVar82 = auVar82 ^ (auVar82 ^ auVar107) & auVar114;
        auVar74 = NEON_frecpe(auVar102,4);
        auVar42 = NEON_frecps(auVar74,auVar102,4);
        auVar43._0_4_ = -(uint)(auVar82._0_4_ <= fVar44);
        auVar43._4_4_ = -(uint)(auVar82._4_4_ <= fVar44);
        auVar43._8_4_ = -(uint)(auVar82._8_4_ <= fVar44);
        auVar43._12_4_ = -(uint)(auVar82._12_4_ <= fVar44);
        auVar108._0_4_ = auVar74._0_4_ * auVar42._0_4_;
        auVar108._4_4_ = auVar74._4_4_ * auVar42._4_4_;
        auVar108._8_4_ = auVar74._8_4_ * auVar42._8_4_;
        auVar108._12_4_ = auVar74._12_4_ * auVar42._12_4_;
        auVar42 = NEON_frecps(auVar108,auVar102,4);
        fVar100 = auVar108._0_4_ * auVar42._0_4_;
        fVar103 = auVar108._4_4_ * auVar42._4_4_;
        fVar104 = auVar108._8_4_ * auVar42._8_4_;
        fVar105 = auVar108._12_4_ * auVar42._12_4_;
        fVar40 = (fVar72 + (float)CONCAT13(bVar57,CONCAT12(bVar56,CONCAT11(bVar55,bVar54)))) *
                 fVar100;
        uVar83 = (undefined1)((uint)fVar40 >> 8);
        uVar84 = (undefined1)((uint)fVar40 >> 0x10);
        uVar85 = (undefined1)((uint)fVar40 >> 0x18);
        fVar44 = (auVar76._0_4_ + fVar53) * fVar100;
        uVar86 = (undefined1)((uint)fVar44 >> 8);
        uVar87 = (undefined1)((uint)fVar44 >> 0x10);
        uVar88 = (undefined1)((uint)fVar44 >> 0x18);
        fVar100 = (fVar45 + -fVar70) * fVar100;
        uVar89 = (undefined1)((uint)fVar100 >> 8);
        uVar90 = (undefined1)((uint)fVar100 >> 0x10);
        uVar91 = (undefined1)((uint)fVar100 >> 0x18);
        auVar95._0_4_ =
             (fVar72 + (float)CONCAT13(bVar57,CONCAT12(bVar56,CONCAT11(bVar55,bVar54)))) * fVar103;
        auVar95._4_4_ = fVar103 * 0.0;
        auVar95._8_4_ = (fVar45 + (float)CONCAT13(bVar51,CONCAT12(bVar50,uVar7))) * fVar103;
        auVar95._12_4_ = (fVar53 + -auVar79._8_4_) * fVar103;
        auVar48._0_4_ = (auVar76._0_4_ + fVar53) * fVar104;
        auVar48._4_4_ = (fVar45 + fVar70) * fVar104;
        auVar48._12_4_ = fVar41 * fVar104;
        auVar96._8_8_ = auVar95._8_8_;
        auVar96._4_4_ = SQRT(fVar49) * 0.5;
        auVar96._0_4_ = auVar95._0_4_;
        auVar48._8_4_ = SQRT(fVar52) * 0.5;
        auVar101[4] = SUB41(fVar40,0);
        auVar101._0_4_ = fVar73;
        auVar101[5] = uVar83;
        auVar101[6] = uVar84;
        auVar101[7] = uVar85;
        auVar101[8] = SUB41(fVar44,0);
        auVar101[9] = uVar86;
        auVar101[10] = uVar87;
        auVar101[0xb] = uVar88;
        auVar101[0xc] = SUB41(fVar100,0);
        auVar101[0xd] = uVar89;
        auVar101[0xe] = uVar90;
        auVar101[0xf] = uVar91;
        auVar116[4] = SUB41(fVar40,0);
        auVar116._0_4_ = fVar73;
        auVar116[5] = uVar83;
        auVar116[6] = uVar84;
        auVar116[7] = uVar85;
        auVar116[8] = SUB41(fVar44,0);
        auVar116[9] = uVar86;
        auVar116[10] = uVar87;
        auVar116[0xb] = uVar88;
        auVar116[0xc] = SUB41(fVar100,0);
        auVar116[0xd] = uVar89;
        auVar116[0xe] = uVar90;
        auVar116[0xf] = uVar91;
        auVar48 = auVar48 ^ (auVar48 ^ auVar116 ^ (auVar101 ^ auVar96) & auVar117) & ~auVar114;
        uVar8 = CONCAT12(auVar79[10],(short)((unkuint10)auVar79._0_10_ >> 0x40));
        fVar40 = (float)CONCAT13(auVar79[0xb],uVar8);
        fVar40 = (fVar53 - fVar40) * fVar105;
        fVar41 = fVar41 * fVar105;
        auVar76[4] = SUB41(fVar40,0);
        auVar76._0_4_ = (fVar45 - (float)CONCAT13(bVar51,CONCAT12(bVar50,uVar7))) * fVar105;
        auVar76[5] = (char)((uint)fVar40 >> 8);
        auVar76[6] = (char)((uint)fVar40 >> 0x10);
        auVar76[7] = (char)((uint)fVar40 >> 0x18);
        auVar76[8] = SUB41(fVar41,0);
        auVar76[9] = (char)((uint)fVar41 >> 8);
        auVar76[10] = (char)((uint)fVar41 >> 0x10);
        auVar76[0xb] = (char)((uint)fVar41 >> 0x18);
        auVar76[0xc] = SUB41(fVar78,0);
        auVar76[0xd] = (char)((uint)fVar78 >> 8);
        auVar76[0xe] = (char)((uint)fVar78 >> 0x10);
        auVar76[0xf] = (char)((uint)fVar78 >> 0x18);
        auVar48 = auVar48 ^ (auVar48 ^ auVar76) & auVar43;
        auVar47 = auVar11._0_12_;
        auVar11._12_4_ = 0;
        auVar11._0_12_ = auVar47;
        FUN_018c8f20(&local_b8,auVar11,auVar48,0,ZEXT816(0x43340000),4);
        auVar12._12_4_ = 0;
        auVar12._0_12_ = auVar47;
        auVar71._8_8_ = uVar92;
        auVar71._0_8_ = 0x43340000;
        FUN_018c8f20(&local_f0,auVar12,auVar48,0,auVar71,5);
        uVar22 = local_b8;
        goto LAB_01e1cc74;
      }
      break;
    }
  }
LAB_01e1c990:
  uVar16 = *(undefined4 *)(param_1 + 0x40);
  goto LAB_01e1c994;
LAB_01e1cc74:
  if (uVar22 == local_b0) goto LAB_01e1cd8c;
  lVar25 = *(long *)(uVar22 + 8);
  if ((lVar25 != 0) && (*(short *)(lVar25 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar25 + 0x1a);
    sVar29 = *(short *)(lVar25 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar29) {
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar29 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01e1ccbc;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e1ccbc:
        bVar15 = false;
      }
      if (bVar15) {
        plVar32 = (long *)0x0;
        if (*(long *)(lVar25 + 0x10) != 0) {
          plVar32 = (long *)(*(long *)(lVar25 + 0x10) + -0x28);
        }
        goto LAB_01e1cce4;
      }
      sVar29 = sVar3;
    } while (sVar3 != 0);
  }
  plVar32 = (long *)0x0;
LAB_01e1cce4:
  lVar25 = *(long *)(param_1 + 0x50);
  if ((lVar25 != 0) && (*(short *)(lVar25 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar25 + 0x1a);
    sVar29 = *(short *)(lVar25 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar29) {
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar29 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01e1cd20;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e1cd20:
        bVar15 = false;
      }
      if (bVar15) {
        if (*(long *)(lVar25 + 0x10) != 0) {
          plVar21 = (long *)(*(long *)(lVar25 + 0x10) + -0x28);
          bVar15 = plVar32 == plVar21;
          (**(code **)(*plVar21 + 0x60))();
          goto LAB_01e1cd60;
        }
        break;
      }
      sVar29 = sVar3;
    } while (sVar3 != 0);
  }
  bVar15 = plVar32 == (long *)0x0;
LAB_01e1cd60:
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x60))(plVar32);
  }
  if (bVar15) {
    FUN_01e1d420(&local_b8,uVar22);
    goto LAB_01e1cd8c;
  }
  uVar22 = uVar22 + 0x18;
  goto LAB_01e1cc74;
LAB_01e1d050:
  if (*plVar32 == 0) goto code_r0x01e1d058;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0xf0));
  do {
    if (*plVar32 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0xf0));
        while (*plVar32 == 0) {
          cVar4 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar15) {
            *plVar32 = lVar26;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01e1d0ac;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar32,0x10);
    if (bVar15) {
      *plVar32 = lVar26;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01e1d0ac:
  bVar15 = false;
LAB_01e1d0b0:
  plVar32 = (long *)FUN_01990520(*(undefined8 *)(lVar25 + 0x100),*(undefined8 *)(lVar25 + 0x108));
  if ((*(long **)(lVar25 + 0x108) == plVar32) || (*plVar32 == 0)) {
    plVar32 = (long *)FUN_01990520(*(undefined8 *)(lVar25 + 0x138),*(undefined8 *)(lVar25 + 0x140));
    if (*(long **)(lVar25 + 0x140) == plVar32) {
      lVar26 = 0;
    }
    else {
      lVar26 = 0;
      if (*plVar32 != 0) {
        lVar26 = *plVar32 + -0x20;
      }
    }
  }
  else {
    lVar26 = *plVar32 + -0x20;
  }
  if (!bVar15) {
    *(undefined8 *)(lVar25 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar25 + 0xf0));
  }
  piVar14 = local_120;
  piVar2 = local_128;
  if (lVar26 != 0) {
    do {
      if (piVar2 == piVar14) {
        uVar22 = uVar22 + 0x18;
        goto LAB_01e1d168;
      }
      iVar18 = *piVar2;
      iVar17 = FUN_016c8438(lVar26);
      piVar2 = piVar2 + 1;
    } while (iVar18 != iVar17);
    FUN_01668084(&local_160,uVar22);
    uVar22 = FUN_01e1d420(&local_b8,uVar22);
  }
LAB_01e1d168:
  (**(code **)(*(long *)(lVar25 + -0x28) + 0x60))((long *)(lVar25 + -0x28));
  uVar27 = local_b0;
  goto LAB_01e1cfd8;
code_r0x01e1d058:
  cVar4 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar32,0x10);
  if (bVar15) {
    *plVar32 = lVar26;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01e1d0ac;
  goto LAB_01e1d050;
LAB_01e1cd8c:
  for (lVar25 = local_f0; lVar25 != local_e8; lVar25 = lVar25 + 0x18) {
    lVar26 = *(long *)(lVar25 + 8);
    if ((lVar26 == 0) || (*(short *)(lVar26 + 0x1a) == 0)) {
      plVar32 = (long *)0x0;
    }
    else {
      psVar1 = (short *)(lVar26 + 0x1a);
      sVar29 = *(short *)(lVar26 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar29) {
          cVar4 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar15) {
            *psVar1 = sVar29 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01e1cdd8;
          bVar15 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01e1cdd8:
          bVar15 = false;
        }
        if (bVar15) {
          plVar32 = (long *)0x0;
          if (*(long *)(lVar26 + 0x10) != 0) {
            plVar32 = (long *)(*(long *)(lVar26 + 0x10) + -0x28);
          }
          break;
        }
        plVar32 = (long *)0x0;
        sVar29 = sVar3;
      } while (sVar3 != 0);
    }
    lVar26 = *(long *)(param_1 + 0x50);
    if ((lVar26 != 0) && (*(short *)(lVar26 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar26 + 0x1a);
      sVar29 = *(short *)(lVar26 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar29) {
          cVar4 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar15) {
            *psVar1 = sVar29 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01e1ce44;
          bVar15 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01e1ce44:
          bVar15 = false;
        }
        if (bVar15) {
          if (*(long *)(lVar26 + 0x10) != 0) {
            plVar21 = (long *)(*(long *)(lVar26 + 0x10) + -0x28);
            bVar15 = plVar32 == plVar21;
            (**(code **)(*plVar21 + 0x60))();
            goto LAB_01e1ce84;
          }
          break;
        }
        sVar29 = sVar3;
      } while (sVar3 != 0);
    }
    bVar15 = plVar32 == (long *)0x0;
LAB_01e1ce84:
    if (plVar32 != (long *)0x0) {
      (**(code **)(*plVar32 + 0x60))(plVar32);
    }
    if (bVar15) {
      FUN_01e1d420(&local_f0,lVar25);
      lVar25 = local_e8;
      break;
    }
  }
  if ((((local_f0 != lVar25) && (FUN_01668084(&local_b8,local_f0), local_f0 + 0x18 != lVar25)) &&
      (FUN_01668084(&local_b8), local_f0 + 0x30 != lVar25)) &&
     (((FUN_01668084(&local_b8), local_f0 + 0x48 != lVar25 &&
       (FUN_01668084(&local_b8), local_f0 + 0x60 != lVar25)) &&
      (FUN_01668084(&local_b8), local_f0 + 0x78 != lVar25)))) {
    FUN_01668084(&local_b8);
    for (local_f0 = local_f0 + 0x90; local_f0 != lVar25; local_f0 = local_f0 + 0x18) {
      FUN_01668084(&local_b8,local_f0);
    }
  }
  if (local_b0 == local_b8) {
    uVar16 = *(undefined4 *)(param_1 + 0x40);
  }
  else {
    plStack_110 = *(long **)(param_1 + 8);
    iVar18 = 0;
    local_128 = (int *)0x0;
    local_120 = (int *)0x0;
    local_f8 = 0;
    local_118 = 0;
    local_108 = 0x3fffffffffffffff;
    uStack_100 = 0;
    do {
      uVar16 = FUN_01e1d568(*(undefined8 *)(lVar23 + 0x1c0),iVar18);
      local_160 = CONCAT44(local_160._4_4_,uVar16) & 0xffffffff0000ffff;
      FUN_016b5f44(&local_128,&local_160);
      iVar18 = iVar18 + 1;
    } while (iVar18 != 5);
    uStack_148 = *(undefined8 *)(param_1 + 8);
    local_160 = 0;
    lStack_158 = 0;
    local_130 = 0;
    local_150 = 0;
    local_140 = 0xaaaaaaaaaaaaaaa;
    uStack_138 = 0;
    uVar27 = local_b0;
    uVar22 = local_b8;
    if (local_b8 != local_b0) {
      do {
        lVar25 = *(long *)(uVar22 + 8);
        if (lVar25 != 0) {
          if (*(short *)(lVar25 + 0x1a) != 0) {
            psVar1 = (short *)(lVar25 + 0x1a);
            sVar29 = *(short *)(lVar25 + 0x1a);
            do {
              sVar3 = *psVar1;
              if (sVar3 == sVar29) {
                cVar4 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar15) {
                  *psVar1 = sVar29 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 != '\0') goto LAB_01e1d018;
                bVar15 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_01e1d018:
                bVar15 = false;
              }
              if (bVar15) {
                lVar25 = *(long *)(lVar25 + 0x10);
                if (lVar25 != 0) {
                  plVar32 = (long *)(lVar25 + 0xe8);
                  lVar33 = *plVar32;
                  lVar26 = nn::os::GetCurrentThread();
                  if (lVar26 == lVar33) {
                    bVar15 = true;
                    goto LAB_01e1d0b0;
                  }
                  lVar26 = nn::os::GetCurrentThread();
                  goto LAB_01e1d050;
                }
                break;
              }
              sVar29 = sVar3;
            } while (sVar3 != 0);
          }
        }
LAB_01e1cfd8:
      } while (uVar22 != uVar27);
    }
    fVar41 = nextafterf(100.0,3.4028235e+38);
    uVar22 = *(ulong *)(param_1 + 0xf0);
    uVar27 = *(ulong *)(param_1 + 0xf8);
    uVar28 = uVar27 ^ uVar22;
    *(ulong *)(param_1 + 0xf0) = uVar28 ^ (uVar22 >> 0x28 | uVar22 << 0x18) ^ uVar28 << 0x10;
    *(ulong *)(param_1 + 0xf8) = uVar28 >> 0x1b | uVar28 << 0x25;
    local_170 = (undefined8 *)0x0;
    uStack_168 = 0;
    fVar40 = (float)FUN_01e1d5a4(plVar19);
    if (fVar41 * (float)(uVar27 + uVar22) * 5.421011e-20 + 0.0 <= fVar40) {
      lVar25 = lStack_158 - local_160;
      uVar22 = local_160;
      if (lVar25 == 0) goto LAB_01e1d1f4;
LAB_01e1d200:
      uVar27 = *(ulong *)(param_1 + 0xf0);
      uVar28 = *(ulong *)(param_1 + 0xf8);
      uVar30 = uVar28 ^ uVar27;
      *(ulong *)(param_1 + 0xf0) = uVar30 ^ (uVar27 >> 0x28 | uVar27 << 0x18) ^ uVar30 << 0x10;
      *(ulong *)(param_1 + 0xf8) = uVar30 >> 0x1b | uVar30 << 0x25;
      FUN_00d0a71c(&local_170,
                   uVar22 + (long)(int)((float)(uVar28 + uVar27) * 5.421011e-20 *
                                        (float)(ulong)((lVar25 >> 3) * -0x5555555555555555) + 0.0) *
                            0x18 + 8);
    }
    else {
LAB_01e1d1f4:
      lVar25 = local_b0 - local_b8;
      uVar22 = local_b8;
      if (lVar25 != 0) goto LAB_01e1d200;
    }
    if ((local_170 == (undefined8 *)0x0) || (*(short *)((long)local_170 + 0x1a) == 0)) {
      uVar16 = *(undefined4 *)(param_1 + 0x40);
    }
    else {
      FUN_00d0a71c(param_1 + 0x60,&local_170);
      uVar16 = FUN_01e1d5bc(param_1,1);
    }
    puVar13 = local_170;
    if (local_170 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_170 + 3);
      do {
        sVar29 = *psVar1;
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar29 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar29 == 1) {
        piVar2 = (int *)((long)local_170 + 0x1c);
        do {
          iVar18 = *piVar2;
          cVar4 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar15) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar18 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar18 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar18 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar25 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar25;
          local_80[0] = *puVar13;
          FUN_00c44438(lVar25 + 0x8040,local_80);
        }
      }
      else if (sVar29 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    FUN_017f96f8(&local_160);
    plVar32 = plStack_110;
    piVar2 = local_128;
    if (local_128 != (int *)0x0) {
      local_120 = local_128;
      lVar25 = local_118 - (long)local_128;
      uVar22 = (**(code **)(*plStack_110 + 0xf8))(plStack_110);
      if (((uVar22 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1)) {
        (**(code **)(*plVar32 + 0x18))(plVar32,piVar2,lVar25,4);
      }
      else {
        FUN_00c48fe8(plVar32,piVar2,lVar25,4);
      }
    }
  }
  FUN_017f96f8(&local_f0);
  FUN_017f96f8(&local_b8);
  (**(code **)(*plVar31 + 0x60))();
LAB_01e1c994:
  lVar24 = *(long *)(lVar24 + 8);
  psVar1 = (short *)(lVar24 + 0x1a);
  do {
    sVar29 = *psVar1;
    cVar4 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar15) {
      *psVar1 = sVar29 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar29 == 1) {
    *(undefined8 *)(lVar24 + 0x10) = 0;
    (**(code **)(*plVar19 + 0x50))(plVar19);
  }
  else if (sVar29 == 0) goto LAB_01e1c8f8;
LAB_01e1c8d0:
  lVar24 = *(long *)(lVar23 + 0x70);
  psVar1 = (short *)(lVar24 + 0x1a);
  do {
    sVar29 = *psVar1;
    cVar4 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar15) {
      *psVar1 = sVar29 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar29 == 1) {
    *(undefined8 *)(lVar24 + 0x10) = 0;
    (**(code **)(*(long *)(lVar23 + -0x28) + 0x50))();
  }
  else if (sVar29 == 0) {
LAB_01e1c8f8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return uVar16;
}


