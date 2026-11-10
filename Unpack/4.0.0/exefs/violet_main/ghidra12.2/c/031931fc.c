/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031931fc; name: FUN_031931fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031931fc(float param_1,float *param_2,undefined8 *param_3,int param_4,uint param_5,
                 float *param_6,undefined8 param_7)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 uVar49;
  int iVar50;
  ulong uVar51;
  undefined *puVar52;
  int iVar53;
  int iVar54;
  long lVar55;
  uint uVar56;
  int iVar57;
  int iVar58;
  long lVar59;
  int iVar60;
  uint uVar61;
  int iVar62;
  int iVar63;
  ulong uVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 auVar82 [12];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar85;
  float fVar86;
  float fVar87;
  undefined8 uVar88;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar95;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  undefined8 uVar110;
  float fVar111;
  float fVar112;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float local_180;
  float fStack_17c;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  long local_e8;
  undefined8 local_e0;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  local_d0 = 0;
  local_c8 = 0x8000000000000000;
  fVar74 = (float)param_3[1];
  fVar79 = (float)((ulong)param_3[1] >> 0x20);
  fVar65 = (float)*param_3;
  fVar69 = (float)((ulong)*param_3 >> 0x20);
  fVar85 = fVar65 - *param_2;
  fVar91 = fVar69 - param_2[1];
  fVar94 = fVar74 - param_2[2];
  fVar95 = fVar85 * fVar85 + fVar91 * fVar91 + fVar94 * fVar94;
  fVar111 = SQRT(fVar95);
  fVar112 = SQRT(fVar85 * fVar85 + fVar91 * fVar91 + fVar94 * fVar94);
  fVar104 = (float)_UNK_03cabe68;
  fVar102 = (float)((ulong)_UNK_03cabe68 >> 0x20);
  fVar101 = (float)_DAT_03cabe60;
  fVar103 = (float)((ulong)_DAT_03cabe60 >> 0x20);
  fVar68 = (float)_DAT_03caa5b0;
  fVar73 = (float)((ulong)_DAT_03caa5b0 >> 0x20);
  fVar77 = (float)_UNK_03caa5b8;
  fVar78 = (float)((ulong)_UNK_03caa5b8 >> 0x20);
  if (0.0 < fVar111) {
    if (fVar95 == 0.0) {
      fVar85 = 0.0;
      fVar91 = 0.0;
      fVar94 = 0.0;
      fVar95 = 0.0;
    }
    else {
      fVar85 = fVar85 / fVar111;
      fVar91 = fVar91 / fVar112;
      fVar94 = fVar94 / fVar111;
      fVar95 = (fVar79 - param_2[3]) / fVar112;
    }
    if (0.99999 <= ABS(fVar85 * fVar68 + fVar91 * fVar73 + fVar94 * fVar77)) {
      uStack_118 = DAT_03cab628;
      local_120 = DAT_03cab620;
      fVar85 = fVar68;
      fVar91 = fVar73;
      fVar94 = fVar77;
      fVar95 = fVar78;
    }
    else {
      auVar97._4_4_ = fVar91;
      auVar97._0_4_ = fVar85;
      auVar97._8_4_ = fVar94;
      auVar97._12_4_ = fVar95;
      auVar48._4_4_ = fVar91;
      auVar48._0_4_ = fVar85;
      auVar48._8_4_ = fVar94;
      auVar48._12_4_ = fVar95;
      auVar97 = NEON_ext(auVar97,auVar48,4,1);
      fVar81 = fVar85 * fVar101 + auVar97._0_4_ * (float)_DAT_03cac220;
      fVar101 = fVar91 * fVar103 + auVar97._4_4_ * (float)((ulong)_DAT_03cac220 >> 0x20);
      fVar103 = fVar94 * fVar104 + fVar85 * (float)_UNK_03cac228;
      fVar104 = fVar95 * fVar102 + fVar91 * (float)((ulong)_UNK_03cac228 >> 0x20);
      auVar90._4_4_ = fVar101;
      auVar90._0_4_ = fVar81;
      auVar90._8_4_ = fVar103;
      auVar90._12_4_ = fVar104;
      auVar96._4_4_ = fVar101;
      auVar96._0_4_ = fVar81;
      auVar96._8_4_ = fVar103;
      auVar96._12_4_ = fVar104;
      auVar90 = NEON_ext(auVar90,auVar96,4,1);
      fVar101 = auVar90._0_4_;
      fVar103 = auVar90._4_4_;
      fVar104 = fVar81 * fVar81 + fVar101 * fVar101 + fVar103 * fVar103;
      if (fVar104 == 0.0) {
        fVar101 = 0.0;
        fVar103 = 0.0;
        fVar104 = 0.0;
        fVar102 = 0.0;
      }
      else {
        fVar104 = SQRT(fVar104);
        fVar102 = SQRT(fVar81 * fVar81 + fVar101 * fVar101 + fVar103 * fVar103);
        fVar101 = fVar101 / fVar104;
        fVar103 = fVar103 / fVar102;
        fVar104 = fVar81 / fVar104;
        fVar102 = 0.0 / fVar102;
      }
      auVar46._4_4_ = fVar103;
      auVar46._0_4_ = fVar101;
      auVar46._8_4_ = fVar104;
      auVar46._12_4_ = fVar102;
      auVar47._4_4_ = fVar103;
      auVar47._0_4_ = fVar101;
      auVar47._8_4_ = fVar104;
      auVar47._12_4_ = fVar102;
      auVar90 = NEON_ext(auVar46,auVar47,4,1);
      auVar89._0_4_ = auVar97._0_4_ * fVar101 - fVar85 * auVar90._0_4_;
      auVar89._4_4_ = auVar97._4_4_ * fVar103 - fVar91 * auVar90._4_4_;
      auVar89._8_4_ = fVar85 * fVar104 - fVar94 * fVar101;
      auVar89._12_4_ = fVar91 * fVar102 - fVar95 * fVar103;
      auVar90 = NEON_ext(auVar89,auVar89,4,1);
      uStack_118 = (ulong)(uint)auVar89._0_4_;
      local_120 = auVar90._0_8_;
    }
  }
  else {
    uStack_118 = _UNK_03caa5c8;
    local_120 = _DAT_03caa5c0;
    fVar85 = (float)DAT_03cab620;
    fVar91 = (float)((ulong)DAT_03cab620 >> 0x20);
    fVar94 = (float)DAT_03cab628;
    fVar95 = (float)(DAT_03cab628 >> 0x20);
  }
  fVar65 = (fVar65 + *param_2) * 0.5;
  fVar69 = (fVar69 + param_2[1]) * 0.5;
  fVar74 = (fVar74 + param_2[2]) * 0.5;
  fVar79 = (fVar79 + param_2[3]) * 0.5;
  fVar81 = -fVar111;
  auVar83._0_8_ = CONCAT44(-fVar112,fVar81);
  auVar83._8_8_ = auVar83._0_8_;
  auVar82 = auVar83._0_12_;
  iVar63 = (param_5 & 0xfffffffe) + param_4;
  iVar60 = (iVar63 + -1) * param_5 + 2;
  if (iVar60 < 1) {
    iVar60 = 0;
    uVar56 = 0;
  }
  else {
    FUN_02f0842c(&local_d0,PTR_PTR_047d1a50,iVar60);
    auVar82._4_4_ = -fVar112;
    auVar82._0_4_ = fVar81;
    auVar82._8_4_ = fVar81;
    iVar60 = (int)local_c8;
    uVar56 = local_c8._4_4_;
  }
  iVar57 = (int)param_5 >> 1;
  fVar111 = param_1 + fVar111 * 0.5;
  fVar81 = param_1 + fVar112 * 0.5;
  uVar61 = iVar60 + 1;
  uVar64 = (ulong)uVar61;
  fVar112 = fVar111 * fVar68;
  fVar70 = fVar81 * fVar73;
  fVar75 = fVar111 * fVar77;
  auVar84._8_4_ = fVar74 + fVar94 * fVar75 + (float)uStack_118 * fVar112 + fVar104 * fVar70;
  auVar84._12_4_ = fVar79 + fVar95 * fVar75 + uStack_118._4_4_ * fVar112 + fVar102 * fVar70;
  if ((int)(uVar56 & 0x7fffffff) <= iVar60) {
    FUN_02e9b11c(&local_d0,PTR_PTR_047d1a50,(long)(int)uVar61);
    iVar60 = (int)local_c8;
  }
  uVar49 = CONCAT44(fVar69 + fVar91 * fVar75 + local_120._4_4_ * fVar112 + fVar103 * fVar70,
                    fVar65 + fVar85 * fVar75 + (float)local_120 * fVar112 + fVar101 * fVar70);
  auVar84._0_8_ = uVar49;
  fVar112 = auVar82._0_4_ * fVar68 * 0.5;
  fVar70 = auVar82._4_4_ * fVar73 * 0.5;
  fVar75 = auVar82._8_4_ * fVar77 * 0.5;
  uVar110 = NEON_fmov(0x3f800000,4);
  uVar42 = NEON_scvtf(CONCAT44(iVar57,iVar57),4);
  fVar67 = (float)uVar110;
  fVar72 = (float)((ulong)uVar110 >> 0x20);
  uVar88 = NEON_scvtf(CONCAT44(param_5,param_5),4);
  puVar7 = (undefined8 *)(local_d0 + (long)iVar60 * 0x10);
  puVar7[1] = auVar84._8_8_;
  *puVar7 = uVar49;
  puVar4 = PTR_PTR_047d1a50;
  uVar45 = _UNK_03cabd98;
  uVar44 = _DAT_03cabd90;
  uVar51 = DAT_03cab628;
  uVar43 = DAT_03cab620;
  uVar110 = _UNK_03caa5b8;
  uVar49 = _DAT_03caa5b0;
  fVar106 = (fVar67 / (float)uVar42) * 1.5707964;
  fVar107 = (fVar72 / (float)((ulong)uVar42 >> 0x20)) * 1.5707964;
  fVar108 = (fVar67 / (float)uVar88) * 6.2831855;
  fVar109 = (fVar72 / (float)((ulong)uVar88 >> 0x20)) * 6.2831855;
  local_c8._0_4_ = uVar61;
  if (1 < (int)param_5) {
    iVar60 = iVar57;
    do {
      iVar58 = iVar60 + -1;
      uVar42 = NEON_scvtf(CONCAT44(iVar58,iVar58),4);
      fVar66 = fVar106 * (float)uVar42 * 0.5;
      fVar71 = fVar107 * (float)((ulong)uVar42 >> 0x20) * 0.5;
      uStack_b8 = CONCAT44(fVar71,fVar66);
      local_c0 = CONCAT44(fVar71,fVar66);
      FUN_01170160(&local_c0,&local_110,&local_b0);
      fVar66 = SUB84(local_110,0);
      uVar56 = 0;
      local_1d0 = (float)uVar44;
      fStack_1cc = (float)((ulong)uVar44 >> 0x20);
      fStack_1c8 = (float)uVar45;
      fStack_1c4 = (float)((ulong)uVar45 >> 0x20);
      local_1d0 = local_1d0 * fVar66;
      fStack_1cc = fStack_1cc * fVar66;
      fStack_1c8 = fStack_1c8 * fVar66;
      auVar8._4_4_ = fStack_1cc;
      auVar8._0_4_ = local_1d0;
      auVar8._8_4_ = fStack_1c8;
      auVar8._12_4_ = fStack_1c4 * fVar66;
      auVar9._4_4_ = fStack_1cc;
      auVar9._0_4_ = local_1d0;
      auVar9._8_4_ = fStack_1c8;
      auVar9._12_4_ = fStack_1c4 * fVar66;
      auVar96 = NEON_ext(auVar8,auVar9,4,1);
      auVar10._4_4_ = fStack_1cc;
      auVar10._0_4_ = local_1d0;
      auVar10._8_4_ = fStack_1c8;
      auVar10._12_4_ = local_b0._4_4_;
      auVar11._4_4_ = fStack_1cc;
      auVar11._0_4_ = local_1d0;
      auVar11._8_4_ = fStack_1c8;
      auVar11._12_4_ = local_b0._4_4_;
      auVar90 = NEON_ext(auVar10,auVar11,8,1);
      fVar87 = (float)uVar43;
      fVar93 = (float)((ulong)uVar43 >> 0x20);
      fVar99 = (float)uVar51;
      fVar105 = (float)(uVar51 >> 0x20);
      fVar92 = auVar90._4_4_ * auVar90._4_4_;
      fVar98 = local_1d0 * fVar87 + fStack_1cc * fVar93 + fStack_1c8 * fVar99;
      fVar100 = local_1d0 * fVar87 + fStack_1cc * fVar93 + fStack_1c8 * fVar99;
      fVar86 = fVar92 + -0.5;
      fVar92 = fVar92 + -0.5;
      fVar66 = local_1d0 * fVar68 - auVar96._0_4_ * fVar87;
      fVar71 = fStack_1cc * fVar73 - auVar96._4_4_ * fVar93;
      fVar76 = fStack_1c8 * fVar77 - local_1d0 * fVar99;
      fVar80 = local_b0._4_4_ * fVar78 - fStack_1cc * fVar105;
      auVar12._4_4_ = fVar71;
      auVar12._0_4_ = fVar66;
      auVar12._8_4_ = fVar76;
      auVar12._12_4_ = fVar80;
      auVar13._4_4_ = fVar71;
      auVar13._0_4_ = fVar66;
      auVar13._8_4_ = fVar76;
      auVar13._12_4_ = fVar80;
      auVar90 = NEON_ext(auVar12,auVar13,4,1);
      fVar71 = fVar86 * fVar87 + local_1d0 * fVar98 + auVar90._0_4_ * local_b0._4_4_;
      fVar76 = fVar92 * fVar93 + fStack_1cc * fVar100 + auVar90._4_4_ * local_b0._4_4_;
      fVar66 = fVar86 * fVar99 + fStack_1c8 * fVar98 + fVar66 * local_b0._4_4_;
      fVar80 = fVar92 * fVar105 + local_b0._4_4_ * fVar100 + local_b0._4_4_ * 0.0;
      fVar71 = fVar71 + fVar71;
      fVar76 = fVar76 + fVar76;
      fVar66 = fVar66 + fVar66;
      fVar80 = fVar80 + fVar80;
      auVar14._4_4_ = fVar76;
      auVar14._0_4_ = fVar71;
      auVar14._8_4_ = fVar66;
      auVar14._12_4_ = fVar80;
      auVar15._4_4_ = fVar76;
      auVar15._0_4_ = fVar71;
      auVar15._8_4_ = fVar66;
      auVar15._12_4_ = fVar80;
      auVar90 = NEON_ext(auVar14,auVar15,4,1);
      do {
        uVar42 = NEON_scvtf(CONCAT44(uVar56,uVar56),4);
        fVar86 = fVar108 * (float)uVar42 * 0.5;
        fVar92 = fVar109 * (float)((ulong)uVar42 >> 0x20) * 0.5;
        uStack_b8 = CONCAT44(fVar92,fVar86);
        local_c0 = CONCAT44(fVar92,fVar86);
        FUN_01170160(&local_c0,&local_110,&local_b0);
        fVar86 = SUB84(local_110,0);
        local_1a0 = (float)uVar49;
        fStack_19c = (float)((ulong)uVar49 >> 0x20);
        fStack_198 = (float)uVar110;
        fStack_194 = (float)((ulong)uVar110 >> 0x20);
        local_1a0 = local_1a0 * fVar86;
        fStack_19c = fStack_19c * fVar86;
        fStack_198 = fStack_198 * fVar86;
        uVar64 = (long)(int)(uint)local_c8 + 1;
        auVar16._4_4_ = fStack_19c;
        auVar16._0_4_ = local_1a0;
        auVar16._8_4_ = fStack_198;
        auVar16._12_4_ = fStack_194 * fVar86;
        auVar17._4_4_ = fStack_19c;
        auVar17._0_4_ = local_1a0;
        auVar17._8_4_ = fStack_198;
        auVar17._12_4_ = fStack_194 * fVar86;
        auVar97 = NEON_ext(auVar16,auVar17,4,1);
        auVar18._4_4_ = fStack_19c;
        auVar18._0_4_ = local_1a0;
        auVar18._8_4_ = fStack_198;
        auVar18._12_4_ = local_b0._4_4_;
        auVar19._4_4_ = fStack_19c;
        auVar19._0_4_ = local_1a0;
        auVar19._8_4_ = fStack_198;
        auVar19._12_4_ = local_b0._4_4_;
        auVar96 = NEON_ext(auVar18,auVar19,8,1);
        fVar93 = auVar96._4_4_ * auVar96._4_4_;
        fVar99 = fVar71 * local_1a0 + fVar76 * fStack_19c + fVar66 * fStack_198;
        fVar87 = fVar93 + -0.5;
        local_180 = auVar90._0_4_;
        fStack_17c = auVar90._4_4_;
        fVar86 = local_180 * local_1a0 - fVar71 * auVar97._0_4_;
        fVar92 = fStack_17c * fStack_19c - fVar76 * auVar97._4_4_;
        fVar98 = fVar71 * fStack_198 - fVar66 * local_1a0;
        fVar100 = fVar76 * local_b0._4_4_ - fVar80 * fStack_19c;
        auVar20._4_4_ = fVar92;
        auVar20._0_4_ = fVar86;
        auVar20._8_4_ = fVar98;
        auVar20._12_4_ = fVar100;
        auVar21._4_4_ = fVar92;
        auVar21._0_4_ = fVar86;
        auVar21._8_4_ = fVar98;
        auVar21._12_4_ = fVar100;
        auVar96 = NEON_ext(auVar20,auVar21,4,1);
        fVar92 = fVar71 * fVar87 + local_1a0 * fVar99 + auVar96._0_4_ * local_b0._4_4_;
        fVar98 = fVar76 * (fVar93 + -0.5) +
                 fStack_19c * (fVar71 * local_1a0 + fVar76 * fStack_19c + fVar66 * fStack_198) +
                 auVar96._4_4_ * local_b0._4_4_;
        fVar100 = fVar66 * fVar87 + fStack_198 * fVar99 + fVar86 * local_b0._4_4_;
        fVar86 = param_1 * (fVar92 + fVar92) - fVar112;
        fVar92 = param_1 * (fVar98 + fVar98) - fVar70;
        fVar98 = param_1 * (fVar100 + fVar100) - fVar75;
        if ((int)(local_c8._4_4_ & 0x7fffffff) <= (int)(uint)local_c8) {
          FUN_02e9b11c(&local_d0,puVar4,uVar64);
        }
        uVar56 = uVar56 + 1;
        puVar7 = (undefined8 *)(local_d0 + (long)(int)(uint)local_c8 * 0x10);
        puVar7[1] = CONCAT44(fVar79 + fVar95 * fVar98 + uStack_118._4_4_ * fVar86 + fVar102 * fVar92
                             ,fVar74 + fVar94 * fVar98 +
                                       (float)uStack_118 * fVar86 + fVar104 * fVar92);
        *puVar7 = CONCAT44(fVar69 + fVar91 * fVar98 + local_120._4_4_ * fVar86 + fVar103 * fVar92,
                           fVar65 + fVar85 * fVar98 + (float)local_120 * fVar86 + fVar101 * fVar92);
        local_c8._0_4_ = (uint)uVar64;
      } while (param_5 != uVar56);
      bVar1 = 1 < iVar60;
      iVar60 = iVar58;
    } while (bVar1);
  }
  puVar4 = PTR_PTR_047d1a50;
  uVar51 = DAT_03cab628;
  uVar110 = DAT_03cab620;
  uVar49 = _UNK_03caa5b8;
  uVar42 = _DAT_03caa5b0;
  if (1 < param_4) {
    uVar43 = NEON_scvtf(CONCAT44(param_4,param_4),4);
    do {
      iVar60 = param_4 + -1;
      if (0 < (int)param_5) {
        uVar56 = 0;
        uVar44 = NEON_scvtf(CONCAT44(iVar60,iVar60),4);
        fVar66 = (fVar67 / (float)uVar43) * (float)uVar44;
        do {
          uVar45 = NEON_scvtf(CONCAT44(uVar56,uVar56),4);
          fVar71 = fVar108 * (float)uVar45 * 0.5;
          fVar76 = fVar109 * (float)((ulong)uVar45 >> 0x20) * 0.5;
          uStack_b8 = CONCAT44(fVar76,fVar71);
          local_c0 = CONCAT44(fVar76,fVar71);
          FUN_01170160(&local_c0,&local_110,&local_b0);
          fVar71 = SUB84(local_110,0);
          uVar64 = (long)(int)(uint)local_c8 + 1;
          local_190 = (float)uVar42;
          fStack_18c = (float)((ulong)uVar42 >> 0x20);
          fStack_188 = (float)uVar49;
          fStack_184 = (float)((ulong)uVar49 >> 0x20);
          local_190 = local_190 * fVar71;
          fStack_18c = fStack_18c * fVar71;
          fStack_188 = fStack_188 * fVar71;
          auVar22._4_4_ = fStack_18c;
          auVar22._0_4_ = local_190;
          auVar22._8_4_ = fStack_188;
          auVar22._12_4_ = fStack_184 * fVar71;
          auVar23._4_4_ = fStack_18c;
          auVar23._0_4_ = local_190;
          auVar23._8_4_ = fStack_188;
          auVar23._12_4_ = fStack_184 * fVar71;
          auVar96 = NEON_ext(auVar22,auVar23,4,1);
          auVar24._4_4_ = fStack_18c;
          auVar24._0_4_ = local_190;
          auVar24._8_4_ = fStack_188;
          auVar24._12_4_ = local_b0._4_4_;
          auVar25._4_4_ = fStack_18c;
          auVar25._0_4_ = local_190;
          auVar25._8_4_ = fStack_188;
          auVar25._12_4_ = local_b0._4_4_;
          auVar90 = NEON_ext(auVar24,auVar25,8,1);
          fVar87 = (float)uVar110;
          fVar93 = (float)((ulong)uVar110 >> 0x20);
          fVar99 = (float)uVar51;
          fVar98 = auVar90._4_4_ * auVar90._4_4_;
          fVar100 = local_190 * fVar87 + fStack_18c * fVar93 + fStack_188 * fVar99;
          fVar92 = fVar98 + -0.5;
          fVar71 = local_190 * fVar68 - auVar96._0_4_ * fVar87;
          fVar76 = fStack_18c * fVar73 - auVar96._4_4_ * fVar93;
          fVar80 = fStack_188 * fVar77 - local_190 * fVar99;
          fVar86 = local_b0._4_4_ * fVar78 - fStack_18c * (float)(uVar51 >> 0x20);
          auVar26._4_4_ = fVar76;
          auVar26._0_4_ = fVar71;
          auVar26._8_4_ = fVar80;
          auVar26._12_4_ = fVar86;
          auVar27._4_4_ = fVar76;
          auVar27._0_4_ = fVar71;
          auVar27._8_4_ = fVar80;
          auVar27._12_4_ = fVar86;
          auVar90 = NEON_ext(auVar26,auVar27,4,1);
          fVar76 = fVar92 * fVar87 + local_190 * fVar100 + auVar90._0_4_ * local_b0._4_4_;
          fVar80 = (fVar98 + -0.5) * fVar93 +
                   fStack_18c * (local_190 * fVar87 + fStack_18c * fVar93 + fStack_188 * fVar99) +
                   auVar90._4_4_ * local_b0._4_4_;
          fVar86 = fVar92 * fVar99 + fStack_188 * fVar100 + fVar71 * local_b0._4_4_;
          fVar71 = fVar112 + (-fVar112 - fVar112) * fVar66 + param_1 * (fVar76 + fVar76);
          fVar76 = fVar70 + (-fVar70 - fVar70) *
                            (fVar72 / (float)((ulong)uVar43 >> 0x20)) *
                            (float)((ulong)uVar44 >> 0x20) + param_1 * (fVar80 + fVar80);
          fVar80 = fVar75 + (-fVar75 - fVar75) * fVar66 + param_1 * (fVar86 + fVar86);
          if ((int)(local_c8._4_4_ & 0x7fffffff) <= (int)(uint)local_c8) {
            FUN_02e9b11c(&local_d0,puVar4,uVar64);
          }
          uVar56 = uVar56 + 1;
          puVar7 = (undefined8 *)(local_d0 + (long)(int)(uint)local_c8 * 0x10);
          puVar7[1] = CONCAT44(fVar79 + fVar95 * fVar80 +
                                        uStack_118._4_4_ * fVar71 + fVar102 * fVar76,
                               fVar74 + fVar94 * fVar80 +
                                        (float)uStack_118 * fVar71 + fVar104 * fVar76);
          *puVar7 = CONCAT44(fVar69 + fVar91 * fVar80 + local_120._4_4_ * fVar71 + fVar103 * fVar76,
                             fVar65 + fVar85 * fVar80 + (float)local_120 * fVar71 + fVar101 * fVar76
                            );
          local_c8._0_4_ = (uint)uVar64;
        } while (param_5 != uVar56);
      }
      bVar1 = 2 < param_4;
      param_4 = iVar60;
    } while (bVar1);
  }
  puVar4 = PTR_PTR_047d1a50;
  uVar44 = _UNK_03cabd98;
  uVar43 = _DAT_03cabd90;
  uVar51 = DAT_03cab628;
  uVar110 = DAT_03cab620;
  uVar49 = _UNK_03caa5b8;
  uVar42 = _DAT_03caa5b0;
  if (1 < (int)param_5) {
    iVar60 = 0;
    do {
      uVar45 = NEON_scvtf(CONCAT44(iVar60,iVar60),4);
      fVar67 = fVar106 * (float)uVar45 * -0.5;
      fVar72 = fVar107 * (float)((ulong)uVar45 >> 0x20) * -0.5;
      uStack_b8 = CONCAT44(fVar72,fVar67);
      local_c0 = CONCAT44(fVar72,fVar67);
      FUN_01170160(&local_c0,&local_110,&local_b0);
      fVar67 = SUB84(local_110,0);
      uVar56 = 0;
      local_1d0 = (float)uVar43;
      fStack_1cc = (float)((ulong)uVar43 >> 0x20);
      fStack_1c8 = (float)uVar44;
      fStack_1c4 = (float)((ulong)uVar44 >> 0x20);
      local_1d0 = local_1d0 * fVar67;
      fStack_1cc = fStack_1cc * fVar67;
      fStack_1c8 = fStack_1c8 * fVar67;
      auVar28._4_4_ = fStack_1cc;
      auVar28._0_4_ = local_1d0;
      auVar28._8_4_ = fStack_1c8;
      auVar28._12_4_ = fStack_1c4 * fVar67;
      auVar29._4_4_ = fStack_1cc;
      auVar29._0_4_ = local_1d0;
      auVar29._8_4_ = fStack_1c8;
      auVar29._12_4_ = fStack_1c4 * fVar67;
      auVar96 = NEON_ext(auVar28,auVar29,4,1);
      auVar30._4_4_ = fStack_1cc;
      auVar30._0_4_ = local_1d0;
      auVar30._8_4_ = fStack_1c8;
      auVar30._12_4_ = local_b0._4_4_;
      auVar31._4_4_ = fStack_1cc;
      auVar31._0_4_ = local_1d0;
      auVar31._8_4_ = fStack_1c8;
      auVar31._12_4_ = local_b0._4_4_;
      auVar90 = NEON_ext(auVar30,auVar31,8,1);
      fVar98 = (float)uVar110;
      fVar100 = (float)((ulong)uVar110 >> 0x20);
      fVar87 = (float)uVar51;
      fVar93 = (float)(uVar51 >> 0x20);
      fVar80 = auVar90._4_4_ * auVar90._4_4_;
      fVar86 = local_1d0 * fVar98 + fStack_1cc * fVar100 + fStack_1c8 * fVar87;
      fVar92 = local_1d0 * fVar98 + fStack_1cc * fVar100 + fStack_1c8 * fVar87;
      fVar76 = fVar80 + -0.5;
      fVar80 = fVar80 + -0.5;
      fVar67 = local_1d0 * fVar68 - auVar96._0_4_ * fVar98;
      fVar72 = fStack_1cc * fVar73 - auVar96._4_4_ * fVar100;
      fVar66 = fStack_1c8 * fVar77 - local_1d0 * fVar87;
      fVar71 = local_b0._4_4_ * fVar78 - fStack_1cc * fVar93;
      auVar32._4_4_ = fVar72;
      auVar32._0_4_ = fVar67;
      auVar32._8_4_ = fVar66;
      auVar32._12_4_ = fVar71;
      auVar33._4_4_ = fVar72;
      auVar33._0_4_ = fVar67;
      auVar33._8_4_ = fVar66;
      auVar33._12_4_ = fVar71;
      auVar90 = NEON_ext(auVar32,auVar33,4,1);
      fVar72 = fVar76 * fVar98 + local_1d0 * fVar86 + auVar90._0_4_ * local_b0._4_4_;
      fVar66 = fVar80 * fVar100 + fStack_1cc * fVar92 + auVar90._4_4_ * local_b0._4_4_;
      fVar67 = fVar76 * fVar87 + fStack_1c8 * fVar86 + fVar67 * local_b0._4_4_;
      fVar71 = fVar80 * fVar93 + local_b0._4_4_ * fVar92 + local_b0._4_4_ * 0.0;
      fVar72 = fVar72 + fVar72;
      fVar66 = fVar66 + fVar66;
      fVar67 = fVar67 + fVar67;
      fVar71 = fVar71 + fVar71;
      auVar34._4_4_ = fVar66;
      auVar34._0_4_ = fVar72;
      auVar34._8_4_ = fVar67;
      auVar34._12_4_ = fVar71;
      auVar35._4_4_ = fVar66;
      auVar35._0_4_ = fVar72;
      auVar35._8_4_ = fVar67;
      auVar35._12_4_ = fVar71;
      auVar90 = NEON_ext(auVar34,auVar35,4,1);
      do {
        uVar45 = NEON_scvtf(CONCAT44(uVar56,uVar56),4);
        fVar76 = fVar108 * (float)uVar45 * 0.5;
        fVar80 = fVar109 * (float)((ulong)uVar45 >> 0x20) * 0.5;
        uStack_b8 = CONCAT44(fVar80,fVar76);
        local_c0 = CONCAT44(fVar80,fVar76);
        FUN_01170160(&local_c0,&local_110,&local_b0);
        fVar76 = SUB84(local_110,0);
        local_1a0 = (float)uVar42;
        fStack_19c = (float)((ulong)uVar42 >> 0x20);
        fStack_198 = (float)uVar49;
        fStack_194 = (float)((ulong)uVar49 >> 0x20);
        local_1a0 = local_1a0 * fVar76;
        fStack_19c = fStack_19c * fVar76;
        fStack_198 = fStack_198 * fVar76;
        uVar64 = (long)(int)(uint)local_c8 + 1;
        auVar36._4_4_ = fStack_19c;
        auVar36._0_4_ = local_1a0;
        auVar36._8_4_ = fStack_198;
        auVar36._12_4_ = fStack_194 * fVar76;
        auVar37._4_4_ = fStack_19c;
        auVar37._0_4_ = local_1a0;
        auVar37._8_4_ = fStack_198;
        auVar37._12_4_ = fStack_194 * fVar76;
        auVar97 = NEON_ext(auVar36,auVar37,4,1);
        auVar38._4_4_ = fStack_19c;
        auVar38._0_4_ = local_1a0;
        auVar38._8_4_ = fStack_198;
        auVar38._12_4_ = local_b0._4_4_;
        auVar39._4_4_ = fStack_19c;
        auVar39._0_4_ = local_1a0;
        auVar39._8_4_ = fStack_198;
        auVar39._12_4_ = local_b0._4_4_;
        auVar96 = NEON_ext(auVar38,auVar39,8,1);
        fVar100 = auVar96._4_4_ * auVar96._4_4_;
        fVar87 = fVar72 * local_1a0 + fVar66 * fStack_19c + fVar67 * fStack_198;
        fVar98 = fVar100 + -0.5;
        local_180 = auVar90._0_4_;
        fStack_17c = auVar90._4_4_;
        fVar76 = local_180 * local_1a0 - fVar72 * auVar97._0_4_;
        fVar80 = fStack_17c * fStack_19c - fVar66 * auVar97._4_4_;
        fVar86 = fVar72 * fStack_198 - fVar67 * local_1a0;
        fVar92 = fVar66 * local_b0._4_4_ - fVar71 * fStack_19c;
        auVar40._4_4_ = fVar80;
        auVar40._0_4_ = fVar76;
        auVar40._8_4_ = fVar86;
        auVar40._12_4_ = fVar92;
        auVar41._4_4_ = fVar80;
        auVar41._0_4_ = fVar76;
        auVar41._8_4_ = fVar86;
        auVar41._12_4_ = fVar92;
        auVar96 = NEON_ext(auVar40,auVar41,4,1);
        fVar80 = fVar72 * fVar98 + local_1a0 * fVar87 + auVar96._0_4_ * local_b0._4_4_;
        fVar86 = fVar66 * (fVar100 + -0.5) +
                 fStack_19c * (fVar72 * local_1a0 + fVar66 * fStack_19c + fVar67 * fStack_198) +
                 auVar96._4_4_ * local_b0._4_4_;
        fVar92 = fVar67 * fVar98 + fStack_198 * fVar87 + fVar76 * local_b0._4_4_;
        fVar76 = fVar112 + param_1 * (fVar80 + fVar80);
        fVar80 = fVar70 + param_1 * (fVar86 + fVar86);
        fVar86 = fVar75 + param_1 * (fVar92 + fVar92);
        if ((int)(local_c8._4_4_ & 0x7fffffff) <= (int)(uint)local_c8) {
          FUN_02e9b11c(&local_d0,puVar4,uVar64);
        }
        uVar56 = uVar56 + 1;
        puVar7 = (undefined8 *)(local_d0 + (long)(int)(uint)local_c8 * 0x10);
        puVar7[1] = CONCAT44(fVar79 + fVar95 * fVar86 + uStack_118._4_4_ * fVar76 + fVar102 * fVar80
                             ,fVar74 + fVar94 * fVar86 +
                                       (float)uStack_118 * fVar76 + fVar104 * fVar80);
        *puVar7 = CONCAT44(fVar69 + fVar91 * fVar86 + local_120._4_4_ * fVar76 + fVar103 * fVar80,
                           fVar65 + fVar85 * fVar86 + (float)local_120 * fVar76 + fVar101 * fVar80);
        local_c8._0_4_ = (uint)uVar64;
      } while (param_5 != uVar56);
      iVar60 = iVar60 + 1;
    } while (iVar60 < iVar57);
  }
  uVar61 = (uint)uVar64;
  iVar60 = uVar61 + 1;
  fVar68 = -fVar111 * fVar68;
  fVar73 = -fVar81 * fVar73;
  fVar77 = -fVar111 * fVar77;
  uVar56 = uVar61;
  if ((int)(local_c8._4_4_ & 0x7fffffff) <= (int)uVar61) {
    FUN_02e9b11c(&local_d0,PTR_PTR_047d1a50,(long)iVar60);
    uVar56 = (uint)local_c8;
  }
  puVar7 = (undefined8 *)(local_d0 + (long)(int)uVar56 * 0x10);
  puVar7[1] = CONCAT44(fVar79 + fVar95 * fVar77 + uStack_118._4_4_ * fVar68 + fVar102 * fVar73,
                       fVar74 + fVar94 * fVar77 + (float)uStack_118 * fVar68 + fVar104 * fVar73);
  *puVar7 = CONCAT44(fVar69 + fVar91 * fVar77 + local_120._4_4_ * fVar68 + fVar103 * fVar73,
                     fVar65 + fVar85 * fVar77 + (float)local_120 * fVar68 + fVar101 * fVar73);
  if (-1 < (int)uVar61) {
    lVar55 = 0;
    do {
      puVar7 = (undefined8 *)(local_d0 + lVar55 * 0x10);
      fVar78 = (float)puVar7[1];
      uVar42 = *puVar7;
      fVar77 = (float)uVar42;
      fVar79 = (float)((ulong)uVar42 >> 0x20);
      fVar85 = *param_6;
      fVar91 = param_6[1];
      fVar94 = param_6[4];
      fVar65 = param_6[5];
      fVar68 = param_6[8];
      fVar69 = param_6[9];
      fVar73 = param_6[0xc];
      fVar74 = param_6[0xd];
      puVar7 = (undefined8 *)(local_d0 + lVar55 * 0x10);
      puVar7[1] = CONCAT44(param_6[0xf] +
                           param_6[0xb] * fVar78 + param_6[3] * fVar77 + param_6[7] * fVar79,
                           param_6[0xe] +
                           param_6[10] * fVar78 + param_6[2] * fVar77 + param_6[6] * fVar79);
      *puVar7 = CONCAT44(fVar74 + fVar69 * fVar78 + fVar91 * fVar77 + fVar65 * fVar79,
                         fVar73 + fVar68 * fVar78 + fVar85 * fVar77 + fVar94 * fVar79);
      lVar55 = lVar55 + 1;
    } while (lVar55 < iVar60);
  }
  puVar4 = PTR_PTR_047d1a50;
  local_b0 = 0;
  uStack_a8 = 0x8000000000000000;
  local_c8._0_4_ = iVar60;
  if (0 < (int)param_5) {
    lVar55 = 1;
    uVar56 = 0;
    while( true ) {
      uVar64 = lVar55 - 1;
      uVar61 = (uint)lVar55;
      iVar60 = 1;
      if (param_5 != uVar61) {
        iVar60 = uVar61 + 1;
      }
      if ((uVar56 & 0x7fffffff) <= uVar64) {
        FUN_02ecf594(&local_b0,puVar4,lVar55);
        uVar64 = uStack_a8 & 0xffffffff;
      }
      puVar2 = (undefined4 *)(local_b0 + (long)(int)uVar64 * 0x10);
      *puVar2 = 0;
      puVar2[1] = uVar61;
      puVar2[2] = iVar60;
      puVar2[3] = 0xffffffff;
      uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar61);
      if (param_5 == uVar61) break;
      lVar55 = lVar55 + 1;
      uVar56 = uStack_a8._4_4_;
    }
    iVar63 = iVar63 + -2;
    if (iVar63 < 1) {
      iVar60 = 1;
    }
    else {
      iVar57 = 0;
      local_120._0_4_ = (float)(param_5 + 1);
      iVar58 = 1;
      do {
        lVar59 = 0;
        uVar56 = 0;
        iVar60 = iVar58 + param_5;
        iVar62 = (int)lVar55;
        do {
          lVar55 = iVar62 + lVar59;
          iVar6 = 0;
          if (uVar56 - param_5 != -1) {
            iVar6 = uVar56 + 1;
          }
          iVar5 = iVar58 + uVar56;
          iVar50 = (int)lVar59;
          iVar53 = iVar62 + iVar50;
          iVar54 = iVar53;
          if ((long)(uStack_a8 >> 0x20 & 0x7fffffff) <= lVar55) {
            FUN_02ecf594(&local_b0,PTR_PTR_047d1a50,lVar55 + 1);
            iVar54 = (int)uStack_a8;
          }
          piVar3 = (int *)(local_b0 + (long)iVar54 * 0x10);
          *piVar3 = iVar5;
          piVar3[1] = (int)(float)local_120 + uVar56;
          piVar3[2] = iVar6 + iVar60;
          piVar3[3] = -1;
          uVar56 = uVar56 + 1;
          uStack_a8._0_4_ = iVar53 + 1;
          if ((long)((ulong)uStack_a8._4_4_ & 0x7fffffff) <= lVar55 + 1) {
            FUN_02ecf594(&local_b0,PTR_PTR_047d1a50,lVar55 + 2);
          }
          piVar3 = (int *)(local_b0 + (long)(int)uStack_a8 * 0x10);
          lVar59 = lVar59 + 2;
          *piVar3 = iVar6 + iVar58;
          piVar3[1] = iVar5;
          piVar3[2] = iVar6 + iVar60;
          piVar3[3] = -1;
          uStack_a8 = CONCAT44(uStack_a8._4_4_,iVar62 + iVar50 + 2);
        } while (uVar56 != param_5);
        lVar55 = lVar59 + iVar62;
        local_120._0_4_ = (float)((int)(float)local_120 + param_5);
        iVar57 = iVar57 + 1;
        iVar58 = iVar60;
      } while (iVar57 != iVar63);
      lVar55 = lVar59 + iVar62;
    }
    puVar4 = PTR_PTR_047d1a50;
    lVar59 = 0;
    iVar63 = (int)lVar55;
    do {
      iVar58 = (int)lVar59;
      iVar57 = 0;
      if (iVar58 - param_5 != -1) {
        iVar57 = iVar58 + 1;
      }
      if (iVar63 + lVar59 < (long)(uStack_a8 >> 0x20 & 0x7fffffff)) {
        iVar62 = iVar63 + iVar58;
      }
      else {
        FUN_02ecf594(&local_b0,puVar4,iVar63 + lVar59 + 1);
        iVar62 = (int)uStack_a8;
      }
      lVar59 = lVar59 + 1;
      piVar3 = (int *)(local_b0 + (long)iVar62 * 0x10);
      *piVar3 = iVar57 + iVar60;
      piVar3[1] = iVar60 + iVar58;
      piVar3[2] = iVar60 + param_5;
      piVar3[3] = -1;
      uStack_a8 = CONCAT44(uStack_a8._4_4_,iVar63 + iVar58 + 1);
    } while ((uint)lVar59 != param_5);
  }
  puVar52 = PTR_PTR_047d1a50;
  local_100 = 1;
  local_f8 = 0;
  puVar4 = PTR_DAT_047e3378 + 0x10;
  uStack_108 = 0xffffffff;
  local_f0 = -0x8000000000000000;
  local_e8 = 0;
  local_e0 = -0x8000000000000000;
  local_110 = puVar4;
  FUN_02e9b22c(&local_f8,PTR_PTR_047d1a50);
  FUN_02e9b22c(&local_d0,puVar52);
  lVar59 = local_f0;
  lVar55 = local_f8;
  local_f8 = local_d0;
  local_d0 = lVar55;
  local_f0 = CONCAT44(local_c8._4_4_,(uint)local_c8);
  local_c8 = lVar59;
  FUN_0316c380(&local_e8,puVar52);
  FUN_0316c380(&local_b0,puVar52);
  lVar59 = local_e0;
  lVar55 = local_e8;
  local_e8 = local_b0;
  local_b0 = lVar55;
  local_e0._0_4_ = (undefined4)uStack_a8;
  local_e0._4_4_ = uStack_a8._4_4_;
  uStack_a8 = lVar59;
  FUN_03241cc4(param_7,&local_110,0);
  uVar56 = local_e0._4_4_;
  uVar64 = (ulong)local_e0._4_4_;
  local_e0 = (ulong)local_e0._4_4_ << 0x20;
  local_110 = puVar4;
  if ((-1 < (int)uVar56) && (local_e8 != 0)) {
    (**(code **)(*(long *)puVar52 + 0x20))(puVar52,local_e8,uVar64 << 4);
  }
  lVar55 = local_f0;
  local_e0 = CONCAT44(0x80000000,(undefined4)local_e0);
  uVar64 = (ulong)local_f0._4_4_;
  local_e8 = 0;
  local_f0 = (ulong)local_f0._4_4_ << 0x20;
  if ((-1 < lVar55) && (local_f8 != 0)) {
    (**(code **)(*(long *)puVar52 + 0x20))(puVar52,local_f8,uVar64 << 4);
  }
  lVar55 = uStack_a8;
  uVar64 = (ulong)uStack_a8._4_4_;
  uStack_a8 = (ulong)uStack_a8._4_4_ << 0x20;
  if ((-1 < lVar55) && (local_b0 != 0)) {
    (**(code **)(*(long *)puVar52 + 0x20))(puVar52,local_b0,uVar64 << 4);
  }
  lVar55 = local_c8;
  uVar64 = (ulong)local_c8._4_4_;
  local_c8 = (ulong)local_c8._4_4_ << 0x20;
  if ((-1 < lVar55) && (local_d0 != 0)) {
    (**(code **)(*(long *)puVar52 + 0x20))(puVar52,local_d0,uVar64 << 4);
  }
  return;
}


