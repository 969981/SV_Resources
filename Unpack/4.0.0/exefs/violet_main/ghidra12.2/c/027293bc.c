/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027293bc; name: FUN_027293bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027293bc(long param_1)

{
  long *plVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  short sVar4;
  char cVar5;
  undefined7 uVar6;
  undefined3 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined5 uVar13;
  undefined5 uVar14;
  long lVar15;
  bool bVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined4 uVar25;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [12];
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar30 [16];
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 uVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  undefined1 uVar51;
  undefined1 auVar52 [12];
  float fVar60;
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar56 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  float fVar61;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar76;
  float fVar77;
  undefined1 auVar70 [16];
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  undefined1 auVar71 [16];
  undefined1 auVar75 [16];
  undefined1 auVar74 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  byte bVar78;
  int iVar79;
  byte bVar82;
  byte bVar83;
  byte bVar85;
  int iVar86;
  byte bVar87;
  byte bVar88;
  byte bVar90;
  int iVar91;
  byte bVar92;
  byte bVar93;
  byte bVar95;
  byte bVar97;
  byte bVar98;
  undefined1 auVar80 [16];
  byte bVar84;
  byte bVar89;
  byte bVar94;
  int iVar96;
  byte bVar99;
  undefined1 auVar81 [16];
  float fVar100;
  float fVar101;
  undefined8 uVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  undefined8 uVar107;
  float fVar108;
  float fVar109;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar119 [16];
  float fVar120;
  float fVar131;
  undefined1 in_q18 [16];
  undefined1 auVar124 [16];
  undefined1 auVar123 [16];
  undefined1 auVar122 [16];
  undefined1 auVar121 [16];
  undefined1 auVar128 [16];
  undefined1 auVar127 [16];
  undefined1 auVar126 [16];
  undefined1 auVar125 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  float fVar132;
  float fVar133;
  float fVar135;
  float fVar136;
  undefined1 auVar134 [16];
  float fVar137;
  float fVar138;
  float fVar141;
  float fVar142;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  float fVar164;
  float fVar165;
  float fVar166;
  float fVar167;
  
  lVar19 = *(long *)(param_1 + 0x40);
  if ((lVar19 != 0) && (sVar4 = *(short *)(param_1 + 0x48), -1 < (long)sVar4)) {
    plVar1 = (long *)(lVar19 + 0x450);
    lVar15 = nn::os::GetCurrentThread();
    do {
      lVar17 = *plVar1;
      lVar18 = *(long *)(lVar19 + 0x458);
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar16) {
        *plVar1 = lVar17;
        *(long *)(lVar19 + 0x458) = lVar18;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_0272941c:
    while ((lVar17 != 0 && (lVar15 != lVar17))) {
      nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x460));
      do {
        lVar17 = *plVar1;
        lVar18 = *(long *)(lVar19 + 0x458);
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar16) {
          *plVar1 = lVar17;
          *(long *)(lVar19 + 0x458) = lVar18;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    do {
      lVar3 = *plVar1;
      if (lVar3 != lVar17 || *(long *)(lVar19 + 0x458) != lVar18) {
        bVar16 = false;
        ClearExclusiveLocal();
        goto LAB_0272944c;
      }
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar16) {
        *plVar1 = lVar17;
        *(long *)(lVar19 + 0x454) = lVar18 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar16 = true;
LAB_0272944c:
    if (!bVar16) {
      lVar17 = lVar3;
      lVar18 = *(long *)(lVar19 + 0x458);
      goto LAB_0272941c;
    }
    pauVar2 = (undefined1 (*) [16])
              (*(long *)(lVar19 + 0x280) +
              (long)*(short *)(*(long *)(lVar19 + 0xa0) + (long)sVar4 * 2) * 0x40);
    fVar166 = *(float *)(lVar19 + 0x3e0);
    fVar28 = *(float *)(lVar19 + 0x3e4);
    fVar120 = *(float *)(lVar19 + 1000);
    fVar66 = *(float *)(lVar19 + 0x3ec);
    auVar80 = *pauVar2;
    auVar129 = pauVar2[1];
    fVar131 = *(float *)pauVar2[2];
    fVar61 = *(float *)(pauVar2[2] + 4);
    fVar64 = *(float *)(pauVar2[2] + 8);
    fVar65 = *(float *)(pauVar2[2] + 0xc);
    uVar107 = *(undefined8 *)(pauVar2[3] + 8);
    uVar102 = *(undefined8 *)pauVar2[3];
    fVar164 = *(float *)(lVar19 + 0x410);
    fVar165 = *(float *)(lVar19 + 0x414);
    fVar101 = *(float *)(lVar19 + 0x418);
    fVar104 = *(float *)(lVar19 + 0x41c);
    do {
      lVar15 = *plVar1;
      lVar17 = *(long *)(lVar19 + 0x458);
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar16) {
        *plVar1 = lVar15;
        *(long *)(lVar19 + 0x458) = lVar17;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      lVar18 = *plVar1;
      lVar3 = *(long *)(lVar19 + 0x458);
      if (lVar18 != lVar15 || lVar3 != lVar17) {
        bVar16 = false;
        ClearExclusiveLocal();
        goto LAB_027294c0;
      }
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar16) {
        *plVar1 = lVar15;
        *(long *)(lVar19 + 0x454) = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar16 = true;
LAB_027294c0:
    if (!bVar16) {
      do {
        lVar15 = *plVar1;
        lVar17 = *(long *)(lVar19 + 0x458);
        if (lVar15 != lVar18 || lVar17 != lVar3) {
          bVar16 = false;
          ClearExclusiveLocal();
          goto joined_r0x0272972c;
        }
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar16) {
          *plVar1 = lVar18;
          *(long *)(lVar19 + 0x454) = lVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar16 = true;
joined_r0x0272972c:
      if (!bVar16) {
        do {
          lVar18 = *plVar1;
          lVar3 = *(long *)(lVar19 + 0x458);
          if (lVar18 != lVar15 || lVar3 != lVar17) {
            bVar16 = false;
            ClearExclusiveLocal();
            lVar15 = lVar18;
            lVar17 = lVar3;
            goto joined_r0x0272972c;
          }
          cVar5 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar16) {
            *plVar1 = lVar15;
            *(long *)(lVar19 + 0x454) = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar16 = true;
        lVar15 = lVar18;
        lVar17 = lVar3;
        goto joined_r0x0272972c;
      }
    }
    fVar33 = (float)uVar102;
    fVar159 = (float)((ulong)uVar102 >> 0x20);
    fVar31 = (float)*(undefined8 *)(lVar19 + 0x3f0);
    fVar157 = (float)((ulong)*(undefined8 *)(lVar19 + 0x3f0) >> 0x20);
    fVar32 = (float)*(undefined8 *)(lVar19 + 0x3f8);
    fVar158 = (float)((ulong)*(undefined8 *)(lVar19 + 0x3f8) >> 0x20);
    fVar60 = (float)uVar107;
    fVar106 = (float)*(undefined8 *)(lVar19 + 0x400);
    fVar167 = (float)((ulong)*(undefined8 *)(lVar19 + 0x400) >> 0x20);
    fVar27 = (float)*(undefined8 *)(lVar19 + 0x408);
    fVar156 = (float)((ulong)*(undefined8 *)(lVar19 + 0x408) >> 0x20);
    fVar118 = (float)((ulong)uVar107 >> 0x20);
    fVar109 = fVar166 * fVar33 + fVar31 * fVar159 + fVar106 * fVar60 + fVar164 * fVar118;
    fVar113 = fVar28 * fVar33 + fVar157 * fVar159 + fVar167 * fVar60 + fVar165 * fVar118;
    fVar115 = fVar120 * fVar33 + fVar32 * fVar159 + fVar27 * fVar60 + fVar101 * fVar118;
    fVar117 = fVar66 * fVar33 + fVar158 * fVar159 + fVar156 * fVar60 + fVar104 * fVar118;
    fVar118 = auVar129._0_4_;
    fVar76 = auVar129._4_4_;
    fVar33 = auVar80._0_4_;
    fVar159 = auVar80._4_4_;
    fVar77 = auVar129._8_4_;
    fVar60 = auVar80._8_4_;
    fVar100 = fVar166 * fVar131 + fVar31 * fVar61 + fVar106 * fVar64 + fVar164 * fVar65;
    fVar103 = fVar28 * fVar131 + fVar157 * fVar61 + fVar167 * fVar64 + fVar165 * fVar65;
    fVar105 = fVar120 * fVar131 + fVar32 * fVar61 + fVar27 * fVar64 + fVar101 * fVar65;
    fVar108 = fVar66 * fVar131 + fVar158 * fVar61 + fVar156 * fVar64 + fVar104 * fVar65;
    fVar131 = auVar129._12_4_;
    auVar111._0_4_ = fVar166 * fVar118 + fVar31 * fVar76 + fVar106 * fVar77 + fVar164 * fVar131;
    fVar114 = fVar28 * fVar118 + fVar157 * fVar76 + fVar167 * fVar77 + fVar165 * fVar131;
    fVar116 = fVar120 * fVar118 + fVar32 * fVar76 + fVar27 * fVar77 + fVar101 * fVar131;
    fVar118 = fVar66 * fVar118 + fVar158 * fVar76 + fVar156 * fVar77 + fVar104 * fVar131;
    fVar131 = auVar80._12_4_;
    fVar61 = fVar166 * fVar33 + fVar31 * fVar159 + fVar106 * fVar60 + fVar164 * fVar131;
    fVar64 = fVar28 * fVar33 + fVar157 * fVar159 + fVar167 * fVar60 + fVar165 * fVar131;
    fVar65 = fVar120 * fVar33 + fVar32 * fVar159 + fVar27 * fVar60 + fVar101 * fVar131;
    fVar66 = fVar66 * fVar33 + fVar158 * fVar159 + fVar156 * fVar60 + fVar104 * fVar131;
    nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x460));
    lVar19 = *(long *)(param_1 + 0x38);
    FUN_00c41540(lVar19);
    auVar140._8_4_ = fVar65;
    auVar140._0_8_ = CONCAT44(fVar64,fVar61);
    auVar140._12_4_ = fVar66;
    auVar81._8_4_ = fVar116;
    auVar81._0_8_ = CONCAT44(fVar114,auVar111._0_4_);
    auVar81._12_4_ = fVar118;
    *(long *)(lVar19 + 0x94) = auVar81._8_8_;
    *(ulong *)(lVar19 + 0x8c) = CONCAT44(fVar114,auVar111._0_4_);
    auVar112._8_4_ = fVar115;
    auVar112._0_8_ = CONCAT44(fVar113,fVar109);
    auVar112._12_4_ = fVar117;
    *(ulong *)(lVar19 + 0xa4) = CONCAT44(fVar108,fVar105);
    *(ulong *)(lVar19 + 0x9c) = CONCAT44(fVar103,fVar100);
    uVar41 = (undefined1)((uint)fVar100 >> 0x18);
    uVar51 = (undefined1)((uint)fVar109 >> 0x18);
    uVar6 = CONCAT16((char)((uint)fVar100 >> 0x10),
                     CONCAT15((char)((uint)fVar100 >> 8),CONCAT14(SUB41(fVar100,0),fVar61)));
    fVar166 = (float)(CONCAT17(uVar41,uVar6) >> 0x20);
    uVar14 = CONCAT14((char)((uint)fVar114 >> 0x18),
                      CONCAT13((char)((uint)fVar114 >> 0x10),
                               CONCAT12((char)((uint)fVar114 >> 8),CONCAT11(SUB41(fVar114,0),uVar51)
                                       )));
    uVar13 = CONCAT14((char)((uint)fVar64 >> 0x18),
                      CONCAT13((char)((uint)fVar64 >> 0x10),
                               CONCAT12((char)((uint)fVar64 >> 8),CONCAT11(SUB41(fVar64,0),uVar41)))
                     );
    uVar25 = (undefined4)((uint5)uVar13 >> 8);
    auVar53._4_12_ = auVar80._4_12_;
    auVar53._0_4_ = uVar25;
    fVar28 = (float)(CONCAT18((char)((uint)fVar103 >> 0x18),
                              CONCAT17((char)((uint)fVar103 >> 0x10),
                                       CONCAT16((char)((uint)fVar103 >> 8),
                                                CONCAT15(SUB41(fVar103,0),uVar13)))) >> 0x28);
    auVar55._12_4_ = auVar80._12_4_;
    auVar55._0_8_ = auVar53._0_8_;
    auVar55._8_4_ = fVar28;
    fVar120 = (float)((uint5)uVar14 >> 8);
    auVar54._8_8_ = auVar55._8_8_;
    auVar54._4_4_ = fVar120;
    auVar54._0_4_ = uVar25;
    uVar26 = (undefined4)
             (CONCAT18((char)((uint)fVar113 >> 0x18),
                       CONCAT17((char)((uint)fVar113 >> 0x10),
                                CONCAT16((char)((uint)fVar113 >> 8),
                                         CONCAT15(SUB41(fVar113,0),uVar14)))) >> 0x28);
    auVar80._0_12_ = auVar54._0_12_;
    auVar80._12_4_ = uVar26;
    auVar67._4_12_ = auVar129._4_12_;
    auVar67._0_4_ = fVar65;
    auVar69._12_4_ = auVar129._12_4_;
    auVar69._0_8_ = auVar67._0_8_;
    auVar69._8_4_ = fVar105;
    auVar68._8_8_ = auVar69._8_8_;
    auVar68._4_4_ = fVar116;
    auVar68._0_4_ = fVar65;
    auVar70._0_12_ = auVar68._0_12_;
    auVar70._12_4_ = fVar115;
    auVar121._4_12_ = in_q18._4_12_;
    auVar121._0_4_ = fVar66;
    auVar123._12_4_ = in_q18._12_4_;
    auVar123._0_8_ = auVar121._0_8_;
    auVar123._8_4_ = fVar108;
    auVar122._8_8_ = auVar123._8_8_;
    auVar122._4_4_ = fVar118;
    auVar122._0_4_ = fVar66;
    auVar124._0_12_ = auVar122._0_12_;
    auVar124._12_4_ = fVar117;
    *(long *)(lVar19 + 0x84) = auVar140._8_8_;
    *(ulong *)(lVar19 + 0x7c) = CONCAT44(fVar64,fVar61);
    *(long *)(lVar19 + 0xb4) = auVar112._8_8_;
    *(ulong *)(lVar19 + 0xac) = CONCAT44(fVar113,fVar109);
    auVar125._4_12_ = auVar124._4_12_;
    auVar72._4_12_ = auVar70._4_12_;
    auVar129._4_12_ = auVar80._4_12_;
    if ((fVar117 == 1.0) &&
       (auVar20._0_4_ = fVar66 * fVar66 + fVar118 * fVar118, auVar20._4_4_ = fVar108 * fVar108 + 0.0
       , auVar20._8_4_ = fVar66 * fVar66 + fVar118 * fVar118,
       auVar20._12_4_ = fVar108 * fVar108 + 0.0, auVar80 = NEON_ext(auVar20,auVar20,4,1),
       auVar80._0_4_ + auVar80._4_4_ == 0.0)) {
      auVar130._4_4_ = fVar116;
      auVar130._0_4_ = fVar116;
      auVar130._8_4_ = fVar116;
      auVar130._12_4_ = fVar116;
      auVar72._0_4_ = fVar65;
      auVar74._0_8_ = auVar72._0_8_;
      auVar74._8_4_ = fVar105;
      auVar74._12_4_ = fVar115;
      auVar73._8_8_ = auVar74._8_8_;
      auVar73._4_4_ = fVar65;
      auVar73._0_4_ = fVar65;
      auVar75._0_12_ = auVar73._0_12_;
      auVar75._12_4_ = fVar105;
      auVar140 = NEON_ext(auVar75,auVar130,8,1);
      auVar119._4_4_ = fVar120;
      auVar119._0_4_ = fVar120;
      auVar119._8_4_ = fVar120;
      auVar119._12_4_ = fVar120;
      auVar129._0_4_ = uVar25;
      auVar58._0_8_ = auVar129._0_8_;
      auVar58._8_4_ = fVar28;
      auVar58._12_4_ = uVar26;
      auVar57._8_8_ = auVar58._8_8_;
      auVar57._4_4_ = uVar25;
      auVar57._0_4_ = uVar25;
      auVar59._0_12_ = auVar57._0_12_;
      auVar59._12_4_ = fVar28;
      auVar129 = NEON_ext(auVar59,auVar119,8,1);
      auVar111._4_4_ = auVar111._0_4_;
      auVar111._8_4_ = auVar111._0_4_;
      auVar111._12_4_ = auVar111._0_4_;
      auVar8._4_4_ = fVar61;
      auVar8._0_4_ = fVar61;
      auVar8._8_4_ = fVar166;
      auVar8._12_4_ = fVar166;
      auVar112 = NEON_ext(auVar8,auVar111,8,1);
      fVar120 = (fVar114 * auVar140._0_4_ - auVar129._0_4_ * fVar116) * (float)_DAT_03cac270;
      fVar106 = (float)((ulong)_DAT_03cac270 >> 0x20);
      fVar131 = (fVar64 * auVar140._4_4_ - auVar129._4_4_ * fVar65) * fVar106;
      fVar164 = (fVar64 * auVar140._8_4_ - auVar129._8_4_ * fVar65) * (float)_UNK_03cac278;
      fVar167 = (float)((ulong)_UNK_03cac278 >> 0x20);
      fVar101 = (fVar64 * auVar140._12_4_ - auVar129._12_4_ * fVar65) * fVar167;
      fVar28 = fVar61 * fVar120;
      fVar66 = auVar111._0_4_ * fVar131;
      fVar166 = fVar166 * fVar164;
      fVar165 = fVar101 * 0.0;
      auVar23._0_4_ = fVar28 + fVar66;
      auVar23._4_4_ = fVar166 + fVar165;
      auVar23._8_4_ = fVar28 + fVar66;
      auVar23._12_4_ = fVar166 + fVar165;
      auVar80 = NEON_ext(auVar23,auVar23,4,1);
      auVar24._0_4_ = auVar80._0_4_ + auVar80._4_4_;
      auVar24._4_4_ = auVar80._8_4_ + auVar80._12_4_;
      auVar24._8_4_ = auVar80._0_4_ + auVar80._4_4_;
      auVar24._12_4_ = auVar80._8_4_ + auVar80._12_4_;
      auVar80 = NEON_frecpe(auVar24,4);
      iVar79 = -(uint)(auVar24._0_4_ == 0.0);
      iVar86 = -(uint)(auVar24._4_4_ == 0.0);
      iVar91 = -(uint)(auVar24._8_4_ == 0.0);
      iVar96 = -(uint)(auVar24._12_4_ == 0.0);
      bVar78 = ~(byte)iVar79;
      bVar82 = ~(byte)((uint)iVar79 >> 8);
      bVar83 = ~(byte)((uint)iVar79 >> 0x10);
      bVar84 = ~(byte)((uint)iVar79 >> 0x18);
      bVar85 = ~(byte)iVar86;
      bVar87 = ~(byte)((uint)iVar86 >> 8);
      bVar88 = ~(byte)((uint)iVar86 >> 0x10);
      bVar89 = ~(byte)((uint)iVar86 >> 0x18);
      bVar90 = ~(byte)iVar91;
      bVar92 = ~(byte)((uint)iVar91 >> 8);
      bVar93 = ~(byte)((uint)iVar91 >> 0x10);
      bVar94 = ~(byte)((uint)iVar91 >> 0x18);
      bVar95 = ~(byte)iVar96;
      bVar97 = ~(byte)((uint)iVar96 >> 8);
      bVar98 = ~(byte)((uint)iVar96 >> 0x10);
      bVar99 = ~(byte)((uint)iVar96 >> 0x18);
      auVar81 = NEON_frecps(auVar80,auVar24,4);
      auVar62._0_4_ = auVar80._0_4_ * auVar81._0_4_;
      auVar62._4_4_ = auVar80._4_4_ * auVar81._4_4_;
      auVar62._8_4_ = auVar80._8_4_ * auVar81._8_4_;
      auVar62._12_4_ = auVar80._12_4_ * auVar81._12_4_;
      auVar80 = NEON_frecps(auVar62,auVar24,4);
      fVar28 = auVar62._0_4_ * auVar80._0_4_;
      fVar66 = auVar62._4_4_ * auVar80._4_4_;
      fVar165 = auVar62._8_4_ * auVar80._8_4_;
      fVar104 = auVar62._12_4_ * auVar80._12_4_;
      fVar120 = fVar120 * fVar28;
      fVar131 = fVar131 * fVar66;
      fVar164 = fVar164 * fVar165;
      fVar101 = fVar101 * fVar104;
      fVar166 = (float)CONCAT13((byte)((uint)fVar120 >> 0x18) & bVar84,
                                CONCAT12((byte)((uint)fVar120 >> 0x10) & bVar83,
                                         CONCAT11((byte)((uint)fVar120 >> 8) & bVar82,
                                                  SUB41(fVar120,0) & bVar78)));
      auVar29._0_8_ =
           CONCAT17((byte)((uint)fVar131 >> 0x18) & bVar89,
                    CONCAT16((byte)((uint)fVar131 >> 0x10) & bVar88,
                             CONCAT15((byte)((uint)fVar131 >> 8) & bVar87,
                                      CONCAT14(SUB41(fVar131,0) & bVar85,fVar166))));
      auVar29[8] = SUB41(fVar164,0) & bVar90;
      auVar29[9] = (byte)((uint)fVar164 >> 8) & bVar92;
      auVar29[10] = (byte)((uint)fVar164 >> 0x10) & bVar93;
      auVar29[0xb] = (byte)((uint)fVar164 >> 0x18) & bVar94;
      auVar30[0xc] = SUB41(fVar101,0) & bVar95;
      auVar30._0_12_ = auVar29;
      auVar30[0xd] = (byte)((uint)fVar101 >> 8) & bVar97;
      auVar30[0xe] = (byte)((uint)fVar101 >> 0x10) & bVar98;
      auVar30[0xf] = (byte)((uint)fVar101 >> 0x18) & bVar99;
      fVar120 = (auVar111._0_4_ * auVar140._0_4_ - auVar112._0_4_ * fVar116) * (float)_DAT_03cab860
                * fVar28;
      fVar131 = (fVar61 * auVar140._4_4_ - auVar112._4_4_ * fVar65) *
                (float)((ulong)_DAT_03cab860 >> 0x20) * fVar66;
      fVar164 = (fVar61 * auVar140._8_4_ - auVar112._8_4_ * fVar65) * (float)_UNK_03cab868 * fVar165
      ;
      fVar65 = (fVar61 * auVar140._12_4_ - auVar112._12_4_ * fVar65) *
               (float)((ulong)_UNK_03cab868 >> 0x20) * fVar104;
      fVar28 = (auVar111._0_4_ * auVar129._0_4_ - auVar112._0_4_ * fVar114) * (float)_DAT_03cac270 *
               fVar28;
      fVar66 = (fVar61 * auVar129._4_4_ - auVar112._4_4_ * fVar64) * fVar106 * fVar66;
      fVar165 = (fVar61 * auVar129._8_4_ - auVar112._8_4_ * fVar64) * (float)_UNK_03cac278 * fVar165
      ;
      fVar104 = (fVar61 * auVar129._12_4_ - auVar112._12_4_ * fVar64) * fVar167 * fVar104;
      bVar34 = SUB41(fVar120,0) & bVar78;
      bVar35 = (byte)((uint)fVar120 >> 8) & bVar82;
      bVar36 = (byte)((uint)fVar120 >> 0x10) & bVar83;
      bVar37 = (byte)((uint)fVar120 >> 0x18) & bVar84;
      bVar38 = SUB41(fVar131,0) & bVar85;
      bVar39 = (byte)((uint)fVar131 >> 8) & bVar87;
      bVar40 = (byte)((uint)fVar131 >> 0x10) & bVar88;
      bVar42 = (byte)((uint)fVar131 >> 0x18) & bVar89;
      bVar43 = SUB41(fVar164,0) & bVar90;
      bVar44 = (byte)((uint)fVar164 >> 8) & bVar92;
      bVar45 = (byte)((uint)fVar164 >> 0x10) & bVar93;
      bVar46 = (byte)((uint)fVar164 >> 0x18) & bVar94;
      bVar47 = SUB41(fVar65,0) & bVar95;
      bVar48 = (byte)((uint)fVar65 >> 8) & bVar97;
      bVar49 = (byte)((uint)fVar65 >> 0x10) & bVar98;
      bVar50 = (byte)((uint)fVar65 >> 0x18) & bVar99;
      fVar28 = (float)CONCAT13((byte)((uint)fVar28 >> 0x18) & bVar84,
                               CONCAT12((byte)((uint)fVar28 >> 0x10) & bVar83,
                                        CONCAT11((byte)((uint)fVar28 >> 8) & bVar82,
                                                 SUB41(fVar28,0) & bVar78)));
      auVar52._0_8_ =
           CONCAT17((byte)((uint)fVar66 >> 0x18) & bVar89,
                    CONCAT16((byte)((uint)fVar66 >> 0x10) & bVar88,
                             CONCAT15((byte)((uint)fVar66 >> 8) & bVar87,
                                      CONCAT14(SUB41(fVar66,0) & bVar85,fVar28))));
      auVar52[8] = SUB41(fVar165,0) & bVar90;
      auVar52[9] = (byte)((uint)fVar165 >> 8) & bVar92;
      auVar52[10] = (byte)((uint)fVar165 >> 0x10) & bVar93;
      auVar52[0xb] = (byte)((uint)fVar165 >> 0x18) & bVar94;
      auVar56[0xc] = SUB41(fVar104,0) & bVar95;
      auVar56._0_12_ = auVar52;
      auVar56[0xd] = (byte)((uint)fVar104 >> 8) & bVar97;
      auVar56[0xe] = (byte)((uint)fVar104 >> 0x10) & bVar98;
      auVar56[0xf] = (byte)((uint)fVar104 >> 0x18) & bVar99;
      auVar63._0_4_ =
           -(fVar166 * fVar109 +
             (float)CONCAT13(bVar37,CONCAT12(bVar36,CONCAT11(bVar35,bVar34))) * fVar113 +
            fVar28 * fVar115);
      auVar63._4_4_ =
           -((float)((ulong)auVar29._0_8_ >> 0x20) * fVar109 +
             (float)CONCAT13(bVar42,CONCAT12(bVar40,CONCAT11(bVar39,bVar38))) * fVar113 +
            (float)((ulong)auVar52._0_8_ >> 0x20) * fVar115);
      auVar63._8_4_ =
           -(auVar29._8_4_ * fVar109 +
             (float)CONCAT13(bVar46,CONCAT12(bVar45,CONCAT11(bVar44,bVar43))) * fVar113 +
            auVar52._8_4_ * fVar115);
      auVar63._12_4_ = 0x3f800000;
    }
    else {
      auVar139._4_4_ = fVar116;
      auVar139._0_4_ = fVar116;
      auVar139._8_4_ = fVar116;
      auVar139._12_4_ = fVar116;
      auVar9._4_4_ = fVar65;
      auVar9._0_4_ = fVar65;
      auVar9._8_4_ = fVar105;
      auVar9._12_4_ = fVar105;
      auVar140 = NEON_ext(auVar9,auVar139,8,1);
      auVar125._0_4_ = fVar66;
      auVar127._0_8_ = auVar125._0_8_;
      auVar127._8_4_ = fVar108;
      auVar127._12_4_ = fVar117;
      auVar126._8_8_ = auVar127._8_8_;
      auVar126._4_4_ = fVar66;
      auVar126._0_4_ = fVar66;
      auVar128._0_12_ = auVar126._0_12_;
      auVar128._12_4_ = fVar108;
      auVar10._4_4_ = fVar118;
      auVar10._0_4_ = fVar118;
      auVar10._8_4_ = fVar118;
      auVar10._12_4_ = fVar118;
      auVar129 = NEON_ext(auVar128,auVar10,8,1);
      auVar71._4_4_ = fVar120;
      auVar71._0_4_ = fVar120;
      auVar71._8_4_ = fVar120;
      auVar71._12_4_ = fVar120;
      auVar11._4_4_ = uVar25;
      auVar11._0_4_ = uVar25;
      auVar11._8_4_ = fVar28;
      auVar11._12_4_ = fVar28;
      auVar80 = NEON_ext(auVar11,auVar71,8,1);
      fVar138 = auVar140._0_4_;
      fVar141 = auVar140._4_4_;
      fVar142 = auVar140._8_4_;
      fVar143 = auVar140._12_4_;
      fVar77 = auVar129._0_4_;
      fVar100 = auVar129._4_4_;
      fVar103 = auVar129._8_4_;
      fVar114 = auVar129._12_4_;
      fVar144 = fVar117 * fVar138 - fVar115 * fVar77;
      fVar145 = fVar117 * fVar141 - fVar115 * fVar100;
      fVar146 = fVar117 * fVar142 - fVar115 * fVar103;
      fVar147 = fVar108 * fVar143 - fVar105 * fVar114;
      fVar148 = fVar115 * fVar118 - fVar116 * fVar117;
      fVar149 = fVar115 * fVar66 - fVar65 * fVar117;
      fVar150 = fVar115 * fVar66 - fVar65 * fVar117;
      fVar151 = fVar105 * fVar66 - fVar65 * fVar108;
      fVar152 = fVar116 * fVar77 - fVar138 * fVar118;
      fVar153 = fVar65 * fVar100 - fVar141 * fVar66;
      fVar154 = fVar65 * fVar103 - fVar142 * fVar66;
      fVar155 = fVar65 * fVar114 - fVar143 * fVar66;
      auVar134._4_4_ = auVar111._0_4_;
      auVar134._0_4_ = auVar111._0_4_;
      auVar134._8_4_ = auVar111._0_4_;
      auVar134._12_4_ = auVar111._0_4_;
      fVar131 = auVar80._0_4_;
      fVar101 = auVar80._4_4_;
      fVar104 = auVar80._8_4_;
      fVar106 = auVar80._12_4_;
      fVar156 = (fVar120 * fVar144 + fVar148 * fVar131 + fVar152 * fVar113) * (float)_DAT_03cabc00;
      fVar60 = (float)((ulong)_DAT_03cabc00 >> 0x20);
      fVar157 = (fVar64 * fVar145 + fVar149 * fVar101 + fVar153 * fVar113) * fVar60;
      fVar158 = (fVar64 * fVar146 + fVar150 * fVar104 + fVar154 * fVar113) * (float)_UNK_03cabc08;
      fVar76 = (float)((ulong)_UNK_03cabc08 >> 0x20);
      fVar159 = (fVar64 * fVar147 + fVar151 * fVar106 + fVar155 * fVar28) * fVar76;
      auVar12._4_4_ = fVar61;
      auVar12._0_4_ = fVar61;
      auVar12._8_4_ = fVar166;
      auVar12._12_4_ = fVar166;
      auVar80 = NEON_ext(auVar12,auVar134,8,1);
      fVar164 = fVar61 * fVar156;
      fVar165 = auVar111._0_4_ * fVar157;
      fVar166 = fVar166 * fVar158;
      fVar167 = (float)(CONCAT17(uVar51,CONCAT16((char)((uint)fVar109 >> 0x10),
                                                 CONCAT15((char)((uint)fVar109 >> 8),
                                                          CONCAT14(SUB41(fVar109,0),auVar111._0_4_))
                                                )) >> 0x20) * fVar159;
      uVar7 = (undefined3)((uint7)uVar6 >> 0x20);
      fVar133 = auVar80._0_4_;
      fVar135 = auVar80._4_4_;
      fVar136 = auVar80._8_4_;
      fVar137 = auVar80._12_4_;
      fVar27 = fVar109 * fVar120 - auVar111._0_4_ * fVar113;
      fVar31 = fVar109 * fVar64 - fVar61 * fVar113;
      fVar32 = fVar109 * fVar64 - fVar61 * fVar113;
      fVar33 = (float)CONCAT13(uVar41,uVar7) * fVar64 - fVar61 * fVar28;
      auVar21._0_4_ = fVar164 + fVar165;
      auVar21._4_4_ = fVar166 + fVar167;
      auVar21._8_4_ = fVar164 + fVar165;
      auVar21._12_4_ = fVar166 + fVar167;
      fVar166 = auVar111._0_4_ * fVar131 - fVar133 * fVar120;
      fVar120 = fVar61 * fVar101 - fVar135 * fVar64;
      fVar164 = fVar61 * fVar104 - fVar136 * fVar64;
      fVar165 = fVar61 * fVar106 - fVar137 * fVar64;
      fVar160 = fVar113 * fVar133 - fVar109 * fVar131;
      fVar161 = fVar113 * fVar135 - fVar109 * fVar101;
      fVar162 = fVar113 * fVar136 - fVar109 * fVar104;
      fVar163 = fVar28 * fVar137 - (float)CONCAT13(uVar41,uVar7) * fVar106;
      auVar80 = NEON_ext(auVar21,auVar21,4,1);
      auVar22._0_4_ = auVar80._0_4_ + auVar80._4_4_;
      auVar22._4_4_ = auVar80._8_4_ + auVar80._12_4_;
      auVar22._8_4_ = auVar80._0_4_ + auVar80._4_4_;
      auVar22._12_4_ = auVar80._8_4_ + auVar80._12_4_;
      auVar80 = NEON_frecpe(auVar22,4);
      iVar79 = -(uint)(auVar22._0_4_ == 0.0);
      iVar86 = -(uint)(auVar22._4_4_ == 0.0);
      iVar91 = -(uint)(auVar22._8_4_ == 0.0);
      iVar96 = -(uint)(auVar22._12_4_ == 0.0);
      auVar129 = NEON_frecps(auVar80,auVar22,4);
      fVar132 = (float)((ulong)_UNK_03cac218 >> 0x20);
      fVar113 = (float)((ulong)_DAT_03cac210 >> 0x20);
      bVar78 = ~(byte)iVar79;
      bVar82 = ~(byte)((uint)iVar79 >> 8);
      bVar83 = ~(byte)((uint)iVar79 >> 0x10);
      bVar84 = ~(byte)((uint)iVar79 >> 0x18);
      bVar85 = ~(byte)iVar86;
      bVar87 = ~(byte)((uint)iVar86 >> 8);
      bVar88 = ~(byte)((uint)iVar86 >> 0x10);
      bVar89 = ~(byte)((uint)iVar86 >> 0x18);
      bVar90 = ~(byte)iVar91;
      bVar92 = ~(byte)((uint)iVar91 >> 8);
      bVar93 = ~(byte)((uint)iVar91 >> 0x10);
      bVar94 = ~(byte)((uint)iVar91 >> 0x18);
      bVar95 = ~(byte)iVar96;
      bVar97 = ~(byte)((uint)iVar96 >> 8);
      bVar98 = ~(byte)((uint)iVar96 >> 0x10);
      bVar99 = ~(byte)((uint)iVar96 >> 0x18);
      auVar110._0_4_ = auVar80._0_4_ * auVar129._0_4_;
      auVar110._4_4_ = auVar80._4_4_ * auVar129._4_4_;
      auVar110._8_4_ = auVar80._8_4_ * auVar129._8_4_;
      auVar110._12_4_ = auVar80._12_4_ * auVar129._12_4_;
      auVar80 = NEON_frecps(auVar110,auVar22,4);
      fVar101 = auVar110._0_4_ * auVar80._0_4_;
      fVar104 = auVar110._4_4_ * auVar80._4_4_;
      fVar106 = auVar110._8_4_ * auVar80._8_4_;
      fVar167 = auVar110._12_4_ * auVar80._12_4_;
      fVar28 = (auVar111._0_4_ * fVar144 + fVar148 * fVar133 + fVar152 * fVar109) *
               (float)_DAT_03cac210 * fVar101;
      fVar131 = (fVar61 * fVar145 + fVar149 * fVar135 + fVar153 * fVar109) * fVar113 * fVar104;
      fVar64 = (fVar61 * fVar146 + fVar150 * fVar136 + fVar154 * fVar109) * (float)_UNK_03cac218 *
               fVar106;
      fVar61 = (fVar61 * fVar147 + fVar151 * fVar137 + fVar155 * (float)CONCAT13(uVar41,uVar7)) *
               fVar132 * fVar167;
      bVar34 = SUB41(fVar28,0) & bVar78;
      bVar35 = (byte)((uint)fVar28 >> 8) & bVar82;
      bVar36 = (byte)((uint)fVar28 >> 0x10) & bVar83;
      bVar37 = (byte)((uint)fVar28 >> 0x18) & bVar84;
      bVar38 = SUB41(fVar131,0) & bVar85;
      bVar39 = (byte)((uint)fVar131 >> 8) & bVar87;
      bVar40 = (byte)((uint)fVar131 >> 0x10) & bVar88;
      bVar42 = (byte)((uint)fVar131 >> 0x18) & bVar89;
      bVar43 = SUB41(fVar64,0) & bVar90;
      bVar44 = (byte)((uint)fVar64 >> 8) & bVar92;
      bVar45 = (byte)((uint)fVar64 >> 0x10) & bVar93;
      bVar46 = (byte)((uint)fVar64 >> 0x18) & bVar94;
      bVar47 = SUB41(fVar61,0) & bVar95;
      bVar48 = (byte)((uint)fVar61 >> 8) & bVar97;
      bVar49 = (byte)((uint)fVar61 >> 0x10) & bVar98;
      bVar50 = (byte)((uint)fVar61 >> 0x18) & bVar99;
      fVar28 = (fVar118 * fVar160 + fVar27 * fVar77 + fVar166 * fVar117) * (float)_DAT_03cabc00 *
               fVar101;
      fVar131 = (fVar66 * fVar161 + fVar31 * fVar100 + fVar120 * fVar117) * fVar60 * fVar104;
      fVar61 = (fVar66 * fVar162 + fVar32 * fVar103 + fVar164 * fVar117) * (float)_UNK_03cabc08 *
               fVar106;
      fVar66 = (fVar66 * fVar163 + fVar33 * fVar114 + fVar165 * fVar108) * fVar76 * fVar167;
      auVar56[0] = SUB41(fVar28,0) & bVar78;
      auVar56[1] = (byte)((uint)fVar28 >> 8) & bVar82;
      auVar56[2] = (byte)((uint)fVar28 >> 0x10) & bVar83;
      auVar56[3] = (byte)((uint)fVar28 >> 0x18) & bVar84;
      auVar56[4] = SUB41(fVar131,0) & bVar85;
      auVar56[5] = (byte)((uint)fVar131 >> 8) & bVar87;
      auVar56[6] = (byte)((uint)fVar131 >> 0x10) & bVar88;
      auVar56[7] = (byte)((uint)fVar131 >> 0x18) & bVar89;
      auVar56[8] = SUB41(fVar61,0) & bVar90;
      auVar56[9] = (byte)((uint)fVar61 >> 8) & bVar92;
      auVar56[10] = (byte)((uint)fVar61 >> 0x10) & bVar93;
      auVar56[0xb] = (byte)((uint)fVar61 >> 0x18) & bVar94;
      auVar56[0xc] = SUB41(fVar66,0) & bVar95;
      auVar56[0xd] = (byte)((uint)fVar66 >> 8) & bVar97;
      auVar56[0xe] = (byte)((uint)fVar66 >> 0x10) & bVar98;
      auVar56[0xf] = (byte)((uint)fVar66 >> 0x18) & bVar99;
      fVar156 = fVar156 * fVar101;
      fVar157 = fVar157 * fVar104;
      fVar158 = fVar158 * fVar106;
      fVar159 = fVar159 * fVar167;
      auVar30[0] = SUB41(fVar156,0) & bVar78;
      auVar30[1] = (byte)((uint)fVar156 >> 8) & bVar82;
      auVar30[2] = (byte)((uint)fVar156 >> 0x10) & bVar83;
      auVar30[3] = (byte)((uint)fVar156 >> 0x18) & bVar84;
      auVar30[4] = SUB41(fVar157,0) & bVar85;
      auVar30[5] = (byte)((uint)fVar157 >> 8) & bVar87;
      auVar30[6] = (byte)((uint)fVar157 >> 0x10) & bVar88;
      auVar30[7] = (byte)((uint)fVar157 >> 0x18) & bVar89;
      auVar30[8] = SUB41(fVar158,0) & bVar90;
      auVar30[9] = (byte)((uint)fVar158 >> 8) & bVar92;
      auVar30[10] = (byte)((uint)fVar158 >> 0x10) & bVar93;
      auVar30[0xb] = (byte)((uint)fVar158 >> 0x18) & bVar94;
      auVar30[0xc] = SUB41(fVar159,0) & bVar95;
      auVar30[0xd] = (byte)((uint)fVar159 >> 8) & bVar97;
      auVar30[0xe] = (byte)((uint)fVar159 >> 0x10) & bVar98;
      auVar30[0xf] = (byte)((uint)fVar159 >> 0x18) & bVar99;
      fVar101 = (fVar116 * fVar160 + fVar27 * fVar138 + fVar166 * fVar115) * (float)_DAT_03cac210 *
                fVar101;
      fVar104 = (fVar65 * fVar161 + fVar31 * fVar141 + fVar120 * fVar115) * fVar113 * fVar104;
      fVar106 = (fVar65 * fVar162 + fVar32 * fVar142 + fVar164 * fVar115) * (float)_UNK_03cac218 *
                fVar106;
      fVar167 = (fVar65 * fVar163 + fVar33 * fVar143 + fVar165 * fVar105) * fVar132 * fVar167;
      auVar63[0] = SUB41(fVar101,0) & bVar78;
      auVar63[1] = (byte)((uint)fVar101 >> 8) & bVar82;
      auVar63[2] = (byte)((uint)fVar101 >> 0x10) & bVar83;
      auVar63[3] = (byte)((uint)fVar101 >> 0x18) & bVar84;
      auVar63[4] = SUB41(fVar104,0) & bVar85;
      auVar63[5] = (byte)((uint)fVar104 >> 8) & bVar87;
      auVar63[6] = (byte)((uint)fVar104 >> 0x10) & bVar88;
      auVar63[7] = (byte)((uint)fVar104 >> 0x18) & bVar89;
      auVar63[8] = SUB41(fVar106,0) & bVar90;
      auVar63[9] = (byte)((uint)fVar106 >> 8) & bVar92;
      auVar63[10] = (byte)((uint)fVar106 >> 0x10) & bVar93;
      auVar63[0xb] = (byte)((uint)fVar106 >> 0x18) & bVar94;
      auVar63[0xc] = SUB41(fVar167,0) & bVar95;
      auVar63[0xd] = (byte)((uint)fVar167 >> 8) & bVar97;
      auVar63[0xe] = (byte)((uint)fVar167 >> 0x10) & bVar98;
      auVar63[0xf] = (byte)((uint)fVar167 >> 0x18) & bVar99;
    }
    *(long *)(lVar19 + 0xc4) = auVar30._8_8_;
    *(long *)(lVar19 + 0xbc) = auVar30._0_8_;
    *(ulong *)(lVar19 + 0xd4) =
         CONCAT17(bVar50,CONCAT16(bVar49,CONCAT15(bVar48,CONCAT14(bVar47,CONCAT13(bVar46,CONCAT12(
                                                  bVar45,CONCAT11(bVar44,bVar43)))))));
    *(ulong *)(lVar19 + 0xcc) =
         CONCAT17(bVar42,CONCAT16(bVar40,CONCAT15(bVar39,CONCAT14(bVar38,CONCAT13(bVar37,CONCAT12(
                                                  bVar36,CONCAT11(bVar35,bVar34)))))));
    *(long *)(lVar19 + 0xe4) = auVar56._8_8_;
    *(long *)(lVar19 + 0xdc) = auVar56._0_8_;
    *(long *)(lVar19 + 0xf4) = auVar63._8_8_;
    *(long *)(lVar19 + 0xec) = auVar63._0_8_;
  }
  return;
}


