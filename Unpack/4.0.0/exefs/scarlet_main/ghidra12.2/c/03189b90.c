/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03189b90; name: FUN_03189b90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03189b90(undefined1 (*param_1) [12],long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 uVar9;
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  undefined *puVar26;
  byte bVar27;
  undefined8 uVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  long *plVar32;
  undefined8 *puVar33;
  long lVar34;
  long lVar35;
  long *plVar36;
  byte bVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar49 [16];
  int iVar47;
  undefined4 uVar48;
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  uint uVar60;
  float fVar61;
  float fVar62;
  undefined8 uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined1 auVar69 [15];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar79 [16];
  undefined1 auVar78 [16];
  undefined1 auVar77 [16];
  undefined1 auVar76 [16];
  undefined1 auVar75 [16];
  undefined1 auVar74 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  undefined8 local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  long local_550;
  undefined8 local_548;
  long local_540;
  undefined8 uStack_538;
  undefined8 local_528;
  undefined *local_520 [2];
  undefined8 local_510;
  undefined8 uStack_508;
  float fStack_500;
  float fStack_4fc;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  undefined8 local_4d0;
  float local_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  long *local_4b0;
  long alStack_4a8 [31];
  undefined1 auStack_3b0 [16];
  undefined1 auStack_3a0 [48];
  undefined1 auStack_370 [16];
  undefined1 auStack_360 [176];
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 *local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined4 auStack_288 [2];
  undefined8 uStack_280;
  undefined4 auStack_278 [54];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [48];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [176];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined8 local_80;
  float fStack_78;
  float fStack_74;
  long *plStack_70;
  
  lVar34 = tpidr_el0;
  lVar29 = *(long *)(lVar34 + 0x1000b8);
  if (lVar29 == 0) {
    lVar29 = FUN_00e5d3b4();
    *(long *)(lVar34 + 0x1000b8) = lVar29;
  }
  plVar36 = *(long **)(lVar29 + 0x3e0);
  if (plVar36 != (long *)0x0) {
    lVar29 = *plVar36;
    if (*(code **)(lVar29 + 0x18) != (code *)0x0) {
      (**(code **)(lVar29 + 0x18))("solveSingleAgent",0x10,*(undefined8 *)(lVar29 + 0x28));
      if (*(code **)(lVar29 + 0x18) != (code *)0x0) {
        (**(code **)(lVar29 + 0x18))("init",4,*(undefined8 *)(lVar29 + 0x28));
      }
    }
    puVar33 = (undefined8 *)plVar36[2];
    uVar30 = (long)puVar33 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar30 <= (ulong)plVar36[3]) && (plVar36[2] = uVar30, puVar33 != (undefined8 *)0x0)) {
      *puVar33 = "LtsolveSingleAgent";
      puVar33[2] = "Stinit";
      uVar28 = nn::os::GetSystemTick();
      puVar33[1] = uVar28;
    }
    if (((*(byte *)(lVar29 + 0x38) & 1) != 0) && (plVar36[6] != 0)) {
      puVar33 = (undefined8 *)plVar36[2];
      uVar30 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
      if ((uVar30 <= (ulong)plVar36[3]) && (plVar36[2] = uVar30, puVar33 != (undefined8 *)0x0)) {
        *puVar33 = &DAT_03c4e575;
        puVar33[1] = *(undefined8 *)(plVar36[6] + 8);
      }
    }
  }
  lVar29 = *(long *)(param_1[1] + 4);
  fStack_78 = (float)*(undefined8 *)(*param_1 + 8);
  fStack_74 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  local_80 = *(undefined8 *)*param_1;
  auVar40 = *(undefined1 (*) [16])(lVar29 + 0x80);
  fVar41 = *(float *)(lVar29 + 0xa8);
  local_88 = CONCAT44(fVar41,fVar41);
  fVar42 = auVar40._0_4_ * fVar41;
  fVar44 = auVar40._4_4_ * fVar41;
  fVar45 = auVar40._8_4_ * fVar41;
  fVar41 = auVar40._12_4_ * fVar41;
  fVar42 = fVar42 * fVar42;
  fVar44 = fVar44 * fVar44;
  fVar45 = fVar45 * fVar45;
  fVar41 = fVar41 * fVar41;
  auVar49._4_4_ = fVar44;
  auVar49._0_4_ = fVar42;
  auVar49._8_4_ = fVar45;
  auVar49._12_4_ = fVar41;
  auVar50._4_4_ = fVar44;
  auVar50._0_4_ = fVar42;
  auVar50._8_4_ = fVar45;
  auVar50._12_4_ = fVar41;
  auVar49 = NEON_ext(auVar49,auVar50,8,1);
  fVar41 = fVar42 + fVar44 + auVar49._0_4_;
  if (fVar41 < 1e-05) {
    auVar25._12_4_ = fStack_74;
    auVar25._0_12_ = *param_1;
    local_88 = 0;
    auVar40._8_4_ = (int)_UNK_03cabbd8;
    auVar40._0_8_ = _DAT_03cabbd0;
    auVar40._12_4_ = (int)((ulong)_UNK_03cabbd8 >> 0x20);
    auVar40 = a64_TBL(ZEXT816(0),auVar25,auVar40);
  }
  uVar28 = local_88;
  uVar68 = *(undefined8 *)(lVar29 + 0x40);
  fVar51 = (float)uVar68;
  fVar44 = (float)((ulong)uVar68 >> 0x20);
  fVar45 = (float)*(undefined8 *)(lVar29 + 0x48);
  fVar46 = *(float *)(lVar29 + 0xa4);
  fVar42 = fVar51 * fVar51 + fVar44 * fVar44 + fVar45 * fVar45;
  if (fVar46 * fVar46 < fVar42) {
    if (fVar42 == 0.0) {
      fVar43 = 0.0;
      fVar44 = 0.0;
      fVar45 = 0.0;
    }
    else {
      fVar43 = fVar51 / SQRT(fVar42);
      fVar44 = fVar44 / SQRT(fVar51 * fVar51 + fVar44 * fVar44 + fVar45 * fVar45);
      fVar45 = fVar45 / SQRT(fVar42);
    }
    uVar68 = CONCAT44(fVar44 * fVar46,fVar43 * fVar46);
    fVar45 = fVar45 * fVar46;
  }
  local_2a0 = &local_290;
  local_298 = 0x80;
  fStack_500 = 0.0;
  fStack_4fc = 0.0;
  uStack_4f8 = 0;
  local_4b0 = alStack_4a8 + 1;
  uStack_98 = 0;
  local_a0 = 0;
  alStack_4a8[0] = 0x80;
  uStack_2a8 = 0;
  local_2b0 = 0;
  lVar31 = 0x10;
  plStack_70 = plVar36;
  do {
    lVar35 = lVar31 + 0x20;
    Hint_Prefetch(auStack_1a0 + lVar31,0,0,0);
    Hint_Prefetch(auStack_160 + lVar31,0,0,0);
    *(undefined4 *)((long)auStack_288 + lVar31 + -0x10) = 0x5f7ffff0;
    *(undefined4 *)((long)auStack_288 + lVar31 + -0xc) = 0x5f7ffff0;
    *(undefined8 *)((long)auStack_288 + lVar31 + -0x18) = 0x5f7ffff05f7ffff0;
    *(undefined4 *)((long)auStack_288 + lVar31) = 0x5f7ffff0;
    *(undefined4 *)((long)auStack_288 + lVar31 + 4) = 0x5f7ffff0;
    *(undefined8 *)((long)auStack_288 + lVar31 + -8) = 0x5f7ffff05f7ffff0;
    Hint_Prefetch(auStack_190 + lVar31,0,0,0);
    Hint_Prefetch(auStack_150 + lVar31,0,0,0);
    lVar31 = lVar35;
  } while ((int)lVar35 != 0x210);
  lVar31 = 0x10;
  do {
    lVar35 = lVar31 + 0x20;
    Hint_Prefetch(auStack_3b0 + lVar31,0,0,0);
    Hint_Prefetch(auStack_370 + lVar31,0,0,0);
    *(undefined8 *)((long)alStack_4a8 + lVar31) = 0;
    *(undefined8 *)((long)alStack_4a8 + lVar31 + -8) = 0;
    *(undefined8 *)((long)alStack_4a8 + lVar31 + 0x10) = 0;
    *(undefined8 *)((long)alStack_4a8 + lVar31 + 8) = 0;
    Hint_Prefetch(auStack_3a0 + lVar31,0,0,0);
    Hint_Prefetch(auStack_360 + lVar31,0,0,0);
    lVar31 = lVar35;
  } while ((int)lVar35 != 0x210);
  uVar60 = *(uint *)(lVar29 + 0xc4);
  if (1e-05 <= fVar41) {
    alStack_4a8[2] = (long)uVar60;
  }
  else {
    alStack_4a8[2] = (ulong)uVar60 << 0x20;
    uVar60 = 0;
  }
  auVar49 = NEON_ext(auVar40,auVar40,8,1);
  fStack_4b8 = 0.0;
  fStack_4b4 = 0.0;
  local_4c0 = 0.0;
  fStack_4bc = 0.0;
  local_510 = auVar40._0_8_;
  uVar63 = NEON_ext(local_510,auVar49._0_8_,4,1);
  alStack_4a8[1] = CONCAT44(uVar60,uVar60);
  auVar8._8_4_ = fStack_78;
  auVar8._0_8_ = local_80;
  auVar7._8_4_ = fStack_78;
  auVar7._0_8_ = local_80;
  fVar41 = (float)((ulong)local_80 >> 0x20);
  auVar7._12_4_ = fStack_74;
  auVar8._12_4_ = fStack_74;
  auVar49 = NEON_ext(auVar7,auVar8,8,1);
  uVar67 = NEON_ext(local_80,auVar49._0_8_,4,1);
  fVar51 = auVar40._0_4_;
  fVar43 = auVar40._4_4_;
  auVar70._0_4_ = (float)uVar67 * fVar51 - (float)uVar63 * (float)local_80;
  auVar70._4_4_ = (float)((ulong)uVar67 >> 0x20) * fVar43 - (float)((ulong)uVar63 >> 0x20) * fVar41;
  auVar70._8_4_ = (float)local_80 * auVar40._8_4_ - fVar51 * fStack_78;
  auVar70._12_4_ = fVar41 * auVar40._12_4_ - fVar43 * fStack_74;
  auVar49 = NEON_ext(auVar70,auVar70,4,1);
  fVar42 = auVar49._0_4_;
  fVar44 = auVar49._4_4_;
  fVar41 = fVar42 * fVar42 + fVar44 * fVar44 + auVar70._0_4_ * auVar70._0_4_;
  if (fVar41 != 0.0) {
    fVar41 = SQRT(fVar41);
    fVar52 = SQRT(fVar42 * fVar42 + fVar44 * fVar44 + auVar70._0_4_ * auVar70._0_4_);
    fStack_500 = fVar42 / fVar41;
    fStack_4fc = fVar44 / fVar52;
    uStack_4f8 = CONCAT44(0.0 / fVar52,auVar70._0_4_ / fVar41);
  }
  fVar41 = (float)uVar68;
  fVar52 = (float)((ulong)uVar68 >> 0x20);
  local_4d0 = CONCAT44(fVar46,fVar46);
  uVar68 = NEON_fmov(0x3f800000,4);
  iVar47 = -(uint)(fVar46 == 0.0);
  fVar61 = fVar45 * fVar45 + fVar41 * fVar41 + fVar52 * fVar52;
  uVar48 = CONCAT13(~(byte)((uint)iVar47 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar47 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar47 >> 8),~(byte)iVar47)));
  uStack_508 = auVar40._8_8_;
  uVar30 = CONCAT44((float)((ulong)uVar68 >> 0x20) / fVar46,(float)uVar68 / fVar46) &
           CONCAT44(uVar48,uVar48);
  fVar42 = (float)uVar30;
  fVar52 = (float)(uVar30 >> 0x20) * fVar52;
  auVar49 = ZEXT816(0);
  fVar44 = fVar42 * fVar45 * auVar40._8_4_ + fVar42 * fVar41 * fVar51 + fVar52 * fVar43;
  fVar45 = fVar42 * fVar45 * (float)uStack_4f8 + fVar42 * fVar41 * fStack_500 + fVar52 * fStack_4fc;
  fVar41 = 0.0;
  if (fVar61 != 0.0) {
    fVar41 = (float)uVar68 / SQRT(fVar61);
  }
  fVar41 = fVar41 * (float)uVar28;
  fVar42 = fVar42 * (float)uVar28;
  local_4f0 = CONCAT44(fVar42,fVar44);
  uStack_4e0 = (ulong)(uint)fVar45;
  uStack_4d8 = (ulong)(uint)(fVar45 * fVar41);
  uStack_4e8 = (ulong)(uint)(fVar44 * fVar41);
  if (fVar42 < 0.25) {
    local_520[0] = PTR_DAT_047e57e8;
  }
  else if (fVar42 < 0.7853982) {
    local_520[0] = PTR_DAT_047e57f0;
  }
  else {
    local_520[0] = PTR_DAT_047e57e0;
  }
  local_528 = CONCAT44(*(undefined4 *)(lVar29 + 0xd0),*(undefined4 *)(lVar29 + 0xd0));
  lVar31 = *(long *)(lVar34 + 0x1000b8);
  if (lVar31 == 0) {
    lVar31 = FUN_00e5d3b4();
    *(long *)(lVar34 + 0x1000b8) = lVar31;
  }
  plVar32 = *(long **)(lVar31 + 0x3e0);
  if (plVar32 != (long *)0x0) {
    lVar31 = *plVar32;
    if (((*(byte *)(lVar31 + 0x38) & 1) != 0) && (plVar32[6] != 0)) {
      puVar33 = (undefined8 *)plVar32[2];
      uVar30 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
      if ((uVar30 <= (ulong)plVar32[3]) && (plVar32[2] = uVar30, puVar33 != (undefined8 *)0x0)) {
        *puVar33 = &DAT_03c4e575;
        puVar33[1] = *(undefined8 *)(plVar32[6] + 8);
      }
    }
    puVar33 = (undefined8 *)plVar32[2];
    uVar30 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
    if ((uVar30 <= (ulong)plVar32[3]) && (plVar32[2] = uVar30, puVar33 != (undefined8 *)0x0)) {
      *puVar33 = "StscoreBoundaryObstacles";
      uVar28 = nn::os::GetSystemTick();
      puVar33[1] = uVar28;
    }
    if (*(code **)(lVar31 + 0x20) != (code *)0x0) {
      (**(code **)(lVar31 + 0x20))(*(undefined8 *)(lVar31 + 0x28));
    }
    if (*(code **)(lVar31 + 0x18) != (code *)0x0) {
      (**(code **)(lVar31 + 0x18))("scoreBoundaryObstacles",0x16,*(undefined8 *)(lVar31 + 0x28));
    }
  }
  iVar47 = (int)(*(long **)param_1[2])[1];
  if (iVar47 == 0) {
    bVar37 = 0;
  }
  else {
    lVar31 = **(long **)param_1[2];
    bVar37 = 0;
    lVar35 = (long)iVar47 << 5;
    do {
      bVar27 = FUN_0318b4c0(lVar29,lVar31,&local_80,&local_528,local_520,&local_2a0,&local_4b0,
                            &local_4c0);
      bVar37 = bVar37 | bVar27;
      lVar31 = lVar31 + 0x20;
      lVar35 = lVar35 + -0x20;
    } while (lVar35 != 0);
  }
  lVar31 = *(long *)(lVar34 + 0x1000b8);
  if (lVar31 == 0) {
    lVar31 = FUN_00e5d3b4();
    *(long *)(lVar34 + 0x1000b8) = lVar31;
  }
  plVar32 = *(long **)(lVar31 + 0x3e0);
  if (plVar32 != (long *)0x0) {
    lVar31 = *plVar32;
    if (((*(byte *)(lVar31 + 0x38) & 1) != 0) && (plVar32[6] != 0)) {
      puVar33 = (undefined8 *)plVar32[2];
      uVar30 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
      if ((uVar30 <= (ulong)plVar32[3]) && (plVar32[2] = uVar30, puVar33 != (undefined8 *)0x0)) {
        *puVar33 = &DAT_03c4e575;
        puVar33[1] = *(undefined8 *)(plVar32[6] + 8);
      }
    }
    puVar33 = (undefined8 *)plVar32[2];
    uVar30 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
    if ((uVar30 <= (ulong)plVar32[3]) && (plVar32[2] = uVar30, puVar33 != (undefined8 *)0x0)) {
      *puVar33 = "StscoreSphereObstacles";
      uVar28 = nn::os::GetSystemTick();
      puVar33[1] = uVar28;
    }
    if (*(code **)(lVar31 + 0x20) != (code *)0x0) {
      (**(code **)(lVar31 + 0x20))(*(undefined8 *)(lVar31 + 0x28));
    }
    if (*(code **)(lVar31 + 0x18) != (code *)0x0) {
      (**(code **)(lVar31 + 0x18))("scoreSphereObstacles",0x14,*(undefined8 *)(lVar31 + 0x28));
    }
  }
  lVar31 = *(long *)param_1[2];
  if (*(int *)(lVar31 + 0x18) != 0) {
    lVar35 = *(long *)(lVar31 + 0x10);
    lVar31 = (long)*(int *)(lVar31 + 0x18) << 5;
    do {
      bVar27 = FUN_0318ac30(lVar29,lVar35,&local_80,&local_528,local_520,&local_2a0,&local_4b0,
                            &local_4c0);
      bVar37 = bVar37 | bVar27;
      lVar35 = lVar35 + 0x20;
      lVar31 = lVar31 + -0x20;
    } while (lVar31 != 0);
    lVar31 = *(long *)param_1[2];
  }
  if (*(int *)(lVar31 + 0x40) != 0) {
    puVar33 = *(undefined8 **)(lVar31 + 0x38);
    auVar50 = NEON_fmov(0xbf800000,4);
    puVar2 = puVar33 + (long)*(int *)(lVar31 + 0x40) * 2;
    do {
      fVar41 = (float)((ulong)local_528 >> 0x20);
      local_4c0 = local_4c0 + (float)local_528 * (float)*puVar33;
      fStack_4bc = fStack_4bc + fVar41 * (float)((ulong)*puVar33 >> 0x20);
      fStack_4b8 = fStack_4b8 + (float)local_528 * (float)puVar33[1];
      fStack_4b4 = fStack_4b4 + fVar41 * (float)((ulong)puVar33[1] >> 0x20);
      fVar44 = (float)*puVar33;
      fVar41 = (float)local_510 * fVar44;
      fVar45 = (float)((ulong)*puVar33 >> 0x20);
      fVar42 = (float)((ulong)local_510 >> 0x20) * fVar45;
      fVar51 = (float)uStack_508 * (float)puVar33[1];
      fVar44 = fVar44 * fStack_500;
      fVar45 = fVar45 * fStack_4fc;
      fVar52 = (float)puVar33[1] * (float)uStack_4f8;
      fVar46 = fVar41 + fVar42 + fVar51;
      fVar51 = fVar41 + fVar42 + fVar51;
      fVar43 = fVar44 + fVar45 + fVar52;
      fVar52 = fVar44 + fVar45 + fVar52;
      fVar57 = (float)uStack_4d8;
      fVar59 = (float)(uStack_4d8 >> 0x20);
      fVar61 = (float)uStack_4e0;
      fVar55 = (float)(uStack_4e0 >> 0x20);
      lVar31 = 0;
      fVar41 = (float)local_4f0;
      fVar42 = local_4f0._4_4_;
      fVar44 = (float)uStack_4e8;
      fVar45 = uStack_4e8._4_4_;
      do {
        uVar28 = *(undefined8 *)(local_520[0] + lVar31 * 8 + 8);
        fVar62 = fVar46 * fVar41;
        fVar64 = fVar51 * fVar42;
        fVar65 = fVar46 * fVar44;
        fVar66 = fVar51 * fVar45;
        fVar53 = fVar43 * fVar61;
        fVar54 = fVar52 * fVar55;
        fVar56 = fVar43 * fVar57;
        fVar58 = fVar52 * fVar59;
        uVar9 = (undefined1)((ulong)uVar28 >> 0x38);
        bVar37 = (byte)((ulong)uVar28 >> 0x20);
        uVar38 = (undefined1)((ulong)uVar28 >> 0x28);
        auVar69._0_10_ = (unkuint10)CONCAT11(bVar37,uVar9) << 0x38;
        auVar69[10] = uVar38;
        uVar39 = (undefined1)((ulong)uVar28 >> 0x30);
        auVar69[0xb] = 0;
        auVar69[0xc] = uVar39;
        auVar69[0xd] = 0;
        auVar69[0xe] = uVar9;
        auVar10[9] = 0;
        auVar10._0_9_ = (unkuint9)auVar69._8_7_ << 0x40;
        auVar10._10_5_ = auVar69._10_5_;
        auVar11[0xb] = 0;
        auVar11._0_11_ = auVar10._0_11_;
        auVar11._12_3_ = auVar69._12_3_;
        auVar12[0xd] = 0;
        auVar12._0_13_ = auVar11._0_13_;
        auVar12[0xe] = uVar9;
        auVar72._2_14_ = auVar49._2_14_;
        auVar72._0_2_ = (ushort)uVar28 & 0xff;
        auVar74._6_10_ = auVar49._6_10_;
        auVar74._0_4_ = auVar72._0_4_;
        auVar74[4] = (char)((ulong)uVar28 >> 8);
        auVar74[5] = 0;
        auVar76._10_6_ = auVar49._10_6_;
        auVar76._0_8_ = auVar74._0_8_;
        auVar76[8] = (char)((ulong)uVar28 >> 0x10);
        auVar76[9] = 0;
        auVar78._14_2_ = auVar49._14_2_;
        auVar78._0_12_ = auVar76._0_12_;
        auVar78[0xc] = (char)((ulong)uVar28 >> 0x18);
        auVar78[0xd] = 0;
        auVar73._4_12_ = auVar78._4_12_;
        auVar73._0_4_ = auVar74._0_4_ & 0xffff;
        auVar75._8_8_ = auVar78._8_8_;
        auVar75._0_6_ = auVar73._0_6_;
        auVar75._6_2_ = 0;
        auVar77._12_4_ = auVar78._12_4_;
        auVar77._0_10_ = auVar75._0_10_;
        auVar77._10_2_ = 0;
        auVar79._0_14_ = auVar77._0_14_;
        auVar79._14_2_ = 0;
        auVar13[1] = 0;
        auVar13[0] = bVar37;
        auVar13._2_13_ = auVar12._2_13_;
        auVar14[4] = uVar38;
        auVar14._0_4_ = auVar13._0_4_;
        auVar14[5] = 0;
        auVar14._6_9_ = auVar12._6_9_;
        auVar15[8] = uVar39;
        auVar15._0_8_ = auVar14._0_8_;
        auVar15[9] = 0;
        auVar15._10_5_ = auVar12._10_5_;
        auVar16[0xc] = uVar9;
        auVar16._0_12_ = auVar15._0_12_;
        auVar16[0xd] = 0;
        auVar16[0xe] = uVar9;
        auVar17._4_11_ = auVar16._4_11_;
        auVar17._0_4_ = auVar13._0_4_;
        auVar18._6_2_ = 0;
        auVar18._0_6_ = auVar17._0_6_;
        auVar18._8_7_ = auVar16._8_7_;
        auVar19._10_2_ = 0;
        auVar19._0_10_ = auVar18._0_10_;
        auVar19._12_3_ = auVar16._12_3_;
        auVar71._0_14_ = auVar19._0_14_;
        auVar71._14_2_ = 0;
        auVar49 = NEON_ucvtf(auVar79,4);
        auVar40 = NEON_ucvtf(auVar71,4);
        puVar5 = (uint *)(local_2a0 + lVar31 * 2);
        uVar60 = *puVar5;
        uVar20 = puVar5[1];
        uVar21 = puVar5[3];
        uVar22 = *puVar5;
        uVar23 = puVar5[1];
        uVar24 = puVar5[3];
        fVar41 = auVar49._0_4_ * 0.007874016 + auVar50._0_4_;
        fVar42 = auVar49._4_4_ * 0.007874016 + auVar50._4_4_;
        fVar44 = auVar49._8_4_ * 0.007874016 + auVar50._8_4_;
        fVar45 = auVar49._12_4_ * 0.007874016 + auVar50._12_4_;
        fVar61 = auVar40._0_4_ * 0.007874016 + auVar50._0_4_;
        fVar55 = auVar40._4_4_ * 0.007874016 + auVar50._4_4_;
        fVar57 = auVar40._8_4_ * 0.007874016 + auVar50._8_4_;
        fVar59 = auVar40._12_4_ * 0.007874016 + auVar50._12_4_;
        puVar6 = (uint *)(local_2a0 + lVar31 * 2);
        puVar6[2] = puVar5[2] ^ (puVar5[2] ^ 0x3c010204) & -(uint)(fVar65 + fVar56 <= 0.0);
        puVar6[3] = uVar21 ^ (uVar24 ^ 0x3c010204) & -(uint)(fVar66 + fVar58 <= 0.0);
        *puVar6 = uVar60 ^ (uVar22 ^ 0x3c010204) & -(uint)(fVar62 + fVar53 <= 0.0);
        puVar6[1] = uVar20 ^ (uVar23 ^ 0x3c010204) & -(uint)(fVar64 + fVar54 <= 0.0);
        lVar31 = lVar31 + 1;
      } while (lVar31 != 0x20);
      puVar33 = puVar33 + 2;
    } while (puVar33 != puVar2);
    bVar37 = 1;
  }
  lVar31 = *(long *)(lVar34 + 0x1000b8);
  if (lVar31 == 0) {
    lVar31 = FUN_00e5d3b4();
    *(long *)(lVar34 + 0x1000b8) = lVar31;
  }
  plVar32 = *(long **)(lVar31 + 0x3e0);
  if (plVar32 != (long *)0x0) {
    lVar31 = *plVar32;
    if (((*(byte *)(lVar31 + 0x38) & 1) != 0) && (plVar32[6] != 0)) {
      puVar33 = (undefined8 *)plVar32[2];
      uVar30 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
      if ((uVar30 <= (ulong)plVar32[3]) && (plVar32[2] = uVar30, puVar33 != (undefined8 *)0x0)) {
        *puVar33 = &DAT_03c4e575;
        puVar33[1] = *(undefined8 *)(plVar32[6] + 8);
      }
    }
    puVar33 = (undefined8 *)plVar32[2];
    uVar30 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
    if ((uVar30 <= (ulong)plVar32[3]) && (plVar32[2] = uVar30, puVar33 != (undefined8 *)0x0)) {
      *puVar33 = "StscoreAgentObstacles";
      uVar28 = nn::os::GetSystemTick();
      puVar33[1] = uVar28;
    }
    if (*(code **)(lVar31 + 0x20) != (code *)0x0) {
      (**(code **)(lVar31 + 0x20))(*(undefined8 *)(lVar31 + 0x28));
    }
    if (*(code **)(lVar31 + 0x18) != (code *)0x0) {
      (**(code **)(lVar31 + 0x18))("scoreAgentObstacles",0x13,*(undefined8 *)(lVar31 + 0x28));
    }
  }
  local_540 = CONCAT44(*(undefined4 *)(lVar29 + 200),*(undefined4 *)(lVar29 + 200));
  lVar31 = *(long *)param_1[2];
  uVar60 = *(uint *)(lVar31 + 0x28);
  if (0 < (int)uVar60) {
    lVar35 = 0;
    while( true ) {
      bVar27 = FUN_0318aef0(lVar29,*(undefined8 *)(*(long *)(lVar31 + 0x20) + lVar35),&local_80,
                            local_520,&local_540,&local_528,&local_2a0,&local_4b0,&local_4c0);
      bVar37 = bVar37 | bVar27;
      if ((ulong)uVar60 * 0x10 + -0x10 == lVar35) break;
      lVar31 = *(long *)param_1[2];
      lVar35 = lVar35 + 0x10;
    }
  }
  lVar31 = *(long *)(lVar34 + 0x1000b8);
  if (lVar31 == 0) {
    lVar31 = FUN_00e5d3b4();
    *(long *)(lVar34 + 0x1000b8) = lVar31;
  }
  plVar32 = *(long **)(lVar31 + 0x3e0);
  if (plVar32 != (long *)0x0) {
    lVar31 = *plVar32;
    if (((*(byte *)(lVar31 + 0x38) & 1) != 0) && (plVar32[6] != 0)) {
      puVar33 = (undefined8 *)plVar32[2];
      uVar30 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
      if ((uVar30 <= (ulong)plVar32[3]) && (plVar32[2] = uVar30, puVar33 != (undefined8 *)0x0)) {
        *puVar33 = &DAT_03c4e575;
        puVar33[1] = *(undefined8 *)(plVar32[6] + 8);
      }
    }
    puVar33 = (undefined8 *)plVar32[2];
    uVar30 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
    if ((uVar30 <= (ulong)plVar32[3]) && (plVar32[2] = uVar30, puVar33 != (undefined8 *)0x0)) {
      *puVar33 = "StapplyModifiers";
      uVar28 = nn::os::GetSystemTick();
      puVar33[1] = uVar28;
    }
    if (*(code **)(lVar31 + 0x20) != (code *)0x0) {
      (**(code **)(lVar31 + 0x20))(*(undefined8 *)(lVar31 + 0x28));
    }
    if (*(code **)(lVar31 + 0x18) != (code *)0x0) {
      (**(code **)(lVar31 + 0x18))("applyModifiers",0xe,*(undefined8 *)(lVar31 + 0x28));
    }
  }
  puVar26 = PTR_PTR_047d1a50;
  if (*(int *)(lVar29 + 0xf0) != 0) {
    local_540 = 0;
    uStack_538 = -0x8000000000000000;
    puVar1 = PTR_PTR_047d1a50 + 0x20;
    FUN_02e8df28(&local_540,puVar1,0x80);
    if ((int)uStack_538 != 0x80) {
      uStack_538 = CONCAT44(uStack_538._4_4_,0x80);
    }
    FUN_0318aacc(local_520,local_540,local_540 + 0x800);
    local_550 = 0;
    local_548 = -0x8000000000000000;
    FUN_00cb59d4(&local_550,puVar1,0x80);
    if ((int)local_548 != 0x80) {
      local_548 = CONCAT44(local_548._4_4_,0x80);
    }
    if (*(int *)(lVar29 + 0xf0) != 0) {
      plVar32 = *(long **)(lVar29 + 0xe8);
      plVar3 = plVar32 + *(int *)(lVar29 + 0xf0);
      do {
        lVar35 = *plVar32;
        lVar31 = 0x1c;
        do {
          *(undefined4 *)(local_550 + lVar31 + -0x1c) = 0;
          *(undefined4 *)(local_550 + lVar31 + -0x18) = 0;
          *(undefined4 *)(local_550 + lVar31 + -0x14) = 0;
          *(undefined4 *)(local_550 + lVar31 + -0x10) = 0;
          *(undefined4 *)(local_550 + lVar31 + -0xc) = 0;
          *(undefined4 *)(local_550 + lVar31 + -8) = 0;
          *(undefined4 *)(local_550 + lVar31 + -4) = 0;
          *(undefined4 *)(local_550 + lVar31) = 0;
          lVar31 = lVar31 + 0x20;
        } while (lVar31 != 0x21c);
        plVar4 = (long *)0x0;
        if (lVar35 != 0) {
          plVar4 = (long *)(lVar35 + 0x18);
        }
        (**(code **)(*plVar4 + 0x18))
                  (plVar4,lVar29,bVar37 & 1,*(undefined8 *)param_1[2],local_540,
                   local_540 + (long)(int)uStack_538 * 0x10,local_550,
                   local_550 + (long)(int)local_548 * 4);
        lVar31 = 0xc;
        do {
          *(float *)((long)local_4b0 + lVar31 + -0xc) =
               *(float *)(local_550 + lVar31 + -0xc) + *(float *)((long)local_4b0 + lVar31 + -0xc);
          *(float *)((long)local_4b0 + lVar31 + -8) =
               *(float *)(local_550 + lVar31 + -8) + *(float *)((long)local_4b0 + lVar31 + -8);
          *(float *)((long)local_4b0 + lVar31 + -4) =
               *(float *)(local_550 + lVar31 + -4) + *(float *)((long)local_4b0 + lVar31 + -4);
          *(float *)((long)local_4b0 + lVar31) =
               *(float *)(local_550 + lVar31) + *(float *)((long)local_4b0 + lVar31);
          lVar31 = lVar31 + 0x10;
        } while (lVar31 != 0x20c);
        plVar32 = plVar32 + 1;
      } while (plVar32 != plVar3);
    }
    lVar31 = local_548;
    uVar30 = (ulong)local_548._4_4_;
    local_548 = (ulong)local_548._4_4_ << 0x20;
    if ((-1 < lVar31) && (local_550 != 0)) {
      plVar32 = (long *)(puVar26 + 0x20);
      (**(code **)(*plVar32 + 0x20))(plVar32,local_550,uVar30 << 2);
    }
    lVar31 = uStack_538;
    uVar30 = (ulong)uStack_538._4_4_;
    uStack_538 = (ulong)uStack_538._4_4_ << 0x20;
    if ((-1 < lVar31) && (local_540 != 0)) {
      plVar32 = (long *)(puVar26 + 0x20);
      (**(code **)(*plVar32 + 0x20))(plVar32,local_540,uVar30 << 4);
    }
  }
  lVar31 = *(long *)(lVar34 + 0x1000b8);
  if (lVar31 == 0) {
    lVar31 = FUN_00e5d3b4();
    *(long *)(lVar34 + 0x1000b8) = lVar31;
  }
  plVar32 = *(long **)(lVar31 + 0x3e0);
  if (plVar32 != (long *)0x0) {
    lVar34 = *plVar32;
    if (((*(byte *)(lVar34 + 0x38) & 1) != 0) && (plVar32[6] != 0)) {
      puVar33 = (undefined8 *)plVar32[2];
      uVar30 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
      if ((uVar30 <= (ulong)plVar32[3]) && (plVar32[2] = uVar30, puVar33 != (undefined8 *)0x0)) {
        *puVar33 = &DAT_03c4e575;
        puVar33[1] = *(undefined8 *)(plVar32[6] + 8);
      }
    }
    puVar33 = (undefined8 *)plVar32[2];
    uVar30 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
    if ((uVar30 <= (ulong)plVar32[3]) && (plVar32[2] = uVar30, puVar33 != (undefined8 *)0x0)) {
      *puVar33 = "StchooseBestCandidate";
      uVar28 = nn::os::GetSystemTick();
      puVar33[1] = uVar28;
    }
    if (*(code **)(lVar34 + 0x20) != (code *)0x0) {
      (**(code **)(lVar34 + 0x20))(*(undefined8 *)(lVar34 + 0x28));
    }
    if (*(code **)(lVar34 + 0x18) != (code *)0x0) {
      (**(code **)(lVar34 + 0x18))("chooseBestCandidate",0x13,*(undefined8 *)(lVar34 + 0x28));
    }
  }
  uVar28 = NEON_fmov(0x40800000,4);
  fVar41 = *(float *)(lVar29 + 0xa0) * (float)uVar28;
  local_550 = CONCAT44(fVar41,fVar41);
  local_558 = 0;
  uStack_560 = CONCAT44(*(undefined4 *)(lVar29 + 0xbc),*(undefined4 *)(lVar29 + 0xbc));
  local_568 = CONCAT44(*(undefined4 *)(lVar29 + 0xcc),*(undefined4 *)(lVar29 + 0xcc));
  local_570 = CONCAT44(*(undefined4 *)(lVar29 + 0xc0),*(undefined4 *)(lVar29 + 0xc0));
  FUN_0318c030(local_520,&local_2a0,&local_4b0,&local_4c0,&local_558,&uStack_560,&local_568,
               &local_88,&local_550,&local_570,lVar29 + 0x70,&local_540);
  *(byte *)(param_2 + 2) = bVar37 & 1;
  param_2[1] = uStack_538;
  *param_2 = local_540;
  if (alStack_4a8[0] < 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_4b0,0);
  }
  if (local_298 < 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_2a0,0);
  }
  if (plVar36 != (long *)0x0) {
    lVar34 = *plVar36;
    if (((*(byte *)(lVar34 + 0x38) & 1) != 0) && (plVar36[6] != 0)) {
      puVar33 = (undefined8 *)plVar36[2];
      uVar30 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
      if ((uVar30 <= (ulong)plVar36[3]) && (plVar36[2] = uVar30, puVar33 != (undefined8 *)0x0)) {
        *puVar33 = &DAT_03c4e575;
        puVar33[1] = *(undefined8 *)(plVar36[6] + 8);
      }
    }
    puVar33 = (undefined8 *)plVar36[2];
    uVar30 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
    if ((uVar30 <= (ulong)plVar36[3]) && (plVar36[2] = uVar30, puVar33 != (undefined8 *)0x0)) {
      *puVar33 = &DAT_03c3697b;
      uVar28 = nn::os::GetSystemTick();
      puVar33[1] = uVar28;
    }
    if (*(code **)(lVar34 + 0x20) != (code *)0x0) {
      (**(code **)(lVar34 + 0x20))(*(undefined8 *)(lVar34 + 0x28));
      if (*(code **)(lVar34 + 0x20) != (code *)0x0) {
        (**(code **)(lVar34 + 0x20))(*(undefined8 *)(lVar34 + 0x28));
      }
    }
  }
  return;
}


