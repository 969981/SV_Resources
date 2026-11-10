/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0305d6dc; name: FUN_0305d6dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0305d6dc(long param_1,ulong param_2,undefined4 *param_3,uint *param_4,undefined1 *param_5)

{
  uint uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  float *pfVar12;
  ulong uVar13;
  undefined4 *puVar14;
  bool bVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  int *piVar19;
  uint uVar20;
  long lVar21;
  float *pfVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar43;
  float fVar44;
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar29 [12];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar45 [12];
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  int iVar58;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar59;
  float fVar61;
  undefined1 auVar60 [16];
  float fVar62;
  int iVar63;
  float fVar69;
  float fVar71;
  undefined1 auVar64 [12];
  float fVar73;
  undefined1 auVar65 [16];
  int iVar70;
  int iVar72;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar74;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [12];
  undefined1 auVar88 [16];
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  uint local_168;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  auVar108._8_8_ = param_2;
  auVar108._0_8_ = param_1;
  lVar21 = *(long *)(param_1 + 0x18);
  local_168 = (uint)param_2;
  lVar16 = lVar21 + (long)(int)local_168 * 0x90;
  uVar18 = *(undefined8 *)(lVar16 + 0x28);
  fStack_78 = (float)uVar18;
  fStack_74 = (float)((ulong)uVar18 >> 0x20);
  uVar18 = *(undefined8 *)(lVar16 + 0x20);
  local_80 = (float)uVar18;
  fStack_7c = (float)((ulong)uVar18 >> 0x20);
  uStack_b8 = DAT_03cab628;
  local_c0 = DAT_03cab620;
  uStack_a8 = _UNK_03cabe68;
  uStack_b0 = _DAT_03cabe60;
  uStack_98 = _UNK_03caa5b8;
  local_a0 = _DAT_03caa5b0;
  uStack_88 = _UNK_03cabe58;
  uStack_90 = _DAT_03cabe50;
  iVar26 = *(int *)(param_1 + 0x20);
  if (iVar26 - 1U == local_168) {
    uVar11 = 4;
  }
  else {
    param_2 = param_2 & 0xffffffff;
    puVar17 = (undefined8 *)(lVar21 + (long)(int)local_168 * 0x90);
    uStack_c8 = puVar17[1];
    uVar10 = uStack_c8;
    local_d0 = *puVar17;
    uVar9 = local_d0;
    uStack_d8 = puVar17[3];
    uVar8 = uStack_d8;
    local_e0 = puVar17[2];
    uVar18 = local_e0;
    if ((*(byte *)(puVar17 + 0x10) >> 4 & 1) == 0) {
      if (((ulong)param_3 & 1) == 0) {
        local_e0._4_4_ = (float)((ulong)local_e0 >> 0x20);
        uStack_d8._4_4_ = (float)((ulong)uStack_d8 >> 0x20);
        fVar59 = (float)local_e0 * local_80 + local_e0._4_4_ * fStack_7c +
                 (float)uStack_d8 * fStack_78;
        fVar61 = (float)local_e0 * local_80 + local_e0._4_4_ * fStack_7c +
                 (float)uStack_d8 * fStack_78;
        local_f0 = (float)local_e0 - local_80 * fVar59;
        fStack_ec = local_e0._4_4_ - fStack_7c * fVar61;
        fStack_e8 = (float)uStack_d8 - fStack_78 * fVar59;
        fStack_e4 = -(uStack_d8._4_4_ - fStack_74 * fVar61);
        local_e0 = uVar18;
        uStack_d8 = uVar8;
        auVar108 = FUN_03058024(&local_f0,&local_d0,&local_80,&local_100,&local_110);
        fVar101 = local_110 - local_100;
        fVar102 = fStack_10c - fStack_fc;
        fVar103 = fStack_108 - fStack_f8;
        fVar104 = fStack_104 - fStack_f4;
        fVar59 = 0.0;
        fVar98 = 0.0;
        fVar99 = 0.0;
        fVar100 = 0.0;
      }
      else {
        local_d0._4_4_ = (float)((ulong)local_d0 >> 0x20);
        uStack_c8._4_4_ = (float)((ulong)uStack_c8 >> 0x20);
        fVar59 = (float)local_d0 * local_80 + local_d0._4_4_ * fStack_7c +
                 (float)uStack_c8 * fStack_78;
        fVar61 = (float)local_d0 * local_80 + local_d0._4_4_ * fStack_7c +
                 (float)uStack_c8 * fStack_78;
        local_f0 = (float)local_d0 - local_80 * fVar59;
        fStack_ec = local_d0._4_4_ - fStack_7c * fVar61;
        fStack_e8 = (float)uStack_c8 - fStack_78 * fVar59;
        fStack_e4 = -(uStack_c8._4_4_ - fStack_74 * fVar61);
        local_d0 = uVar9;
        uStack_c8 = uVar10;
        auVar108 = FUN_03058024(&local_f0,&local_e0,&local_80,&local_100,&local_110);
        fVar59 = local_110 - local_100;
        fVar98 = fStack_10c - fStack_fc;
        fVar99 = fStack_108 - fStack_f8;
        fVar100 = fStack_104 - fStack_f4;
        fVar101 = 0.0;
        fVar102 = 0.0;
        fVar103 = 0.0;
        fVar104 = 0.0;
      }
      puVar14 = (undefined4 *)((ulong)param_3 & 0xffffffff);
    }
    else {
      pfVar22 = (float *)&local_d0;
      if (((ulong)param_3 & 1) == 0) {
        pfVar22 = (float *)&local_e0;
      }
      fVar59 = local_80 * *pfVar22;
      fVar98 = fStack_7c * pfVar22[1];
      fVar55 = fStack_78 * pfVar22[2];
      fVar61 = fVar59 + fVar98 + fVar55;
      fVar55 = fVar59 + fVar98 + fVar55;
      fVar59 = 0.0;
      fVar98 = 0.0;
      fVar99 = 0.0;
      fVar100 = 0.0;
      fVar103 = 0.0;
      fVar104 = 0.0;
      fVar101 = 0.0;
      fVar102 = 0.0;
      local_f0 = *pfVar22 - local_80 * fVar61;
      fStack_ec = pfVar22[1] - fStack_7c * fVar55;
      fStack_e8 = pfVar22[2] - fStack_78 * fVar61;
      fStack_e4 = 0.0 - fStack_74 * fVar55;
      puVar14 = param_3;
    }
    lVar21 = lVar21 + (long)(int)local_168 * 0x90;
    fVar61 = *(float *)(lVar21 + 0x50);
    fVar55 = *(float *)(lVar21 + 0x54);
    fVar56 = *(float *)(lVar21 + 0x58);
    fVar91 = (float)*(undefined8 *)(lVar21 + 0x60);
    fVar57 = *(float *)(lVar21 + 0x30);
    fVar73 = *(float *)(lVar21 + 0x34);
    fVar74 = *(float *)(lVar21 + 0x38);
    fVar44 = *(float *)(lVar21 + 0x40);
    fVar89 = *(float *)(lVar21 + 0x44);
    fVar90 = *(float *)(lVar21 + 0x48);
    uVar11 = (ulong)uStack_90 >> 0x20;
    uVar13 = (ulong)uStack_88 >> 0x20;
    fVar94 = (float)local_a0;
    fVar95 = (float)((ulong)local_a0 >> 0x20);
    fVar96 = (float)uStack_98;
    fVar97 = (float)((ulong)uStack_98 >> 0x20);
    fVar92 = (float)*(undefined8 *)(lVar21 + 0x68);
    fVar93 = (float)((ulong)*(undefined8 *)(lVar21 + 0x60) >> 0x20);
    fVar62 = (float)local_c0 * fVar57 + (float)uStack_b0 * fVar73 + fVar94 * fVar74;
    fVar69 = local_c0._4_4_ * fVar57 + uStack_b0._4_4_ * fVar73 + fVar95 * fVar74;
    fVar71 = (float)uStack_b8 * fVar57 + (float)uStack_a8 * fVar73 + fVar96 * fVar74;
    fVar73 = uStack_b8._4_4_ * fVar57 + uStack_a8._4_4_ * fVar73 + fVar97 * fVar74;
    fVar74 = fVar94 * fVar56 + (float)local_c0 * fVar61 + (float)uStack_b0 * fVar55;
    fVar81 = fVar95 * fVar56 + local_c0._4_4_ * fVar61 + uStack_b0._4_4_ * fVar55;
    fVar82 = fVar96 * fVar56 + (float)uStack_b8 * fVar61 + (float)uStack_a8 * fVar55;
    fVar83 = fVar97 * fVar56 + uStack_b8._4_4_ * fVar61 + uStack_a8._4_4_ * fVar55;
    fVar61 = fVar94 * fVar90 + (float)local_c0 * fVar44 + (float)uStack_b0 * fVar89;
    fVar55 = fVar95 * fVar90 + local_c0._4_4_ * fVar44 + uStack_b0._4_4_ * fVar89;
    fVar56 = fVar96 * fVar90 + (float)uStack_b8 * fVar44 + (float)uStack_a8 * fVar89;
    fVar57 = fVar97 * fVar90 + uStack_b8._4_4_ * fVar44 + uStack_a8._4_4_ * fVar89;
    uStack_90._0_4_ =
         fVar94 * fVar92 + (float)uStack_b0 * fVar93 + (float)uStack_90 + (float)local_c0 * fVar91;
    uStack_90._4_4_ =
         fVar95 * fVar92 + uStack_b0._4_4_ * fVar93 + (float)uVar11 + local_c0._4_4_ * fVar91;
    uStack_88._0_4_ =
         fVar96 * fVar92 + (float)uStack_a8 * fVar93 + (float)uStack_88 + (float)uStack_b8 * fVar91;
    uStack_88._4_4_ =
         fVar97 * fVar92 + uStack_a8._4_4_ * fVar93 + (float)uVar13 + uStack_b8._4_4_ * fVar91;
    uStack_b8 = CONCAT44(fVar73,fVar71);
    local_c0 = CONCAT44(fVar69,fVar62);
    uStack_a8 = CONCAT44(fVar57,fVar56);
    uStack_b0 = CONCAT44(fVar55,fVar61);
    uStack_98 = CONCAT44(fVar83,fVar82);
    local_a0 = CONCAT44(fVar81,fVar74);
    if ((int)(local_168 + 1) < iVar26) {
      uVar24 = 0;
      iVar43 = local_168 + 2;
      while( true ) {
        lVar16 = *(long *)(param_1 + 0x18);
        uVar20 = iVar43 - 1;
        pfVar22 = (float *)(lVar16 + (long)(int)uVar20 * 0x90);
        fVar44 = *pfVar22;
        fVar89 = pfVar22[1];
        fVar90 = pfVar22[2];
        fStack_f4 = pfVar22[3];
        local_100 = (float)uStack_90 + fVar62 * fVar44 + fVar61 * fVar89 + fVar74 * fVar90;
        fStack_fc = uStack_90._4_4_ + fVar69 * fVar44 + fVar55 * fVar89 + fVar81 * fVar90;
        fVar44 = (float)uStack_88 + fVar71 * fVar44 + fVar56 * fVar89 + fVar82 * fVar90;
        auVar60._4_4_ = fStack_7c;
        auVar60._0_4_ = local_80;
        auVar60._8_4_ = fStack_78;
        auVar60._12_4_ = fStack_74;
        fVar89 = local_80 * local_100;
        fVar91 = fStack_7c * fStack_fc;
        fVar93 = fStack_78 * fVar44;
        fVar90 = fVar89 + fVar91 + fVar93;
        local_100 = local_100 - local_80 * fVar90;
        fStack_fc = fStack_fc - fStack_7c * (fVar89 + fVar91 + fVar93);
        auVar27._0_8_ = CONCAT44(fStack_fc,local_100);
        auVar27._8_4_ = fVar44 - fStack_78 * fVar90;
        uVar18 = *(undefined8 *)(pfVar22 + 4);
        fVar91 = (float)uVar18;
        fVar93 = (float)((ulong)uVar18 >> 0x20);
        fVar92 = (float)*(undefined8 *)(pfVar22 + 6);
        fVar61 = fVar74 * fVar92 + fVar61 * fVar93 + (float)uStack_90 + fVar62 * fVar91;
        fVar74 = fVar81 * fVar92 + fVar55 * fVar93 + uStack_90._4_4_ + fVar69 * fVar91;
        fVar55 = fVar82 * fVar92 + fVar56 * fVar93 + (float)uStack_88 + fVar71 * fVar91;
        fVar56 = local_80 * fVar61;
        fVar89 = fStack_7c * fVar74;
        fVar90 = fStack_78 * fVar55;
        fVar44 = fVar56 + fVar89 + fVar90;
        fVar90 = fVar56 + fVar89 + fVar90;
        fVar61 = fVar61 - local_80 * fVar44;
        fVar74 = fVar74 - fStack_7c * fVar90;
        auVar64._0_8_ = CONCAT44(fVar74,fVar61);
        auVar64._8_4_ = fVar55 - fStack_78 * fVar44;
        auVar76._12_4_ =
             (fVar83 * fVar92 + fVar57 * fVar93 + uStack_88._4_4_ + fVar73 * fVar91) -
             fStack_74 * fVar90;
        auVar76._0_12_ = auVar64;
        fVar55 = (float)((ulong)*(undefined8 *)(pfVar22 + 6) >> 0x20);
        if ((uVar24 & 1) == 0) {
          auVar67._12_4_ = fStack_f4;
          auVar67._0_12_ = auVar27;
          auVar85._8_8_ = auVar76._8_8_;
          auVar85._0_8_ = auVar64._0_8_;
          auVar79._0_12_ = auVar85._0_12_;
          auVar79._12_4_ = fVar55;
          auVar65._8_8_ = auVar67._8_8_;
          auVar65._0_8_ = auVar27._0_8_;
          fStack_f8 = auVar27._8_4_;
        }
        else {
          fVar55 = -fVar55;
          auVar65._12_4_ = fVar55;
          auVar65._0_12_ = auVar64;
          auVar79._12_4_ = -fStack_f4;
          auVar79._0_12_ = auVar27;
          local_100 = fVar61;
          fStack_fc = fVar74;
          fStack_f8 = auVar64._8_4_;
          fStack_f4 = fVar55;
        }
        auVar28 = auVar79._0_12_;
        iVar63 = -(uint)(((ulong)puVar14 & 1) != 0);
        auVar46._0_8_ = CONCAT44(iVar63,iVar63);
        auVar46._8_4_ = iVar63;
        auVar46._12_4_ = iVar63;
        auVar75._8_8_ = auVar46._8_8_;
        auVar75._0_8_ = auVar46._0_8_;
        auVar45._4_4_ = fStack_ec;
        auVar45._0_4_ = local_f0;
        auVar45._8_4_ = fStack_e8;
        auVar76 = auVar65 ^ (auVar65 ^ auVar79) & auVar75;
        fStack_108 = auVar79._8_4_;
        fStack_104 = auVar79._12_4_;
        local_110 = auVar79._0_4_;
        fStack_10c = auVar79._4_4_;
        fVar73 = auVar76._12_4_ + fStack_e4;
        fVar61 = auVar76._0_4_ - local_f0;
        fVar55 = auVar76._4_4_ - fStack_ec;
        fVar56 = auVar76._8_4_ - fStack_e8;
        fVar57 = local_80 * fVar61;
        fVar44 = fStack_7c * fVar55;
        fVar89 = fStack_78 * fVar56;
        fVar74 = fVar57 + fVar44 + fVar89;
        fVar89 = fVar57 + fVar44 + fVar89;
        fVar61 = fVar61 - local_80 * fVar74;
        fVar55 = fVar55 - fStack_7c * fVar89;
        fVar56 = fVar56 - fStack_78 * fVar74;
        fVar57 = (auVar76._12_4_ - fStack_e4) - fStack_74 * fVar89;
        auVar77._0_4_ = fVar61 * fVar61;
        auVar77._4_4_ = fVar55 * fVar55;
        auVar77._8_4_ = fVar56 * fVar56;
        auVar77._12_4_ = fVar57 * fVar57;
        auVar76 = NEON_ext(auVar77,auVar77,8,1);
        if (auVar77._0_4_ + auVar77._4_4_ + auVar76._0_4_ < fVar73 * fVar73) {
          return 5;
        }
        fVar61 = auVar65._0_4_ - local_f0;
        fVar55 = auVar65._4_4_ - fStack_ec;
        fVar56 = auVar65._8_4_ - fStack_e8;
        auVar87._8_4_ = 0x3a83126f;
        auVar87._0_8_ = 0x3a83126f3a83126f;
        auVar88._12_4_ = 0x3a83126f;
        auVar88._0_12_ = auVar87;
        fVar57 = local_80 * fVar61;
        fVar74 = fStack_7c * fVar55;
        fVar44 = fStack_78 * fVar56;
        fVar73 = fVar44 + fVar57 + fVar74;
        auVar49 = ZEXT816(0);
        iVar63 = -(uint)(ABS(fVar61 - local_80 * fVar73) <= 0.001);
        iVar70 = -(uint)(ABS(fVar55 - fStack_7c * (fVar44 + fVar57 + fVar74)) <= 0.001);
        iVar72 = -(uint)(ABS(fVar56 - fStack_78 * fVar73) <= 0.001);
        auVar107 = ZEXT816(0);
        if (CONCAT13((byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar63 >> 0x18) &
                     (byte)((uint)iVar72 >> 0x18),
                     CONCAT12((byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar63 >> 0x10) &
                              (byte)((uint)iVar72 >> 0x10),
                              CONCAT11((byte)((uint)iVar70 >> 8) & (byte)((uint)iVar63 >> 8) &
                                       (byte)((uint)iVar72 >> 8),
                                       (byte)iVar70 & (byte)iVar63 & (byte)iVar72))) == 0) {
          auVar108 = FUN_03058024(&local_f0,&local_100,&local_80,&fStack_120,&local_130);
          auVar107._0_4_ = local_130 - fStack_120;
          auVar107._4_4_ = fStack_12c - fStack_11c;
          auVar107._8_4_ = fStack_128 - fStack_118;
          auVar107._12_4_ = fStack_124 - fStack_114;
          auVar60._8_4_ = fStack_78;
          auVar60._0_8_ = CONCAT44(fStack_7c,local_80);
          auVar60._12_4_ = fStack_74;
          auVar76 = NEON_ext(auVar60,auVar60,8,1);
          uVar18 = NEON_ext(CONCAT44(fStack_7c,local_80),auVar76._0_8_,4,1);
          puVar14 = (undefined4 *)((ulong)param_3 & 0xffffffff);
          auVar76 = NEON_ext(auVar107,auVar107,4,1);
          auVar5._8_8_ = auVar88._8_8_;
          auVar5._0_8_ = 0x3a83126f3a83126f;
          auVar87 = auVar5._0_12_;
          auVar30._0_4_ = local_80 * auVar76._0_4_ - auVar107._0_4_ * (float)uVar18;
          auVar30._4_4_ =
               fStack_7c * auVar76._4_4_ - auVar107._4_4_ * (float)((ulong)uVar18 >> 0x20);
          auVar30._8_4_ = fStack_78 * auVar107._0_4_ - auVar107._8_4_ * local_80;
          auVar30._12_4_ = fStack_74 * auVar107._4_4_ - auVar107._12_4_ * fStack_7c;
          auVar76 = NEON_ext(auVar30,auVar30,4,1);
          auVar45._4_4_ = fStack_ec;
          auVar45._0_4_ = local_f0;
          auVar45._8_4_ = fStack_e8;
          auVar49._0_8_ = auVar76._0_8_;
          auVar49._8_4_ = auVar30._0_4_;
          auVar49._12_4_ = 0;
          auVar28._4_4_ = fStack_10c;
          auVar28._0_4_ = local_110;
          auVar28._8_4_ = fStack_108;
        }
        fVar61 = auVar28._0_4_ - auVar45._0_4_;
        fVar55 = auVar28._4_4_ - auVar45._4_4_;
        fVar56 = auVar28._8_4_ - auVar45._8_4_;
        fVar57 = auVar60._0_4_ * fVar61;
        fVar74 = auVar60._4_4_ * fVar55;
        fVar44 = auVar60._8_4_ * fVar56;
        fVar73 = fVar57 + fVar74 + fVar44;
        auVar105 = ZEXT816(0);
        iVar63 = -(uint)(ABS(fVar61 - auVar60._0_4_ * fVar73) <= auVar87._0_4_);
        iVar70 = -(uint)(ABS(fVar55 - auVar60._4_4_ * (fVar57 + fVar74 + fVar44)) <= auVar87._4_4_);
        iVar72 = -(uint)(ABS(fVar56 - auVar60._8_4_ * fVar73) <= auVar87._8_4_);
        auVar31 = ZEXT816(0);
        if (CONCAT13((byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar63 >> 0x18) &
                     (byte)((uint)iVar72 >> 0x18),
                     CONCAT12((byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar63 >> 0x10) &
                              (byte)((uint)iVar72 >> 0x10),
                              CONCAT11((byte)((uint)iVar70 >> 8) & (byte)((uint)iVar63 >> 8) &
                                       (byte)((uint)iVar72 >> 8),
                                       (byte)iVar70 & (byte)iVar63 & (byte)iVar72))) == 0) {
          auVar108 = FUN_03058024(&local_f0,&local_110,&local_80,&fStack_120,&local_130);
          auVar105._0_4_ = local_130 - fStack_120;
          auVar105._4_4_ = fStack_12c - fStack_11c;
          auVar105._8_4_ = fStack_128 - fStack_118;
          auVar105._12_4_ = fStack_124 - fStack_114;
          auVar60._8_4_ = fStack_78;
          auVar60._0_8_ = CONCAT44(fStack_7c,local_80);
          auVar60._12_4_ = fStack_74;
          auVar76 = NEON_ext(auVar60,auVar60,8,1);
          uVar18 = NEON_ext(CONCAT44(fStack_7c,local_80),auVar76._0_8_,4,1);
          auVar76 = NEON_ext(auVar105,auVar105,4,1);
          puVar14 = (undefined4 *)((ulong)param_3 & 0xffffffff);
          auVar47._0_4_ = local_80 * auVar76._0_4_ - auVar105._0_4_ * (float)uVar18;
          auVar47._4_4_ =
               fStack_7c * auVar76._4_4_ - auVar105._4_4_ * (float)((ulong)uVar18 >> 0x20);
          auVar47._8_4_ = fStack_78 * auVar105._0_4_ - auVar105._8_4_ * local_80;
          auVar47._12_4_ = fStack_74 * auVar105._4_4_ - auVar105._12_4_ * fStack_7c;
          auVar76 = NEON_ext(auVar47,auVar47,4,1);
          auVar31._0_8_ = auVar76._0_8_;
          auVar31._8_4_ = auVar47._0_4_;
          auVar31._12_4_ = 0;
        }
        fVar57 = fStack_104;
        fVar56 = fStack_108;
        fVar55 = fStack_10c;
        fVar61 = local_110;
        pfVar12 = auVar108._0_8_;
        bVar2 = *(byte *)(lVar16 + (long)(int)uVar20 * 0x90 + 0x80);
        if (((bVar2 >> 4 & 1) == 0) ||
           (auVar48._0_4_ = auVar49._0_4_ * auVar105._0_4_,
           auVar48._4_4_ = auVar49._4_4_ * auVar105._4_4_,
           auVar48._8_4_ = auVar49._8_4_ * auVar105._8_4_,
           auVar48._12_4_ = auVar49._12_4_ * auVar105._12_4_,
           auVar76 = NEON_ext(auVar48,auVar48,8,1),
           auVar76._0_4_ + auVar48._0_4_ + auVar48._4_4_ <= 0.0)) {
          auVar76 = auVar49;
          auVar49 = auVar31;
          auVar106 = auVar107;
          auVar107 = auVar105;
        }
        else {
          fStack_108 = fStack_f8;
          fStack_104 = fStack_f4;
          local_110 = local_100;
          fStack_10c = fStack_fc;
          fStack_f8 = fVar56;
          fStack_f4 = fVar57;
          local_100 = fVar61;
          fStack_fc = fVar55;
          auVar76 = auVar31;
          auVar106 = auVar105;
        }
        fVar61 = auVar76._0_4_;
        auVar66._0_4_ = fVar101 * fVar61;
        fVar55 = auVar76._4_4_;
        auVar66._4_4_ = fVar102 * fVar55;
        fVar56 = auVar76._8_4_;
        auVar66._8_4_ = fVar103 * fVar56;
        fVar57 = auVar76._12_4_;
        auVar66._12_4_ = fVar104 * fVar57;
        auVar78._0_4_ = fVar101 * -auVar49._0_4_;
        auVar78._4_4_ = fVar102 * -auVar49._4_4_;
        auVar78._8_4_ = fVar103 * -auVar49._8_4_;
        auVar78._12_4_ = fVar104 * auVar49._12_4_;
        auVar84._0_4_ = fVar59 * fVar61;
        auVar84._4_4_ = fVar98 * fVar55;
        auVar84._8_4_ = fVar99 * fVar56;
        auVar84._12_4_ = fVar100 * fVar57;
        auVar50._0_4_ = fVar59 * -auVar49._0_4_;
        auVar50._4_4_ = fVar98 * -auVar49._4_4_;
        auVar50._8_4_ = fVar99 * -auVar49._8_4_;
        auVar50._12_4_ = fVar100 * auVar49._12_4_;
        auVar67 = NEON_ext(auVar66,auVar66,8,1);
        auVar79 = NEON_ext(auVar78,auVar78,8,1);
        auVar85 = NEON_ext(auVar84,auVar84,8,1);
        auVar76 = NEON_ext(auVar50,auVar50,8,1);
        fVar90 = auVar107._0_4_;
        auVar32._0_4_ = fVar61 * fVar90;
        fVar62 = auVar107._4_4_;
        auVar32._4_4_ = fVar55 * fVar62;
        fVar69 = auVar107._8_4_;
        auVar32._8_4_ = fVar56 * fVar69;
        fVar71 = auVar107._12_4_;
        auVar32._12_4_ = fVar57 * fVar71;
        iVar63 = -(uint)(0.0 <= auVar67._0_4_ + auVar66._0_4_ + auVar66._4_4_);
        iVar70 = -(uint)(0.0 <= auVar79._0_4_ + auVar78._0_4_ + auVar78._4_4_);
        iVar72 = -(uint)(0.0 <= auVar85._0_4_ + auVar84._0_4_ + auVar84._4_4_);
        iVar58 = -(uint)(0.0 <= auVar76._0_4_ + auVar50._0_4_ + auVar50._4_4_);
        auVar76 = NEON_ext(auVar32,auVar32,8,1);
        iVar63 = CONCAT13((byte)((uint)iVar63 >> 0x18) & (byte)((ulong)_DAT_03cab270 >> 0x18),
                          CONCAT12((byte)((uint)iVar63 >> 0x10) &
                                   (byte)((ulong)_DAT_03cab270 >> 0x10),
                                   CONCAT11((byte)((uint)iVar63 >> 8) &
                                            (byte)((ulong)_DAT_03cab270 >> 8),
                                            (byte)iVar63 & (byte)_DAT_03cab270)));
        auVar29._0_8_ =
             CONCAT17((byte)((uint)iVar70 >> 0x18) & (byte)((ulong)_DAT_03cab270 >> 0x38),
                      CONCAT16((byte)((uint)iVar70 >> 0x10) & (byte)((ulong)_DAT_03cab270 >> 0x30),
                               CONCAT15((byte)((uint)iVar70 >> 8) &
                                        (byte)((ulong)_DAT_03cab270 >> 0x28),
                                        CONCAT14((byte)iVar70 & (byte)((ulong)_DAT_03cab270 >> 0x20)
                                                 ,iVar63))));
        auVar29[8] = (byte)iVar72 & (byte)_UNK_03cab278;
        auVar29[9] = (byte)((uint)iVar72 >> 8) & (byte)((ulong)_UNK_03cab278 >> 8);
        auVar29[10] = (byte)((uint)iVar72 >> 0x10) & (byte)((ulong)_UNK_03cab278 >> 0x10);
        auVar29[0xb] = (byte)((uint)iVar72 >> 0x18) & (byte)((ulong)_UNK_03cab278 >> 0x18);
        auVar33[0xc] = (byte)iVar58 & (byte)((ulong)_UNK_03cab278 >> 0x20);
        auVar33._0_12_ = auVar29;
        auVar33[0xd] = (byte)((uint)iVar58 >> 8) & (byte)((ulong)_UNK_03cab278 >> 0x28);
        auVar33[0xe] = (byte)((uint)iVar58 >> 0x10) & (byte)((ulong)_UNK_03cab278 >> 0x30);
        auVar33[0xf] = (byte)((uint)iVar58 >> 0x18) & (byte)((ulong)_UNK_03cab278 >> 0x38);
        uVar25 = iVar63 + (int)((ulong)auVar29._0_8_ >> 0x20) + auVar29._8_4_ + auVar33._12_4_;
        iVar63 = -(uint)(fVar101 == 0.0);
        iVar70 = -(uint)(fVar102 == 0.0);
        iVar72 = -(uint)(fVar103 == 0.0);
        uVar1 = (uint)(-0.001 < auVar32._0_4_ + auVar32._4_4_ + auVar76._0_4_) << 4;
        fVar73 = auVar106._0_4_;
        fVar74 = auVar106._4_4_;
        fVar44 = auVar106._8_4_;
        fVar89 = auVar106._12_4_;
        uVar23 = (uint)param_2;
        fVar55 = auVar60._4_4_;
        fVar56 = auVar60._8_4_;
        fVar57 = auVar60._12_4_;
        fVar61 = auVar60._0_4_;
        if (CONCAT13((byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar63 >> 0x18) &
                     (byte)((uint)iVar72 >> 0x18),
                     CONCAT12((byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar63 >> 0x10) &
                              (byte)((uint)iVar72 >> 0x10),
                              CONCAT11((byte)((uint)iVar70 >> 8) & (byte)((uint)iVar63 >> 8) &
                                       (byte)((uint)iVar72 >> 8),
                                       (byte)iVar70 & (byte)iVar63 & (byte)iVar72))) != 0) break;
        if (((ulong)puVar14 & 1) == 0) {
LAB_0305dea0:
          iVar63 = -(uint)(fVar59 == 0.0);
          iVar70 = -(uint)(fVar98 == 0.0);
          iVar72 = -(uint)(fVar99 == 0.0);
          if (CONCAT13((byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar63 >> 0x18) &
                       (byte)((uint)iVar72 >> 0x18),
                       CONCAT12((byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar63 >> 0x10) &
                                (byte)((uint)iVar72 >> 0x10),
                                CONCAT11((byte)((uint)iVar70 >> 8) & (byte)((uint)iVar63 >> 8) &
                                         (byte)((uint)iVar72 >> 8),
                                         (byte)iVar70 & (byte)iVar63 & (byte)iVar72))) == 0)
          goto code_r0x0305df10;
          iVar63 = -(uint)(fVar90 == 0.0);
          iVar70 = -(uint)(fVar62 == 0.0);
          iVar72 = -(uint)(fVar69 == 0.0);
          iVar58 = -(uint)(fVar71 == 0.0);
          if (CONCAT13((byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar63 >> 0x18) &
                       (byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar58 >> 0x18),
                       CONCAT12((byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar63 >> 0x10) &
                                (byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar58 >> 0x10),
                                CONCAT11((byte)((uint)iVar70 >> 8) & (byte)((uint)iVar63 >> 8) &
                                         (byte)((uint)iVar72 >> 8) & (byte)((uint)iVar58 >> 8),
                                         (byte)iVar70 & (byte)iVar63 & (byte)iVar72 & (byte)iVar58))
                      ) == 0) {
            switch(uVar25 & 0x13 | uVar1) {
            case 0:
              goto switchD_0305df4c_caseD_0;
            case 1:
              goto switchD_0305df8c_caseD_2;
            case 2:
            case 0x12:
              goto switchD_0305df4c_caseD_2;
            case 3:
            case 0x10:
              goto switchD_0305df4c_caseD_3;
            default:
              uVar11 = FUN_0307878c(pfVar12 + 0x1c);
              if ((uint)uVar11 != 0xffffffff) {
                lVar16 = *(long *)(*(long *)(*(long *)(auVar108._8_8_ + 0x38) +
                                            (uVar11 >> 0x16 & 0x3ff) * 0x100) + 0x20);
                uVar24 = (uint)uVar11 & 0x3fffff;
                uVar20 = uVar24 - *(int *)(lVar16 + 0x30);
                if ((int)uVar24 < *(int *)(lVar16 + 0x30)) {
                  if (*(int *)(lVar16 + 0x78) == 0) {
                    uVar20 = uVar24;
LAB_0305e37c:
                    lVar21 = *(long *)(lVar16 + 0xc0);
                    goto LAB_0305e380;
                  }
                  uVar20 = *(uint *)(*(long *)(lVar16 + 0x70) + (ulong)uVar24 * 4);
                  if (uVar20 != 0xffffffff) goto LAB_0305e37c;
                  piVar19 = (int *)(*(long *)(lVar16 + 0x28) + (ulong)uVar24 * 0x14);
                }
                else {
                  lVar21 = *(long *)(lVar16 + 0xe0);
LAB_0305e380:
                  piVar19 = (int *)(lVar21 + (long)(int)uVar20 * 0x14);
                }
                iVar26 = *piVar19;
                iVar43 = *(int *)(lVar16 + 0x40);
                lVar21 = 0x38;
                if (iVar43 <= iVar26) {
                  lVar21 = 0xf0;
                }
                iVar63 = 0;
                if (iVar43 <= iVar26) {
                  iVar63 = iVar43;
                }
                pfVar22 = (float *)(*(long *)(lVar16 + lVar21) + (long)(iVar26 - iVar63) * 0x10);
                iVar26 = -(uint)(*pfVar22 == pfVar12[4]);
                iVar63 = -(uint)(pfVar22[1] == pfVar12[5]);
                iVar70 = -(uint)(pfVar22[2] == pfVar12[6]);
                if (CONCAT13((byte)((uint)iVar63 >> 0x18) & (byte)((uint)iVar26 >> 0x18) &
                             (byte)((uint)iVar70 >> 0x18),
                             CONCAT12((byte)((uint)iVar63 >> 0x10) & (byte)((uint)iVar26 >> 0x10) &
                                      (byte)((uint)iVar70 >> 0x10),
                                      CONCAT11((byte)((uint)iVar63 >> 8) & (byte)((uint)iVar26 >> 8)
                                               & (byte)((uint)iVar70 >> 8),
                                               (byte)iVar63 & (byte)iVar26 & (byte)iVar70))) != 0) {
                  iVar26 = piVar19[1];
                  lVar21 = 0x38;
                  if (iVar43 <= iVar26) {
                    lVar21 = 0xf0;
                  }
                  iVar63 = 0;
                  if (iVar43 <= iVar26) {
                    iVar63 = iVar43;
                  }
                  pfVar22 = (float *)(*(long *)(lVar16 + lVar21) + (long)(iVar26 - iVar63) * 0x10);
                  iVar26 = -(uint)(*pfVar22 == *pfVar12);
                  iVar43 = -(uint)(pfVar22[1] == pfVar12[1]);
                  iVar63 = -(uint)(pfVar22[2] == pfVar12[2]);
                  if (CONCAT13((byte)((uint)iVar43 >> 0x18) & (byte)((uint)iVar26 >> 0x18) &
                               (byte)((uint)iVar63 >> 0x18),
                               CONCAT12((byte)((uint)iVar43 >> 0x10) & (byte)((uint)iVar26 >> 0x10)
                                        & (byte)((uint)iVar63 >> 0x10),
                                        CONCAT11((byte)((uint)iVar43 >> 8) &
                                                 (byte)((uint)iVar26 >> 8) &
                                                 (byte)((uint)iVar63 >> 8),
                                                 (byte)iVar43 & (byte)iVar26 & (byte)iVar63))) != 0)
                  goto LAB_0305e41c;
                }
                *puVar14 = 0xffffffff;
              }
              uVar11 = 0xffffffff;
LAB_0305e41c:
              return uVar11 & 0xffffffff;
            case 0x11:
            case 0x13:
              goto switchD_0305df8c_caseD_6;
            }
          }
          auVar107._12_4_ = fVar100;
          auVar107._8_4_ = fVar99;
          auVar107._4_4_ = fVar98;
          auVar107._0_4_ = fVar59;
          auVar35._0_4_ = -(uint)((uVar25 & 1) == 0);
          auVar35._4_4_ = auVar35._0_4_;
          auVar35._8_4_ = auVar35._0_4_;
          auVar35._12_4_ = auVar35._0_4_;
          auVar4._4_4_ = fVar102;
          auVar4._0_4_ = fVar101;
          auVar4._8_4_ = fVar103;
          auVar4._12_4_ = fVar104;
          auVar106 = auVar106 ^ (auVar106 ^ auVar4) & auVar35;
          if ((uVar25 & 1) != 0) {
            uVar23 = uVar20;
          }
          param_2 = (ulong)uVar23;
          goto LAB_0305dd38;
        }
code_r0x0305df10:
        switch(uVar25 | uVar1) {
        case 1:
        case 3:
          goto switchD_0305df8c_caseD_0;
        case 2:
        case 0xb:
        case 0xe:
        case 0x12:
        case 0x13:
        case 0x18:
        case 0x1e:
          goto switchD_0305df4c_caseD_3;
        case 4:
        case 7:
        case 0xd:
        case 0x11:
        case 0x14:
        case 0x17:
        case 0x1c:
          goto switchD_0305df8c_caseD_3;
        case 5:
        case 0x15:
switchD_0305df8c_caseD_1:
          auVar36._0_4_ = fVar73 * fVar73;
          auVar36._4_4_ = fVar74 * fVar74;
          auVar36._8_4_ = fVar44 * fVar44;
          auVar36._12_4_ = fVar89 * fVar89;
          auVar108 = NEON_ext(auVar36,auVar36,8,1);
          auVar51._0_4_ = fVar59 * fVar59;
          auVar51._4_4_ = fVar98 * fVar98;
          auVar51._8_4_ = fVar99 * fVar99;
          auVar51._12_4_ = fVar100 * fVar100;
          auVar60 = NEON_ext(auVar51,auVar51,8,1);
          if (!(bool)(~(auVar108._0_4_ + auVar36._0_4_ + auVar36._4_4_ <
                       auVar60._0_4_ + auVar51._0_4_ + auVar51._4_4_) & 1)) {
            fVar59 = fVar61 * ((float)local_e0 - (float)local_d0);
            fVar99 = fVar55 * (local_e0._4_4_ - local_d0._4_4_);
            fVar73 = fVar56 * ((float)uStack_d8 - (float)uStack_c8);
            fVar98 = fVar59 + fVar99 + fVar73;
            fVar73 = fVar59 + fVar99 + fVar73;
            fVar59 = fVar61 * (local_100 - (float)local_d0);
            fVar100 = fVar55 * (fStack_fc - local_d0._4_4_);
            fVar44 = fVar56 * (fStack_f8 - (float)uStack_c8);
            fVar99 = fVar59 + fVar100 + fVar44;
            fVar44 = fVar59 + fVar100 + fVar44;
            fVar101 = ((float)local_e0 - (float)local_d0) - fVar61 * fVar98;
            fVar102 = (local_e0._4_4_ - local_d0._4_4_) - fVar55 * fVar73;
            fVar103 = ((float)uStack_d8 - (float)uStack_c8) - fVar56 * fVar98;
            fVar59 = (local_100 - (float)local_d0) - fVar61 * fVar99;
            fVar98 = (fStack_fc - local_d0._4_4_) - fVar55 * fVar44;
            fVar99 = (fStack_f8 - (float)uStack_c8) - fVar56 * fVar99;
            uVar18 = NEON_fmov(0x3f800000,4);
            fVar100 = fVar101 * fVar59;
            fVar104 = fVar102 * fVar98;
            fVar74 = fVar103 * fVar99;
            uVar18 = NEON_fminnm(CONCAT44(((float)((ulong)uVar18 >> 0x20) /
                                          (fVar101 * fVar101 + fVar102 * fVar102 + fVar103 * fVar103
                                          )) * (fVar100 + fVar104 + fVar74),
                                          ((float)uVar18 /
                                          (fVar101 * fVar101 + fVar102 * fVar102 + fVar103 * fVar103
                                          )) * (fVar100 + fVar104 + fVar74)),uVar18,4);
            uVar18 = NEON_fmax(uVar18,0,4);
            fVar104 = (float)uVar18;
            fVar74 = (float)((ulong)uVar18 >> 0x20);
            fVar100 = uStack_c8._4_4_ + (-uStack_d8._4_4_ - uStack_c8._4_4_) * fVar104;
            fVar59 = fVar59 - fVar101 * fVar104;
            fVar98 = fVar98 - fVar102 * fVar74;
            fVar99 = fVar99 - fVar103 * fVar104;
            fVar101 = fVar61 * fVar59;
            fVar103 = fVar55 * fVar98;
            fVar104 = fVar56 * fVar99;
            fVar102 = fVar101 + fVar103 + fVar104;
            fVar104 = fVar101 + fVar103 + fVar104;
            fVar59 = fVar59 - fVar61 * fVar102;
            fVar98 = fVar98 - fVar55 * fVar104;
            fVar99 = fVar99 - fVar56 * fVar102;
            fVar61 = (((fStack_f4 - uStack_c8._4_4_) - fVar57 * fVar44) -
                     ((uStack_d8._4_4_ - uStack_c8._4_4_) - fVar57 * fVar73) * fVar74) -
                     fVar57 * fVar104;
            auVar37._0_4_ = fVar59 * fVar59;
            auVar37._4_4_ = fVar98 * fVar98;
            auVar37._8_4_ = fVar99 * fVar99;
            auVar37._12_4_ = fVar61 * fVar61;
            auVar108 = NEON_ext(auVar37,auVar37,8,1);
            if (!(bool)(~(auVar37._0_4_ + auVar37._4_4_ + auVar108._0_4_ < fVar100 * fVar100) & 1))
            goto switchD_0305df24_caseD_1b;
          }
          goto switchD_0305df8c_caseD_3;
        case 6:
        case 0x16:
        case 0x19:
switchD_0305df8c_caseD_6:
          auVar38._0_4_ = fVar73 * fVar73;
          auVar38._4_4_ = fVar74 * fVar74;
          auVar38._8_4_ = fVar44 * fVar44;
          auVar38._12_4_ = fVar89 * fVar89;
          *param_4 = uVar20;
          auVar108 = NEON_ext(auVar38,auVar38,8,1);
          auVar52._0_4_ = fVar90 * fVar90;
          auVar52._4_4_ = fVar62 * fVar62;
          auVar52._8_4_ = fVar69 * fVar69;
          auVar52._12_4_ = fVar71 * fVar71;
          auVar60 = NEON_ext(auVar52,auVar52,8,1);
          bVar15 = (bool)(-(auVar108._0_4_ + auVar38._0_4_ + auVar38._4_4_ <
                           auVar60._0_4_ + auVar52._0_4_ + auVar52._4_4_) & 1);
          goto LAB_0305e240;
        case 8:
        case 0xc:
switchD_0305df4c_caseD_0:
          local_e0 = CONCAT44(fStack_10c,local_110);
          uStack_d8 = CONCAT44(fStack_104,fStack_108);
          auVar106._12_4_ = fVar104;
          auVar106._8_4_ = fVar103;
          auVar106._4_4_ = fVar102;
          auVar106._0_4_ = fVar101;
          local_168 = uVar20;
          break;
        case 9:
          goto switchD_0305df8c_caseD_2;
        case 10:
        case 0x1a:
switchD_0305df4c_caseD_2:
          auVar39._0_4_ = fVar90 * fVar90;
          auVar39._4_4_ = fVar62 * fVar62;
          auVar39._8_4_ = fVar69 * fVar69;
          auVar39._12_4_ = fVar71 * fVar71;
          auVar108 = NEON_ext(auVar39,auVar39,8,1);
          auVar53._0_4_ = fVar101 * fVar101;
          auVar53._4_4_ = fVar102 * fVar102;
          auVar53._8_4_ = fVar103 * fVar103;
          auVar53._12_4_ = fVar104 * fVar104;
          auVar60 = NEON_ext(auVar53,auVar53,8,1);
          if (!(bool)(~(auVar108._0_4_ + auVar39._0_4_ + auVar39._4_4_ <
                       auVar60._0_4_ + auVar53._0_4_ + auVar53._4_4_) & 1)) {
            fVar59 = fVar61 * ((float)local_e0 - (float)local_d0);
            fVar99 = fVar55 * (local_e0._4_4_ - local_d0._4_4_);
            fVar73 = fVar56 * ((float)uStack_d8 - (float)uStack_c8);
            fVar98 = fVar59 + fVar99 + fVar73;
            fVar73 = fVar59 + fVar99 + fVar73;
            fVar59 = fVar61 * (local_110 - (float)local_d0);
            fVar100 = fVar55 * (fStack_10c - local_d0._4_4_);
            fVar44 = fVar56 * (fStack_108 - (float)uStack_c8);
            fVar99 = fVar59 + fVar100 + fVar44;
            fVar44 = fVar59 + fVar100 + fVar44;
            fVar101 = ((float)local_e0 - (float)local_d0) - fVar61 * fVar98;
            fVar102 = (local_e0._4_4_ - local_d0._4_4_) - fVar55 * fVar73;
            fVar103 = ((float)uStack_d8 - (float)uStack_c8) - fVar56 * fVar98;
            fVar59 = (local_110 - (float)local_d0) - fVar61 * fVar99;
            fVar98 = (fStack_10c - local_d0._4_4_) - fVar55 * fVar44;
            fVar99 = (fStack_108 - (float)uStack_c8) - fVar56 * fVar99;
            uVar18 = NEON_fmov(0x3f800000,4);
            fVar100 = fVar101 * fVar59;
            fVar104 = fVar102 * fVar98;
            fVar74 = fVar103 * fVar99;
            uVar18 = NEON_fminnm(CONCAT44(((float)((ulong)uVar18 >> 0x20) /
                                          (fVar101 * fVar101 + fVar102 * fVar102 + fVar103 * fVar103
                                          )) * (fVar100 + fVar104 + fVar74),
                                          ((float)uVar18 /
                                          (fVar101 * fVar101 + fVar102 * fVar102 + fVar103 * fVar103
                                          )) * (fVar100 + fVar104 + fVar74)),uVar18,4);
            uVar18 = NEON_fmax(uVar18,0,4);
            fVar104 = (float)uVar18;
            fVar74 = (float)((ulong)uVar18 >> 0x20);
            fVar100 = uStack_c8._4_4_ + (-uStack_d8._4_4_ - uStack_c8._4_4_) * fVar104;
            fVar59 = fVar59 - fVar101 * fVar104;
            fVar98 = fVar98 - fVar102 * fVar74;
            fVar99 = fVar99 - fVar103 * fVar104;
            fVar101 = fVar61 * fVar59;
            fVar103 = fVar55 * fVar98;
            fVar104 = fVar56 * fVar99;
            fVar102 = fVar101 + fVar103 + fVar104;
            fVar104 = fVar101 + fVar103 + fVar104;
            fVar59 = fVar59 - fVar61 * fVar102;
            fVar98 = fVar98 - fVar55 * fVar104;
            fVar99 = fVar99 - fVar56 * fVar102;
            fVar61 = (((fStack_104 - uStack_c8._4_4_) - fVar57 * fVar44) -
                     ((uStack_d8._4_4_ - uStack_c8._4_4_) - fVar57 * fVar73) * fVar74) -
                     fVar57 * fVar104;
            auVar40._0_4_ = fVar59 * fVar59;
            auVar40._4_4_ = fVar98 * fVar98;
            auVar40._8_4_ = fVar99 * fVar99;
            auVar40._12_4_ = fVar61 * fVar61;
            auVar108 = NEON_ext(auVar40,auVar40,8,1);
            if (!(bool)(~(auVar40._0_4_ + auVar40._4_4_ + auVar108._0_4_ < fVar100 * fVar100) & 1))
            goto switchD_0305df24_caseD_1d;
          }
          goto switchD_0305df4c_caseD_3;
        case 0xf:
        case 0x10:
          auVar41._0_4_ = fVar59 * fVar73;
          auVar41._4_4_ = fVar98 * fVar74;
          auVar41._8_4_ = fVar99 * fVar44;
          auVar41._12_4_ = fVar100 * fVar89;
          auVar108 = NEON_ext(auVar41,auVar41,8,1);
          fVar59 = auVar108._0_4_ + auVar41._0_4_ + auVar41._4_4_;
          if (0.0 < fVar59) {
            uVar23 = local_168;
          }
          *param_4 = uVar23;
          bVar15 = fVar59 <= 0.0;
          goto LAB_0305e240;
        case 0x1b:
          goto switchD_0305df24_caseD_1b;
        case 0x1d:
switchD_0305df24_caseD_1d:
          *param_4 = uVar20;
          goto LAB_0305e0b4;
        case 0x1f:
          auVar42._0_4_ = fVar101 * fVar101;
          auVar42._4_4_ = fVar102 * fVar102;
          auVar42._8_4_ = fVar103 * fVar103;
          auVar42._12_4_ = fVar104 * fVar104;
          auVar108 = NEON_ext(auVar42,auVar42,8,1);
          auVar54._0_4_ = fVar59 * fVar59;
          auVar54._4_4_ = fVar98 * fVar98;
          auVar54._8_4_ = fVar99 * fVar99;
          auVar54._12_4_ = fVar100 * fVar100;
          auVar60 = NEON_ext(auVar54,auVar54,8,1);
          bVar15 = auVar108._0_4_ + auVar42._0_4_ + auVar42._4_4_ <
                   auVar60._0_4_ + auVar54._0_4_ + auVar54._4_4_;
          *param_5 = bVar15;
          if (!bVar15) {
            uVar23 = local_168;
          }
          *param_4 = uVar23;
          return 0;
        default:
          auVar107._12_4_ = fVar100;
          auVar107._8_4_ = fVar99;
          auVar107._4_4_ = fVar98;
          auVar107._0_4_ = fVar59;
          auVar106._12_4_ = fVar104;
          auVar106._8_4_ = fVar103;
          auVar106._4_4_ = fVar102;
          auVar106._0_4_ = fVar101;
        }
LAB_0305dd38:
        iVar63 = -(uint)(*pfVar22 == pfVar22[4]);
        iVar70 = -(uint)(pfVar22[1] == pfVar22[5]);
        iVar72 = -(uint)(pfVar22[2] == pfVar22[6]);
        iVar58 = -(uint)(pfVar22[3] == pfVar22[7]);
        if (CONCAT13((byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar63 >> 0x18) &
                     (byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar58 >> 0x18),
                     CONCAT12((byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar63 >> 0x10) &
                              (byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar58 >> 0x10),
                              CONCAT11((byte)((uint)iVar70 >> 8) & (byte)((uint)iVar63 >> 8) &
                                       (byte)((uint)iVar72 >> 8) & (byte)((uint)iVar58 >> 8),
                                       (byte)iVar70 & (byte)iVar63 & (byte)iVar72 & (byte)iVar58)))
            != 0) {
switchD_0305df24_caseD_1b:
          *param_4 = uVar20;
LAB_0305e23c:
          bVar15 = true;
LAB_0305e240:
          *param_5 = bVar15;
          return 0;
        }
        lVar16 = lVar16 + (long)(int)uVar20 * 0x90;
        fVar59 = *(float *)(lVar16 + 0x30);
        fVar61 = *(float *)(lVar16 + 0x34);
        fVar98 = *(float *)(lVar16 + 0x38);
        fVar55 = *(float *)(lVar16 + 0x40);
        fVar99 = *(float *)(lVar16 + 0x44);
        fVar100 = *(float *)(lVar16 + 0x48);
        fVar56 = (float)*(undefined8 *)(lVar16 + 0x50);
        fVar57 = (float)((ulong)*(undefined8 *)(lVar16 + 0x50) >> 0x20);
        fVar73 = (float)*(undefined8 *)(lVar16 + 0x60);
        fVar74 = (float)((ulong)*(undefined8 *)(lVar16 + 0x60) >> 0x20);
        fVar101 = (float)local_a0;
        fVar102 = (float)((ulong)local_a0 >> 0x20);
        fVar103 = (float)uStack_98;
        fVar104 = (float)((ulong)uStack_98 >> 0x20);
        auVar68._0_8_ =
             CONCAT44(local_c0._4_4_ * fVar59 + uStack_b0._4_4_ * fVar61 + fVar102 * fVar98,
                      (float)local_c0 * fVar59 + (float)uStack_b0 * fVar61 + fVar101 * fVar98);
        auVar68._8_4_ = (float)uStack_b8 * fVar59 + (float)uStack_a8 * fVar61 + fVar103 * fVar98;
        auVar68._12_4_ = uStack_b8._4_4_ * fVar59 + uStack_a8._4_4_ * fVar61 + fVar104 * fVar98;
        fVar59 = (float)*(undefined8 *)(lVar16 + 0x58);
        fVar61 = (float)*(undefined8 *)(lVar16 + 0x68);
        auVar80._0_8_ =
             CONCAT44(fVar102 * fVar100 + local_c0._4_4_ * fVar55 + uStack_b0._4_4_ * fVar99,
                      fVar101 * fVar100 + (float)local_c0 * fVar55 + (float)uStack_b0 * fVar99);
        auVar80._8_4_ = fVar103 * fVar100 + (float)uStack_b8 * fVar55 + (float)uStack_a8 * fVar99;
        auVar80._12_4_ = fVar104 * fVar100 + uStack_b8._4_4_ * fVar55 + uStack_a8._4_4_ * fVar99;
        uStack_90._0_4_ =
             fVar101 * fVar61 +
             (float)uStack_b0 * fVar74 + (float)uStack_90 + (float)local_c0 * fVar73;
        uStack_90._4_4_ =
             fVar102 * fVar61 + uStack_b0._4_4_ * fVar74 + uStack_90._4_4_ + local_c0._4_4_ * fVar73
        ;
        uStack_88._0_4_ =
             fVar103 * fVar61 +
             (float)uStack_a8 * fVar74 + (float)uStack_88 + (float)uStack_b8 * fVar73;
        uStack_88._4_4_ =
             fVar104 * fVar61 +
             uStack_a8._4_4_ * fVar74 + uStack_88._4_4_ + uStack_b8._4_4_ * fVar73;
        auVar86._0_8_ =
             CONCAT44(fVar102 * fVar59 + local_c0._4_4_ * fVar56 + uStack_b0._4_4_ * fVar57,
                      fVar101 * fVar59 + (float)local_c0 * fVar56 + (float)uStack_b0 * fVar57);
        auVar86._8_4_ = fVar103 * fVar59 + (float)uStack_b8 * fVar56 + (float)uStack_a8 * fVar57;
        auVar86._12_4_ = fVar104 * fVar59 + uStack_b8._4_4_ * fVar56 + uStack_a8._4_4_ * fVar57;
        uStack_b8 = auVar68._8_8_;
        uStack_a8 = auVar80._8_8_;
        uStack_98 = auVar86._8_8_;
        local_c0 = auVar68._0_8_;
        uStack_b0 = auVar80._0_8_;
        local_a0 = auVar86._0_8_;
        if ((bVar2 >> 4 & 1) != 0) {
          uVar13 = *(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x20) * 0x90;
          uVar11 = *(long *)(param_1 + 0x18) + (long)iVar43 * 0x90;
          auVar6._4_4_ = fStack_10c;
          auVar6._0_4_ = local_110;
          auVar6._8_4_ = fStack_108;
          auVar6._12_4_ = fStack_104;
          auVar7._4_4_ = fStack_fc;
          auVar7._0_4_ = local_100;
          auVar7._8_4_ = fStack_f8;
          auVar7._12_4_ = fStack_f4;
          if (uVar13 <= uVar11) {
            uVar11 = uVar13;
          }
          auVar108 = FUN_0305d490(auVar6,auVar7,uVar11,uVar13,&local_c0,&local_c0);
          puVar14 = (undefined4 *)((ulong)param_3 & 0xffffffff);
          uVar24 = uVar24 ^ auVar108._0_4_;
        }
        if (iVar26 == iVar43) goto LAB_0305e0c0;
        iVar43 = iVar43 + 1;
        fVar103 = auVar106._8_4_;
        fVar104 = auVar106._12_4_;
        fVar101 = auVar106._0_4_;
        fVar102 = auVar106._4_4_;
        fVar99 = auVar107._8_4_;
        fVar100 = auVar107._12_4_;
        fVar59 = auVar107._0_4_;
        fVar98 = auVar107._4_4_;
        fVar61 = (float)uStack_b0;
        fVar55 = uStack_b0._4_4_;
        fVar56 = (float)uStack_a8;
        fVar57 = uStack_a8._4_4_;
        fVar62 = (float)local_c0;
        fVar69 = local_c0._4_4_;
        fVar71 = (float)uStack_b8;
        fVar73 = uStack_b8._4_4_;
        fVar74 = (float)local_a0;
        fVar81 = local_a0._4_4_;
        fVar82 = (float)uStack_98;
        fVar83 = uStack_98._4_4_;
      }
      iVar63 = -(uint)(fVar59 == 0.0);
      iVar70 = -(uint)(fVar98 == 0.0);
      iVar72 = -(uint)(fVar99 == 0.0);
      if (CONCAT13((byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar63 >> 0x18) &
                   (byte)((uint)iVar72 >> 0x18),
                   CONCAT12((byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar63 >> 0x10) &
                            (byte)((uint)iVar72 >> 0x10),
                            CONCAT11((byte)((uint)iVar70 >> 8) & (byte)((uint)iVar63 >> 8) &
                                     (byte)((uint)iVar72 >> 8),
                                     (byte)iVar70 & (byte)iVar63 & (byte)iVar72))) == 0) {
        if (((ulong)puVar14 & 1) == 0) goto LAB_0305dea0;
        iVar63 = -(uint)(fVar73 == 0.0);
        iVar70 = -(uint)(fVar74 == 0.0);
        iVar72 = -(uint)(fVar44 == 0.0);
        iVar58 = -(uint)(fVar89 == 0.0);
        if (CONCAT13((byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar63 >> 0x18) &
                     (byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar58 >> 0x18),
                     CONCAT12((byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar63 >> 0x10) &
                              (byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar58 >> 0x10),
                              CONCAT11((byte)((uint)iVar70 >> 8) & (byte)((uint)iVar63 >> 8) &
                                       (byte)((uint)iVar72 >> 8) & (byte)((uint)iVar58 >> 8),
                                       (byte)iVar70 & (byte)iVar63 & (byte)iVar72 & (byte)iVar58)))
            != 0) {
          auVar106._12_4_ = fVar104;
          auVar106._8_4_ = fVar103;
          auVar106._4_4_ = fVar102;
          auVar106._0_4_ = fVar101;
          auVar34._0_4_ = -(uint)((uVar25 & 8) == 0);
          if ((uVar25 & 8) != 0) {
            local_168 = uVar20;
          }
          auVar34._4_4_ = auVar34._0_4_;
          auVar34._8_4_ = auVar34._0_4_;
          auVar34._12_4_ = auVar34._0_4_;
          auVar3._4_4_ = fVar98;
          auVar3._0_4_ = fVar59;
          auVar3._8_4_ = fVar99;
          auVar3._12_4_ = fVar100;
          auVar107 = auVar107 ^ (auVar107 ^ auVar3) & auVar34;
          goto LAB_0305dd38;
        }
        switch((uVar25 & 0x1c | uVar1) >> 2) {
        case 0:
          goto switchD_0305df8c_caseD_0;
        default:
          goto switchD_0305df8c_caseD_1;
        case 2:
          break;
        case 3:
        case 4:
          goto switchD_0305df8c_caseD_3;
        case 6:
        case 7:
          goto switchD_0305df8c_caseD_6;
        }
      }
switchD_0305df8c_caseD_2:
      local_e0 = CONCAT44(fStack_10c,local_110);
      uStack_d8 = CONCAT44(fStack_104,fStack_108);
      local_168 = uVar20;
      goto LAB_0305dd34;
    }
LAB_0305e0c0:
    uVar11 = 1;
  }
  return uVar11;
switchD_0305df4c_caseD_3:
  *param_4 = uVar23;
  goto LAB_0305e23c;
switchD_0305df8c_caseD_0:
  auVar107._12_4_ = fVar100;
  auVar107._8_4_ = fVar99;
  auVar107._4_4_ = fVar98;
  auVar107._0_4_ = fVar59;
LAB_0305dd34:
  uStack_c8 = CONCAT44(fStack_f4,fStack_f8);
  local_d0 = CONCAT44(fStack_fc,local_100);
  param_2 = (ulong)uVar20;
  goto LAB_0305dd38;
switchD_0305df8c_caseD_3:
  *param_4 = local_168;
LAB_0305e0b4:
  *param_5 = 0;
  return 0;
}


