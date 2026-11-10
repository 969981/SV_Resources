/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e932d8; name: FUN_02e932d8
 */


void FUN_02e932d8(long *param_1,long *param_2,long *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  float *pfVar3;
  long lVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  undefined1 auVar20 [16];
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  long lVar31;
  long *plVar32;
  int iVar33;
  undefined1 (*pauVar34) [16];
  long lVar35;
  long lVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  long *plVar39;
  ulong uVar40;
  byte *pbVar41;
  long lVar42;
  float *pfVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  undefined8 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar59;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar60;
  float fVar66;
  float fVar67;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar68;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  int iVar69;
  float fVar71;
  int iVar75;
  float fVar77;
  int iVar78;
  float fVar82;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar70;
  float fVar76;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar83;
  undefined1 auVar74 [16];
  byte bVar84;
  undefined1 uVar85;
  byte bVar86;
  undefined1 uVar87;
  byte bVar88;
  undefined1 uVar89;
  byte bVar90;
  undefined1 uVar91;
  byte bVar92;
  undefined1 uVar93;
  byte bVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  undefined4 uVar122;
  undefined4 uVar123;
  float fVar124;
  undefined1 auVar125 [16];
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_130;
  undefined8 local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined2 local_e0 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if ((ulong)*(ushort *)((long)param_1 + 0x1c) != 0) {
    lVar31 = param_3[7];
    uVar96 = (undefined1)((ulong)lVar31 >> 8);
    uVar98 = (undefined1)((ulong)lVar31 >> 0x10);
    uVar102 = (undefined1)((ulong)lVar31 >> 0x18);
    uVar103 = (undefined1)((ulong)lVar31 >> 0x20);
    uVar104 = (undefined1)((ulong)lVar31 >> 0x28);
    uVar105 = (undefined1)((ulong)lVar31 >> 0x30);
    uVar106 = (undefined1)((ulong)lVar31 >> 0x38);
    lVar31 = param_3[9];
    uVar85 = (undefined1)((ulong)lVar31 >> 8);
    uVar87 = (undefined1)((ulong)lVar31 >> 0x10);
    uVar89 = (undefined1)((ulong)lVar31 >> 0x18);
    uVar91 = (undefined1)((ulong)lVar31 >> 0x20);
    uVar93 = (undefined1)((ulong)lVar31 >> 0x28);
    uVar95 = (undefined1)((ulong)lVar31 >> 0x30);
    uVar97 = (undefined1)((ulong)lVar31 >> 0x38);
    lVar31 = 0;
    if (*param_1 != 0) {
      lVar31 = *param_1 + (long)param_1;
    }
    pauVar34 = (undefined1 (*) [16])(lVar31 + (ulong)*(ushort *)((long)param_1 + 0x1c) * 0x20);
    auVar73 = *pauVar34;
    auVar52 = pauVar34[1];
    auVar53._0_12_ = auVar52._0_12_;
    auVar53._12_4_ = 0;
    lVar31 = param_2[1];
    auVar72._0_4_ = -(uint)(auVar73._0_4_ <= *(float *)(param_3 + 4));
    auVar72._4_4_ = -(uint)(auVar73._4_4_ <= *(float *)((long)param_3 + 0x24));
    auVar72._8_4_ = -(uint)(auVar73._8_4_ <= *(float *)(param_3 + 5));
    auVar72._12_4_ = -(uint)(auVar73._12_4_ <= *(float *)((long)param_3 + 0x2c));
    auVar61._0_4_ = -(uint)(*(float *)(param_3 + 2) <= auVar52._0_4_);
    auVar61._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= auVar52._4_4_);
    auVar61._8_4_ = -(uint)(*(float *)(param_3 + 3) <= auVar52._8_4_);
    auVar61._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
    auVar44[9] = uVar96;
    auVar44._0_9_ = *(unkbyte9 *)(param_3 + 6);
    auVar44[10] = uVar98;
    auVar44[0xb] = uVar102;
    auVar44[0xc] = uVar103;
    auVar44[0xd] = uVar104;
    auVar44[0xe] = uVar105;
    auVar44[0xf] = uVar106;
    auVar44 = NEON_fmax(auVar44,auVar53,4);
    auVar52[9] = uVar85;
    auVar52._0_9_ = *(unkbyte9 *)(param_3 + 8);
    auVar52[10] = uVar87;
    auVar52[0xb] = uVar89;
    auVar52[0xc] = uVar91;
    auVar52[0xd] = uVar93;
    auVar52[0xe] = uVar95;
    auVar52[0xf] = uVar97;
    auVar52 = NEON_fmin(auVar52,auVar73,4);
    auVar9[9] = uVar96;
    auVar9._0_9_ = *(unkbyte9 *)(param_3 + 6);
    auVar9[10] = uVar98;
    auVar9[0xb] = uVar102;
    auVar9[0xc] = uVar103;
    auVar9[0xd] = uVar104;
    auVar9[0xe] = uVar105;
    auVar9[0xf] = uVar106;
    auVar44 = auVar44 ^ (auVar44 ^ auVar9) & auVar61;
    param_3[7] = auVar44._8_8_;
    param_3[6] = auVar44._0_8_;
    auVar73[9] = uVar85;
    auVar73._0_9_ = *(unkbyte9 *)(param_3 + 8);
    auVar73[10] = uVar87;
    auVar73[0xb] = uVar89;
    auVar73[0xc] = uVar91;
    auVar73[0xd] = uVar93;
    auVar73[0xe] = uVar95;
    auVar73[0xf] = uVar97;
    auVar52 = auVar52 ^ (auVar52 ^ auVar73) & auVar72;
    param_3[9] = auVar52._8_8_;
    param_3[8] = auVar52._0_8_;
    if (CONCAT13((byte)((uint)auVar72._4_4_ >> 0x18) & (byte)((uint)auVar61._4_4_ >> 0x18) &
                 (byte)((uint)auVar72._0_4_ >> 0x18) & (byte)((uint)auVar61._0_4_ >> 0x18) &
                 (byte)((uint)auVar72._8_4_ >> 0x18) & (byte)((uint)auVar61._8_4_ >> 0x18),
                 CONCAT12((byte)((uint)auVar72._4_4_ >> 0x10) & (byte)((uint)auVar61._4_4_ >> 0x10)
                          & (byte)((uint)auVar72._0_4_ >> 0x10) &
                            (byte)((uint)auVar61._0_4_ >> 0x10) &
                          (byte)((uint)auVar72._8_4_ >> 0x10) & (byte)((uint)auVar61._8_4_ >> 0x10),
                          CONCAT11((byte)((uint)auVar72._4_4_ >> 8) &
                                   (byte)((uint)auVar61._4_4_ >> 8) &
                                   (byte)((uint)auVar72._0_4_ >> 8) &
                                   (byte)((uint)auVar61._0_4_ >> 8) &
                                   (byte)((uint)auVar72._8_4_ >> 8) &
                                   (byte)((uint)auVar61._8_4_ >> 8),
                                   (byte)auVar72._4_4_ & (byte)auVar61._4_4_ &
                                   (byte)auVar72._0_4_ & (byte)auVar61._0_4_ &
                                   (byte)auVar72._8_4_ & (byte)auVar61._8_4_))) != 0) {
LAB_02e9339c:
      if ((ulong)*(ushort *)(pauVar34[1] + 0xc) != 0) goto code_r0x02e933a4;
      lVar36 = *param_3;
      lVar42 = *(long *)(lVar36 + 8);
      pfVar3 = (float *)(lVar42 + 0x48 +
                        (ulong)*(ushort *)(pauVar34[1] + 0xe) * 0x40 + *(long *)(lVar42 + 0x48));
      pbVar41 = (byte *)((long)pfVar3 + 0x1e);
      if ((*pbVar41 >> 6 & 1) != 0) {
        pfVar43 = pfVar3 + 0xc;
        plVar39 = *(long **)(lVar36 + 0x70);
        local_78 = **(undefined8 **)(lVar36 + 0x58);
        uStack_70 = (*(undefined8 **)(lVar36 + 0x58))[1];
        lVar4 = 0;
        if (*(long *)pfVar43 != 0) {
          lVar4 = *(long *)pfVar43 + (long)pfVar43;
        }
        puVar37 = *(undefined8 **)(lVar36 + 0x60);
        uVar40 = puVar37[3];
        iVar33 = (int)(uVar40 >> 0x20) + (uint)*(byte *)(lVar42 + 0x1c);
        uVar40 = (ulong)((*(ushort *)(pauVar34[1] + 0xe) + 1 << (ulong)(-iVar33 & 0x1f)) - 1) |
                 uVar40 & *(uint *)(PTR_DAT_047d1a60 + ((long)uVar40 >> 0x20) * 4);
        plVar32 = (long *)**(long **)(lVar36 + 0x48);
        uVar122 = (undefined4)uVar40;
        if (plVar32 != (long *)0x0) {
          lVar35 = 0;
          if (*(long *)pfVar43 != 0) {
            lVar35 = *(long *)pfVar43 + (long)pfVar43;
          }
          (**(code **)(*plVar32 + 0x40))
                    (plVar32,*(undefined2 *)(pfVar3 + 0xb),6,*puVar37,puVar37[1],lVar42,uVar40,
                     lVar35,&local_78);
          lVar35 = *(long *)(lVar36 + 0x48);
          if (*(long *)(lVar35 + 8) != 0) {
            local_e0[0] = *(undefined2 *)(lVar35 + 0x10);
            uVar38 = *(undefined8 *)(lVar35 + 0x14);
            *(undefined4 *)((undefined8 *)((ulong)local_e0 | 4) + 1) =
                 *(undefined4 *)(lVar35 + 0x1c);
            *(undefined8 *)((ulong)local_e0 | 4) = uVar38;
            puVar37 = *(undefined8 **)(lVar36 + 0x50);
            local_d0 = *puVar37;
            local_c8 = puVar37[1];
            local_c0 = puVar37[2];
            local_b8 = *(undefined4 *)(puVar37 + 3);
            local_140 = CONCAT62(local_140._2_6_,(undefined2)local_78);
            uVar38 = *(undefined8 *)((ulong)&local_78 | 4);
            local_b0 = 0;
            *(undefined4 *)((undefined8 *)((ulong)&local_140 | 4) + 1) =
                 *(undefined4 *)((undefined8 *)((ulong)&local_78 | 4) + 1);
            *(undefined8 *)((ulong)&local_140 | 4) = uVar38;
            local_130 = **(long **)(lVar36 + 0x60);
            local_128 = (*(long **)(lVar36 + 0x60))[1];
            local_118 = CONCAT44(local_118._4_4_,uVar122);
            local_110 = 0;
            if (*(long *)pfVar43 != 0) {
              local_110 = *(long *)pfVar43 + (long)pfVar43;
            }
            local_120 = lVar42;
            uVar40 = (**(code **)(**(long **)(lVar35 + 8) + 0x40))
                               (*(long **)(lVar35 + 8),6,1,local_e0,&local_140);
            if ((uVar40 & 1) == 0) goto LAB_02e93b74;
          }
        }
        if (*(char *)(lVar4 + 0x19) == '\x03') {
          memcpy(local_e0,*(void **)(lVar36 + 0x48),0x60);
          auVar52 = NEON_fmov(0x3f800000,4);
          if ((*pbVar41 >> 3 & 1) == 0) {
            local_90 = pfVar3[4];
            fStack_8c = pfVar3[5];
            fStack_88 = pfVar3[6];
            if ((*pbVar41 >> 2 & 1) == 0) {
              uStack_98 = CONCAT44(*(float *)(lVar36 + 0x2c) - 0.0,
                                   *(float *)(lVar36 + 0x28) - fStack_88);
              local_a0 = CONCAT44(*(float *)(lVar36 + 0x24) - fStack_8c,
                                  *(float *)(lVar36 + 0x20) - local_90);
              auVar52 = *(undefined1 (*) [16])(lVar36 + 0x30);
              local_90 = auVar52._0_4_ - local_90;
              fStack_8c = auVar52._4_4_ - fStack_8c;
              fStack_88 = auVar52._8_4_ - fStack_88;
              fStack_84 = auVar52._12_4_ - 0.0;
            }
            else {
              fVar120 = *pfVar3;
              fVar81 = pfVar3[1];
              fVar59 = pfVar3[2];
              fVar71 = pfVar3[3];
              fVar82 = fVar81 + fVar81;
              fVar79 = fVar59 + fVar59;
              fVar127 = (float)*(undefined8 *)(lVar36 + 0x20);
              fVar128 = (float)*(undefined8 *)(lVar36 + 0x30);
              fVar129 = (float)((ulong)*(undefined8 *)(lVar36 + 0x20) >> 0x20);
              fVar66 = (float)((ulong)*(undefined8 *)(lVar36 + 0x30) >> 0x20);
              fVar60 = (float)*(undefined8 *)(lVar36 + 0x28);
              fVar67 = (float)*(undefined8 *)(lVar36 + 0x38);
              fVar50 = (fVar120 + fVar120) * fVar120;
              fVar77 = (fVar120 + fVar120) * fVar71;
              fVar119 = 1.0 - fVar59 * fVar79;
              fVar130 = fVar82 * fVar120 + fVar79 * fVar71;
              fVar124 = fVar82 * fVar120 - fVar79 * fVar71;
              fVar59 = (fVar128 - fVar127) * 0.5;
              fVar68 = (fVar66 - fVar129) * 0.5;
              fVar126 = (fVar67 - fVar60) * 0.5;
              local_90 = (fVar127 + fVar128) * 0.5 - local_90;
              fStack_8c = (fVar129 + fVar66) * 0.5 - fStack_8c;
              fStack_88 = (fVar60 + fVar67) * 0.5 - fStack_88;
              fVar131 = fVar119 - fVar82 * fVar81;
              fVar119 = fVar119 - fVar50;
              fVar127 = fVar79 * fVar120 - fVar82 * fVar71;
              fVar129 = fVar79 * fVar81 + fVar77;
              fVar77 = fVar79 * fVar81 - fVar77;
              fVar120 = fVar79 * fVar120 + fVar82 * fVar71;
              fVar60 = (1.0 - fVar50) - fVar82 * fVar81;
              fVar128 = ABS(fVar127 * fVar126) + ABS(fVar131 * fVar59) + ABS(fVar130 * fVar68);
              fVar66 = ABS(fVar129 * fVar126) + ABS(fVar124 * fVar59) + ABS(fVar119 * fVar68);
              fVar67 = ABS(fVar60 * fVar126) + ABS(fVar120 * fVar59) + ABS(fVar77 * fVar68);
              fVar68 = ABS(fVar126 * 0.0) + ABS(fVar77 * fVar59) + ABS(fVar68 * 0.0);
              fVar127 = fVar127 * fStack_88 + fVar131 * local_90 + fVar130 * fStack_8c;
              fVar129 = fVar129 * fStack_88 + fVar124 * local_90 + fVar119 * fStack_8c;
              fVar60 = fVar60 * fStack_88 + fVar120 * local_90 + fVar77 * fStack_8c;
              fVar59 = fStack_88 * 0.0 + fVar77 * local_90 + fStack_8c * 0.0;
              local_90 = fVar127 + fVar128;
              fStack_8c = fVar129 + fVar66;
              fStack_88 = fVar60 + fVar67;
              fStack_84 = fVar59 + fVar68;
              uStack_98 = CONCAT44(fVar59 - fVar68,fVar60 - fVar67);
              local_a0 = CONCAT44(fVar129 - fVar66,fVar127 - fVar128);
            }
          }
          else {
            fVar127 = *(float *)(lVar36 + 0x20);
            fVar129 = *(float *)(lVar36 + 0x24);
            local_a0 = *(undefined8 *)(lVar36 + 0x20);
            fVar60 = *(float *)(lVar36 + 0x28);
            uStack_98 = *(undefined8 *)(lVar36 + 0x28);
            auVar73 = *(undefined1 (*) [16])(lVar36 + 0x30);
            fVar59 = auVar73._0_4_;
            iVar69 = -(uint)(fVar59 < fVar127);
            fVar68 = auVar73._4_4_;
            iVar75 = -(uint)(fVar68 < fVar129);
            fVar126 = auVar73._8_4_;
            iVar78 = -(uint)(fVar126 < fVar60);
            if (CONCAT13((byte)((uint)iVar75 >> 0x18) | (byte)((uint)iVar69 >> 0x18) |
                         (byte)((uint)iVar78 >> 0x18),
                         CONCAT12((byte)((uint)iVar75 >> 0x10) | (byte)((uint)iVar69 >> 0x10) |
                                  (byte)((uint)iVar78 >> 0x10),
                                  CONCAT11((byte)((uint)iVar75 >> 8) | (byte)((uint)iVar69 >> 8) |
                                           (byte)((uint)iVar78 >> 8),
                                           (byte)iVar75 | (byte)iVar69 | (byte)iVar78))) == 0) {
              fVar128 = (float)*(undefined8 *)pfVar3;
              fVar66 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20);
              fVar82 = fVar66 + fVar66;
              fVar67 = (float)*(undefined8 *)(pfVar3 + 2);
              fVar79 = fVar67 + fVar67;
              fVar119 = (fVar128 + fVar128) * fVar128;
              fVar50 = (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20);
              fVar120 = (fVar128 + fVar128) * fVar50;
              fVar131 = fVar79 * fVar66 - fVar120;
              fVar130 = 1.0 - fVar67 * fVar79;
              fVar70 = auVar52._0_4_ / pfVar3[8];
              fVar76 = auVar52._4_4_ / pfVar3[9];
              fVar80 = auVar52._8_4_ / pfVar3[10];
              fVar83 = auVar52._12_4_ / 1.0;
              fVar121 = pfVar3[6];
              fVar67 = fVar70 * (fVar130 - fVar82 * fVar66);
              fVar81 = fVar76 * (fVar82 * fVar128 - fVar79 * fVar50);
              fVar71 = fVar80 * (fVar79 * fVar128 + fVar82 * fVar50);
              fVar77 = fVar83 * fVar131;
              fVar124 = fVar70 * (fVar82 * fVar128 + fVar79 * fVar50);
              fVar130 = fVar76 * (fVar130 - fVar119);
              fVar131 = fVar80 * fVar131;
              fVar19 = fVar83 * 0.0;
              fVar70 = fVar70 * (fVar79 * fVar128 - fVar82 * fVar50);
              fVar76 = fVar76 * (fVar79 * fVar66 + fVar120);
              fVar80 = fVar80 * ((1.0 - fVar119) - fVar82 * fVar66);
              fVar83 = fVar83 * 0.0;
              fVar128 = (float)*(undefined8 *)(pfVar3 + 4);
              fVar66 = (float)((ulong)*(undefined8 *)(pfVar3 + 4) >> 0x20);
              fVar50 = (fVar59 - fVar127) * 0.5;
              fVar120 = (fVar68 - fVar129) * 0.5;
              fVar82 = (fVar126 - fVar60) * 0.5;
              fVar127 = (fVar127 + fVar59) * 0.5;
              fVar129 = (fVar129 + fVar68) * 0.5;
              fVar60 = (fVar60 + fVar126) * 0.5;
              fVar59 = ABS(fVar70 * fVar82) + ABS(fVar67 * fVar50) + ABS(fVar124 * fVar120);
              fVar68 = ABS(fVar76 * fVar82) + ABS(fVar81 * fVar50) + ABS(fVar130 * fVar120);
              fVar126 = ABS(fVar80 * fVar82) + ABS(fVar71 * fVar50) + ABS(fVar131 * fVar120);
              fVar50 = ABS(fVar83 * fVar82) + ABS(fVar77 * fVar50) + ABS(fVar19 * fVar120);
              fVar67 = fVar70 * fVar60 + fVar67 * fVar127 + fVar124 * fVar129 +
                       -(fVar70 * fVar121 + fVar67 * fVar128 + fVar124 * fVar66);
              fVar120 = fVar76 * fVar60 + fVar81 * fVar127 + fVar130 * fVar129 +
                        -(fVar76 * fVar121 + fVar81 * fVar128 + fVar130 * fVar66);
              fVar81 = fVar80 * fVar60 + fVar71 * fVar127 + fVar131 * fVar129 +
                       -(fVar80 * fVar121 + fVar71 * fVar128 + fVar131 * fVar66);
              fVar127 = fVar83 * fVar60 + fVar77 * fVar127 + fVar19 * fVar129 +
                        fVar83 * fVar121 + fVar77 * fVar128 + fVar19 * fVar66;
              local_90 = fVar59 + fVar67;
              fStack_8c = fVar68 + fVar120;
              fStack_88 = fVar126 + fVar81;
              fStack_84 = fVar50 + fVar127;
              auVar63._0_8_ = CONCAT44(fVar120 - fVar68,fVar67 - fVar59);
              auVar63._8_4_ = fVar81 - fVar126;
              auVar63._12_4_ = fVar127 - fVar50;
              uStack_98 = auVar63._8_8_;
              local_a0 = auVar63._0_8_;
            }
            else {
              local_90 = *(float *)(lVar36 + 0x30);
              fStack_8c = *(float *)(lVar36 + 0x34);
              fStack_88 = *(float *)(lVar36 + 0x38);
              fStack_84 = *(float *)(lVar36 + 0x3c);
            }
          }
          puVar37 = *(undefined8 **)(lVar36 + 0x60);
          uVar40 = (ulong)local_110 >> 8;
          local_140 = *puVar37;
          uStack_138 = puVar37[1];
          local_120 = puVar37[4];
          local_118 = 0;
          local_100 = puVar37[8];
          uStack_f8 = puVar37[9];
          uStack_f0 = puVar37[10];
          uStack_e8 = puVar37[0xb];
          uStack_108 = *(undefined4 *)(puVar37 + 7);
          local_110 = CONCAT44(*(undefined4 *)((long)puVar37 + 0x34),
                               (int)CONCAT71((int7)uVar40,*(undefined1 *)(puVar37 + 6)));
          local_128 = CONCAT44(iVar33,uVar122);
          auVar47._8_4_ = 0x5f7ffff0;
          auVar47._0_8_ = 0x5f7ffff05f7ffff0;
          auVar47._12_4_ = 0x5f7ffff0;
          auVar54._8_4_ = 0xdf7ffff0;
          auVar54._0_8_ = 0xdf7ffff0df7ffff0;
          auVar54._12_4_ = 0xdf7ffff0;
          uStack_158 = auVar54._8_8_;
          local_160 = 0xdf7ffff0df7ffff0;
          uStack_148 = auVar47._8_8_;
          uStack_150 = 0x5f7ffff05f7ffff0;
          local_130 = lVar4;
          (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar4 + 0x18) * 0x200 + 0xe0))
                    (lVar4,*(undefined8 *)(lVar36 + 0x40),local_e0,*(undefined8 *)(lVar36 + 0x50),
                     &local_78,&local_140,plVar39,&local_160);
          fVar60 = pfVar3[8];
          fVar59 = pfVar3[9];
          fVar68 = pfVar3[10];
          bVar84 = *pbVar41;
          fVar126 = (float)((ulong)uStack_150 >> 0x20);
          fVar128 = (float)((ulong)uStack_148 >> 0x20);
          fVar127 = (float)((ulong)local_160 >> 0x20);
          fVar129 = (float)((ulong)uStack_158 >> 0x20);
          if ((bVar84 >> 2 & 1) == 0) {
            auVar74._8_8_ = uStack_158;
            auVar74._0_8_ = local_160;
            auVar64._8_8_ = uStack_148;
            auVar64._0_8_ = uStack_150;
            if ((bVar84 >> 3 & 1) != 0) {
              fVar66 = fVar60 * (float)local_160;
              fVar127 = fVar59 * fVar127;
              uVar85 = (undefined1)((uint)fVar127 >> 8);
              uVar87 = (undefined1)((uint)fVar127 >> 0x10);
              uVar89 = (undefined1)((uint)fVar127 >> 0x18);
              fVar67 = fVar68 * (float)uStack_158;
              uVar91 = (undefined1)((uint)fVar67 >> 8);
              uVar93 = (undefined1)((uint)fVar67 >> 0x10);
              uVar95 = (undefined1)((uint)fVar67 >> 0x18);
              fVar129 = fVar129 * 1.0;
              uVar97 = (undefined1)((uint)fVar129 >> 8);
              uVar96 = (undefined1)((uint)fVar129 >> 0x10);
              uVar98 = (undefined1)((uint)fVar129 >> 0x18);
              auVar55._0_4_ = fVar60 * (float)uStack_150;
              auVar55._4_4_ = fVar59 * fVar126;
              auVar55._8_4_ = fVar68 * (float)uStack_148;
              auVar55._12_4_ = fVar128 * 1.0;
              auVar7[4] = SUB41(fVar127,0);
              auVar7._0_4_ = fVar66;
              auVar7[5] = uVar85;
              auVar7[6] = uVar87;
              auVar7[7] = uVar89;
              auVar7[8] = SUB41(fVar67,0);
              auVar7[9] = uVar91;
              auVar7[10] = uVar93;
              auVar7[0xb] = uVar95;
              auVar7[0xc] = SUB41(fVar129,0);
              auVar7[0xd] = uVar97;
              auVar7[0xe] = uVar96;
              auVar7[0xf] = uVar98;
              auVar74 = NEON_fmin(auVar7,auVar55,4);
              auVar8[4] = SUB41(fVar127,0);
              auVar8._0_4_ = fVar66;
              auVar8[5] = uVar85;
              auVar8[6] = uVar87;
              auVar8[7] = uVar89;
              auVar8[8] = SUB41(fVar67,0);
              auVar8[9] = uVar91;
              auVar8[10] = uVar93;
              auVar8[0xb] = uVar95;
              auVar8[0xc] = SUB41(fVar129,0);
              auVar8[0xd] = uVar97;
              auVar8[0xe] = uVar96;
              auVar8[0xf] = uVar98;
              auVar64 = NEON_fmax(auVar8,auVar55,4);
            }
            auVar56._0_4_ = pfVar3[4] + auVar74._0_4_;
            auVar56._4_4_ = pfVar3[5] + auVar74._4_4_;
            auVar56._8_4_ = pfVar3[6] + auVar74._8_4_;
            auVar56._12_4_ = auVar74._12_4_ + 0.0;
            auVar48._0_4_ = pfVar3[4] + auVar64._0_4_;
            auVar48._4_4_ = pfVar3[5] + auVar64._4_4_;
            auVar48._8_4_ = pfVar3[6] + auVar64._8_4_;
            auVar48._12_4_ = auVar64._12_4_ + 0.0;
            auVar49 = NEON_fmax(auVar48,*(undefined1 (*) [16])(lVar36 + 0x30),4);
            auVar57 = NEON_fmin(auVar56,*(undefined1 (*) [16])(lVar36 + 0x20),4);
          }
          else {
            fVar67 = *pfVar3;
            fVar50 = pfVar3[1];
            fVar120 = pfVar3[2];
            fVar81 = pfVar3[3];
            fVar77 = fVar50 + fVar50;
            fVar82 = fVar120 + fVar120;
            fVar66 = (fVar67 + fVar67) * fVar67;
            fVar71 = (fVar67 + fVar67) * fVar81;
            auVar65._0_4_ = -(uint)((bVar84 & 8) == 0);
            auVar65._4_4_ = auVar65._0_4_;
            auVar65._8_4_ = auVar65._0_4_;
            auVar65._12_4_ = auVar65._0_4_;
            auVar125._0_4_ = (float)uStack_150 - local_90;
            auVar125._4_4_ = fVar126 - fStack_8c;
            auVar125._8_4_ = (float)uStack_148 - fStack_88;
            auVar125._12_4_ = fVar128 - fStack_84;
            fVar126 = (float)local_a0 - (float)local_160;
            fVar127 = (float)((ulong)local_a0 >> 0x20) - fVar127;
            fVar128 = (float)uStack_98 - (float)uStack_158;
            fVar129 = (float)((ulong)uStack_98 >> 0x20) - fVar129;
            auVar58._0_4_ = ABS(fVar60) * fVar126;
            auVar58._4_4_ = ABS(fVar59) * fVar127;
            auVar58._8_4_ = ABS(fVar68) * fVar128;
            auVar58._12_4_ = fVar129 * 1.0;
            auVar30._4_4_ = ABS(fVar59) * auVar125._4_4_;
            auVar30._0_4_ = ABS(fVar60) * auVar125._0_4_;
            auVar30._8_4_ = ABS(fVar68) * auVar125._8_4_;
            auVar30._12_4_ = auVar125._12_4_ * 1.0;
            auVar29._4_4_ = fVar127;
            auVar29._0_4_ = fVar126;
            auVar29._8_4_ = fVar128;
            auVar29._12_4_ = fVar129;
            fVar127 = 1.0 - fVar120 * fVar82;
            auVar52 = NEON_smin(auVar58 ^ (auVar58 ^ auVar29) & auVar65,
                                auVar125 ^ (auVar125 ^ auVar30) & ~auVar65,4);
            uVar38 = NEON_fminp(auVar52._0_8_,auVar52._0_8_,4);
            uVar51 = NEON_fmin(CONCAT44(auVar52._8_4_,auVar52._8_4_),uVar38,4);
            uVar38 = CONCAT44(ABS(fVar82 * fVar50 + fVar71) +
                              ABS(fVar77 * fVar67 - fVar82 * fVar81) + ABS(fVar127 - fVar66),
                              ABS(fVar82 * fVar67 - fVar77 * fVar81) +
                              ABS(fVar127 - fVar77 * fVar50) +
                              ABS(fVar77 * fVar67 + fVar82 * fVar81));
            fVar127 = ABS((1.0 - fVar66) - fVar77 * fVar50) +
                      ABS(fVar82 * fVar67 + fVar77 * fVar81) + ABS(fVar82 * fVar50 - fVar71);
            uVar38 = NEON_fmaxp(uVar38,uVar38,4);
            uVar38 = NEON_fmax(CONCAT44(fVar127,fVar127),uVar38,4);
            fVar127 = (float)uVar51 / (float)uVar38;
            fVar129 = (float)((ulong)uVar51 >> 0x20) / (float)((ulong)uVar38 >> 0x20);
            auVar49._0_4_ = fVar127 + *(float *)(lVar36 + 0x30);
            auVar49._4_4_ = fVar129 + *(float *)(lVar36 + 0x34);
            auVar49._8_4_ = fVar127 + *(float *)(lVar36 + 0x38);
            auVar49._12_4_ = fVar129 + *(float *)(lVar36 + 0x3c);
            auVar57._0_4_ = *(float *)(lVar36 + 0x20) - fVar127;
            auVar57._4_4_ = *(float *)(lVar36 + 0x24) - fVar129;
            auVar57._8_4_ = *(float *)(lVar36 + 0x28) - fVar127;
            auVar57._12_4_ = *(float *)(lVar36 + 0x2c) - fVar129;
          }
          auVar52 = NEON_fmin(auVar49,*(undefined1 (*) [16])(param_3 + 8),4);
          auVar73 = NEON_fmax(auVar57,*(undefined1 (*) [16])(param_3 + 6),4);
          param_3[7] = auVar73._8_8_;
          param_3[6] = auVar73._0_8_;
          param_3[9] = auVar52._8_8_;
          param_3[8] = auVar52._0_8_;
        }
        else {
          iVar33 = (int)plVar39[1];
          lVar36 = (long)iVar33;
          if ((int)(*(uint *)((long)plVar39 + 0xc) & 0x7fffffff) <= iVar33) {
            FUN_02e931c8(plVar39,PTR_PTR_047d1a50,lVar36 + 1);
            iVar33 = (int)plVar39[1];
          }
          *(undefined4 *)(*plVar39 + (long)iVar33 * 4) = uVar122;
          *(int *)(plVar39 + 1) = (int)(lVar36 + 1);
        }
      }
      goto LAB_02e93b74;
    }
  }
  return;
code_r0x02e933a4:
  uVar123 = (undefined4)((ulong)param_3[7] >> 0x20);
  uVar122 = (undefined4)((ulong)param_3[9] >> 0x20);
  lVar36 = 0;
  if (*param_1 != 0) {
    lVar36 = *param_1 + (long)param_1;
  }
  pauVar1 = (undefined1 (*) [16])(lVar36 + (ulong)*(ushort *)(pauVar34[1] + 0xc) * 0x20);
  uVar5 = *(ushort *)(pauVar34[1] + 0xe);
  auVar73 = *pauVar1;
  auVar52 = pauVar1[1];
  pauVar2 = (undefined1 (*) [16])(lVar36 + (ulong)uVar5 * 0x20);
  auVar45._0_12_ = auVar52._0_12_;
  auVar45._12_4_ = 0;
  auVar9 = *pauVar2;
  auVar44 = pauVar2[1];
  auVar62._0_12_ = auVar44._0_12_;
  auVar62._12_4_ = 0;
  fVar127 = (float)param_3[4];
  iVar21 = -(uint)(auVar73._0_4_ <= fVar127);
  fVar129 = (float)((ulong)param_3[4] >> 0x20);
  iVar22 = -(uint)(auVar73._4_4_ <= fVar129);
  bVar113 = (byte)((uint)iVar22 >> 8);
  bVar114 = (byte)((uint)iVar22 >> 0x10);
  bVar115 = (byte)((uint)iVar22 >> 0x18);
  fVar60 = (float)param_3[5];
  iVar23 = -(uint)(auVar73._8_4_ <= fVar60);
  bVar116 = (byte)((uint)iVar23 >> 8);
  bVar117 = (byte)((uint)iVar23 >> 0x10);
  bVar118 = (byte)((uint)iVar23 >> 0x18);
  fVar59 = (float)((ulong)param_3[5] >> 0x20);
  iVar24 = -(uint)(auVar73._12_4_ <= fVar59);
  auVar25._12_4_ = uVar122;
  auVar25._0_12_ = *(undefined1 (*) [12])(param_3 + 8);
  auVar53 = NEON_fmin(auVar25,auVar73,4);
  iVar10 = -(uint)(auVar9._0_4_ <= fVar127);
  iVar11 = -(uint)(auVar9._4_4_ <= fVar129);
  bVar99 = (byte)((uint)iVar11 >> 8);
  bVar100 = (byte)((uint)iVar11 >> 0x10);
  bVar101 = (byte)((uint)iVar11 >> 0x18);
  iVar12 = -(uint)(auVar9._8_4_ <= fVar60);
  iVar13 = -(uint)(auVar9._12_4_ <= fVar59);
  fVar127 = (float)param_3[2];
  iVar15 = -(uint)(fVar127 <= auVar52._0_4_);
  fVar129 = (float)((ulong)param_3[2] >> 0x20);
  iVar16 = -(uint)(fVar129 <= auVar52._4_4_);
  bVar107 = (byte)((uint)iVar16 >> 8);
  bVar108 = (byte)((uint)iVar16 >> 0x10);
  bVar109 = (byte)((uint)iVar16 >> 0x18);
  fVar60 = (float)param_3[3];
  iVar17 = -(uint)(fVar60 <= auVar52._8_4_);
  bVar110 = (byte)((uint)iVar17 >> 8);
  bVar111 = (byte)((uint)iVar17 >> 0x10);
  bVar112 = (byte)((uint)iVar17 >> 0x18);
  fVar59 = (float)((ulong)param_3[3] >> 0x20);
  iVar18 = -(uint)(fVar59 <= 0.0);
  auVar27._12_4_ = uVar123;
  auVar27._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
  auVar52 = NEON_fmax(auVar27,auVar45,4);
  iVar33 = -(uint)(fVar127 <= auVar44._0_4_);
  iVar69 = -(uint)(fVar129 <= auVar44._4_4_);
  bVar84 = (byte)((uint)iVar69 >> 8);
  bVar86 = (byte)((uint)iVar69 >> 0x10);
  bVar88 = (byte)((uint)iVar69 >> 0x18);
  iVar75 = -(uint)(fVar60 <= auVar44._8_4_);
  bVar90 = (byte)((uint)iVar75 >> 8);
  bVar92 = (byte)((uint)iVar75 >> 0x10);
  bVar94 = (byte)((uint)iVar75 >> 0x18);
  iVar78 = -(uint)(fVar59 <= 0.0);
  auVar26._12_4_ = uVar122;
  auVar26._0_12_ = *(undefined1 (*) [12])(param_3 + 8);
  auVar20[4] = (byte)iVar22;
  auVar20._0_4_ = iVar21;
  auVar20[5] = bVar113;
  auVar20[6] = bVar114;
  auVar20[7] = bVar115;
  auVar20[8] = (byte)iVar23;
  auVar20[9] = bVar116;
  auVar20[10] = bVar117;
  auVar20[0xb] = bVar118;
  auVar20[0xc] = (char)iVar24;
  auVar20[0xd] = (char)((uint)iVar24 >> 8);
  auVar20[0xe] = (char)((uint)iVar24 >> 0x10);
  auVar20[0xf] = (char)((uint)iVar24 >> 0x18);
  auVar53 = auVar53 ^ (auVar53 ^ auVar26) & auVar20;
  auVar28._12_4_ = uVar123;
  auVar28._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
  auVar14[4] = (byte)iVar16;
  auVar14._0_4_ = iVar15;
  auVar14[5] = bVar107;
  auVar14[6] = bVar108;
  auVar14[7] = bVar109;
  auVar14[8] = (byte)iVar17;
  auVar14[9] = bVar110;
  auVar14[10] = bVar111;
  auVar14[0xb] = bVar112;
  auVar14[0xc] = (char)iVar18;
  auVar14[0xd] = (char)((uint)iVar18 >> 8);
  auVar14[0xe] = (char)((uint)iVar18 >> 0x10);
  auVar14[0xf] = (char)((uint)iVar18 >> 0x18);
  auVar52 = auVar52 ^ (auVar52 ^ auVar28) & auVar14;
  auVar73 = NEON_fmin(auVar53,auVar9,4);
  auVar44 = NEON_fmax(auVar52,auVar62,4);
  auVar6[4] = (byte)iVar69;
  auVar6._0_4_ = iVar33;
  auVar6[5] = bVar84;
  auVar6[6] = bVar86;
  auVar6[7] = bVar88;
  auVar6[8] = (byte)iVar75;
  auVar6[9] = bVar90;
  auVar6[10] = bVar92;
  auVar6[0xb] = bVar94;
  auVar6[0xc] = (char)iVar78;
  auVar6[0xd] = (char)((uint)iVar78 >> 8);
  auVar6[0xe] = (char)((uint)iVar78 >> 0x10);
  auVar6[0xf] = (char)((uint)iVar78 >> 0x18);
  auVar52 = auVar52 ^ (auVar52 ^ auVar44) & ~auVar6;
  param_3[7] = auVar52._8_8_;
  param_3[6] = auVar52._0_8_;
  auVar46[0xc] = (char)iVar13;
  auVar46._8_4_ = iVar12;
  auVar46[0xd] = (char)((uint)iVar13 >> 8);
  auVar46[0xe] = (char)((uint)iVar13 >> 0x10);
  auVar46[0xf] = (char)((uint)iVar13 >> 0x18);
  auVar46[4] = (byte)iVar11;
  auVar46._0_4_ = iVar10;
  auVar46[5] = bVar99;
  auVar46[6] = bVar100;
  auVar46[7] = bVar101;
  auVar73 = auVar73 ^ (auVar73 ^ auVar53) & auVar46;
  param_3[9] = auVar73._8_8_;
  param_3[8] = auVar73._0_8_;
  bVar84 = CONCAT13(bVar115 & bVar109 & (byte)((uint)iVar21 >> 0x18) & (byte)((uint)iVar15 >> 0x18)
                    & bVar118 & bVar112,
                    CONCAT12(bVar114 & bVar108 &
                             (byte)((uint)iVar21 >> 0x10) & (byte)((uint)iVar15 >> 0x10) &
                             bVar117 & bVar111,
                             CONCAT11(bVar113 & bVar107 &
                                      (byte)((uint)iVar21 >> 8) & (byte)((uint)iVar15 >> 8) &
                                      bVar116 & bVar110,
                                      (byte)iVar22 & (byte)iVar16 & (byte)iVar21 & (byte)iVar15 &
                                      (byte)iVar23 & (byte)iVar17))) != 0 |
           (CONCAT13(bVar101 & bVar88 & (byte)((uint)iVar10 >> 0x18) & (byte)((uint)iVar33 >> 0x18)
                     & (byte)((uint)iVar12 >> 0x18) & bVar94,
                     CONCAT12(bVar100 & bVar86 &
                              (byte)((uint)iVar10 >> 0x10) & (byte)((uint)iVar33 >> 0x10) &
                              (byte)((uint)iVar12 >> 0x10) & bVar92,
                              CONCAT11(bVar99 & bVar84 &
                                       (byte)((uint)iVar10 >> 8) & (byte)((uint)iVar33 >> 8) &
                                       (byte)((uint)iVar12 >> 8) & bVar90,
                                       (byte)iVar11 & (byte)iVar69 & (byte)iVar10 & (byte)iVar33 &
                                       (byte)iVar12 & (byte)iVar75))) != 0) << 1;
  pauVar34 = pauVar1;
  if (bVar84 != 1) {
    if (bVar84 == 3) {
      iVar33 = (int)param_2[1];
      lVar36 = (long)iVar33;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar33) {
        FUN_02e8bb18(param_2,PTR_PTR_047d1a50,lVar36 + 1);
        iVar33 = (int)param_2[1];
      }
      *(int *)(param_2 + 1) = (int)(lVar36 + 1);
      *(ushort *)(*param_2 + (long)iVar33 * 2) = uVar5;
    }
    else {
      pauVar34 = pauVar2;
      if (bVar84 != 2) {
LAB_02e93b74:
        if ((int)param_2[1] <= (int)lVar31) {
          return;
        }
        iVar33 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar33;
        lVar36 = 0;
        if (*param_1 != 0) {
          lVar36 = *param_1 + (long)param_1;
        }
        pauVar34 = (undefined1 (*) [16])
                   (lVar36 + (ulong)*(ushort *)(*param_2 + (long)iVar33 * 2) * 0x20);
      }
    }
  }
  goto LAB_02e9339c;
}


