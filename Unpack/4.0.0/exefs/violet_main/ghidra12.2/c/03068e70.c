/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03068e70; name: FUN_03068e70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03068e70(undefined8 *param_1,undefined8 *param_2,float *param_3,undefined8 *param_4,
                 undefined1 (*param_5) [16],long *param_6,undefined4 *param_7,float *param_8,
                 long param_9)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float *pfVar10;
  float *pfVar11;
  undefined1 auVar12 [16];
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  long lVar20;
  undefined1 (*pauVar21) [16];
  long lVar22;
  undefined8 *puVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  int iVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  int iVar46;
  int iVar54;
  undefined8 uVar48;
  int iVar56;
  undefined1 auVar49 [16];
  int iVar47;
  int iVar55;
  int iVar57;
  int iVar58;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar60;
  undefined1 auVar59 [16];
  float fVar61;
  ulong uVar62;
  float fVar67;
  float fVar68;
  undefined1 auVar63 [12];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar69;
  float fVar70;
  float fVar75;
  undefined8 uVar71;
  ulong uVar72;
  float fVar76;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined4 uVar77;
  ulong uVar78;
  float fVar80;
  undefined1 auVar79 [16];
  undefined8 uVar81;
  float fVar82;
  float fVar83;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined1 auVar84 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  char cVar90;
  char cVar91;
  char cVar92;
  char cVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  undefined8 uVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  float fVar105;
  ulong uVar106;
  float fVar109;
  float fVar110;
  float fVar111;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar112;
  float fVar113;
  float fVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  float fVar117;
  float fVar121;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  float fVar122;
  float fVar123;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  float fVar127;
  float fVar128;
  float fVar129;
  undefined8 uVar130;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 uVar133;
  undefined1 uVar134;
  undefined1 uVar135;
  undefined1 uVar136;
  undefined1 uVar137;
  undefined1 uVar138;
  undefined1 uVar139;
  undefined1 uVar140;
  int iVar141;
  int iVar145;
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar146 [12];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  ulong local_170;
  undefined8 local_158;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  long local_b8;
  ulong local_b0 [2];
  
  lVar20 = nn::os::GetSystemTick();
  uVar81 = NEON_fmov(0x3f800000,4);
  fVar68 = (float)param_2[1];
  fVar61 = (float)*param_2;
  fVar67 = (float)((ulong)*param_2 >> 0x20);
  fVar94 = (float)*param_1;
  fVar41 = (float)((ulong)*param_1 >> 0x20);
  fVar36 = (float)param_1[1];
  fVar69 = (float)((ulong)param_1[1] >> 0x20);
  iVar46 = -(uint)(ABS(fVar61 - fVar94) <= 1.1920929e-07);
  iVar54 = -(uint)(ABS(fVar67 - fVar41) <= 1.1920929e-07);
  iVar56 = -(uint)(ABS(fVar68 - fVar36) <= 1.1920929e-07);
  fVar82 = *param_3;
  fVar85 = (float)*param_4;
  fVar95 = fVar82 - fVar85;
  fVar96 = param_3[1] - (float)((ulong)*param_4 >> 0x20);
  uVar24 = *(uint *)(param_6 + 1);
  uVar31 = (ulong)uVar24;
  lVar29 = (long)(int)uVar24;
  if (CONCAT13((byte)((uint)iVar54 >> 0x18) & (byte)((uint)iVar46 >> 0x18) &
               (byte)((uint)iVar56 >> 0x18),
               CONCAT12((byte)((uint)iVar54 >> 0x10) & (byte)((uint)iVar46 >> 0x10) &
                        (byte)((uint)iVar56 >> 0x10),
                        CONCAT11((byte)((uint)iVar54 >> 8) & (byte)((uint)iVar46 >> 8) &
                                 (byte)((uint)iVar56 >> 8),
                                 (byte)iVar54 & (byte)iVar46 & (byte)iVar56))) != 0) {
    uVar48 = CONCAT44(fVar96 * fVar96,fVar95 * fVar95);
    if (0 < (int)uVar24) {
      puVar23 = (undefined8 *)(*param_6 + 0x10);
      do {
        pfVar2 = (float *)(puVar23 + -2);
        pfVar10 = (float *)((long)puVar23 + -0xc);
        pfVar11 = (float *)(puVar23 + -1);
        puVar4 = puVar23 + 1;
        uVar71 = *puVar23;
        puVar23 = puVar23 + 4;
        fVar95 = *pfVar2 - (float)uVar71;
        fVar69 = *pfVar10 - (float)((ulong)uVar71 >> 0x20);
        fVar96 = *pfVar11 - (float)*puVar4;
        fVar61 = *pfVar2 - fVar94;
        fVar67 = *pfVar10 - fVar41;
        fVar68 = *pfVar11 - fVar36;
        uVar31 = uVar31 - 1;
        fVar70 = fVar61 * fVar95;
        fVar75 = fVar67 * fVar69;
        fVar76 = fVar68 * fVar96;
        uVar71 = NEON_fminnm(CONCAT44((fVar70 + fVar75 + fVar76) /
                                      (fVar95 * fVar95 + fVar69 * fVar69 + fVar96 * fVar96),
                                      (fVar70 + fVar75 + fVar76) /
                                      (fVar95 * fVar95 + fVar69 * fVar69 + fVar96 * fVar96)),uVar81,
                             4);
        uVar71 = NEON_fmax(uVar71,0,4);
        fVar61 = fVar61 - fVar95 * (float)uVar71;
        fVar67 = fVar67 - fVar69 * (float)((ulong)uVar71 >> 0x20);
        fVar68 = fVar68 - fVar96 * (float)uVar71;
        fVar61 = fVar61 * fVar61;
        fVar67 = fVar67 * fVar67;
        fVar68 = fVar68 * fVar68;
        uVar48 = NEON_fmin(uVar48,CONCAT44(fVar61 + fVar67 + fVar68,fVar61 + fVar67 + fVar68),4);
      } while (uVar31 != 0);
    }
    fVar67 = fVar85 + SQRT((float)uVar48);
    fVar61 = fVar85 * 1.0000001;
    if (fVar85 * 1.0000001 <= 1.1754944e-38) {
      fVar61 = 1.1754944e-38;
    }
    if (fVar67 <= fVar82) {
      fVar82 = fVar67;
    }
    if (fVar61 <= fVar67) {
      fVar61 = fVar82;
    }
    param_7[1] = fVar61;
    *param_7 = 0;
    if (param_8 != (float *)0x0) {
      *param_8 = fVar61;
    }
    goto LAB_0306a0cc;
  }
  auVar38 = *param_5;
  fVar82 = fVar61 - fVar94;
  fVar85 = fVar67 - fVar41;
  auVar39._0_8_ = CONCAT44(fVar85,fVar82);
  auVar39._8_4_ = fVar68 - fVar36;
  auVar39._12_4_ = (float)((ulong)param_2[1] >> 0x20) - fVar69;
  auVar42 = NEON_ext(auVar39,auVar39,4,1);
  auVar49 = NEON_ext(auVar38,auVar38,8,1);
  uVar48 = NEON_ext(auVar38._0_8_,auVar49._0_8_,4,1);
  auVar49._0_4_ = fVar82 * (float)uVar48 - auVar42._0_4_ * auVar38._0_4_;
  auVar49._4_4_ = fVar85 * (float)((ulong)uVar48 >> 0x20) - auVar42._4_4_ * auVar38._4_4_;
  auVar49._8_4_ = auVar39._8_4_ * auVar38._0_4_ - fVar82 * auVar38._8_4_;
  auVar49._12_4_ = auVar39._12_4_ * auVar38._4_4_ - fVar85 * auVar38._12_4_;
  auVar38 = NEON_ext(auVar49,auVar49,4,1);
  fVar82 = auVar38._0_4_;
  fVar85 = auVar38._4_4_;
  fVar96 = fVar82 * fVar82 + fVar85 * fVar85 + auVar49._0_4_ * auVar49._0_4_;
  if (fVar96 == 0.0) {
    auVar63 = SUB1612(ZEXT816(0),0);
  }
  else {
    fVar96 = SQRT(fVar96);
    auVar63._0_4_ = fVar82 / fVar96;
    auVar63._4_4_ = fVar85 / SQRT(fVar82 * fVar82 + fVar85 * fVar85 + auVar49._0_4_ * auVar49._0_4_)
    ;
    auVar63._8_4_ = auVar49._0_4_ / fVar96;
  }
  lVar30 = tpidr_el0;
  lVar25 = *(long *)(lVar30 + 0x1000b8);
  uVar48 = auVar39._8_8_;
  auVar38 = auVar39;
  if (lVar25 == 0) {
    lVar25 = FUN_00e5d3b4();
    auVar38._8_8_ = uVar48;
    auVar38._0_8_ = auVar39._0_8_;
    *(long *)(lVar30 + 0x1000b8) = lVar25;
  }
  lVar30 = *(long *)(*(long *)(lVar25 + 0x3d0) + 0x10);
  if ((*(long *)(lVar30 + 8) == 0) && (local_b8 = lVar29 * 0x30, lVar30 != 0)) {
    local_b0[0] = local_b8 + 0x3fU & 0xffffffffffffffc0;
    if (local_b0[0] <= *(ulong *)(lVar30 + 0x28)) {
      lVar25 = *(long *)(lVar30 + 0x38);
      if (local_b0[0] + lVar25 <= *(ulong *)(lVar30 + 0x40)) {
        *(ulong *)(lVar30 + 0x38) = local_b0[0] + lVar25;
        goto LAB_03069120;
      }
    }
    lVar25 = FUN_031cf3b4(lVar30,local_b0);
    auVar38._8_8_ = uVar48;
    auVar38._0_8_ = auVar39._0_8_;
  }
  else {
    local_b8 = lVar29 * 0x30;
    lVar25 = (**(code **)PTR_DAT_047d1a08)(1,&local_b8,0x40);
    lVar30 = 0;
    auVar38._8_8_ = uVar48;
    auVar38._0_8_ = auVar39._0_8_;
  }
LAB_03069120:
  puVar16 = PTR_DAT_047e4f48;
  puVar15 = PTR_DAT_047e49a0;
  puVar14 = PTR_DAT_047e4998;
  puVar13 = PTR_DAT_047d19d8;
  uVar26 = 0x5f7ffff05f7ffff0;
  fVar82 = (float)uVar81;
  fVar85 = (float)((ulong)uVar81 >> 0x20);
  if ((int)uVar24 < 1) {
    uVar71 = 0x5f7ffff05f7ffff0;
    auVar42 = ZEXT816(0x5f7ffff05f7ffff0);
    iVar46 = -1;
    iVar54 = 0;
  }
  else {
    fVar80 = auVar63._0_4_;
    fVar97 = auVar63._4_4_;
    fVar121 = auVar63._8_4_;
    uVar71 = 0x5f7ffff05f7ffff0;
    fVar75 = auVar38._0_4_ * auVar38._0_4_;
    fVar76 = auVar38._4_4_ * auVar38._4_4_;
    fVar60 = auVar38._8_4_ * auVar38._8_4_;
    fVar70 = -(fVar94 * fVar80 + fVar41 * fVar97 + fVar36 * fVar121);
    fVar96 = -fVar95;
    auVar42 = ZEXT816(0x5f7ffff05f7ffff0);
    uVar27 = 0;
    iVar54 = 0;
    iVar46 = -1;
    do {
      pfVar2 = (float *)(*param_6 + uVar27 * 0x20);
      fVar111 = (float)*(undefined8 *)(pfVar2 + 2);
      fVar122 = (float)((ulong)*(undefined8 *)(pfVar2 + 2) >> 0x20);
      fVar112 = *pfVar2;
      fVar113 = pfVar2[1];
      fVar114 = pfVar2[2];
      fVar104 = (float)*(undefined8 *)pfVar2;
      fVar109 = (float)((ulong)*(undefined8 *)pfVar2 >> 0x20);
      fVar105 = pfVar2[4];
      fVar117 = pfVar2[5];
      fVar110 = pfVar2[6];
      fVar123 = pfVar2[7];
      auVar125._0_4_ = fVar80 * fVar104;
      auVar125._4_4_ = fVar97 * fVar109;
      auVar125._8_4_ = fVar121 * fVar111;
      auVar125._12_4_ = fVar70 * fVar122;
      auVar49 = NEON_ext(auVar125,auVar125,8,1);
      fVar34 = auVar49._0_4_ + fVar70;
      fVar32 = auVar125._0_4_ + auVar125._4_4_ + fVar34;
      fVar34 = auVar125._0_4_ + auVar125._4_4_ + fVar34;
      auVar74._0_4_ = fVar80 * fVar105;
      auVar74._4_4_ = fVar97 * fVar117;
      auVar74._8_4_ = fVar121 * fVar110;
      auVar74._12_4_ = fVar70 * fVar123;
      auVar49 = NEON_ext(auVar74,auVar74,8,1);
      fVar35 = auVar49._0_4_ + fVar70;
      fVar33 = auVar74._0_4_ + auVar74._4_4_ + fVar35;
      fVar35 = auVar74._0_4_ + auVar74._4_4_ + fVar35;
      bVar17 = false;
      bVar18 = false;
      if (fVar32 < fVar96) {
        bVar17 = false;
        bVar18 = true;
        if (!NAN(fVar33) && !NAN(fVar96)) {
          bVar17 = fVar33 < fVar96;
          bVar18 = false;
        }
      }
      if (bVar17 == bVar18) {
        auVar45._0_4_ = fVar105 - fVar104;
        auVar45._4_4_ = fVar117 - fVar109;
        auVar45._8_4_ = fVar110 - fVar111;
        auVar45._12_4_ = fVar123 - fVar122;
        puVar23 = (undefined8 *)(lVar25 + (long)iVar54 * 0x30);
        fVar83 = auVar38._0_4_;
        auVar124._0_4_ = fVar83 * auVar45._0_4_;
        fVar86 = auVar38._4_4_;
        auVar124._4_4_ = fVar86 * auVar45._4_4_;
        fVar87 = auVar38._8_4_;
        auVar124._8_4_ = fVar87 * auVar45._8_4_;
        auVar124._12_4_ = auVar38._12_4_ * auVar45._12_4_;
        auVar66._0_4_ = (fVar104 - fVar94) * auVar45._0_4_;
        auVar66._4_4_ = (fVar109 - fVar41) * auVar45._4_4_;
        auVar66._8_4_ = (fVar111 - fVar36) * auVar45._8_4_;
        auVar66._12_4_ = (fVar122 - fVar69) * auVar45._12_4_;
        auVar125 = NEON_ext(auVar124,auVar124,8,1);
        auVar49 = NEON_ext(auVar66,auVar66,8,1);
        fVar122 = auVar125._0_4_ + auVar124._0_4_ + auVar124._4_4_;
        if (fVar122 == 0.0) {
code_r0x03069278:
          if (fVar32 <= 0.0 == 0.0 < fVar33) {
            fVar104 = fVar104 - fVar80 * fVar32;
            fVar109 = fVar109 - fVar97 * fVar34;
            fVar111 = fVar111 - fVar121 * fVar32;
            uVar77 = 0;
          }
          else {
            fVar35 = fVar35 * fVar35;
            uVar106 = CONCAT44(-(uint)(fVar34 * fVar34 < fVar35),
                               -(uint)(fVar32 * fVar32 < fVar33 * fVar33)) & 0x100000001;
            iVar56 = (int)uVar106;
            fVar104 = (float)((uint)fVar105 ^
                             ((uint)fVar105 ^ (uint)*pfVar2) & (iVar56 << 0x1f) >> 0x1f);
            fVar109 = (float)((uint)fVar117 ^
                             ((uint)fVar117 ^ (uint)pfVar2[1]) &
                             ((int)(uVar106 >> 0x20) << 0x1f) >> 0x1f);
            fVar111 = (float)((uint)fVar110 ^
                             ((uint)fVar110 ^ (uint)pfVar2[2]) & (iVar56 << 0x1f) >> 0x1f);
            uVar98 = NEON_fmin(CONCAT44(fVar34 * fVar34,fVar32 * fVar32),
                               CONCAT44(fVar35,fVar33 * fVar33),4);
            uVar77 = (undefined4)uVar98;
          }
          fVar112 = fVar94 - fVar104;
          fVar114 = fVar41 - fVar109;
          fVar32 = fVar36 - fVar111;
          lVar22 = lVar25 + (long)iVar54 * 0x30;
          auVar118._4_4_ = fVar83 * fVar112;
          auVar118._0_4_ = fVar75;
          auVar118._8_4_ = fVar60;
          auVar118._12_4_ = fVar87 * fVar32;
          auVar49 = NEON_ext(auVar118,auVar118,8,1);
          fVar117 = auVar49._0_4_ + fVar76 + fVar75;
          fVar33 = auVar49._4_4_ + fVar86 * fVar114 + fVar83 * fVar112;
          auVar119._0_8_ = CONCAT44(fVar33,fVar117);
          fVar113 = fVar112 * fVar112 + fVar114 * fVar114 + fVar32 * fVar32;
          fVar105 = (fVar61 - fVar104) * (fVar61 - fVar104);
          fVar110 = (fVar67 - fVar109) * (fVar67 - fVar109);
          fVar123 = (fVar68 - fVar111) * (fVar68 - fVar111);
          auVar119._12_4_ = fVar112 * fVar112 + fVar114 * fVar114 + fVar32 * fVar32;
          auVar119._8_4_ = fVar113;
          uVar106 = CONCAT44(fVar123 + fVar105 + fVar110,fVar123 + fVar105 + fVar110);
          uVar62 = CONCAT44(fVar113,fVar113);
          fVar117 = fVar117 * (float)_DAT_03cab560;
          fVar33 = fVar33 * (float)((ulong)_DAT_03cab560 >> 0x20);
          fVar110 = fVar113 * (float)_UNK_03cab568;
          auVar101._0_12_ = auVar119._0_12_;
          auVar101._12_4_ = 0;
          auVar115._12_4_ = uVar77;
          auVar115._0_12_ = auVar101._0_12_;
          fVar105 = fVar117 + fVar33;
          fVar117 = fVar117 + fVar33;
          puVar23[1] = (ulong)(uint)fVar113;
          *puVar23 = auVar119._0_8_;
          *(ulong *)(lVar22 + 0x18) = (ulong)(uint)fVar113;
          *(undefined8 *)(lVar22 + 0x10) = auVar119._0_8_;
          *(long *)(lVar22 + 0x28) = auVar115._8_8_;
          *(undefined8 *)(lVar22 + 0x20) = auVar119._0_8_;
          auVar120 = auVar101;
        }
        else {
          auVar126._0_4_ = auVar45._0_4_ * (fVar105 - fVar94);
          auVar126._4_4_ = auVar45._4_4_ * (fVar117 - fVar41);
          auVar126._8_4_ = auVar45._8_4_ * (fVar110 - fVar36);
          auVar126._12_4_ = auVar45._12_4_ * (fVar123 - fVar69);
          auVar125 = NEON_ext(auVar126,auVar126,8,1);
          fVar122 = fVar82 / fVar122;
          fVar123 = (auVar49._0_4_ + auVar66._0_4_ + auVar66._4_4_) * fVar122;
          fVar122 = (auVar125._0_4_ + auVar126._0_4_ + auVar126._4_4_) * fVar122;
          if (fVar123 == fVar122) goto code_r0x03069278;
          if (fVar123 <= fVar122) {
            fVar32 = fVar122;
          }
          else {
            auVar45._0_4_ = -auVar45._0_4_;
            auVar45._4_4_ = -auVar45._4_4_;
            auVar45._8_4_ = -auVar45._8_4_;
            auVar45._12_4_ = -auVar45._12_4_;
            fVar32 = fVar123;
            fVar123 = fVar122;
            fVar112 = fVar105;
            fVar113 = fVar117;
            fVar114 = fVar110;
            fVar105 = *pfVar2;
            fVar117 = pfVar2[1];
            fVar110 = pfVar2[2];
          }
          auVar49 = *param_5;
          auVar125 = NEON_ext(auVar49,auVar49,8,1);
          uVar98 = NEON_ext(auVar49._0_8_,auVar125._0_8_,4,1);
          auVar125 = NEON_ext(auVar45,auVar45,4,1);
          fVar109 = fVar94 - fVar112;
          fVar111 = fVar41 - fVar113;
          fVar122 = fVar36 - fVar114;
          fVar127 = auVar49._0_4_ * auVar125._0_4_ - auVar45._0_4_ * (float)uVar98;
          fVar33 = auVar49._4_4_ * auVar125._4_4_ - auVar45._4_4_ * (float)((ulong)uVar98 >> 0x20);
          fVar34 = auVar49._8_4_ * auVar45._0_4_ - auVar45._8_4_ * auVar49._0_4_;
          fVar35 = auVar49._12_4_ * auVar45._4_4_ - auVar45._12_4_ * auVar49._4_4_;
          auVar8._4_4_ = fVar33;
          auVar8._0_4_ = fVar127;
          auVar8._8_4_ = fVar34;
          auVar8._12_4_ = fVar35;
          auVar9._4_4_ = fVar33;
          auVar9._0_4_ = fVar127;
          auVar9._8_4_ = fVar34;
          auVar9._12_4_ = fVar35;
          auVar125 = NEON_ext(auVar8,auVar9,4,1);
          uVar130 = CONCAT44(fVar122 * fVar122 + fVar109 * fVar109 + fVar111 * fVar111,
                             fVar122 * fVar122 + fVar109 * fVar109 + fVar111 * fVar111);
          fVar33 = fVar94 - fVar105;
          fVar34 = fVar41 - fVar117;
          fVar35 = fVar36 - fVar110;
          fVar112 = (fVar61 - fVar112) * (fVar61 - fVar112);
          fVar113 = (fVar67 - fVar113) * (fVar67 - fVar113);
          fVar114 = (fVar68 - fVar114) * (fVar68 - fVar114);
          uVar98 = CONCAT44(fVar35 * fVar35 + fVar33 * fVar33 + fVar34 * fVar34,
                            fVar35 * fVar35 + fVar33 * fVar33 + fVar34 * fVar34);
          auVar99._4_4_ = fVar83 * fVar109;
          auVar99._0_4_ = fVar75;
          auVar99._8_4_ = fVar60;
          auVar99._12_4_ = fVar87 * fVar122;
          auVar49 = NEON_ext(auVar99,auVar99,8,1);
          auVar100._0_8_ =
               CONCAT44(auVar49._4_4_ + fVar86 * fVar111 + fVar83 * fVar109,
                        auVar49._0_4_ + fVar76 + fVar75);
          uVar62 = NEON_fmin(uVar130,uVar98,4);
          fVar104 = (fVar61 - fVar105) * (fVar61 - fVar105);
          fVar117 = (fVar67 - fVar117) * (fVar67 - fVar117);
          fVar110 = (fVar68 - fVar110) * (fVar68 - fVar110);
          auVar100._8_8_ = uVar130;
          fVar128 = auVar125._0_4_;
          fVar105 = auVar125._4_4_;
          auVar101._0_12_ = auVar100._0_12_;
          auVar101._12_4_ = fVar123;
          fVar129 = fVar128 * fVar128 + fVar105 * fVar105 + fVar127 * fVar127;
          uVar72 = NEON_fmin(CONCAT44(fVar114 + fVar112 + fVar113,fVar114 + fVar112 + fVar113),
                             CONCAT44(fVar110 + fVar104 + fVar117,fVar110 + fVar104 + fVar117),4);
          uVar133 = 0;
          uVar134 = 0;
          uVar135 = 0;
          uVar136 = 0;
          uVar137 = 0;
          uVar138 = 0;
          uVar139 = 0;
          uVar140 = 0;
          fVar117 = 0.0;
          puVar23[1] = auVar101._8_8_;
          *puVar23 = auVar100._0_8_;
          if (fVar129 != 0.0) {
            fVar129 = SQRT(fVar129);
            fVar117 = fVar128 / fVar129;
            uVar133 = SUB41(fVar117,0);
            uVar134 = (undefined1)((uint)fVar117 >> 8);
            uVar135 = (undefined1)((uint)fVar117 >> 0x10);
            uVar136 = (undefined1)((uint)fVar117 >> 0x18);
            fVar105 = fVar105 / SQRT(fVar128 * fVar128 + fVar105 * fVar105 + fVar127 * fVar127);
            uVar137 = SUB41(fVar105,0);
            uVar138 = (undefined1)((uint)fVar105 >> 8);
            uVar139 = (undefined1)((uint)fVar105 >> 0x10);
            uVar140 = (undefined1)((uint)fVar105 >> 0x18);
            fVar117 = fVar127 / fVar129;
          }
          iVar47 = -(uint)(fVar123 < 0.0);
          iVar55 = -(uint)(fVar123 < 0.0);
          fVar109 = fVar109 * (float)CONCAT13(uVar136,CONCAT12(uVar135,CONCAT11(uVar134,uVar133)));
          fVar111 = fVar111 * (float)CONCAT13(uVar140,CONCAT12(uVar139,CONCAT11(uVar138,uVar137)));
          fVar112 = fVar83 * (float)CONCAT13(uVar136,CONCAT12(uVar135,CONCAT11(uVar134,uVar133)));
          fVar113 = fVar86 * (float)CONCAT13(uVar140,CONCAT12(uVar139,CONCAT11(uVar138,uVar137)));
          iVar57 = -(uint)(0.0 < fVar32);
          iVar58 = -(uint)(0.0 < fVar32);
          lVar22 = lVar25 + (long)iVar54 * 0x30;
          iVar56 = -(uint)(fVar123 < fVar82);
          iVar37 = -(uint)(fVar123 < fVar85);
          iVar141 = -(uint)(fVar82 < fVar32);
          iVar145 = -(uint)(fVar85 < fVar32);
          uVar24 = (uint)(fVar123 <= 0.5);
          fVar123 = fVar112 + fVar113 + fVar87 * fVar117;
          fVar105 = fVar109 + fVar111 + fVar122 * fVar117;
          fVar110 = fVar109 + fVar111 + fVar122 * fVar117;
          auVar131._4_4_ = fVar83 * fVar33;
          auVar131._0_4_ = fVar75;
          auVar131._8_4_ = fVar60;
          auVar131._12_4_ = fVar87 * fVar35;
          auVar49 = NEON_ext(auVar131,auVar131,8,1);
          fVar114 = fVar105 * fVar105;
          auVar116._0_8_ =
               CONCAT44(auVar49._4_4_ + fVar86 * fVar34 + fVar83 * fVar33,
                        auVar49._0_4_ + fVar76 + fVar75);
          fVar117 = fVar110 + fVar112 + fVar113 + fVar87 * fVar117;
          auVar116._8_8_ = uVar98;
          auVar120._0_8_ = CONCAT44(fVar105 * fVar123,fVar123 * fVar123);
          uVar28 = (uint)(fVar32 <= 0.5);
          auVar120._8_8_ = CONCAT44(fVar32,fVar114);
          auVar107._0_4_ = (int)(uVar24 * -0x80000000) >> 0x1f;
          auVar107._4_4_ = (int)(uVar24 * -0x80000000) >> 0x1f;
          auVar107._8_4_ = (int)(uVar24 * -0x80000000) >> 0x1f;
          auVar107._12_4_ = (int)(uVar24 * -0x80000000) >> 0x1f;
          uVar62 = uVar62 ^ (uVar62 ^ CONCAT44(fVar114,fVar114)) &
                            ~CONCAT17(~(byte)((uint)iVar55 >> 0x18) | ~(byte)((uint)iVar58 >> 0x18),
                                      CONCAT16(~(byte)((uint)iVar55 >> 0x10) |
                                               ~(byte)((uint)iVar58 >> 0x10),
                                               CONCAT15(~(byte)((uint)iVar55 >> 8) |
                                                        ~(byte)((uint)iVar58 >> 8),
                                                        CONCAT14(~(byte)iVar55 | ~(byte)iVar58,
                                                                 CONCAT13(~(byte)((uint)iVar47 >>
                                                                                 0x18) |
                                                                          ~(byte)((uint)iVar57 >>
                                                                                 0x18),
                                                                          CONCAT12(~(byte)((uint)
                                                  iVar47 >> 0x10) | ~(byte)((uint)iVar57 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar47 >> 8) |
                                                           ~(byte)((uint)iVar57 >> 8),
                                                           ~(byte)iVar47 | ~(byte)iVar57)))))));
          uVar98 = NEON_fmin(CONCAT44(fVar110 * fVar110,fVar114),
                             CONCAT44(fVar117 * fVar117,(fVar105 + fVar123) * (fVar105 + fVar123)),4
                            );
          auVar115._0_12_ = auVar116._0_12_;
          auVar115._12_4_ = (int)uVar98;
          fVar117 = fVar123 * fVar123 * (float)_DAT_03cab220;
          fVar105 = fVar105 * fVar123 * (float)((ulong)_DAT_03cab220 >> 0x20);
          fVar110 = fVar114 * (float)_UNK_03cab228;
          auVar49 = auVar101 ^ (auVar101 ^ auVar120) & auVar107;
          *(ulong *)(lVar22 + 0x18) = CONCAT44(fVar32,fVar114);
          *(undefined8 *)(lVar22 + 0x10) = auVar120._0_8_;
          *(long *)(lVar22 + 0x28) = auVar115._8_8_;
          *(undefined8 *)(lVar22 + 0x20) = auVar116._0_8_;
          uVar106 = CONCAT44(fVar117 + fVar105 + fVar110,fVar117 + fVar105 + fVar110);
          auVar7._4_4_ = (int)(uVar28 * -0x80000000) >> 0x1f;
          auVar7._0_4_ = (int)(uVar28 * -0x80000000) >> 0x1f;
          auVar7._8_4_ = (int)(uVar28 * -0x80000000) >> 0x1f;
          auVar7._12_4_ = (int)(uVar28 * -0x80000000) >> 0x1f;
          auVar49 = auVar49 ^ (auVar49 ^ auVar115) & auVar7;
          fVar117 = auVar49._0_4_ * (float)_DAT_03cab560;
          fVar123 = auVar49._4_4_ * (float)((ulong)_DAT_03cab560 >> 0x20);
          fVar110 = auVar49._8_4_ * (float)_UNK_03cab568;
          uVar106 = uVar106 ^ (uVar106 ^ uVar72) &
                              CONCAT17(~(byte)((uint)iVar37 >> 0x18) |
                                       ~(byte)((uint)iVar145 >> 0x18),
                                       CONCAT16(~(byte)((uint)iVar37 >> 0x10) |
                                                ~(byte)((uint)iVar145 >> 0x10),
                                                CONCAT15(~(byte)((uint)iVar37 >> 8) |
                                                         ~(byte)((uint)iVar145 >> 8),
                                                         CONCAT14(~(byte)iVar37 | ~(byte)iVar145,
                                                                  CONCAT13(~(byte)((uint)iVar56 >>
                                                                                  0x18) |
                                                                           ~(byte)((uint)iVar141 >>
                                                                                  0x18),
                                                                           CONCAT12(~(byte)((uint)
                                                  iVar56 >> 0x10) | ~(byte)((uint)iVar141 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar56 >> 8) |
                                                           ~(byte)((uint)iVar141 >> 8),
                                                           ~(byte)iVar56 | ~(byte)iVar141)))))));
          fVar105 = fVar117 + fVar123;
          fVar117 = fVar117 + fVar123;
        }
        if ((float)uVar26 <= (float)uVar62) {
          if ((float)uVar62 == (float)uVar26) {
            pauVar21 = (undefined1 (*) [16])(lVar25 + (long)iVar46 * 0x30);
            auVar49 = *pauVar21;
            auVar125 = pauVar21[1];
            fVar114 = auVar49._12_4_;
            uVar72 = CONCAT44(-(uint)(fVar114 <= 0.0),-(uint)(fVar114 <= 0.0)) & 0x100000001;
            iVar56 = (int)uVar72;
            iVar37 = (int)(uVar72 >> 0x20);
            auVar132._12_4_ = (iVar37 << 0x1f) >> 0x1f;
            auVar132._8_4_ = (iVar56 << 0x1f) >> 0x1f;
            auVar132._4_4_ = (iVar37 << 0x1f) >> 0x1f;
            auVar132._0_4_ = (iVar56 << 0x1f) >> 0x1f;
            fVar32 = auVar125._12_4_;
            uVar72 = CONCAT44(-(uint)(fVar32 <= 0.0),-(uint)(fVar32 <= 0.0)) & 0x100000001;
            auVar74 = auVar49 ^ (auVar49 ^ auVar125) & auVar132;
            iVar37 = (int)uVar72;
            iVar47 = (int)(uVar72 >> 0x20);
            cVar90 = (char)((uint)(iVar37 << 0x1f) >> 0x18);
            cVar91 = (char)((uint)(iVar47 << 0x1f) >> 0x18);
            iVar56 = (int)cVar91 >> 7;
            auVar142._12_4_ = (iVar47 << 0x1f) >> 0x1f;
            auVar142._8_4_ = (iVar37 << 0x1f) >> 0x1f;
            auVar142[3] = cVar90 >> 7;
            auVar142._0_3_ = (int3)((int)cVar90 >> 7);
            auVar142[4] = (char)iVar56;
            auVar142[5] = (char)((uint)iVar56 >> 8);
            auVar142[6] = (char)((uint)iVar56 >> 0x10);
            auVar142[7] = cVar91 >> 7;
            auVar74 = auVar74 ^ (auVar74 ^ pauVar21[2]) & auVar142;
            fVar113 = auVar101._12_4_;
            uVar72 = (ulong)CONCAT14(-(fVar113 <= 0.0),-(uint)(fVar113 <= 0.0)) & 0x100000001;
            iVar37 = (int)uVar72;
            iVar47 = (int)(uVar72 >> 0x20);
            cVar90 = (char)((uint)(iVar37 << 0x1f) >> 0x18);
            cVar91 = (char)((uint)(iVar47 << 0x1f) >> 0x18);
            iVar56 = (int)cVar91 >> 7;
            auVar147._12_4_ = (iVar47 << 0x1f) >> 0x1f;
            auVar147._8_4_ = (iVar37 << 0x1f) >> 0x1f;
            auVar147[3] = cVar90 >> 7;
            auVar147._0_3_ = (int3)((int)cVar90 >> 7);
            auVar147[4] = (char)iVar56;
            auVar147[5] = (char)((uint)iVar56 >> 8);
            auVar147[6] = (char)((uint)iVar56 >> 0x10);
            auVar147[7] = cVar91 >> 7;
            fVar123 = auVar120._12_4_;
            uVar72 = CONCAT44(-(uint)(fVar123 <= 0.0),-(uint)(fVar123 <= 0.0)) & 0x100000001;
            auVar45 = auVar101 ^ (auVar101 ^ auVar120) & auVar147;
            iVar56 = (int)uVar72;
            iVar37 = (int)(uVar72 >> 0x20);
            auVar150._0_4_ = (iVar56 << 0x1f) >> 0x1f;
            auVar150._4_4_ = (iVar37 << 0x1f) >> 0x1f;
            auVar150._8_4_ = (iVar56 << 0x1f) >> 0x1f;
            auVar150._12_4_ = (iVar37 << 0x1f) >> 0x1f;
            auVar45 = auVar45 ^ (auVar45 ^ auVar115) & auVar150;
            fVar33 = auVar74._0_4_ - auVar45._0_4_;
            fVar112 = auVar74._4_4_ - auVar45._4_4_;
            iVar56 = -(uint)(fVar33 == 0.0);
            iVar37 = -(uint)(fVar112 == 0.0);
            if (CONCAT13(~(byte)((uint)iVar37 >> 0x18) | ~(byte)((uint)iVar56 >> 0x18),
                         CONCAT12(~(byte)((uint)iVar37 >> 0x10) | ~(byte)((uint)iVar56 >> 0x10),
                                  CONCAT11(~(byte)((uint)iVar37 >> 8) | ~(byte)((uint)iVar56 >> 8),
                                           ~(byte)iVar37 | ~(byte)iVar56))) == 0) {
              if (0.0 < fVar114) {
                bVar17 = true;
                if ((0.0 < fVar113) && (bVar17 = false, !NAN(fVar114) && !NAN(fVar113))) {
                  bVar17 = fVar114 == fVar113;
                }
                if (!bVar17) {
                  uVar24 = (uint)(fVar113 < fVar114);
                  goto LAB_0306962c;
                }
              }
              auVar74 = NEON_ext(auVar49,auVar49,8,1);
              auVar45 = NEON_ext(auVar125,auVar125,8,1);
              auVar66 = NEON_ext(auVar120,auVar120,8,1);
              fVar112 = auVar74._4_4_;
              fVar34 = auVar45._4_4_;
              auVar74 = NEON_ext(auVar101,auVar101,8,1);
              fVar33 = auVar74._4_4_;
              fVar35 = auVar66._4_4_;
              auVar144._0_8_ = CONCAT44(fVar35,fVar33);
              auVar151._8_8_ = auVar144._0_8_;
              auVar151._0_8_ = CONCAT44(fVar34,fVar112);
              auVar144._8_8_ = CONCAT44(fVar34,fVar112);
              iVar56 = -(uint)(fVar112 < fVar33);
              iVar37 = -(uint)(fVar34 < fVar35);
              iVar47 = -(uint)(fVar33 < fVar112);
              iVar55 = -(uint)(fVar35 < fVar34);
              auVar143[0] = puVar15[0xc0] ^ (byte)iVar56;
              auVar143[1] = puVar15[0xc1] ^ (byte)((uint)iVar56 >> 8);
              auVar143[2] = puVar15[0xc2] ^ (byte)((uint)iVar56 >> 0x10);
              auVar143[3] = puVar15[0xc3] ^ (byte)((uint)iVar56 >> 0x18);
              auVar143[4] = puVar15[0xc4] ^ (byte)iVar37;
              auVar143[5] = puVar15[0xc5] ^ (byte)((uint)iVar37 >> 8);
              auVar143[6] = puVar15[0xc6] ^ (byte)((uint)iVar37 >> 0x10);
              auVar143[7] = puVar15[199] ^ (byte)((uint)iVar37 >> 0x18);
              auVar143[8] = puVar15[200] ^ (byte)iVar47;
              auVar143[9] = puVar15[0xc9] ^ (byte)((uint)iVar47 >> 8);
              auVar143[10] = puVar15[0xca] ^ (byte)((uint)iVar47 >> 0x10);
              auVar143[0xb] = puVar15[0xcb] ^ (byte)((uint)iVar47 >> 0x18);
              auVar143[0xc] = puVar15[0xcc] ^ (byte)iVar55;
              auVar143[0xd] = puVar15[0xcd] ^ (byte)((uint)iVar55 >> 8);
              auVar143[0xe] = puVar15[0xce] ^ (byte)((uint)iVar55 >> 0x10);
              auVar143[0xf] = puVar15[0xcf] ^ (byte)((uint)iVar55 >> 0x18);
              auVar144 = auVar144 ^ (auVar144 ^ auVar151) & auVar143;
              auVar74 = NEON_rev64(auVar144,4);
              iVar56 = -(uint)(auVar144._0_4_ < auVar74._0_4_);
              iVar37 = -(uint)(auVar144._4_4_ < auVar74._4_4_);
              iVar47 = -(uint)(auVar144._8_4_ < auVar74._8_4_);
              iVar55 = -(uint)(auVar144._12_4_ < auVar74._12_4_);
              auVar152[0] = puVar14[0xa0] ^ (byte)iVar56;
              auVar152[1] = puVar14[0xa1] ^ (byte)((uint)iVar56 >> 8);
              auVar152[2] = puVar14[0xa2] ^ (byte)((uint)iVar56 >> 0x10);
              auVar152[3] = puVar14[0xa3] ^ (byte)((uint)iVar56 >> 0x18);
              auVar152[4] = puVar14[0xa4] ^ (byte)iVar37;
              auVar152[5] = puVar14[0xa5] ^ (byte)((uint)iVar37 >> 8);
              auVar152[6] = puVar14[0xa6] ^ (byte)((uint)iVar37 >> 0x10);
              auVar152[7] = puVar14[0xa7] ^ (byte)((uint)iVar37 >> 0x18);
              auVar152[8] = puVar14[0xa8] ^ (byte)iVar47;
              auVar152[9] = puVar14[0xa9] ^ (byte)((uint)iVar47 >> 8);
              auVar152[10] = puVar14[0xaa] ^ (byte)((uint)iVar47 >> 0x10);
              auVar152[0xb] = puVar14[0xab] ^ (byte)((uint)iVar47 >> 0x18);
              auVar152[0xc] = puVar14[0xac] ^ (byte)iVar55;
              auVar152[0xd] = puVar14[0xad] ^ (byte)((uint)iVar55 >> 8);
              auVar152[0xe] = puVar14[0xae] ^ (byte)((uint)iVar55 >> 0x10);
              auVar152[0xf] = puVar14[0xaf] ^ (byte)((uint)iVar55 >> 0x18);
              auVar144 = auVar144 ^ (auVar144 ^ auVar74) & ~auVar152;
              auVar148._8_8_ = _UNK_03cab418;
              auVar148._0_8_ = _DAT_03cab410;
              auVar74 = a64_TBL(ZEXT816(0),auVar144,auVar148);
              iVar56 = -(uint)(auVar144._0_4_ < auVar74._0_4_);
              iVar37 = -(uint)(auVar144._4_4_ < auVar74._4_4_);
              iVar47 = -(uint)(auVar144._8_4_ < auVar74._8_4_);
              iVar55 = -(uint)(auVar144._12_4_ < auVar74._12_4_);
              auVar153[0] = puVar16[0x40] ^ (byte)iVar56;
              auVar153[1] = puVar16[0x41] ^ (byte)((uint)iVar56 >> 8);
              auVar153[2] = puVar16[0x42] ^ (byte)((uint)iVar56 >> 0x10);
              auVar153[3] = puVar16[0x43] ^ (byte)((uint)iVar56 >> 0x18);
              auVar153[4] = puVar16[0x44] ^ (byte)iVar37;
              auVar153[5] = puVar16[0x45] ^ (byte)((uint)iVar37 >> 8);
              auVar153[6] = puVar16[0x46] ^ (byte)((uint)iVar37 >> 0x10);
              auVar153[7] = puVar16[0x47] ^ (byte)((uint)iVar37 >> 0x18);
              auVar153[8] = puVar16[0x48] ^ (byte)iVar47;
              auVar153[9] = puVar16[0x49] ^ (byte)((uint)iVar47 >> 8);
              auVar153[10] = puVar16[0x4a] ^ (byte)((uint)iVar47 >> 0x10);
              auVar153[0xb] = puVar16[0x4b] ^ (byte)((uint)iVar47 >> 0x18);
              auVar153[0xc] = puVar16[0x4c] ^ (byte)iVar55;
              auVar153[0xd] = puVar16[0x4d] ^ (byte)((uint)iVar55 >> 8);
              auVar153[0xe] = puVar16[0x4e] ^ (byte)((uint)iVar55 >> 0x10);
              auVar153[0xf] = puVar16[0x4f] ^ (byte)((uint)iVar55 >> 0x18);
              auVar74 = auVar74 ^ (auVar74 ^ auVar144) & auVar153;
              fVar112 = auVar74._12_4_;
              if (0.0 < fVar112) {
                iVar56 = -(uint)(0.0 < auVar74._0_4_);
                iVar37 = -(uint)(0.0 < auVar74._4_4_);
                iVar47 = -(uint)(0.0 < auVar74._8_4_);
                iVar55 = -(uint)(0.0 < fVar112);
                iVar56 = CONCAT13((byte)((uint)iVar56 >> 0x18) &
                                  (byte)((ulong)_DAT_03cab270 >> 0x18),
                                  CONCAT12((byte)((uint)iVar56 >> 0x10) &
                                           (byte)((ulong)_DAT_03cab270 >> 0x10),
                                           CONCAT11((byte)((uint)iVar56 >> 8) &
                                                    (byte)((ulong)_DAT_03cab270 >> 8),
                                                    (byte)iVar56 & (byte)_DAT_03cab270)));
                auVar146._0_8_ =
                     CONCAT17((byte)((uint)iVar37 >> 0x18) & (byte)((ulong)_DAT_03cab270 >> 0x38),
                              CONCAT16((byte)((uint)iVar37 >> 0x10) &
                                       (byte)((ulong)_DAT_03cab270 >> 0x30),
                                       CONCAT15((byte)((uint)iVar37 >> 8) &
                                                (byte)((ulong)_DAT_03cab270 >> 0x28),
                                                CONCAT14((byte)iVar37 &
                                                         (byte)((ulong)_DAT_03cab270 >> 0x20),iVar56
                                                        ))));
                auVar146[8] = (byte)iVar47 & (byte)_UNK_03cab278;
                auVar146[9] = (byte)((uint)iVar47 >> 8) & (byte)((ulong)_UNK_03cab278 >> 8);
                auVar146[10] = (byte)((uint)iVar47 >> 0x10) & (byte)((ulong)_UNK_03cab278 >> 0x10);
                auVar146[0xb] = (byte)((uint)iVar47 >> 0x18) & (byte)((ulong)_UNK_03cab278 >> 0x18);
                auVar149[0xc] = (byte)iVar55 & (byte)((ulong)_UNK_03cab278 >> 0x20);
                auVar149._0_12_ = auVar146;
                auVar149[0xd] = (byte)((uint)iVar55 >> 8) & (byte)((ulong)_UNK_03cab278 >> 0x28);
                auVar149[0xe] = (byte)((uint)iVar55 >> 0x10) & (byte)((ulong)_UNK_03cab278 >> 0x30);
                auVar149[0xf] = (byte)((uint)iVar55 >> 0x18) & (byte)((ulong)_UNK_03cab278 >> 0x38);
                iVar56 = (int)(char)puVar13[(uint)(iVar56 + (int)((ulong)auVar146._0_8_ >> 0x20) +
                                                  auVar146._8_4_ + auVar149._12_4_)];
                do {
                  fVar33 = fVar112;
                  if (((iVar56 != 3) && (fVar33 = auVar74._8_4_, iVar56 != 2)) &&
                     (fVar33 = auVar74._4_4_, iVar56 != 1)) {
                    fVar33 = auVar74._0_4_;
                  }
                  uVar72 = CONCAT44(-(uint)(fVar114 <= fVar33),-(uint)(fVar114 <= fVar33)) &
                           0x100000001;
                  uVar78 = CONCAT44(-(uint)(fVar32 <= fVar33),-(uint)(fVar32 <= fVar33)) &
                           0x100000001;
                  iVar37 = (int)uVar72;
                  iVar47 = (int)(uVar72 >> 0x20);
                  auVar84._0_4_ = (iVar37 << 0x1f) >> 0x1f;
                  auVar84._4_4_ = (iVar47 << 0x1f) >> 0x1f;
                  auVar84._8_4_ = (iVar37 << 0x1f) >> 0x1f;
                  auVar84._12_4_ = (iVar47 << 0x1f) >> 0x1f;
                  iVar37 = (int)uVar78;
                  iVar47 = (int)(uVar78 >> 0x20);
                  auVar88._0_4_ = (iVar37 << 0x1f) >> 0x1f;
                  auVar88._4_4_ = (iVar47 << 0x1f) >> 0x1f;
                  auVar88._8_4_ = (iVar37 << 0x1f) >> 0x1f;
                  auVar88._12_4_ = (iVar47 << 0x1f) >> 0x1f;
                  auVar38 = auVar49 ^ (auVar49 ^ auVar125) & auVar84;
                  auVar38 = auVar38 ^ (auVar38 ^ pauVar21[2]) & auVar88;
                  uVar78 = CONCAT44(-(uint)(fVar113 <= fVar33),-(uint)(fVar113 <= fVar33)) &
                           0x100000001;
                  uVar72 = (ulong)CONCAT14(-(fVar123 <= fVar33),-(uint)(fVar123 <= fVar33)) &
                           0x100000001;
                  iVar37 = (int)uVar72;
                  cVar90 = (char)((uint)(iVar37 << 0x1f) >> 0x18);
                  iVar47 = (int)(uVar72 >> 0x20);
                  cVar91 = (char)((uint)(iVar47 << 0x1f) >> 0x18);
                  cVar92 = (char)((uint)(iVar37 << 0x1f) >> 0x18);
                  cVar93 = (char)((uint)(iVar47 << 0x1f) >> 0x18);
                  iVar37 = (int)cVar91 >> 7;
                  iVar47 = (int)cVar92 >> 7;
                  iVar55 = (int)cVar93 >> 7;
                  iVar57 = (int)uVar78;
                  iVar58 = (int)(uVar78 >> 0x20);
                  auVar89._0_4_ = (iVar57 << 0x1f) >> 0x1f;
                  auVar89._4_4_ = (iVar58 << 0x1f) >> 0x1f;
                  auVar89._8_4_ = (iVar57 << 0x1f) >> 0x1f;
                  auVar89._12_4_ = (iVar58 << 0x1f) >> 0x1f;
                  auVar45 = auVar101 ^ (auVar101 ^ auVar120) & auVar89;
                  auVar6[3] = cVar90 >> 7;
                  auVar6._0_3_ = (int3)((int)cVar90 >> 7);
                  auVar6[4] = (char)iVar37;
                  auVar6[5] = (char)((uint)iVar37 >> 8);
                  auVar6[6] = (char)((uint)iVar37 >> 0x10);
                  auVar6[7] = cVar91 >> 7;
                  auVar6[8] = (char)iVar47;
                  auVar6[9] = (char)((uint)iVar47 >> 8);
                  auVar6[10] = (char)((uint)iVar47 >> 0x10);
                  auVar6[0xb] = cVar92 >> 7;
                  auVar6[0xc] = (char)iVar55;
                  auVar6[0xd] = (char)((uint)iVar55 >> 8);
                  auVar6[0xe] = (char)((uint)iVar55 >> 0x10);
                  auVar6[0xf] = cVar93 >> 7;
                  auVar45 = auVar45 ^ (auVar45 ^ auVar115) & auVar6;
                  fVar34 = auVar38._0_4_ - auVar45._0_4_;
                  fVar35 = auVar38._4_4_ - auVar45._4_4_;
                  iVar37 = -(uint)(fVar34 == 0.0);
                  iVar47 = -(uint)(fVar35 == 0.0);
                  if (CONCAT13(~(byte)((uint)iVar47 >> 0x18) | ~(byte)((uint)iVar37 >> 0x18),
                               CONCAT12(~(byte)((uint)iVar47 >> 0x10) |
                                        ~(byte)((uint)iVar37 >> 0x10),
                                        CONCAT11(~(byte)((uint)iVar47 >> 8) |
                                                 ~(byte)((uint)iVar37 >> 8),
                                                 ~(byte)iVar47 | ~(byte)iVar37))) != 0) {
                    fVar35 = fVar35 + fVar33 * fVar34;
                    auVar38._8_8_ = uVar48;
                    auVar38._0_8_ = auVar39._0_8_;
                    if (fVar35 != 0.0) {
                      fVar34 = fVar35;
                    }
                    uVar24 = -(uint)(0.0 < fVar34);
                    goto LAB_0306962c;
                  }
                  iVar56 = iVar56 + 1;
                } while (iVar56 != 4);
                auVar38._8_8_ = uVar48;
                auVar38._0_8_ = auVar39._0_8_;
              }
            }
            else {
              fVar112 = fVar112 + fVar33 * 0.0;
              bVar17 = NAN(fVar112);
              bVar19 = fVar112 < 0.0;
              bVar18 = false;
              if (fVar112 == 0.0) {
                bVar19 = false;
                bVar18 = false;
                bVar17 = true;
                if (!NAN(fVar33)) {
                  bVar19 = fVar33 < 0.0;
                  bVar18 = fVar33 == 0.0;
                  bVar17 = false;
                }
              }
              uVar24 = -(uint)(!bVar18 && bVar19 == bVar17);
LAB_0306962c:
              if (uVar24 != 0) {
                iVar46 = iVar54;
                uVar26 = uVar62;
              }
            }
          }
        }
        else {
          uVar26 = uVar62;
          iVar46 = iVar54;
        }
        uVar71 = NEON_fmin(uVar71,uVar106,4);
        auVar42._0_8_ = NEON_fmin(auVar42._0_8_,CONCAT44(fVar117 + fVar110,fVar105 + fVar110),4);
        iVar54 = iVar54 + 1;
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar31);
  }
  fVar61 = (float)uVar26;
  if (param_8 != (float *)0x0) {
    uVar48 = NEON_fmin(CONCAT44(SQRT((float)(uVar26 >> 0x20)) + (float)((ulong)*param_4 >> 0x20),
                                SQRT(fVar61) + (float)*param_4),*(undefined8 *)param_3,4);
    *param_8 = (float)uVar48;
  }
  if (iVar54 == 0) {
LAB_03069fdc:
    *param_7 = 0;
LAB_03069fec:
    fVar82 = (float)*(undefined8 *)param_3;
  }
  else {
    fVar95 = fVar95 * fVar95;
    if (!(bool)(~(fVar95 <= auVar42._0_4_) & 1)) {
      uVar77 = 0x3f000000;
LAB_03069fe8:
      *param_7 = uVar77;
      goto LAB_03069fec;
    }
    if (!(bool)(~(fVar95 <= fVar61) & 1)) goto LAB_03069fdc;
    if (!(bool)(~(fVar95 <= (float)uVar71) & 1)) {
      uVar77 = 0x3f800000;
      goto LAB_03069fe8;
    }
    pauVar21 = (undefined1 (*) [16])(lVar25 + (long)iVar46 * 0x30);
    iVar37 = -(uint)((float)uVar71 < fVar61);
    auVar38 = *pauVar21;
    auVar42 = pauVar21[1];
    auVar49 = pauVar21[2];
    iVar56 = iVar54 + -1;
    local_170 = (ulong)CONCAT13((byte)((ulong)uVar81 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18),
                                CONCAT12((byte)((ulong)uVar81 >> 0x10) &
                                         ~(byte)((uint)iVar37 >> 0x10),
                                         CONCAT11((byte)((ulong)uVar81 >> 8) &
                                                  ~(byte)((uint)iVar37 >> 8),
                                                  (byte)uVar81 & ~(byte)iVar37)));
    if (iVar56 != iVar46) {
      memcpy(pauVar21,(void *)(lVar25 + (long)iVar56 * 0x30),0x30);
    }
    puVar14 = PTR_DAT_047e4f48;
    puVar13 = PTR_DAT_047e4998;
    uVar48 = _DAT_03cab410;
    local_158 = NEON_fmax(uVar26,uVar71,4);
    if (iVar54 < 2) {
      uVar24 = 0;
    }
    else {
      fVar68 = 1.1920929e-07;
      fVar94 = 1.1920929e-07;
      uStack_d8 = (undefined4)_UNK_03cab418;
      uStack_d4 = (undefined4)((ulong)_UNK_03cab418 >> 0x20);
      uVar26 = 0x100000001;
      uVar24 = 0;
      uVar31 = 0;
      fVar61 = fVar68;
      fVar67 = fVar94;
      do {
        auVar39 = NEON_ext(auVar38,auVar38,8,1);
        auVar125 = NEON_ext(auVar42,auVar42,8,1);
        fVar70 = auVar42._12_4_;
        fVar96 = auVar38._12_4_;
        fVar36 = auVar39._4_4_;
        fVar69 = auVar125._4_4_;
        iVar46 = 0;
        iVar54 = -1;
        uVar27 = 0x7f7fffee7f7fffee;
        fVar41 = fVar70;
        do {
          pauVar21 = (undefined1 (*) [16])(lVar25 + (long)iVar46 * 0x30);
          fVar75 = *(float *)(*pauVar21 + 0xc);
          fVar76 = *(float *)(pauVar21[1] + 0xc);
          auVar40._0_8_ = CONCAT44(fVar76,fVar75);
          iVar37 = 0;
          auVar43._8_8_ = auVar40._0_8_;
          auVar43._0_8_ = CONCAT44(fVar69,fVar36);
          auVar40._8_8_ = CONCAT44(fVar69,fVar36);
          iVar47 = -(uint)(fVar36 < fVar75);
          iVar55 = -(uint)(fVar69 < fVar76);
          iVar57 = -(uint)(fVar75 < fVar36);
          iVar58 = -(uint)(fVar76 < fVar69);
          auVar50[0] = PTR_DAT_047e49a0[0xc0] ^ (byte)iVar47;
          auVar50[1] = PTR_DAT_047e49a0[0xc1] ^ (byte)((uint)iVar47 >> 8);
          auVar50[2] = PTR_DAT_047e49a0[0xc2] ^ (byte)((uint)iVar47 >> 0x10);
          auVar50[3] = PTR_DAT_047e49a0[0xc3] ^ (byte)((uint)iVar47 >> 0x18);
          auVar50[4] = PTR_DAT_047e49a0[0xc4] ^ (byte)iVar55;
          auVar50[5] = PTR_DAT_047e49a0[0xc5] ^ (byte)((uint)iVar55 >> 8);
          auVar50[6] = PTR_DAT_047e49a0[0xc6] ^ (byte)((uint)iVar55 >> 0x10);
          auVar50[7] = PTR_DAT_047e49a0[199] ^ (byte)((uint)iVar55 >> 0x18);
          auVar50[8] = PTR_DAT_047e49a0[200] ^ (byte)iVar57;
          auVar50[9] = PTR_DAT_047e49a0[0xc9] ^ (byte)((uint)iVar57 >> 8);
          auVar50[10] = PTR_DAT_047e49a0[0xca] ^ (byte)((uint)iVar57 >> 0x10);
          auVar50[0xb] = PTR_DAT_047e49a0[0xcb] ^ (byte)((uint)iVar57 >> 0x18);
          auVar50[0xc] = PTR_DAT_047e49a0[0xcc] ^ (byte)iVar58;
          auVar50[0xd] = PTR_DAT_047e49a0[0xcd] ^ (byte)((uint)iVar58 >> 8);
          auVar50[0xe] = PTR_DAT_047e49a0[0xce] ^ (byte)((uint)iVar58 >> 0x10);
          auVar50[0xf] = PTR_DAT_047e49a0[0xcf] ^ (byte)((uint)iVar58 >> 0x18);
          auVar40 = auVar40 ^ (auVar40 ^ auVar43) & auVar50;
          auVar39 = NEON_rev64(auVar40,4);
          iVar47 = -(uint)(auVar40._0_4_ < auVar39._0_4_);
          iVar55 = -(uint)(auVar40._4_4_ < auVar39._4_4_);
          iVar57 = -(uint)(auVar40._8_4_ < auVar39._8_4_);
          iVar58 = -(uint)(auVar40._12_4_ < auVar39._12_4_);
          auVar51[0] = puVar13[0xa0] ^ (byte)iVar47;
          auVar51[1] = puVar13[0xa1] ^ (byte)((uint)iVar47 >> 8);
          auVar51[2] = puVar13[0xa2] ^ (byte)((uint)iVar47 >> 0x10);
          auVar51[3] = puVar13[0xa3] ^ (byte)((uint)iVar47 >> 0x18);
          auVar51[4] = puVar13[0xa4] ^ (byte)iVar55;
          auVar51[5] = puVar13[0xa5] ^ (byte)((uint)iVar55 >> 8);
          auVar51[6] = puVar13[0xa6] ^ (byte)((uint)iVar55 >> 0x10);
          auVar51[7] = puVar13[0xa7] ^ (byte)((uint)iVar55 >> 0x18);
          auVar51[8] = puVar13[0xa8] ^ (byte)iVar57;
          auVar51[9] = puVar13[0xa9] ^ (byte)((uint)iVar57 >> 8);
          auVar51[10] = puVar13[0xaa] ^ (byte)((uint)iVar57 >> 0x10);
          auVar51[0xb] = puVar13[0xab] ^ (byte)((uint)iVar57 >> 0x18);
          auVar51[0xc] = puVar13[0xac] ^ (byte)iVar58;
          auVar51[0xd] = puVar13[0xad] ^ (byte)((uint)iVar58 >> 8);
          auVar51[0xe] = puVar13[0xae] ^ (byte)((uint)iVar58 >> 0x10);
          auVar51[0xf] = puVar13[0xaf] ^ (byte)((uint)iVar58 >> 0x18);
          auVar40 = auVar40 ^ (auVar40 ^ auVar39) & ~auVar51;
          auVar12._8_4_ = uStack_d8;
          auVar12._0_8_ = uVar48;
          auVar12._12_4_ = uStack_d4;
          auVar39 = a64_TBL(ZEXT816(0),auVar40,auVar12);
          iVar47 = -(uint)(auVar40._0_4_ < auVar39._0_4_);
          iVar55 = -(uint)(auVar40._4_4_ < auVar39._4_4_);
          iVar57 = -(uint)(auVar40._8_4_ < auVar39._8_4_);
          iVar58 = -(uint)(auVar40._12_4_ < auVar39._12_4_);
          auVar52._0_8_ =
               CONCAT17(puVar14[0x47] ^ (byte)((uint)iVar55 >> 0x18),
                        CONCAT16(puVar14[0x46] ^ (byte)((uint)iVar55 >> 0x10),
                                 CONCAT15(puVar14[0x45] ^ (byte)((uint)iVar55 >> 8),
                                          CONCAT14(puVar14[0x44] ^ (byte)iVar55,
                                                   CONCAT13(puVar14[0x43] ^
                                                            (byte)((uint)iVar47 >> 0x18),
                                                            CONCAT12(puVar14[0x42] ^
                                                                     (byte)((uint)iVar47 >> 0x10),
                                                                     CONCAT11(puVar14[0x41] ^
                                                                              (byte)((uint)iVar47 >>
                                                                                    8),puVar14[0x40]
                                                                                       ^ (byte)
                                                  iVar47)))))));
          auVar52[8] = puVar14[0x48] ^ (byte)iVar57;
          auVar52[9] = puVar14[0x49] ^ (byte)((uint)iVar57 >> 8);
          auVar52[10] = puVar14[0x4a] ^ (byte)((uint)iVar57 >> 0x10);
          auVar52[0xb] = puVar14[0x4b] ^ (byte)((uint)iVar57 >> 0x18);
          auVar52[0xc] = puVar14[0x4c] ^ (byte)iVar58;
          auVar52[0xd] = puVar14[0x4d] ^ (byte)((uint)iVar58 >> 8);
          auVar52[0xe] = puVar14[0x4e] ^ (byte)((uint)iVar58 >> 0x10);
          auVar52[0xf] = puVar14[0x4f] ^ (byte)((uint)iVar58 >> 0x18);
          auVar59._8_8_ = auVar52._8_8_;
          auVar59._0_8_ = auVar52._0_8_;
          auVar39 = auVar39 ^ (auVar39 ^ auVar40) & auVar59;
          uVar106 = uVar31;
          do {
            uVar71 = CONCAT44(auVar39._4_4_,auVar39._4_4_);
            if (((iVar37 != 1) && (uVar71 = CONCAT44(auVar39._12_4_,auVar39._12_4_), iVar37 != 3))
               && (uVar71 = CONCAT44(auVar39._8_4_,auVar39._8_4_), iVar37 != 2)) {
              uVar71 = CONCAT44(auVar39._0_4_,auVar39._0_4_);
            }
            uVar62 = NEON_fmin(uVar71,uVar81,4);
            fVar76 = (float)uVar106;
            fVar60 = (float)(uVar106 >> 0x20);
            fVar75 = (float)uVar62;
            if ((bool)(~(fVar75 <= fVar76) & 1)) {
              uVar72 = CONCAT44(-(uint)(fVar96 <= fVar60),-(uint)(fVar96 <= fVar76)) & uVar26;
              uVar78 = CONCAT44(-(uint)(fVar41 <= fVar60),-(uint)(fVar70 <= fVar76)) & uVar26;
              iVar47 = (int)uVar72;
              iVar55 = (int)(uVar72 >> 0x20);
              auVar73._0_4_ = (iVar47 << 0x1f) >> 0x1f;
              auVar73._4_4_ = (iVar55 << 0x1f) >> 0x1f;
              auVar73._8_4_ = (iVar47 << 0x1f) >> 0x1f;
              auVar73._12_4_ = (iVar55 << 0x1f) >> 0x1f;
              iVar47 = (int)uVar78;
              iVar55 = (int)(uVar78 >> 0x20);
              auVar74 = auVar38 ^ (auVar38 ^ auVar42) & auVar73;
              auVar79._0_4_ = (iVar47 << 0x1f) >> 0x1f;
              auVar79._4_4_ = (iVar55 << 0x1f) >> 0x1f;
              auVar79._8_4_ = (iVar47 << 0x1f) >> 0x1f;
              auVar79._12_4_ = (iVar55 << 0x1f) >> 0x1f;
              auVar74 = auVar74 ^ (auVar74 ^ auVar49) & auVar79;
              auVar125 = *pauVar21;
              uVar72 = CONCAT44(-(uint)(auVar125._12_4_ <= fVar60),
                                -(uint)(auVar125._12_4_ <= fVar76)) & uVar26;
              iVar47 = (int)uVar72;
              iVar55 = (int)(uVar72 >> 0x20);
              auVar102._0_4_ = (iVar47 << 0x1f) >> 0x1f;
              auVar102._4_4_ = (iVar55 << 0x1f) >> 0x1f;
              auVar102._8_4_ = (iVar47 << 0x1f) >> 0x1f;
              auVar102._12_4_ = (iVar55 << 0x1f) >> 0x1f;
              auVar125 = auVar125 ^ (auVar125 ^ pauVar21[1]) & auVar102;
              fVar80 = SUB164(pauVar21[1],0xc);
              uVar72 = CONCAT44(-(uint)(fVar80 <= fVar60),-(uint)(fVar80 <= fVar76)) & uVar26;
              iVar47 = (int)uVar72;
              iVar55 = (int)(uVar72 >> 0x20);
              auVar103._0_4_ = (iVar47 << 0x1f) >> 0x1f;
              auVar103._4_4_ = (iVar55 << 0x1f) >> 0x1f;
              auVar103._8_4_ = (iVar47 << 0x1f) >> 0x1f;
              auVar103._12_4_ = (iVar55 << 0x1f) >> 0x1f;
              auVar125 = auVar125 ^ (auVar125 ^ pauVar21[2]) & auVar103;
              auVar108._0_4_ = auVar74._0_4_ - auVar125._0_4_;
              auVar108._4_4_ = auVar74._4_4_ - auVar125._4_4_;
              auVar108._8_4_ = auVar74._8_4_ - auVar125._8_4_;
              auVar108._12_4_ = auVar74._12_4_ - auVar125._12_4_;
              iVar47 = -(uint)(auVar108._0_4_ == 0.0);
              iVar55 = -(uint)(auVar108._4_4_ == 0.0);
              iVar57 = -(uint)(auVar108._8_4_ == 0.0);
              if (CONCAT13((byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar47 >> 0x18) &
                           (byte)((uint)iVar57 >> 0x18),
                           CONCAT12((byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar47 >> 0x10) &
                                    (byte)((uint)iVar57 >> 0x10),
                                    CONCAT11((byte)((uint)iVar55 >> 8) & (byte)((uint)iVar47 >> 8) &
                                             (byte)((uint)iVar57 >> 8),
                                             (byte)iVar55 & (byte)iVar47 & (byte)iVar57))) != 0)
              goto LAB_03069ac4;
              auVar125 = NEON_ext(auVar108,auVar108,8,1);
              fVar80 = auVar125._0_4_ +
                       (fVar76 * auVar108._0_4_ + auVar108._4_4_ + auVar108._4_4_) * fVar76;
              if (0.0 < fVar80) goto LAB_03069e4c;
              fVar97 = auVar108._4_4_ * auVar108._4_4_ - auVar108._0_4_ * auVar108._8_4_;
              if (fVar97 <= 0.0) {
LAB_03069b94:
                fVar97 = auVar108._8_4_ +
                         fVar75 * (auVar108._4_4_ + auVar108._4_4_ + fVar75 * auVar108._0_4_);
                fVar80 = -fVar80;
                bVar17 = false;
                bVar18 = true;
                bVar19 = false;
                if (0.0 < fVar97) {
                  bVar17 = false;
                  bVar18 = false;
                  bVar19 = true;
                  if (!NAN(fVar97) && !NAN(fVar80)) {
                    bVar17 = fVar97 < fVar80;
                    bVar18 = fVar97 == fVar80;
                    bVar19 = false;
                  }
                }
                if (!bVar18 && bVar17 == bVar19) {
                  if (0.0 <= auVar108._0_4_) {
                    uVar106 = CONCAT44(0.00034526698 / SQRT(auVar108._0_4_) + fVar60,
                                       0.00034526698 / SQRT(auVar108._0_4_) + fVar76);
                  }
LAB_03069be4:
                  fVar76 = (float)uVar106;
                  fVar60 = (float)(uVar106 >> 0x20);
                  fVar60 = (auVar108._4_4_ + auVar108._4_4_ + auVar108._0_4_ * fVar60) * fVar60;
                  fVar80 = auVar108._8_4_ +
                           (auVar108._4_4_ + auVar108._4_4_ + auVar108._0_4_ * fVar76) * fVar76;
                  if (fVar80 <= 0.0) {
                    uVar28 = 0;
                    do {
                      fVar97 = (float)(uVar106 >> 0x20);
                      fVar76 = auVar108._4_4_ + auVar108._0_4_ * (float)uVar106;
                      fVar121 = auVar108._4_4_ + auVar108._0_4_ * fVar97;
                      uVar1 = uVar28 + 1;
                      if (fVar76 < 0.0) {
                        uVar3 = *(uint *)(param_9 + 0x1c);
                        if (uVar3 <= uVar1) {
                          uVar3 = uVar28 + 1;
                        }
                        *(uint *)(param_9 + 0x1c) = uVar3;
                        goto LAB_03069ac4;
                      }
                      iVar47 = -(uint)(fVar76 + fVar76 == 0.0);
                      uVar77 = CONCAT13(~(byte)((uint)iVar47 >> 0x18),
                                        CONCAT12(~(byte)((uint)iVar47 >> 0x10),
                                                 CONCAT11(~(byte)((uint)iVar47 >> 8),~(byte)iVar47))
                                       );
                      uVar72 = CONCAT44(fVar85 / (fVar121 + fVar121),fVar82 / (fVar76 + fVar76)) &
                               CONCAT44(uVar77,uVar77);
                      fVar76 = (ABS(auVar108._8_4_ * fVar68) - fVar80) * (float)uVar72 +
                               4.7683716e-07 + (float)uVar106;
                      fVar97 = (ABS(auVar108._8_4_ * fVar94) - (auVar108._8_4_ + fVar60)) *
                               (float)(uVar72 >> 0x20) + 4.7683716e-07 + fVar97;
                      fVar60 = fVar97 * (auVar108._4_4_ + auVar108._4_4_ + auVar108._0_4_ * fVar97);
                      fVar80 = auVar108._8_4_ +
                               fVar76 * (auVar108._4_4_ + auVar108._4_4_ + auVar108._0_4_ * fVar76);
                      uVar106 = CONCAT44(fVar97,fVar76);
                      uVar28 = uVar1;
                    } while (fVar80 <= 0.0);
                    uVar28 = *(uint *)(param_9 + 0x1c);
                    if (*(uint *)(param_9 + 0x1c) <= uVar1) {
                      uVar28 = uVar1;
                    }
                    *(uint *)(param_9 + 0x1c) = uVar28;
                  }
                  if (fVar76 < fVar75) goto LAB_03069e4c;
                }
              }
              else {
                fVar97 = SQRT(fVar97);
                fVar121 = SQRT(auVar108._4_4_ * auVar108._4_4_ - auVar108._0_4_ * auVar108._8_4_);
                uVar72 = CONCAT44(-(uint)(auVar108._4_4_ < 0.0),-(uint)(auVar108._4_4_ < 0.0)) &
                         0x8000000080000000;
                fVar97 = (float)CONCAT13((byte)(uVar72 >> 0x18) ^ (byte)((uint)fVar97 >> 0x18),
                                         SUB43(fVar97,0));
                fVar105 = -(auVar108._4_4_ + fVar97);
                fVar97 = -(auVar108._4_4_ +
                          (float)(CONCAT17((byte)(uVar72 >> 0x38) ^ (byte)((uint)fVar121 >> 0x18),
                                           CONCAT16((char)((uint)fVar121 >> 0x10),
                                                    CONCAT15((char)((uint)fVar121 >> 8),
                                                             CONCAT14(SUB41(fVar121,0),fVar97)))) >>
                                 0x20));
                if (fVar105 == 0.0) goto LAB_03069b94;
                uVar72 = CONCAT44(auVar108._8_4_ / fVar97,auVar108._8_4_ / fVar105);
                if (auVar108._4_4_ + auVar108._0_4_ * (auVar108._8_4_ / fVar105) < 0.0) {
                  if (auVar108._0_4_ == 0.0) goto LAB_03069b94;
                  uVar72 = CONCAT44(fVar97 / auVar108._0_4_,fVar105 / auVar108._0_4_);
                }
                if ((bool)(~(fVar75 <= (float)uVar72) & 1)) {
                  if (fVar76 <= (float)uVar72) {
                    uVar106 = uVar72;
                  }
                  else if (auVar108._4_4_ + fVar76 * auVar108._0_4_ <= 0.0) goto LAB_03069ac4;
                  goto LAB_03069be4;
                }
              }
LAB_03069ac4:
              if (1.0 <= fVar75) goto LAB_03069e88;
              uVar106 = uVar62;
            }
            iVar37 = iVar37 + 1;
          } while (iVar37 != 4);
          lVar22 = lVar25 + (long)iVar46 * 0x30;
          auVar64._0_4_ = auVar49._0_4_ - *(float *)(lVar22 + 0x20);
          auVar64._4_4_ = auVar49._4_4_ - *(float *)(lVar22 + 0x24);
          auVar64._8_4_ = auVar49._8_4_ - *(float *)(lVar22 + 0x28);
          auVar64._12_4_ = auVar49._12_4_ - *(float *)(lVar22 + 0x2c);
          fVar75 = (float)uVar106;
          auVar39 = NEON_ext(auVar64,auVar64,8,1);
          fVar76 = auVar39._0_4_ + (fVar75 * auVar64._0_4_ + auVar64._4_4_ + auVar64._4_4_) * fVar75
          ;
          if (0.0 < fVar76) {
LAB_03069e54:
            iVar37 = iVar46;
            if ((float)uVar27 <= (float)uVar106) {
              iVar37 = iVar54;
              uVar106 = uVar27;
            }
            uVar27 = uVar106;
            iVar46 = iVar46 + 1;
            iVar54 = iVar37;
          }
          else {
            fVar60 = auVar64._4_4_ * auVar64._4_4_ - auVar64._0_4_ * auVar64._8_4_;
            if (fVar60 <= 0.0) {
LAB_03069d64:
              fVar60 = auVar64._8_4_ + auVar64._4_4_ + auVar64._4_4_ + auVar64._0_4_;
              fVar76 = -fVar76;
              bVar17 = false;
              bVar18 = true;
              bVar19 = false;
              if (0.0 < fVar60) {
                bVar17 = false;
                bVar18 = false;
                bVar19 = true;
                if (!NAN(fVar60) && !NAN(fVar76)) {
                  bVar17 = fVar60 < fVar76;
                  bVar18 = fVar60 == fVar76;
                  bVar19 = false;
                }
              }
              if (!bVar18 && bVar17 == bVar19) {
                if (0.0 <= auVar64._0_4_) {
                  uVar106 = CONCAT44(0.00034526698 / SQRT(auVar64._0_4_) + (float)(uVar106 >> 0x20),
                                     0.00034526698 / SQRT(auVar64._0_4_) + fVar75);
                }
LAB_03069dac:
                fVar76 = (float)uVar106;
                fVar75 = (float)(uVar106 >> 0x20);
                fVar75 = (auVar64._4_4_ + auVar64._4_4_ + auVar64._0_4_ * fVar75) * fVar75;
                fVar60 = auVar64._8_4_ +
                         (auVar64._4_4_ + auVar64._4_4_ + auVar64._0_4_ * fVar76) * fVar76;
                if (fVar60 <= 0.0) {
                  uVar28 = 0;
                  do {
                    fVar80 = (float)(uVar106 >> 0x20);
                    fVar76 = auVar64._4_4_ + auVar64._0_4_ * (float)uVar106;
                    fVar97 = auVar64._4_4_ + auVar64._0_4_ * fVar80;
                    uVar1 = uVar28 + 1;
                    if (fVar76 < 0.0) {
                      uVar3 = *(uint *)(param_9 + 0x1c);
                      if (uVar3 <= uVar1) {
                        uVar3 = uVar28 + 1;
                      }
                      *(uint *)(param_9 + 0x1c) = uVar3;
                      goto LAB_03069e88;
                    }
                    iVar37 = -(uint)(fVar76 + fVar76 == 0.0);
                    uVar77 = CONCAT13(~(byte)((uint)iVar37 >> 0x18),
                                      CONCAT12(~(byte)((uint)iVar37 >> 0x10),
                                               CONCAT11(~(byte)((uint)iVar37 >> 8),~(byte)iVar37)));
                    uVar62 = CONCAT44(fVar85 / (fVar97 + fVar97),fVar82 / (fVar76 + fVar76)) &
                             CONCAT44(uVar77,uVar77);
                    fVar76 = (ABS(auVar64._8_4_ * fVar68) - fVar60) * (float)uVar62 + 4.7683716e-07
                             + (float)uVar106;
                    fVar80 = (ABS(auVar64._8_4_ * fVar94) - (auVar64._8_4_ + fVar75)) *
                             (float)(uVar62 >> 0x20) + 4.7683716e-07 + fVar80;
                    fVar75 = fVar80 * (auVar64._4_4_ + auVar64._4_4_ + auVar64._0_4_ * fVar80);
                    fVar60 = auVar64._8_4_ +
                             fVar76 * (auVar64._4_4_ + auVar64._4_4_ + auVar64._0_4_ * fVar76);
                    uVar106 = CONCAT44(fVar80,fVar76);
                    uVar28 = uVar1;
                  } while (fVar60 <= 0.0);
                  uVar28 = *(uint *)(param_9 + 0x1c);
                  if (*(uint *)(param_9 + 0x1c) <= uVar1) {
                    uVar28 = uVar1;
                  }
                  *(uint *)(param_9 + 0x1c) = uVar28;
                }
LAB_03069e4c:
                if (fVar76 < 1.0) goto LAB_03069e54;
              }
            }
            else {
              fVar60 = SQRT(fVar60);
              fVar80 = SQRT(auVar64._4_4_ * auVar64._4_4_ - auVar64._0_4_ * auVar64._8_4_);
              uVar62 = CONCAT44(-(uint)(auVar64._4_4_ < 0.0),-(uint)(auVar64._4_4_ < 0.0)) &
                       0x8000000080000000;
              fVar60 = (float)CONCAT13((byte)(uVar62 >> 0x18) ^ (byte)((uint)fVar60 >> 0x18),
                                       SUB43(fVar60,0));
              fVar97 = -(auVar64._4_4_ + fVar60);
              fVar60 = -(auVar64._4_4_ +
                        (float)(CONCAT17((byte)(uVar62 >> 0x38) ^ (byte)((uint)fVar80 >> 0x18),
                                         CONCAT16((char)((uint)fVar80 >> 0x10),
                                                  CONCAT15((char)((uint)fVar80 >> 8),
                                                           CONCAT14(SUB41(fVar80,0),fVar60)))) >>
                               0x20));
              if (fVar97 == 0.0) goto LAB_03069d64;
              uVar62 = CONCAT44(auVar64._8_4_ / fVar60,auVar64._8_4_ / fVar97);
              if (auVar64._4_4_ + auVar64._0_4_ * (auVar64._8_4_ / fVar97) < 0.0) {
                if (auVar64._0_4_ == 0.0) goto LAB_03069d64;
                uVar62 = CONCAT44(fVar60 / auVar64._0_4_,fVar97 / auVar64._0_4_);
              }
              if ((float)uVar62 < 1.0) {
                if (fVar75 <= (float)uVar62) {
                  uVar106 = uVar62;
                }
                else if (auVar64._4_4_ + fVar75 * auVar64._0_4_ <= 0.0) goto LAB_03069e88;
                goto LAB_03069dac;
              }
            }
LAB_03069e88:
            iVar56 = iVar56 + -1;
            if (iVar56 == iVar46) {
              iVar56 = iVar46;
              break;
            }
            memcpy(pauVar21,(void *)(lVar25 + (long)iVar56 * 0x30),0x30);
          }
        } while (iVar46 < iVar56);
        if (iVar54 == -1) break;
        pauVar21 = (undefined1 (*) [16])(lVar25 + (long)iVar54 * 0x30);
        auVar39 = pauVar21[2];
        auVar125 = *pauVar21;
        auVar74 = pauVar21[1];
        fVar36 = (float)uVar27;
        fVar69 = (float)(uVar27 >> 0x20);
        uVar106 = CONCAT44(-(uint)(auVar74._12_4_ <= fVar69),-(uint)(auVar74._12_4_ <= fVar36)) &
                  uVar26;
        uVar31 = CONCAT44(-(uint)(auVar125._12_4_ <= fVar69),-(uint)(auVar125._12_4_ <= fVar36)) &
                 uVar26;
        iVar47 = (int)uVar106;
        iVar55 = (int)(uVar106 >> 0x20);
        iVar46 = (int)uVar31;
        iVar37 = (int)(uVar31 >> 0x20);
        auVar53._0_4_ = (iVar47 << 0x1f) >> 0x1f;
        auVar53._4_4_ = (iVar55 << 0x1f) >> 0x1f;
        auVar53._8_4_ = (iVar47 << 0x1f) >> 0x1f;
        auVar53._12_4_ = (iVar55 << 0x1f) >> 0x1f;
        auVar44._0_4_ = (iVar46 << 0x1f) >> 0x1f;
        auVar44._4_4_ = (iVar37 << 0x1f) >> 0x1f;
        auVar44._8_4_ = (iVar46 << 0x1f) >> 0x1f;
        auVar44._12_4_ = (iVar37 << 0x1f) >> 0x1f;
        auVar45 = auVar125 ^ (auVar125 ^ auVar74) & auVar44;
        auVar45 = auVar45 ^ (auVar45 ^ auVar39) & auVar53;
        uVar106 = CONCAT44(-(uint)(fVar96 <= fVar69),-(uint)(fVar96 <= fVar36)) & uVar26;
        uVar31 = CONCAT44(-(uint)(fVar41 <= fVar69),-(uint)(fVar70 <= fVar36)) & uVar26;
        iVar47 = (int)uVar31;
        iVar55 = (int)(uVar31 >> 0x20);
        iVar46 = (int)uVar106;
        iVar37 = (int)(uVar106 >> 0x20);
        auVar65._0_4_ = (iVar46 << 0x1f) >> 0x1f;
        auVar65._4_4_ = (iVar37 << 0x1f) >> 0x1f;
        auVar65._8_4_ = (iVar46 << 0x1f) >> 0x1f;
        auVar65._12_4_ = (iVar37 << 0x1f) >> 0x1f;
        auVar66 = auVar38 ^ (auVar38 ^ auVar42) & auVar65;
        auVar5._4_4_ = (iVar55 << 0x1f) >> 0x1f;
        auVar5._0_4_ = (iVar47 << 0x1f) >> 0x1f;
        auVar5._8_4_ = (iVar47 << 0x1f) >> 0x1f;
        auVar5._12_4_ = (iVar55 << 0x1f) >> 0x1f;
        auVar66 = auVar66 ^ (auVar66 ^ auVar49) & auVar5;
        fVar41 = fVar36 * fVar36 * auVar45._0_4_;
        fVar96 = (fVar36 + fVar36) * auVar45._4_4_;
        fVar70 = (float)DAT_03cb5410 * auVar45._8_4_;
        fVar75 = fVar36 * fVar36 * auVar66._0_4_;
        fVar76 = (fVar36 + fVar36) * auVar66._4_4_;
        fVar60 = (float)DAT_03cb5410 * auVar66._8_4_;
        uVar71 = NEON_fmin(CONCAT44(fVar41 + fVar96 + fVar70,fVar41 + fVar96 + fVar70),
                           CONCAT44(fVar60 + fVar75 + fVar76,fVar60 + fVar75 + fVar76),4);
        fVar41 = (float)uVar71;
        bVar17 = (float)local_158 < fVar41;
        if (bVar17) {
          if (!(bool)(~(fVar95 <= fVar41) & 1)) goto LAB_0306a138;
          local_170 = uVar27;
          local_158 = uVar71;
        }
        uVar31 = CONCAT44(fVar67 + fVar69,fVar61 + fVar36);
        uVar24 = uVar24 + 1;
        *(long *)(*pauVar21 + 8) = auVar38._8_8_;
        *(long *)*pauVar21 = auVar38._0_8_;
        lVar22 = lVar25 + (long)iVar54 * 0x30;
        fVar61 = fVar61 + fVar61;
        fVar67 = fVar67 + fVar67;
        *(long *)(lVar22 + 0x18) = auVar42._8_8_;
        *(long *)(lVar22 + 0x10) = auVar42._0_8_;
        *(long *)(lVar22 + 0x28) = auVar49._8_8_;
        *(long *)(lVar22 + 0x20) = auVar49._0_8_;
        auVar38 = auVar125;
        auVar42 = auVar74;
        auVar49 = auVar39;
      } while (0 < iVar56);
    }
    uVar27 = local_170;
    fVar41 = (float)local_158;
LAB_0306a138:
    uVar28 = *(uint *)(param_9 + 0x18);
    if (*(uint *)(param_9 + 0x18) <= uVar24) {
      uVar28 = uVar24;
    }
    *(uint *)(param_9 + 0x18) = uVar28;
    *param_7 = (int)uVar27;
    fVar85 = SQRT(fVar41) + (float)*param_4;
    fVar82 = (float)*param_4 * 1.0000001;
    if (fVar82 <= 1.1754944e-38) {
      fVar82 = 1.1754944e-38;
    }
    fVar61 = (float)*(undefined8 *)param_3;
    if (fVar85 <= (float)*(undefined8 *)param_3) {
      fVar61 = fVar85;
    }
    if (fVar82 <= fVar85) {
      fVar82 = fVar61;
    }
  }
  param_7[1] = fVar82;
  if (lVar30 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar25,lVar29 * 0x30);
    goto LAB_0306a0cc;
  }
  uVar31 = lVar29 * 0x30 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar30 + 0x28) < uVar31) || (*(long *)(lVar30 + 0x38) != uVar31 + lVar25)) {
    if (lVar25 == 0) goto LAB_0306a0cc;
    if (*(ulong *)(lVar30 + 0x28) < uVar31 + 0x40) {
      *(int *)(*(long *)(lVar30 + 0x30) + 0x20) = *(int *)(*(long *)(lVar30 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar30 + 0x10) + 0x18))
                (*(long **)(lVar30 + 0x10),lVar25 - *(int *)(lVar25 + -4),uVar31 + 0x44);
      goto LAB_0306a0cc;
    }
    if (*(long *)(lVar30 + 0x38) != uVar31 + lVar25) {
      FUN_031cf778(lVar30,lVar25);
      goto LAB_0306a0cc;
    }
    *(long *)(lVar30 + 0x38) = lVar25;
  }
  else {
    *(long *)(lVar30 + 0x38) = lVar25;
    if (*(long *)(lVar30 + 0x48) != lVar25) goto LAB_0306a0cc;
  }
  FUN_031cf578(lVar30);
LAB_0306a0cc:
  lVar29 = nn::os::GetSystemTick();
  *(long *)(param_9 + 8) = (lVar29 - lVar20) + *(long *)(param_9 + 8);
  *(int *)(param_9 + 0x10) = *(int *)(param_9 + 0x10) + 1;
  return;
}


