/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031174cc; name: FUN_031174cc
 */


void FUN_031174cc(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined4 *puVar19;
  long *plVar20;
  uint *puVar21;
  int *piVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  undefined8 *puVar28;
  float fVar29;
  float fVar30;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar37 [16];
  undefined8 local_2e0;
  float fStack_2d8;
  float fStack_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  long local_280;
  undefined8 local_278;
  long local_270;
  long local_268;
  long local_260;
  long *local_258;
  undefined8 local_250;
  long local_248;
  long *local_240;
  long local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  long local_218;
  undefined8 local_210;
  long local_208;
  long local_200;
  long local_1f8;
  undefined1 local_1f0 [152];
  int local_158;
  undefined4 local_118;
  int local_110;
  undefined4 local_100;
  int local_f8;
  undefined4 local_e8;
  undefined4 local_d8;
  undefined4 local_c8;
  undefined4 local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  uint local_9c;
  long local_98;
  undefined8 local_90;
  int local_78 [2];
  long *local_70;
  
  lVar23 = tpidr_el0;
  lVar12 = *(long *)(lVar23 + 0x1000b8);
  if (lVar12 == 0) {
    lVar12 = FUN_00e5d3b4();
    *(long *)(lVar23 + 0x1000b8) = lVar12;
  }
  plVar26 = *(long **)(lVar12 + 0x3e0);
  if (plVar26 != (long *)0x0) {
    lVar12 = *plVar26;
    if (*(code **)(lVar12 + 0x18) != (code *)0x0) {
      (**(code **)(lVar12 + 0x18))("CutFace",7,*(undefined8 *)(lVar12 + 0x28));
    }
    puVar15 = (undefined8 *)plVar26[2];
    uVar13 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
    if ((uVar13 <= (ulong)plVar26[3]) && (plVar26[2] = uVar13, puVar15 != (undefined8 *)0x0)) {
      *puVar15 = "TtCutFace";
      uVar9 = nn::os::GetSystemTick();
      puVar15[1] = uVar9;
    }
    if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar26[6] != 0)) {
      puVar15 = (undefined8 *)plVar26[2];
      uVar13 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
      if ((uVar13 <= (ulong)plVar26[3]) && (plVar26[2] = uVar13, puVar15 != (undefined8 *)0x0)) {
        *puVar15 = &DAT_03c4e575;
        puVar15[1] = *(undefined8 *)(plVar26[6] + 8);
      }
    }
    lVar12 = *(long *)(lVar23 + 0x1000b8);
  }
  iVar11 = *(int *)PTR_DAT_047e4f38;
  local_70 = plVar26;
  if (lVar12 == 0) {
    lVar12 = FUN_00e5d3b4();
    *(long *)(lVar23 + 0x1000b8) = lVar12;
  }
  if (*(long *)(lVar12 + (long)iVar11 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  lVar18 = *(long *)(param_1 + 0x918);
  lVar12 = (long)param_3;
  puVar21 = (uint *)(lVar18 + (long)param_3 * 0x30 + 0x10);
  uVar13 = (ulong)*puVar21 & 0x3fffff;
  iVar11 = (int)uVar13;
  if (0 < *(int *)(*(long *)PTR_DAT_047e4f50 + 0x18)) {
    plVar20 = (long *)(lVar18 + lVar12 * 0x30 + 8);
    FUN_03056218(&local_218,*(undefined4 *)(*(long *)PTR_DAT_047e4f50 + 0x20),
                 *(undefined4 *)(*(long *)(*plVar20 + 0x20) + 0x180),0);
    puVar6 = PTR_DAT_047e48d8;
    if ((plVar26 != (long *)0x0) &&
       (puVar15 = (undefined8 *)plVar26[2], puVar15 != (undefined8 *)0x0)) {
      puVar19 = (undefined4 *)((long)puVar15 + 0x13U & 0xfffffffffffffffc);
      uVar14 = (long)puVar19 + 0xbU & 0xfffffffffffffff8;
      if (uVar14 <= (ulong)plVar26[3]) {
        plVar26[2] = uVar14;
        *puVar15 = &DAT_03c1a9df;
        puVar15[1] = puVar6;
        if (puVar19 != (undefined4 *)0x0) {
          *puVar19 = (undefined4)local_218;
        }
      }
    }
    local_78[0] = iVar11;
    FUN_03096684(*plVar20,local_78,local_1f0);
    lVar24 = *(long *)(lVar23 + 0x1000b8);
    if (lVar24 == 0) {
      lVar24 = FUN_00e5d3b4();
      *(long *)(lVar23 + 0x1000b8) = lVar24;
    }
    puVar6 = PTR_DAT_047e4f58;
    lVar24 = *(long *)(lVar24 + 0x3e0);
    if ((lVar24 != 0) && (puVar15 = *(undefined8 **)(lVar24 + 0x10), puVar15 != (undefined8 *)0x0))
    {
      puVar28 = (undefined8 *)((long)puVar15 + 0x13U & 0xfffffffffffffffc);
      uVar14 = (long)puVar28 + 0x13U & 0xfffffffffffffff8;
      if (uVar14 <= *(ulong *)(lVar24 + 0x18)) {
        *(ulong *)(lVar24 + 0x10) = uVar14;
        *puVar15 = &DAT_03c1a9df;
        puVar15[1] = puVar6;
        if (puVar28 != (undefined8 *)0x0) {
          *puVar28 = local_1f0._0_8_;
          *(int *)(puVar28 + 1) = local_1f0._8_4_;
        }
      }
    }
  }
  if (plVar26 != (long *)0x0) {
    lVar24 = *plVar26;
    if (*(code **)(lVar24 + 0x18) != (code *)0x0) {
      (**(code **)(lVar24 + 0x18))("init",4,*(undefined8 *)(lVar24 + 0x28));
    }
    puVar15 = (undefined8 *)plVar26[2];
    uVar14 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar26[3]) && (plVar26[2] = uVar14, puVar15 != (undefined8 *)0x0)) {
      *puVar15 = "Ttinit";
      uVar9 = nn::os::GetSystemTick();
      puVar15[1] = uVar9;
    }
    if (((*(byte *)(lVar24 + 0x38) & 1) != 0) && (plVar26[6] != 0)) {
      puVar15 = (undefined8 *)plVar26[2];
      uVar14 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar26[3]) && (plVar26[2] = uVar14, puVar15 != (undefined8 *)0x0)) {
        *puVar15 = &DAT_03c4e575;
        puVar15[1] = *(undefined8 *)(plVar26[6] + 8);
      }
    }
  }
  FUN_03168c70(local_1f0);
  local_b0 = 0xffffffff;
  local_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  local_9c = 0x80000000;
  local_90 = -0x8000000000000000;
  local_98 = 0;
  plVar20 = (long *)(lVar18 + lVar12 * 0x30 + 8);
  lVar25 = *plVar20;
  lVar24 = *(long *)(lVar25 + 0x20);
  iVar8 = iVar11 - *(int *)(lVar24 + 0x20);
  if (iVar11 < *(int *)(lVar24 + 0x20)) {
    iVar8 = iVar11;
    if ((*(int *)(lVar24 + 0x98) == 0) ||
       (iVar8 = *(int *)(*(long *)(lVar24 + 0x90) + uVar13 * 4), iVar8 != -1)) {
      lVar24 = *(long *)(lVar24 + 0xb0);
      goto LAB_03117734;
    }
    lVar24 = *(long *)(lVar24 + 0x18) + uVar13 * 0x10;
  }
  else {
    lVar24 = *(long *)(lVar24 + 0xd0);
LAB_03117734:
    lVar24 = lVar24 + (long)iVar8 * 0x10;
  }
  sVar4 = *(short *)(lVar24 + 8);
  iVar8 = *(int *)PTR_DAT_047e4f38;
  lVar24 = *(long *)(lVar23 + 0x1000b8);
  if (lVar24 == 0) {
    lVar24 = FUN_00e5d3b4();
    *(long *)(lVar23 + 0x1000b8) = lVar24;
  }
  if (*(long *)(lVar24 + (long)iVar8 * 8 + 1000) != 0) {
    FUN_03231bdc();
    lVar24 = *(long *)(lVar23 + 0x1000b8);
  }
  local_218 = 0;
  local_210 = 0x8000000000000000;
  if (lVar24 == 0) {
    lVar24 = FUN_00e5d3b4();
    *(long *)(lVar23 + 0x1000b8) = lVar24;
  }
  lVar27 = (long)sVar4 + 1;
  local_208 = *(long *)(*(long *)(lVar24 + 0x3d0) + 0x10);
  if (*(long *)(local_208 + 8) != 0) {
    local_208 = 0;
  }
  local_280 = lVar27 * 0x10;
  local_1f8 = local_280;
  if (local_208 == 0) {
    local_200 = (**(code **)PTR_DAT_047d1a08)(1,&local_280,0x40);
  }
  else {
    local_258 = (long *)(local_280 + 0x3fU & 0xffffffffffffffc0);
    if (local_258 <= *(long **)(local_208 + 0x28)) {
      local_200 = *(long *)(local_208 + 0x38);
      if ((ulong)((long)local_258 + local_200) <= *(ulong *)(local_208 + 0x40)) {
        *(long *)(local_208 + 0x38) = (long)local_258 + local_200;
        goto LAB_0311780c;
      }
    }
    local_200 = FUN_031cf3b4(local_208,&local_258);
  }
LAB_0311780c:
  iVar8 = *(int *)PTR_DAT_047e4f38;
  local_210 = CONCAT44((int)lVar27,(int)local_210) | 0x8000000000000000;
  lVar24 = *(long *)(lVar23 + 0x1000b8);
  local_218 = local_200;
  if (lVar24 == 0) {
    lVar24 = FUN_00e5d3b4();
    *(long *)(lVar23 + 0x1000b8) = lVar24;
  }
  if (*(long *)(lVar24 + (long)iVar8 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  uStack_228 = *(undefined8 *)(param_1 + 0x948);
  local_230 = *(undefined8 *)(param_1 + 0x940);
  lVar24 = lVar18 + lVar12 * 0x30;
  uVar2 = *(uint *)(lVar24 + 0x18);
  plVar1 = (long *)(*(long *)(param_1 + 0x928) + (long)*(int *)(lVar24 + 0x14) * 8);
  if (uVar2 == 0) {
    local_b0 = *puVar21;
    local_e8 = 0;
    local_118 = 0;
    local_100 = 0;
    local_d8 = 0;
    local_c8 = 0;
    local_b8 = 0;
    if (local_158 != 1) {
      local_158 = 1;
    }
    local_110 = 0;
    local_f8 = 0;
    local_a0 = 0;
  }
  else {
    iVar8 = 0;
    lVar24 = (long)(int)uVar2 << 3;
    plVar10 = plVar1;
    do {
      iVar7 = (**(code **)(**(long **)(*plVar10 + 0x20) + 0x20))();
      iVar8 = iVar7 + iVar8;
      lVar24 = lVar24 + -8;
      plVar10 = plVar10 + 1;
    } while (lVar24 != 0);
    uVar3 = *puVar21;
    local_e8 = 0;
    local_118 = 0;
    local_100 = 0;
    local_d8 = 0;
    local_c8 = 0;
    local_b8 = 0;
    if (local_158 != 1) {
      local_158 = 1;
    }
    local_a0 = 0;
    local_110 = iVar8;
    local_f8 = iVar8;
    if ((int)(local_9c & 0x7fffffff) < iVar8) {
      FUN_030ff230(&uStack_a8,PTR_PTR_047d1a50,(long)iVar8);
    }
    local_b0 = uVar3;
    FUN_031637ac(local_1f0,*(undefined8 *)(lVar25 + 0x20),&local_230,
                 *(char *)(lVar18 + lVar12 * 0x30 + 0x24) != '\0',*puVar21,&local_218);
  }
  if (plVar26 != (long *)0x0) {
    lVar24 = *plVar26;
    if (((*(byte *)(lVar24 + 0x38) & 1) != 0) && (plVar26[6] != 0)) {
      puVar15 = (undefined8 *)plVar26[2];
      uVar14 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar26[3]) && (plVar26[2] = uVar14, puVar15 != (undefined8 *)0x0)) {
        *puVar15 = &DAT_03c4e575;
        puVar15[1] = *(undefined8 *)(plVar26[6] + 8);
      }
    }
    puVar15 = (undefined8 *)plVar26[2];
    uVar14 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar26[3]) && (plVar26[2] = uVar14, puVar15 != (undefined8 *)0x0)) {
      *puVar15 = &DAT_03c2d363;
      uVar9 = nn::os::GetSystemTick();
      puVar15[1] = uVar9;
    }
    if (*(code **)(lVar24 + 0x20) != (code *)0x0) {
      (**(code **)(lVar24 + 0x20))(*(undefined8 *)(lVar24 + 0x28));
    }
  }
  piVar22 = (int *)PTR_DAT_047e4f38;
  if (0 < (int)uVar2) {
    uVar14 = 0;
    fVar33 = *(float *)(lVar18 + lVar12 * 0x30 + 0x1c);
    fVar29 = -fVar33;
    fVar33 = -fVar33;
    do {
      iVar8 = *piVar22;
      lVar24 = *(long *)(lVar23 + 0x1000b8);
      if (lVar24 == 0) {
        lVar24 = FUN_00e5d3b4();
        *(long *)(lVar23 + 0x1000b8) = lVar24;
      }
      if (*(long *)(lVar24 + (long)iVar8 * 8 + 1000) != 0) {
        FUN_03231bdc();
        lVar24 = *(long *)(lVar23 + 0x1000b8);
      }
      local_258 = (long *)0x0;
      local_250 = 0x8000000000000000;
      if (lVar24 == 0) {
        lVar24 = FUN_00e5d3b4();
        *(long *)(lVar23 + 0x1000b8) = lVar24;
      }
      local_248 = *(long *)(*(long *)(lVar24 + 0x3d0) + 0x10);
      if (*(long *)(local_248 + 8) == 0) {
        local_238 = 0x8000;
        local_2a0 = 0x8000;
        if (local_248 == 0) goto LAB_03117b74;
        local_280 = 0x8000;
        if (*(ulong *)(local_248 + 0x28) < 0x8000) {
LAB_03117b14:
          plVar10 = (long *)FUN_031cf3b4(local_248,&local_280);
        }
        else {
          plVar10 = *(long **)(local_248 + 0x38);
          if (*(long **)(local_248 + 0x40) < plVar10 + 0x1000) goto LAB_03117b14;
          *(long **)(local_248 + 0x38) = plVar10 + 0x1000;
        }
      }
      else {
        local_248 = 0;
LAB_03117b74:
        local_238 = 0x8000;
        local_2a0 = 0x8000;
        plVar10 = (long *)(**(code **)PTR_DAT_047d1a08)(1,&local_2a0,0x40);
      }
      iVar8 = *piVar22;
      local_250 = CONCAT44(0x80000800,(undefined4)local_250);
      lVar24 = *(long *)(lVar23 + 0x1000b8);
      local_258 = plVar10;
      local_240 = plVar10;
      if (lVar24 == 0) {
        lVar24 = FUN_00e5d3b4();
        *(long *)(lVar23 + 0x1000b8) = lVar24;
      }
      if (*(long *)(lVar24 + (long)iVar8 * 8 + 1000) != 0) {
        FUN_03231bdc();
        lVar24 = *(long *)(lVar23 + 0x1000b8);
      }
      local_280 = 0;
      local_278 = 0x8000000000000000;
      if (lVar24 == 0) {
        lVar24 = FUN_00e5d3b4();
        *(long *)(lVar23 + 0x1000b8) = lVar24;
      }
      local_270 = *(long *)(*(long *)(lVar24 + 0x3d0) + 0x10);
      if (*(long *)(local_270 + 8) == 0) {
        local_260 = 0x40;
        local_2c0 = 0x40;
        if (local_270 == 0) goto LAB_03117c8c;
        local_2a0 = 0x40;
        if (*(ulong *)(local_270 + 0x28) < 0x40) {
LAB_03117c2c:
          lVar24 = FUN_031cf3b4(local_270,&local_2a0);
        }
        else {
          lVar24 = *(long *)(local_270 + 0x38);
          if (*(ulong *)(local_270 + 0x40) < lVar24 + 0x40U) goto LAB_03117c2c;
          *(ulong *)(local_270 + 0x38) = lVar24 + 0x40U;
        }
      }
      else {
        local_270 = 0;
LAB_03117c8c:
        local_260 = 0x40;
        local_2c0 = 0x40;
        lVar24 = (**(code **)PTR_DAT_047d1a08)(1,&local_2c0,0x40);
      }
      local_278 = CONCAT44(0x80000010,(int)local_278);
      puVar15 = (undefined8 *)plVar1[uVar14];
      local_298 = puVar15[1];
      local_2a0 = *puVar15;
      local_288 = puVar15[3];
      plVar10 = (long *)puVar15[4];
      local_290 = puVar15[2];
      local_280 = lVar24;
      local_268 = lVar24;
      (**(code **)(*plVar10 + 0x48))(plVar10,&local_2a0,param_1 + 0x940,&local_2c0);
      if (plVar26 != (long *)0x0) {
        lVar24 = *plVar26;
        if (*(code **)(lVar24 + 0x18) != (code *)0x0) {
          (**(code **)(lVar24 + 0x18))("gatherSilhouettes",0x11,*(undefined8 *)(lVar24 + 0x28));
        }
        puVar15 = (undefined8 *)plVar26[2];
        uVar16 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
        if ((uVar16 <= (ulong)plVar26[3]) && (plVar26[2] = uVar16, puVar15 != (undefined8 *)0x0)) {
          *puVar15 = "TtgatherSilhouettes";
          uVar9 = nn::os::GetSystemTick();
          puVar15[1] = uVar9;
        }
        if (((*(byte *)(lVar24 + 0x38) & 1) != 0) && (plVar26[6] != 0)) {
          puVar15 = (undefined8 *)plVar26[2];
          uVar16 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
          if ((uVar16 <= (ulong)plVar26[3]) && (plVar26[2] = uVar16, puVar15 != (undefined8 *)0x0))
          {
            *puVar15 = &DAT_03c4e575;
            puVar15[1] = *(undefined8 *)(plVar26[6] + 8);
          }
        }
      }
      lVar24 = local_218;
      fStack_2d8 = (float)uStack_2b8;
      fStack_2d4 = (float)((ulong)uStack_2b8 >> 0x20);
      fVar30 = fVar29 * (float)local_230;
      fVar34 = fVar33 * local_230._4_4_;
      fVar35 = fVar29 * (float)uStack_228;
      fVar36 = fVar33 * uStack_228._4_4_;
      auVar5._8_4_ = fStack_2d8;
      auVar5._0_8_ = local_2c0;
      auVar37._8_8_ = uStack_2a8;
      auVar37._0_8_ = local_2b0;
      auVar31._0_4_ = (float)local_2c0 + fVar30;
      auVar31._4_4_ = (float)((ulong)local_2c0 >> 0x20) + fVar34;
      auVar31._8_4_ = fStack_2d8 + fVar35;
      auVar31._12_4_ = fStack_2d4 + fVar36;
      auVar32._4_4_ = (float)((ulong)local_2b0 >> 0x20) + fVar34;
      auVar32._0_4_ = (float)local_2b0 + fVar30;
      auVar32._8_4_ = (float)uStack_2a8 + fVar35;
      auVar32._12_4_ = (float)((ulong)uStack_2a8 >> 0x20) + fVar36;
      auVar37 = NEON_fmax(auVar37,auVar32,4);
      auVar5._12_4_ = fStack_2d4;
      auVar32 = NEON_fmin(auVar5,auVar31,4);
      fStack_2d8 = auVar32._8_4_;
      fStack_2d4 = auVar32._12_4_;
      local_2e0 = auVar32._0_8_;
      uStack_2c8 = auVar37._8_8_;
      local_2d0 = auVar37._0_8_;
      if (2 < (int)local_210) {
        lVar27 = (local_210 & 0xffffffff) - 2;
        lVar25 = local_218 + 0x20;
LAB_03117df0:
        iVar8 = FUN_0324f2e0(&local_2e0,lVar24,lVar25 + -0x10,lVar25);
        if (iVar8 == 0) goto code_r0x03117e08;
        iVar8 = *piVar22;
        lVar24 = *(long *)(lVar23 + 0x1000b8);
        if (lVar24 == 0) {
          lVar24 = FUN_00e5d3b4();
          *(long *)(lVar23 + 0x1000b8) = lVar24;
        }
        if (*(long *)(lVar24 + (long)iVar8 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
        (**(code **)(*plVar10 + 0x38))(plVar10,&local_2a0,param_1 + 0x940,&local_258,&local_280);
        if (plVar26 != (long *)0x0) {
          lVar24 = *plVar26;
          if (((*(byte *)(lVar24 + 0x38) & 1) == 0) || (plVar26[6] == 0)) {
LAB_03117eb4:
            puVar28 = (undefined8 *)plVar26[2];
          }
          else {
            puVar15 = (undefined8 *)plVar26[2];
            puVar28 = (undefined8 *)((long)puVar15 + 0x17U & 0xfffffffffffffff8);
            if ((undefined8 *)plVar26[3] < puVar28) goto LAB_03117eb4;
            plVar26[2] = (long)puVar28;
            if (puVar15 != (undefined8 *)0x0) {
              *puVar15 = &DAT_03c4e575;
              puVar15[1] = *(undefined8 *)(plVar26[6] + 8);
              goto LAB_03117eb4;
            }
          }
          uVar16 = (long)puVar28 + 0x17U & 0xfffffffffffffff8;
          if ((uVar16 <= (ulong)plVar26[3]) && (plVar26[2] = uVar16, puVar28 != (undefined8 *)0x0))
          {
            *puVar28 = &DAT_03c2d363;
            uVar9 = nn::os::GetSystemTick();
            puVar28[1] = uVar9;
          }
          if (*(code **)(lVar24 + 0x20) != (code *)0x0) {
            (**(code **)(lVar24 + 0x20))(*(undefined8 *)(lVar24 + 0x28));
          }
          lVar24 = *plVar26;
          if (*(code **)(lVar24 + 0x18) != (code *)0x0) {
            (**(code **)(lVar24 + 0x18))("addToCutter",0xb,*(undefined8 *)(lVar24 + 0x28));
          }
          puVar15 = (undefined8 *)plVar26[2];
          uVar16 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
          if ((uVar16 <= (ulong)plVar26[3]) && (plVar26[2] = uVar16, puVar15 != (undefined8 *)0x0))
          {
            *puVar15 = "TtaddToCutter";
            uVar9 = nn::os::GetSystemTick();
            puVar15[1] = uVar9;
          }
          if (((*(byte *)(lVar24 + 0x38) & 1) != 0) && (plVar26[6] != 0)) {
            puVar15 = (undefined8 *)plVar26[2];
            uVar16 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
            if ((uVar16 <= (ulong)plVar26[3]) && (plVar26[2] = uVar16, puVar15 != (undefined8 *)0x0)
               ) {
              *puVar15 = &DAT_03c4e575;
              puVar15[1] = *(undefined8 *)(plVar26[6] + 8);
            }
          }
        }
        uVar16 = local_278 & 0xffffffff;
        if (0 < (int)local_278) {
          lVar24 = 0;
          iVar8 = 0;
          do {
            uVar3 = *(uint *)(local_280 + lVar24);
            if (1 < (int)uVar3) {
              FUN_03163ce4(local_1f0,local_258 + (long)iVar8 * 2,
                           local_258 + (long)iVar8 * 2 + (ulong)uVar3 * 2,plVar10);
            }
            lVar24 = lVar24 + 4;
            iVar8 = uVar3 + iVar8;
          } while (uVar16 * 4 != lVar24);
        }
        piVar22 = (int *)PTR_DAT_047e4f38;
      }
LAB_03117fe4:
      if (plVar26 != (long *)0x0) {
        lVar24 = *plVar26;
        if (((*(byte *)(lVar24 + 0x38) & 1) == 0) || (plVar26[6] == 0)) {
LAB_03118030:
          puVar28 = (undefined8 *)plVar26[2];
        }
        else {
          puVar15 = (undefined8 *)plVar26[2];
          puVar28 = (undefined8 *)((long)puVar15 + 0x17U & 0xfffffffffffffff8);
          if ((undefined8 *)plVar26[3] < puVar28) goto LAB_03118030;
          plVar26[2] = (long)puVar28;
          if (puVar15 != (undefined8 *)0x0) {
            *puVar15 = &DAT_03c4e575;
            puVar15[1] = *(undefined8 *)(plVar26[6] + 8);
            goto LAB_03118030;
          }
        }
        uVar16 = (long)puVar28 + 0x17U & 0xfffffffffffffff8;
        if ((uVar16 <= (ulong)plVar26[3]) && (plVar26[2] = uVar16, puVar28 != (undefined8 *)0x0)) {
          *puVar28 = &DAT_03c2d363;
          uVar9 = nn::os::GetSystemTick();
          puVar28[1] = uVar9;
        }
        if (*(code **)(lVar24 + 0x20) != (code *)0x0) {
          (**(code **)(lVar24 + 0x20))(*(undefined8 *)(lVar24 + 0x28));
        }
      }
      if (local_268 == local_280) {
        local_278 = local_278 & 0xffffffff00000000;
      }
      if (local_270 == 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(1);
      }
      else {
        uVar16 = local_260 + 0x3fU & 0xffffffffffffffc0;
        if ((*(ulong *)(local_270 + 0x28) < uVar16) ||
           (*(long *)(local_270 + 0x38) != uVar16 + local_268)) {
          if (local_268 != 0) {
            if (*(ulong *)(local_270 + 0x28) < uVar16 + 0x40) {
              *(int *)(*(long *)(local_270 + 0x30) + 0x20) =
                   *(int *)(*(long *)(local_270 + 0x30) + 0x20) + -1;
              (**(code **)(**(long **)(local_270 + 0x10) + 0x18))
                        (*(long **)(local_270 + 0x10),local_268 - *(int *)(local_268 + -4),
                         uVar16 + 0x44);
            }
            else {
              if (*(long *)(local_270 + 0x38) == uVar16 + local_268) {
                *(long *)(local_270 + 0x38) = local_268;
                goto LAB_03118170;
              }
              FUN_031cf778();
            }
          }
        }
        else {
          *(long *)(local_270 + 0x38) = local_268;
          if (*(long *)(local_270 + 0x48) == local_268) {
LAB_03118170:
            FUN_031cf578();
          }
        }
      }
      uVar16 = local_278;
      uVar17 = (ulong)local_278._4_4_;
      local_278 = (ulong)local_278._4_4_ << 0x20;
      if ((-1 < (long)uVar16) && (local_280 != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_280,uVar17 << 2);
      }
      if (local_240 == local_258) {
        local_250 = local_250 & 0xffffffff00000000;
      }
      if (local_248 == 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(1);
      }
      else {
        uVar16 = local_238 + 0x3fU & 0xffffffffffffffc0;
        if ((*(ulong *)(local_248 + 0x28) < uVar16) ||
           (*(long *)(local_248 + 0x38) != uVar16 + (long)local_240)) {
          if (local_240 != (long *)0x0) {
            if (*(ulong *)(local_248 + 0x28) < uVar16 + 0x40) {
              *(int *)(*(long *)(local_248 + 0x30) + 0x20) =
                   *(int *)(*(long *)(local_248 + 0x30) + 0x20) + -1;
              (**(code **)(**(long **)(local_248 + 0x10) + 0x18))
                        (*(long **)(local_248 + 0x10),
                         (long)local_240 - (long)*(int *)((long)local_240 - 4),uVar16 + 0x44);
            }
            else {
              if (*(long *)(local_248 + 0x38) == uVar16 + (long)local_240) {
                *(long **)(local_248 + 0x38) = local_240;
                goto LAB_0311826c;
              }
              FUN_031cf778();
            }
          }
        }
        else {
          *(long **)(local_248 + 0x38) = local_240;
          if (*(long **)(local_248 + 0x48) == local_240) {
LAB_0311826c:
            FUN_031cf578();
          }
        }
      }
      uVar16 = local_250;
      uVar17 = (ulong)local_250._4_4_;
      local_250 = (ulong)local_250._4_4_ << 0x20;
      if ((-1 < (long)uVar16) && (local_258 != (long *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_258,uVar17 << 4);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar2);
  }
  iVar8 = *piVar22;
  lVar24 = *(long *)(lVar23 + 0x1000b8);
  if (lVar24 == 0) {
    lVar24 = FUN_00e5d3b4();
    *(long *)(lVar23 + 0x1000b8) = lVar24;
  }
  if (*(long *)(lVar24 + (long)iVar8 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if (plVar26 != (long *)0x0) {
    lVar24 = *plVar26;
    if (*(code **)(lVar24 + 0x18) != (code *)0x0) {
      (**(code **)(lVar24 + 0x18))("convexify",9,*(undefined8 *)(lVar24 + 0x28));
    }
    puVar15 = (undefined8 *)plVar26[2];
    uVar14 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar26[3]) && (plVar26[2] = uVar14, puVar15 != (undefined8 *)0x0)) {
      *puVar15 = "Ttconvexify";
      uVar9 = nn::os::GetSystemTick();
      puVar15[1] = uVar9;
    }
    if (((*(byte *)(lVar24 + 0x38) & 1) != 0) && (plVar26[6] != 0)) {
      puVar15 = (undefined8 *)plVar26[2];
      uVar14 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar26[3]) && (plVar26[2] = uVar14, puVar15 != (undefined8 *)0x0)) {
        *puVar15 = &DAT_03c4e575;
        puVar15[1] = *(undefined8 *)(plVar26[6] + 8);
      }
    }
  }
  lVar24 = *plVar20;
  lVar25 = *(long *)(lVar24 + 0x20);
  iVar8 = iVar11 - *(int *)(lVar25 + 0x20);
  if (iVar11 < *(int *)(lVar25 + 0x20)) {
    if (*(int *)(lVar25 + 0x98) == 0) {
      iVar8 = iVar11;
    }
    else {
      iVar8 = *(int *)(*(long *)(lVar25 + 0x90) + uVar13 * 4);
      if (iVar8 == -1) {
        lVar27 = *(long *)(lVar25 + 0x48);
        iVar8 = iVar11;
        goto LAB_03118408;
      }
    }
    lVar27 = *(long *)(lVar25 + 0x120);
  }
  else {
    lVar27 = *(long *)(lVar25 + 0x140);
  }
LAB_03118408:
  lVar27 = lVar27 + (long)(*(int *)(lVar25 + 0x50) * iVar8) * 4;
  puVar15 = (undefined8 *)(lVar18 + lVar12 * 0x30);
  local_258 = plVar26;
  FUN_03163eb4(local_1f0,puVar15[5],lVar24,local_218,local_218 + (long)(int)local_210 * 0x10,lVar27,
               lVar27 + (long)*(int *)(lVar25 + 0x50) * 4,*puVar15);
  if (plVar26 != (long *)0x0) {
    lVar12 = *plVar26;
    if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar26[6] != 0)) {
      puVar15 = (undefined8 *)plVar26[2];
      uVar13 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
      if ((uVar13 <= (ulong)plVar26[3]) && (plVar26[2] = uVar13, puVar15 != (undefined8 *)0x0)) {
        *puVar15 = &DAT_03c4e575;
        puVar15[1] = *(undefined8 *)(plVar26[6] + 8);
      }
    }
    puVar15 = (undefined8 *)plVar26[2];
    uVar13 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
    if ((uVar13 <= (ulong)plVar26[3]) && (plVar26[2] = uVar13, puVar15 != (undefined8 *)0x0)) {
      *puVar15 = &DAT_03c2d363;
      uVar9 = nn::os::GetSystemTick();
      puVar15[1] = uVar9;
    }
    if (*(code **)(lVar12 + 0x20) != (code *)0x0) {
      (**(code **)(lVar12 + 0x20))(*(undefined8 *)(lVar12 + 0x28));
    }
  }
  iVar11 = *(int *)PTR_DAT_047e4f38;
  lVar12 = *(long *)(lVar23 + 0x1000b8);
  if (lVar12 == 0) {
    lVar12 = FUN_00e5d3b4();
    *(long *)(lVar23 + 0x1000b8) = lVar12;
  }
  if (*(long *)(lVar12 + (long)iVar11 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if (local_200 == local_218) {
    local_210 = local_210 & 0xffffffff00000000;
  }
  if (local_208 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_031185dc;
  }
  uVar13 = local_1f8 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_208 + 0x28) < uVar13) || (*(long *)(local_208 + 0x38) != uVar13 + local_200)
     ) {
    if (local_200 == 0) goto LAB_031185dc;
    if (*(ulong *)(local_208 + 0x28) < uVar13 + 0x40) {
      *(int *)(*(long *)(local_208 + 0x30) + 0x20) =
           *(int *)(*(long *)(local_208 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(local_208 + 0x10) + 0x18))
                (*(long **)(local_208 + 0x10),local_200 - *(int *)(local_200 + -4),uVar13 + 0x44);
      goto LAB_031185dc;
    }
    if (*(long *)(local_208 + 0x38) != uVar13 + local_200) {
      FUN_031cf778();
      goto LAB_031185dc;
    }
    *(long *)(local_208 + 0x38) = local_200;
  }
  else {
    *(long *)(local_208 + 0x38) = local_200;
    if (*(long *)(local_208 + 0x48) != local_200) goto LAB_031185dc;
  }
  FUN_031cf578();
LAB_031185dc:
  uVar13 = local_210;
  uVar14 = (ulong)local_210._4_4_;
  local_210 = (ulong)local_210._4_4_ << 0x20;
  if ((-1 < (long)uVar13) && (local_218 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_218,uVar14 << 4);
  }
  lVar23 = local_90;
  uVar13 = (ulong)local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < lVar23) && (local_98 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_98,uVar13 * 0x30);
  }
  local_98 = 0;
  local_90 = CONCAT44(0x80000000,(undefined4)local_90);
  local_a0 = 0;
  if ((-1 < (int)local_9c) && (CONCAT44(uStack_a4,uStack_a8) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,CONCAT44(uStack_a4,uStack_a8),(ulong)local_9c << 3);
  }
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_9c = 0x80000000;
  FUN_030d9810(local_1f0);
  if (plVar26 != (long *)0x0) {
    lVar23 = *plVar26;
    if (((*(byte *)(lVar23 + 0x38) & 1) != 0) && (plVar26[6] != 0)) {
      puVar15 = (undefined8 *)plVar26[2];
      uVar13 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
      if ((uVar13 <= (ulong)plVar26[3]) && (plVar26[2] = uVar13, puVar15 != (undefined8 *)0x0)) {
        *puVar15 = &DAT_03c4e575;
        puVar15[1] = *(undefined8 *)(plVar26[6] + 8);
      }
    }
    puVar15 = (undefined8 *)plVar26[2];
    uVar13 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
    if ((uVar13 <= (ulong)plVar26[3]) && (plVar26[2] = uVar13, puVar15 != (undefined8 *)0x0)) {
      *puVar15 = &DAT_03c2d363;
      uVar9 = nn::os::GetSystemTick();
      puVar15[1] = uVar9;
    }
    if (*(code **)(lVar23 + 0x20) != (code *)0x0) {
      (**(code **)(lVar23 + 0x20))(*(undefined8 *)(lVar23 + 0x28));
    }
  }
  return;
code_r0x03117e08:
  lVar27 = lVar27 + -1;
  lVar25 = lVar25 + 0x10;
  if (lVar27 == 0) goto LAB_03117fe4;
  goto LAB_03117df0;
}


