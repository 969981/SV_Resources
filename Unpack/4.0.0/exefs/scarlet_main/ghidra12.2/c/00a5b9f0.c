/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a5b9f0; name: FUN_00a5b9f0
 */


void FUN_00a5b9f0(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  ushort uVar4;
  bool bVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  undefined2 extraout_var;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined2 extraout_var_15;
  undefined2 extraout_var_16;
  undefined2 extraout_var_17;
  undefined2 extraout_var_18;
  undefined2 extraout_var_19;
  undefined2 extraout_var_20;
  undefined2 extraout_var_21;
  undefined2 extraout_var_22;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  long *local_2e8;
  long local_2d0;
  long local_2c8;
  long lStack_2c0;
  long local_2b8;
  long local_2b0;
  long lStack_2a8;
  long local_2a0;
  long local_298;
  long lStack_290;
  long local_288;
  long local_280;
  long lStack_278;
  long local_270;
  long local_268;
  long lStack_260;
  long local_258;
  long local_250;
  long lStack_248;
  long local_240;
  long local_238;
  long lStack_230;
  long local_228;
  long local_220;
  long lStack_218;
  long local_210;
  long local_208;
  long lStack_200;
  long local_1f8;
  long local_1f0;
  long lStack_1e8;
  long local_1e0;
  long local_1d8;
  long lStack_1d0;
  long local_1c8;
  long local_1c0;
  long lStack_1b8;
  long local_1b0;
  long local_1a8;
  long lStack_1a0;
  long local_198;
  long local_190;
  long lStack_188;
  long local_180;
  long local_178;
  long lStack_170;
  long local_168;
  long local_160;
  long lStack_158;
  long local_150;
  long local_148;
  long lStack_140;
  long local_138;
  long local_130;
  long lStack_128;
  long local_120;
  long local_118;
  long lStack_110;
  long local_108;
  long local_100;
  long lStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  long lStack_d0;
  long local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long lStack_98;
  undefined *local_90;
  undefined8 local_88;
  long lStack_80;
  undefined *local_78;
  ushort local_70;
  undefined2 local_6e;
  
  puVar3 = PTR_DAT_047d8ee0;
  puVar1 = PTR_DAT_047d8ee0 + 0x10;
  local_2e8 = param_2;
LAB_00a5ba2c:
  plVar17 = local_2e8 + -3;
  plVar11 = param_1;
LAB_00a5ba4c:
  param_1 = plVar11;
  uVar10 = (long)local_2e8 - (long)param_1;
  switch(((long)uVar10 >> 3) * -0x5555555555555555) {
  case 0:
  case 1:
    goto switchD_00a5c31c_caseD_0;
  case 2:
    lVar19 = *plVar17;
    local_100 = local_2e8[-2];
    lStack_f8 = local_2e8[-1];
    local_120 = *param_1;
    local_118 = param_1[1];
    lStack_110 = param_1[2];
    local_108 = lVar19;
    FUN_00a65480(&local_108,*(undefined4 *)*param_3);
    local_88._0_4_ = CONCAT22(extraout_var_17,(short)lVar19);
    local_90 = puVar3 + 0x10;
    uVar6 = FUN_016a02ac(&local_90);
    uVar4 = (ushort)local_120;
    FUN_00a65480(&local_120,*(undefined4 *)*param_3);
    local_88._0_4_ = CONCAT22(extraout_var_18,uVar4);
    local_90 = puVar3 + 0x10;
    uVar7 = FUN_016a02ac(&local_90);
    if (uVar6 <= uVar7) {
      if ((uint)uVar4 <= ((uint)lVar19 & 0xffff)) {
        return;
      }
      if (uVar6 != uVar7) {
        return;
      }
    }
    lVar19 = *param_1;
    lVar12 = param_1[1];
    lVar15 = param_1[2];
    lVar14 = local_2e8[-1];
    lVar13 = *plVar17;
    param_1[1] = local_2e8[-2];
    param_1[2] = lVar14;
    *param_1 = lVar13;
    local_2e8[-2] = lVar12;
    local_2e8[-1] = lVar15;
    *plVar17 = lVar19;
    return;
  case 3:
    FUN_00a5c690(param_1,param_1 + 3,plVar17,param_3);
    return;
  case 4:
    FUN_00a5cb10(param_1,param_1 + 3,param_1 + 6,plVar17,param_3);
    return;
  case 5:
    FUN_00a5ce10(param_1,param_1 + 3,param_1 + 6,param_1 + 9,plVar17,param_3);
    return;
  default:
    if (0x2e7 < (long)uVar10) {
      plVar11 = param_1 + (uVar10 / 0x30) * 3;
      if ((long)uVar10 < 0x5da9) {
        iVar8 = FUN_00a5c690(param_1,plVar11,plVar17,param_3);
      }
      else {
        lVar19 = (uVar10 / 0x60) * 2 + uVar10 / 0x60;
        iVar8 = FUN_00a5ce10(param_1,param_1 + lVar19,plVar11,plVar11 + lVar19,plVar17,param_3);
      }
      lVar19 = *param_1;
      local_130 = param_1[1];
      lStack_128 = param_1[2];
      local_150 = *plVar11;
      local_148 = plVar11[1];
      lStack_140 = plVar11[2];
      local_138 = lVar19;
      FUN_00a65480(&local_138,*(undefined4 *)*param_3);
      local_88._0_2_ = (undefined2)lVar19;
      local_90 = puVar1;
      local_88._2_2_ = extraout_var;
      uVar6 = FUN_016a02ac(&local_90);
      uVar4 = (ushort)local_150;
      FUN_00a65480(&local_150,*(undefined4 *)*param_3);
      local_88._0_4_ = CONCAT22(extraout_var_00,uVar4);
      local_90 = puVar1;
      uVar7 = FUN_016a02ac(&local_90);
      if ((uVar6 <= uVar7) && (((uint)uVar4 <= ((uint)lVar19 & 0xffff) || (uVar6 != uVar7)))) break;
      plVar16 = plVar17;
      goto LAB_00a5bb74;
    }
    FUN_00a5c690(param_1,param_1 + 3,param_1 + 6,param_3);
    if (param_1 + 9 == local_2e8) {
      return;
    }
    lVar19 = 0;
    plVar11 = param_1 + 9;
    plVar17 = param_1 + 6;
    goto LAB_00a5c430;
  }
  plVar18 = local_2e8 + -6;
  while (plVar16 = plVar18, param_1 != plVar16) {
    lVar19 = *plVar16;
    local_220 = plVar16[1];
    lStack_218 = plVar16[2];
    lStack_230 = plVar11[2];
    local_240 = *plVar11;
    local_238 = plVar11[1];
    local_228 = lVar19;
    FUN_00a65480(&local_228,*(undefined4 *)*param_3);
    local_88._0_4_ = CONCAT22(extraout_var_07,(short)lVar19);
    local_90 = puVar3 + 0x10;
    uVar6 = FUN_016a02ac(&local_90);
    uVar4 = (ushort)local_240;
    FUN_00a65480(&local_240,*(undefined4 *)*param_3);
    local_88._0_4_ = CONCAT22(extraout_var_08,uVar4);
    local_90 = puVar3 + 0x10;
    uVar7 = FUN_016a02ac(&local_90);
    if ((uVar7 < uVar6) ||
       ((plVar18 = plVar16 + -3, ((uint)lVar19 & 0xffff) < (uint)uVar4 && (uVar6 == uVar7))))
    goto LAB_00a5beec;
  }
  lVar19 = *param_1;
  local_160 = param_1[1];
  lStack_158 = param_1[2];
  plVar11 = param_1 + 3;
  local_180 = *plVar17;
  local_178 = local_2e8[-2];
  lStack_170 = local_2e8[-1];
  local_168 = lVar19;
  FUN_00a65480(&local_168,*(undefined4 *)*param_3);
  local_88._0_4_ = CONCAT22(extraout_var_09,(short)lVar19);
  local_90 = puVar3 + 0x10;
  uVar6 = FUN_016a02ac(&local_90);
  uVar4 = (ushort)local_180;
  FUN_00a65480(&local_180,*(undefined4 *)*param_3);
  local_88._0_4_ = CONCAT22(extraout_var_10,uVar4);
  local_90 = puVar3 + 0x10;
  uVar7 = FUN_016a02ac(&local_90);
  if ((uVar6 <= uVar7) && (((uint)uVar4 <= ((uint)lVar19 & 0xffff) || (uVar6 != uVar7)))) {
    if (plVar11 == plVar17) {
      return;
    }
    plVar11 = param_1 + 6;
    while( true ) {
      lVar19 = *param_1;
      local_190 = param_1[1];
      lStack_188 = param_1[2];
      local_1b0 = plVar11[-3];
      local_1a8 = plVar11[-2];
      lStack_1a0 = plVar11[-1];
      local_198 = lVar19;
      FUN_00a65480(&local_198,*(undefined4 *)*param_3);
      local_88._0_4_ = CONCAT22(extraout_var_11,(short)lVar19);
      local_90 = puVar3 + 0x10;
      uVar6 = FUN_016a02ac(&local_90);
      uVar4 = (ushort)local_1b0;
      FUN_00a65480(&local_1b0,*(undefined4 *)*param_3);
      local_88._0_4_ = CONCAT22(extraout_var_12,uVar4);
      local_90 = puVar3 + 0x10;
      uVar7 = FUN_016a02ac(&local_90);
      if ((uVar7 < uVar6) || ((((uint)lVar19 & 0xffff) < (uint)uVar4 && (uVar6 == uVar7)))) break;
      plVar11 = plVar11 + 3;
      if (local_2e8 == plVar11) {
        return;
      }
    }
    local_90 = (undefined *)plVar11[-3];
    local_88 = plVar11[-2];
    lStack_80 = plVar11[-1];
    lVar19 = local_2e8[-1];
    lVar12 = *plVar17;
    plVar11[-2] = local_2e8[-2];
    plVar11[-1] = lVar19;
    plVar11[-3] = lVar12;
    local_2e8[-2] = local_88;
    local_2e8[-1] = lStack_80;
    *plVar17 = (long)local_90;
  }
  if (plVar11 == plVar17) {
    return;
  }
  plVar16 = plVar17;
  while( true ) {
    while( true ) {
      lVar19 = *param_1;
      local_1c0 = param_1[1];
      lStack_1b8 = param_1[2];
      local_1e0 = *plVar11;
      local_1d8 = plVar11[1];
      lStack_1d0 = plVar11[2];
      local_1c8 = lVar19;
      FUN_00a65480(&local_1c8,*(undefined4 *)*param_3);
      local_88._0_4_ = CONCAT22(extraout_var_13,(short)lVar19);
      local_90 = puVar3 + 0x10;
      uVar6 = FUN_016a02ac(&local_90);
      uVar4 = (ushort)local_1e0;
      FUN_00a65480(&local_1e0,*(undefined4 *)*param_3);
      local_88._0_4_ = CONCAT22(extraout_var_14,uVar4);
      local_90 = puVar3 + 0x10;
      uVar7 = FUN_016a02ac(&local_90);
      if ((uVar7 < uVar6) || ((((uint)lVar19 & 0xffff) < (uint)uVar4 && (uVar6 == uVar7)))) break;
      plVar11 = plVar11 + 3;
    }
    do {
      do {
        plVar18 = plVar16;
        lVar19 = *param_1;
        local_1f0 = param_1[1];
        lStack_1e8 = param_1[2];
        plVar16 = plVar18 + -3;
        local_210 = *plVar16;
        local_208 = plVar18[-2];
        lStack_200 = plVar18[-1];
        local_1f8 = lVar19;
        FUN_00a65480(&local_1f8,*(undefined4 *)*param_3);
        local_88._0_4_ = CONCAT22(extraout_var_15,(short)lVar19);
        local_90 = puVar3 + 0x10;
        uVar6 = FUN_016a02ac(&local_90);
        uVar4 = (ushort)local_210;
        FUN_00a65480(&local_210,*(undefined4 *)*param_3);
        local_88._0_4_ = CONCAT22(extraout_var_16,uVar4);
        local_90 = puVar3 + 0x10;
        uVar7 = FUN_016a02ac(&local_90);
      } while (uVar7 < uVar6);
    } while ((((uint)lVar19 & 0xffff) < (uint)uVar4) && (uVar6 == uVar7));
    if (plVar16 <= plVar11) break;
    local_90 = (undefined *)*plVar11;
    local_88 = plVar11[1];
    lStack_80 = plVar11[2];
    lVar19 = plVar18[-1];
    lVar12 = *plVar16;
    plVar11[1] = plVar18[-2];
    plVar11[2] = lVar19;
    *plVar11 = lVar12;
    plVar18[-2] = local_88;
    plVar18[-1] = lStack_80;
    *plVar16 = (long)local_90;
    plVar11 = plVar11 + 3;
  }
  goto LAB_00a5ba4c;
LAB_00a5beec:
  local_90 = (undefined *)*param_1;
  local_88 = param_1[1];
  lStack_80 = param_1[2];
  lVar19 = plVar16[2];
  lVar12 = *plVar16;
  param_1[1] = plVar16[1];
  param_1[2] = lVar19;
  *param_1 = lVar12;
  plVar16[1] = local_88;
  plVar16[2] = lStack_80;
  iVar8 = iVar8 + 1;
  *plVar16 = (long)local_90;
LAB_00a5bb74:
  plVar18 = param_1 + 3;
  if (plVar18 < plVar16) {
    do {
      while( true ) {
        lVar19 = *plVar18;
        local_250 = plVar18[1];
        lStack_248 = plVar18[2];
        local_270 = *plVar11;
        local_268 = plVar11[1];
        lStack_260 = plVar11[2];
        local_258 = lVar19;
        FUN_00a65480(&local_258,*(undefined4 *)*param_3);
        local_88._0_4_ = CONCAT22(extraout_var_01,(short)lVar19);
        local_90 = puVar3 + 0x10;
        uVar6 = FUN_016a02ac(&local_90);
        uVar4 = (ushort)local_270;
        FUN_00a65480(&local_270,*(undefined4 *)*param_3);
        local_88._0_4_ = CONCAT22(extraout_var_02,uVar4);
        local_90 = puVar3 + 0x10;
        uVar7 = FUN_016a02ac(&local_90);
        if ((uVar6 <= uVar7) && (((uint)uVar4 <= ((uint)lVar19 & 0xffff) || (uVar6 != uVar7))))
        break;
        plVar18 = plVar18 + 3;
      }
      plVar2 = plVar16 + -3;
      do {
        plVar16 = plVar2;
        lVar19 = *plVar16;
        local_280 = plVar16[1];
        lStack_278 = plVar16[2];
        lStack_290 = plVar11[2];
        local_2a0 = *plVar11;
        local_298 = plVar11[1];
        local_288 = lVar19;
        FUN_00a65480(&local_288,*(undefined4 *)*param_3);
        local_88._0_4_ = CONCAT22(extraout_var_03,(short)lVar19);
        local_90 = puVar3 + 0x10;
        uVar6 = FUN_016a02ac(&local_90);
        uVar4 = (ushort)local_2a0;
        FUN_00a65480(&local_2a0,*(undefined4 *)*param_3);
        local_88._0_4_ = CONCAT22(extraout_var_04,uVar4);
        local_90 = puVar3 + 0x10;
        uVar7 = FUN_016a02ac(&local_90);
        if (uVar7 < uVar6) break;
        plVar2 = plVar16 + -3;
      } while (((uint)uVar4 <= ((uint)lVar19 & 0xffff)) || (uVar6 != uVar7));
      if (plVar16 < plVar18) break;
      local_90 = (undefined *)*plVar18;
      local_88 = plVar18[1];
      lStack_80 = plVar18[2];
      lVar19 = plVar16[2];
      lVar12 = *plVar16;
      plVar18[1] = plVar16[1];
      plVar18[2] = lVar19;
      *plVar18 = lVar12;
      plVar16[1] = local_88;
      plVar16[2] = lStack_80;
      iVar8 = iVar8 + 1;
      *plVar16 = (long)local_90;
      plVar2 = plVar16;
      if (plVar11 != plVar18) {
        plVar2 = plVar11;
      }
      plVar11 = plVar2;
      plVar18 = plVar18 + 3;
    } while( true );
  }
  if (plVar18 == plVar11) {
LAB_00a5bf3c:
    if (iVar8 != 0) goto LAB_00a5bf74;
  }
  else {
    lVar19 = *plVar11;
    local_2b0 = plVar11[1];
    lStack_2a8 = plVar11[2];
    local_2d0 = *plVar18;
    local_2c8 = plVar18[1];
    lStack_2c0 = plVar18[2];
    local_2b8 = lVar19;
    FUN_00a65480(&local_2b8,*(undefined4 *)*param_3);
    local_88._0_4_ = CONCAT22(extraout_var_05,(short)lVar19);
    local_90 = puVar3 + 0x10;
    uVar6 = FUN_016a02ac(&local_90);
    uVar4 = (ushort)local_2d0;
    FUN_00a65480(&local_2d0,*(undefined4 *)*param_3);
    local_88._0_4_ = CONCAT22(extraout_var_06,uVar4);
    local_90 = puVar3 + 0x10;
    uVar7 = FUN_016a02ac(&local_90);
    if ((uVar6 <= uVar7) && (((uint)uVar4 <= ((uint)lVar19 & 0xffff) || (uVar6 != uVar7))))
    goto LAB_00a5bf3c;
    local_90 = (undefined *)*plVar18;
    local_88 = plVar18[1];
    lStack_80 = plVar18[2];
    lVar19 = plVar11[2];
    lVar12 = *plVar11;
    plVar18[1] = plVar11[1];
    plVar18[2] = lVar19;
    *plVar18 = lVar12;
    plVar11[1] = local_88;
    plVar11[2] = lStack_80;
    *plVar11 = (long)local_90;
    if (iVar8 != -1) goto LAB_00a5bf74;
  }
  uVar10 = FUN_00a5d1f0(param_1,plVar18,param_3);
  uVar9 = FUN_00a5d1f0(plVar18 + 3,local_2e8,param_3);
  if ((uVar9 & 1) != 0) goto LAB_00a5c2fc;
  plVar11 = plVar18 + 3;
  if ((uVar10 & 1) != 0) goto LAB_00a5ba4c;
LAB_00a5bf74:
  if (((long)local_2e8 - (long)plVar18 >> 3) * -0x5555555555555555 <=
      ((long)plVar18 - (long)param_1 >> 3) * -0x5555555555555555) {
    FUN_00a5b9f0(plVar18 + 3,local_2e8,param_3);
    local_2e8 = plVar18;
    goto LAB_00a5ba2c;
  }
  FUN_00a5b9f0(param_1,plVar18,param_3);
  plVar11 = plVar18 + 3;
  goto LAB_00a5ba4c;
LAB_00a5c2fc:
  local_2e8 = plVar18;
  if ((uVar10 & 1) != 0) {
    return;
  }
  goto LAB_00a5ba2c;
LAB_00a5c430:
  plVar16 = plVar11;
  lStack_80 = plVar16[2];
  puVar1 = (undefined *)*plVar16;
  local_88 = plVar16[1];
  lStack_98 = plVar17[2];
  local_a8 = *plVar17;
  local_a0 = plVar17[1];
  local_90 = puVar1;
  FUN_00a65480(&local_90,*(undefined4 *)*param_3);
  local_b8._0_2_ = SUB82(puVar1,0);
  local_c0 = puVar3 + 0x10;
  local_b8._2_2_ = extraout_var_19;
  uVar6 = FUN_016a02ac(&local_c0);
  uVar4 = (ushort)local_a8;
  FUN_00a65480(&local_a8,*(undefined4 *)*param_3);
  local_b8._0_4_ = CONCAT22(extraout_var_20,uVar4);
  local_c0 = puVar3 + 0x10;
  uVar7 = FUN_016a02ac(&local_c0);
  if ((uVar7 < uVar6) || ((((uint)puVar1 & 0xffff) < (uint)uVar4 && (uVar6 == uVar7)))) {
    local_c0 = (undefined *)*plVar16;
    local_b8 = plVar16[1];
    local_b0 = plVar16[2];
    lVar12 = plVar17[2];
    lVar14 = *plVar17;
    plVar16[1] = plVar17[1];
    plVar16[2] = lVar12;
    *plVar16 = lVar14;
    plVar11 = param_1;
    if (plVar17 != param_1) {
      lVar12 = lVar19;
      do {
        puVar1 = local_c0;
        local_d8 = local_c0;
        lStack_d0 = local_b8;
        local_c8 = local_b0;
        puVar20 = (undefined8 *)((long)param_1 + lVar12 + 0x18);
        local_f0 = *puVar20;
        local_e8 = *(undefined8 *)((long)param_1 + lVar12 + 0x20);
        uStack_e0 = *(undefined8 *)((long)param_1 + lVar12 + 0x28);
        FUN_00a65480(&local_d8,*(undefined4 *)*param_3);
        local_70 = (ushort)puVar1;
        local_78 = puVar3 + 0x10;
        local_6e = extraout_var_21;
        uVar6 = FUN_016a02ac(&local_78);
        uVar4 = (ushort)local_f0;
        FUN_00a65480(&local_f0,*(undefined4 *)*param_3);
        local_70 = uVar4;
        local_78 = puVar3 + 0x10;
        local_6e = extraout_var_22;
        uVar7 = FUN_016a02ac(&local_78);
        if ((uVar6 <= uVar7) && (((uint)uVar4 <= ((uint)puVar1 & 0xffff) || (uVar6 != uVar7)))) {
          plVar11 = (long *)((long)param_1 + lVar12 + 0x30);
          break;
        }
        bVar5 = lVar12 != -0x18;
        *(undefined8 *)((long)param_1 + lVar12 + 0x30) = *puVar20;
        *(undefined8 *)((long)param_1 + lVar12 + 0x38) =
             *(undefined8 *)((long)param_1 + lVar12 + 0x20);
        *(undefined8 *)((long)param_1 + lVar12 + 0x40) =
             *(undefined8 *)((long)param_1 + lVar12 + 0x28);
        lVar12 = lVar12 + -0x18;
      } while (bVar5);
    }
    plVar11[1] = local_b8;
    plVar11[2] = local_b0;
    *plVar11 = (long)local_c0;
  }
  lVar19 = lVar19 + 0x18;
  plVar11 = plVar16 + 3;
  plVar17 = plVar16;
  if (plVar16 + 3 == local_2e8) {
switchD_00a5c31c_caseD_0:
    return;
  }
  goto LAB_00a5c430;
}


