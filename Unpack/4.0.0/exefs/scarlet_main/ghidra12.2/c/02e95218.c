/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e95218; name: FUN_02e95218
 */


void FUN_02e95218(long *param_1,long *param_2,long *param_3)

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
  ulong uVar35;
  long lVar36;
  long *plVar37;
  byte *pbVar38;
  float *pfVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar52;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar53;
  float fVar61;
  float fVar62;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar54;
  float fVar63;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  int iVar64;
  float fVar65;
  int iVar70;
  float fVar73;
  int iVar74;
  float fVar76;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar71;
  float fVar72;
  float fVar75;
  undefined1 auVar69 [16];
  byte bVar77;
  undefined1 uVar78;
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
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  float fVar92;
  undefined4 uVar93;
  float fVar94;
  float fVar95;
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
  undefined1 auVar110 [16];
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
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
  
  uVar3 = *(ushort *)((long)param_1 + 0x1c);
  if ((ulong)uVar3 != 0) {
    lVar28 = 0;
    if (*param_1 != 0) {
      lVar28 = *param_1 + (long)param_1;
    }
    pauVar29 = (undefined1 (*) [16])(lVar28 + (ulong)uVar3 * 0x20);
    auVar67 = *pauVar29;
    auVar46 = pauVar29[1];
    lVar24 = param_2[1];
    plVar32 = (long *)(*(long *)(*param_3 + 0x10) + 0x38);
    lVar34 = *plVar32;
    lVar28 = 0;
    if (lVar34 != 0) {
      lVar28 = lVar34 + (long)plVar32;
    }
    if ((*(uint *)(lVar28 + ((ulong)(uVar3 >> 3) & 0x1ffc)) >> (ulong)(uVar3 & 0x1f) & 1) != 0) {
      auVar40._0_12_ = auVar46._0_12_;
      auVar40._12_4_ = 0;
      uVar93 = (undefined4)((ulong)param_3[7] >> 0x20);
      lVar28 = param_3[9];
      uVar78 = (undefined1)((ulong)lVar28 >> 8);
      uVar80 = (undefined1)((ulong)lVar28 >> 0x10);
      uVar82 = (undefined1)((ulong)lVar28 >> 0x18);
      uVar84 = (undefined1)((ulong)lVar28 >> 0x20);
      uVar86 = (undefined1)((ulong)lVar28 >> 0x28);
      uVar88 = (undefined1)((ulong)lVar28 >> 0x30);
      uVar90 = (undefined1)((ulong)lVar28 >> 0x38);
      auVar66._0_4_ = -(uint)(auVar67._0_4_ <= *(float *)(param_3 + 4));
      auVar66._4_4_ = -(uint)(auVar67._4_4_ <= *(float *)((long)param_3 + 0x24));
      auVar66._8_4_ = -(uint)(auVar67._8_4_ <= *(float *)(param_3 + 5));
      auVar66._12_4_ = -(uint)(auVar67._12_4_ <= *(float *)((long)param_3 + 0x2c));
      auVar55._0_4_ = -(uint)(*(float *)(param_3 + 2) <= auVar46._0_4_);
      auVar55._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= auVar46._4_4_);
      auVar55._8_4_ = -(uint)(*(float *)(param_3 + 3) <= auVar46._8_4_);
      auVar55._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
      auVar41._12_4_ = uVar93;
      auVar41._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
      auVar41 = NEON_fmax(auVar41,auVar40,4);
      auVar46[9] = uVar78;
      auVar46._0_9_ = *(unkbyte9 *)(param_3 + 8);
      auVar46[10] = uVar80;
      auVar46[0xb] = uVar82;
      auVar46[0xc] = uVar84;
      auVar46[0xd] = uVar86;
      auVar46[0xe] = uVar88;
      auVar46[0xf] = uVar90;
      auVar46 = NEON_fmin(auVar46,auVar67,4);
      auVar10._12_4_ = uVar93;
      auVar10._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
      auVar41 = auVar41 ^ (auVar41 ^ auVar10) & auVar55;
      param_3[7] = auVar41._8_8_;
      param_3[6] = auVar41._0_8_;
      auVar67[9] = uVar78;
      auVar67._0_9_ = *(unkbyte9 *)(param_3 + 8);
      auVar67[10] = uVar80;
      auVar67[0xb] = uVar82;
      auVar67[0xc] = uVar84;
      auVar67[0xd] = uVar86;
      auVar67[0xe] = uVar88;
      auVar67[0xf] = uVar90;
      auVar46 = auVar46 ^ (auVar46 ^ auVar67) & auVar66;
      param_3[9] = auVar46._8_8_;
      param_3[8] = auVar46._0_8_;
      if (CONCAT13((byte)((uint)auVar66._4_4_ >> 0x18) & (byte)((uint)auVar55._4_4_ >> 0x18) &
                   (byte)((uint)auVar66._0_4_ >> 0x18) & (byte)((uint)auVar55._0_4_ >> 0x18) &
                   (byte)((uint)auVar66._8_4_ >> 0x18) & (byte)((uint)auVar55._8_4_ >> 0x18),
                   CONCAT12((byte)((uint)auVar66._4_4_ >> 0x10) &
                            (byte)((uint)auVar55._4_4_ >> 0x10) &
                            (byte)((uint)auVar66._0_4_ >> 0x10) &
                            (byte)((uint)auVar55._0_4_ >> 0x10) &
                            (byte)((uint)auVar66._8_4_ >> 0x10) &
                            (byte)((uint)auVar55._8_4_ >> 0x10),
                            CONCAT11((byte)((uint)auVar66._4_4_ >> 8) &
                                     (byte)((uint)auVar55._4_4_ >> 8) &
                                     (byte)((uint)auVar66._0_4_ >> 8) &
                                     (byte)((uint)auVar55._0_4_ >> 8) &
                                     (byte)((uint)auVar66._8_4_ >> 8) &
                                     (byte)((uint)auVar55._8_4_ >> 8),
                                     (byte)auVar66._4_4_ & (byte)auVar55._4_4_ &
                                     (byte)auVar66._0_4_ & (byte)auVar55._0_4_ &
                                     (byte)auVar66._8_4_ & (byte)auVar55._8_4_))) != 0) {
LAB_02e95308:
        do {
          uVar3 = *(ushort *)(pauVar29[1] + 0xc);
          if ((ulong)uVar3 == 0) {
            lVar28 = *param_3;
            lVar34 = *(long *)(lVar28 + 8);
            uVar3 = *(ushort *)(pauVar29[1] + 0xe);
            pfVar2 = (float *)(lVar34 + 0x48 + (ulong)uVar3 * 0x40 + *(long *)(lVar34 + 0x48));
            pbVar38 = (byte *)((long)pfVar2 + 0x1e);
            if ((*pbVar38 >> 6 & 1) != 0) {
              pfVar39 = pfVar2 + 0xc;
              plVar32 = (long *)(*(long *)(lVar28 + 0x10) + 0x28);
              plVar37 = *(long **)(lVar28 + 0x70);
              lVar36 = 0;
              if (*(long *)pfVar39 != 0) {
                lVar36 = *(long *)pfVar39 + (long)pfVar39;
              }
              local_78 = **(undefined8 **)(lVar28 + 0x58);
              uStack_70 = (*(undefined8 **)(lVar28 + 0x58))[1];
              uVar33 = *(undefined8 *)((long)plVar32 + (ulong)uVar3 * 8 + *plVar32);
              puVar30 = *(undefined8 **)(lVar28 + 0x60);
              uVar35 = puVar30[3];
              iVar26 = (int)(uVar35 >> 0x20) + (uint)*(byte *)(lVar34 + 0x1c);
              uVar35 = (ulong)((uVar3 + 1 << (ulong)(-iVar26 & 0x1f)) - 1) |
                       uVar35 & *(uint *)(PTR_DAT_047d1a60 + ((long)uVar35 >> 0x20) * 4);
              plVar32 = (long *)**(long **)(lVar28 + 0x48);
              uVar93 = (undefined4)uVar35;
              if (plVar32 != (long *)0x0) {
                lVar27 = 0;
                if (*(long *)pfVar39 != 0) {
                  lVar27 = *(long *)pfVar39 + (long)pfVar39;
                }
                (**(code **)(*plVar32 + 0x40))
                          (plVar32,*(undefined2 *)(pfVar2 + 0xb),6,*puVar30,puVar30[1],lVar34,uVar35
                           ,lVar27,&local_78);
                lVar27 = *(long *)(lVar28 + 0x48);
                if (*(long *)(lVar27 + 8) != 0) {
                  local_e0[0] = *(undefined2 *)(lVar27 + 0x10);
                  uVar31 = *(undefined8 *)(lVar27 + 0x14);
                  *(undefined4 *)((undefined8 *)((ulong)local_e0 | 4) + 1) =
                       *(undefined4 *)(lVar27 + 0x1c);
                  *(undefined8 *)((ulong)local_e0 | 4) = uVar31;
                  puVar30 = *(undefined8 **)(lVar28 + 0x50);
                  local_d0 = *puVar30;
                  local_c8 = puVar30[1];
                  local_c0 = puVar30[2];
                  local_b8 = *(undefined4 *)(puVar30 + 3);
                  local_140 = CONCAT62(local_140._2_6_,(undefined2)local_78);
                  uVar31 = *(undefined8 *)((ulong)&local_78 | 4);
                  local_b0 = 0;
                  *(undefined4 *)((undefined8 *)((ulong)&local_140 | 4) + 1) =
                       *(undefined4 *)((undefined8 *)((ulong)&local_78 | 4) + 1);
                  *(undefined8 *)((ulong)&local_140 | 4) = uVar31;
                  local_130 = **(long **)(lVar28 + 0x60);
                  local_128 = (*(long **)(lVar28 + 0x60))[1];
                  local_118 = CONCAT44(local_118._4_4_,uVar93);
                  local_110 = 0;
                  if (*(long *)pfVar39 != 0) {
                    local_110 = *(long *)pfVar39 + (long)pfVar39;
                  }
                  local_120 = lVar34;
                  uVar35 = (**(code **)(**(long **)(lVar27 + 8) + 0x40))
                                     (*(long **)(lVar27 + 8),6,1,local_e0,&local_140);
                  if ((uVar35 & 1) == 0) goto LAB_02e95b74;
                }
              }
              if (*(char *)(lVar36 + 0x19) == '\x03') {
                memcpy(local_e0,*(void **)(lVar28 + 0x48),0x60);
                auVar46 = NEON_fmov(0x3f800000,4);
                if ((*pbVar38 >> 3 & 1) == 0) {
                  local_90 = pfVar2[4];
                  fStack_8c = pfVar2[5];
                  fStack_88 = pfVar2[6];
                  if ((*pbVar38 >> 2 & 1) == 0) {
                    uStack_98 = CONCAT44(*(float *)(lVar28 + 0x2c) - 0.0,
                                         *(float *)(lVar28 + 0x28) - fStack_88);
                    local_a0 = CONCAT44(*(float *)(lVar28 + 0x24) - fStack_8c,
                                        *(float *)(lVar28 + 0x20) - local_90);
                    auVar46 = *(undefined1 (*) [16])(lVar28 + 0x30);
                    local_90 = auVar46._0_4_ - local_90;
                    fStack_8c = auVar46._4_4_ - fStack_8c;
                    fStack_88 = auVar46._8_4_ - fStack_88;
                    fStack_84 = auVar46._12_4_ - 0.0;
                  }
                  else {
                    fVar113 = *pfVar2;
                    fVar61 = pfVar2[1];
                    fVar52 = pfVar2[2];
                    fVar62 = pfVar2[3];
                    fVar72 = (float)*(undefined8 *)(lVar28 + 0x38);
                    fVar65 = (float)*(undefined8 *)(lVar28 + 0x30);
                    fVar76 = (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20);
                    fVar71 = fVar61 + fVar61;
                    fVar75 = fVar52 + fVar52;
                    fVar112 = (float)*(undefined8 *)(lVar28 + 0x20);
                    fVar114 = (float)((ulong)*(undefined8 *)(lVar28 + 0x20) >> 0x20);
                    fVar54 = (float)*(undefined8 *)(lVar28 + 0x28);
                    fVar73 = (fVar113 + fVar113) * fVar113;
                    fVar53 = (fVar113 + fVar113) * fVar62;
                    fVar105 = 1.0 - fVar52 * fVar75;
                    fVar115 = fVar71 * fVar113 + fVar75 * fVar62;
                    fVar108 = fVar71 * fVar113 - fVar75 * fVar62;
                    fVar52 = (fVar65 - fVar112) * 0.5;
                    fVar63 = (fVar76 - fVar114) * 0.5;
                    fVar111 = (fVar72 - fVar54) * 0.5;
                    local_90 = (fVar112 + fVar65) * 0.5 - local_90;
                    fStack_8c = (fVar114 + fVar76) * 0.5 - fStack_8c;
                    fStack_88 = (fVar54 + fVar72) * 0.5 - fStack_88;
                    fVar65 = fVar105 - fVar71 * fVar61;
                    fVar105 = fVar105 - fVar73;
                    fVar112 = fVar75 * fVar113 - fVar71 * fVar62;
                    fVar114 = fVar75 * fVar61 + fVar53;
                    fVar53 = fVar75 * fVar61 - fVar53;
                    fVar75 = fVar75 * fVar113 + fVar71 * fVar62;
                    fVar54 = (1.0 - fVar73) - fVar71 * fVar61;
                    fVar113 = ABS(fVar112 * fVar111) + ABS(fVar65 * fVar52) + ABS(fVar115 * fVar63);
                    fVar61 = ABS(fVar114 * fVar111) + ABS(fVar108 * fVar52) + ABS(fVar105 * fVar63);
                    fVar62 = ABS(fVar54 * fVar111) + ABS(fVar75 * fVar52) + ABS(fVar53 * fVar63);
                    fVar63 = ABS(fVar111 * 0.0) + ABS(fVar53 * fVar52) + ABS(fVar63 * 0.0);
                    fVar112 = fVar112 * fStack_88 + fVar65 * local_90 + fVar115 * fStack_8c;
                    fVar114 = fVar114 * fStack_88 + fVar108 * local_90 + fVar105 * fStack_8c;
                    fVar54 = fVar54 * fStack_88 + fVar75 * local_90 + fVar53 * fStack_8c;
                    fVar52 = fStack_88 * 0.0 + fVar53 * local_90 + fStack_8c * 0.0;
                    local_90 = fVar112 + fVar113;
                    fStack_8c = fVar114 + fVar61;
                    fStack_88 = fVar54 + fVar62;
                    fStack_84 = fVar52 + fVar63;
                    uStack_98 = CONCAT44(fVar52 - fVar63,fVar54 - fVar62);
                    local_a0 = CONCAT44(fVar114 - fVar61,fVar112 - fVar113);
                  }
                }
                else {
                  fVar112 = *(float *)(lVar28 + 0x20);
                  fVar114 = *(float *)(lVar28 + 0x24);
                  local_a0 = *(undefined8 *)(lVar28 + 0x20);
                  fVar54 = *(float *)(lVar28 + 0x28);
                  uStack_98 = *(undefined8 *)(lVar28 + 0x28);
                  auVar67 = *(undefined1 (*) [16])(lVar28 + 0x30);
                  fVar52 = auVar67._0_4_;
                  iVar64 = -(uint)(fVar52 < fVar112);
                  fVar63 = auVar67._4_4_;
                  iVar70 = -(uint)(fVar63 < fVar114);
                  fVar111 = auVar67._8_4_;
                  iVar74 = -(uint)(fVar111 < fVar54);
                  if (CONCAT13((byte)((uint)iVar70 >> 0x18) | (byte)((uint)iVar64 >> 0x18) |
                               (byte)((uint)iVar74 >> 0x18),
                               CONCAT12((byte)((uint)iVar70 >> 0x10) | (byte)((uint)iVar64 >> 0x10)
                                        | (byte)((uint)iVar74 >> 0x10),
                                        CONCAT11((byte)((uint)iVar70 >> 8) |
                                                 (byte)((uint)iVar64 >> 8) |
                                                 (byte)((uint)iVar74 >> 8),
                                                 (byte)iVar70 | (byte)iVar64 | (byte)iVar74))) == 0)
                  {
                    fVar113 = (float)*(undefined8 *)pfVar2;
                    fVar61 = (float)((ulong)*(undefined8 *)pfVar2 >> 0x20);
                    fVar115 = fVar61 + fVar61;
                    fVar62 = (float)*(undefined8 *)(pfVar2 + 2);
                    fVar92 = fVar62 + fVar62;
                    fVar94 = (fVar113 + fVar113) * fVar113;
                    fVar53 = (float)((ulong)*(undefined8 *)(pfVar2 + 2) >> 0x20);
                    fVar71 = (fVar113 + fVar113) * fVar53;
                    fVar109 = fVar92 * fVar61 - fVar71;
                    fVar106 = 1.0 - fVar62 * fVar92;
                    fVar76 = auVar46._0_4_ / pfVar2[8];
                    fVar72 = auVar46._4_4_ / pfVar2[9];
                    fVar105 = auVar46._8_4_ / pfVar2[10];
                    fVar108 = auVar46._12_4_ / 1.0;
                    fVar107 = pfVar2[6];
                    fVar62 = fVar76 * (fVar106 - fVar115 * fVar61);
                    fVar75 = fVar72 * (fVar115 * fVar113 - fVar92 * fVar53);
                    fVar65 = fVar105 * (fVar92 * fVar113 + fVar115 * fVar53);
                    fVar73 = fVar108 * fVar109;
                    fVar95 = fVar76 * (fVar115 * fVar113 + fVar92 * fVar53);
                    fVar96 = fVar72 * (fVar106 - fVar94);
                    fVar109 = fVar105 * fVar109;
                    fVar98 = fVar108 * 0.0;
                    fVar76 = fVar76 * (fVar92 * fVar113 - fVar115 * fVar53);
                    fVar72 = fVar72 * (fVar92 * fVar61 + fVar71);
                    fVar105 = fVar105 * ((1.0 - fVar94) - fVar115 * fVar61);
                    fVar108 = fVar108 * 0.0;
                    fVar71 = (float)*(undefined8 *)(pfVar2 + 4);
                    fVar92 = (float)((ulong)*(undefined8 *)(pfVar2 + 4) >> 0x20);
                    fVar113 = (fVar52 - fVar112) * 0.5;
                    fVar61 = (fVar63 - fVar114) * 0.5;
                    fVar53 = (fVar111 - fVar54) * 0.5;
                    fVar115 = (fVar112 + fVar52) * 0.5;
                    fVar94 = (fVar114 + fVar63) * 0.5;
                    fVar106 = (fVar54 + fVar111) * 0.5;
                    fVar112 = ABS(fVar76 * fVar53) + ABS(fVar62 * fVar113) + ABS(fVar95 * fVar61);
                    fVar114 = ABS(fVar72 * fVar53) + ABS(fVar75 * fVar113) + ABS(fVar96 * fVar61);
                    fVar54 = ABS(fVar105 * fVar53) + ABS(fVar65 * fVar113) + ABS(fVar109 * fVar61);
                    fVar52 = ABS(fVar108 * fVar53) + ABS(fVar73 * fVar113) + ABS(fVar98 * fVar61);
                    fVar63 = fVar76 * fVar106 + fVar62 * fVar115 + fVar95 * fVar94 +
                             -(fVar76 * fVar107 + fVar62 * fVar71 + fVar95 * fVar92);
                    fVar111 = fVar72 * fVar106 + fVar75 * fVar115 + fVar96 * fVar94 +
                              -(fVar72 * fVar107 + fVar75 * fVar71 + fVar96 * fVar92);
                    fVar113 = fVar105 * fVar106 + fVar65 * fVar115 + fVar109 * fVar94 +
                              -(fVar105 * fVar107 + fVar65 * fVar71 + fVar109 * fVar92);
                    fVar61 = fVar108 * fVar106 + fVar73 * fVar115 + fVar98 * fVar94 +
                             fVar108 * fVar107 + fVar73 * fVar71 + fVar98 * fVar92;
                    local_90 = fVar112 + fVar63;
                    fStack_8c = fVar114 + fVar111;
                    fStack_88 = fVar54 + fVar113;
                    fStack_84 = fVar52 + fVar61;
                    auVar58._0_8_ = CONCAT44(fVar111 - fVar114,fVar63 - fVar112);
                    auVar58._8_4_ = fVar113 - fVar54;
                    auVar58._12_4_ = fVar61 - fVar52;
                    uStack_98 = auVar58._8_8_;
                    local_a0 = auVar58._0_8_;
                  }
                  else {
                    local_90 = *(float *)(lVar28 + 0x30);
                    fStack_8c = *(float *)(lVar28 + 0x34);
                    fStack_88 = *(float *)(lVar28 + 0x38);
                    fStack_84 = *(float *)(lVar28 + 0x3c);
                  }
                }
                puVar30 = *(undefined8 **)(lVar28 + 0x60);
                uVar35 = (ulong)local_110 >> 8;
                local_140 = *puVar30;
                uStack_138 = puVar30[1];
                local_120 = puVar30[4];
                local_100 = puVar30[8];
                uStack_f8 = puVar30[9];
                uStack_f0 = puVar30[10];
                uStack_e8 = puVar30[0xb];
                uStack_108 = *(undefined4 *)(puVar30 + 7);
                local_110 = CONCAT44(*(undefined4 *)((long)puVar30 + 0x34),
                                     (int)CONCAT71((int7)uVar35,*(undefined1 *)(puVar30 + 6)));
                local_128 = CONCAT44(iVar26,uVar93);
                auVar43._8_4_ = 0x5f7ffff0;
                auVar43._0_8_ = 0x5f7ffff05f7ffff0;
                auVar43._12_4_ = 0x5f7ffff0;
                auVar47._8_4_ = 0xdf7ffff0;
                auVar47._0_8_ = 0xdf7ffff0df7ffff0;
                auVar47._12_4_ = 0xdf7ffff0;
                uStack_158 = auVar47._8_8_;
                local_160 = 0xdf7ffff0df7ffff0;
                uStack_148 = auVar43._8_8_;
                uStack_150 = 0x5f7ffff05f7ffff0;
                local_130 = lVar36;
                local_118 = uVar33;
                (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar36 + 0x18) * 0x200 +
                            0xe0))(lVar36,*(undefined8 *)(lVar28 + 0x40),local_e0,
                                   *(undefined8 *)(lVar28 + 0x50),&local_78,&local_140,plVar37,
                                   &local_160);
                fVar54 = pfVar2[8];
                fVar52 = pfVar2[9];
                fVar63 = pfVar2[10];
                bVar77 = *pbVar38;
                fVar111 = (float)((ulong)uStack_150 >> 0x20);
                fVar113 = (float)((ulong)uStack_148 >> 0x20);
                fVar112 = (float)((ulong)local_160 >> 0x20);
                fVar114 = (float)((ulong)uStack_158 >> 0x20);
                if ((bVar77 >> 2 & 1) == 0) {
                  auVar69._8_8_ = uStack_158;
                  auVar69._0_8_ = local_160;
                  auVar59._8_8_ = uStack_148;
                  auVar59._0_8_ = uStack_150;
                  if ((bVar77 >> 3 & 1) != 0) {
                    fVar61 = fVar54 * (float)local_160;
                    fVar112 = fVar52 * fVar112;
                    uVar78 = (undefined1)((uint)fVar112 >> 8);
                    uVar80 = (undefined1)((uint)fVar112 >> 0x10);
                    uVar82 = (undefined1)((uint)fVar112 >> 0x18);
                    fVar62 = fVar63 * (float)uStack_158;
                    uVar84 = (undefined1)((uint)fVar62 >> 8);
                    uVar86 = (undefined1)((uint)fVar62 >> 0x10);
                    uVar88 = (undefined1)((uint)fVar62 >> 0x18);
                    fVar114 = fVar114 * 1.0;
                    uVar90 = (undefined1)((uint)fVar114 >> 8);
                    uVar89 = (undefined1)((uint)fVar114 >> 0x10);
                    uVar91 = (undefined1)((uint)fVar114 >> 0x18);
                    auVar48._0_4_ = fVar54 * (float)uStack_150;
                    auVar48._4_4_ = fVar52 * fVar111;
                    auVar48._8_4_ = fVar63 * (float)uStack_148;
                    auVar48._12_4_ = fVar113 * 1.0;
                    auVar8[4] = SUB41(fVar112,0);
                    auVar8._0_4_ = fVar61;
                    auVar8[5] = uVar78;
                    auVar8[6] = uVar80;
                    auVar8[7] = uVar82;
                    auVar8[8] = SUB41(fVar62,0);
                    auVar8[9] = uVar84;
                    auVar8[10] = uVar86;
                    auVar8[0xb] = uVar88;
                    auVar8[0xc] = SUB41(fVar114,0);
                    auVar8[0xd] = uVar90;
                    auVar8[0xe] = uVar89;
                    auVar8[0xf] = uVar91;
                    auVar69 = NEON_fmin(auVar8,auVar48,4);
                    auVar9[4] = SUB41(fVar112,0);
                    auVar9._0_4_ = fVar61;
                    auVar9[5] = uVar78;
                    auVar9[6] = uVar80;
                    auVar9[7] = uVar82;
                    auVar9[8] = SUB41(fVar62,0);
                    auVar9[9] = uVar84;
                    auVar9[10] = uVar86;
                    auVar9[0xb] = uVar88;
                    auVar9[0xc] = SUB41(fVar114,0);
                    auVar9[0xd] = uVar90;
                    auVar9[0xe] = uVar89;
                    auVar9[0xf] = uVar91;
                    auVar59 = NEON_fmax(auVar9,auVar48,4);
                  }
                  auVar49._0_4_ = pfVar2[4] + auVar69._0_4_;
                  auVar49._4_4_ = pfVar2[5] + auVar69._4_4_;
                  auVar49._8_4_ = pfVar2[6] + auVar69._8_4_;
                  auVar49._12_4_ = auVar69._12_4_ + 0.0;
                  auVar44._0_4_ = pfVar2[4] + auVar59._0_4_;
                  auVar44._4_4_ = pfVar2[5] + auVar59._4_4_;
                  auVar44._8_4_ = pfVar2[6] + auVar59._8_4_;
                  auVar44._12_4_ = auVar59._12_4_ + 0.0;
                  auVar45 = NEON_fmax(auVar44,*(undefined1 (*) [16])(lVar28 + 0x30),4);
                  auVar50 = NEON_fmin(auVar49,*(undefined1 (*) [16])(lVar28 + 0x20),4);
                }
                else {
                  fVar62 = *pfVar2;
                  fVar53 = pfVar2[1];
                  fVar71 = pfVar2[2];
                  fVar75 = pfVar2[3];
                  fVar73 = fVar53 + fVar53;
                  fVar76 = fVar71 + fVar71;
                  fVar61 = (fVar62 + fVar62) * fVar62;
                  fVar65 = (fVar62 + fVar62) * fVar75;
                  auVar60._0_4_ = -(uint)((bVar77 & 8) == 0);
                  auVar60._4_4_ = auVar60._0_4_;
                  auVar60._8_4_ = auVar60._0_4_;
                  auVar60._12_4_ = auVar60._0_4_;
                  auVar110._0_4_ = (float)uStack_150 - local_90;
                  auVar110._4_4_ = fVar111 - fStack_8c;
                  auVar110._8_4_ = (float)uStack_148 - fStack_88;
                  auVar110._12_4_ = fVar113 - fStack_84;
                  fVar111 = (float)local_a0 - (float)local_160;
                  fVar112 = (float)((ulong)local_a0 >> 0x20) - fVar112;
                  fVar113 = (float)uStack_98 - (float)uStack_158;
                  fVar114 = (float)((ulong)uStack_98 >> 0x20) - fVar114;
                  auVar51._0_4_ = ABS(fVar54) * fVar111;
                  auVar51._4_4_ = ABS(fVar52) * fVar112;
                  auVar51._8_4_ = ABS(fVar63) * fVar113;
                  auVar51._12_4_ = fVar114 * 1.0;
                  auVar23._4_4_ = ABS(fVar52) * auVar110._4_4_;
                  auVar23._0_4_ = ABS(fVar54) * auVar110._0_4_;
                  auVar23._8_4_ = ABS(fVar63) * auVar110._8_4_;
                  auVar23._12_4_ = auVar110._12_4_ * 1.0;
                  auVar22._4_4_ = fVar112;
                  auVar22._0_4_ = fVar111;
                  auVar22._8_4_ = fVar113;
                  auVar22._12_4_ = fVar114;
                  fVar112 = 1.0 - fVar71 * fVar76;
                  auVar46 = NEON_smin(auVar51 ^ (auVar51 ^ auVar22) & auVar60,
                                      auVar110 ^ (auVar110 ^ auVar23) & ~auVar60,4);
                  uVar33 = NEON_fminp(auVar46._0_8_,auVar46._0_8_,4);
                  uVar31 = NEON_fmin(CONCAT44(auVar46._8_4_,auVar46._8_4_),uVar33,4);
                  uVar33 = CONCAT44(ABS(fVar76 * fVar53 + fVar65) +
                                    ABS(fVar73 * fVar62 - fVar76 * fVar75) + ABS(fVar112 - fVar61),
                                    ABS(fVar76 * fVar62 - fVar73 * fVar75) +
                                    ABS(fVar112 - fVar73 * fVar53) +
                                    ABS(fVar73 * fVar62 + fVar76 * fVar75));
                  fVar112 = ABS((1.0 - fVar61) - fVar73 * fVar53) +
                            ABS(fVar76 * fVar62 + fVar73 * fVar75) + ABS(fVar76 * fVar53 - fVar65);
                  uVar33 = NEON_fmaxp(uVar33,uVar33,4);
                  uVar33 = NEON_fmax(CONCAT44(fVar112,fVar112),uVar33,4);
                  fVar112 = (float)uVar31 / (float)uVar33;
                  fVar114 = (float)((ulong)uVar31 >> 0x20) / (float)((ulong)uVar33 >> 0x20);
                  auVar45._0_4_ = fVar112 + *(float *)(lVar28 + 0x30);
                  auVar45._4_4_ = fVar114 + *(float *)(lVar28 + 0x34);
                  auVar45._8_4_ = fVar112 + *(float *)(lVar28 + 0x38);
                  auVar45._12_4_ = fVar114 + *(float *)(lVar28 + 0x3c);
                  auVar50._0_4_ = *(float *)(lVar28 + 0x20) - fVar112;
                  auVar50._4_4_ = *(float *)(lVar28 + 0x24) - fVar114;
                  auVar50._8_4_ = *(float *)(lVar28 + 0x28) - fVar112;
                  auVar50._12_4_ = *(float *)(lVar28 + 0x2c) - fVar114;
                }
                auVar46 = NEON_fmin(auVar45,*(undefined1 (*) [16])(param_3 + 8),4);
                auVar67 = NEON_fmax(auVar50,*(undefined1 (*) [16])(param_3 + 6),4);
                param_3[7] = auVar67._8_8_;
                param_3[6] = auVar67._0_8_;
                param_3[9] = auVar46._8_8_;
                param_3[8] = auVar46._0_8_;
              }
              else {
                iVar26 = (int)plVar37[1];
                lVar28 = (long)iVar26;
                if ((int)(*(uint *)((long)plVar37 + 0xc) & 0x7fffffff) <= iVar26) {
                  FUN_02e931c8(plVar37,PTR_PTR_047d1a50,lVar28 + 1);
                  iVar26 = (int)plVar37[1];
                }
                *(undefined4 *)(*plVar37 + (long)iVar26 * 4) = uVar93;
                *(int *)(plVar37 + 1) = (int)(lVar28 + 1);
              }
            }
            goto LAB_02e95b74;
          }
          uVar4 = *(ushort *)(pauVar29[1] + 0xe);
          lVar28 = 0;
          if (*param_1 != 0) {
            lVar28 = *param_1 + (long)param_1;
          }
          pauVar29 = (undefined1 (*) [16])(lVar28 + (ulong)uVar3 * 0x20);
          pauVar1 = (undefined1 (*) [16])(lVar28 + (ulong)uVar4 * 0x20);
          auVar67 = *pauVar29;
          auVar46 = pauVar29[1];
          auVar10 = *pauVar1;
          auVar41 = pauVar1[1];
          plVar32 = (long *)(*(long *)(*param_3 + 0x10) + 0x38);
          lVar36 = *plVar32;
          lVar28 = lVar36 + (long)plVar32;
          lVar34 = 0;
          if (lVar36 != 0) {
            lVar34 = lVar28;
          }
          if ((*(uint *)(lVar34 + ((ulong)(uVar3 >> 3) & 0x1ffc)) >> (ulong)(uVar3 & 0x1f) & 1) == 0
             ) {
            bVar25 = false;
          }
          else {
            auVar56._0_12_ = auVar46._0_12_;
            auVar56._12_4_ = 0;
            uVar93 = (undefined4)((ulong)param_3[9] >> 0x20);
            iVar18 = -(uint)((float)param_3[2] <= auVar46._0_4_);
            iVar19 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= auVar46._4_4_);
            bVar99 = (byte)((uint)iVar19 >> 8);
            bVar100 = (byte)((uint)iVar19 >> 0x10);
            bVar101 = (byte)((uint)iVar19 >> 0x18);
            iVar20 = -(uint)((float)param_3[3] <= auVar46._8_4_);
            bVar102 = (byte)((uint)iVar20 >> 8);
            bVar103 = (byte)((uint)iVar20 >> 0x10);
            bVar104 = (byte)((uint)iVar20 >> 0x18);
            iVar21 = -(uint)((float)((ulong)param_3[3] >> 0x20) <= 0.0);
            uVar97 = (undefined4)((ulong)param_3[7] >> 0x20);
            iVar26 = -(uint)(auVar67._0_4_ <= (float)param_3[4]);
            iVar64 = -(uint)(auVar67._4_4_ <= (float)((ulong)param_3[4] >> 0x20));
            bVar77 = (byte)((uint)iVar64 >> 8);
            bVar79 = (byte)((uint)iVar64 >> 0x10);
            bVar81 = (byte)((uint)iVar64 >> 0x18);
            iVar70 = -(uint)(auVar67._8_4_ <= (float)param_3[5]);
            bVar83 = (byte)((uint)iVar70 >> 8);
            bVar85 = (byte)((uint)iVar70 >> 0x10);
            bVar87 = (byte)((uint)iVar70 >> 0x18);
            iVar74 = -(uint)(auVar67._12_4_ <= (float)((ulong)param_3[5] >> 0x20));
            auVar11._12_4_ = uVar93;
            auVar11._0_12_ = *(undefined1 (*) [12])(param_3 + 8);
            auVar67 = NEON_fmin(auVar11,auVar67,4);
            auVar15._12_4_ = uVar97;
            auVar15._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
            auVar46 = NEON_fmax(auVar15,auVar56,4);
            auVar12._12_4_ = uVar93;
            auVar12._0_12_ = *(undefined1 (*) [12])(param_3 + 8);
            auVar5[4] = (byte)iVar64;
            auVar5._0_4_ = iVar26;
            auVar5[5] = bVar77;
            auVar5[6] = bVar79;
            auVar5[7] = bVar81;
            auVar5[8] = (byte)iVar70;
            auVar5[9] = bVar83;
            auVar5[10] = bVar85;
            auVar5[0xb] = bVar87;
            auVar5[0xc] = (char)iVar74;
            auVar5[0xd] = (char)((uint)iVar74 >> 8);
            auVar5[0xe] = (char)((uint)iVar74 >> 0x10);
            auVar5[0xf] = (char)((uint)iVar74 >> 0x18);
            auVar67 = auVar67 ^ (auVar67 ^ auVar12) & auVar5;
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
            auVar46 = auVar46 ^ (auVar46 ^ auVar16) & auVar17;
            param_3[7] = auVar46._8_8_;
            param_3[6] = auVar46._0_8_;
            param_3[9] = auVar67._8_8_;
            param_3[8] = auVar67._0_8_;
            plVar32 = (long *)(*(long *)(*param_3 + 0x10) + 0x38);
            lVar36 = *plVar32;
            bVar25 = CONCAT13(bVar81 & bVar101 &
                              (byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar18 >> 0x18) &
                              bVar87 & bVar104,
                              CONCAT12(bVar79 & bVar100 &
                                       (byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar18 >> 0x10) &
                                       bVar85 & bVar103,
                                       CONCAT11(bVar77 & bVar99 &
                                                (byte)((uint)iVar26 >> 8) &
                                                (byte)((uint)iVar18 >> 8) & bVar83 & bVar102,
                                                (byte)iVar64 & (byte)iVar19 &
                                                (byte)iVar26 & (byte)iVar18 &
                                                (byte)iVar70 & (byte)iVar20))) != 0;
            lVar28 = lVar36 + (long)plVar32;
          }
          lVar34 = 0;
          if (lVar36 != 0) {
            lVar34 = lVar28;
          }
          if ((*(uint *)(lVar34 + ((ulong)(uVar4 >> 3) & 0x1ffc)) >> (ulong)(uVar4 & 0x1f) & 1) == 0
             ) {
LAB_02e9563c:
            bVar77 = 0;
          }
          else {
            auVar42._0_12_ = auVar41._0_12_;
            auVar42._12_4_ = 0;
            auVar68._0_4_ = -(uint)(auVar10._0_4_ <= *(float *)(param_3 + 4));
            auVar68._4_4_ = -(uint)(auVar10._4_4_ <= *(float *)((long)param_3 + 0x24));
            auVar68._8_4_ = -(uint)(auVar10._8_4_ <= *(float *)(param_3 + 5));
            auVar68._12_4_ = -(uint)(auVar10._12_4_ <= *(float *)((long)param_3 + 0x2c));
            uVar93 = (undefined4)((ulong)param_3[7] >> 0x20);
            lVar28 = param_3[9];
            uVar78 = (undefined1)((ulong)lVar28 >> 8);
            uVar80 = (undefined1)((ulong)lVar28 >> 0x10);
            uVar82 = (undefined1)((ulong)lVar28 >> 0x18);
            uVar84 = (undefined1)((ulong)lVar28 >> 0x20);
            uVar86 = (undefined1)((ulong)lVar28 >> 0x28);
            uVar88 = (undefined1)((ulong)lVar28 >> 0x30);
            uVar90 = (undefined1)((ulong)lVar28 >> 0x38);
            auVar6[9] = uVar78;
            auVar6._0_9_ = *(unkbyte9 *)(param_3 + 8);
            auVar6[10] = uVar80;
            auVar6[0xb] = uVar82;
            auVar6[0xc] = uVar84;
            auVar6[0xd] = uVar86;
            auVar6[0xe] = uVar88;
            auVar6[0xf] = uVar90;
            auVar67 = NEON_fmin(auVar6,auVar10,4);
            auVar57._0_4_ = -(uint)(*(float *)(param_3 + 2) <= auVar41._0_4_);
            auVar57._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= auVar41._4_4_);
            auVar57._8_4_ = -(uint)(*(float *)(param_3 + 3) <= auVar41._8_4_);
            auVar57._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
            auVar13._12_4_ = uVar93;
            auVar13._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
            auVar46 = NEON_fmax(auVar13,auVar42,4);
            auVar14._12_4_ = uVar93;
            auVar14._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
            auVar46 = auVar46 ^ (auVar46 ^ auVar14) & auVar57;
            param_3[7] = auVar46._8_8_;
            param_3[6] = auVar46._0_8_;
            auVar7[9] = uVar78;
            auVar7._0_9_ = *(unkbyte9 *)(param_3 + 8);
            auVar7[10] = uVar80;
            auVar7[0xb] = uVar82;
            auVar7[0xc] = uVar84;
            auVar7[0xd] = uVar86;
            auVar7[0xe] = uVar88;
            auVar7[0xf] = uVar90;
            auVar67 = auVar67 ^ (auVar67 ^ auVar7) & auVar68;
            param_3[9] = auVar67._8_8_;
            param_3[8] = auVar67._0_8_;
            if (CONCAT13((byte)((uint)auVar68._4_4_ >> 0x18) & (byte)((uint)auVar57._4_4_ >> 0x18) &
                         (byte)((uint)auVar68._0_4_ >> 0x18) & (byte)((uint)auVar57._0_4_ >> 0x18) &
                         (byte)((uint)auVar68._8_4_ >> 0x18) & (byte)((uint)auVar57._8_4_ >> 0x18),
                         CONCAT12((byte)((uint)auVar68._4_4_ >> 0x10) &
                                  (byte)((uint)auVar57._4_4_ >> 0x10) &
                                  (byte)((uint)auVar68._0_4_ >> 0x10) &
                                  (byte)((uint)auVar57._0_4_ >> 0x10) &
                                  (byte)((uint)auVar68._8_4_ >> 0x10) &
                                  (byte)((uint)auVar57._8_4_ >> 0x10),
                                  CONCAT11((byte)((uint)auVar68._4_4_ >> 8) &
                                           (byte)((uint)auVar57._4_4_ >> 8) &
                                           (byte)((uint)auVar68._0_4_ >> 8) &
                                           (byte)((uint)auVar57._0_4_ >> 8) &
                                           (byte)((uint)auVar68._8_4_ >> 8) &
                                           (byte)((uint)auVar57._8_4_ >> 8),
                                           (byte)auVar68._4_4_ & (byte)auVar57._4_4_ &
                                           (byte)auVar68._0_4_ & (byte)auVar57._0_4_ &
                                           (byte)auVar68._8_4_ & (byte)auVar57._8_4_))) == 0)
            goto LAB_02e9563c;
            bVar77 = 2;
          }
          bVar77 = bVar77 | bVar25;
        } while (bVar77 == 1);
        if (bVar77 == 3) {
          iVar26 = (int)param_2[1];
          lVar28 = (long)iVar26;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar26) {
            FUN_02e8bb18(param_2,PTR_PTR_047d1a50,lVar28 + 1);
            iVar26 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = (int)(lVar28 + 1);
          *(ushort *)(*param_2 + (long)iVar26 * 2) = uVar4;
          goto LAB_02e95308;
        }
        pauVar29 = pauVar1;
        if (bVar77 == 2) goto LAB_02e95308;
LAB_02e95b74:
        if ((int)lVar24 < (int)param_2[1]) {
          iVar26 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar26;
          lVar28 = 0;
          if (*param_1 != 0) {
            lVar28 = *param_1 + (long)param_1;
          }
          pauVar29 = (undefined1 (*) [16])
                     (lVar28 + (ulong)*(ushort *)(*param_2 + (long)iVar26 * 2) * 0x20);
          goto LAB_02e95308;
        }
      }
    }
  }
  return;
}


