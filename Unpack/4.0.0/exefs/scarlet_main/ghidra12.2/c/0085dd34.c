/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0085dd34; name: FUN_0085dd34
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0085dd34(long param_1)

{
  bool bVar1;
  uint uVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined *puVar19;
  undefined *puVar20;
  int iVar21;
  long lVar22;
  undefined8 uVar23;
  undefined1 (*pauVar24) [16];
  long *plVar25;
  ulong uVar26;
  long *plVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar43;
  ulong uVar32;
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
  float fVar44;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar52;
  float fVar53;
  undefined1 auVar51 [16];
  float fVar54;
  float fVar56;
  undefined1 auVar55 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  ulong uVar65;
  float fVar66;
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar72 [16];
  ulong uVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar79;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar87;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined1 auVar94 [16];
  float fVar95;
  undefined1 auVar96 [12];
  undefined1 auVar97 [16];
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar104 [12];
  undefined1 auVar105 [16];
  float local_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float local_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  float local_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  undefined1 (*local_350) [16];
  undefined8 local_348;
  undefined8 local_150;
  undefined8 local_148;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined8 local_130;
  undefined8 uStack_128;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if (*(char *)(param_1 + 0x1fc) != '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x1fd) = 0;
  puVar19 = PTR_DAT_047d19b0;
  if (*(int *)(param_1 + 0x1f0) == 2) {
    local_350 = (undefined1 (*) [16])0x0;
    local_348 = 0x8000000000000000;
    iVar21 = *(int *)(param_1 + 0x60);
    if (iVar21 < 1) {
      local_348 = CONCAT44(0x80000000,iVar21);
      plVar25 = *(long **)(param_1 + 0x58);
      lVar22 = local_348;
    }
    else {
      FUN_02e8df28(&local_350,PTR_PTR_047d1a50,iVar21);
      local_348 = CONCAT44(local_348._4_4_,iVar21);
      plVar25 = *(long **)(param_1 + 0x58);
      lVar22 = local_348;
    }
    pauVar24 = local_350;
    if (plVar25 == (long *)0x0) {
      uVar31 = *(undefined8 *)(puVar19 + 0x50);
      local_348._0_4_ = iVar21;
    }
    else {
      do {
        auVar83 = NEON_scvtf(*(undefined1 (*) [16])(plVar25 + 4),4);
        fVar44 = *(float *)(param_1 + 0x150);
        fVar48 = *(float *)(param_1 + 0x154);
        fVar49 = *(float *)(param_1 + 0x15c);
        fVar50 = *(float *)(param_1 + 0x130);
        fVar30 = *(float *)(param_1 + 0x134);
        fVar43 = *(float *)(param_1 + 0x13c);
        *(float *)(*pauVar24 + 8) =
             *(float *)(param_1 + 0x138) + *(float *)(param_1 + 0x158) * auVar83._8_4_;
        *(float *)(*pauVar24 + 0xc) = fVar43 + fVar49 * 0.0;
        *(float *)*pauVar24 = fVar50 + fVar44 * auVar83._0_4_;
        *(float *)(*pauVar24 + 4) = fVar30 + fVar48 * auVar83._4_4_;
        plVar25 = (long *)*plVar25;
        pauVar24 = pauVar24 + 1;
      } while (plVar25 != (long *)0x0);
      local_348._0_4_ = (int)lVar22;
      uVar31 = *(undefined8 *)(puVar19 + 0x50);
    }
    local_348._4_4_ = (uint)((ulong)lVar22 >> 0x20);
    if ((int)local_348 < 3) {
      fVar30 = 0.0;
      fVar43 = 0.0;
      fVar52 = 0.0;
      fVar53 = 0.0;
    }
    else {
      fVar44 = *(float *)local_350[1];
      fVar48 = *(float *)(local_350[1] + 4);
      fVar49 = *(float *)(local_350[1] + 8);
      fVar50 = *(float *)(local_350[1] + 0xc);
      fVar30 = 0.0;
      fVar43 = 0.0;
      fVar52 = 0.0;
      fVar53 = 0.0;
      lVar28 = 2;
      do {
        auVar64._0_4_ = fVar44 - *(float *)*local_350;
        auVar64._4_4_ = fVar48 - *(float *)(*local_350 + 4);
        auVar64._8_4_ = fVar49 - *(float *)(*local_350 + 8);
        auVar64._12_4_ = fVar50 - *(float *)(*local_350 + 0xc);
        pauVar24 = local_350 + lVar28;
        fVar44 = *(float *)*pauVar24;
        fVar48 = *(float *)(*pauVar24 + 4);
        fVar49 = *(float *)(*pauVar24 + 8);
        fVar50 = *(float *)(*pauVar24 + 0xc);
        auVar83 = NEON_ext(auVar64,auVar64,4,1);
        auVar76._0_4_ = fVar44 - *(float *)*local_350;
        auVar76._4_4_ = fVar48 - *(float *)(*local_350 + 4);
        auVar76._8_4_ = fVar49 - *(float *)(*local_350 + 8);
        auVar76._12_4_ = fVar50 - *(float *)(*local_350 + 0xc);
        auVar57 = NEON_ext(auVar76,auVar76,4,1);
        auVar72._0_4_ = auVar64._0_4_ * auVar57._0_4_ - auVar76._0_4_ * auVar83._0_4_;
        auVar72._4_4_ = auVar64._4_4_ * auVar57._4_4_ - auVar76._4_4_ * auVar83._4_4_;
        auVar72._8_4_ = auVar64._8_4_ * auVar76._0_4_ - auVar76._8_4_ * auVar64._0_4_;
        auVar72._12_4_ = auVar64._12_4_ * auVar76._4_4_ - auVar76._12_4_ * auVar64._4_4_;
        auVar83 = NEON_ext(auVar72,auVar72,4,1);
        fVar68 = *(float *)(param_1 + 0x120) * auVar83._0_4_;
        fVar69 = *(float *)(param_1 + 0x124) * auVar83._4_4_;
        fVar70 = *(float *)(param_1 + 0x128) * auVar72._0_4_;
        auVar40._12_4_ = ABS(fVar68 + fVar69 + fVar70);
        fVar68 = ABS(fVar68 + fVar69 + fVar70);
        uVar31 = CONCAT44((float)((ulong)uVar31 >> 0x20) + fVar68,(float)uVar31 + auVar40._12_4_);
        auVar40._12_4_ = (float)*(undefined8 *)(puVar19 + 0x160) * auVar40._12_4_;
        fVar68 = (float)((ulong)*(undefined8 *)(puVar19 + 0x160) >> 0x20) * fVar68;
        fVar30 = fVar30 + (auVar64._0_4_ + auVar76._0_4_) * auVar40._12_4_;
        fVar43 = fVar43 + (auVar64._4_4_ + auVar76._4_4_) * fVar68;
        fVar52 = fVar52 + (auVar64._8_4_ + auVar76._8_4_) * auVar40._12_4_;
        fVar53 = fVar53 + (auVar64._12_4_ + auVar76._12_4_) * fVar68;
        bVar1 = lVar28 < (int)local_348 + -1;
        lVar28 = lVar28 + 1;
      } while (bVar1);
    }
    auVar83 = *(undefined1 (*) [16])(puVar19 + 0x60);
    *(undefined1 *)(param_1 + 0x1fc) = 1;
    fVar44 = auVar83._0_4_;
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0x1b8);
    *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_1 + 0x1bc);
    *(float *)(param_1 + 0x1b0) = fVar44;
    *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
    uVar23 = *(undefined8 *)(puVar19 + 0x200);
    *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(puVar19 + 0x208);
    *(undefined8 *)(param_1 + 0x1a0) = uVar23;
    fVar48 = (float)((ulong)uVar31 >> 0x20);
    fVar44 = fVar44 / (float)uVar31;
    fVar49 = auVar83._4_4_ / fVar48;
    *(ulong *)(param_1 + 0x1e8) =
         CONCAT44(fVar48 * (float)((ulong)*(undefined8 *)(puVar19 + 0x150) >> 0x20),
                  (float)uVar31 * (float)*(undefined8 *)(puVar19 + 0x150));
    auVar83 = *local_350;
    auVar37._0_8_ = CONCAT44(fVar43 * fVar49 + auVar83._4_4_,fVar30 * fVar44 + auVar83._0_4_);
    auVar37._8_4_ = fVar52 * fVar44 + auVar83._8_4_;
    auVar37._12_4_ = fVar53 * fVar49 + auVar83._12_4_;
    *(long *)(param_1 + 0x198) = auVar37._8_8_;
    *(undefined8 *)(param_1 + 400) = auVar37._0_8_;
    uVar26 = (ulong)local_348._4_4_;
    local_348 = (ulong)local_348._4_4_ << 0x20;
    if (lVar22 < 0) {
      return 0;
    }
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_350,uVar26 << 4);
    uVar31 = 0x80040200;
    if (*(char *)(param_1 + 0x1fc) != '\0') {
      uVar31 = 0;
    }
    return uVar31;
  }
  if (*(int *)(param_1 + 0x1f0) != 3) {
    uVar31 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x200);
    uVar23 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x208);
    uVar11 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x210);
    uVar12 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x218);
    *(undefined8 *)(param_1 + 0x1b8) = uVar23;
    *(undefined8 *)(param_1 + 0x1b0) = uVar31;
    *(undefined8 *)(param_1 + 0x1c8) = uVar12;
    *(undefined8 *)(param_1 + 0x1c0) = uVar11;
    *(undefined8 *)(param_1 + 0x168) = uVar23;
    *(undefined8 *)(param_1 + 0x160) = uVar31;
    uVar31 = *(undefined8 *)(puVar19 + 0x220);
    uVar23 = *(undefined8 *)(puVar19 + 0x228);
    uVar13 = *(undefined8 *)(puVar19 + 0x230);
    uVar14 = *(undefined8 *)(puVar19 + 0x238);
    *(undefined1 *)(param_1 + 0x1fc) = 1;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = uVar23;
    *(undefined8 *)(param_1 + 0x1d0) = uVar31;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x198) = uVar14;
    *(undefined8 *)(param_1 + 400) = uVar13;
    *(undefined8 *)(param_1 + 0x178) = uVar12;
    *(undefined8 *)(param_1 + 0x170) = uVar11;
    *(undefined8 *)(param_1 + 0x188) = uVar23;
    *(undefined8 *)(param_1 + 0x180) = uVar31;
    return 0;
  }
  fVar44 = *(float *)(param_1 + 0xc0);
  fVar48 = *(float *)(param_1 + 0xc4);
  fVar49 = *(float *)(param_1 + 200);
  fVar50 = *(float *)(param_1 + 0xcc);
  auVar83 = *(undefined1 (*) [16])(PTR_DAT_047d19b0 + 0x240);
  auVar104 = auVar83._0_12_;
  if (fVar50 == auVar83._0_4_) {
    plVar25 = *(long **)(param_1 + 0x58);
    fVar44 = 0.0;
    fVar48 = 0.0;
    fVar49 = 0.0;
    fVar50 = 0.0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    if (plVar25 != (long *)0x0) {
      fVar44 = 0.0;
      fVar48 = 0.0;
      fVar49 = 0.0;
      fVar50 = 0.0;
      do {
        auVar57 = NEON_scvtf(*(undefined1 (*) [16])(plVar25 + 4),4);
        fVar44 = fVar44 + *(float *)(param_1 + 0x130) + *(float *)(param_1 + 0x150) * auVar57._0_4_;
        fVar48 = fVar48 + *(float *)(param_1 + 0x134) + *(float *)(param_1 + 0x154) * auVar57._4_4_;
        fVar49 = fVar49 + *(float *)(param_1 + 0x138) + *(float *)(param_1 + 0x158) * auVar57._8_4_;
        fVar50 = fVar50 + *(float *)(param_1 + 0x13c) + *(float *)(param_1 + 0x15c) * 0.0;
        *(float *)(param_1 + 200) = fVar49;
        *(float *)(param_1 + 0xcc) = fVar50;
        *(float *)(param_1 + 0xc0) = fVar44;
        *(float *)(param_1 + 0xc4) = fVar48;
        plVar25 = (long *)*plVar25;
      } while (plVar25 != (long *)0x0);
    }
    iVar21 = *(int *)(param_1 + 0x60);
    if (iVar21 != 0) {
      uVar31 = NEON_scvtf(CONCAT44(iVar21,iVar21),4);
      fVar30 = (float)*(undefined8 *)(puVar19 + 0x60) / (float)uVar31;
      fVar43 = (float)((ulong)*(undefined8 *)(puVar19 + 0x60) >> 0x20) /
               (float)((ulong)uVar31 >> 0x20);
      fVar44 = fVar44 * fVar30;
      fVar48 = fVar48 * fVar43;
      fVar49 = fVar49 * fVar30;
      *(float *)(param_1 + 200) = fVar49;
      *(float *)(param_1 + 0xcc) = fVar50 * fVar43;
      *(float *)(param_1 + 0xc0) = fVar44;
      *(float *)(param_1 + 0xc4) = fVar48;
    }
    fVar50 = 0.0;
    *(ulong *)(param_1 + 200) = (ulong)(uint)fVar49;
    *(float *)(param_1 + 0xc0) = fVar44;
    *(float *)(param_1 + 0xc4) = fVar48;
  }
  fVar30 = 0.0;
  fVar43 = 0.0;
  fVar52 = 0.0;
  fVar53 = 0.0;
  uVar32 = *(ulong *)(puVar19 + 0x50);
  plVar25 = *(long **)(param_1 + 0x70);
  auVar96._0_4_ = -auVar83._0_4_;
  auVar96._4_4_ = -auVar83._4_4_;
  auVar96._8_4_ = -auVar83._8_4_;
  auVar57._12_4_ = -auVar83._12_4_;
  auVar57._0_12_ = auVar96;
  uVar65 = uVar32;
  uVar26 = uVar32;
  if (plVar25 == (long *)0x0) {
    auVar74 = ZEXT816(0);
    fVar68 = 0.0;
    auVar40._12_4_ = 0.0;
    fVar70 = 0.0;
    fVar69 = 0.0;
  }
  else {
    fStack_358 = (float)*(undefined8 *)(param_1 + 0x158);
    fStack_354 = (float)((ulong)*(undefined8 *)(param_1 + 0x158) >> 0x20);
    local_360 = (float)*(undefined8 *)(param_1 + 0x150);
    fStack_35c = (float)((ulong)*(undefined8 *)(param_1 + 0x150) >> 0x20);
    fVar30 = 0.0;
    fVar43 = 0.0;
    fVar52 = 0.0;
    fVar53 = 0.0;
    fVar9 = *(float *)(param_1 + 0x130);
    fVar10 = *(float *)(param_1 + 0x134);
    fVar54 = *(float *)(param_1 + 0x138);
    fVar56 = *(float *)(param_1 + 0x13c);
    auVar60._8_8_ = _UNK_03cabbd8;
    auVar60._0_8_ = _DAT_03cabbd0;
    auVar40 = ZEXT816(0);
    plVar27 = plVar25;
    auVar58 = ZEXT816(0);
    do {
      auVar74 = NEON_scvtf(*(undefined1 (*) [16])(plVar27[3] + 0x20),4);
      auVar77 = NEON_scvtf(*(undefined1 (*) [16])(plVar27[4] + 0x20),4);
      auVar80 = NEON_scvtf(*(undefined1 (*) [16])(plVar27[2] + 0x20),4);
      auVar78._0_4_ = (fVar9 + local_360 * auVar80._0_4_) - fVar44;
      auVar78._4_4_ = (fVar10 + fStack_35c * auVar80._4_4_) - fVar48;
      auVar78._8_4_ = (fVar54 + fStack_358 * auVar80._8_4_) - fVar49;
      auVar78._12_4_ = (fVar56 + fStack_354 * 0.0) - fVar50;
      auVar85 = NEON_ext(auVar78,auVar78,8,1);
      fVar88 = (fVar9 + local_360 * auVar74._0_4_) - fVar44;
      fVar90 = (fVar10 + fStack_35c * auVar74._4_4_) - fVar48;
      fVar92 = (fVar54 + fStack_358 * auVar74._8_4_) - fVar49;
      fVar93 = (fVar56 + fStack_354 * 0.0) - fVar50;
      auVar80._4_4_ = fVar90;
      auVar80._0_4_ = fVar88;
      auVar80._8_4_ = fVar92;
      auVar80._12_4_ = fVar93;
      auVar84._4_4_ = fVar90;
      auVar84._0_4_ = fVar88;
      auVar84._8_4_ = fVar92;
      auVar84._12_4_ = fVar93;
      auVar94 = NEON_ext(auVar80,auVar84,4,1);
      auVar75._0_4_ = (fVar9 + local_360 * auVar77._0_4_) - fVar44;
      auVar75._4_4_ = (fVar10 + fStack_35c * auVar77._4_4_) - fVar48;
      auVar75._8_4_ = (fVar54 + fStack_358 * auVar77._8_4_) - fVar49;
      auVar75._12_4_ = (fVar56 + fStack_354 * 0.0) - fVar50;
      auVar86._4_4_ = fVar90;
      auVar86._0_4_ = fVar88;
      auVar86._8_4_ = fVar92;
      auVar86._12_4_ = fVar93;
      auVar97._4_4_ = fVar90;
      auVar97._0_4_ = fVar88;
      auVar97._8_4_ = fVar92;
      auVar97._12_4_ = fVar93;
      auVar74 = NEON_ext(auVar86,auVar97,8,1);
      auVar57 = NEON_fmax(auVar57,auVar78,4);
      auVar77 = NEON_ext(auVar75,auVar75,4,1);
      auVar83 = NEON_fmin(auVar83,auVar78,4);
      fVar29 = auVar85._0_4_;
      fVar66 = auVar74._0_4_;
      auVar67._4_4_ = fVar66;
      auVar67._0_4_ = fVar29;
      auVar81._0_4_ = fVar88 - auVar75._0_4_;
      auVar81._4_4_ = fVar90 - auVar75._4_4_;
      auVar81._8_4_ = fVar92 - auVar75._8_4_;
      auVar81._12_4_ = fVar93 - auVar75._12_4_;
      auVar74 = NEON_ext(auVar78,auVar78,4,1);
      auVar67._12_4_ = auVar75._8_4_;
      auVar67._8_4_ = auVar75._8_4_;
      auVar85._4_4_ = fVar90;
      auVar85._0_4_ = fVar88;
      auVar85._8_4_ = fVar92;
      auVar85._12_4_ = fVar93;
      auVar86 = NEON_fmin(auVar83,auVar85,4);
      auVar4._4_4_ = fVar90;
      auVar4._0_4_ = fVar88;
      auVar4._8_4_ = fVar92;
      auVar4._12_4_ = fVar93;
      auVar84 = NEON_fmax(auVar57,auVar4,4);
      auVar83 = NEON_ext(auVar81,auVar81,4,1);
      auVar105._4_4_ = fVar90;
      auVar105._0_4_ = auVar78._4_4_;
      auVar105._12_4_ = auVar75._4_4_;
      auVar105._8_4_ = auVar75._4_4_;
      auVar80 = a64_TBL(ZEXT816(0),auVar105,auVar60);
      auVar57 = a64_TBL(ZEXT816(0),auVar67,auVar60);
      fVar68 = fVar88 * auVar77._0_4_ - auVar75._0_4_ * auVar94._0_4_;
      fVar69 = fVar90 * auVar77._4_4_ - auVar75._4_4_ * auVar94._4_4_;
      fVar70 = fVar92 * auVar75._0_4_ - auVar75._8_4_ * fVar88;
      fVar71 = fVar93 * auVar75._4_4_ - auVar75._12_4_ * fVar90;
      auVar94._4_4_ = fVar88;
      auVar94._0_4_ = auVar78._0_4_;
      auVar94._8_4_ = auVar75._0_4_;
      auVar94._12_4_ = auVar75._0_4_;
      auVar97 = a64_TBL(ZEXT816(0),auVar94,auVar60);
      fVar98 = auVar75._4_4_ + auVar78._4_4_ + fVar90;
      auVar82._0_4_ = auVar78._0_4_ * auVar83._0_4_ - auVar74._0_4_ * auVar81._0_4_;
      auVar82._4_4_ = auVar78._4_4_ * auVar83._4_4_ - auVar74._4_4_ * auVar81._4_4_;
      auVar82._8_4_ = auVar78._8_4_ * auVar81._0_4_ - auVar78._0_4_ * auVar81._8_4_;
      auVar82._12_4_ = auVar78._12_4_ * auVar81._4_4_ - auVar78._4_4_ * auVar81._12_4_;
      fVar103 = auVar75._8_4_ + fVar29 + fVar66;
      auVar83._4_4_ = fVar69;
      auVar83._0_4_ = fVar68;
      auVar83._8_4_ = fVar70;
      auVar83._12_4_ = fVar71;
      auVar77._4_4_ = fVar69;
      auVar77._0_4_ = fVar68;
      auVar77._8_4_ = fVar70;
      auVar77._12_4_ = fVar71;
      auVar74 = NEON_ext(auVar83,auVar77,4,1);
      auVar33._0_4_ = fVar29 * (fVar29 + auVar57._0_4_);
      auVar33._4_4_ = fVar66 * (fVar66 + auVar57._4_4_);
      auVar33._8_4_ = auVar75._8_4_ * (auVar75._8_4_ + auVar57._8_4_);
      auVar33._12_4_ = auVar75._8_4_ * (auVar75._8_4_ + auVar57._12_4_);
      auVar83 = NEON_ext(auVar82,auVar82,4,1);
      fVar89 = auVar78._0_4_ * (auVar78._0_4_ + auVar97._0_4_);
      fVar91 = fVar88 * (fVar88 + auVar97._4_4_);
      fVar69 = auVar75._0_4_ * (auVar75._0_4_ + auVar97._8_4_);
      fVar70 = auVar75._0_4_ * (auVar75._0_4_ + auVar97._12_4_);
      auVar5._4_4_ = fVar91;
      auVar5._0_4_ = fVar89;
      auVar5._8_4_ = fVar69;
      auVar5._12_4_ = fVar70;
      auVar6._4_4_ = fVar91;
      auVar6._0_4_ = fVar89;
      auVar6._8_4_ = fVar69;
      auVar6._12_4_ = fVar70;
      auVar97 = NEON_ext(auVar5,auVar6,8,1);
      fVar99 = auVar78._4_4_ * (auVar78._4_4_ + auVar80._0_4_);
      fVar101 = fVar90 * (fVar90 + auVar80._4_4_);
      fVar69 = auVar75._4_4_ * (auVar75._4_4_ + auVar80._8_4_);
      fVar70 = auVar75._4_4_ * (auVar75._4_4_ + auVar80._12_4_);
      auVar7._4_4_ = fVar101;
      auVar7._0_4_ = fVar99;
      auVar7._8_4_ = fVar69;
      auVar7._12_4_ = fVar70;
      auVar8._4_4_ = fVar101;
      auVar8._0_4_ = fVar99;
      auVar8._8_4_ = fVar69;
      auVar8._12_4_ = fVar70;
      auVar77 = NEON_ext(auVar7,auVar8,8,1);
      fVar69 = auVar78._0_4_ * auVar74._0_4_;
      fVar70 = auVar78._4_4_ * auVar74._4_4_;
      auVar80 = NEON_ext(auVar33,auVar33,8,1);
      fVar100 = auVar74._0_4_ + auVar83._0_4_;
      fVar102 = auVar74._4_4_ + auVar83._4_4_;
      fVar95 = auVar75._0_4_ + auVar78._0_4_ + fVar88;
      auVar57 = NEON_fmax(auVar84,auVar75,4);
      auVar96 = auVar57._0_12_;
      fVar71 = fVar69 + fVar70 + auVar78._8_4_ * fVar68;
      fVar79 = fVar69 + fVar70 + auVar78._8_4_ * fVar68;
      auVar83 = NEON_fmin(auVar86,auVar75,4);
      auVar104 = auVar83._0_12_;
      fVar100 = fVar100 * fVar100;
      fVar102 = fVar102 * fVar102;
      fVar87 = (fVar68 + auVar82._0_4_) * (fVar68 + auVar82._0_4_);
      uVar65 = CONCAT44((float)(uVar65 >> 0x20) + fVar79,(float)uVar65 + fVar71);
      fVar70 = auVar40._0_4_ + fVar71 * (fVar89 + fVar91 + auVar97._0_4_);
      auVar74 = NEON_ext(auVar40,auVar40,8,1);
      fVar68 = auVar74._0_4_ + fVar71 * (auVar33._0_4_ + auVar33._4_4_ + auVar80._0_4_);
      fVar69 = auVar40._4_4_ + fVar71 * (fVar99 + fVar101 + auVar77._0_4_);
      auVar74._0_4_ =
           auVar58._0_4_ +
           fVar71 * (auVar75._4_4_ * auVar75._8_4_ + auVar78._4_4_ * fVar29 + fVar90 * fVar66 +
                    fVar98 * fVar103);
      fVar30 = fVar30 + (auVar78._0_4_ + fVar88 + auVar75._0_4_) * fVar71;
      fVar43 = fVar43 + (auVar78._4_4_ + fVar90 + auVar75._4_4_) * fVar79;
      fVar52 = fVar52 + (auVar78._8_4_ + fVar92 + auVar75._8_4_) * fVar71;
      fVar53 = fVar53 + (auVar78._12_4_ + fVar93 + auVar75._12_4_) * fVar79;
      auVar77 = NEON_ext(auVar58,auVar58,8,1);
      auVar74._4_4_ =
           auVar58._4_4_ +
           fVar71 * (auVar75._8_4_ * auVar75._0_4_ + fVar29 * auVar78._0_4_ + fVar66 * fVar88 +
                    fVar103 * fVar95);
      plVar27 = (long *)*plVar27;
      auVar74._8_4_ =
           auVar77._0_4_ +
           fVar71 * (fVar98 * fVar95 +
                    auVar75._0_4_ * auVar75._4_4_ + auVar78._0_4_ * auVar78._4_4_ + fVar88 * fVar90)
      ;
      auVar40._8_4_ = fVar68;
      auVar40._4_4_ = fVar69;
      auVar40._0_4_ = fVar70;
      auVar74._12_4_ = auVar58._12_4_;
      uVar26 = CONCAT44((float)(uVar26 >> 0x20) + SQRT(fVar100 + fVar102 + fVar87),
                        (float)uVar26 + SQRT(fVar100 + fVar102 + fVar87));
      auVar58 = auVar74;
    } while (plVar27 != (long *)0x0);
  }
  pauVar24 = (undefined1 (*) [16])(puVar19 + 0x60);
  fVar9 = *(float *)*pauVar24;
  fVar10 = *(float *)(puVar19 + 100);
  auVar18 = *(undefined1 (*) [12])*pauVar24;
  auVar57 = *pauVar24;
  auVar83 = *pauVar24;
  fVar66 = fVar9 / (float)uVar65;
  fVar29 = (float)(uVar65 >> 0x20);
  fVar71 = fVar10 / fVar29;
  fVar54 = fVar66 * (float)*(undefined8 *)(puVar19 + 0x170);
  fVar56 = fVar71 * (float)((ulong)*(undefined8 *)(puVar19 + 0x170) >> 0x20);
  fVar30 = fVar30 * fVar54;
  fVar43 = fVar43 * fVar56;
  auVar58._0_8_ = CONCAT44(fVar43,fVar30);
  auVar58._8_4_ = fVar52 * fVar54;
  auVar58._12_4_ = fVar53 * fVar56;
  uStack_108 = auVar58._8_8_;
  fVar44 = fVar44 + fVar30;
  fVar48 = fVar48 + fVar43;
  fVar49 = fVar49 + auVar58._8_4_;
  *(float *)(param_1 + 0x198) = fVar49;
  *(float *)(param_1 + 0x19c) = fVar50 + auVar58._12_4_;
  *(float *)(param_1 + 400) = fVar44;
  *(float *)(param_1 + 0x194) = fVar48;
  puVar20 = PTR_DAT_047d1bc8;
  local_110 = auVar58._0_8_;
  if (*(char *)(param_1 + 0xd) != '\0') {
    if (plVar25 == (long *)0x0) {
      auVar45._8_8_ = 0;
      auVar45._0_8_ = uVar32;
      local_a0 = uVar32;
    }
    else {
      auVar58 = *(undefined1 (*) [16])(param_1 + 0x150);
      auVar45._8_8_ = 0;
      auVar45._0_8_ = uVar32;
      auVar60 = *(undefined1 (*) [16])(param_1 + 0x130);
      do {
        auVar77 = NEON_scvtf(*(undefined1 (*) [16])(plVar25[2] + 0x20),4);
        auVar80 = NEON_scvtf(*(undefined1 (*) [16])(plVar25[4] + 0x20),4);
        fVar50 = auVar58._0_4_;
        fVar30 = auVar58._4_4_;
        fVar43 = auVar58._8_4_;
        fVar52 = auVar58._12_4_;
        fVar53 = auVar60._0_4_;
        fVar100 = fVar53 + fVar50 * auVar77._0_4_;
        fVar54 = auVar60._4_4_;
        fVar102 = fVar54 + fVar30 * auVar77._4_4_;
        fVar56 = auVar60._8_4_;
        fVar87 = fVar56 + fVar43 * auVar77._8_4_;
        fVar79 = auVar60._12_4_;
        fVar88 = fVar79 + fVar52 * 0.0;
        auVar77 = NEON_scvtf(*(undefined1 (*) [16])(plVar25[3] + 0x20),4);
        auVar61._0_4_ = (fVar53 + fVar50 * auVar80._0_4_) - fVar100;
        auVar61._4_4_ = (fVar54 + fVar30 * auVar80._4_4_) - fVar102;
        auVar61._8_4_ = (fVar56 + fVar43 * auVar80._8_4_) - fVar87;
        auVar61._12_4_ = (fVar79 + fVar52 * 0.0) - fVar88;
        auVar80 = NEON_ext(auVar61,auVar61,4,1);
        auVar34._0_4_ = (fVar53 + fVar50 * auVar77._0_4_) - fVar100;
        auVar34._4_4_ = (fVar54 + fVar30 * auVar77._4_4_) - fVar102;
        auVar34._8_4_ = (fVar56 + fVar43 * auVar77._8_4_) - fVar87;
        auVar34._12_4_ = (fVar79 + fVar52 * 0.0) - fVar88;
        auVar77 = NEON_ext(auVar34,auVar34,4,1);
        auVar35._0_4_ = auVar34._0_4_ * auVar80._0_4_ - auVar61._0_4_ * auVar77._0_4_;
        auVar35._4_4_ = auVar34._4_4_ * auVar80._4_4_ - auVar61._4_4_ * auVar77._4_4_;
        auVar35._8_4_ = auVar34._8_4_ * auVar61._0_4_ - auVar61._8_4_ * auVar34._0_4_;
        auVar35._12_4_ = auVar34._12_4_ * auVar61._4_4_ - auVar61._12_4_ * auVar34._4_4_;
        auVar77 = NEON_ext(auVar35,auVar35,4,1);
        fVar50 = auVar77._0_4_;
        fVar30 = auVar77._4_4_;
        auVar63._0_8_ = auVar77._0_8_;
        auVar63._8_4_ = auVar35._0_4_;
        auVar63._12_4_ = 0;
        fVar43 = fVar50 * fVar50 + fVar30 * fVar30 + auVar35._0_4_ * auVar35._0_4_;
        fVar52 = fVar50 * fVar50 + fVar30 * fVar30 + auVar35._0_4_ * auVar35._0_4_;
        uVar2 = (uint)(0.0 < fVar52);
        uVar73 = uVar32;
        if (fVar43 != 0.0) {
          uVar73 = CONCAT44(fVar10 / SQRT(fVar52),fVar9 / SQRT(fVar43));
        }
        auVar62._0_4_ = (int)((uint)(0.0 < fVar43) * -0x80000000) >> 0x1f;
        auVar62._4_4_ = (int)(uVar2 * -0x80000000) >> 0x1f;
        auVar62._8_4_ = (int)((uint)(0.0 < fVar43) * -0x80000000) >> 0x1f;
        auVar62._12_4_ = (int)(uVar2 * -0x80000000) >> 0x1f;
        auVar36._0_4_ = fVar50 * (float)uVar73;
        fVar50 = (float)(uVar73 >> 0x20);
        auVar36._4_4_ = fVar30 * fVar50;
        auVar36._8_4_ = auVar35._0_4_ * (float)uVar73;
        auVar36._12_4_ = fVar50 * 0.0;
        auVar63 = auVar63 ^ (auVar63 ^ auVar36) & auVar62;
        fVar50 = -(fVar100 * auVar63._0_4_ + fVar102 * auVar63._4_4_ + fVar87 * auVar63._8_4_);
        fVar30 = fVar44 * auVar63._0_4_;
        fVar43 = fVar48 * auVar63._4_4_;
        fVar52 = fVar49 * auVar63._8_4_;
        auVar45._0_8_ =
             NEON_fmax(auVar45._0_8_,
                       CONCAT44(fVar50 + fVar30 + fVar43 + fVar52,fVar50 + fVar30 + fVar43 + fVar52)
                       ,4);
        plVar25 = (long *)*plVar25;
        local_a0 = auVar45._0_8_;
      } while (plVar25 != (long *)0x0);
    }
    if (0.0 < auVar45._0_4_) {
      if ((3 < (byte)PTR_DAT_047d1bc8[0x50]) || (uVar32 = FUN_0322d380(), (uVar32 & 1) != 0)) {
        uVar32 = FUN_0322d380();
        if ((uVar32 & 1) == 0) {
          FUN_0322cb38(&local_350,PTR_DAT_047d1bc8,4);
          lVar22 = FUN_0322c554(&local_350,"Invalid COM wrt. triangles ({})",PTR_DAT_047d1bd0,
                                &local_a0);
          *(char **)(lVar22 + 0x38) =
               "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h";
          *(undefined8 *)(lVar22 + 0x40) = 0x7e6;
          FUN_0322cb80(&local_350);
        }
        else {
          FUN_0322cbcc(&local_350,PTR_DAT_047d1bc8,4);
          lVar22 = FUN_0322c554(&local_350,"Invalid COM wrt. triangles ({})",PTR_DAT_047d1bd0,
                                &local_a0);
          *(char **)(lVar22 + 0x38) =
               "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h";
          *(undefined8 *)(lVar22 + 0x40) = 0x7e6;
          FUN_0322cc24(&local_350);
        }
      }
      *(undefined1 *)(param_1 + 0x1fd) = 1;
    }
    if (*(char *)(param_1 + 0x1fe) == '\0') {
      auVar38._8_8_ = 0;
      auVar38._0_8_ = local_a0;
    }
    else {
      auVar38 = ZEXT816(0);
      local_a0 = 0;
      if (0 < (int)*(uint *)(param_1 + 0x98)) {
        auVar38 = ZEXT816(0);
        uVar32 = 0;
        do {
          pfVar3 = (float *)(*(long *)(param_1 + 0x90) + uVar32 * 0x10);
          uVar32 = uVar32 + 1;
          auVar38._0_8_ =
               NEON_fmax(auVar38._0_8_,
                         CONCAT44(pfVar3[3] +
                                  fVar44 * *pfVar3 + fVar48 * pfVar3[1] + fVar49 * pfVar3[2],
                                  pfVar3[3] +
                                  fVar44 * *pfVar3 + fVar48 * pfVar3[1] + fVar49 * pfVar3[2]),4);
        } while (uVar32 < *(uint *)(param_1 + 0x98));
        local_a0 = auVar38._0_8_;
      }
    }
    if (0.0 < auVar38._0_4_) {
      if ((3 < (byte)puVar20[0x50]) || (uVar32 = FUN_0322d380(), (uVar32 & 1) != 0)) {
        uVar32 = FUN_0322d380();
        if ((uVar32 & 1) == 0) {
          FUN_0322cb38(&local_350,PTR_DAT_047d1bc8,4);
          lVar22 = FUN_0322c554(&local_350,"Invalid COM wrt. planes ({})",PTR_DAT_047d1bd0,&local_a0
                               );
          *(char **)(lVar22 + 0x38) =
               "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h";
          *(undefined8 *)(lVar22 + 0x40) = 0x7f4;
          FUN_0322cb80(&local_350);
        }
        else {
          FUN_0322cbcc(&local_350,PTR_DAT_047d1bc8,4);
          lVar22 = FUN_0322c554(&local_350,"Invalid COM wrt. planes ({})",PTR_DAT_047d1bd0,&local_a0
                               );
          *(char **)(lVar22 + 0x38) =
               "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h";
          *(undefined8 *)(lVar22 + 0x40) = 0x7f4;
          FUN_0322cc24(&local_350);
        }
      }
      *(undefined1 *)(param_1 + 0x1fd) = 1;
    }
  }
  fVar50 = *(float *)(puVar19 + 400);
  fVar30 = *(float *)(puVar19 + 0x194);
  uVar31 = CONCAT44(auVar96._4_4_ - auVar104._4_4_,auVar96._0_4_ - auVar104._0_4_);
  fVar44 = auVar96._8_4_ - auVar104._8_4_;
  *(ulong *)(param_1 + 0x1e8) =
       CONCAT44((float)(uVar26 >> 0x20) * (float)((ulong)*(undefined8 *)(puVar19 + 0x150) >> 0x20),
                (float)uVar26 * (float)*(undefined8 *)(puVar19 + 0x150));
  uVar31 = NEON_fmaxp(uVar31,uVar31,4);
  uVar31 = NEON_fmax(CONCAT44(fVar44,fVar44),uVar31,4);
  fVar48 = (float)uVar65 * fVar50;
  fVar44 = (float)uVar31;
  fVar49 = fVar44 * fVar44 * fVar44;
  uVar31 = *(undefined8 *)(puVar19 + 0x260);
  *(ulong *)(param_1 + 0x1e0) = CONCAT44(fVar29 * fVar30,fVar48);
  puVar20 = PTR_DAT_047d19e0;
  if (fVar49 * (float)uVar31 < fVar48) {
    auVar51._8_8_ = _UNK_03cab388;
    auVar51._0_8_ = _DAT_03cab380;
    auVar55._8_8_ = _UNK_03cabbe8;
    auVar55._0_8_ = _DAT_03cabbe0;
    auVar39._0_4_ = fVar70 * fVar66 * 0.1;
    auVar39._4_4_ = fVar69 * fVar71 * 0.1;
    auVar39._8_4_ = fVar68 * fVar66 * 0.1;
    auVar39._12_4_ = auVar40._12_4_ * fVar71 * 0.1;
    auVar58 = a64_TBL(ZEXT816(0),auVar39,auVar55);
    auVar40 = a64_TBL(ZEXT816(0),auVar39,auVar51);
    auVar59._0_4_ = auVar40._0_4_ + auVar58._0_4_;
    auVar59._4_4_ = auVar40._4_4_ + auVar58._4_4_;
    auVar59._8_4_ = auVar40._8_4_ + auVar58._8_4_;
    auVar41._0_4_ = auVar74._0_4_ * fVar66 * -0.05;
    auVar41._4_4_ = auVar74._4_4_ * fVar71 * -0.05;
    auVar41._8_4_ = auVar74._8_4_ * fVar66 * -0.05;
    auVar41._12_4_ = auVar74._12_4_ * fVar71 * -0.05;
    auVar59._12_4_ = 0;
    auVar46._8_8_ = _UNK_03caa978;
    auVar46._0_8_ = _DAT_03caa970;
    auVar58 = a64_TBL(ZEXT816(0),auVar41,auVar55);
    auVar74 = a64_TBL(ZEXT816(0),auVar41,auVar46);
    auVar40 = NEON_ext(auVar41,auVar41,8,1);
    auVar40 = auVar40 ^ (auVar40 ^ auVar59) & *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0xa0);
    auVar58 = auVar58 ^ (auVar58 ^ auVar59) & *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0x90);
    fStack_388 = auVar58._8_4_;
    fStack_384 = auVar58._12_4_;
    local_390 = auVar58._0_4_;
    fStack_38c = auVar58._4_4_;
    local_148 = 0;
    auVar74 = auVar74 ^ (auVar74 ^ auVar59) & *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0xc0);
    local_150 = 0;
    FUN_031cb690(&local_350,&local_110);
    FUN_031cb690(&local_a0,&local_150);
    FUN_031cb500(&local_d0,&local_350,&local_350);
    FUN_031cb500(&local_100,&local_a0,&local_a0);
    FUN_031cb6e0(&local_100);
    auVar58 = NEON_ext(auVar83,auVar83,8,1);
    auVar83 = NEON_ext(auVar58,auVar83,8,1);
    fVar30 = auVar83._0_4_;
    fVar43 = auVar83._4_4_;
    fVar52 = auVar83._8_4_;
    fVar53 = auVar83._12_4_;
    local_140 = fVar30 * ((float)local_d0 - local_100) + local_390;
    fStack_13c = fVar43 * (local_d0._4_4_ - fStack_fc) + fStack_38c;
    fStack_138 = fVar52 * ((float)uStack_c8 - fStack_f8) + fStack_388;
    fStack_134 = fVar53 * (uStack_c8._4_4_ - fStack_f4) + fStack_384;
    auVar47._0_8_ =
         CONCAT44(fVar43 * (fStack_bc - fStack_ec) + auVar40._4_4_,
                  fVar30 * (fStack_c0 - fStack_f0) + auVar40._0_4_);
    auVar47._8_4_ = fVar52 * (fStack_b8 - fStack_e8) + auVar40._8_4_;
    auVar47._12_4_ = fVar53 * (fStack_b4 - fStack_e4) + auVar40._12_4_;
    uStack_128 = auVar47._8_8_;
    local_3b0 = auVar74._0_4_;
    fStack_3ac = auVar74._4_4_;
    fStack_3a8 = auVar74._8_4_;
    fStack_3a4 = auVar74._12_4_;
    local_120 = fVar30 * (local_b0 - local_e0) + local_3b0;
    fStack_11c = fVar43 * (fStack_ac - fStack_dc) + fStack_3ac;
    fStack_118 = fVar52 * (fStack_a8 - fStack_d8) + fStack_3a8;
    fStack_114 = fVar53 * (fStack_a4 - fStack_d4) + fStack_3a4;
    local_130 = auVar47._0_8_;
    iVar21 = FUN_031cb7b0(&local_140,&local_a0,&local_d0,0x80);
    if (iVar21 < 0) {
      local_a0 = *(ulong *)(puVar19 + 0x200);
      uStack_98 = *(undefined8 *)(puVar19 + 0x208);
      auVar83 = *(undefined1 (*) [16])(puVar19 + 0x210);
      *(undefined1 *)(param_1 + 0x1fd) = 1;
      uStack_78 = SUB168(*(undefined1 (*) [16])(puVar19 + 0x220),8);
      local_80 = SUB168(*(undefined1 (*) [16])(puVar19 + 0x220),0);
      uStack_88 = auVar83._8_8_;
      local_90 = auVar83._0_8_;
      uStack_c8 = auVar57._8_8_;
      local_d0 = auVar18._0_8_;
      FUN_032260f8(&local_100,&local_350,0x200);
      uVar23 = FUN_0322b1e0(&local_100,"Failed to diagonalize inertia matrix (");
      uVar23 = FUN_0322b2c8(uVar23,*(undefined4 *)(param_1 + 0x1f8));
      FUN_0322b1e0(uVar23,&DAT_03c8f4f1);
      FUN_03226c50(0x45465,&local_350,
                   "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h",
                   0x82d);
      FUN_032261b0(&local_100);
    }
    FUN_031cb6e0(&local_a0);
    FUN_031cc35c(&local_a0);
    *(ulong *)(param_1 + 0x1b8) = CONCAT44(fStack_134,fStack_138);
    *(ulong *)(param_1 + 0x1b0) = CONCAT44(fStack_13c,local_140);
    *(undefined8 *)(param_1 + 0x1c8) = uStack_128;
    *(undefined8 *)(param_1 + 0x1c0) = local_130;
    auVar16._8_4_ = fStack_118;
    auVar16._0_8_ = CONCAT44(fStack_11c,local_120);
    auVar16._12_4_ = fStack_114;
    *(long *)(param_1 + 0x1d8) = auVar16._8_8_;
    *(ulong *)(param_1 + 0x1d0) = CONCAT44(fStack_11c,local_120);
    FUN_031cb71c(&local_140,&local_a0);
    auVar42._4_4_ = fStack_13c;
    auVar42._0_4_ = local_140;
    auVar42._8_4_ = fStack_138;
    auVar42._12_4_ = fStack_134;
    auVar15._8_8_ = uStack_128;
    auVar15._0_8_ = local_130;
    auVar42 = auVar42 ^ (auVar42 ^ auVar15) & *(undefined1 (*) [16])(puVar20 + 0x20);
    auVar17._4_4_ = fStack_11c;
    auVar17._0_4_ = local_120;
    auVar17._8_4_ = fStack_118;
    auVar17._12_4_ = fStack_114;
    auVar42 = auVar42 ^ (auVar42 ^ auVar17) & *(undefined1 (*) [16])(puVar20 + 0x40);
    *(long *)(param_1 + 0x1a8) = auVar42._8_8_;
    *(long *)(param_1 + 0x1a0) = auVar42._0_8_;
    FUN_031cb6e0(&local_a0);
    *(undefined8 *)(param_1 + 0x168) = uStack_98;
    *(ulong *)(param_1 + 0x160) = local_a0;
    *(undefined8 *)(param_1 + 0x178) = uStack_88;
    *(undefined8 *)(param_1 + 0x170) = local_90;
    *(undefined8 *)(param_1 + 0x188) = uStack_78;
    *(undefined8 *)(param_1 + 0x180) = local_80;
    uVar23 = NEON_fminp(CONCAT44(ABS(auVar59._4_4_),ABS(auVar59._0_4_)),
                        CONCAT44(ABS(auVar59._4_4_),ABS(auVar59._0_4_)),4);
    uVar23 = NEON_fmin(CONCAT44(ABS(auVar59._8_4_),ABS(auVar59._8_4_)),uVar23,4);
    if (fVar48 * (float)uVar23 <= fVar49 * fVar50 * fVar44 * fVar44 * (float)uVar31) {
      *(undefined1 *)(param_1 + 0x1fd) = 1;
    }
  }
  else {
    uVar31 = *(undefined8 *)(puVar19 + 0x200);
    uVar23 = *(undefined8 *)(puVar19 + 0x210);
    uVar11 = *(undefined8 *)(puVar19 + 0x218);
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(puVar19 + 0x208);
    *(undefined8 *)(param_1 + 0x160) = uVar31;
    uVar31 = *(undefined8 *)(puVar19 + 0x220);
    uVar12 = *(undefined8 *)(puVar19 + 0x228);
    *(undefined1 *)(param_1 + 0x1fd) = 1;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined8 *)(param_1 + 0x178) = uVar11;
    *(undefined8 *)(param_1 + 0x170) = uVar23;
    *(undefined8 *)(param_1 + 0x188) = uVar12;
    *(undefined8 *)(param_1 + 0x180) = uVar31;
  }
  *(undefined1 *)(param_1 + 0x1fc) = 1;
  return 0;
}


