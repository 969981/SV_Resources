/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e96bdc; name: FUN_02e96bdc
 */


void FUN_02e96bdc(long *param_1,long *param_2,long *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  float *pfVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
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
  undefined1 auVar19 [16];
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  long lVar30;
  long *plVar31;
  int iVar32;
  undefined1 (*pauVar33) [16];
  long lVar34;
  long lVar35;
  undefined8 *puVar36;
  undefined8 uVar37;
  long *plVar38;
  ulong *puVar39;
  ulong uVar40;
  long lVar41;
  byte *pbVar42;
  long lVar43;
  float *pfVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  undefined8 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar60;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar61;
  float fVar69;
  float fVar70;
  undefined1 auVar64 [16];
  float fVar62;
  float fVar63;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  int iVar71;
  float fVar72;
  int iVar76;
  float fVar79;
  int iVar80;
  float fVar84;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar77;
  float fVar78;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar85;
  undefined1 auVar75 [16];
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
  byte bVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  undefined1 uVar107;
  undefined1 uVar108;
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
  byte bVar119;
  byte bVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  undefined4 uVar124;
  undefined4 uVar125;
  float fVar126;
  float fVar127;
  undefined1 auVar128 [16];
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  long local_150;
  undefined8 local_148;
  long local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  ulong local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  float fStack_98;
  float fStack_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  ulong uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  
  if ((ulong)*(ushort *)((long)param_1 + 0x1c) != 0) {
    lVar30 = param_3[7];
    uVar98 = (undefined1)((ulong)lVar30 >> 8);
    uVar100 = (undefined1)((ulong)lVar30 >> 0x10);
    uVar104 = (undefined1)((ulong)lVar30 >> 0x18);
    uVar105 = (undefined1)((ulong)lVar30 >> 0x20);
    uVar106 = (undefined1)((ulong)lVar30 >> 0x28);
    uVar107 = (undefined1)((ulong)lVar30 >> 0x30);
    uVar108 = (undefined1)((ulong)lVar30 >> 0x38);
    lVar30 = param_3[9];
    uVar87 = (undefined1)((ulong)lVar30 >> 8);
    uVar89 = (undefined1)((ulong)lVar30 >> 0x10);
    uVar91 = (undefined1)((ulong)lVar30 >> 0x18);
    uVar93 = (undefined1)((ulong)lVar30 >> 0x20);
    uVar95 = (undefined1)((ulong)lVar30 >> 0x28);
    uVar97 = (undefined1)((ulong)lVar30 >> 0x30);
    uVar99 = (undefined1)((ulong)lVar30 >> 0x38);
    lVar30 = 0;
    if (*param_1 != 0) {
      lVar30 = *param_1 + (long)param_1;
    }
    pauVar33 = (undefined1 (*) [16])(lVar30 + (ulong)*(ushort *)((long)param_1 + 0x1c) * 0x20);
    auVar74 = *pauVar33;
    auVar53 = pauVar33[1];
    auVar54._0_12_ = auVar53._0_12_;
    auVar54._12_4_ = 0;
    lVar30 = param_2[1];
    auVar73._0_4_ = -(uint)(auVar74._0_4_ <= *(float *)(param_3 + 4));
    auVar73._4_4_ = -(uint)(auVar74._4_4_ <= *(float *)((long)param_3 + 0x24));
    auVar73._8_4_ = -(uint)(auVar74._8_4_ <= *(float *)(param_3 + 5));
    auVar73._12_4_ = -(uint)(auVar74._12_4_ <= *(float *)((long)param_3 + 0x2c));
    auVar64._0_4_ = -(uint)(*(float *)(param_3 + 2) <= auVar53._0_4_);
    auVar64._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= auVar53._4_4_);
    auVar64._8_4_ = -(uint)(*(float *)(param_3 + 3) <= auVar53._8_4_);
    auVar64._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
    auVar45[9] = uVar98;
    auVar45._0_9_ = *(unkbyte9 *)(param_3 + 6);
    auVar45[10] = uVar100;
    auVar45[0xb] = uVar104;
    auVar45[0xc] = uVar105;
    auVar45[0xd] = uVar106;
    auVar45[0xe] = uVar107;
    auVar45[0xf] = uVar108;
    auVar45 = NEON_fmax(auVar45,auVar54,4);
    auVar53[9] = uVar87;
    auVar53._0_9_ = *(unkbyte9 *)(param_3 + 8);
    auVar53[10] = uVar89;
    auVar53[0xb] = uVar91;
    auVar53[0xc] = uVar93;
    auVar53[0xd] = uVar95;
    auVar53[0xe] = uVar97;
    auVar53[0xf] = uVar99;
    auVar53 = NEON_fmin(auVar53,auVar74,4);
    auVar9[9] = uVar98;
    auVar9._0_9_ = *(unkbyte9 *)(param_3 + 6);
    auVar9[10] = uVar100;
    auVar9[0xb] = uVar104;
    auVar9[0xc] = uVar105;
    auVar9[0xd] = uVar106;
    auVar9[0xe] = uVar107;
    auVar9[0xf] = uVar108;
    auVar45 = auVar45 ^ (auVar45 ^ auVar9) & auVar64;
    param_3[7] = auVar45._8_8_;
    param_3[6] = auVar45._0_8_;
    auVar74[9] = uVar87;
    auVar74._0_9_ = *(unkbyte9 *)(param_3 + 8);
    auVar74[10] = uVar89;
    auVar74[0xb] = uVar91;
    auVar74[0xc] = uVar93;
    auVar74[0xd] = uVar95;
    auVar74[0xe] = uVar97;
    auVar74[0xf] = uVar99;
    auVar53 = auVar53 ^ (auVar53 ^ auVar74) & auVar73;
    param_3[9] = auVar53._8_8_;
    param_3[8] = auVar53._0_8_;
    if (CONCAT13((byte)((uint)auVar73._4_4_ >> 0x18) & (byte)((uint)auVar64._4_4_ >> 0x18) &
                 (byte)((uint)auVar73._0_4_ >> 0x18) & (byte)((uint)auVar64._0_4_ >> 0x18) &
                 (byte)((uint)auVar73._8_4_ >> 0x18) & (byte)((uint)auVar64._8_4_ >> 0x18),
                 CONCAT12((byte)((uint)auVar73._4_4_ >> 0x10) & (byte)((uint)auVar64._4_4_ >> 0x10)
                          & (byte)((uint)auVar73._0_4_ >> 0x10) &
                            (byte)((uint)auVar64._0_4_ >> 0x10) &
                          (byte)((uint)auVar73._8_4_ >> 0x10) & (byte)((uint)auVar64._8_4_ >> 0x10),
                          CONCAT11((byte)((uint)auVar73._4_4_ >> 8) &
                                   (byte)((uint)auVar64._4_4_ >> 8) &
                                   (byte)((uint)auVar73._0_4_ >> 8) &
                                   (byte)((uint)auVar64._0_4_ >> 8) &
                                   (byte)((uint)auVar73._8_4_ >> 8) &
                                   (byte)((uint)auVar64._8_4_ >> 8),
                                   (byte)auVar73._4_4_ & (byte)auVar64._4_4_ &
                                   (byte)auVar73._0_4_ & (byte)auVar64._0_4_ &
                                   (byte)auVar73._8_4_ & (byte)auVar64._8_4_))) != 0) {
      puVar39 = (ulong *)((ulong)&local_100 | 4);
LAB_02e96cac:
      if ((ulong)*(ushort *)(pauVar33[1] + 0xc) != 0) goto code_r0x02e96cb4;
      lVar35 = *param_3;
      lVar43 = *(long *)(lVar35 + 8);
      pfVar3 = (float *)(lVar43 + 0x48 +
                        (ulong)*(ushort *)(pauVar33[1] + 0xe) * 0x40 + *(long *)(lVar43 + 0x48));
      pbVar42 = (byte *)((long)pfVar3 + 0x1e);
      if ((*pbVar42 >> 6 & 1) != 0) {
        pfVar44 = pfVar3 + 0xc;
        plVar38 = *(long **)(lVar35 + 0x70);
        local_100 = **(undefined8 **)(lVar35 + 0x58);
        uStack_f8 = (*(undefined8 **)(lVar35 + 0x58))[1];
        lVar41 = 0;
        if (*(long *)pfVar44 != 0) {
          lVar41 = *(long *)pfVar44 + (long)pfVar44;
        }
        puVar36 = *(undefined8 **)(lVar35 + 0x60);
        uVar40 = puVar36[3];
        iVar32 = (int)(uVar40 >> 0x20) + (uint)*(byte *)(lVar43 + 0x1c);
        uVar40 = (ulong)((*(ushort *)(pauVar33[1] + 0xe) + 1 << (ulong)(-iVar32 & 0x1f)) - 1) |
                 uVar40 & *(uint *)(PTR_DAT_047d1a60 + ((long)uVar40 >> 0x20) * 4);
        plVar31 = (long *)**(long **)(lVar35 + 0x48);
        uVar124 = (undefined4)uVar40;
        if (plVar31 != (long *)0x0) {
          lVar34 = 0;
          if (*(long *)pfVar44 != 0) {
            lVar34 = *(long *)pfVar44 + (long)pfVar44;
          }
          (**(code **)(*plVar31 + 0x40))
                    (plVar31,*(undefined2 *)(pfVar3 + 0xb),6,*puVar36,puVar36[1],lVar43,uVar40,
                     lVar34,&local_100);
          lVar34 = *(long *)(lVar35 + 0x48);
          if (*(long *)(lVar34 + 8) != 0) {
            local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(lVar34 + 0x10));
            uVar37 = *(undefined8 *)(lVar34 + 0x14);
            *(undefined4 *)((undefined8 *)((ulong)&local_f0 | 4) + 1) =
                 *(undefined4 *)(lVar34 + 0x1c);
            *(undefined8 *)((ulong)&local_f0 | 4) = uVar37;
            puVar36 = *(undefined8 **)(lVar35 + 0x50);
            local_e0 = *puVar36;
            local_d8 = puVar36[1];
            local_d0 = puVar36[2];
            local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(puVar36 + 3));
            local_c0 = 0;
            local_160 = CONCAT62(local_160._2_6_,(undefined2)local_100);
            uVar40 = *puVar39;
            *(int *)((ulong *)((ulong)&local_160 | 4) + 1) = (int)puVar39[1];
            *(ulong *)((ulong)&local_160 | 4) = uVar40;
            local_150 = **(long **)(lVar35 + 0x60);
            local_148 = (*(long **)(lVar35 + 0x60))[1];
            local_138 = CONCAT44(local_138._4_4_,uVar124);
            local_130 = 0;
            if (*(long *)pfVar44 != 0) {
              local_130 = *(long *)pfVar44 + (long)pfVar44;
            }
            local_140 = lVar43;
            uVar40 = (**(code **)(**(long **)(lVar34 + 8) + 0x40))
                               (*(long **)(lVar34 + 8),6,1,&local_f0,&local_160);
            if ((uVar40 & 1) == 0) goto LAB_02e97534;
          }
        }
        if (*(char *)(lVar41 + 0x19) == '\x03') {
          memcpy(&local_f0,*(void **)(lVar35 + 0x48),0x60);
          auVar53 = NEON_fmov(0x3f800000,4);
          if ((*pbVar42 >> 3 & 1) == 0) {
            fVar51 = pfVar3[4];
            fVar60 = pfVar3[5];
            fStack_98 = pfVar3[6];
            if ((*pbVar42 >> 2 & 1) == 0) {
              uStack_a8 = CONCAT44(*(float *)(lVar35 + 0x2c) - 0.0,
                                   *(float *)(lVar35 + 0x28) - fStack_98);
              local_b0 = CONCAT44(*(float *)(lVar35 + 0x24) - fVar60,
                                  *(float *)(lVar35 + 0x20) - fVar51);
              auVar53 = *(undefined1 (*) [16])(lVar35 + 0x30);
              fVar51 = auVar53._0_4_ - fVar51;
              fVar60 = auVar53._4_4_ - fVar60;
              fStack_98 = auVar53._8_4_ - fStack_98;
              fStack_94 = auVar53._12_4_ - 0.0;
              goto LAB_02e9731c;
            }
            fVar72 = *pfVar3;
            fVar79 = pfVar3[1];
            fVar129 = pfVar3[2];
            fVar84 = pfVar3[3];
            fVar77 = fVar79 + fVar79;
            fVar81 = fVar129 + fVar129;
            fVar127 = (float)*(undefined8 *)(lVar35 + 0x20);
            fVar63 = (float)*(undefined8 *)(lVar35 + 0x30);
            fVar122 = (float)((ulong)*(undefined8 *)(lVar35 + 0x20) >> 0x20);
            fVar69 = (float)((ulong)*(undefined8 *)(lVar35 + 0x30) >> 0x20);
            fVar62 = (float)*(undefined8 *)(lVar35 + 0x28);
            fVar70 = (float)*(undefined8 *)(lVar35 + 0x38);
            fVar83 = (fVar72 + fVar72) * fVar72;
            fVar61 = (fVar72 + fVar72) * fVar84;
            fVar121 = 1.0 - fVar129 * fVar81;
            fVar131 = fVar77 * fVar72 + fVar81 * fVar84;
            fVar126 = fVar77 * fVar72 - fVar81 * fVar84;
            fVar129 = (fVar63 - fVar127) * 0.5;
            fVar130 = (fVar69 - fVar122) * 0.5;
            fVar8 = (fVar70 - fVar62) * 0.5;
            fVar51 = (fVar127 + fVar63) * 0.5 - fVar51;
            fVar60 = (fVar122 + fVar69) * 0.5 - fVar60;
            fStack_98 = (fVar62 + fVar70) * 0.5 - fStack_98;
            fVar132 = fVar121 - fVar77 * fVar79;
            fVar121 = fVar121 - fVar83;
            fVar127 = fVar81 * fVar72 - fVar77 * fVar84;
            fVar122 = fVar81 * fVar79 + fVar61;
            fVar61 = fVar81 * fVar79 - fVar61;
            fVar72 = fVar81 * fVar72 + fVar77 * fVar84;
            fVar62 = (1.0 - fVar83) - fVar77 * fVar79;
            fVar63 = ABS(fVar127 * fVar8) + ABS(fVar132 * fVar129) + ABS(fVar131 * fVar130);
            fVar69 = ABS(fVar122 * fVar8) + ABS(fVar126 * fVar129) + ABS(fVar121 * fVar130);
            fVar70 = ABS(fVar62 * fVar8) + ABS(fVar72 * fVar129) + ABS(fVar61 * fVar130);
            fVar129 = ABS(fVar8 * 0.0) + ABS(fVar61 * fVar129) + ABS(fVar130 * 0.0);
            fVar127 = fVar127 * fStack_98 + fVar132 * fVar51 + fVar131 * fVar60;
            fVar122 = fVar122 * fStack_98 + fVar126 * fVar51 + fVar121 * fVar60;
            fVar62 = fVar62 * fStack_98 + fVar72 * fVar51 + fVar61 * fVar60;
            fVar51 = fStack_98 * 0.0 + fVar61 * fVar51 + fVar60 * 0.0;
            fStack_98 = fVar62 + fVar70;
            fStack_94 = fVar51 + fVar129;
            uStack_a8 = CONCAT44(fVar51 - fVar129,fVar62 - fVar70);
            local_b0 = CONCAT44(fVar122 - fVar69,fVar127 - fVar63);
            local_a0 = CONCAT44(fVar122 + fVar69,fVar127 + fVar63);
          }
          else {
            fVar51 = *(float *)(lVar35 + 0x20);
            fVar60 = *(float *)(lVar35 + 0x24);
            local_b0 = *(ulong *)(lVar35 + 0x20);
            fVar127 = *(float *)(lVar35 + 0x28);
            uStack_a8 = *(ulong *)(lVar35 + 0x28);
            auVar74 = *(undefined1 (*) [16])(lVar35 + 0x30);
            fVar122 = auVar74._0_4_;
            iVar71 = -(uint)(fVar122 < fVar51);
            fVar62 = auVar74._4_4_;
            iVar76 = -(uint)(fVar62 < fVar60);
            fVar129 = auVar74._8_4_;
            iVar80 = -(uint)(fVar129 < fVar127);
            if (CONCAT13((byte)((uint)iVar76 >> 0x18) | (byte)((uint)iVar71 >> 0x18) |
                         (byte)((uint)iVar80 >> 0x18),
                         CONCAT12((byte)((uint)iVar76 >> 0x10) | (byte)((uint)iVar71 >> 0x10) |
                                  (byte)((uint)iVar80 >> 0x10),
                                  CONCAT11((byte)((uint)iVar76 >> 8) | (byte)((uint)iVar71 >> 8) |
                                           (byte)((uint)iVar80 >> 8),
                                           (byte)iVar76 | (byte)iVar71 | (byte)iVar80))) == 0) {
              fVar130 = (float)*(undefined8 *)pfVar3;
              fVar8 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20);
              fVar84 = fVar8 + fVar8;
              fVar63 = (float)*(undefined8 *)(pfVar3 + 2);
              fVar61 = fVar63 + fVar63;
              fVar77 = (fVar130 + fVar130) * fVar130;
              fVar69 = (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20);
              fVar70 = (fVar130 + fVar130) * fVar69;
              fVar126 = fVar61 * fVar8 - fVar70;
              fVar121 = 1.0 - fVar63 * fVar61;
              fVar132 = auVar53._0_4_ / pfVar3[8];
              fVar78 = auVar53._4_4_ / pfVar3[9];
              fVar82 = auVar53._8_4_ / pfVar3[10];
              fVar85 = auVar53._12_4_ / 1.0;
              fVar123 = pfVar3[6];
              fVar63 = fVar132 * (fVar121 - fVar84 * fVar8);
              fVar83 = fVar78 * (fVar84 * fVar130 - fVar61 * fVar69);
              fVar72 = fVar82 * (fVar61 * fVar130 + fVar84 * fVar69);
              fVar79 = fVar85 * fVar126;
              fVar81 = fVar132 * (fVar84 * fVar130 + fVar61 * fVar69);
              fVar121 = fVar78 * (fVar121 - fVar77);
              fVar126 = fVar82 * fVar126;
              fVar131 = fVar85 * 0.0;
              fVar132 = fVar132 * (fVar61 * fVar130 - fVar84 * fVar69);
              fVar78 = fVar78 * (fVar61 * fVar8 + fVar70);
              fVar82 = fVar82 * ((1.0 - fVar77) - fVar84 * fVar8);
              fVar85 = fVar85 * 0.0;
              fVar130 = (float)*(undefined8 *)(pfVar3 + 4);
              fVar8 = (float)((ulong)*(undefined8 *)(pfVar3 + 4) >> 0x20);
              fVar69 = (fVar122 - fVar51) * 0.5;
              fVar70 = (fVar62 - fVar60) * 0.5;
              fVar84 = (fVar129 - fVar127) * 0.5;
              fVar51 = (fVar51 + fVar122) * 0.5;
              fVar60 = (fVar60 + fVar62) * 0.5;
              fVar127 = (fVar127 + fVar129) * 0.5;
              fVar122 = ABS(fVar132 * fVar84) + ABS(fVar63 * fVar69) + ABS(fVar81 * fVar70);
              fVar62 = ABS(fVar78 * fVar84) + ABS(fVar83 * fVar69) + ABS(fVar121 * fVar70);
              fVar129 = ABS(fVar82 * fVar84) + ABS(fVar72 * fVar69) + ABS(fVar126 * fVar70);
              fVar69 = ABS(fVar85 * fVar84) + ABS(fVar79 * fVar69) + ABS(fVar131 * fVar70);
              fVar63 = fVar132 * fVar127 + fVar63 * fVar51 + fVar81 * fVar60 +
                       -(fVar132 * fVar123 + fVar63 * fVar130 + fVar81 * fVar8);
              fVar70 = fVar78 * fVar127 + fVar83 * fVar51 + fVar121 * fVar60 +
                       -(fVar78 * fVar123 + fVar83 * fVar130 + fVar121 * fVar8);
              fVar83 = fVar82 * fVar127 + fVar72 * fVar51 + fVar126 * fVar60 +
                       -(fVar82 * fVar123 + fVar72 * fVar130 + fVar126 * fVar8);
              fVar127 = fVar85 * fVar127 + fVar79 * fVar51 + fVar131 * fVar60 +
                        fVar85 * fVar123 + fVar79 * fVar130 + fVar131 * fVar8;
              fVar51 = fVar122 + fVar63;
              fVar60 = fVar62 + fVar70;
              fStack_98 = fVar129 + fVar83;
              fStack_94 = fVar69 + fVar127;
              auVar66._0_8_ = CONCAT44(fVar70 - fVar62,fVar63 - fVar122);
              auVar66._8_4_ = fVar83 - fVar129;
              auVar66._12_4_ = fVar127 - fVar69;
              uStack_a8 = auVar66._8_8_;
              local_b0 = auVar66._0_8_;
            }
            else {
              fVar51 = *(float *)(lVar35 + 0x30);
              fVar60 = *(float *)(lVar35 + 0x34);
              fStack_98 = *(float *)(lVar35 + 0x38);
              fStack_94 = *(float *)(lVar35 + 0x3c);
            }
LAB_02e9731c:
            local_a0 = CONCAT44(fVar60,fVar51);
          }
          puVar36 = *(undefined8 **)(lVar35 + 0x60);
          uVar40 = (ulong)local_130 >> 8;
          local_160 = *puVar36;
          uStack_158 = puVar36[1];
          local_140 = puVar36[4];
          local_138 = 0;
          local_120 = puVar36[8];
          uStack_118 = puVar36[9];
          uStack_110 = puVar36[10];
          uStack_108 = puVar36[0xb];
          uStack_128 = *(undefined4 *)(puVar36 + 7);
          local_130 = CONCAT44(*(undefined4 *)((long)puVar36 + 0x34),
                               (int)CONCAT71((int7)uVar40,*(undefined1 *)(puVar36 + 6)));
          local_148 = CONCAT44(iVar32,uVar124);
          auVar48._8_4_ = 0x5f7ffff0;
          auVar48._0_8_ = 0x5f7ffff05f7ffff0;
          auVar48._12_4_ = 0x5f7ffff0;
          auVar55._8_4_ = 0xdf7ffff0;
          auVar55._0_8_ = 0xdf7ffff0df7ffff0;
          auVar55._12_4_ = 0xdf7ffff0;
          uStack_178 = auVar55._8_8_;
          local_180 = 0xdf7ffff0df7ffff0;
          uStack_168 = auVar48._8_8_;
          uStack_170 = 0x5f7ffff05f7ffff0;
          local_150 = lVar41;
          (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar41 + 0x18) * 0x200 + 0xe8))
                    (lVar41,*(undefined8 *)(lVar35 + 0x40),&local_f0,*(undefined8 *)(lVar35 + 0x50),
                     &local_100,&local_160,plVar38,&local_180);
          fVar127 = pfVar3[8];
          fVar122 = pfVar3[9];
          fVar62 = pfVar3[10];
          bVar86 = *pbVar42;
          fVar129 = (float)((ulong)uStack_170 >> 0x20);
          fVar130 = (float)((ulong)uStack_168 >> 0x20);
          fVar51 = (float)((ulong)local_180 >> 0x20);
          fVar60 = (float)((ulong)uStack_178 >> 0x20);
          if ((bVar86 >> 2 & 1) == 0) {
            auVar75._8_8_ = uStack_178;
            auVar75._0_8_ = local_180;
            auVar67._8_8_ = uStack_168;
            auVar67._0_8_ = uStack_170;
            if ((bVar86 >> 3 & 1) != 0) {
              fVar8 = fVar127 * (float)local_180;
              fVar51 = fVar122 * fVar51;
              uVar87 = (undefined1)((uint)fVar51 >> 8);
              uVar89 = (undefined1)((uint)fVar51 >> 0x10);
              uVar91 = (undefined1)((uint)fVar51 >> 0x18);
              fVar63 = fVar62 * (float)uStack_178;
              uVar93 = (undefined1)((uint)fVar63 >> 8);
              uVar95 = (undefined1)((uint)fVar63 >> 0x10);
              uVar97 = (undefined1)((uint)fVar63 >> 0x18);
              fVar60 = fVar60 * 1.0;
              uVar99 = (undefined1)((uint)fVar60 >> 8);
              uVar98 = (undefined1)((uint)fVar60 >> 0x10);
              uVar100 = (undefined1)((uint)fVar60 >> 0x18);
              auVar56._0_4_ = fVar127 * (float)uStack_170;
              auVar56._4_4_ = fVar122 * fVar129;
              auVar56._8_4_ = fVar62 * (float)uStack_168;
              auVar56._12_4_ = fVar130 * 1.0;
              auVar6[4] = SUB41(fVar51,0);
              auVar6._0_4_ = fVar8;
              auVar6[5] = uVar87;
              auVar6[6] = uVar89;
              auVar6[7] = uVar91;
              auVar6[8] = SUB41(fVar63,0);
              auVar6[9] = uVar93;
              auVar6[10] = uVar95;
              auVar6[0xb] = uVar97;
              auVar6[0xc] = SUB41(fVar60,0);
              auVar6[0xd] = uVar99;
              auVar6[0xe] = uVar98;
              auVar6[0xf] = uVar100;
              auVar75 = NEON_fmin(auVar6,auVar56,4);
              auVar7[4] = SUB41(fVar51,0);
              auVar7._0_4_ = fVar8;
              auVar7[5] = uVar87;
              auVar7[6] = uVar89;
              auVar7[7] = uVar91;
              auVar7[8] = SUB41(fVar63,0);
              auVar7[9] = uVar93;
              auVar7[10] = uVar95;
              auVar7[0xb] = uVar97;
              auVar7[0xc] = SUB41(fVar60,0);
              auVar7[0xd] = uVar99;
              auVar7[0xe] = uVar98;
              auVar7[0xf] = uVar100;
              auVar67 = NEON_fmax(auVar7,auVar56,4);
            }
            auVar57._0_4_ = pfVar3[4] + auVar75._0_4_;
            auVar57._4_4_ = pfVar3[5] + auVar75._4_4_;
            auVar57._8_4_ = pfVar3[6] + auVar75._8_4_;
            auVar57._12_4_ = auVar75._12_4_ + 0.0;
            auVar49._0_4_ = pfVar3[4] + auVar67._0_4_;
            auVar49._4_4_ = pfVar3[5] + auVar67._4_4_;
            auVar49._8_4_ = pfVar3[6] + auVar67._8_4_;
            auVar49._12_4_ = auVar67._12_4_ + 0.0;
            auVar50 = NEON_fmax(auVar49,*(undefined1 (*) [16])(lVar35 + 0x30),4);
            auVar58 = NEON_fmin(auVar57,*(undefined1 (*) [16])(lVar35 + 0x20),4);
          }
          else {
            fVar63 = *pfVar3;
            fVar69 = pfVar3[1];
            fVar70 = pfVar3[2];
            fVar83 = pfVar3[3];
            fVar79 = fVar69 + fVar69;
            fVar84 = fVar70 + fVar70;
            fVar8 = (fVar63 + fVar63) * fVar63;
            fVar72 = (fVar63 + fVar63) * fVar83;
            auVar68._0_4_ = -(uint)((bVar86 & 8) == 0);
            auVar68._4_4_ = auVar68._0_4_;
            auVar68._8_4_ = auVar68._0_4_;
            auVar68._12_4_ = auVar68._0_4_;
            auVar128._0_4_ = (float)uStack_170 - (float)local_a0;
            auVar128._4_4_ = fVar129 - local_a0._4_4_;
            auVar128._8_4_ = (float)uStack_168 - fStack_98;
            auVar128._12_4_ = fVar130 - fStack_94;
            fVar129 = (float)local_b0 - (float)local_180;
            fVar51 = (float)(local_b0 >> 0x20) - fVar51;
            fVar130 = (float)uStack_a8 - (float)uStack_178;
            fVar60 = (float)(uStack_a8 >> 0x20) - fVar60;
            auVar59._0_4_ = ABS(fVar127) * fVar129;
            auVar59._4_4_ = ABS(fVar122) * fVar51;
            auVar59._8_4_ = ABS(fVar62) * fVar130;
            auVar59._12_4_ = fVar60 * 1.0;
            auVar29._4_4_ = ABS(fVar122) * auVar128._4_4_;
            auVar29._0_4_ = ABS(fVar127) * auVar128._0_4_;
            auVar29._8_4_ = ABS(fVar62) * auVar128._8_4_;
            auVar29._12_4_ = auVar128._12_4_ * 1.0;
            auVar28._4_4_ = fVar51;
            auVar28._0_4_ = fVar129;
            auVar28._8_4_ = fVar130;
            auVar28._12_4_ = fVar60;
            fVar51 = 1.0 - fVar70 * fVar84;
            auVar53 = NEON_smin(auVar59 ^ (auVar59 ^ auVar28) & auVar68,
                                auVar128 ^ (auVar128 ^ auVar29) & ~auVar68,4);
            uVar37 = NEON_fminp(auVar53._0_8_,auVar53._0_8_,4);
            uVar52 = NEON_fmin(CONCAT44(auVar53._8_4_,auVar53._8_4_),uVar37,4);
            uVar37 = CONCAT44(ABS(fVar84 * fVar69 + fVar72) +
                              ABS(fVar79 * fVar63 - fVar84 * fVar83) + ABS(fVar51 - fVar8),
                              ABS(fVar84 * fVar63 - fVar79 * fVar83) +
                              ABS(fVar51 - fVar79 * fVar69) + ABS(fVar79 * fVar63 + fVar84 * fVar83)
                             );
            fVar51 = ABS((1.0 - fVar8) - fVar79 * fVar69) +
                     ABS(fVar84 * fVar63 + fVar79 * fVar83) + ABS(fVar84 * fVar69 - fVar72);
            uVar37 = NEON_fmaxp(uVar37,uVar37,4);
            uVar37 = NEON_fmax(CONCAT44(fVar51,fVar51),uVar37,4);
            fVar51 = (float)uVar52 / (float)uVar37;
            fVar60 = (float)((ulong)uVar52 >> 0x20) / (float)((ulong)uVar37 >> 0x20);
            auVar50._0_4_ = fVar51 + *(float *)(lVar35 + 0x30);
            auVar50._4_4_ = fVar60 + *(float *)(lVar35 + 0x34);
            auVar50._8_4_ = fVar51 + *(float *)(lVar35 + 0x38);
            auVar50._12_4_ = fVar60 + *(float *)(lVar35 + 0x3c);
            auVar58._0_4_ = *(float *)(lVar35 + 0x20) - fVar51;
            auVar58._4_4_ = *(float *)(lVar35 + 0x24) - fVar60;
            auVar58._8_4_ = *(float *)(lVar35 + 0x28) - fVar51;
            auVar58._12_4_ = *(float *)(lVar35 + 0x2c) - fVar60;
          }
          auVar53 = NEON_fmin(auVar50,*(undefined1 (*) [16])(param_3 + 8),4);
          auVar74 = NEON_fmax(auVar58,*(undefined1 (*) [16])(param_3 + 6),4);
          param_3[7] = auVar74._8_8_;
          param_3[6] = auVar74._0_8_;
          param_3[9] = auVar53._8_8_;
          param_3[8] = auVar53._0_8_;
        }
        else {
          lVar41 = **(long **)(lVar35 + 0x50);
          lVar43 = **(long **)(lVar35 + 0x60);
          uVar125 = 0xffffff;
          local_b8 = 0xffffffff;
          local_e0 = 0;
          local_d8 = 0;
          local_f0 = 0;
          uStack_e8 = 0;
          local_b4 = 0xf;
          local_8c = 0xf;
          local_d0 = local_d0 & 0xffffffff00000000;
          local_78 = 6;
          uStack_74 = 0;
          if (lVar41 == 0) {
            local_c8 = 0xffffffffffffffff;
          }
          else {
            local_c8 = *(undefined8 *)(lVar41 + 0xb0);
            uVar125 = *(undefined4 *)(lVar41 + 0x50);
          }
          local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar125);
          local_b0 = CONCAT62((int6)(local_b0 >> 0x10),
                              *(undefined2 *)(*(long *)(lVar35 + 0x48) + 0x10)) & 0xffffffff;
          uStack_a8 = *(ulong *)(*(long *)(lVar35 + 0x48) + 0x14) >> 0x20;
          if (lVar43 == 0) {
            fStack_98 = 2.3509886e-38;
            local_a0 = 0xffffffffffffffff;
          }
          else {
            local_a0 = *(undefined8 *)(lVar43 + 0xb0);
            fStack_98 = *(float *)(lVar43 + 0x50);
          }
          local_88 = (undefined2)local_100;
          local_84 = (undefined4)*puVar39;
          uStack_80 = *puVar39 >> 0x20;
          local_90 = uVar124;
          (**(code **)(*plVar38 + 0x28))(plVar38,&local_f0);
        }
      }
      goto LAB_02e97534;
    }
  }
  return;
code_r0x02e96cb4:
  uVar125 = (undefined4)((ulong)param_3[7] >> 0x20);
  uVar124 = (undefined4)((ulong)param_3[9] >> 0x20);
  lVar35 = 0;
  if (*param_1 != 0) {
    lVar35 = *param_1 + (long)param_1;
  }
  pauVar1 = (undefined1 (*) [16])(lVar35 + (ulong)*(ushort *)(pauVar33[1] + 0xc) * 0x20);
  uVar4 = *(ushort *)(pauVar33[1] + 0xe);
  auVar74 = *pauVar1;
  auVar53 = pauVar1[1];
  pauVar2 = (undefined1 (*) [16])(lVar35 + (ulong)uVar4 * 0x20);
  auVar46._0_12_ = auVar53._0_12_;
  auVar46._12_4_ = 0;
  auVar9 = *pauVar2;
  auVar45 = pauVar2[1];
  auVar65._0_12_ = auVar45._0_12_;
  auVar65._12_4_ = 0;
  fVar51 = (float)param_3[4];
  iVar20 = -(uint)(auVar74._0_4_ <= fVar51);
  fVar60 = (float)((ulong)param_3[4] >> 0x20);
  iVar21 = -(uint)(auVar74._4_4_ <= fVar60);
  bVar115 = (byte)((uint)iVar21 >> 8);
  bVar116 = (byte)((uint)iVar21 >> 0x10);
  bVar117 = (byte)((uint)iVar21 >> 0x18);
  fVar127 = (float)param_3[5];
  iVar22 = -(uint)(auVar74._8_4_ <= fVar127);
  bVar118 = (byte)((uint)iVar22 >> 8);
  bVar119 = (byte)((uint)iVar22 >> 0x10);
  bVar120 = (byte)((uint)iVar22 >> 0x18);
  fVar122 = (float)((ulong)param_3[5] >> 0x20);
  iVar23 = -(uint)(auVar74._12_4_ <= fVar122);
  auVar24._12_4_ = uVar124;
  auVar24._0_12_ = *(undefined1 (*) [12])(param_3 + 8);
  auVar54 = NEON_fmin(auVar24,auVar74,4);
  iVar10 = -(uint)(auVar9._0_4_ <= fVar51);
  iVar11 = -(uint)(auVar9._4_4_ <= fVar60);
  bVar101 = (byte)((uint)iVar11 >> 8);
  bVar102 = (byte)((uint)iVar11 >> 0x10);
  bVar103 = (byte)((uint)iVar11 >> 0x18);
  iVar12 = -(uint)(auVar9._8_4_ <= fVar127);
  iVar13 = -(uint)(auVar9._12_4_ <= fVar122);
  fVar51 = (float)param_3[2];
  iVar15 = -(uint)(fVar51 <= auVar53._0_4_);
  fVar60 = (float)((ulong)param_3[2] >> 0x20);
  iVar16 = -(uint)(fVar60 <= auVar53._4_4_);
  bVar109 = (byte)((uint)iVar16 >> 8);
  bVar110 = (byte)((uint)iVar16 >> 0x10);
  bVar111 = (byte)((uint)iVar16 >> 0x18);
  fVar127 = (float)param_3[3];
  iVar17 = -(uint)(fVar127 <= auVar53._8_4_);
  bVar112 = (byte)((uint)iVar17 >> 8);
  bVar113 = (byte)((uint)iVar17 >> 0x10);
  bVar114 = (byte)((uint)iVar17 >> 0x18);
  fVar122 = (float)((ulong)param_3[3] >> 0x20);
  iVar18 = -(uint)(fVar122 <= 0.0);
  auVar26._12_4_ = uVar125;
  auVar26._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
  auVar53 = NEON_fmax(auVar26,auVar46,4);
  iVar32 = -(uint)(fVar51 <= auVar45._0_4_);
  iVar71 = -(uint)(fVar60 <= auVar45._4_4_);
  bVar86 = (byte)((uint)iVar71 >> 8);
  bVar88 = (byte)((uint)iVar71 >> 0x10);
  bVar90 = (byte)((uint)iVar71 >> 0x18);
  iVar76 = -(uint)(fVar127 <= auVar45._8_4_);
  bVar92 = (byte)((uint)iVar76 >> 8);
  bVar94 = (byte)((uint)iVar76 >> 0x10);
  bVar96 = (byte)((uint)iVar76 >> 0x18);
  iVar80 = -(uint)(fVar122 <= 0.0);
  auVar25._12_4_ = uVar124;
  auVar25._0_12_ = *(undefined1 (*) [12])(param_3 + 8);
  auVar19[4] = (byte)iVar21;
  auVar19._0_4_ = iVar20;
  auVar19[5] = bVar115;
  auVar19[6] = bVar116;
  auVar19[7] = bVar117;
  auVar19[8] = (byte)iVar22;
  auVar19[9] = bVar118;
  auVar19[10] = bVar119;
  auVar19[0xb] = bVar120;
  auVar19[0xc] = (char)iVar23;
  auVar19[0xd] = (char)((uint)iVar23 >> 8);
  auVar19[0xe] = (char)((uint)iVar23 >> 0x10);
  auVar19[0xf] = (char)((uint)iVar23 >> 0x18);
  auVar54 = auVar54 ^ (auVar54 ^ auVar25) & auVar19;
  auVar27._12_4_ = uVar125;
  auVar27._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
  auVar14[4] = (byte)iVar16;
  auVar14._0_4_ = iVar15;
  auVar14[5] = bVar109;
  auVar14[6] = bVar110;
  auVar14[7] = bVar111;
  auVar14[8] = (byte)iVar17;
  auVar14[9] = bVar112;
  auVar14[10] = bVar113;
  auVar14[0xb] = bVar114;
  auVar14[0xc] = (char)iVar18;
  auVar14[0xd] = (char)((uint)iVar18 >> 8);
  auVar14[0xe] = (char)((uint)iVar18 >> 0x10);
  auVar14[0xf] = (char)((uint)iVar18 >> 0x18);
  auVar53 = auVar53 ^ (auVar53 ^ auVar27) & auVar14;
  auVar74 = NEON_fmin(auVar54,auVar9,4);
  auVar45 = NEON_fmax(auVar53,auVar65,4);
  auVar5[4] = (byte)iVar71;
  auVar5._0_4_ = iVar32;
  auVar5[5] = bVar86;
  auVar5[6] = bVar88;
  auVar5[7] = bVar90;
  auVar5[8] = (byte)iVar76;
  auVar5[9] = bVar92;
  auVar5[10] = bVar94;
  auVar5[0xb] = bVar96;
  auVar5[0xc] = (char)iVar80;
  auVar5[0xd] = (char)((uint)iVar80 >> 8);
  auVar5[0xe] = (char)((uint)iVar80 >> 0x10);
  auVar5[0xf] = (char)((uint)iVar80 >> 0x18);
  auVar53 = auVar53 ^ (auVar53 ^ auVar45) & ~auVar5;
  param_3[7] = auVar53._8_8_;
  param_3[6] = auVar53._0_8_;
  auVar47[0xc] = (char)iVar13;
  auVar47._8_4_ = iVar12;
  auVar47[0xd] = (char)((uint)iVar13 >> 8);
  auVar47[0xe] = (char)((uint)iVar13 >> 0x10);
  auVar47[0xf] = (char)((uint)iVar13 >> 0x18);
  auVar47[4] = (byte)iVar11;
  auVar47._0_4_ = iVar10;
  auVar47[5] = bVar101;
  auVar47[6] = bVar102;
  auVar47[7] = bVar103;
  auVar74 = auVar74 ^ (auVar74 ^ auVar54) & auVar47;
  param_3[9] = auVar74._8_8_;
  param_3[8] = auVar74._0_8_;
  bVar86 = CONCAT13(bVar117 & bVar111 & (byte)((uint)iVar20 >> 0x18) & (byte)((uint)iVar15 >> 0x18)
                    & bVar120 & bVar114,
                    CONCAT12(bVar116 & bVar110 &
                             (byte)((uint)iVar20 >> 0x10) & (byte)((uint)iVar15 >> 0x10) &
                             bVar119 & bVar113,
                             CONCAT11(bVar115 & bVar109 &
                                      (byte)((uint)iVar20 >> 8) & (byte)((uint)iVar15 >> 8) &
                                      bVar118 & bVar112,
                                      (byte)iVar21 & (byte)iVar16 & (byte)iVar20 & (byte)iVar15 &
                                      (byte)iVar22 & (byte)iVar17))) != 0 |
           (CONCAT13(bVar103 & bVar90 & (byte)((uint)iVar10 >> 0x18) & (byte)((uint)iVar32 >> 0x18)
                     & (byte)((uint)iVar12 >> 0x18) & bVar96,
                     CONCAT12(bVar102 & bVar88 &
                              (byte)((uint)iVar10 >> 0x10) & (byte)((uint)iVar32 >> 0x10) &
                              (byte)((uint)iVar12 >> 0x10) & bVar94,
                              CONCAT11(bVar101 & bVar86 &
                                       (byte)((uint)iVar10 >> 8) & (byte)((uint)iVar32 >> 8) &
                                       (byte)((uint)iVar12 >> 8) & bVar92,
                                       (byte)iVar11 & (byte)iVar71 & (byte)iVar10 & (byte)iVar32 &
                                       (byte)iVar12 & (byte)iVar76))) != 0) << 1;
  pauVar33 = pauVar1;
  if (bVar86 != 1) {
    if (bVar86 == 3) {
      iVar32 = (int)param_2[1];
      lVar35 = (long)iVar32;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar32) {
        FUN_02e8bb18(param_2,PTR_PTR_047d1a50,lVar35 + 1);
        iVar32 = (int)param_2[1];
      }
      *(int *)(param_2 + 1) = (int)(lVar35 + 1);
      *(ushort *)(*param_2 + (long)iVar32 * 2) = uVar4;
    }
    else {
      pauVar33 = pauVar2;
      if (bVar86 != 2) {
LAB_02e97534:
        if ((int)param_2[1] <= (int)lVar30) {
          return;
        }
        iVar32 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar32;
        lVar35 = 0;
        if (*param_1 != 0) {
          lVar35 = *param_1 + (long)param_1;
        }
        pauVar33 = (undefined1 (*) [16])
                   (lVar35 + (ulong)*(ushort *)(*param_2 + (long)iVar32 * 2) * 0x20);
      }
    }
  }
  goto LAB_02e96cac;
}


