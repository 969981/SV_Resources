/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03431d2c; name: FUN_03431d2c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03431d2c(long *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined8 param_4,long *param_5,uint param_6,undefined8 param_7,undefined8 param_8
                 )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  void *__dest;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  long lVar15;
  float *pfVar16;
  uint *puVar17;
  undefined1 auVar18 [16];
  undefined8 uVar20;
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined **local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  ulong local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined8 local_2a0;
  ulong uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  int local_27c;
  byte local_278;
  undefined4 local_274;
  long local_270;
  undefined8 local_230;
  undefined8 local_220;
  ulong uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  void *local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined1 auStack_1e0 [192];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  int local_fc;
  byte local_f8;
  undefined4 local_f4;
  long local_f0;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  memset(auStack_1e0,0,0xc0);
  local_fc = 0;
  local_f8 = 0;
  uStack_118 = SUB168(*param_2,8);
  local_120 = SUB168(*param_2,0);
  uStack_108 = SUB168(*param_3,8);
  uStack_110 = SUB168(*param_3,0);
  local_f4 = 0x3f800000;
  local_f0 = 0;
  lVar12 = *param_1;
  if (((DAT_048af7d0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_048af7d0), iVar4 != 0)) {
    auVar18 = NEON_fmov(0x3f800000,4);
    uRam00000000048af7c8 = auVar18._8_8_;
    _DAT_048af7c0 = auVar18._0_8_;
    __cxa_guard_release(&DAT_048af7d0);
  }
  auVar18 = *param_3;
  auVar21 = NEON_frecpe(auVar18,4);
  uStack_358 = *(undefined8 *)(*param_2 + 8);
  local_360 = *(undefined ***)*param_2;
  auVar22 = NEON_frecps(auVar18,auVar21,4);
  local_230 = (undefined **)((ulong)local_230._4_4_ << 0x20);
  local_a0 = CONCAT44(local_a0._4_4_,0x7f7fffff);
  uStack_348 = auVar18._8_8_;
  uStack_350 = auVar18._0_8_;
  auVar18._0_8_ =
       CONCAT44(auVar21._4_4_ * (float)((ulong)_DAT_048af7c0 >> 0x20) * auVar22._4_4_,
                auVar21._0_4_ * (float)_DAT_048af7c0 * auVar22._0_4_);
  auVar18._8_4_ = auVar21._8_4_ * (float)uRam00000000048af7c8 * auVar22._8_4_;
  auVar18._12_4_ = auVar21._12_4_ * (float)((ulong)uRam00000000048af7c8 >> 0x20) * auVar22._12_4_;
  uStack_338 = auVar18._8_8_;
  local_340 = auVar18._0_8_;
  FUN_034371cc(*(undefined8 *)(lVar12 + 8),&local_360,&local_230,auStack_1e0,&local_a0);
  if (local_fc != 0) {
    if (local_f8 == 0) {
      local_f8 = FUN_034375e4(auStack_1e0);
    }
    else {
      local_f8 = 1;
    }
    local_f8 = local_f8 & 1;
    local_fc = 0;
  }
  if (local_f8 == 0) {
    return;
  }
  pfVar16 = *(float **)(local_f0 + 0x38);
  fVar25 = *pfVar16;
  fVar24 = pfVar16[1];
  fVar23 = pfVar16[2];
  fVar26 = fVar25 * *(float *)*param_3 + *(float *)(*param_3 + 4) * fVar24 +
           *(float *)(*param_3 + 8) * fVar23;
  fVar26 = fVar26 + fVar26;
  fVar28 = *(float *)*param_3 - fVar25 * fVar26;
  fVar27 = *(float *)(*param_3 + 4) - fVar24 * fVar26;
  fVar26 = *(float *)(*param_3 + 8) - fVar23 * fVar26;
  if (fVar28 * fVar25 + fVar24 * fVar27 + fVar23 * fVar26 <= 0.0) {
    fVar25 = local_c0 - fVar25 * 0.001;
    fVar24 = fStack_bc - fVar24 * 0.001;
    fVar23 = fStack_b8 - fVar23 * 0.001;
  }
  else {
    fVar25 = local_c0 + fVar25 * 0.001;
    fVar24 = fStack_bc + fVar24 * 0.001;
    fVar23 = fStack_b8 + fVar23 * 0.001;
  }
  uVar13 = *(uint *)(param_5 + 1);
  uVar2 = *(uint *)((long)param_5 + 0xc);
  if (uVar2 <= uVar13) {
    uVar5 = FUN_034361ec(param_5);
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar2 = *(uint *)((long)param_5 + 0xc);
  }
  if (uVar2 <= uVar13) {
    return;
  }
  uVar5 = (ulong)*(uint *)(param_5 + 1);
  lVar12 = *param_5;
  *(uint *)(param_5 + 1) = *(uint *)(param_5 + 1) + 1;
  if (lVar12 == 0) {
    return;
  }
  auVar18 = NEON_fmov(0x3f800000,4);
  *(undefined ***)(lVar12 + uVar5 * 0x50) = &PTR_FUN_047bf6c0;
  lVar15 = lVar12 + uVar5 * 0x50;
  uVar7 = CONCAT44(fVar27,fVar28);
  auVar21._0_8_ = (undefined **)CONCAT44(fVar24,fVar25);
  auVar21._12_4_ = auVar18._12_4_;
  auVar21._8_4_ = fVar23;
  *(undefined8 *)(lVar15 + 0x30) = 0;
  uVar20 = auVar21._8_8_;
  *(undefined4 *)(lVar15 + 0x48) = 0;
  plVar14 = (long *)(lVar15 + 0x38);
  *plVar14 = 0;
  puVar17 = (uint *)(lVar15 + 0x40);
  puVar17[0] = 0;
  puVar17[1] = 0;
  FUN_03436090();
  *(ulong *)(lVar15 + 0x28) = (ulong)(uint)fVar26;
  *(undefined8 *)*(undefined1 (*) [16])(lVar15 + 0x20) = uVar7;
  *(undefined8 *)(lVar15 + 0x18) = uVar20;
  *(undefined8 *)(lVar15 + 0x10) = auVar21._0_8_;
  uVar2 = *puVar17;
  uVar13 = *(uint *)(lVar15 + 0x44);
  if (uVar2 < uVar13) {
LAB_03431fdc:
    if (uVar2 < uVar13) {
      uVar13 = *puVar17;
      *puVar17 = uVar13 + 1;
      if (*plVar14 != 0) {
        puVar10 = (undefined8 *)(*plVar14 + (ulong)uVar13 * 0x20);
        puVar10[2] = pfVar16;
        puVar10[3] = 0;
        puVar10[1] = uVar20;
        *puVar10 = auVar21._0_8_;
      }
    }
  }
  else {
    uVar13 = uVar13 + 1;
    lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x28))(0xb,*plVar14,(ulong)uVar13 << 5,0x10);
    if (lVar6 != 0) {
      *plVar14 = lVar6;
      *(uint *)(lVar15 + 0x44) = uVar13;
      goto LAB_03431fdc;
    }
  }
  local_230 = &PTR_FUN_047bf6c0;
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
  local_200 = *(undefined8 *)(lVar15 + 0x30);
  local_220 = *(undefined8 *)(lVar15 + 0x10);
  uStack_218 = *(ulong *)(lVar15 + 0x18);
  auVar22 = *(undefined1 (*) [16])(lVar15 + 0x20);
  uStack_208 = auVar22._8_8_;
  local_210 = auVar22._0_8_;
  local_1e8 = *(undefined4 *)(lVar12 + uVar5 * 0x50 + 0x48);
  uVar2 = *puVar17;
  uVar13 = uVar2 + 1;
  if (uVar2 == 0xffffffff) {
    __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x28))(0xb,0,0x1fffffffe0,0x10);
    if (__dest != (void *)0x0) {
      uVar13 = 0xffffffff;
      uVar11 = 0xffffffff;
      local_1f8 = __dest;
LAB_034320f0:
      uVar8 = uVar11 & 3;
      if (uVar11 - 1 < 3) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        puVar10 = (undefined8 *)((long)local_1f8 + 0x50);
        do {
          uVar9 = uVar9 + 4;
          puVar10[-8] = 0;
          puVar10[-7] = 0;
          puVar10[-4] = 0;
          puVar10[-3] = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[4] = 0;
          puVar10[5] = 0;
          puVar10 = puVar10 + 0x10;
        } while ((uVar11 & 0xfffffffc) != uVar9);
      }
      local_1f0._4_4_ = uVar13;
      if (uVar8 != 0) {
        puVar10 = (undefined8 *)((long)local_1f8 + uVar9 * 0x20 + 0x10);
        do {
          uVar8 = uVar8 - 1;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10 = puVar10 + 4;
        } while (uVar8 != 0);
      }
      goto LAB_0343214c;
    }
  }
  else {
    __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(0xb,(ulong)uVar13 << 5,0x10);
    local_1f8 = __dest;
    if (__dest == (void *)0x0) goto LAB_03432178;
    local_1f0._4_4_ = uVar13;
    if (uVar2 != 0) {
      uVar11 = (ulong)uVar2;
      goto LAB_034320f0;
    }
LAB_0343214c:
    local_1f0 = CONCAT44(local_1f0._4_4_,uVar2);
    __dest = local_1f8;
  }
  memcpy(__dest,*(void **)(lVar12 + uVar5 * 0x50 + 0x38),(ulong)uVar2 << 5);
LAB_03432178:
  if (param_6 < *(uint *)(param_1 + 2)) {
    uStack_98 = (ulong)(uint)fVar26;
    local_360 = auVar21._0_8_;
    uStack_358 = uVar20;
    local_a0 = uVar7;
    FUN_03431d2c(param_1,&local_360,&local_a0,param_4,param_5,param_6 + 1,&local_230,param_8);
  }
  if (param_6 <= *(uint *)((long)param_1 + 0x14)) {
    uVar2 = FUN_03435054(&local_230);
    local_330 = (ulong)uVar2;
    local_320 = 0;
    local_360 = &PTR_FUN_047bf6c0;
    uStack_328 = 0;
    local_318 = 0;
    uVar3 = FUN_03435054(&local_360);
    uVar13 = *(uint *)(param_5 + 4);
    if (uVar13 != 0) {
      uVar1 = 0;
      if (uVar13 != 0) {
        uVar1 = uVar3 / uVar13;
      }
      for (plVar14 = *(long **)(param_5[3] + (ulong)(uVar3 - uVar1 * uVar13) * 8);
          plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        if (*(uint *)(plVar14 + 1) == uVar3) goto LAB_0343225c;
      }
    }
    uVar5 = FUN_034350f4(param_1,param_2,param_3,pfVar16,param_4,param_5,param_6,param_7,param_8);
    if ((uVar5 & 1) != 0) {
      FUN_03435348(param_5,uVar2);
    }
  }
LAB_0343225c:
  if (param_6 <= *(uint *)((long)param_1 + 0x14)) {
    memset(&local_360,0,0xc0);
    local_27c = 0;
    local_278 = 0;
    local_274 = 0x3f800000;
    uStack_298 = uStack_218;
    local_2a0 = local_220;
    uStack_288 = uStack_208;
    uStack_290 = local_210;
    local_270 = 0;
    lVar12 = *param_1;
    if (((DAT_048af7d0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_048af7d0), iVar4 != 0)) {
      _DAT_048af7c0 = auVar18._0_8_;
      uRam00000000048af7c8 = auVar18._8_8_;
      __cxa_guard_release(&DAT_048af7d0);
    }
    auVar22._8_8_ = uStack_208;
    auVar22._0_8_ = local_210;
    uStack_98 = uStack_218;
    local_a0 = local_220;
    uStack_88 = uStack_208;
    uStack_90 = local_210;
    auVar18 = NEON_frecpe(auVar22,4);
    auVar21 = NEON_frecps(auVar22,auVar18,4);
    local_a8 = 0x7f7fffff;
    uStack_a4 = 0;
    auVar19._0_8_ =
         CONCAT44(auVar18._4_4_ * (float)((ulong)_DAT_048af7c0 >> 0x20) * auVar21._4_4_,
                  auVar18._0_4_ * (float)_DAT_048af7c0 * auVar21._0_4_);
    auVar19._8_4_ = auVar18._8_4_ * (float)uRam00000000048af7c8 * auVar21._8_4_;
    auVar19._12_4_ = auVar18._12_4_ * (float)((ulong)uRam00000000048af7c8 >> 0x20) * auVar21._12_4_;
    uStack_78 = auVar19._8_8_;
    local_80 = auVar19._0_8_;
    FUN_034371cc(*(undefined8 *)(lVar12 + 8),&local_a0,&uStack_a4,&local_360,&local_a8);
    if (local_27c != 0) {
      if (local_278 == 0) {
        local_278 = FUN_034375e4(&local_360);
      }
      else {
        local_278 = 1;
      }
      local_278 = local_278 & 1;
      local_27c = 0;
    }
    if (local_278 != 0) {
      if (local_270 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(local_270 + 0x38);
      }
      FUN_034350f4(param_1,&local_220,&local_210,uVar7,param_4,param_5,param_6 + 1,&local_230,
                   param_8);
    }
    __dest = local_1f8;
  }
  local_230 = &PTR_FUN_047bf6c0;
  if (__dest != (void *)0x0) {
    local_1f0 = local_1f0 & 0xffffffff00000000;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0xb,__dest);
  }
  return;
}


