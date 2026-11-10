/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e98e1c; name: FUN_02e98e1c
 */


void FUN_02e98e1c(long *param_1,long *param_2,long *param_3)

{
  undefined1 (*pauVar1) [16];
  float *pfVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
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
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long lVar24;
  bool bVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  undefined1 (*pauVar29) [16];
  undefined8 *puVar30;
  undefined8 uVar31;
  long *plVar32;
  undefined8 uVar33;
  long lVar34;
  ulong *puVar35;
  ulong uVar36;
  long lVar37;
  long *plVar38;
  byte *pbVar39;
  float *pfVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar54;
  undefined1 auVar48 [16];
  float fVar55;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar56;
  float fVar65;
  float fVar66;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar57;
  float fVar58;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  int iVar67;
  float fVar68;
  int iVar73;
  float fVar74;
  int iVar75;
  float fVar77;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar76;
  float fVar78;
  undefined1 auVar72 [16];
  byte bVar79;
  undefined1 uVar80;
  byte bVar81;
  undefined1 uVar82;
  byte bVar83;
  undefined1 uVar84;
  byte bVar85;
  undefined1 uVar86;
  byte bVar87;
  undefined1 uVar88;
  byte bVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  float fVar94;
  undefined4 uVar95;
  float fVar96;
  undefined4 uVar97;
  float fVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  undefined1 auVar112 [16];
  float fVar113;
  float fVar114;
  float fVar115;
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
  
  uVar3 = *(ushort *)((long)param_1 + 0x1c);
  if ((ulong)uVar3 != 0) {
    lVar28 = 0;
    if (*param_1 != 0) {
      lVar28 = *param_1 + (long)param_1;
    }
    pauVar29 = (undefined1 (*) [16])(lVar28 + (ulong)uVar3 * 0x20);
    auVar70 = *pauVar29;
    auVar48 = pauVar29[1];
    lVar24 = param_2[1];
    plVar32 = (long *)(*(long *)(*param_3 + 0x10) + 0x38);
    lVar34 = *plVar32;
    lVar28 = 0;
    if (lVar34 != 0) {
      lVar28 = lVar34 + (long)plVar32;
    }
    if ((*(uint *)(lVar28 + ((ulong)(uVar3 >> 3) & 0x1ffc)) >> (ulong)(uVar3 & 0x1f) & 1) != 0) {
      auVar41._0_12_ = auVar48._0_12_;
      auVar41._12_4_ = 0;
      uVar95 = (undefined4)((ulong)param_3[7] >> 0x20);
      lVar28 = param_3[9];
      uVar80 = (undefined1)((ulong)lVar28 >> 8);
      uVar82 = (undefined1)((ulong)lVar28 >> 0x10);
      uVar84 = (undefined1)((ulong)lVar28 >> 0x18);
      uVar86 = (undefined1)((ulong)lVar28 >> 0x20);
      uVar88 = (undefined1)((ulong)lVar28 >> 0x28);
      uVar90 = (undefined1)((ulong)lVar28 >> 0x30);
      uVar92 = (undefined1)((ulong)lVar28 >> 0x38);
      auVar69._0_4_ = -(uint)(auVar70._0_4_ <= *(float *)(param_3 + 4));
      auVar69._4_4_ = -(uint)(auVar70._4_4_ <= *(float *)((long)param_3 + 0x24));
      auVar69._8_4_ = -(uint)(auVar70._8_4_ <= *(float *)(param_3 + 5));
      auVar69._12_4_ = -(uint)(auVar70._12_4_ <= *(float *)((long)param_3 + 0x2c));
      auVar59._0_4_ = -(uint)(*(float *)(param_3 + 2) <= auVar48._0_4_);
      auVar59._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= auVar48._4_4_);
      auVar59._8_4_ = -(uint)(*(float *)(param_3 + 3) <= auVar48._8_4_);
      auVar59._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
      auVar42._12_4_ = uVar95;
      auVar42._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
      auVar42 = NEON_fmax(auVar42,auVar41,4);
      auVar48[9] = uVar80;
      auVar48._0_9_ = *(unkbyte9 *)(param_3 + 8);
      auVar48[10] = uVar82;
      auVar48[0xb] = uVar84;
      auVar48[0xc] = uVar86;
      auVar48[0xd] = uVar88;
      auVar48[0xe] = uVar90;
      auVar48[0xf] = uVar92;
      auVar48 = NEON_fmin(auVar48,auVar70,4);
      auVar10._12_4_ = uVar95;
      auVar10._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
      auVar42 = auVar42 ^ (auVar42 ^ auVar10) & auVar59;
      param_3[7] = auVar42._8_8_;
      param_3[6] = auVar42._0_8_;
      auVar70[9] = uVar80;
      auVar70._0_9_ = *(unkbyte9 *)(param_3 + 8);
      auVar70[10] = uVar82;
      auVar70[0xb] = uVar84;
      auVar70[0xc] = uVar86;
      auVar70[0xd] = uVar88;
      auVar70[0xe] = uVar90;
      auVar70[0xf] = uVar92;
      auVar48 = auVar48 ^ (auVar48 ^ auVar70) & auVar69;
      param_3[9] = auVar48._8_8_;
      param_3[8] = auVar48._0_8_;
      if (CONCAT13((byte)((uint)auVar69._4_4_ >> 0x18) & (byte)((uint)auVar59._4_4_ >> 0x18) &
                   (byte)((uint)auVar69._0_4_ >> 0x18) & (byte)((uint)auVar59._0_4_ >> 0x18) &
                   (byte)((uint)auVar69._8_4_ >> 0x18) & (byte)((uint)auVar59._8_4_ >> 0x18),
                   CONCAT12((byte)((uint)auVar69._4_4_ >> 0x10) &
                            (byte)((uint)auVar59._4_4_ >> 0x10) &
                            (byte)((uint)auVar69._0_4_ >> 0x10) &
                            (byte)((uint)auVar59._0_4_ >> 0x10) &
                            (byte)((uint)auVar69._8_4_ >> 0x10) &
                            (byte)((uint)auVar59._8_4_ >> 0x10),
                            CONCAT11((byte)((uint)auVar69._4_4_ >> 8) &
                                     (byte)((uint)auVar59._4_4_ >> 8) &
                                     (byte)((uint)auVar69._0_4_ >> 8) &
                                     (byte)((uint)auVar59._0_4_ >> 8) &
                                     (byte)((uint)auVar69._8_4_ >> 8) &
                                     (byte)((uint)auVar59._8_4_ >> 8),
                                     (byte)auVar69._4_4_ & (byte)auVar59._4_4_ &
                                     (byte)auVar69._0_4_ & (byte)auVar59._0_4_ &
                                     (byte)auVar69._8_4_ & (byte)auVar59._8_4_))) != 0) {
        puVar35 = (ulong *)((ulong)&local_100 | 4);
LAB_02e98f18:
        do {
          uVar3 = *(ushort *)(pauVar29[1] + 0xc);
          if ((ulong)uVar3 == 0) {
            lVar28 = *param_3;
            lVar34 = *(long *)(lVar28 + 8);
            uVar3 = *(ushort *)(pauVar29[1] + 0xe);
            pfVar2 = (float *)(lVar34 + 0x48 + (ulong)uVar3 * 0x40 + *(long *)(lVar34 + 0x48));
            pbVar39 = (byte *)((long)pfVar2 + 0x1e);
            if ((*pbVar39 >> 6 & 1) != 0) {
              pfVar40 = pfVar2 + 0xc;
              plVar32 = (long *)(*(long *)(lVar28 + 0x10) + 0x28);
              plVar38 = *(long **)(lVar28 + 0x70);
              lVar37 = 0;
              if (*(long *)pfVar40 != 0) {
                lVar37 = *(long *)pfVar40 + (long)pfVar40;
              }
              local_100 = **(undefined8 **)(lVar28 + 0x58);
              uStack_f8 = (*(undefined8 **)(lVar28 + 0x58))[1];
              uVar33 = *(undefined8 *)((long)plVar32 + (ulong)uVar3 * 8 + *plVar32);
              puVar30 = *(undefined8 **)(lVar28 + 0x60);
              uVar36 = puVar30[3];
              iVar26 = (int)(uVar36 >> 0x20) + (uint)*(byte *)(lVar34 + 0x1c);
              uVar36 = (ulong)((uVar3 + 1 << (ulong)(-iVar26 & 0x1f)) - 1) |
                       uVar36 & *(uint *)(PTR_DAT_047d1a60 + ((long)uVar36 >> 0x20) * 4);
              plVar32 = (long *)**(long **)(lVar28 + 0x48);
              uVar95 = (undefined4)uVar36;
              if (plVar32 != (long *)0x0) {
                lVar27 = 0;
                if (*(long *)pfVar40 != 0) {
                  lVar27 = *(long *)pfVar40 + (long)pfVar40;
                }
                (**(code **)(*plVar32 + 0x40))
                          (plVar32,*(undefined2 *)(pfVar2 + 0xb),6,*puVar30,puVar30[1],lVar34,uVar36
                           ,lVar27,&local_100);
                lVar27 = *(long *)(lVar28 + 0x48);
                if (*(long *)(lVar27 + 8) != 0) {
                  local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(lVar27 + 0x10));
                  uVar31 = *(undefined8 *)(lVar27 + 0x14);
                  *(undefined4 *)((undefined8 *)((ulong)&local_f0 | 4) + 1) =
                       *(undefined4 *)(lVar27 + 0x1c);
                  *(undefined8 *)((ulong)&local_f0 | 4) = uVar31;
                  puVar30 = *(undefined8 **)(lVar28 + 0x50);
                  local_e0 = *puVar30;
                  local_d8 = puVar30[1];
                  local_d0 = puVar30[2];
                  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(puVar30 + 3));
                  local_c0 = 0;
                  local_160 = CONCAT62(local_160._2_6_,(undefined2)local_100);
                  uVar36 = *puVar35;
                  *(int *)((ulong *)((ulong)&local_160 | 4) + 1) = (int)puVar35[1];
                  *(ulong *)((ulong)&local_160 | 4) = uVar36;
                  local_150 = **(long **)(lVar28 + 0x60);
                  local_148 = (*(long **)(lVar28 + 0x60))[1];
                  local_138 = CONCAT44(local_138._4_4_,uVar95);
                  local_130 = 0;
                  if (*(long *)pfVar40 != 0) {
                    local_130 = *(long *)pfVar40 + (long)pfVar40;
                  }
                  local_140 = lVar34;
                  uVar36 = (**(code **)(**(long **)(lVar27 + 8) + 0x40))
                                     (*(long **)(lVar27 + 8),6,1,&local_f0,&local_160);
                  if ((uVar36 & 1) == 0) goto LAB_02e9982c;
                }
              }
              if (*(char *)(lVar37 + 0x19) == '\x03') {
                memcpy(&local_f0,*(void **)(lVar28 + 0x48),0x60);
                auVar48 = NEON_fmov(0x3f800000,4);
                if ((*pbVar39 >> 3 & 1) == 0) {
                  fVar47 = pfVar2[4];
                  fVar54 = pfVar2[5];
                  fStack_98 = pfVar2[6];
                  if ((*pbVar39 >> 2 & 1) == 0) {
                    uStack_a8 = CONCAT44(*(float *)(lVar28 + 0x2c) - 0.0,
                                         *(float *)(lVar28 + 0x28) - fStack_98);
                    local_b0 = CONCAT44(*(float *)(lVar28 + 0x24) - fVar54,
                                        *(float *)(lVar28 + 0x20) - fVar47);
                    auVar48 = *(undefined1 (*) [16])(lVar28 + 0x30);
                    fVar47 = auVar48._0_4_ - fVar47;
                    fVar54 = auVar48._4_4_ - fVar54;
                    fStack_98 = auVar48._8_4_ - fStack_98;
                    fStack_94 = auVar48._12_4_ - 0.0;
                    goto LAB_02e99610;
                  }
                  fVar58 = *pfVar2;
                  fVar65 = pfVar2[1];
                  fVar113 = pfVar2[2];
                  fVar66 = pfVar2[3];
                  fVar78 = (float)*(undefined8 *)(lVar28 + 0x38);
                  fVar77 = (float)*(undefined8 *)(lVar28 + 0x30);
                  fVar76 = (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20);
                  fVar68 = fVar65 + fVar65;
                  fVar74 = fVar113 + fVar113;
                  fVar110 = (float)*(undefined8 *)(lVar28 + 0x20);
                  fVar106 = (float)((ulong)*(undefined8 *)(lVar28 + 0x20) >> 0x20);
                  fVar57 = (float)*(undefined8 *)(lVar28 + 0x28);
                  fVar94 = (fVar58 + fVar58) * fVar58;
                  fVar56 = (fVar58 + fVar58) * fVar66;
                  fVar105 = 1.0 - fVar113 * fVar74;
                  fVar115 = fVar68 * fVar58 + fVar74 * fVar66;
                  fVar109 = fVar68 * fVar58 - fVar74 * fVar66;
                  fVar113 = (fVar77 - fVar110) * 0.5;
                  fVar114 = (fVar76 - fVar106) * 0.5;
                  fVar55 = (fVar78 - fVar57) * 0.5;
                  fVar47 = (fVar110 + fVar77) * 0.5 - fVar47;
                  fVar54 = (fVar106 + fVar76) * 0.5 - fVar54;
                  fStack_98 = (fVar57 + fVar78) * 0.5 - fStack_98;
                  fVar77 = fVar105 - fVar68 * fVar65;
                  fVar105 = fVar105 - fVar94;
                  fVar110 = fVar74 * fVar58 - fVar68 * fVar66;
                  fVar106 = fVar74 * fVar65 + fVar56;
                  fVar56 = fVar74 * fVar65 - fVar56;
                  fVar74 = fVar74 * fVar58 + fVar68 * fVar66;
                  fVar57 = (1.0 - fVar94) - fVar68 * fVar65;
                  fVar58 = ABS(fVar110 * fVar55) + ABS(fVar77 * fVar113) + ABS(fVar115 * fVar114);
                  fVar65 = ABS(fVar106 * fVar55) + ABS(fVar109 * fVar113) + ABS(fVar105 * fVar114);
                  fVar66 = ABS(fVar57 * fVar55) + ABS(fVar74 * fVar113) + ABS(fVar56 * fVar114);
                  fVar113 = ABS(fVar55 * 0.0) + ABS(fVar56 * fVar113) + ABS(fVar114 * 0.0);
                  fVar110 = fVar110 * fStack_98 + fVar77 * fVar47 + fVar115 * fVar54;
                  fVar106 = fVar106 * fStack_98 + fVar109 * fVar47 + fVar105 * fVar54;
                  fVar57 = fVar57 * fStack_98 + fVar74 * fVar47 + fVar56 * fVar54;
                  fVar47 = fStack_98 * 0.0 + fVar56 * fVar47 + fVar54 * 0.0;
                  fStack_98 = fVar57 + fVar66;
                  fStack_94 = fVar47 + fVar113;
                  uStack_a8 = CONCAT44(fVar47 - fVar113,fVar57 - fVar66);
                  local_b0 = CONCAT44(fVar106 - fVar65,fVar110 - fVar58);
                  local_a0 = CONCAT44(fVar106 + fVar65,fVar110 + fVar58);
                }
                else {
                  fVar47 = *(float *)(lVar28 + 0x20);
                  fVar54 = *(float *)(lVar28 + 0x24);
                  local_b0 = *(ulong *)(lVar28 + 0x20);
                  fVar110 = *(float *)(lVar28 + 0x28);
                  uStack_a8 = *(ulong *)(lVar28 + 0x28);
                  auVar70 = *(undefined1 (*) [16])(lVar28 + 0x30);
                  fVar106 = auVar70._0_4_;
                  iVar67 = -(uint)(fVar106 < fVar47);
                  fVar57 = auVar70._4_4_;
                  iVar73 = -(uint)(fVar57 < fVar54);
                  fVar113 = auVar70._8_4_;
                  iVar75 = -(uint)(fVar113 < fVar110);
                  if (CONCAT13((byte)((uint)iVar73 >> 0x18) | (byte)((uint)iVar67 >> 0x18) |
                               (byte)((uint)iVar75 >> 0x18),
                               CONCAT12((byte)((uint)iVar73 >> 0x10) | (byte)((uint)iVar67 >> 0x10)
                                        | (byte)((uint)iVar75 >> 0x10),
                                        CONCAT11((byte)((uint)iVar73 >> 8) |
                                                 (byte)((uint)iVar67 >> 8) |
                                                 (byte)((uint)iVar75 >> 8),
                                                 (byte)iVar73 | (byte)iVar67 | (byte)iVar75))) == 0)
                  {
                    fVar114 = (float)*(undefined8 *)pfVar2;
                    fVar55 = (float)((ulong)*(undefined8 *)pfVar2 >> 0x20);
                    fVar105 = fVar55 + fVar55;
                    fVar58 = (float)*(undefined8 *)(pfVar2 + 2);
                    fVar109 = fVar58 + fVar58;
                    fVar115 = (fVar114 + fVar114) * fVar114;
                    fVar65 = (float)((ulong)*(undefined8 *)(pfVar2 + 2) >> 0x20);
                    fVar66 = (fVar114 + fVar114) * fVar65;
                    fVar111 = fVar109 * fVar55 - fVar66;
                    fVar107 = 1.0 - fVar58 * fVar109;
                    fVar77 = auVar48._0_4_ / pfVar2[8];
                    fVar94 = auVar48._4_4_ / pfVar2[9];
                    fVar76 = auVar48._8_4_ / pfVar2[10];
                    fVar78 = auVar48._12_4_ / 1.0;
                    fVar108 = pfVar2[6];
                    fVar58 = fVar77 * (fVar107 - fVar105 * fVar55);
                    fVar56 = fVar94 * (fVar105 * fVar114 - fVar109 * fVar65);
                    fVar68 = fVar76 * (fVar109 * fVar114 + fVar105 * fVar65);
                    fVar74 = fVar78 * fVar111;
                    fVar96 = fVar77 * (fVar105 * fVar114 + fVar109 * fVar65);
                    fVar107 = fVar94 * (fVar107 - fVar115);
                    fVar111 = fVar76 * fVar111;
                    fVar98 = fVar78 * 0.0;
                    fVar77 = fVar77 * (fVar109 * fVar114 - fVar105 * fVar65);
                    fVar94 = fVar94 * (fVar109 * fVar55 + fVar66);
                    fVar76 = fVar76 * ((1.0 - fVar115) - fVar105 * fVar55);
                    fVar78 = fVar78 * 0.0;
                    fVar66 = (float)*(undefined8 *)(pfVar2 + 4);
                    fVar105 = (float)((ulong)*(undefined8 *)(pfVar2 + 4) >> 0x20);
                    fVar114 = (fVar106 - fVar47) * 0.5;
                    fVar55 = (fVar57 - fVar54) * 0.5;
                    fVar65 = (fVar113 - fVar110) * 0.5;
                    fVar47 = (fVar47 + fVar106) * 0.5;
                    fVar54 = (fVar54 + fVar57) * 0.5;
                    fVar109 = (fVar110 + fVar113) * 0.5;
                    fVar110 = ABS(fVar77 * fVar65) + ABS(fVar58 * fVar114) + ABS(fVar96 * fVar55);
                    fVar106 = ABS(fVar94 * fVar65) + ABS(fVar56 * fVar114) + ABS(fVar107 * fVar55);
                    fVar57 = ABS(fVar76 * fVar65) + ABS(fVar68 * fVar114) + ABS(fVar111 * fVar55);
                    fVar113 = ABS(fVar78 * fVar65) + ABS(fVar74 * fVar114) + ABS(fVar98 * fVar55);
                    fVar114 = fVar77 * fVar109 + fVar58 * fVar47 + fVar96 * fVar54 +
                              -(fVar77 * fVar108 + fVar58 * fVar66 + fVar96 * fVar105);
                    fVar55 = fVar94 * fVar109 + fVar56 * fVar47 + fVar107 * fVar54 +
                             -(fVar94 * fVar108 + fVar56 * fVar66 + fVar107 * fVar105);
                    fVar58 = fVar76 * fVar109 + fVar68 * fVar47 + fVar111 * fVar54 +
                             -(fVar76 * fVar108 + fVar68 * fVar66 + fVar111 * fVar105);
                    fVar65 = fVar78 * fVar109 + fVar74 * fVar47 + fVar98 * fVar54 +
                             fVar78 * fVar108 + fVar74 * fVar66 + fVar98 * fVar105;
                    fVar47 = fVar110 + fVar114;
                    fVar54 = fVar106 + fVar55;
                    fStack_98 = fVar57 + fVar58;
                    fStack_94 = fVar113 + fVar65;
                    auVar62._0_8_ = CONCAT44(fVar55 - fVar106,fVar114 - fVar110);
                    auVar62._8_4_ = fVar58 - fVar57;
                    auVar62._12_4_ = fVar65 - fVar113;
                    uStack_a8 = auVar62._8_8_;
                    local_b0 = auVar62._0_8_;
                  }
                  else {
                    fVar47 = *(float *)(lVar28 + 0x30);
                    fVar54 = *(float *)(lVar28 + 0x34);
                    fStack_98 = *(float *)(lVar28 + 0x38);
                    fStack_94 = *(float *)(lVar28 + 0x3c);
                  }
LAB_02e99610:
                  local_a0 = CONCAT44(fVar54,fVar47);
                }
                puVar30 = *(undefined8 **)(lVar28 + 0x60);
                uVar36 = (ulong)local_130 >> 8;
                local_160 = *puVar30;
                uStack_158 = puVar30[1];
                local_140 = puVar30[4];
                local_120 = puVar30[8];
                uStack_118 = puVar30[9];
                uStack_110 = puVar30[10];
                uStack_108 = puVar30[0xb];
                uStack_128 = *(undefined4 *)(puVar30 + 7);
                local_130 = CONCAT44(*(undefined4 *)((long)puVar30 + 0x34),
                                     (int)CONCAT71((int7)uVar36,*(undefined1 *)(puVar30 + 6)));
                local_148 = CONCAT44(iVar26,uVar95);
                auVar44._8_4_ = 0x5f7ffff0;
                auVar44._0_8_ = 0x5f7ffff05f7ffff0;
                auVar44._12_4_ = 0x5f7ffff0;
                auVar49._8_4_ = 0xdf7ffff0;
                auVar49._0_8_ = 0xdf7ffff0df7ffff0;
                auVar49._12_4_ = 0xdf7ffff0;
                uStack_178 = auVar49._8_8_;
                local_180 = 0xdf7ffff0df7ffff0;
                uStack_168 = auVar44._8_8_;
                uStack_170 = 0x5f7ffff05f7ffff0;
                local_150 = lVar37;
                local_138 = uVar33;
                (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar37 + 0x18) * 0x200 +
                            0xe8))(lVar37,*(undefined8 *)(lVar28 + 0x40),&local_f0,
                                   *(undefined8 *)(lVar28 + 0x50),&local_100,&local_160,plVar38,
                                   &local_180);
                fVar110 = pfVar2[8];
                fVar106 = pfVar2[9];
                fVar57 = pfVar2[10];
                bVar79 = *pbVar39;
                fVar113 = (float)((ulong)uStack_170 >> 0x20);
                fVar114 = (float)((ulong)uStack_168 >> 0x20);
                fVar47 = (float)((ulong)local_180 >> 0x20);
                fVar54 = (float)((ulong)uStack_178 >> 0x20);
                if ((bVar79 >> 2 & 1) == 0) {
                  auVar72._8_8_ = uStack_178;
                  auVar72._0_8_ = local_180;
                  auVar63._8_8_ = uStack_168;
                  auVar63._0_8_ = uStack_170;
                  if ((bVar79 >> 3 & 1) != 0) {
                    fVar55 = fVar110 * (float)local_180;
                    fVar47 = fVar106 * fVar47;
                    uVar80 = (undefined1)((uint)fVar47 >> 8);
                    uVar82 = (undefined1)((uint)fVar47 >> 0x10);
                    uVar84 = (undefined1)((uint)fVar47 >> 0x18);
                    fVar58 = fVar57 * (float)uStack_178;
                    uVar86 = (undefined1)((uint)fVar58 >> 8);
                    uVar88 = (undefined1)((uint)fVar58 >> 0x10);
                    uVar90 = (undefined1)((uint)fVar58 >> 0x18);
                    fVar54 = fVar54 * 1.0;
                    uVar92 = (undefined1)((uint)fVar54 >> 8);
                    uVar91 = (undefined1)((uint)fVar54 >> 0x10);
                    uVar93 = (undefined1)((uint)fVar54 >> 0x18);
                    auVar50._0_4_ = fVar110 * (float)uStack_170;
                    auVar50._4_4_ = fVar106 * fVar113;
                    auVar50._8_4_ = fVar57 * (float)uStack_168;
                    auVar50._12_4_ = fVar114 * 1.0;
                    auVar8[4] = SUB41(fVar47,0);
                    auVar8._0_4_ = fVar55;
                    auVar8[5] = uVar80;
                    auVar8[6] = uVar82;
                    auVar8[7] = uVar84;
                    auVar8[8] = SUB41(fVar58,0);
                    auVar8[9] = uVar86;
                    auVar8[10] = uVar88;
                    auVar8[0xb] = uVar90;
                    auVar8[0xc] = SUB41(fVar54,0);
                    auVar8[0xd] = uVar92;
                    auVar8[0xe] = uVar91;
                    auVar8[0xf] = uVar93;
                    auVar72 = NEON_fmin(auVar8,auVar50,4);
                    auVar9[4] = SUB41(fVar47,0);
                    auVar9._0_4_ = fVar55;
                    auVar9[5] = uVar80;
                    auVar9[6] = uVar82;
                    auVar9[7] = uVar84;
                    auVar9[8] = SUB41(fVar58,0);
                    auVar9[9] = uVar86;
                    auVar9[10] = uVar88;
                    auVar9[0xb] = uVar90;
                    auVar9[0xc] = SUB41(fVar54,0);
                    auVar9[0xd] = uVar92;
                    auVar9[0xe] = uVar91;
                    auVar9[0xf] = uVar93;
                    auVar63 = NEON_fmax(auVar9,auVar50,4);
                  }
                  auVar51._0_4_ = pfVar2[4] + auVar72._0_4_;
                  auVar51._4_4_ = pfVar2[5] + auVar72._4_4_;
                  auVar51._8_4_ = pfVar2[6] + auVar72._8_4_;
                  auVar51._12_4_ = auVar72._12_4_ + 0.0;
                  auVar45._0_4_ = pfVar2[4] + auVar63._0_4_;
                  auVar45._4_4_ = pfVar2[5] + auVar63._4_4_;
                  auVar45._8_4_ = pfVar2[6] + auVar63._8_4_;
                  auVar45._12_4_ = auVar63._12_4_ + 0.0;
                  auVar46 = NEON_fmax(auVar45,*(undefined1 (*) [16])(lVar28 + 0x30),4);
                  auVar52 = NEON_fmin(auVar51,*(undefined1 (*) [16])(lVar28 + 0x20),4);
                }
                else {
                  fVar58 = *pfVar2;
                  fVar65 = pfVar2[1];
                  fVar66 = pfVar2[2];
                  fVar56 = pfVar2[3];
                  fVar74 = fVar65 + fVar65;
                  fVar77 = fVar66 + fVar66;
                  fVar55 = (fVar58 + fVar58) * fVar58;
                  fVar68 = (fVar58 + fVar58) * fVar56;
                  auVar64._0_4_ = -(uint)((bVar79 & 8) == 0);
                  auVar64._4_4_ = auVar64._0_4_;
                  auVar64._8_4_ = auVar64._0_4_;
                  auVar64._12_4_ = auVar64._0_4_;
                  auVar112._0_4_ = (float)uStack_170 - (float)local_a0;
                  auVar112._4_4_ = fVar113 - local_a0._4_4_;
                  auVar112._8_4_ = (float)uStack_168 - fStack_98;
                  auVar112._12_4_ = fVar114 - fStack_94;
                  fVar113 = (float)local_b0 - (float)local_180;
                  fVar47 = (float)(local_b0 >> 0x20) - fVar47;
                  fVar114 = (float)uStack_a8 - (float)uStack_178;
                  fVar54 = (float)(uStack_a8 >> 0x20) - fVar54;
                  auVar53._0_4_ = ABS(fVar110) * fVar113;
                  auVar53._4_4_ = ABS(fVar106) * fVar47;
                  auVar53._8_4_ = ABS(fVar57) * fVar114;
                  auVar53._12_4_ = fVar54 * 1.0;
                  auVar23._4_4_ = ABS(fVar106) * auVar112._4_4_;
                  auVar23._0_4_ = ABS(fVar110) * auVar112._0_4_;
                  auVar23._8_4_ = ABS(fVar57) * auVar112._8_4_;
                  auVar23._12_4_ = auVar112._12_4_ * 1.0;
                  auVar22._4_4_ = fVar47;
                  auVar22._0_4_ = fVar113;
                  auVar22._8_4_ = fVar114;
                  auVar22._12_4_ = fVar54;
                  fVar47 = 1.0 - fVar66 * fVar77;
                  auVar48 = NEON_smin(auVar53 ^ (auVar53 ^ auVar22) & auVar64,
                                      auVar112 ^ (auVar112 ^ auVar23) & ~auVar64,4);
                  uVar33 = NEON_fminp(auVar48._0_8_,auVar48._0_8_,4);
                  uVar31 = NEON_fmin(CONCAT44(auVar48._8_4_,auVar48._8_4_),uVar33,4);
                  uVar33 = CONCAT44(ABS(fVar77 * fVar65 + fVar68) +
                                    ABS(fVar74 * fVar58 - fVar77 * fVar56) + ABS(fVar47 - fVar55),
                                    ABS(fVar77 * fVar58 - fVar74 * fVar56) +
                                    ABS(fVar47 - fVar74 * fVar65) +
                                    ABS(fVar74 * fVar58 + fVar77 * fVar56));
                  fVar47 = ABS((1.0 - fVar55) - fVar74 * fVar65) +
                           ABS(fVar77 * fVar58 + fVar74 * fVar56) + ABS(fVar77 * fVar65 - fVar68);
                  uVar33 = NEON_fmaxp(uVar33,uVar33,4);
                  uVar33 = NEON_fmax(CONCAT44(fVar47,fVar47),uVar33,4);
                  fVar47 = (float)uVar31 / (float)uVar33;
                  fVar54 = (float)((ulong)uVar31 >> 0x20) / (float)((ulong)uVar33 >> 0x20);
                  auVar46._0_4_ = fVar47 + *(float *)(lVar28 + 0x30);
                  auVar46._4_4_ = fVar54 + *(float *)(lVar28 + 0x34);
                  auVar46._8_4_ = fVar47 + *(float *)(lVar28 + 0x38);
                  auVar46._12_4_ = fVar54 + *(float *)(lVar28 + 0x3c);
                  auVar52._0_4_ = *(float *)(lVar28 + 0x20) - fVar47;
                  auVar52._4_4_ = *(float *)(lVar28 + 0x24) - fVar54;
                  auVar52._8_4_ = *(float *)(lVar28 + 0x28) - fVar47;
                  auVar52._12_4_ = *(float *)(lVar28 + 0x2c) - fVar54;
                }
                auVar48 = NEON_fmin(auVar46,*(undefined1 (*) [16])(param_3 + 8),4);
                auVar70 = NEON_fmax(auVar52,*(undefined1 (*) [16])(param_3 + 6),4);
                param_3[7] = auVar70._8_8_;
                param_3[6] = auVar70._0_8_;
                param_3[9] = auVar48._8_8_;
                param_3[8] = auVar48._0_8_;
              }
              else {
                lVar37 = **(long **)(lVar28 + 0x50);
                lVar34 = **(long **)(lVar28 + 0x60);
                uVar97 = 0xffffff;
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
                if (lVar37 == 0) {
                  local_c8 = 0xffffffffffffffff;
                }
                else {
                  local_c8 = *(undefined8 *)(lVar37 + 0xb0);
                  uVar97 = *(undefined4 *)(lVar37 + 0x50);
                }
                local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar97);
                local_b0 = CONCAT62((int6)(local_b0 >> 0x10),
                                    *(undefined2 *)(*(long *)(lVar28 + 0x48) + 0x10)) & 0xffffffff;
                uStack_a8 = *(ulong *)(*(long *)(lVar28 + 0x48) + 0x14) >> 0x20;
                if (lVar34 == 0) {
                  fStack_98 = 2.3509886e-38;
                  local_a0 = 0xffffffffffffffff;
                }
                else {
                  local_a0 = *(undefined8 *)(lVar34 + 0xb0);
                  fStack_98 = *(float *)(lVar34 + 0x50);
                }
                local_88 = (undefined2)local_100;
                local_84 = (undefined4)*puVar35;
                uStack_80 = *puVar35 >> 0x20;
                local_90 = uVar95;
                (**(code **)(*plVar38 + 0x28))(plVar38,&local_f0);
              }
            }
            goto LAB_02e9982c;
          }
          uVar4 = *(ushort *)(pauVar29[1] + 0xe);
          lVar28 = 0;
          if (*param_1 != 0) {
            lVar28 = *param_1 + (long)param_1;
          }
          pauVar29 = (undefined1 (*) [16])(lVar28 + (ulong)uVar3 * 0x20);
          pauVar1 = (undefined1 (*) [16])(lVar28 + (ulong)uVar4 * 0x20);
          auVar70 = *pauVar29;
          auVar48 = pauVar29[1];
          auVar10 = *pauVar1;
          auVar42 = pauVar1[1];
          plVar32 = (long *)(*(long *)(*param_3 + 0x10) + 0x38);
          lVar37 = *plVar32;
          lVar28 = lVar37 + (long)plVar32;
          lVar34 = 0;
          if (lVar37 != 0) {
            lVar34 = lVar28;
          }
          if ((*(uint *)(lVar34 + ((ulong)(uVar3 >> 3) & 0x1ffc)) >> (ulong)(uVar3 & 0x1f) & 1) == 0
             ) {
            bVar25 = false;
          }
          else {
            auVar60._0_12_ = auVar48._0_12_;
            auVar60._12_4_ = 0;
            uVar95 = (undefined4)((ulong)param_3[9] >> 0x20);
            iVar18 = -(uint)((float)param_3[2] <= auVar48._0_4_);
            iVar19 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= auVar48._4_4_);
            bVar99 = (byte)((uint)iVar19 >> 8);
            bVar100 = (byte)((uint)iVar19 >> 0x10);
            bVar101 = (byte)((uint)iVar19 >> 0x18);
            iVar20 = -(uint)((float)param_3[3] <= auVar48._8_4_);
            bVar102 = (byte)((uint)iVar20 >> 8);
            bVar103 = (byte)((uint)iVar20 >> 0x10);
            bVar104 = (byte)((uint)iVar20 >> 0x18);
            iVar21 = -(uint)((float)((ulong)param_3[3] >> 0x20) <= 0.0);
            uVar97 = (undefined4)((ulong)param_3[7] >> 0x20);
            iVar26 = -(uint)(auVar70._0_4_ <= (float)param_3[4]);
            iVar67 = -(uint)(auVar70._4_4_ <= (float)((ulong)param_3[4] >> 0x20));
            bVar79 = (byte)((uint)iVar67 >> 8);
            bVar81 = (byte)((uint)iVar67 >> 0x10);
            bVar83 = (byte)((uint)iVar67 >> 0x18);
            iVar73 = -(uint)(auVar70._8_4_ <= (float)param_3[5]);
            bVar85 = (byte)((uint)iVar73 >> 8);
            bVar87 = (byte)((uint)iVar73 >> 0x10);
            bVar89 = (byte)((uint)iVar73 >> 0x18);
            iVar75 = -(uint)(auVar70._12_4_ <= (float)((ulong)param_3[5] >> 0x20));
            auVar11._12_4_ = uVar95;
            auVar11._0_12_ = *(undefined1 (*) [12])(param_3 + 8);
            auVar70 = NEON_fmin(auVar11,auVar70,4);
            auVar15._12_4_ = uVar97;
            auVar15._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
            auVar48 = NEON_fmax(auVar15,auVar60,4);
            auVar12._12_4_ = uVar95;
            auVar12._0_12_ = *(undefined1 (*) [12])(param_3 + 8);
            auVar5[4] = (byte)iVar67;
            auVar5._0_4_ = iVar26;
            auVar5[5] = bVar79;
            auVar5[6] = bVar81;
            auVar5[7] = bVar83;
            auVar5[8] = (byte)iVar73;
            auVar5[9] = bVar85;
            auVar5[10] = bVar87;
            auVar5[0xb] = bVar89;
            auVar5[0xc] = (char)iVar75;
            auVar5[0xd] = (char)((uint)iVar75 >> 8);
            auVar5[0xe] = (char)((uint)iVar75 >> 0x10);
            auVar5[0xf] = (char)((uint)iVar75 >> 0x18);
            auVar70 = auVar70 ^ (auVar70 ^ auVar12) & auVar5;
            auVar16._12_4_ = uVar97;
            auVar16._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
            auVar17[4] = (byte)iVar19;
            auVar17._0_4_ = iVar18;
            auVar17[5] = bVar99;
            auVar17[6] = bVar100;
            auVar17[7] = bVar101;
            auVar17[8] = (byte)iVar20;
            auVar17[9] = bVar102;
            auVar17[10] = bVar103;
            auVar17[0xb] = bVar104;
            auVar17[0xc] = (char)iVar21;
            auVar17[0xd] = (char)((uint)iVar21 >> 8);
            auVar17[0xe] = (char)((uint)iVar21 >> 0x10);
            auVar17[0xf] = (char)((uint)iVar21 >> 0x18);
            auVar48 = auVar48 ^ (auVar48 ^ auVar16) & auVar17;
            param_3[7] = auVar48._8_8_;
            param_3[6] = auVar48._0_8_;
            param_3[9] = auVar70._8_8_;
            param_3[8] = auVar70._0_8_;
            plVar32 = (long *)(*(long *)(*param_3 + 0x10) + 0x38);
            lVar37 = *plVar32;
            bVar25 = CONCAT13(bVar83 & bVar101 &
                              (byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar18 >> 0x18) &
                              bVar89 & bVar104,
                              CONCAT12(bVar81 & bVar100 &
                                       (byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar18 >> 0x10) &
                                       bVar87 & bVar103,
                                       CONCAT11(bVar79 & bVar99 &
                                                (byte)((uint)iVar26 >> 8) &
                                                (byte)((uint)iVar18 >> 8) & bVar85 & bVar102,
                                                (byte)iVar67 & (byte)iVar19 &
                                                (byte)iVar26 & (byte)iVar18 &
                                                (byte)iVar73 & (byte)iVar20))) != 0;
            lVar28 = lVar37 + (long)plVar32;
          }
          lVar34 = 0;
          if (lVar37 != 0) {
            lVar34 = lVar28;
          }
          if ((*(uint *)(lVar34 + ((ulong)(uVar4 >> 3) & 0x1ffc)) >> (ulong)(uVar4 & 0x1f) & 1) == 0
             ) {
LAB_02e99248:
            bVar79 = 0;
          }
          else {
            auVar43._0_12_ = auVar42._0_12_;
            auVar43._12_4_ = 0;
            auVar71._0_4_ = -(uint)(auVar10._0_4_ <= *(float *)(param_3 + 4));
            auVar71._4_4_ = -(uint)(auVar10._4_4_ <= *(float *)((long)param_3 + 0x24));
            auVar71._8_4_ = -(uint)(auVar10._8_4_ <= *(float *)(param_3 + 5));
            auVar71._12_4_ = -(uint)(auVar10._12_4_ <= *(float *)((long)param_3 + 0x2c));
            uVar95 = (undefined4)((ulong)param_3[7] >> 0x20);
            lVar28 = param_3[9];
            uVar80 = (undefined1)((ulong)lVar28 >> 8);
            uVar82 = (undefined1)((ulong)lVar28 >> 0x10);
            uVar84 = (undefined1)((ulong)lVar28 >> 0x18);
            uVar86 = (undefined1)((ulong)lVar28 >> 0x20);
            uVar88 = (undefined1)((ulong)lVar28 >> 0x28);
            uVar90 = (undefined1)((ulong)lVar28 >> 0x30);
            uVar92 = (undefined1)((ulong)lVar28 >> 0x38);
            auVar6[9] = uVar80;
            auVar6._0_9_ = *(unkbyte9 *)(param_3 + 8);
            auVar6[10] = uVar82;
            auVar6[0xb] = uVar84;
            auVar6[0xc] = uVar86;
            auVar6[0xd] = uVar88;
            auVar6[0xe] = uVar90;
            auVar6[0xf] = uVar92;
            auVar70 = NEON_fmin(auVar6,auVar10,4);
            auVar61._0_4_ = -(uint)(*(float *)(param_3 + 2) <= auVar42._0_4_);
            auVar61._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= auVar42._4_4_);
            auVar61._8_4_ = -(uint)(*(float *)(param_3 + 3) <= auVar42._8_4_);
            auVar61._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
            auVar13._12_4_ = uVar95;
            auVar13._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
            auVar48 = NEON_fmax(auVar13,auVar43,4);
            auVar14._12_4_ = uVar95;
            auVar14._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
            auVar48 = auVar48 ^ (auVar48 ^ auVar14) & auVar61;
            param_3[7] = auVar48._8_8_;
            param_3[6] = auVar48._0_8_;
            auVar7[9] = uVar80;
            auVar7._0_9_ = *(unkbyte9 *)(param_3 + 8);
            auVar7[10] = uVar82;
            auVar7[0xb] = uVar84;
            auVar7[0xc] = uVar86;
            auVar7[0xd] = uVar88;
            auVar7[0xe] = uVar90;
            auVar7[0xf] = uVar92;
            auVar70 = auVar70 ^ (auVar70 ^ auVar7) & auVar71;
            param_3[9] = auVar70._8_8_;
            param_3[8] = auVar70._0_8_;
            if (CONCAT13((byte)((uint)auVar71._4_4_ >> 0x18) & (byte)((uint)auVar61._4_4_ >> 0x18) &
                         (byte)((uint)auVar71._0_4_ >> 0x18) & (byte)((uint)auVar61._0_4_ >> 0x18) &
                         (byte)((uint)auVar71._8_4_ >> 0x18) & (byte)((uint)auVar61._8_4_ >> 0x18),
                         CONCAT12((byte)((uint)auVar71._4_4_ >> 0x10) &
                                  (byte)((uint)auVar61._4_4_ >> 0x10) &
                                  (byte)((uint)auVar71._0_4_ >> 0x10) &
                                  (byte)((uint)auVar61._0_4_ >> 0x10) &
                                  (byte)((uint)auVar71._8_4_ >> 0x10) &
                                  (byte)((uint)auVar61._8_4_ >> 0x10),
                                  CONCAT11((byte)((uint)auVar71._4_4_ >> 8) &
                                           (byte)((uint)auVar61._4_4_ >> 8) &
                                           (byte)((uint)auVar71._0_4_ >> 8) &
                                           (byte)((uint)auVar61._0_4_ >> 8) &
                                           (byte)((uint)auVar71._8_4_ >> 8) &
                                           (byte)((uint)auVar61._8_4_ >> 8),
                                           (byte)auVar71._4_4_ & (byte)auVar61._4_4_ &
                                           (byte)auVar71._0_4_ & (byte)auVar61._0_4_ &
                                           (byte)auVar71._8_4_ & (byte)auVar61._8_4_))) == 0)
            goto LAB_02e99248;
            bVar79 = 2;
          }
          bVar79 = bVar79 | bVar25;
        } while (bVar79 == 1);
        if (bVar79 == 3) {
          iVar26 = (int)param_2[1];
          lVar28 = (long)iVar26;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar26) {
            FUN_02e8bb18(param_2,PTR_PTR_047d1a50,lVar28 + 1);
            iVar26 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = (int)(lVar28 + 1);
          *(ushort *)(*param_2 + (long)iVar26 * 2) = uVar4;
          goto LAB_02e98f18;
        }
        pauVar29 = pauVar1;
        if (bVar79 == 2) goto LAB_02e98f18;
LAB_02e9982c:
        if ((int)lVar24 < (int)param_2[1]) {
          iVar26 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar26;
          lVar28 = 0;
          if (*param_1 != 0) {
            lVar28 = *param_1 + (long)param_1;
          }
          pauVar29 = (undefined1 (*) [16])
                     (lVar28 + (ulong)*(ushort *)(*param_2 + (long)iVar26 * 2) * 0x20);
          goto LAB_02e98f18;
        }
      }
    }
  }
  return;
}


