/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031046c0; name: FUN_031046c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031046c0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined8 *param_4,undefined8 *param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined1 uVar26;
  byte bVar27;
  undefined1 uVar28;
  byte bVar29;
  undefined1 uVar30;
  byte bVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  byte bVar34;
  undefined1 uVar35;
  byte bVar36;
  undefined1 uVar37;
  byte bVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  byte bVar41;
  undefined1 uVar42;
  byte bVar43;
  undefined1 uVar44;
  byte bVar45;
  undefined1 uVar46;
  float fVar47;
  float fVar49;
  float fVar50;
  undefined1 auVar48 [16];
  float fVar51;
  float fVar52;
  undefined1 auVar53 [12];
  undefined1 auVar56 [12];
  byte bVar66;
  byte bVar67;
  float fVar69;
  byte bVar71;
  byte bVar72;
  byte bVar76;
  byte bVar77;
  byte bVar82;
  byte bVar83;
  undefined1 auVar57 [16];
  int iVar74;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar54 [12];
  undefined1 auVar55 [12];
  float fVar70;
  float fVar75;
  float fVar79;
  int iVar80;
  undefined1 auVar60 [16];
  float fVar81;
  undefined1 auVar61 [16];
  byte bVar68;
  byte bVar73;
  byte bVar78;
  byte bVar84;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar85;
  int iVar86;
  float fVar88;
  ulong uVar87;
  int iVar89;
  float fVar90;
  float fVar91;
  char cVar92;
  float fVar93;
  float fVar94;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar104;
  undefined8 uVar105;
  undefined1 auVar107 [12];
  undefined1 auVar108 [16];
  ulong uVar106;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  undefined1 auVar115 [12];
  float fVar118;
  float fVar121;
  float fVar124;
  undefined1 auVar116 [16];
  float fVar119;
  float fVar120;
  float fVar122;
  float fVar123;
  float fVar125;
  float fVar126;
  undefined1 auVar117 [16];
  float fVar127;
  float fVar129;
  float fVar130;
  float fVar131;
  undefined1 auVar128 [16];
  float fVar132;
  int iVar133;
  float fVar134;
  float fVar135;
  int iVar136;
  float fVar137;
  int iVar138;
  float fVar139;
  float fVar140;
  int iVar141;
  float fVar142;
  int iVar143;
  float fVar144;
  float fVar145;
  int iVar146;
  float fVar148;
  int iVar149;
  float fVar150;
  float fVar151;
  int iVar152;
  undefined8 uVar147;
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
  float fVar168;
  float fVar169;
  float fVar170;
  float fVar175;
  float fVar176;
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  float fVar177;
  float fVar178;
  float fVar180;
  undefined1 auVar179 [16];
  float fVar181;
  float fVar182;
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  float fVar185;
  float fVar187;
  float fVar188;
  undefined1 auVar186 [16];
  float fVar189;
  float fVar190;
  float fVar191;
  float fVar192;
  float fVar193;
  float fVar194;
  float fVar195;
  float fVar196;
  float fVar197;
  float fVar198;
  float fVar199;
  float fVar200;
  float fVar201;
  float fVar202;
  float fVar203;
  float fVar204;
  float fVar205;
  float fVar206;
  float fVar207;
  float fVar208;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong local_80 [4];
  undefined8 local_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  bVar23 = param_1[1][8];
  bVar10 = (bVar23 & 1) != 0;
  iVar86 = 1;
  if (bVar10) {
    iVar86 = 2;
  }
  iVar89 = 1;
  if (!bVar10) {
    iVar89 = 2;
  }
  uVar12 = (iVar86 + ((int)(char)bVar23 >> 1)) % 3;
  auVar59 = *param_1;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uVar14 = uVar12;
  if (2 < uVar12) {
    uVar14 = 3;
  }
  uVar1 = (int)((uint)bVar23 << 0x18) >> 0x19;
  uVar13 = (iVar89 + ((int)(char)bVar23 >> 1)) % 3;
  fVar114 = *(float *)param_1[1];
  uVar15 = uVar13;
  if (2 < uVar13) {
    uVar15 = 3;
  }
  *(float *)((long)local_80 + (ulong)uVar14 * 4 + -0x10) = fVar114;
  fVar120 = *(float *)(param_1[1] + 4);
  *(float *)((long)local_80 + (ulong)uVar15 * 4 + -0x20) = fVar120;
  auVar48 = *param_2;
  auVar108 = *(undefined1 (*) [16])
              (PTR_DAT_047d19e0 + (ulong)(uint)(1 << (ulong)(uVar1 & 0x1f)) * 0x10);
  fVar192 = auVar59._0_4_;
  fVar85 = auVar48._0_4_ - fVar192;
  fVar194 = auVar59._4_4_;
  fVar88 = auVar48._4_4_ - fVar194;
  fVar123 = auVar59._8_4_;
  fVar90 = auVar48._8_4_ - fVar123;
  fVar126 = auVar59._12_4_;
  fVar91 = auVar48._12_4_ - fVar126;
  if (uVar1 == 3) {
    uVar87 = CONCAT44(fVar91,fVar91);
  }
  else {
    uVar106 = CONCAT44(fVar85,fVar85);
    if (uVar1 == 1) {
      uVar106 = CONCAT44(fVar88,fVar88);
    }
    uVar87 = CONCAT44(fVar90,fVar90);
    if (uVar1 != 2) {
      uVar87 = uVar106;
    }
  }
  cVar92 = -((bVar23 & 1) == 0);
  uVar87 = uVar87 ^ (uVar87 ^ CONCAT44(-(float)(uVar87 >> 0x20),-(float)uVar87)) &
                    ~CONCAT17(cVar92,CONCAT16(cVar92,CONCAT15(cVar92,CONCAT14(cVar92,CONCAT13(cVar92
                                                  ,CONCAT12(cVar92,CONCAT11(cVar92,cVar92)))))));
  iVar86 = -(uint)((float)uVar87 < 0.0);
  iVar89 = -(uint)((float)(uVar87 >> 0x20) < 0.0);
  bVar24 = auVar108[0];
  auVar172[0] = (byte)iVar86 & bVar24;
  bVar25 = auVar108[1];
  bVar45 = (byte)((uint)iVar86 >> 8);
  auVar172[1] = bVar45 & bVar25;
  bVar27 = auVar108[2];
  bVar66 = (byte)((uint)iVar86 >> 0x10);
  auVar172[2] = bVar66 & bVar27;
  bVar29 = auVar108[3];
  bVar67 = (byte)((uint)iVar86 >> 0x18);
  auVar172[3] = bVar67 & bVar29;
  bVar31 = auVar108[4];
  auVar172[4] = (byte)iVar89 & bVar31;
  bVar34 = auVar108[5];
  bVar71 = (byte)((uint)iVar89 >> 8);
  auVar172[5] = bVar71 & bVar34;
  bVar36 = auVar108[6];
  bVar72 = (byte)((uint)iVar89 >> 0x10);
  auVar172[6] = bVar72 & bVar36;
  bVar38 = auVar108[7];
  bVar73 = (byte)((uint)iVar89 >> 0x18);
  auVar172[7] = bVar73 & bVar38;
  bVar41 = auVar108[8];
  auVar172[8] = (byte)iVar86 & bVar41;
  bVar43 = auVar108[9];
  auVar172[9] = bVar45 & bVar43;
  bVar45 = auVar108[10];
  auVar172[10] = bVar66 & bVar45;
  bVar66 = auVar108[0xb];
  auVar172[0xb] = bVar67 & bVar66;
  bVar67 = auVar108[0xc];
  auVar172[0xc] = (byte)iVar89 & bVar67;
  bVar68 = auVar108[0xd];
  auVar172[0xd] = bVar71 & bVar68;
  bVar71 = auVar108[0xe];
  auVar172[0xe] = bVar72 & bVar71;
  bVar72 = auVar108[0xf];
  auVar172[0xf] = bVar73 & bVar72;
  auVar48 = auVar48 ^ (auVar48 ^ auVar59) & auVar172;
  auVar172 = *param_3;
  fVar93 = auVar172._0_4_ - fVar192;
  fVar99 = auVar172._4_4_ - fVar194;
  fVar101 = auVar172._8_4_ - fVar123;
  fVar103 = auVar172._12_4_ - fVar126;
  fVar85 = auVar48._0_4_;
  fVar88 = auVar48._4_4_;
  fVar90 = auVar48._8_4_;
  fVar91 = auVar48._12_4_;
  if (uVar1 == 3) {
    cVar92 = -((bVar23 & 1) == 0);
    uVar87 = CONCAT44(fVar103,fVar103) ^
             (CONCAT44(fVar103,fVar103) ^ CONCAT44(-fVar103,-fVar103)) &
             ~CONCAT17(cVar92,CONCAT16(cVar92,CONCAT15(cVar92,CONCAT14(cVar92,CONCAT13(cVar92,
                                                  CONCAT12(cVar92,CONCAT11(cVar92,cVar92)))))));
    iVar86 = -(uint)(0.0 < (float)uVar87);
    iVar89 = -(uint)(0.0 < (float)(uVar87 >> 0x20));
    bVar73 = (byte)((uint)iVar86 >> 8);
    bVar76 = (byte)((uint)iVar86 >> 0x10);
    bVar77 = (byte)((uint)iVar86 >> 0x18);
    bVar78 = (byte)((uint)iVar89 >> 8);
    bVar82 = (byte)((uint)iVar89 >> 0x10);
    bVar83 = (byte)((uint)iVar89 >> 0x18);
    auVar184._0_8_ =
         CONCAT17(bVar83 & bVar38,
                  CONCAT16(bVar82 & bVar36,
                           CONCAT15(bVar78 & bVar34,
                                    CONCAT14((byte)iVar89 & bVar31,
                                             CONCAT13(bVar77 & bVar29,
                                                      CONCAT12(bVar76 & bVar27,
                                                               CONCAT11(bVar73 & bVar25,
                                                                        (byte)iVar86 & bVar24)))))))
    ;
    auVar184[8] = (byte)iVar86 & bVar41;
    auVar184[9] = bVar73 & bVar43;
    auVar184[10] = bVar76 & bVar45;
    auVar184[0xb] = bVar77 & bVar66;
    auVar184[0xc] = (byte)iVar89 & bVar67;
    auVar184[0xd] = bVar78 & bVar68;
    auVar184[0xe] = bVar82 & bVar71;
    auVar184[0xf] = bVar83 & bVar72;
    auVar186._8_8_ = auVar184._8_8_;
    auVar186._0_8_ = auVar184._0_8_;
    auVar172 = auVar172 ^ (auVar172 ^ auVar59) & auVar186;
    fVar101 = auVar172._12_4_;
    fVar93 = fVar126;
    fVar99 = fVar91;
  }
  else if (uVar1 == 2) {
    cVar92 = -((bVar23 & 1) == 0);
    uVar87 = CONCAT44(fVar101,fVar101) ^
             (CONCAT44(fVar101,fVar101) ^ CONCAT44(-fVar101,-fVar101)) &
             ~CONCAT17(cVar92,CONCAT16(cVar92,CONCAT15(cVar92,CONCAT14(cVar92,CONCAT13(cVar92,
                                                  CONCAT12(cVar92,CONCAT11(cVar92,cVar92)))))));
    iVar86 = -(uint)(0.0 < (float)uVar87);
    iVar89 = -(uint)(0.0 < (float)(uVar87 >> 0x20));
    bVar73 = (byte)((uint)iVar86 >> 8);
    bVar76 = (byte)((uint)iVar86 >> 0x10);
    bVar77 = (byte)((uint)iVar86 >> 0x18);
    bVar78 = (byte)((uint)iVar89 >> 8);
    bVar82 = (byte)((uint)iVar89 >> 0x10);
    bVar83 = (byte)((uint)iVar89 >> 0x18);
    auVar96._0_8_ =
         CONCAT17(bVar83 & bVar38,
                  CONCAT16(bVar82 & bVar36,
                           CONCAT15(bVar78 & bVar34,
                                    CONCAT14((byte)iVar89 & bVar31,
                                             CONCAT13(bVar77 & bVar29,
                                                      CONCAT12(bVar76 & bVar27,
                                                               CONCAT11(bVar73 & bVar25,
                                                                        (byte)iVar86 & bVar24)))))))
    ;
    auVar96[8] = (byte)iVar86 & bVar41;
    auVar96[9] = bVar73 & bVar43;
    auVar96[10] = bVar76 & bVar45;
    auVar96[0xb] = bVar77 & bVar66;
    auVar96[0xc] = (byte)iVar89 & bVar67;
    auVar96[0xd] = bVar78 & bVar68;
    auVar96[0xe] = bVar82 & bVar71;
    auVar96[0xf] = bVar83 & bVar72;
    auVar173._8_8_ = auVar96._8_8_;
    auVar173._0_8_ = auVar96._0_8_;
    auVar172 = auVar172 ^ (auVar172 ^ auVar59) & auVar173;
    fVar101 = auVar172._8_4_;
    fVar93 = fVar123;
    fVar99 = fVar90;
  }
  else if (uVar1 == 1) {
    cVar92 = -((bVar23 & 1) == 0);
    uVar87 = CONCAT44(fVar99,fVar99) ^
             (CONCAT44(fVar99,fVar99) ^ CONCAT44(-fVar99,-fVar99)) &
             ~CONCAT17(cVar92,CONCAT16(cVar92,CONCAT15(cVar92,CONCAT14(cVar92,CONCAT13(cVar92,
                                                  CONCAT12(cVar92,CONCAT11(cVar92,cVar92)))))));
    iVar86 = -(uint)(0.0 < (float)uVar87);
    iVar89 = -(uint)(0.0 < (float)(uVar87 >> 0x20));
    bVar73 = (byte)((uint)iVar86 >> 8);
    bVar76 = (byte)((uint)iVar86 >> 0x10);
    bVar77 = (byte)((uint)iVar86 >> 0x18);
    bVar78 = (byte)((uint)iVar89 >> 8);
    bVar82 = (byte)((uint)iVar89 >> 0x10);
    bVar83 = (byte)((uint)iVar89 >> 0x18);
    auVar95._0_8_ =
         CONCAT17(bVar83 & bVar38,
                  CONCAT16(bVar82 & bVar36,
                           CONCAT15(bVar78 & bVar34,
                                    CONCAT14((byte)iVar89 & bVar31,
                                             CONCAT13(bVar77 & bVar29,
                                                      CONCAT12(bVar76 & bVar27,
                                                               CONCAT11(bVar73 & bVar25,
                                                                        (byte)iVar86 & bVar24)))))))
    ;
    auVar95[8] = (byte)iVar86 & bVar41;
    auVar95[9] = bVar73 & bVar43;
    auVar95[10] = bVar76 & bVar45;
    auVar95[0xb] = bVar77 & bVar66;
    auVar95[0xc] = (byte)iVar89 & bVar67;
    auVar95[0xd] = bVar78 & bVar68;
    auVar95[0xe] = bVar82 & bVar71;
    auVar95[0xf] = bVar83 & bVar72;
    auVar171._8_8_ = auVar95._8_8_;
    auVar171._0_8_ = auVar95._0_8_;
    auVar172 = auVar172 ^ (auVar172 ^ auVar59) & auVar171;
    fVar101 = auVar172._4_4_;
    fVar93 = fVar194;
    fVar99 = fVar88;
  }
  else {
    cVar92 = -((bVar23 & 1) == 0);
    uVar87 = CONCAT44(fVar93,fVar93) ^
             (CONCAT44(fVar93,fVar93) ^ CONCAT44(-fVar93,-fVar93)) &
             ~CONCAT17(cVar92,CONCAT16(cVar92,CONCAT15(cVar92,CONCAT14(cVar92,CONCAT13(cVar92,
                                                  CONCAT12(cVar92,CONCAT11(cVar92,cVar92)))))));
    iVar86 = -(uint)(0.0 < (float)uVar87);
    iVar89 = -(uint)(0.0 < (float)(uVar87 >> 0x20));
    bVar73 = (byte)((uint)iVar86 >> 8);
    bVar76 = (byte)((uint)iVar86 >> 0x10);
    bVar77 = (byte)((uint)iVar86 >> 0x18);
    bVar78 = (byte)((uint)iVar89 >> 8);
    bVar82 = (byte)((uint)iVar89 >> 0x10);
    bVar83 = (byte)((uint)iVar89 >> 0x18);
    auVar97._0_8_ =
         CONCAT17(bVar83 & bVar38,
                  CONCAT16(bVar82 & bVar36,
                           CONCAT15(bVar78 & bVar34,
                                    CONCAT14((byte)iVar89 & bVar31,
                                             CONCAT13(bVar77 & bVar29,
                                                      CONCAT12(bVar76 & bVar27,
                                                               CONCAT11(bVar73 & bVar25,
                                                                        (byte)iVar86 & bVar24)))))))
    ;
    auVar97[8] = (byte)iVar86 & bVar41;
    auVar97[9] = bVar73 & bVar43;
    auVar97[10] = bVar76 & bVar45;
    auVar97[0xb] = bVar77 & bVar66;
    auVar97[0xc] = (byte)iVar89 & bVar67;
    auVar97[0xd] = bVar78 & bVar68;
    auVar97[0xe] = bVar82 & bVar71;
    auVar97[0xf] = bVar83 & bVar72;
    auVar174._8_8_ = auVar97._8_8_;
    auVar174._0_8_ = auVar97._0_8_;
    auVar172 = auVar172 ^ (auVar172 ^ auVar59) & auVar174;
    fVar101 = auVar172._0_4_;
    fVar93 = fVar192;
    fVar99 = fVar85;
  }
  uVar87 = auVar59._0_8_;
  fVar103 = auVar172._0_4_;
  fVar196 = auVar172._4_4_;
  fVar177 = auVar172._8_4_;
  auVar184 = auVar59;
  if (fVar101 - fVar99 == 0.0) {
    if (bVar23 != 0xff) {
      auVar172 = auVar48 ^ (auVar48 ^ auVar59) & auVar108;
LAB_03104e7c:
      if (2 < uVar12) {
        uVar12 = 3;
      }
      local_80[1] = auVar59._8_8_;
      local_80[0] = uVar87;
      if (2 < uVar13) {
        uVar13 = 3;
      }
      *(float *)((long)local_80 + (ulong)uVar12 * 4) =
           *(float *)((long)local_80 + (ulong)uVar12 * 4) + fVar114;
      *(float *)((long)local_80 + (ulong)uVar13 * 4) =
           *(float *)((long)local_80 + (ulong)uVar13 * 4) + fVar120;
      auVar48._8_8_ = local_80[1];
      auVar48._0_8_ = local_80[0];
      auVar108._0_4_ = -(uint)(auVar172._0_4_ < (float)local_80[0]);
      auVar108._4_4_ = -(uint)(auVar172._4_4_ < (float)(local_80[0] >> 0x20));
      auVar108._8_4_ = -(uint)(auVar172._8_4_ < (float)local_80[1]);
      auVar108._12_4_ = -(uint)(auVar172._12_4_ < (float)(local_80[1] >> 0x20));
      auVar184 = NEON_fmax(auVar59,auVar172 ^ (auVar172 ^ auVar48) & ~auVar108,4);
    }
  }
  else {
    fVar111 = (fVar93 - fVar99) / (fVar101 - fVar99);
    fVar101 = (fVar93 - fVar99) / (fVar101 - fVar99);
    uVar105 = NEON_fmov(0x3f800000,4);
    uVar105 = NEON_fminnm(CONCAT44(fVar101,fVar111),uVar105,4);
    uVar105 = NEON_fmax(uVar105,0,4);
    fVar99 = (float)uVar105;
    fVar93 = (float)((ulong)uVar105 >> 0x20);
    if (fVar99 == fVar111) {
      local_80[1] = auVar59._8_8_;
      local_80[0] = uVar87;
      if (2 < uVar12) {
        uVar12 = 3;
      }
      auVar57._0_4_ = fVar85 + (fVar103 - fVar85) * fVar99;
      auVar57._4_4_ = fVar88 + (fVar196 - fVar88) * fVar93;
      auVar57._8_4_ = fVar90 + (fVar177 - fVar90) * fVar99;
      auVar57._12_4_ = fVar91 + (auVar172._12_4_ - fVar91) * fVar93;
      auVar57 = auVar57 ^ (auVar57 ^ auVar59) & auVar108;
      if (2 < uVar13) {
        uVar13 = 3;
      }
      *(float *)((long)local_80 + (ulong)uVar12 * 4) =
           *(float *)((long)local_80 + (ulong)uVar12 * 4) + fVar114;
      *(float *)((long)local_80 + (ulong)uVar13 * 4) =
           *(float *)((long)local_80 + (ulong)uVar13 * 4) + fVar120;
      auVar9._8_8_ = local_80[1];
      auVar9._0_8_ = local_80[0];
      auVar98._0_4_ = -(uint)(auVar57._0_4_ < (float)local_80[0]);
      auVar98._4_4_ = -(uint)(auVar57._4_4_ < (float)(local_80[0] >> 0x20));
      auVar98._8_4_ = -(uint)(auVar57._8_4_ < (float)local_80[1]);
      auVar98._12_4_ = -(uint)(auVar57._12_4_ < (float)(local_80[1] >> 0x20));
      auVar48 = NEON_fmax(auVar59,auVar9 ^ (auVar9 ^ auVar57) & auVar98,4);
      iVar86 = -(uint)(auVar48._0_4_ == auVar57._0_4_);
      iVar89 = -(uint)(auVar48._4_4_ == auVar57._4_4_);
      iVar74 = -(uint)(auVar48._8_4_ == auVar57._8_4_);
      param_5[1] = auVar48._8_8_;
      *param_5 = auVar48._0_8_;
      if (CONCAT13((byte)((uint)iVar89 >> 0x18) & (byte)((uint)iVar86 >> 0x18) &
                   (byte)((uint)iVar74 >> 0x18),
                   CONCAT12((byte)((uint)iVar89 >> 0x10) & (byte)((uint)iVar86 >> 0x10) &
                            (byte)((uint)iVar74 >> 0x10),
                            CONCAT11((byte)((uint)iVar89 >> 8) & (byte)((uint)iVar86 >> 8) &
                                     (byte)((uint)iVar74 >> 8),
                                     (byte)iVar89 & (byte)iVar86 & (byte)iVar74))) != 0) {
        return;
      }
      goto LAB_031049b0;
    }
    if (bVar23 != 0xff) {
      uVar106 = CONCAT44(-(uint)(fVar93 < fVar101),-(uint)(fVar99 < fVar111)) & 0x100000001;
      iVar86 = (int)uVar106;
      iVar89 = (int)(uVar106 >> 0x20);
      auVar110._0_4_ = (iVar86 << 0x1f) >> 0x1f;
      auVar110._4_4_ = (iVar89 << 0x1f) >> 0x1f;
      auVar110._8_4_ = (iVar86 << 0x1f) >> 0x1f;
      auVar110._12_4_ = (iVar89 << 0x1f) >> 0x1f;
      auVar172 = auVar172 ^ (auVar172 ^ auVar48) & auVar110;
      auVar172 = auVar172 ^ (auVar172 ^ auVar59) & auVar108;
      goto LAB_03104e7c;
    }
  }
  param_5[1] = auVar184._8_8_;
  *param_5 = auVar184._0_8_;
LAB_031049b0:
  auVar7._8_8_ = uStack_98;
  auVar7._0_8_ = local_a0;
  auVar8._8_8_ = uStack_88;
  auVar8._0_8_ = uStack_90;
  fVar51 = (float)uStack_90;
  fVar178 = fVar192 + fVar51;
  fVar69 = (float)(uStack_90 >> 0x20);
  fVar180 = fVar194 + fVar69;
  auVar179._0_8_ = CONCAT44(fVar180,fVar178);
  auVar179._8_4_ = fVar123 + (float)uStack_88;
  fVar114 = (float)((ulong)uStack_88 >> 0x20);
  auVar179._12_4_ = fVar126 + fVar114;
  auVar183._0_4_ = -fVar51;
  auVar183._4_4_ = -fVar69;
  auVar183._8_4_ = -(float)uStack_88;
  auVar183._12_4_ = -fVar114;
  fVar17 = (float)local_a0;
  fVar22 = (float)((ulong)local_a0 >> 0x20);
  auVar48 = NEON_ext(auVar8,auVar8,8,1);
  auVar108 = NEON_ext(auVar7,auVar7,8,1);
  fVar91 = -fVar17;
  fVar93 = -fVar22;
  uVar40 = (undefined1)((uint)fVar93 >> 8);
  uVar42 = (undefined1)((uint)fVar93 >> 0x10);
  uVar44 = (undefined1)((uint)fVar93 >> 0x18);
  fVar101 = (float)uStack_98;
  fVar114 = -fVar101;
  uVar46 = (undefined1)((uint)fVar114 >> 8);
  uVar26 = (undefined1)((uint)fVar114 >> 0x10);
  uVar28 = (undefined1)((uint)fVar114 >> 0x18);
  fVar111 = (float)((ulong)uStack_98 >> 0x20);
  fVar120 = -fVar111;
  uVar30 = (undefined1)((uint)fVar120 >> 8);
  uVar32 = (undefined1)((uint)fVar120 >> 0x10);
  uVar33 = (undefined1)((uint)fVar120 >> 0x18);
  fVar99 = auVar48._0_4_;
  fVar18 = auVar108._0_4_;
  fVar181 = fVar192 + fVar17;
  fVar182 = fVar194 + fVar22;
  auVar172 = NEON_ext(auVar59,auVar59,8,1);
  auVar58._0_4_ = fVar178 + fVar17;
  auVar58._4_4_ = fVar180 + fVar22;
  auVar58._8_4_ = auVar179._8_4_ + fVar101;
  auVar58._12_4_ = auVar179._12_4_ + fVar111;
  auVar48 = NEON_ext(auVar183,auVar183,8,1);
  auVar5[4] = SUB41(fVar93,0);
  auVar5._0_4_ = fVar91;
  auVar5[5] = uVar40;
  auVar5[6] = uVar42;
  auVar5[7] = uVar44;
  auVar5[8] = SUB41(fVar114,0);
  auVar5[9] = uVar46;
  auVar5[10] = uVar26;
  auVar5[0xb] = uVar28;
  auVar5[0xc] = SUB41(fVar120,0);
  auVar5[0xd] = uVar30;
  auVar5[0xe] = uVar32;
  auVar5[0xf] = uVar33;
  auVar6[4] = SUB41(fVar93,0);
  auVar6._0_4_ = fVar91;
  auVar6[5] = uVar40;
  auVar6[6] = uVar42;
  auVar6[7] = uVar44;
  auVar6[8] = SUB41(fVar114,0);
  auVar6[9] = uVar46;
  auVar6[10] = uVar26;
  auVar6[0xb] = uVar28;
  auVar6[0xc] = SUB41(fVar120,0);
  auVar6[0xd] = uVar30;
  auVar6[0xe] = uVar32;
  auVar6[0xf] = uVar33;
  auVar108 = NEON_ext(auVar5,auVar6,8,1);
  auVar184 = NEON_ext(auVar179,auVar179,8,1);
  auVar59._4_4_ = fVar182;
  auVar59._0_4_ = fVar181;
  auVar59._8_4_ = fVar123 + fVar101;
  auVar59._12_4_ = fVar126 + fVar111;
  auVar4._4_4_ = fVar182;
  auVar4._0_4_ = fVar181;
  auVar4._8_4_ = fVar123 + fVar101;
  auVar4._12_4_ = fVar126 + fVar111;
  auVar186 = NEON_ext(auVar59,auVar4,8,1);
  fVar101 = auVar48._0_4_;
  fVar19 = auVar108._0_4_;
  fVar111 = auVar172._0_4_;
  fVar20 = auVar184._0_4_;
  auVar59 = NEON_ext(auVar58,auVar58,8,1);
  fVar16 = auVar59._0_4_;
  fVar21 = auVar186._0_4_;
  fVar47 = fVar90 - fVar111;
  fVar49 = fVar90 - fVar20;
  fVar50 = fVar90 - fVar16;
  fVar90 = fVar90 - fVar21;
  fVar185 = fVar85 - fVar192;
  fVar187 = fVar85 - fVar178;
  fVar188 = fVar85 - auVar58._0_4_;
  fVar85 = fVar85 - fVar181;
  fVar189 = fVar88 - fVar194;
  fVar190 = fVar88 - fVar180;
  fVar191 = fVar88 - auVar58._4_4_;
  fVar88 = fVar88 - fVar182;
  fVar127 = fVar189 - fVar69 * 0.0;
  fVar129 = fVar190 - fVar22 * 0.0;
  fVar130 = fVar191 - auVar183._4_4_ * 0.0;
  fVar131 = fVar88 - fVar93 * 0.0;
  fVar112 = fVar185 - fVar51 * 0.0;
  fVar118 = fVar187 - fVar17 * 0.0;
  fVar121 = fVar188 - auVar183._0_4_ * 0.0;
  fVar124 = fVar85 - fVar91 * 0.0;
  fVar132 = fVar47 - fVar99 * 0.0;
  fVar137 = fVar49 - fVar18 * 0.0;
  fVar142 = fVar50 - fVar101 * 0.0;
  fVar148 = fVar90 - fVar19 * 0.0;
  fVar153 = fVar132 * fVar132 + fVar112 * fVar112 + fVar127 * fVar127;
  fVar155 = fVar137 * fVar137 + fVar118 * fVar118 + fVar129 * fVar129;
  fVar157 = fVar142 * fVar142 + fVar121 * fVar121 + fVar130 * fVar130;
  fVar159 = fVar148 * fVar148 + fVar124 * fVar124 + fVar131 * fVar131;
  fVar192 = fVar103 - fVar192;
  fVar178 = fVar103 - fVar178;
  fVar193 = fVar103 - auVar58._0_4_;
  fVar103 = fVar103 - fVar181;
  fVar194 = fVar196 - fVar194;
  fVar180 = fVar196 - fVar180;
  fVar195 = fVar196 - auVar58._4_4_;
  fVar196 = fVar196 - fVar182;
  fVar170 = fVar177 - fVar111;
  fVar175 = fVar177 - fVar20;
  fVar176 = fVar177 - fVar16;
  fVar177 = fVar177 - fVar21;
  fVar201 = fVar192 - fVar51 * 0.0;
  fVar203 = fVar178 - fVar17 * 0.0;
  fVar205 = fVar193 - auVar183._0_4_ * 0.0;
  fVar207 = fVar103 - fVar91 * 0.0;
  fVar52 = fVar194 - fVar69 * 0.0;
  fVar70 = fVar180 - fVar22 * 0.0;
  fVar75 = fVar195 - auVar183._4_4_ * 0.0;
  fVar79 = fVar196 - fVar93 * 0.0;
  fVar114 = fVar170 - fVar99 * 0.0;
  fVar120 = fVar175 - fVar18 * 0.0;
  fVar123 = fVar176 - fVar101 * 0.0;
  fVar126 = fVar177 - fVar19 * 0.0;
  fVar165 = fVar114 * fVar114 + fVar201 * fVar201 + fVar52 * fVar52;
  fVar166 = fVar120 * fVar120 + fVar203 * fVar203 + fVar70 * fVar70;
  fVar167 = fVar123 * fVar123 + fVar205 * fVar205 + fVar75 * fVar75;
  fVar168 = fVar126 * fVar126 + fVar207 * fVar207 + fVar79 * fVar79;
  auVar59 = NEON_fmov(0x3f800000,4);
  iVar86 = -(uint)(fVar153 <= 0.0);
  iVar89 = -(uint)(fVar155 <= 0.0);
  iVar74 = -(uint)(fVar157 <= 0.0);
  iVar80 = -(uint)(fVar159 <= 0.0);
  iVar133 = -(uint)(fVar165 <= 0.0);
  iVar138 = -(uint)(fVar166 <= 0.0);
  iVar143 = -(uint)(fVar167 <= 0.0);
  iVar149 = -(uint)(fVar168 <= 0.0);
  fVar154 = fVar194 - fVar69;
  fVar156 = fVar180 - fVar22;
  fVar158 = fVar195 - auVar183._4_4_;
  fVar160 = fVar196 - fVar93;
  fVar197 = auVar59._0_4_;
  fVar153 = fVar197 / SQRT(fVar153);
  fVar198 = auVar59._4_4_;
  fVar155 = fVar198 / SQRT(fVar155);
  fVar199 = auVar59._8_4_;
  fVar157 = fVar199 / SQRT(fVar157);
  fVar200 = auVar59._12_4_;
  fVar159 = fVar200 / SQRT(fVar159);
  fVar153 = (float)CONCAT13((byte)((uint)fVar153 >> 0x18) & ~(byte)((uint)iVar86 >> 0x18),
                            CONCAT12((byte)((uint)fVar153 >> 0x10) & ~(byte)((uint)iVar86 >> 0x10),
                                     CONCAT11((byte)((uint)fVar153 >> 8) &
                                              ~(byte)((uint)iVar86 >> 8),
                                              SUB41(fVar153,0) & ~(byte)iVar86)));
  auVar53._0_8_ =
       CONCAT17((byte)((uint)fVar155 >> 0x18) & ~(byte)((uint)iVar89 >> 0x18),
                CONCAT16((byte)((uint)fVar155 >> 0x10) & ~(byte)((uint)iVar89 >> 0x10),
                         CONCAT15((byte)((uint)fVar155 >> 8) & ~(byte)((uint)iVar89 >> 8),
                                  CONCAT14(SUB41(fVar155,0) & ~(byte)iVar89,fVar153))));
  auVar53[8] = SUB41(fVar157,0) & ~(byte)iVar74;
  auVar53[9] = (byte)((uint)fVar157 >> 8) & ~(byte)((uint)iVar74 >> 8);
  auVar53[10] = (byte)((uint)fVar157 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10);
  auVar53[0xb] = (byte)((uint)fVar157 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18);
  auVar60[0xc] = SUB41(fVar159,0) & ~(byte)iVar80;
  auVar60._0_12_ = auVar53;
  auVar60[0xd] = (byte)((uint)fVar159 >> 8) & ~(byte)((uint)iVar80 >> 8);
  auVar60[0xe] = (byte)((uint)fVar159 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10);
  auVar60[0xf] = (byte)((uint)fVar159 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18);
  fVar161 = fVar170 - fVar99;
  fVar162 = fVar175 - fVar18;
  fVar163 = fVar176 - fVar101;
  fVar164 = fVar177 - fVar19;
  fVar155 = fVar197 / SQRT(fVar165);
  fVar157 = fVar198 / SQRT(fVar166);
  fVar159 = fVar199 / SQRT(fVar167);
  fVar165 = fVar200 / SQRT(fVar168);
  fVar169 = (float)CONCAT13((byte)((uint)fVar155 >> 0x18) & ~(byte)((uint)iVar133 >> 0x18),
                            CONCAT12((byte)((uint)fVar155 >> 0x10) & ~(byte)((uint)iVar133 >> 0x10),
                                     CONCAT11((byte)((uint)fVar155 >> 8) &
                                              ~(byte)((uint)iVar133 >> 8),
                                              SUB41(fVar155,0) & ~(byte)iVar133)));
  auVar115._0_8_ =
       CONCAT17((byte)((uint)fVar157 >> 0x18) & ~(byte)((uint)iVar138 >> 0x18),
                CONCAT16((byte)((uint)fVar157 >> 0x10) & ~(byte)((uint)iVar138 >> 0x10),
                         CONCAT15((byte)((uint)fVar157 >> 8) & ~(byte)((uint)iVar138 >> 8),
                                  CONCAT14(SUB41(fVar157,0) & ~(byte)iVar138,fVar169))));
  auVar115[8] = SUB41(fVar159,0) & ~(byte)iVar143;
  auVar115[9] = (byte)((uint)fVar159 >> 8) & ~(byte)((uint)iVar143 >> 8);
  auVar115[10] = (byte)((uint)fVar159 >> 0x10) & ~(byte)((uint)iVar143 >> 0x10);
  auVar115[0xb] = (byte)((uint)fVar159 >> 0x18) & ~(byte)((uint)iVar143 >> 0x18);
  auVar116[0xc] = SUB41(fVar165,0) & ~(byte)iVar149;
  auVar116._0_12_ = auVar115;
  auVar116[0xd] = (byte)((uint)fVar165 >> 8) & ~(byte)((uint)iVar149 >> 8);
  auVar116[0xe] = (byte)((uint)fVar165 >> 0x10) & ~(byte)((uint)iVar149 >> 0x10);
  auVar116[0xf] = (byte)((uint)fVar165 >> 0x18) & ~(byte)((uint)iVar149 >> 0x18);
  fVar202 = fVar189 - fVar69;
  fVar204 = fVar190 - fVar22;
  fVar206 = fVar191 - auVar183._4_4_;
  fVar208 = fVar88 - fVar93;
  fVar113 = fVar47 - fVar99;
  fVar119 = fVar49 - fVar18;
  fVar122 = fVar50 - fVar101;
  fVar125 = fVar90 - fVar19;
  fVar155 = fVar185 - fVar51;
  fVar159 = fVar187 - fVar17;
  fVar166 = fVar188 - auVar183._0_4_;
  fVar168 = fVar85 - fVar91;
  fVar94 = SQRT(fVar99 * fVar99 + fVar51 * fVar51 + fVar69 * fVar69);
  fVar100 = SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar22 * fVar22);
  fVar102 = SQRT(fVar101 * fVar101 +
                 auVar183._0_4_ * auVar183._0_4_ + auVar183._4_4_ * auVar183._4_4_);
  fVar104 = SQRT(fVar19 * fVar19 + fVar91 * fVar91 + fVar93 * fVar93);
  fVar134 = fVar192 - fVar51;
  fVar139 = fVar178 - fVar17;
  fVar144 = fVar193 - auVar183._0_4_;
  fVar150 = fVar103 - fVar91;
  fVar157 = fVar113 * fVar113 + fVar155 * fVar155 + fVar202 * fVar202;
  fVar165 = fVar119 * fVar119 + fVar159 * fVar159 + fVar204 * fVar204;
  fVar167 = fVar122 * fVar122 + fVar166 * fVar166 + fVar206 * fVar206;
  fVar81 = fVar125 * fVar125 + fVar168 * fVar168 + fVar208 * fVar208;
  iVar133 = -(uint)(fVar157 <= 0.0);
  iVar138 = -(uint)(fVar165 <= 0.0);
  iVar143 = -(uint)(fVar167 <= 0.0);
  iVar149 = -(uint)(fVar81 <= 0.0);
  fVar135 = fVar161 * fVar161 + fVar134 * fVar134 + fVar154 * fVar154;
  fVar140 = fVar162 * fVar162 + fVar139 * fVar139 + fVar156 * fVar156;
  fVar145 = fVar163 * fVar163 + fVar144 * fVar144 + fVar158 * fVar158;
  fVar151 = fVar164 * fVar164 + fVar150 * fVar150 + fVar160 * fVar160;
  iVar86 = -(uint)(0.0 <= fVar169 * -(fVar99 * fVar114 + fVar51 * fVar201 + fVar69 * fVar52) -
                          (fVar99 * fVar132 + fVar51 * fVar112 + fVar69 * fVar127) * fVar153);
  bVar23 = (byte)((uint)iVar86 >> 8);
  bVar24 = (byte)((uint)iVar86 >> 0x10);
  bVar25 = (byte)((uint)iVar86 >> 0x18);
  iVar89 = -(uint)(0.0 <= (float)((ulong)auVar115._0_8_ >> 0x20) *
                          -(fVar18 * fVar120 + fVar17 * fVar203 + fVar22 * fVar70) -
                          (fVar18 * fVar137 + fVar17 * fVar118 + fVar22 * fVar129) *
                          (float)((ulong)auVar53._0_8_ >> 0x20));
  bVar27 = (byte)((uint)iVar89 >> 8);
  bVar29 = (byte)((uint)iVar89 >> 0x10);
  bVar31 = (byte)((uint)iVar89 >> 0x18);
  iVar74 = -(uint)(0.0 <= auVar115._8_4_ *
                          -(fVar101 * fVar123 + auVar183._0_4_ * fVar205 + auVar183._4_4_ * fVar75)
                          - (fVar101 * fVar142 + auVar183._0_4_ * fVar121 + auVar183._4_4_ * fVar130
                            ) * auVar53._8_4_);
  bVar34 = (byte)((uint)iVar74 >> 8);
  bVar36 = (byte)((uint)iVar74 >> 0x10);
  bVar38 = (byte)((uint)iVar74 >> 0x18);
  iVar80 = -(uint)(0.0 <= auVar116._12_4_ * -(fVar19 * fVar126 + fVar91 * fVar207 + fVar93 * fVar79)
                          - (fVar19 * fVar148 + fVar91 * fVar124 + fVar93 * fVar131) *
                            auVar60._12_4_);
  bVar41 = (byte)((uint)iVar80 >> 8);
  bVar43 = (byte)((uint)iVar80 >> 0x10);
  bVar45 = (byte)((uint)iVar80 >> 0x18);
  iVar136 = -(uint)(fVar135 <= 0.0);
  iVar141 = -(uint)(fVar140 <= 0.0);
  iVar146 = -(uint)(fVar145 <= 0.0);
  iVar152 = -(uint)(fVar151 <= 0.0);
  fVar114 = fVar197 / SQRT(fVar157);
  fVar120 = fVar198 / SQRT(fVar165);
  fVar123 = fVar199 / SQRT(fVar167);
  fVar126 = fVar200 / SQRT(fVar81);
  fVar114 = (float)CONCAT13((byte)((uint)fVar114 >> 0x18) & ~(byte)((uint)iVar133 >> 0x18),
                            CONCAT12((byte)((uint)fVar114 >> 0x10) & ~(byte)((uint)iVar133 >> 0x10),
                                     CONCAT11((byte)((uint)fVar114 >> 8) &
                                              ~(byte)((uint)iVar133 >> 8),
                                              SUB41(fVar114,0) & ~(byte)iVar133)));
  auVar54._0_8_ =
       CONCAT17((byte)((uint)fVar120 >> 0x18) & ~(byte)((uint)iVar138 >> 0x18),
                CONCAT16((byte)((uint)fVar120 >> 0x10) & ~(byte)((uint)iVar138 >> 0x10),
                         CONCAT15((byte)((uint)fVar120 >> 8) & ~(byte)((uint)iVar138 >> 8),
                                  CONCAT14(SUB41(fVar120,0) & ~(byte)iVar138,fVar114))));
  auVar54[8] = SUB41(fVar123,0) & ~(byte)iVar143;
  auVar54[9] = (byte)((uint)fVar123 >> 8) & ~(byte)((uint)iVar143 >> 8);
  auVar54[10] = (byte)((uint)fVar123 >> 0x10) & ~(byte)((uint)iVar143 >> 0x10);
  auVar54[0xb] = (byte)((uint)fVar123 >> 0x18) & ~(byte)((uint)iVar143 >> 0x18);
  auVar61[0xc] = SUB41(fVar126,0) & ~(byte)iVar149;
  auVar61._0_12_ = auVar54;
  auVar61[0xd] = (byte)((uint)fVar126 >> 8) & ~(byte)((uint)iVar149 >> 8);
  auVar61[0xe] = (byte)((uint)fVar126 >> 0x10) & ~(byte)((uint)iVar149 >> 0x10);
  auVar61[0xf] = (byte)((uint)fVar126 >> 0x18) & ~(byte)((uint)iVar149 >> 0x18);
  auVar128[0] = auVar59[0] & ~(byte)iVar86;
  auVar128[1] = auVar59[1] & ~bVar23;
  auVar128[2] = auVar59[2] & ~bVar24;
  auVar128[3] = auVar59[3] & ~bVar25;
  auVar128[4] = auVar59[4] & ~(byte)iVar89;
  auVar128[5] = auVar59[5] & ~bVar27;
  auVar128[6] = auVar59[6] & ~bVar29;
  auVar128[7] = auVar59[7] & ~bVar31;
  auVar128[8] = auVar59[8] & ~(byte)iVar74;
  auVar128[9] = auVar59[9] & ~bVar34;
  auVar128[10] = auVar59[10] & ~bVar36;
  auVar128[0xb] = auVar59[0xb] & ~bVar38;
  auVar128[0xc] = auVar59[0xc] & ~(byte)iVar80;
  auVar128[0xd] = auVar59[0xd] & ~bVar41;
  auVar128[0xe] = auVar59[0xe] & ~bVar43;
  auVar128[0xf] = auVar59[0xf] & ~bVar45;
  fVar120 = fVar197 / SQRT(fVar135);
  fVar126 = fVar198 / SQRT(fVar140);
  fVar123 = fVar199 / SQRT(fVar145);
  fVar52 = fVar200 / SQRT(fVar151);
  fVar120 = (float)CONCAT13((byte)((uint)fVar120 >> 0x18) & ~(byte)((uint)iVar136 >> 0x18),
                            CONCAT12((byte)((uint)fVar120 >> 0x10) & ~(byte)((uint)iVar136 >> 0x10),
                                     CONCAT11((byte)((uint)fVar120 >> 8) &
                                              ~(byte)((uint)iVar136 >> 8),
                                              SUB41(fVar120,0) & ~(byte)iVar136)));
  fVar123 = (float)CONCAT13((byte)((uint)fVar123 >> 0x18) & ~(byte)((uint)iVar146 >> 0x18),
                            CONCAT12((byte)((uint)fVar123 >> 0x10) & ~(byte)((uint)iVar146 >> 0x10),
                                     CONCAT11((byte)((uint)fVar123 >> 8) &
                                              ~(byte)((uint)iVar146 >> 8),
                                              SUB41(fVar123,0) & ~(byte)iVar146)));
  iVar133 = -(uint)(fVar120 * -(fVar99 * fVar161 + fVar51 * fVar134 + fVar69 * fVar154) -
                    (fVar99 * fVar113 + fVar51 * fVar155 + fVar69 * fVar202) * fVar114 <= 0.0);
  iVar138 = -(uint)((float)(CONCAT17((byte)((uint)fVar126 >> 0x18) & ~(byte)((uint)iVar141 >> 0x18),
                                     CONCAT16((byte)((uint)fVar126 >> 0x10) &
                                              ~(byte)((uint)iVar141 >> 0x10),
                                              CONCAT15((byte)((uint)fVar126 >> 8) &
                                                       ~(byte)((uint)iVar141 >> 8),
                                                       CONCAT14(SUB41(fVar126,0) & ~(byte)iVar141,
                                                                fVar120)))) >> 0x20) *
                    -(fVar18 * fVar162 + fVar17 * fVar139 + fVar22 * fVar156) -
                    (fVar18 * fVar119 + fVar17 * fVar159 + fVar22 * fVar204) *
                    (float)((ulong)auVar54._0_8_ >> 0x20) <= 0.0);
  iVar143 = -(uint)(fVar123 * -(fVar101 * fVar163 +
                               auVar183._0_4_ * fVar144 + auVar183._4_4_ * fVar158) -
                    (fVar101 * fVar122 + auVar183._0_4_ * fVar166 + auVar183._4_4_ * fVar206) *
                    auVar54._8_4_ <= 0.0);
  iVar149 = -(uint)((float)(CONCAT17((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar152 >> 0x18),
                                     CONCAT16((byte)((uint)fVar52 >> 0x10) &
                                              ~(byte)((uint)iVar152 >> 0x10),
                                              CONCAT15((byte)((uint)fVar52 >> 8) &
                                                       ~(byte)((uint)iVar152 >> 8),
                                                       CONCAT14(SUB41(fVar52,0) & ~(byte)iVar152,
                                                                fVar123)))) >> 0x20) *
                    -(fVar19 * fVar164 + fVar91 * fVar150 + fVar93 * fVar160) -
                    (fVar19 * fVar125 + fVar91 * fVar168 + fVar93 * fVar208) * auVar61._12_4_ <= 0.0
                   );
  bVar66 = (byte)((uint)iVar133 >> 8);
  bVar67 = (byte)((uint)iVar133 >> 0x10);
  bVar68 = (byte)((uint)iVar133 >> 0x18);
  bVar71 = (byte)((uint)iVar138 >> 8);
  bVar72 = (byte)((uint)iVar138 >> 0x10);
  bVar73 = (byte)((uint)iVar138 >> 0x18);
  bVar76 = (byte)((uint)iVar143 >> 8);
  bVar77 = (byte)((uint)iVar143 >> 0x10);
  bVar78 = (byte)((uint)iVar143 >> 0x18);
  bVar82 = (byte)((uint)iVar149 >> 8);
  bVar83 = (byte)((uint)iVar149 >> 0x10);
  bVar84 = (byte)((uint)iVar149 >> 0x18);
  auVar117[0] = (byte)iVar133 & auVar59[0];
  auVar117[1] = bVar66 & auVar59[1];
  auVar117[2] = bVar67 & auVar59[2];
  auVar117[3] = bVar68 & auVar59[3];
  auVar117[4] = (byte)iVar138 & auVar59[4];
  auVar117[5] = bVar71 & auVar59[5];
  auVar117[6] = bVar72 & auVar59[6];
  auVar117[7] = bVar73 & auVar59[7];
  auVar117[8] = (byte)iVar143 & auVar59[8];
  auVar117[9] = bVar76 & auVar59[9];
  auVar117[10] = bVar77 & auVar59[10];
  auVar117[0xb] = bVar78 & auVar59[0xb];
  auVar117[0xc] = (byte)iVar149 & auVar59[0xc];
  auVar117[0xd] = bVar82 & auVar59[0xd];
  auVar117[0xe] = bVar83 & auVar59[0xe];
  auVar117[0xf] = bVar84 & auVar59[0xf];
  uVar105 = CONCAT17((byte)((uint)fVar100 >> 0x18) & ~(bVar31 | bVar73),
                     CONCAT16((byte)((uint)fVar100 >> 0x10) & ~(bVar29 | bVar72),
                              CONCAT15((byte)((uint)fVar100 >> 8) & ~(bVar27 | bVar71),
                                       CONCAT14(SUB41(fVar100,0) & ~((byte)iVar89 | (byte)iVar138),
                                                CONCAT13((byte)((uint)fVar94 >> 0x18) &
                                                         ~(bVar25 | bVar68),
                                                         CONCAT12((byte)((uint)fVar94 >> 0x10) &
                                                                  ~(bVar24 | bVar67),
                                                                  CONCAT11((byte)((uint)fVar94 >> 8)
                                                                           & ~(bVar23 | bVar66),
                                                                           SUB41(fVar94,0) &
                                                                           ~((byte)iVar86 |
                                                                            (byte)iVar133))))))));
  uVar147 = CONCAT17((byte)((uint)fVar104 >> 0x18) & ~(bVar45 | bVar84),
                     CONCAT16((byte)((uint)fVar104 >> 0x10) & ~(bVar43 | bVar83),
                              CONCAT15((byte)((uint)fVar104 >> 8) & ~(bVar41 | bVar82),
                                       CONCAT14(SUB41(fVar104,0) & ~((byte)iVar80 | (byte)iVar149),
                                                CONCAT13((byte)((uint)fVar102 >> 0x18) &
                                                         ~(bVar38 | bVar78),
                                                         CONCAT12((byte)((uint)fVar102 >> 0x10) &
                                                                  ~(bVar36 | bVar77),
                                                                  CONCAT11((byte)((uint)fVar102 >> 8
                                                                                 ) & ~(bVar34 | 
                                                  bVar76),SUB41(fVar102,0) &
                                                          ~((byte)iVar74 | (byte)iVar143))))))));
  while( true ) {
    fVar114 = (float)*param_4;
    iVar86 = -(uint)((float)uVar105 <= fVar114);
    fVar81 = (float)((ulong)uVar105 >> 0x20);
    fVar120 = (float)((ulong)*param_4 >> 0x20);
    iVar89 = -(uint)(fVar81 <= fVar120);
    iVar74 = -(uint)((float)uVar147 <= fVar114);
    fVar94 = (float)((ulong)uVar147 >> 0x20);
    iVar80 = -(uint)(fVar94 <= fVar120);
    fVar114 = (auVar128._0_4_ + auVar117._0_4_) * 0.5;
    fVar120 = (auVar128._4_4_ + auVar117._4_4_) * 0.5;
    uVar26 = SUB41(fVar120,0);
    uVar28 = (undefined1)((uint)fVar120 >> 8);
    uVar30 = (undefined1)((uint)fVar120 >> 0x10);
    uVar32 = (undefined1)((uint)fVar120 >> 0x18);
    fVar123 = (auVar128._8_4_ + auVar117._8_4_) * 0.5;
    uVar33 = SUB41(fVar123,0);
    uVar35 = (undefined1)((uint)fVar123 >> 8);
    uVar37 = (undefined1)((uint)fVar123 >> 0x10);
    uVar39 = (undefined1)((uint)fVar123 >> 0x18);
    fVar126 = (auVar128._12_4_ + auVar117._12_4_) * 0.5;
    uVar40 = SUB41(fVar126,0);
    uVar42 = (undefined1)((uint)fVar126 >> 8);
    uVar44 = (undefined1)((uint)fVar126 >> 0x10);
    uVar46 = (undefined1)((uint)fVar126 >> 0x18);
    fVar166 = fVar51 * fVar114;
    fVar167 = fVar17 * fVar120;
    fVar79 = auVar183._0_4_ * fVar123;
    fVar168 = fVar91 * fVar126;
    fVar100 = fVar69 * fVar114;
    fVar102 = fVar22 * fVar120;
    fVar104 = auVar183._4_4_ * fVar123;
    fVar112 = fVar93 * fVar126;
    fVar169 = fVar99 * fVar114;
    fVar120 = fVar18 * fVar120;
    fVar123 = fVar101 * fVar123;
    fVar126 = fVar19 * fVar126;
    fVar52 = fVar185 - fVar166;
    fVar153 = fVar187 - fVar167;
    fVar155 = fVar188 - fVar79;
    fVar157 = fVar85 - fVar168;
    fVar70 = fVar189 - fVar100;
    fVar159 = fVar190 - fVar102;
    fVar165 = fVar191 - fVar104;
    fVar75 = fVar88 - fVar112;
    fVar113 = fVar47 - fVar169;
    fVar118 = fVar49 - fVar120;
    fVar119 = fVar50 - fVar123;
    fVar121 = fVar90 - fVar126;
    if (CONCAT13((byte)((uint)iVar89 >> 0x18) & (byte)((uint)iVar86 >> 0x18) &
                 (byte)((uint)iVar74 >> 0x18) & (byte)((uint)iVar80 >> 0x18),
                 CONCAT12((byte)((uint)iVar89 >> 0x10) & (byte)((uint)iVar86 >> 0x10) &
                          (byte)((uint)iVar74 >> 0x10) & (byte)((uint)iVar80 >> 0x10),
                          CONCAT11((byte)((uint)iVar89 >> 8) & (byte)((uint)iVar86 >> 8) &
                                   (byte)((uint)iVar74 >> 8) & (byte)((uint)iVar80 >> 8),
                                   (byte)iVar89 & (byte)iVar86 & (byte)iVar74 & (byte)iVar80))) != 0
       ) break;
    fVar166 = fVar192 - fVar166;
    fVar167 = fVar178 - fVar167;
    fVar79 = fVar193 - fVar79;
    fVar168 = fVar103 - fVar168;
    fVar100 = fVar194 - fVar100;
    fVar102 = fVar180 - fVar102;
    fVar104 = fVar195 - fVar104;
    fVar112 = fVar196 - fVar112;
    fVar169 = fVar170 - fVar169;
    fVar120 = fVar175 - fVar120;
    fVar123 = fVar176 - fVar123;
    fVar126 = fVar177 - fVar126;
    fVar122 = fVar113 * fVar113 + fVar52 * fVar52 + fVar70 * fVar70;
    fVar124 = fVar118 * fVar118 + fVar153 * fVar153 + fVar159 * fVar159;
    fVar125 = fVar119 * fVar119 + fVar155 * fVar155 + fVar165 * fVar165;
    fVar127 = fVar121 * fVar121 + fVar157 * fVar157 + fVar75 * fVar75;
    iVar86 = -(uint)(fVar122 <= 0.0);
    iVar89 = -(uint)(fVar124 <= 0.0);
    iVar74 = -(uint)(fVar125 <= 0.0);
    iVar80 = -(uint)(fVar127 <= 0.0);
    fVar129 = fVar169 * fVar169 + fVar166 * fVar166 + fVar100 * fVar100;
    fVar130 = fVar120 * fVar120 + fVar167 * fVar167 + fVar102 * fVar102;
    fVar131 = fVar123 * fVar123 + fVar79 * fVar79 + fVar104 * fVar104;
    fVar132 = fVar126 * fVar126 + fVar168 * fVar168 + fVar112 * fVar112;
    uVar105 = CONCAT44(fVar81 * 0.5,(float)uVar105 * 0.5);
    uVar147 = CONCAT44(fVar94 * 0.5,(float)uVar147 * 0.5);
    iVar133 = -(uint)(fVar129 <= 0.0);
    iVar138 = -(uint)(fVar130 <= 0.0);
    iVar143 = -(uint)(fVar131 <= 0.0);
    iVar149 = -(uint)(fVar132 <= 0.0);
    fVar81 = fVar197 / SQRT(fVar122);
    fVar94 = fVar198 / SQRT(fVar124);
    fVar122 = fVar199 / SQRT(fVar125);
    fVar124 = fVar200 / SQRT(fVar127);
    fVar81 = (float)CONCAT13((byte)((uint)fVar81 >> 0x18) & ~(byte)((uint)iVar86 >> 0x18),
                             CONCAT12((byte)((uint)fVar81 >> 0x10) & ~(byte)((uint)iVar86 >> 0x10),
                                      CONCAT11((byte)((uint)fVar81 >> 8) &
                                               ~(byte)((uint)iVar86 >> 8),
                                               SUB41(fVar81,0) & ~(byte)iVar86)));
    auVar55._0_8_ =
         CONCAT17((byte)((uint)fVar94 >> 0x18) & ~(byte)((uint)iVar89 >> 0x18),
                  CONCAT16((byte)((uint)fVar94 >> 0x10) & ~(byte)((uint)iVar89 >> 0x10),
                           CONCAT15((byte)((uint)fVar94 >> 8) & ~(byte)((uint)iVar89 >> 8),
                                    CONCAT14(SUB41(fVar94,0) & ~(byte)iVar89,fVar81))));
    auVar55[8] = SUB41(fVar122,0) & ~(byte)iVar74;
    auVar55[9] = (byte)((uint)fVar122 >> 8) & ~(byte)((uint)iVar74 >> 8);
    auVar55[10] = (byte)((uint)fVar122 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10);
    auVar55[0xb] = (byte)((uint)fVar122 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18);
    auVar62[0xc] = SUB41(fVar124,0) & ~(byte)iVar80;
    auVar62._0_12_ = auVar55;
    auVar62[0xd] = (byte)((uint)fVar124 >> 8) & ~(byte)((uint)iVar80 >> 8);
    auVar62[0xe] = (byte)((uint)fVar124 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10);
    auVar62[0xf] = (byte)((uint)fVar124 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18);
    fVar94 = fVar197 / SQRT(fVar129);
    fVar122 = fVar198 / SQRT(fVar130);
    fVar124 = fVar199 / SQRT(fVar131);
    fVar125 = fVar200 / SQRT(fVar132);
    fVar94 = (float)CONCAT13((byte)((uint)fVar94 >> 0x18) & ~(byte)((uint)iVar133 >> 0x18),
                             CONCAT12((byte)((uint)fVar94 >> 0x10) & ~(byte)((uint)iVar133 >> 0x10),
                                      CONCAT11((byte)((uint)fVar94 >> 8) &
                                               ~(byte)((uint)iVar133 >> 8),
                                               SUB41(fVar94,0) & ~(byte)iVar133)));
    auVar107._0_8_ =
         CONCAT17((byte)((uint)fVar122 >> 0x18) & ~(byte)((uint)iVar138 >> 0x18),
                  CONCAT16((byte)((uint)fVar122 >> 0x10) & ~(byte)((uint)iVar138 >> 0x10),
                           CONCAT15((byte)((uint)fVar122 >> 8) & ~(byte)((uint)iVar138 >> 8),
                                    CONCAT14(SUB41(fVar122,0) & ~(byte)iVar138,fVar94))));
    auVar107[8] = SUB41(fVar124,0) & ~(byte)iVar143;
    auVar107[9] = (byte)((uint)fVar124 >> 8) & ~(byte)((uint)iVar143 >> 8);
    auVar107[10] = (byte)((uint)fVar124 >> 0x10) & ~(byte)((uint)iVar143 >> 0x10);
    auVar107[0xb] = (byte)((uint)fVar124 >> 0x18) & ~(byte)((uint)iVar143 >> 0x18);
    auVar109[0xc] = SUB41(fVar125,0) & ~(byte)iVar149;
    auVar109._0_12_ = auVar107;
    auVar109[0xd] = (byte)((uint)fVar125 >> 8) & ~(byte)((uint)iVar149 >> 8);
    auVar109[0xe] = (byte)((uint)fVar125 >> 0x10) & ~(byte)((uint)iVar149 >> 0x10);
    auVar109[0xf] = (byte)((uint)fVar125 >> 0x18) & ~(byte)((uint)iVar149 >> 0x18);
    auVar63._0_4_ =
         -(uint)(fVar94 * -(fVar99 * fVar169 + fVar51 * fVar166 + fVar69 * fVar100) -
                 (fVar99 * fVar113 + fVar51 * fVar52 + fVar69 * fVar70) * fVar81 < 0.0);
    auVar63._4_4_ =
         -(uint)((float)((ulong)auVar107._0_8_ >> 0x20) *
                 -(fVar18 * fVar120 + fVar17 * fVar167 + fVar22 * fVar102) -
                 (fVar18 * fVar118 + fVar17 * fVar153 + fVar22 * fVar159) *
                 (float)((ulong)auVar55._0_8_ >> 0x20) < 0.0);
    auVar63._8_4_ =
         -(uint)(auVar107._8_4_ *
                 -(fVar101 * fVar123 + auVar183._0_4_ * fVar79 + auVar183._4_4_ * fVar104) -
                 (fVar101 * fVar119 + auVar183._0_4_ * fVar155 + auVar183._4_4_ * fVar165) *
                 auVar55._8_4_ < 0.0);
    auVar63._12_4_ =
         -(uint)(auVar109._12_4_ * -(fVar19 * fVar126 + fVar91 * fVar168 + fVar93 * fVar112) -
                 (fVar19 * fVar121 + fVar91 * fVar157 + fVar93 * fVar75) * auVar62._12_4_ < 0.0);
    auVar2[4] = uVar26;
    auVar2._0_4_ = fVar114;
    auVar2[5] = uVar28;
    auVar2[6] = uVar30;
    auVar2[7] = uVar32;
    auVar2[8] = uVar33;
    auVar2[9] = uVar35;
    auVar2[10] = uVar37;
    auVar2[0xb] = uVar39;
    auVar2[0xc] = uVar40;
    auVar2[0xd] = uVar42;
    auVar2[0xe] = uVar44;
    auVar2[0xf] = uVar46;
    auVar117 = auVar117 ^ (auVar117 ^ auVar2) & auVar63;
    auVar3[4] = uVar26;
    auVar3._0_4_ = fVar114;
    auVar3[5] = uVar28;
    auVar3[6] = uVar30;
    auVar3[7] = uVar32;
    auVar3[8] = uVar33;
    auVar3[9] = uVar35;
    auVar3[10] = uVar37;
    auVar3[0xb] = uVar39;
    auVar3[0xc] = uVar40;
    auVar3[0xd] = uVar42;
    auVar3[0xe] = uVar44;
    auVar3[0xf] = uVar46;
    auVar128 = auVar128 ^ (auVar128 ^ auVar3) & ~auVar63;
  }
  auVar64._0_4_ =
       SQRT(fVar113 * fVar113 + fVar52 * fVar52 + fVar70 * fVar70) +
       SQRT((fVar170 - fVar169) * (fVar170 - fVar169) +
            (fVar192 - fVar166) * (fVar192 - fVar166) + (fVar194 - fVar100) * (fVar194 - fVar100));
  auVar64._4_4_ =
       SQRT(fVar118 * fVar118 + fVar153 * fVar153 + fVar159 * fVar159) +
       SQRT((fVar175 - fVar120) * (fVar175 - fVar120) +
            (fVar178 - fVar167) * (fVar178 - fVar167) + (fVar180 - fVar102) * (fVar180 - fVar102));
  auVar64._8_4_ =
       SQRT(fVar119 * fVar119 + fVar155 * fVar155 + fVar165 * fVar165) +
       SQRT((fVar176 - fVar123) * (fVar176 - fVar123) +
            (fVar193 - fVar79) * (fVar193 - fVar79) + (fVar195 - fVar104) * (fVar195 - fVar104));
  auVar64._12_4_ =
       SQRT(fVar121 * fVar121 + fVar157 * fVar157 + fVar75 * fVar75) +
       SQRT((fVar177 - fVar126) * (fVar177 - fVar126) +
            (fVar103 - fVar168) * (fVar103 - fVar168) + (fVar196 - fVar112) * (fVar196 - fVar112));
  fVar120 = (float)NEON_fminnmv(auVar64,4);
  iVar86 = -(uint)(auVar64._0_4_ <= fVar120);
  iVar89 = -(uint)(auVar64._4_4_ <= fVar120);
  iVar74 = -(uint)(auVar64._8_4_ <= fVar120);
  iVar80 = -(uint)(auVar64._12_4_ <= fVar120);
  iVar86 = CONCAT13((byte)((uint)iVar86 >> 0x18) & (byte)((ulong)_DAT_03cab270 >> 0x18),
                    CONCAT12((byte)((uint)iVar86 >> 0x10) & (byte)((ulong)_DAT_03cab270 >> 0x10),
                             CONCAT11((byte)((uint)iVar86 >> 8) & (byte)((ulong)_DAT_03cab270 >> 8),
                                      (byte)iVar86 & (byte)_DAT_03cab270)));
  auVar56._0_8_ =
       CONCAT17((byte)((uint)iVar89 >> 0x18) & (byte)((ulong)_DAT_03cab270 >> 0x38),
                CONCAT16((byte)((uint)iVar89 >> 0x10) & (byte)((ulong)_DAT_03cab270 >> 0x30),
                         CONCAT15((byte)((uint)iVar89 >> 8) & (byte)((ulong)_DAT_03cab270 >> 0x28),
                                  CONCAT14((byte)iVar89 & (byte)((ulong)_DAT_03cab270 >> 0x20),
                                           iVar86))));
  auVar56[8] = (byte)iVar74 & (byte)_UNK_03cab278;
  auVar56[9] = (byte)((uint)iVar74 >> 8) & (byte)((ulong)_UNK_03cab278 >> 8);
  auVar56[10] = (byte)((uint)iVar74 >> 0x10) & (byte)((ulong)_UNK_03cab278 >> 0x10);
  auVar56[0xb] = (byte)((uint)iVar74 >> 0x18) & (byte)((ulong)_UNK_03cab278 >> 0x18);
  auVar65[0xc] = (byte)iVar80 & (byte)((ulong)_UNK_03cab278 >> 0x20);
  auVar65._0_12_ = auVar56;
  auVar65[0xd] = (byte)((uint)iVar80 >> 8) & (byte)((ulong)_UNK_03cab278 >> 0x28);
  auVar65[0xe] = (byte)((uint)iVar80 >> 0x10) & (byte)((ulong)_UNK_03cab278 >> 0x30);
  auVar65[0xf] = (byte)((uint)iVar80 >> 0x18) & (byte)((ulong)_UNK_03cab278 >> 0x38);
  local_60 = CONCAT44(auVar58._4_4_,auVar58._0_4_);
  local_80[1] = (ulong)(uint)fVar111;
  local_80[0] = uVar87;
  local_80[3] = (ulong)(uint)fVar20;
  local_80[2] = auVar179._0_8_;
  uStack_58 = (ulong)(uint)fVar16;
  uStack_48 = (ulong)(uint)fVar21;
  uStack_50 = CONCAT44(fVar182,fVar181);
  cVar92 = PTR_DAT_047d19d8
           [(uint)(iVar86 + (int)((ulong)auVar56._0_8_ >> 0x20) + auVar56._8_4_ + auVar65._12_4_)];
  lVar11 = (long)cVar92;
  uVar106 = local_80[lVar11 * 2];
  local_60 = CONCAT44(auVar183._4_4_,auVar183._0_4_);
  local_80[1] = (ulong)(uint)fVar99;
  local_80[0] = uStack_90;
  local_80[3] = (ulong)(uint)fVar18;
  local_80[2] = local_a0;
  uStack_58 = (ulong)(uint)fVar101;
  uStack_48 = (ulong)(uint)fVar19;
  uStack_50 = CONCAT44(fVar93,fVar91);
  uVar87 = local_80[lVar11 * 2];
  if (((cVar92 != '\x03') &&
      (uVar40 = uVar33, uVar42 = uVar35, uVar44 = uVar37, uVar46 = uVar39, cVar92 != '\x02')) &&
     (uVar40 = SUB41(fVar114,0), uVar42 = (char)((uint)fVar114 >> 8),
     uVar44 = (char)((uint)fVar114 >> 0x10), uVar46 = (char)((uint)fVar114 >> 0x18),
     cVar92 == '\x01')) {
    uVar40 = uVar26;
    uVar42 = uVar28;
    uVar44 = uVar30;
    uVar46 = uVar32;
  }
  fVar114 = (float)(uVar106 >> 0x20) +
            (float)(uVar87 >> 0x20) *
            (float)CONCAT13(uVar46,CONCAT12(uVar44,CONCAT11(uVar42,uVar40)));
  fVar120 = (float)(local_80[lVar11 * 2 + 1] >> 0x20) +
            (float)(local_80[lVar11 * 2 + 1] >> 0x20) *
            (float)CONCAT13(uVar46,CONCAT12(uVar44,CONCAT11(uVar42,uVar40)));
  param_5[1] = CONCAT17((char)((uint)fVar120 >> 0x18),
                        CONCAT16((char)((uint)fVar120 >> 0x10),
                                 CONCAT15((char)((uint)fVar120 >> 8),
                                          CONCAT14(SUB41(fVar120,0),
                                                   (float)local_80[lVar11 * 2 + 1] +
                                                   (float)local_80[lVar11 * 2 + 1] *
                                                   (float)CONCAT13(uVar46,CONCAT12(uVar44,CONCAT11(
                                                  uVar42,uVar40)))))));
  *param_5 = CONCAT17((char)((uint)fVar114 >> 0x18),
                      CONCAT16((char)((uint)fVar114 >> 0x10),
                               CONCAT15((char)((uint)fVar114 >> 8),
                                        CONCAT14(SUB41(fVar114,0),
                                                 (float)uVar106 +
                                                 (float)uVar87 *
                                                 (float)CONCAT13(uVar46,CONCAT12(uVar44,CONCAT11(
                                                  uVar42,uVar40)))))));
  return;
}


