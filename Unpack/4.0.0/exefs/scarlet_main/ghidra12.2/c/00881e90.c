/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00881e90; name: FUN_00881e90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00881e90(long param_1,undefined8 *param_2,long param_3,long param_4,uint param_5,uint param_6,
            int param_7,int param_8)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  unkbyte9 Var21;
  bool bVar22;
  uint uVar23;
  void *__dest;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  uint uVar36;
  long lVar37;
  uint uVar38;
  int iVar39;
  uint uVar40;
  ulong uVar41;
  long lVar42;
  uint uVar43;
  uint uVar44;
  undefined4 uVar45;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  int iVar61;
  float fVar62;
  float fVar63;
  float fVar71;
  float fVar73;
  undefined1 auVar64 [12];
  int iVar70;
  int iVar72;
  int iVar74;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar75;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  int iVar76;
  undefined1 auVar79 [12];
  int iVar88;
  int iVar90;
  int iVar92;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar77;
  float fVar78;
  float fVar89;
  float fVar91;
  float fVar93;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
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
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  undefined1 auVar126 [16];
  long local_320 [12];
  byte local_2c0 [48];
  float local_290 [12];
  undefined1 local_260 [8];
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  float local_230 [2];
  undefined8 uStack_228;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float local_200 [12];
  float local_1d0 [12];
  undefined8 local_1a0 [6];
  float local_170 [12];
  float local_140 [12];
  float local_110 [12];
  undefined8 local_e0 [6];
  float local_b0 [16];
  
  lVar42 = *(long *)(param_1 + 0x330);
  lVar33 = param_2[3];
  uVar44 = (uint)_DAT_03cab270;
  uVar47 = (uint)((ulong)_DAT_03cab270 >> 0x20);
  uVar48 = (uint)_UNK_03cab278;
  uVar49 = (uint)((ulong)_UNK_03cab278 >> 0x20);
  if (lVar33 == 0) {
    local_320[10] = 0;
    local_320[0xb] = 0;
    local_320[8] = 0;
    local_320[9] = 0;
    local_320[6] = 0;
    local_320[7] = 0;
    local_320[4] = 0;
    local_320[5] = 0;
    local_320[2] = 0;
    local_320[3] = 0;
    local_320[0] = 0;
    local_320[1] = 0;
  }
  else {
    local_320[0] = lVar33;
    if (*(long *)(param_1 + 0x338) != 0) {
      local_320[0] = *(long *)(param_1 + 0x338);
    }
    local_320[1] = lVar33;
    if (*(long *)(param_1 + 0x340) != 0) {
      local_320[1] = *(long *)(param_1 + 0x340);
    }
    local_320[2] = lVar33;
    if (*(long *)(param_1 + 0x348) != 0) {
      local_320[2] = *(long *)(param_1 + 0x348);
    }
    local_320[3] = lVar33;
    if (*(long *)(param_1 + 0x350) != 0) {
      local_320[3] = *(long *)(param_1 + 0x350);
    }
    local_320[4] = lVar33;
    if (*(long *)(param_1 + 0x358) != 0) {
      local_320[4] = *(long *)(param_1 + 0x358);
    }
    local_320[5] = lVar33;
    if (*(long *)(param_1 + 0x360) != 0) {
      local_320[5] = *(long *)(param_1 + 0x360);
    }
    local_320[6] = lVar33;
    if (*(long *)(param_1 + 0x368) != 0) {
      local_320[6] = *(long *)(param_1 + 0x368);
    }
    local_320[7] = lVar33;
    if (*(long *)(param_1 + 0x370) != 0) {
      local_320[7] = *(long *)(param_1 + 0x370);
    }
    local_320[8] = lVar33;
    if (*(long *)(param_1 + 0x378) != 0) {
      local_320[8] = *(long *)(param_1 + 0x378);
    }
    local_320[9] = lVar33;
    if (*(long *)(param_1 + 0x380) != 0) {
      local_320[9] = *(long *)(param_1 + 0x380);
    }
    local_320[10] = lVar33;
    if (*(long *)(param_1 + 0x388) != 0) {
      local_320[10] = *(long *)(param_1 + 0x388);
    }
    local_320[0xb] = lVar33;
    if (*(long *)(param_1 + 0x390) != 0) {
      local_320[0xb] = *(long *)(param_1 + 0x390);
    }
  }
  if (param_6 != 0) {
    uVar35 = 0;
    uVar24 = param_6;
    do {
      pfVar2 = (float *)(param_1 + uVar35 * 4);
      fVar62 = *pfVar2;
      fVar71 = pfVar2[1];
      fVar73 = pfVar2[2];
      fVar75 = pfVar2[3];
      uVar34 = uVar35 >> 2;
      lVar27 = uVar34 * 0x10;
      uVar23 = 0xf >> (ulong)((4 - param_6) + (int)uVar35 & 0x1f);
      local_b0[uVar34 * 4 + 2] = fVar73;
      local_b0[uVar34 * 4 + 3] = fVar75;
      local_b0[uVar34 * 4] = fVar62;
      local_b0[uVar34 * 4 + 1] = fVar71;
      uVar11 = *(undefined8 *)(pfVar2 + 0xc);
      bVar22 = 3 < uVar24;
      uVar24 = uVar24 - 4;
      if (bVar22) {
        uVar23 = 0xf;
      }
      local_e0[uVar34 * 2 + 1] = *(undefined8 *)(pfVar2 + 0xe);
      local_e0[uVar34 * 2] = uVar11;
      fVar77 = pfVar2[0x24];
      fVar89 = pfVar2[0x25];
      fVar91 = pfVar2[0x27];
      fVar62 = fVar77 * fVar62;
      fVar71 = fVar89 * fVar71;
      fVar73 = pfVar2[0x26] * fVar73;
      fVar75 = fVar91 * fVar75;
      local_110[uVar34 * 4 + 2] = pfVar2[0x26];
      local_110[uVar34 * 4 + 3] = fVar91;
      local_110[uVar34 * 4] = fVar77;
      local_110[uVar34 * 4 + 1] = fVar89;
      local_140[uVar34 * 4 + 2] = fVar73;
      local_140[uVar34 * 4 + 3] = fVar75;
      local_140[uVar34 * 4] = fVar62;
      local_140[uVar34 * 4 + 1] = fVar71;
      uVar36 = (int)uVar35 + 4;
      uVar35 = (ulong)uVar36;
      local_170[uVar34 * 4 + 2] = -fVar73;
      local_170[uVar34 * 4 + 3] = -fVar75;
      local_170[uVar34 * 4] = -fVar62;
      local_170[uVar34 * 4 + 1] = -fVar71;
      uVar11 = *(undefined8 *)(pfVar2 + 0x30);
      local_1a0[uVar34 * 2 + 1] = *(undefined8 *)(pfVar2 + 0x32);
      local_1a0[uVar34 * 2] = uVar11;
      uVar11 = *(undefined8 *)(pfVar2 + 0x90);
      *(undefined8 *)(local_260 + lVar27 + 8) = *(undefined8 *)(pfVar2 + 0x92);
      *(undefined8 *)(local_260 + lVar27) = uVar11;
      auVar126 = *(undefined1 (*) [16])(pfVar2 + 0x3c);
      *(long *)(local_290 + uVar34 * 4 + 2) = auVar126._8_8_;
      *(long *)(local_290 + uVar34 * 4) = auVar126._0_8_;
      *(uint *)(local_2c0 + lVar27 + 8) = -(uint)((uVar23 & uVar48) != 0);
      *(uint *)(local_2c0 + lVar27 + 0xc) = -(uint)((uVar23 & uVar49) != 0);
      *(uint *)(local_2c0 + lVar27) = -(uint)((uVar23 & uVar44) != 0);
      *(uint *)(local_2c0 + lVar27 + 4) = -(uint)((uVar23 & uVar47) != 0);
    } while (uVar36 < param_6);
  }
  uVar24 = param_5 >> 7;
  uVar23 = 0x80;
  if ((param_5 & 0x7f) != 0) {
    uVar24 = uVar24 + 1;
    uVar23 = param_5 & 0x7f;
  }
  if (uVar24 != 0) {
    auVar126 = NEON_fmov(0x3f800000,4);
    uVar35 = 0;
    do {
      uVar36 = uVar23;
      if (uVar35 != uVar24 - 1) {
        uVar36 = 0x80;
      }
      lVar37 = (ulong)(uint)(param_7 * 0x80 * (int)uVar35) * 4;
      iVar31 = 0;
      uVar34 = 0;
      lVar27 = param_4 + lVar37;
      uVar1 = uVar36;
      if (uVar36 < 2) {
        uVar1 = 1;
      }
      do {
        uVar32 = (uint)uVar34;
        if (param_6 == 0) {
          uVar45 = *(undefined4 *)(param_1 + 0x60);
          fVar62 = 1.0;
        }
        else {
          uVar38 = ~(1 << (ulong)(uVar32 & 3));
          uVar40 = uVar32 & 0xfffffffc;
          iVar39 = -(uint)((uVar38 & uVar44) != 0);
          iVar9 = -(uint)((uVar38 & uVar47) != 0);
          iVar10 = -(uint)((uVar38 & uVar48) != 0);
          iVar61 = -(uint)((uVar38 & uVar49) != 0);
          bVar52 = (byte)iVar61;
          bVar53 = (byte)((uint)iVar61 >> 8);
          bVar54 = (byte)((uint)iVar61 >> 0x10);
          bVar55 = (byte)((uint)iVar61 >> 0x18);
          uVar38 = 0;
          do {
            lVar28 = (ulong)(uVar38 + uVar32 * param_7) * 4;
            uVar25 = (ulong)(uVar38 >> 2);
            pfVar2 = (float *)(lVar42 + lVar28);
            fVar62 = *pfVar2;
            fVar71 = pfVar2[1];
            fVar73 = pfVar2[2];
            fVar75 = pfVar2[3];
            lVar26 = uVar25 * 0x10;
            local_1d0[uVar25 * 4 + 2] = fVar73;
            local_1d0[uVar25 * 4 + 3] = fVar75;
            local_1d0[uVar25 * 4] = fVar62;
            local_1d0[uVar25 * 4 + 1] = fVar71;
            pfVar2 = (float *)(param_3 + lVar37 + lVar28);
            fVar77 = *pfVar2;
            fVar89 = pfVar2[1];
            fVar91 = pfVar2[2];
            fVar93 = pfVar2[3];
            auVar59 = *(undefined1 (*) [16])(local_1a0 + uVar25 * 2);
            iVar61 = -(uint)(auVar59._0_4_ == ABS(fVar62));
            iVar70 = -(uint)(auVar59._4_4_ == ABS(fVar71));
            iVar72 = -(uint)(auVar59._8_4_ == ABS(fVar73));
            iVar74 = -(uint)(auVar59._12_4_ == ABS(fVar75));
            local_200[uVar25 * 4 + 2] = fVar91;
            local_200[uVar25 * 4 + 3] = fVar93;
            local_200[uVar25 * 4] = fVar77;
            local_200[uVar25 * 4 + 1] = fVar89;
            auVar56._0_4_ = ABS(fVar77);
            auVar56._4_4_ = ABS(fVar89);
            auVar56._8_4_ = ABS(fVar91);
            auVar56._12_4_ = ABS(fVar93);
            iVar76 = -(uint)(auVar56._0_4_ < auVar59._0_4_);
            iVar88 = -(uint)(auVar56._4_4_ < auVar59._4_4_);
            iVar90 = -(uint)(auVar56._8_4_ < auVar59._8_4_);
            iVar92 = -(uint)(auVar56._12_4_ < auVar59._12_4_);
            auVar66[0] = local_2c0[lVar26] & (byte)iVar61 & (byte)iVar76;
            auVar66[1] = local_2c0[lVar26 + 1] &
                         (byte)((uint)iVar61 >> 8) & (byte)((uint)iVar76 >> 8);
            auVar66[2] = local_2c0[lVar26 + 2] &
                         (byte)((uint)iVar61 >> 0x10) & (byte)((uint)iVar76 >> 0x10);
            auVar66[3] = local_2c0[lVar26 + 3] &
                         (byte)((uint)iVar61 >> 0x18) & (byte)((uint)iVar76 >> 0x18);
            auVar66[4] = local_2c0[lVar26 + 4] & (byte)iVar70 & (byte)iVar88;
            auVar66[5] = local_2c0[lVar26 + 5] &
                         (byte)((uint)iVar70 >> 8) & (byte)((uint)iVar88 >> 8);
            auVar66[6] = local_2c0[lVar26 + 6] &
                         (byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar88 >> 0x10);
            auVar66[7] = local_2c0[lVar26 + 7] &
                         (byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar88 >> 0x18);
            auVar66[8] = local_2c0[lVar26 + 8] & (byte)iVar72 & (byte)iVar90;
            auVar66[9] = local_2c0[lVar26 + 9] &
                         (byte)((uint)iVar72 >> 8) & (byte)((uint)iVar90 >> 8);
            auVar66[10] = local_2c0[lVar26 + 10] &
                          (byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar90 >> 0x10);
            auVar66[0xb] = local_2c0[lVar26 + 0xb] &
                           (byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar90 >> 0x18);
            auVar66[0xc] = local_2c0[lVar26 + 0xc] & (byte)iVar74 & (byte)iVar92;
            auVar66[0xd] = local_2c0[lVar26 + 0xd] &
                           (byte)((uint)iVar74 >> 8) & (byte)((uint)iVar92 >> 8);
            auVar66[0xe] = local_2c0[lVar26 + 0xe] &
                           (byte)((uint)iVar74 >> 0x10) & (byte)((uint)iVar92 >> 0x10);
            auVar66[0xf] = local_2c0[lVar26 + 0xf] &
                           (byte)((uint)iVar74 >> 0x18) & (byte)((uint)iVar92 >> 0x18);
            iVar61 = NEON_umaxv(auVar66,4);
            if (iVar61 == 0) {
              auVar59 = NEON_fmaxnm(auVar59,auVar56,4);
            }
            else {
              if ((uVar34 & 0xfffffffc) == 0) {
                auVar59 = ZEXT816(0);
                uVar43 = 4;
LAB_008822dc:
                uVar41 = (ulong)uVar43 - 4;
                uVar30 = uVar38;
                do {
                  uVar41 = uVar41 + 4;
                  pfVar2 = (float *)(lVar42 + (ulong)(param_7 * uVar43 + uVar30) * 4);
                  pfVar3 = (float *)(lVar42 + (ulong)(param_7 * (uVar43 + 1) + uVar30) * 4);
                  auVar67._0_4_ = ABS(*pfVar2);
                  auVar67._4_4_ = ABS(pfVar2[1]);
                  auVar67._8_4_ = ABS(pfVar2[2]);
                  auVar67._12_4_ = ABS(pfVar2[3]);
                  puVar4 = (undefined8 *)(lVar42 + (ulong)(param_7 * (uVar43 + 2) + uVar30) * 4);
                  uVar12 = puVar4[1];
                  uVar11 = *puVar4;
                  puVar4 = (undefined8 *)(lVar42 + (ulong)(param_7 * (uVar43 + 3) + uVar30) * 4);
                  uVar19 = puVar4[1];
                  uVar18 = *puVar4;
                  uVar30 = uVar30 + param_7 * 4;
                  auVar83._0_4_ = ABS(*pfVar3);
                  auVar83._4_4_ = ABS(pfVar3[1]);
                  auVar83._8_4_ = ABS(pfVar3[2]);
                  auVar83._12_4_ = ABS(pfVar3[3]);
                  fVar62 = ABS((float)((ulong)uVar11 >> 0x20));
                  fVar71 = ABS((float)uVar12);
                  fVar73 = ABS((float)((ulong)uVar12 >> 0x20));
                  auVar66 = NEON_fmaxnm(auVar67,auVar83,4);
                  auVar84._0_4_ = ABS((float)uVar18);
                  auVar84._4_4_ = ABS((float)((ulong)uVar18 >> 0x20));
                  auVar84._8_4_ = ABS((float)uVar19);
                  auVar84._12_4_ = ABS((float)((ulong)uVar19 >> 0x20));
                  auVar16[4] = SUB41(fVar62,0);
                  auVar16._0_4_ = ABS((float)uVar11);
                  auVar16[5] = (char)((uint)fVar62 >> 8);
                  auVar16[6] = (char)((uint)fVar62 >> 0x10);
                  auVar16[7] = (char)((uint)fVar62 >> 0x18);
                  auVar16[8] = SUB41(fVar71,0);
                  auVar16[9] = (char)((uint)fVar71 >> 8);
                  auVar16[10] = (char)((uint)fVar71 >> 0x10);
                  auVar16[0xb] = (char)((uint)fVar71 >> 0x18);
                  auVar16[0xc] = SUB41(fVar73,0);
                  auVar16[0xd] = (char)((uint)fVar73 >> 8);
                  auVar16[0xe] = (char)((uint)fVar73 >> 0x10);
                  auVar16[0xf] = (char)((uint)fVar73 >> 0x18);
                  auVar82 = NEON_fmaxnm(auVar16,auVar84,4);
                  auVar66 = NEON_fmaxnm(auVar66,auVar82,4);
                  auVar59 = NEON_fmaxnm(auVar66,auVar59,4);
                } while (uVar41 < 0x7c);
              }
              else {
                auVar59 = ZEXT816(0);
                uVar41 = 0;
                uVar43 = uVar38;
                do {
                  uVar29 = uVar41;
                  uVar41 = uVar29 + 4;
                  pfVar2 = (float *)(lVar42 + (ulong)uVar43 * 4);
                  pfVar3 = (float *)(lVar42 + (ulong)(param_7 + uVar43) * 4);
                  auVar65._0_4_ = ABS(*pfVar2);
                  auVar65._4_4_ = ABS(pfVar2[1]);
                  auVar65._8_4_ = ABS(pfVar2[2]);
                  auVar65._12_4_ = ABS(pfVar2[3]);
                  puVar4 = (undefined8 *)(lVar42 + (ulong)(param_7 * 2 + uVar43) * 4);
                  uVar12 = puVar4[1];
                  uVar11 = *puVar4;
                  puVar4 = (undefined8 *)(lVar42 + (ulong)(param_7 * 3 + uVar43) * 4);
                  uVar19 = puVar4[1];
                  uVar18 = *puVar4;
                  uVar43 = uVar43 + param_7 * 4;
                  auVar80._0_4_ = ABS(*pfVar3);
                  auVar80._4_4_ = ABS(pfVar3[1]);
                  auVar80._8_4_ = ABS(pfVar3[2]);
                  auVar80._12_4_ = ABS(pfVar3[3]);
                  fVar62 = ABS((float)((ulong)uVar11 >> 0x20));
                  fVar71 = ABS((float)uVar12);
                  fVar73 = ABS((float)((ulong)uVar12 >> 0x20));
                  auVar66 = NEON_fmaxnm(auVar65,auVar80,4);
                  auVar81._0_4_ = ABS((float)uVar18);
                  auVar81._4_4_ = ABS((float)((ulong)uVar18 >> 0x20));
                  auVar81._8_4_ = ABS((float)uVar19);
                  auVar81._12_4_ = ABS((float)((ulong)uVar19 >> 0x20));
                  auVar82[4] = SUB41(fVar62,0);
                  auVar82._0_4_ = ABS((float)uVar11);
                  auVar82[5] = (char)((uint)fVar62 >> 8);
                  auVar82[6] = (char)((uint)fVar62 >> 0x10);
                  auVar82[7] = (char)((uint)fVar62 >> 0x18);
                  auVar82[8] = SUB41(fVar71,0);
                  auVar82[9] = (char)((uint)fVar71 >> 8);
                  auVar82[10] = (char)((uint)fVar71 >> 0x10);
                  auVar82[0xb] = (char)((uint)fVar71 >> 0x18);
                  auVar82[0xc] = SUB41(fVar73,0);
                  auVar82[0xd] = (char)((uint)fVar73 >> 8);
                  auVar82[0xe] = (char)((uint)fVar73 >> 0x10);
                  auVar82[0xf] = (char)((uint)fVar73 >> 0x18);
                  auVar82 = NEON_fmaxnm(auVar82,auVar81,4);
                  auVar66 = NEON_fmaxnm(auVar66,auVar82,4);
                  auVar59 = NEON_fmaxnm(auVar66,auVar59,4);
                } while (uVar41 < uVar40);
                uVar43 = (int)uVar29 + 8;
                if (uVar43 < 0x80) goto LAB_008822dc;
              }
              pfVar2 = (float *)(lVar42 + (ulong)(uVar38 + uVar40 * param_7) * 4);
              pfVar3 = (float *)(lVar42 + (ulong)(uVar38 + (uVar40 | 1) * param_7) * 4);
              fVar62 = ABS(*pfVar2);
              fVar71 = ABS(pfVar2[1]);
              fVar73 = ABS(pfVar2[2]);
              fVar75 = ABS(pfVar2[3]);
              puVar4 = (undefined8 *)(lVar42 + (ulong)(uVar38 + (uVar40 | 2) * param_7) * 4);
              uVar12 = puVar4[1];
              uVar11 = *puVar4;
              puVar4 = (undefined8 *)(lVar42 + (ulong)(uVar38 + (uVar32 | 3) * param_7) * 4);
              uVar19 = puVar4[1];
              uVar18 = *puVar4;
              fVar77 = ABS(*pfVar3);
              fVar89 = ABS(pfVar3[1]);
              fVar91 = ABS(pfVar3[2]);
              fVar93 = ABS(pfVar3[3]);
              bVar106 = (byte)iVar39;
              bVar107 = (byte)((uint)iVar39 >> 8);
              bVar108 = (byte)((uint)iVar39 >> 0x10);
              bVar109 = (byte)((uint)iVar39 >> 0x18);
              fVar63 = (float)CONCAT13(bVar109 & (byte)((uint)fVar62 >> 0x18),
                                       CONCAT12(bVar108 & (byte)((uint)fVar62 >> 0x10),
                                                CONCAT11(bVar107 & (byte)((uint)fVar62 >> 8),
                                                         bVar106 & SUB41(fVar62,0))));
              auVar64._0_8_ =
                   CONCAT17(bVar109 & (byte)((uint)fVar71 >> 0x18),
                            CONCAT16(bVar108 & (byte)((uint)fVar71 >> 0x10),
                                     CONCAT15(bVar107 & (byte)((uint)fVar71 >> 8),
                                              CONCAT14(bVar106 & SUB41(fVar71,0),fVar63))));
              auVar64[8] = bVar106 & SUB41(fVar73,0);
              auVar64[9] = bVar107 & (byte)((uint)fVar73 >> 8);
              auVar64[10] = bVar108 & (byte)((uint)fVar73 >> 0x10);
              auVar64[0xb] = bVar109 & (byte)((uint)fVar73 >> 0x18);
              auVar68[0xc] = bVar106 & SUB41(fVar75,0);
              auVar68._0_12_ = auVar64;
              auVar68[0xd] = bVar107 & (byte)((uint)fVar75 >> 8);
              auVar68[0xe] = bVar108 & (byte)((uint)fVar75 >> 0x10);
              auVar68[0xf] = bVar109 & (byte)((uint)fVar75 >> 0x18);
              fVar62 = ABS((float)uVar11);
              fVar71 = ABS((float)((ulong)uVar11 >> 0x20));
              fVar73 = ABS((float)uVar12);
              fVar75 = ABS((float)((ulong)uVar12 >> 0x20));
              bVar106 = (byte)iVar9;
              bVar107 = (byte)((uint)iVar9 >> 8);
              bVar108 = (byte)((uint)iVar9 >> 0x10);
              bVar109 = (byte)((uint)iVar9 >> 0x18);
              fVar78 = (float)CONCAT13(bVar109 & (byte)((uint)fVar77 >> 0x18),
                                       CONCAT12(bVar108 & (byte)((uint)fVar77 >> 0x10),
                                                CONCAT11(bVar107 & (byte)((uint)fVar77 >> 8),
                                                         bVar106 & SUB41(fVar77,0))));
              auVar79._0_8_ =
                   CONCAT17(bVar109 & (byte)((uint)fVar89 >> 0x18),
                            CONCAT16(bVar108 & (byte)((uint)fVar89 >> 0x10),
                                     CONCAT15(bVar107 & (byte)((uint)fVar89 >> 8),
                                              CONCAT14(bVar106 & SUB41(fVar89,0),fVar78))));
              auVar79[8] = bVar106 & SUB41(fVar91,0);
              auVar79[9] = bVar107 & (byte)((uint)fVar91 >> 8);
              auVar79[10] = bVar108 & (byte)((uint)fVar91 >> 0x10);
              auVar79[0xb] = bVar109 & (byte)((uint)fVar91 >> 0x18);
              auVar85[0xc] = bVar106 & SUB41(fVar93,0);
              auVar85._0_12_ = auVar79;
              auVar85[0xd] = bVar107 & (byte)((uint)fVar93 >> 8);
              auVar85[0xe] = bVar108 & (byte)((uint)fVar93 >> 0x10);
              auVar85[0xf] = bVar109 & (byte)((uint)fVar93 >> 0x18);
              fVar77 = ABS((float)uVar18);
              fVar89 = ABS((float)((ulong)uVar18 >> 0x20));
              fVar91 = ABS((float)uVar19);
              fVar93 = ABS((float)((ulong)uVar19 >> 0x20));
              bVar106 = (byte)iVar10;
              bVar94 = bVar106 & SUB41(fVar62,0);
              bVar107 = (byte)((uint)iVar10 >> 8);
              bVar95 = bVar107 & (byte)((uint)fVar62 >> 8);
              bVar108 = (byte)((uint)iVar10 >> 0x10);
              bVar96 = bVar108 & (byte)((uint)fVar62 >> 0x10);
              bVar109 = (byte)((uint)iVar10 >> 0x18);
              bVar97 = bVar109 & (byte)((uint)fVar62 >> 0x18);
              bVar98 = bVar106 & SUB41(fVar71,0);
              bVar99 = bVar107 & (byte)((uint)fVar71 >> 8);
              bVar100 = bVar108 & (byte)((uint)fVar71 >> 0x10);
              bVar101 = bVar109 & (byte)((uint)fVar71 >> 0x18);
              bVar102 = bVar106 & SUB41(fVar73,0);
              bVar103 = bVar107 & (byte)((uint)fVar73 >> 8);
              bVar104 = bVar108 & (byte)((uint)fVar73 >> 0x10);
              bVar105 = bVar109 & (byte)((uint)fVar73 >> 0x18);
              bVar106 = bVar106 & SUB41(fVar75,0);
              bVar107 = bVar107 & (byte)((uint)fVar75 >> 8);
              bVar108 = bVar108 & (byte)((uint)fVar75 >> 0x10);
              bVar109 = bVar109 & (byte)((uint)fVar75 >> 0x18);
              bVar110 = bVar52 & SUB41(fVar77,0);
              bVar111 = bVar53 & (byte)((uint)fVar77 >> 8);
              bVar112 = bVar54 & (byte)((uint)fVar77 >> 0x10);
              bVar113 = bVar55 & (byte)((uint)fVar77 >> 0x18);
              bVar114 = bVar52 & SUB41(fVar89,0);
              bVar115 = bVar53 & (byte)((uint)fVar89 >> 8);
              bVar116 = bVar54 & (byte)((uint)fVar89 >> 0x10);
              bVar117 = bVar55 & (byte)((uint)fVar89 >> 0x18);
              bVar118 = bVar52 & SUB41(fVar91,0);
              bVar119 = bVar53 & (byte)((uint)fVar91 >> 8);
              bVar120 = bVar54 & (byte)((uint)fVar91 >> 0x10);
              bVar121 = bVar55 & (byte)((uint)fVar91 >> 0x18);
              bVar122 = bVar52 & SUB41(fVar93,0);
              bVar123 = bVar53 & (byte)((uint)fVar93 >> 8);
              bVar124 = bVar54 & (byte)((uint)fVar93 >> 0x10);
              bVar125 = bVar55 & (byte)((uint)fVar93 >> 0x18);
              auVar20._4_4_ =
                   -(uint)((float)((ulong)auVar79._0_8_ >> 0x20) <=
                          (float)((ulong)auVar64._0_8_ >> 0x20));
              auVar20._0_4_ = -(uint)(fVar78 <= fVar63);
              auVar20._8_4_ = -(uint)(auVar79._8_4_ <= auVar64._8_4_);
              auVar20._12_4_ = -(uint)(auVar85._12_4_ <= auVar68._12_4_);
              auVar68 = auVar68 ^ (auVar68 ^ auVar85) & ~auVar20;
              auVar86._12_4_ =
                   -(uint)((float)CONCAT13(bVar125,CONCAT12(bVar124,CONCAT11(bVar123,bVar122))) <=
                          (float)CONCAT13(bVar109,CONCAT12(bVar108,CONCAT11(bVar107,bVar106))));
              auVar86._8_4_ =
                   -(uint)((float)CONCAT13(bVar121,CONCAT12(bVar120,CONCAT11(bVar119,bVar118))) <=
                          (float)CONCAT13(bVar105,CONCAT12(bVar104,CONCAT11(bVar103,bVar102))));
              auVar86._4_4_ =
                   -(uint)((float)CONCAT13(bVar117,CONCAT12(bVar116,CONCAT11(bVar115,bVar114))) <=
                          (float)CONCAT13(bVar101,CONCAT12(bVar100,CONCAT11(bVar99,bVar98))));
              auVar86._0_4_ =
                   -(uint)((float)CONCAT13(bVar113,CONCAT12(bVar112,CONCAT11(bVar111,bVar110))) <=
                          (float)CONCAT13(bVar97,CONCAT12(bVar96,CONCAT11(bVar95,bVar94))));
              auVar13[1] = bVar95;
              auVar13[0] = bVar94;
              auVar13[2] = bVar96;
              auVar13[3] = bVar97;
              auVar13[4] = bVar98;
              auVar13[5] = bVar99;
              auVar13[6] = bVar100;
              auVar13[7] = bVar101;
              auVar13[8] = bVar102;
              auVar13[9] = bVar103;
              auVar13[10] = bVar104;
              auVar13[0xb] = bVar105;
              auVar13[0xc] = bVar106;
              auVar13[0xd] = bVar107;
              auVar13[0xe] = bVar108;
              auVar13[0xf] = bVar109;
              auVar17[1] = bVar111;
              auVar17[0] = bVar110;
              auVar17[2] = bVar112;
              auVar17[3] = bVar113;
              auVar17[4] = bVar114;
              auVar17[5] = bVar115;
              auVar17[6] = bVar116;
              auVar17[7] = bVar117;
              auVar17[8] = bVar118;
              auVar17[9] = bVar119;
              auVar17[10] = bVar120;
              auVar17[0xb] = bVar121;
              auVar17[0xc] = bVar122;
              auVar17[0xd] = bVar123;
              auVar17[0xe] = bVar124;
              auVar17[0xf] = bVar125;
              auVar87[1] = bVar111;
              auVar87[0] = bVar110;
              auVar87[2] = bVar112;
              auVar87[3] = bVar113;
              auVar87[4] = bVar114;
              auVar87[5] = bVar115;
              auVar87[6] = bVar116;
              auVar87[7] = bVar117;
              auVar87[8] = bVar118;
              auVar87[9] = bVar119;
              auVar87[10] = bVar120;
              auVar87[0xb] = bVar121;
              auVar87[0xc] = bVar122;
              auVar87[0xd] = bVar123;
              auVar87[0xe] = bVar124;
              auVar87[0xf] = bVar125;
              auVar87 = auVar87 ^ (auVar17 ^ auVar13) & auVar86;
              iVar61 = -(uint)(auVar87._4_4_ <= auVar68._4_4_);
              iVar70 = -(uint)(auVar87._8_4_ <= auVar68._8_4_);
              iVar72 = -(uint)(auVar87._12_4_ <= auVar68._12_4_);
              auVar14[4] = (char)iVar61;
              auVar14._0_4_ = -(uint)(auVar87._0_4_ <= auVar68._0_4_);
              auVar14[5] = (char)((uint)iVar61 >> 8);
              auVar14[6] = (char)((uint)iVar61 >> 0x10);
              auVar14[7] = (char)((uint)iVar61 >> 0x18);
              auVar14[8] = (char)iVar70;
              auVar14[9] = (char)((uint)iVar70 >> 8);
              auVar14[10] = (char)((uint)iVar70 >> 0x10);
              auVar14[0xb] = (char)((uint)iVar70 >> 0x18);
              auVar14[0xc] = (char)iVar72;
              auVar14[0xd] = (char)((uint)iVar72 >> 8);
              auVar14[0xe] = (char)((uint)iVar72 >> 0x10);
              auVar14[0xf] = (char)((uint)iVar72 >> 0x18);
              auVar59 = NEON_fmaxnm(auVar59,auVar68 ^ (auVar68 ^ auVar87) & ~auVar14,4);
              auVar59 = NEON_fmaxnm(auVar56,auVar59,4);
            }
            auVar56 = *(undefined1 (*) [16])(local_b0 + uVar25 * 4);
            auVar66 = NEON_frecpe(auVar59,4);
            local_1a0[uVar25 * 2 + 1] = auVar59._8_8_;
            local_1a0[uVar25 * 2] = auVar59._0_8_;
            auVar59._0_4_ = auVar66._0_4_ * auVar56._0_4_ + -0.0026;
            auVar59._4_4_ = auVar66._4_4_ * auVar56._4_4_ + -0.0026;
            auVar59._8_4_ = auVar66._8_4_ * auVar56._8_4_ + -0.0026;
            auVar59._12_4_ = auVar66._12_4_ * auVar56._12_4_ + -0.0026;
            auVar59 = NEON_fminnm(auVar59,auVar126,4);
            uVar38 = uVar38 + 4;
            *(long *)(local_230 + uVar25 * 4 + 2) = auVar59._8_8_;
            *(long *)(local_230 + uVar25 * 4) = auVar59._0_8_;
          } while (uVar38 < param_6);
          uVar45 = *(undefined4 *)(param_1 + 0x60);
          if (param_6 == 0) {
            fVar62 = 1.0;
          }
          else {
            if (param_6 == 1) {
              fVar62 = 1.0;
              uVar25 = 0;
            }
            else {
              fVar62 = 1.0;
              uVar25 = 0;
              do {
                uVar40 = (uint)uVar25;
                uVar25 = (ulong)(uVar40 >> 2);
                uVar38 = uVar40 & 2;
                fVar71 = *(float *)((ulong)(local_230 + uVar25 * 4) | (ulong)(uVar38 >> 1) << 3);
                if (fVar71 < fVar62) {
                  uVar45 = *(undefined4 *)((ulong)(local_260 + uVar25 * 0x10) | (ulong)uVar38 << 2);
                  fVar62 = fVar71;
                }
                fVar71 = *(float *)((ulong)(local_230 + uVar25 * 4) | (ulong)(uVar38 | 1) << 2);
                if (fVar71 < fVar62) {
                  uVar45 = *(undefined4 *)
                            ((ulong)(local_260 + uVar25 * 0x10) | (ulong)(uVar38 | 1) << 2);
                  fVar62 = fVar71;
                }
                uVar25 = (ulong)(uVar40 + 2);
              } while ((param_6 & 0xfffffffe) != uVar40 + 2);
            }
            if ((param_6 & 1) != 0) {
              uVar41 = (ulong)((uint)uVar25 & 3);
              fVar71 = *(float *)((ulong)(local_230 + (uVar25 >> 2) * 4) | uVar41 << 2);
              if (fVar71 < fVar62) {
                uVar45 = *(undefined4 *)((ulong)(local_260 + (uVar25 >> 2) * 0x10) | uVar41 << 2);
                fVar62 = fVar71;
              }
            }
          }
        }
        if (param_8 == 1) {
          uStack_228._0_4_ = fVar62;
          uStack_228._4_4_ = fVar62;
          local_230[0] = fVar62;
          local_230[1] = fVar62;
          fStack_218 = fVar62;
          fStack_214 = fVar62;
          fStack_220 = fVar62;
          fStack_21c = fVar62;
          fStack_208 = fVar62;
          fStack_204 = fVar62;
          local_210 = fVar62;
          fStack_20c = fVar62;
          uStack_238 = uVar45;
          uStack_234 = uVar45;
          local_240 = uVar45;
          uStack_23c = uVar45;
          uStack_258 = uVar45;
          uStack_254 = uVar45;
          local_260._0_4_ = uVar45;
          local_260._4_4_ = uVar45;
          uStack_248 = uVar45;
          uStack_244 = uVar45;
          uStack_250 = uVar45;
          uStack_24c = uVar45;
        }
        if (param_6 != 0) {
          if (lVar33 == 0) {
            uVar25 = 0;
            do {
              uVar41 = uVar25 >> 2;
              fVar62 = local_230[uVar41 * 4];
              fVar71 = local_230[uVar41 * 4 + 1];
              fVar73 = local_230[uVar41 * 4 + 2];
              fVar75 = local_230[uVar41 * 4 + 3];
              fVar77 = local_290[uVar41 * 4];
              fVar89 = local_290[uVar41 * 4 + 1];
              fVar91 = local_290[uVar41 * 4 + 2];
              fVar93 = local_290[uVar41 * 4 + 3];
              uVar11 = *(undefined8 *)(local_260 + uVar41 * 0x10 + 8);
              auVar58._0_4_ = -(uint)(fVar62 < fVar77);
              auVar58._4_4_ = -(uint)(fVar71 < fVar89);
              auVar58._8_4_ = -(uint)(fVar73 < fVar91);
              auVar58._12_4_ = -(uint)(fVar75 < fVar93);
              auVar7[9] = (char)((ulong)uVar11 >> 8);
              auVar7._0_9_ = *(unkbyte9 *)(local_260 + uVar41 * 0x10);
              auVar7[10] = (char)((ulong)uVar11 >> 0x10);
              auVar7[0xb] = (char)((ulong)uVar11 >> 0x18);
              auVar7[0xc] = (char)((ulong)uVar11 >> 0x20);
              auVar7[0xd] = (char)((ulong)uVar11 >> 0x28);
              auVar7[0xe] = (char)((ulong)uVar11 >> 0x30);
              auVar7[0xf] = (char)((ulong)uVar11 >> 0x38);
              auVar59 = *(undefined1 (*) [16])(local_e0 + uVar41 * 2) ^
                        (*(undefined1 (*) [16])(local_e0 + uVar41 * 2) ^ auVar7) & ~auVar58;
              fVar62 = (float)((uint)fVar62 ^
                              ((uint)fVar62 ^ (uint)(fVar77 + (fVar62 - fVar77) * auVar59._0_4_)) &
                              ~-(uint)(fVar62 == fVar77));
              fVar71 = (float)((uint)fVar71 ^
                              ((uint)fVar71 ^ (uint)(fVar89 + (fVar71 - fVar89) * auVar59._4_4_)) &
                              ~-(uint)(fVar71 == fVar89));
              fVar73 = (float)((uint)fVar73 ^
                              ((uint)fVar73 ^ (uint)(fVar91 + (fVar73 - fVar91) * auVar59._8_4_)) &
                              ~-(uint)(fVar73 == fVar91));
              fVar75 = (float)((uint)fVar75 ^
                              ((uint)fVar75 ^ (uint)(fVar93 + (fVar75 - fVar93) * auVar59._12_4_)) &
                              ~-(uint)(fVar75 == fVar93));
              auVar59 = *(undefined1 (*) [16])(local_140 + uVar41 * 4);
              auVar51._0_4_ =
                   fVar62 * (float)*(undefined8 *)(local_110 + uVar41 * 4) * local_1d0[uVar41 * 4];
              auVar51._4_4_ =
                   fVar71 * (float)((ulong)*(undefined8 *)(local_110 + uVar41 * 4) >> 0x20) *
                            local_1d0[uVar41 * 4 + 1];
              auVar51._8_4_ =
                   fVar73 * (float)*(undefined8 *)(local_110 + uVar41 * 4 + 2) *
                            local_1d0[uVar41 * 4 + 2];
              auVar51._12_4_ =
                   fVar75 * (float)((ulong)*(undefined8 *)(local_110 + uVar41 * 4 + 2) >> 0x20) *
                            local_1d0[uVar41 * 4 + 3];
              local_290[uVar41 * 4 + 2] = fVar73;
              local_290[uVar41 * 4 + 3] = fVar75;
              local_290[uVar41 * 4] = fVar62;
              local_290[uVar41 * 4 + 1] = fVar71;
              iVar39 = (int)uVar25;
              auVar69._4_4_ = -(uint)(ABS(auVar51._4_4_) <= auVar59._4_4_);
              auVar69._0_4_ = -(uint)(ABS(auVar51._0_4_) <= auVar59._0_4_);
              uVar11 = *(undefined8 *)(local_170 + uVar41 * 4 + 2);
              auVar60._0_4_ = -(uint)(0.0 <= auVar51._0_4_);
              auVar60._4_4_ = -(uint)(0.0 <= auVar51._4_4_);
              auVar60._8_4_ = -(uint)(0.0 <= auVar51._8_4_);
              auVar60._12_4_ = -(uint)(0.0 <= auVar51._12_4_);
              uVar32 = iVar39 + 4;
              uVar25 = (ulong)uVar32;
              auVar69._8_4_ = -(uint)(ABS(auVar51._8_4_) <= auVar59._8_4_);
              auVar56 = *(undefined1 (*) [16])(local_200 + uVar41 * 4);
              lVar26 = (ulong)(uint)(iVar31 + iVar39) * 4;
              auVar8[9] = (char)((ulong)uVar11 >> 8);
              auVar8._0_9_ = *(unkbyte9 *)(local_170 + uVar41 * 4);
              auVar8[10] = (char)((ulong)uVar11 >> 0x10);
              auVar8[0xb] = (char)((ulong)uVar11 >> 0x18);
              auVar8[0xc] = (char)((ulong)uVar11 >> 0x20);
              auVar8[0xd] = (char)((ulong)uVar11 >> 0x28);
              auVar8[0xe] = (char)((ulong)uVar11 >> 0x30);
              auVar8[0xf] = (char)((ulong)uVar11 >> 0x38);
              auVar69._12_4_ = -(uint)(ABS(auVar51._12_4_) <= auVar59._12_4_);
              puVar4 = (undefined8 *)(lVar42 + lVar26);
              puVar4[1] = auVar56._8_8_;
              *puVar4 = auVar56._0_8_;
              auVar51 = auVar51 ^ (auVar51 ^ auVar59 ^ (auVar59 ^ auVar8) & ~auVar60) & ~auVar69;
              puVar4 = (undefined8 *)(lVar27 + lVar26);
              puVar4[1] = auVar51._8_8_;
              *puVar4 = auVar51._0_8_;
            } while (uVar32 < param_6);
          }
          else {
            uVar25 = 0;
            do {
              uVar41 = uVar25 >> 2;
              fVar62 = local_230[uVar41 * 4];
              fVar71 = local_230[uVar41 * 4 + 1];
              fVar73 = local_230[uVar41 * 4 + 2];
              fVar75 = local_230[uVar41 * 4 + 3];
              fVar77 = local_290[uVar41 * 4];
              fVar89 = local_290[uVar41 * 4 + 1];
              fVar91 = local_290[uVar41 * 4 + 2];
              fVar93 = local_290[uVar41 * 4 + 3];
              uVar11 = *(undefined8 *)(local_260 + uVar41 * 0x10 + 8);
              auVar57._0_4_ = -(uint)(fVar62 < fVar77);
              auVar57._4_4_ = -(uint)(fVar71 < fVar89);
              auVar57._8_4_ = -(uint)(fVar73 < fVar91);
              auVar57._12_4_ = -(uint)(fVar75 < fVar93);
              lVar26 = local_320[uVar25];
              auVar5[9] = (char)((ulong)uVar11 >> 8);
              auVar5._0_9_ = *(unkbyte9 *)(local_260 + uVar41 * 0x10);
              auVar5[10] = (char)((ulong)uVar11 >> 0x10);
              auVar5[0xb] = (char)((ulong)uVar11 >> 0x18);
              auVar5[0xc] = (char)((ulong)uVar11 >> 0x20);
              auVar5[0xd] = (char)((ulong)uVar11 >> 0x28);
              auVar5[0xe] = (char)((ulong)uVar11 >> 0x30);
              auVar5[0xf] = (char)((ulong)uVar11 >> 0x38);
              auVar59 = *(undefined1 (*) [16])(local_e0 + uVar41 * 2) ^
                        (*(undefined1 (*) [16])(local_e0 + uVar41 * 2) ^ auVar5) & ~auVar57;
              fVar62 = (float)((uint)fVar62 ^
                              ((uint)fVar62 ^ (uint)(fVar77 + (fVar62 - fVar77) * auVar59._0_4_)) &
                              ~-(uint)(fVar62 == fVar77));
              fVar71 = (float)((uint)fVar71 ^
                              ((uint)fVar71 ^ (uint)(fVar89 + (fVar71 - fVar89) * auVar59._4_4_)) &
                              ~-(uint)(fVar71 == fVar89));
              fVar73 = (float)((uint)fVar73 ^
                              ((uint)fVar73 ^ (uint)(fVar91 + (fVar73 - fVar91) * auVar59._8_4_)) &
                              ~-(uint)(fVar73 == fVar91));
              fVar75 = (float)((uint)fVar75 ^
                              ((uint)fVar75 ^ (uint)(fVar93 + (fVar75 - fVar93) * auVar59._12_4_)) &
                              ~-(uint)(fVar75 == fVar93));
              fVar77 = fVar62 * (float)*(undefined8 *)(local_110 + uVar41 * 4);
              fVar89 = fVar71 * (float)((ulong)*(undefined8 *)(local_110 + uVar41 * 4) >> 0x20);
              fVar91 = fVar73 * (float)*(undefined8 *)(local_110 + uVar41 * 4 + 2);
              fVar93 = fVar75 * (float)((ulong)*(undefined8 *)(local_110 + uVar41 * 4 + 2) >> 0x20);
              uVar12 = *(undefined8 *)(local_140 + uVar41 * 4 + 2);
              uVar11 = *(undefined8 *)(local_140 + uVar41 * 4);
              Var21 = *(unkbyte9 *)(local_140 + uVar41 * 4);
              lVar28 = (ulong)((int)(uVar35 << 7) + uVar32) * 4;
              auVar50._0_4_ = fVar77 * local_1d0[uVar41 * 4];
              auVar50._4_4_ = fVar89 * local_1d0[uVar41 * 4 + 1];
              auVar50._8_4_ = fVar91 * local_1d0[uVar41 * 4 + 2];
              auVar50._12_4_ = fVar93 * local_1d0[uVar41 * 4 + 3];
              local_290[uVar41 * 4 + 2] = fVar73;
              local_290[uVar41 * 4 + 3] = fVar75;
              local_290[uVar41 * 4] = fVar62;
              local_290[uVar41 * 4 + 1] = fVar71;
              auVar59 = *(undefined1 (*) [16])(local_170 + uVar41 * 4);
              iVar61 = (int)uVar25;
              *(float *)(lVar26 + lVar28) = fVar77;
              iVar39 = -(uint)(ABS(auVar50._4_4_) <= (float)((ulong)uVar11 >> 0x20));
              *(float *)(local_320[iVar61 + 1] + lVar28) = fVar89;
              iVar9 = -(uint)(ABS(auVar50._8_4_) <= (float)uVar12);
              auVar46._0_4_ = -(uint)(0.0 <= auVar50._0_4_);
              auVar46._4_4_ = -(uint)(0.0 <= auVar50._4_4_);
              auVar46._8_4_ = -(uint)(0.0 <= auVar50._8_4_);
              auVar46._12_4_ = -(uint)(0.0 <= auVar50._12_4_);
              *(float *)(local_320[iVar61 + 2] + lVar28) = fVar91;
              iVar10 = -(uint)(ABS(auVar50._12_4_) <= (float)((ulong)uVar12 >> 0x20));
              *(float *)(local_320[iVar61 + 3] + lVar28) = fVar93;
              auVar6[9] = (char)((ulong)uVar12 >> 8);
              auVar6._0_9_ = Var21;
              auVar6[10] = (char)((ulong)uVar12 >> 0x10);
              auVar6[0xb] = (char)((ulong)uVar12 >> 0x18);
              auVar6[0xc] = (char)((ulong)uVar12 >> 0x20);
              auVar6[0xd] = (char)((ulong)uVar12 >> 0x28);
              auVar6[0xe] = (char)((ulong)uVar12 >> 0x30);
              auVar6[0xf] = (char)((ulong)uVar12 >> 0x38);
              auVar59 = auVar59 ^ (auVar59 ^ auVar6) & auVar46;
              uVar25 = (ulong)(iVar61 + 4U);
              auVar15[4] = (char)iVar39;
              auVar15._0_4_ = -(uint)(ABS(auVar50._0_4_) <= (float)uVar11);
              auVar15[5] = (char)((uint)iVar39 >> 8);
              auVar15[6] = (char)((uint)iVar39 >> 0x10);
              auVar15[7] = (char)((uint)iVar39 >> 0x18);
              auVar15[8] = (char)iVar9;
              auVar15[9] = (char)((uint)iVar9 >> 8);
              auVar15[10] = (char)((uint)iVar9 >> 0x10);
              auVar15[0xb] = (char)((uint)iVar9 >> 0x18);
              auVar15[0xc] = (char)iVar10;
              auVar15[0xd] = (char)((uint)iVar10 >> 8);
              auVar15[0xe] = (char)((uint)iVar10 >> 0x10);
              auVar15[0xf] = (char)((uint)iVar10 >> 0x18);
              auVar59 = auVar59 ^ (auVar59 ^ auVar50) & auVar15;
              uVar11 = *(undefined8 *)(local_200 + uVar41 * 4);
              lVar26 = (ulong)(uint)(iVar31 + iVar61) * 4;
              puVar4 = (undefined8 *)(lVar42 + lVar26);
              puVar4[1] = *(undefined8 *)(local_200 + uVar41 * 4 + 2);
              *puVar4 = uVar11;
              puVar4 = (undefined8 *)(lVar27 + lVar26);
              puVar4[1] = auVar59._8_8_;
              *puVar4 = auVar59._0_8_;
            } while (iVar61 + 4U < param_6);
          }
        }
        uVar34 = uVar34 + 1;
        iVar31 = iVar31 + param_7;
      } while (uVar34 != uVar1);
      if (uVar36 < 0x80) {
        __dest = (void *)*param_2;
        uVar34 = (ulong)(uVar36 * param_7 * 4);
        memcpy(__dest,*(void **)(param_1 + 0x330),uVar34);
        uVar1 = (0x80 - uVar36) * param_7;
        memcpy(*(void **)(param_1 + 0x330),
               (void *)((long)*(void **)(param_1 + 0x330) + (ulong)(uVar36 * param_7) * 4),
               (ulong)(uVar1 * 4));
        memcpy((void *)(*(long *)(param_1 + 0x330) + (ulong)uVar1 * 4),__dest,uVar34);
      }
      uVar35 = uVar35 + 1;
    } while (uVar35 != uVar24);
  }
  if (param_6 != 0) {
    uVar35 = 0;
    do {
      uVar34 = uVar35 >> 2;
      lVar33 = param_1 + uVar35 * 4;
      uVar11 = local_1a0[uVar34 * 2];
      uVar44 = (int)uVar35 + 4;
      uVar35 = (ulong)uVar44;
      *(undefined8 *)(lVar33 + 200) = local_1a0[uVar34 * 2 + 1];
      *(undefined8 *)(lVar33 + 0xc0) = uVar11;
      uVar11 = *(undefined8 *)(local_260 + uVar34 * 0x10);
      *(undefined8 *)(lVar33 + 0x248) = *(undefined8 *)(local_260 + uVar34 * 0x10 + 8);
      *(undefined8 *)(lVar33 + 0x240) = uVar11;
      uVar11 = *(undefined8 *)(local_290 + uVar34 * 4);
      *(undefined8 *)(lVar33 + 0xf8) = *(undefined8 *)(local_290 + uVar34 * 4 + 2);
      *(undefined8 *)(lVar33 + 0xf0) = uVar11;
    } while (uVar44 < param_6);
  }
  return 0;
}


