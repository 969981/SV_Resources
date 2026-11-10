/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030b9958; name: FUN_030b9958
 */


void FUN_030b9958(long param_1,long param_2,long param_3)

{
  short *psVar1;
  long **pplVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  ushort uVar9;
  short sVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined *puVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  long extraout_x1;
  long extraout_x1_00;
  long lVar20;
  ulong uVar21;
  float *pfVar22;
  long lVar23;
  long *plVar24;
  undefined8 *puVar25;
  undefined1 *puVar26;
  uint uVar27;
  float *pfVar28;
  ulong uVar29;
  long lVar30;
  int *piVar31;
  undefined8 uVar32;
  undefined1 *puVar33;
  long lVar34;
  long *plVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  uint uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar48;
  undefined1 auVar47 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar57 [16];
  ulong in_stack_ffffffffffffdce8;
  long local_22c0;
  undefined8 *puStack_22b8;
  undefined8 local_22b0;
  undefined8 uStack_22a8;
  undefined8 local_2290;
  undefined8 uStack_2288;
  undefined8 local_2278;
  undefined4 local_2270;
  undefined8 local_2268;
  undefined8 uStack_2260;
  undefined8 local_2218;
  undefined4 local_2210;
  undefined8 local_21b0;
  undefined8 uStack_21a8;
  undefined8 local_21a0;
  undefined8 uStack_2198;
  undefined4 local_2190;
  undefined4 local_218c;
  undefined8 local_2188;
  undefined8 uStack_2180;
  undefined8 local_2178;
  undefined8 uStack_2170;
  undefined4 local_2160;
  undefined8 local_2158;
  undefined8 uStack_2150;
  undefined8 local_2148;
  undefined4 local_2130;
  undefined8 local_2128;
  undefined8 local_2120;
  undefined8 local_2118;
  undefined8 local_20f0;
  undefined8 local_20e8;
  undefined8 local_20e0;
  long *local_20d8;
  undefined8 local_20d0;
  undefined8 local_20c8;
  undefined8 local_203c;
  uint local_2034;
  long local_2030;
  undefined4 local_2028;
  ulong local_2024;
  long *local_2010;
  undefined8 local_2008;
  long local_2000;
  undefined8 local_1ff8;
  long local_1ff0;
  undefined8 local_1fe8;
  undefined1 local_1fe0 [4];
  undefined8 local_1fdc;
  undefined4 local_1fd4;
  undefined8 local_1fd0;
  undefined8 uStack_1fc8;
  int local_1fc0;
  undefined8 *local_1fb8;
  undefined8 *local_1fb0;
  int local_1f98;
  int local_1f94;
  int local_1d50;
  undefined4 local_1d4c;
  long local_1ca8;
  undefined4 local_1ca0;
  uint local_1c9c;
  long local_1af0;
  long local_1ae8;
  uint local_1ae0;
  uint local_1adc;
  long local_1ad8;
  undefined8 local_1ad0;
  long local_1ac8;
  undefined8 local_1ac0;
  long local_1ab8;
  long local_1ab0;
  ulong local_1aa8;
  long local_1aa0;
  undefined8 local_1a98;
  long local_1a90;
  undefined8 local_1a88;
  undefined8 local_1a80;
  undefined8 uStack_1a78;
  long local_1a70;
  undefined4 local_1a68;
  undefined8 local_1a60;
  undefined8 local_1a58;
  long local_1a50;
  int local_1a48;
  float local_1a44;
  float local_1a40;
  undefined8 local_1a38;
  long local_1a30;
  undefined1 auStack_1a28 [3272];
  undefined8 local_d60;
  undefined8 uStack_d58;
  long *local_d48;
  undefined8 local_d40;
  undefined8 uStack_d38;
  undefined8 local_d30;
  undefined8 uStack_d28;
  undefined8 local_d20;
  undefined8 local_d18;
  undefined8 local_d10;
  undefined8 local_d08;
  undefined8 local_d00;
  undefined8 local_cf8;
  long local_cf0;
  undefined4 local_ce8;
  undefined8 local_ce0;
  int local_cd8;
  undefined2 local_cd4;
  undefined1 local_cd2;
  undefined8 local_cd0;
  undefined8 uStack_cc8;
  undefined4 local_cc0;
  undefined *local_b80;
  undefined8 local_b78;
  undefined8 local_b70;
  undefined8 local_b68;
  undefined8 *local_b60;
  undefined8 local_b58;
  undefined8 local_b50;
  undefined1 local_b48;
  
  lVar34 = tpidr_el0;
  lVar20 = *(long *)(lVar34 + 0x1000b8);
  lVar23 = param_2;
  if (lVar20 == 0) {
    auVar57 = FUN_00e5d3b4();
    lVar23 = auVar57._8_8_;
    lVar20 = auVar57._0_8_;
    *(long *)(lVar34 + 0x1000b8) = lVar20;
  }
  plVar35 = *(long **)(lVar20 + 0x3e0);
  if (plVar35 != (long *)0x0) {
    lVar20 = *plVar35;
    if (*(code **)(lVar20 + 0x18) != (code *)0x0) {
      (**(code **)(lVar20 + 0x18))("FindMeshPath",0xc,*(undefined8 *)(lVar20 + 0x28));
      lVar23 = extraout_x1;
      if (*(code **)(lVar20 + 0x18) != (code *)0x0) {
        (**(code **)(lVar20 + 0x18))("init",4,*(undefined8 *)(lVar20 + 0x28));
        lVar23 = extraout_x1_00;
      }
    }
    puVar25 = (undefined8 *)plVar35[2];
    uVar21 = (long)puVar25 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar21 <= (ulong)plVar35[3]) && (plVar35[2] = uVar21, puVar25 != (undefined8 *)0x0)) {
      *puVar25 = "LtFindMeshPath";
      puVar25[2] = "Stinit";
      auVar57 = nn::os::GetSystemTick();
      lVar23 = auVar57._8_8_;
      puVar25[1] = auVar57._0_8_;
    }
    if (((*(byte *)(lVar20 + 0x38) & 1) != 0) && (plVar35[6] != 0)) {
      puVar25 = (undefined8 *)plVar35[2];
      uVar21 = (long)puVar25 + 0x17U & 0xfffffffffffffff8;
      if ((uVar21 <= (ulong)plVar35[3]) && (plVar35[2] = uVar21, puVar25 != (undefined8 *)0x0)) {
        *puVar25 = &DAT_03c4e575;
        puVar25[1] = *(undefined8 *)(plVar35[6] + 8);
      }
    }
  }
  local_d48 = plVar35;
  uVar21 = FUN_030bbe78(param_1,lVar23,*(undefined4 *)(param_2 + 0x40),
                        *(undefined4 *)(param_2 + 0x38));
  if ((uVar21 & 1) == 0) {
    *(undefined8 *)(param_3 + 0x40) = 0xffffffff00000000;
    *(undefined1 *)(param_3 + 0x4c) = 5;
    goto joined_r0x030ba074;
  }
  uStack_1a78 = *(undefined8 *)(param_2 + 0x78);
  local_1a80 = *(undefined8 *)(param_2 + 0x70);
  uVar6 = *(undefined4 *)(param_2 + 0x38);
  local_1a48 = *(int *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) +
                                           ((ulong)(*(uint *)(param_2 + 0x40) >> 0xe) & 0x3ff00)) +
                                 0x20) + 0x180);
  pfVar28 = (float *)(param_2 + 0x60);
  local_1a58 = *(undefined8 *)(param_2 + 0x88);
  local_1a38 = *(undefined8 *)(param_2 + 0x68);
  local_1a40 = *(float *)(param_2 + 0xb8);
  uVar32 = *(undefined8 *)(param_2 + 0xa0);
  local_1a44 = *pfVar28 * 0.5;
  local_1a70 = *(long *)(param_2 + 0x90);
  local_1a68 = *(undefined4 *)(param_2 + 0x98);
  local_1a60 = 0;
  local_1a30 = 0;
  local_1a50 = param_1;
  local_d60 = local_1a80;
  uStack_d58 = uStack_1a78;
  FUN_03060fe8();
  pfVar22 = (float *)(local_1a50 + (long)local_1a48 * 4 + 0x60);
  if (*pfVar22 + local_1a40 < local_1a44) {
    if (-1 < local_1a70) {
      uVar32 = *(undefined8 *)
                (*(long *)(*(long *)(*(long *)(local_1a50 + 0x58) + 0x18) +
                          (long)(int)local_1a70 * 0x18) + (local_1a70 >> 0x20) * 0x18);
    }
    local_1a60 = uVar32;
  }
  if ((((local_1a40 + *pfVar22 < local_1a44) && (*(int *)(param_2 + 0x94) < 0)) &&
      (*(long *)(param_2 + 0xa0) == 0)) && (*(char *)(param_2 + 0xa8) == '\0')) {
    local_b70 = 1;
    local_b68 = 0;
    local_b60 = &local_d40;
    local_b80 = PTR_DAT_047e34b8 + 0x10;
    local_b50 = 0x1bf;
    local_b78 = 0xffffffff;
    local_b58 = 0;
    local_b48 = 0;
    memset(&local_d40,0,0x1c0);
    FUN_0322bd4c(&local_b80,
                 "A pathfind was requested without a clearance filter or a clearance cache. Failing to use a clearance cache will significantly reduce runtime performance. To force this behavior, set hkaiNavMeshPathSearchParameters::m_forceUncachedUnfilteredClearance to true."
                 ,0x102);
    iVar17 = FUN_03226f50(0x2453518d,&local_d40,
                          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Ai/Pathfinding/Utilities/hkaiPathfindingUtil.cpp"
                          ,0x116);
    if (iVar17 != 0) {
      CallSupervisor(0x26);
    }
  }
  if (*(char *)(param_2 + 0xb1) != '\0') {
    local_1a30 = param_3 + 0x50;
  }
  fVar39 = 3.40282e+38;
  if (*(char *)(param_2 + 0xab) == '\0') {
    iVar17 = -1;
    bVar15 = false;
LAB_030ba138:
    lVar23 = *(long *)(lVar34 + 0x1000b8);
    if (lVar23 == 0) {
      lVar23 = FUN_00e5d3b4();
      *(long *)(lVar34 + 0x1000b8) = lVar23;
    }
    plVar35 = *(long **)(lVar23 + 0x3e0);
    if (plVar35 != (long *)0x0) {
      lVar23 = *plVar35;
      if (((*(byte *)(lVar23 + 0x38) & 1) != 0) && (plVar35[6] != 0)) {
        puVar25 = (undefined8 *)plVar35[2];
        uVar21 = (long)puVar25 + 0x17U & 0xfffffffffffffff8;
        if ((uVar21 <= (ulong)plVar35[3]) && (plVar35[2] = uVar21, puVar25 != (undefined8 *)0x0)) {
          *puVar25 = &DAT_03c4e575;
          puVar25[1] = *(undefined8 *)(plVar35[6] + 8);
        }
      }
      puVar25 = (undefined8 *)plVar35[2];
      uVar21 = (long)puVar25 + 0x17U & 0xfffffffffffffff8;
      if ((uVar21 <= (ulong)plVar35[3]) && (plVar35[2] = uVar21, puVar25 != (undefined8 *)0x0)) {
        *puVar25 = "StinitSearch";
        uVar32 = nn::os::GetSystemTick();
        puVar25[1] = uVar32;
      }
      if (*(code **)(lVar23 + 0x20) != (code *)0x0) {
        (**(code **)(lVar23 + 0x20))(*(undefined8 *)(lVar23 + 0x28));
      }
      if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
        (**(code **)(lVar23 + 0x18))("initSearch",10,*(undefined8 *)(lVar23 + 0x28));
      }
    }
    local_1aa0 = 0;
    local_1a98 = 0x8000000000000000;
    local_1a90 = 0;
    local_1a88._0_4_ = 0;
    local_1a88._4_4_ = 0x80000000;
    if (*(char *)(param_2 + 0xad) == '\0') {
      local_1aa8 = 0;
    }
    else {
      uVar27 = *(uint *)(param_2 + 0xd0);
      if ((int)uVar27 < 1) {
        uVar27 = 0x8000;
      }
      uVar38 = *(uint *)(param_2 + 0xd4);
      if ((int)*(uint *)(param_2 + 0xd4) < 1) {
        uVar38 = 0x24200;
      }
      if (*(long *)(param_2 + 0xf0) == 0) {
        FUN_030b4a20(&local_1aa0,PTR_PTR_047d1a50 + 0x20,(long)(int)uVar27);
        if (((int)local_1a98 < (int)uVar27) || ((int)uVar27 < (int)local_1a98)) {
          local_1a98 = CONCAT44(local_1a98._4_4_,uVar27);
        }
      }
      else {
        local_1a98 = (ulong)(uVar27 | 0x80000000) << 0x20;
        local_1aa0 = *(long *)(param_2 + 0xf0);
      }
      if (*(long *)(param_2 + 0xf8) == 0) {
        if ((int)(local_1a88._4_4_ & 0x7fffffff) < (int)uVar38) {
          FUN_030b4a20(&local_1a90,PTR_PTR_047d1a50 + 0x20,(long)(int)uVar38);
        }
        if (((int)(uint)local_1a88 < (int)uVar38) || ((int)uVar38 < (int)(uint)local_1a88)) {
          local_1a88._0_4_ = uVar38;
        }
      }
      else {
        local_1a88._4_4_ = uVar38 | 0x80000000;
        local_1a88._0_4_ = 0;
        local_1a90 = *(long *)(param_2 + 0xf8);
      }
      local_1aa8 = CONCAT44(local_1a88._4_4_,local_1a98._4_4_) & 0x7fffffff7fffffff;
    }
    local_1ad8 = 0;
    local_1ad0 = 0x8000000000000000;
    local_1ac8 = 0;
    local_1ac0._0_4_ = 0;
    local_1ac0._4_4_ = 0x80000000;
    uVar27 = *(uint *)(param_2 + 200);
    if ((int)uVar27 < 1) {
      uVar27 = 0x20000;
    }
    uVar38 = *(uint *)(param_2 + 0xcc);
    if ((int)*(uint *)(param_2 + 0xcc) < 1) {
      uVar38 = 0x90200;
    }
    local_1ab8 = local_1aa0;
    local_1ab0 = local_1a90;
    if (*(long *)(param_2 + 0xe0) == 0) {
      FUN_030b4a20(&local_1ad8,PTR_PTR_047d1a50 + 0x20,(long)(int)uVar27);
      if (((int)local_1ad0 < (int)uVar27) || ((int)uVar27 < (int)local_1ad0)) {
        local_1ad0 = CONCAT44(local_1ad0._4_4_,uVar27);
      }
    }
    else {
      local_1ad0 = (ulong)(uVar27 | 0x80000000) << 0x20;
      local_1ad8 = *(long *)(param_2 + 0xe0);
    }
    if (*(long *)(param_2 + 0xe8) == 0) {
      if ((int)(local_1ac0._4_4_ & 0x7fffffff) < (int)uVar38) {
        FUN_030b4a20(&local_1ac8,PTR_PTR_047d1a50 + 0x20,(long)(int)uVar38);
      }
      if (((int)(uint)local_1ac0 < (int)uVar38) || ((int)uVar38 < (int)(uint)local_1ac0)) {
        local_1ac0._0_4_ = uVar38;
      }
    }
    else {
      local_1ac0._4_4_ = uVar38 | 0x80000000;
      local_1ac0._0_4_ = 0;
      local_1ac8 = *(long *)(param_2 + 0xe8);
    }
    local_1af0 = local_1ad8;
    local_1ae0 = local_1ad0._4_4_ & 0x7fffffff;
    local_1adc = local_1ac0._4_4_ & 0x7fffffff;
    local_1ae8 = local_1ac8;
    FUN_030bc0bc(&local_2010,&local_1af0,&local_1ab8);
    local_2270 = 4;
    local_2210 = 4;
    local_2010 = &local_22c0;
    local_2290 = 0;
    uStack_2288 = 0;
    local_2278 = 0xffffffffffffffff;
    local_2218 = 0xffffffffffffffff;
    local_2160 = 0xffffffff;
    local_2148 = 0;
    local_2130 = 0xffffffff;
    local_2128 = 0;
    local_2120 = 0;
    local_20c8 = 0;
    local_20d0 = 0;
    local_20e8 = 0;
    local_2118 = 0;
    local_20f0 = 0;
    local_2268 = 0;
    uStack_2260 = 0;
    local_2158 = 0;
    uStack_2150 = 0;
    local_203c = 0xffffffffffffffff;
    local_2030 = 0;
    local_2028 = 0;
    local_2024 = 0x80000000;
    uStack_21a8 = uStack_d58;
    local_21b0 = local_d60;
    local_20e0 = *(undefined8 *)(param_2 + 0x80);
    local_22b0 = *(undefined8 *)(param_2 + 0x60);
    uStack_22a8 = *(undefined8 *)(param_2 + 0x68);
    puStack_22b8 = &local_1a80;
    puVar25 = (undefined8 *)(param_2 + 0x20);
    uStack_2198 = *(undefined8 *)(param_2 + 0x28);
    local_21a0 = *puVar25;
    local_2190 = *(undefined4 *)(param_2 + 0x40);
    local_218c = *(undefined4 *)(param_2 + 0x38);
    local_2188 = *(undefined8 *)(param_2 + 0x30);
    uStack_2180 = *(undefined8 *)(param_2 + 0x48);
    fVar40 = *(float *)(param_2 + 0xc0);
    fVar46 = *(float *)(param_2 + 0xc4);
    local_20d8 = &local_2000;
    local_2034 = (uint)(0.0 <= fVar40);
    if (0.0 <= fVar46) {
      local_2034 = 0.0 <= fVar40 | 2;
    }
    local_2178 = CONCAT44(fVar40,fVar40);
    if (*(char *)(param_2 + 0xae) != '\0') {
      local_2034 = local_2034 | 0x10;
    }
    uStack_2170 = CONCAT44(fVar46,fVar46);
    local_2034 = local_2034 | (uint)(*(char *)(param_2 + 0xaf) != '\0') << 5;
    uStack_d28 = CONCAT44(uStack_d28._4_4_,local_2190);
    local_d18 = CONCAT44(local_d18._4_4_,uVar6);
    fVar40 = *(float *)(param_2 + 0xbc);
    if (fVar39 <= *(float *)(param_2 + 0xbc)) {
      fVar40 = fVar39;
    }
    uStack_1fc8 = CONCAT44(*(undefined4 *)(param_2 + 0xb4),fVar40);
    local_22c0 = param_1;
    local_d40 = local_21a0;
    uStack_d38 = uStack_2198;
    local_d30 = local_2188;
    local_d20 = uStack_2180;
    FUN_030bc39c(&local_2010,&local_22c0,pfVar28,&local_d40,*(char *)(param_2 + 0xad) != '\0');
    uVar27 = *(uint *)(param_2 + 0x58);
    lVar23 = *(long *)(lVar34 + 0x1000b8);
    if (lVar23 == 0) {
      lVar23 = FUN_00e5d3b4();
      *(long *)(lVar34 + 0x1000b8) = lVar23;
    }
    plVar35 = *(long **)(lVar23 + 0x3e0);
    if (plVar35 != (long *)0x0) {
      lVar23 = *plVar35;
      if (((*(byte *)(lVar23 + 0x38) & 1) != 0) && (plVar35[6] != 0)) {
        puVar5 = (undefined8 *)plVar35[2];
        uVar21 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
        if ((uVar21 <= (ulong)plVar35[3]) && (plVar35[2] = uVar21, puVar5 != (undefined8 *)0x0)) {
          *puVar5 = &DAT_03c4e575;
          puVar5[1] = *(undefined8 *)(plVar35[6] + 8);
        }
      }
      puVar5 = (undefined8 *)plVar35[2];
      uVar21 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
      if ((uVar21 <= (ulong)plVar35[3]) && (plVar35[2] = uVar21, puVar5 != (undefined8 *)0x0)) {
        *puVar5 = "StAStar";
        uVar32 = nn::os::GetSystemTick();
        puVar5[1] = uVar32;
      }
      if (*(code **)(lVar23 + 0x20) != (code *)0x0) {
        (**(code **)(lVar23 + 0x20))(*(undefined8 *)(lVar23 + 0x28));
      }
      if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
        (**(code **)(lVar23 + 0x18))("AStar",5,*(undefined8 *)(lVar23 + 0x28));
      }
    }
    iVar18 = *(int *)PTR_DAT_047e4f38;
    lVar23 = *(long *)(lVar34 + 0x1000b8);
    if (lVar23 == 0) {
      lVar23 = FUN_00e5d3b4();
      *(long *)(lVar34 + 0x1000b8) = lVar23;
    }
    if (*(long *)(lVar23 + (long)iVar18 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    uVar27 = uVar27 & ((int)uVar27 >> 0x1f ^ 0xffffffffU);
    uVar38 = 0;
    uVar36 = 0;
    do {
      if (uVar27 == uVar38) {
        uVar37 = uVar36;
        if ((int)local_1fd0 != -1) {
          uVar37 = 1;
        }
        uVar19 = 2;
        if ((int)local_1fd0 != -1) {
          uVar19 = 3;
        }
        uVar38 = uVar27;
        break;
      }
      uVar19 = FUN_030bc790(&local_2010);
      uVar37 = 2;
      if (local_1f98 < local_1f94) {
        uVar37 = 3;
      }
      if (uVar19 != 3) {
        uVar37 = uVar36;
      }
      iVar18 = *(int *)PTR_DAT_047e4f38;
      lVar23 = *(long *)(lVar34 + 0x1000b8);
      if (lVar23 == 0) {
        lVar23 = FUN_00e5d3b4();
        *(long *)(lVar34 + 0x1000b8) = lVar23;
      }
      uVar38 = uVar38 + 1;
      if (*(long *)(lVar23 + (long)iVar18 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      uVar36 = uVar37;
    } while (uVar19 == 0);
    lVar23 = *(long *)(lVar34 + 0x1000b8);
    if (lVar23 == 0) {
      lVar23 = FUN_00e5d3b4();
      *(long *)(lVar34 + 0x1000b8) = lVar23;
    }
    FUN_030684b8(auStack_1a28,*(undefined8 *)(lVar23 + 0x3e0));
    FUN_03060fe8(&local_d40);
    memcpy(auStack_1a28,&local_d40,0xcc0);
    uVar32 = local_1fe8;
    if ((!bVar15) || (uVar19 == 1)) {
      *(char *)(param_3 + 0x4c) = (char)uVar19;
      *(undefined1 *)(param_3 + 0x4d) = uVar37;
      *(uint *)(param_3 + 0x40) = uVar38;
      *(undefined4 *)(param_3 + 0x44) = 0xffffffff;
      if (((uVar19 & 0xfffffffd) == 1) ||
         (((uVar19 == 2 && (*(char *)(param_2 + 0xb0) != '\0')) && ((int)local_1fd0 != -1)))) {
        iVar17 = local_1d50;
        if (uVar19 != 1) {
          iVar17 = (int)local_1fd0;
        }
        *(undefined4 *)(param_3 + 0x44) = local_1d4c;
        uVar21 = (ulong)((uint)(iVar17 * -0x61c8864f) >> 0x18);
        for (uVar9 = *(ushort *)(local_1ff0 + uVar21 * 2); -1 < (short)uVar9;
            uVar9 = *(ushort *)(local_1ff8 + (ulong)uVar9 * 2)) {
          if (*(int *)(local_2000 + (ulong)uVar9 * 0x10 + 8) == iVar17) {
            local_1fb8 = (undefined8 *)(local_2000 + (ulong)uVar9 * 0x10);
            goto LAB_030ba934;
          }
        }
        local_1fb8 = (undefined8 *)(local_2000 + (long)(int)local_1fe8._4_4_ * 0x10);
        local_1fe8 = CONCAT44(local_1fe8._4_4_ + 1,(undefined4)local_1fe8);
        *local_1fb8 = 0x7f7fffee7f7fffee;
        *(int *)(local_1fb8 + 1) = iVar17;
        *(undefined4 *)((long)local_1fb8 + 0xc) = 0xffff;
        sVar10 = (short)((ulong)uVar32 >> 0x20);
        *(undefined2 *)(local_1ff8 + (long)sVar10 * 2) = *(undefined2 *)(local_1ff0 + uVar21 * 2);
        *(short *)(local_1ff0 + uVar21 * 2) = sVar10;
LAB_030ba934:
        local_1fc0 = ((int)local_1fb8 - (int)local_2000) * 0x1000 >> 0x10;
        local_1fb0 = local_1fb8;
        *(undefined4 *)(param_3 + 0x48) = *(undefined4 *)local_1fb8;
        lVar23 = *(long *)(lVar34 + 0x1000b8);
        if (lVar23 == 0) {
          lVar23 = FUN_00e5d3b4();
          *(long *)(lVar34 + 0x1000b8) = lVar23;
        }
        plVar35 = *(long **)(lVar23 + 0x3e0);
        if (plVar35 != (long *)0x0) {
          lVar23 = *plVar35;
          if (((*(byte *)(lVar23 + 0x38) & 1) != 0) && (plVar35[6] != 0)) {
            puVar5 = (undefined8 *)plVar35[2];
            uVar29 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
            if ((uVar29 <= (ulong)plVar35[3]) && (plVar35[2] = uVar29, puVar5 != (undefined8 *)0x0))
            {
              *puVar5 = &DAT_03c4e575;
              puVar5[1] = *(undefined8 *)(plVar35[6] + 8);
            }
          }
          puVar5 = (undefined8 *)plVar35[2];
          uVar29 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
          if ((uVar29 <= (ulong)plVar35[3]) && (plVar35[2] = uVar29, puVar5 != (undefined8 *)0x0)) {
            *puVar5 = "Stoutput";
            uVar32 = nn::os::GetSystemTick();
            puVar5[1] = uVar32;
          }
          if (*(code **)(lVar23 + 0x20) != (code *)0x0) {
            (**(code **)(lVar23 + 0x20))(*(undefined8 *)(lVar23 + 0x28));
          }
          if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
            (**(code **)(lVar23 + 0x18))("output",6,*(undefined8 *)(lVar23 + 0x28));
          }
        }
        for (uVar9 = *(ushort *)(local_1ff0 + uVar21 * 2); -1 < (short)uVar9;
            uVar9 = *(ushort *)(local_1ff8 + (ulong)uVar9 * 2)) {
          if (*(int *)(local_2000 + (ulong)uVar9 * 0x10 + 8) == iVar17) {
            puVar33 = (undefined1 *)(local_2000 + (ulong)uVar9 * 0x10);
            goto LAB_030baa58;
          }
        }
        puVar33 = local_1fe0;
LAB_030baa58:
        plVar35 = (long *)(param_3 + 0x18);
        if (((byte)puVar33[0xe] >> 2 & 1) == 0) {
          puVar26 = puVar33;
          lVar23 = -1;
          do {
            lVar20 = lVar23;
            psVar1 = (short *)(puVar26 + 0xc);
            puVar26 = (undefined1 *)0x0;
            if (*psVar1 != -1) {
              puVar26 = (undefined1 *)(local_2000 + (long)*psVar1 * 0x10);
            }
            lVar23 = lVar20 + 1;
          } while (((byte)puVar26[0xe] >> 2 & 1) == 0);
          uVar27 = (uint)lVar23;
          if ((*(uint *)(param_3 + 0x24) & 0x7fffffff) < uVar27) {
            FUN_030bba88(plVar35,lVar23);
          }
          if (*(uint *)(param_3 + 0x20) != uVar27) {
            *(uint *)(param_3 + 0x20) = uVar27;
          }
          if (((byte)puVar33[0xe] >> 2 & 1) == 0) {
            do {
              psVar1 = (short *)(puVar33 + 0xc);
              puVar33 = (undefined1 *)0x0;
              if (*psVar1 != -1) {
                puVar33 = (undefined1 *)(local_2000 + (long)*psVar1 * 0x10);
              }
              if ((lVar20 < lVar23) && (((byte)puVar33[0xe] >> 2 & 1) == 0)) {
                *(undefined4 *)(*plVar35 + lVar20 * 4) = *(undefined4 *)(puVar33 + 8);
              }
              lVar20 = lVar20 + -1;
            } while (((byte)puVar33[0xe] >> 2 & 1) == 0);
          }
        }
        if (uVar19 == 1) {
          puVar5 = (undefined8 *)(*(long *)(param_2 + 0x30) + (long)*(int *)(param_3 + 0x44) * 0x10)
          ;
          uStack_d38 = puVar5[1];
          local_d40 = *puVar5;
        }
        else if (*(int *)(param_3 + 0x20) == 0) {
          uStack_d38 = *(undefined8 *)(param_2 + 0x28);
          local_d40 = *puVar25;
        }
        else {
          uVar27 = *(uint *)(*plVar35 + (long)(*(int *)(param_3 + 0x20) + -1) * 4);
          uVar21 = (ulong)uVar27 & 0x3fffff;
          lVar23 = *(long *)(*(long *)(param_1 + 0x38) + ((ulong)(uVar27 >> 0xe) & 0x3ff00));
          lVar20 = *(long *)(lVar23 + 0x20);
          iVar18 = (int)uVar21;
          iVar17 = iVar18 - *(int *)(lVar20 + 0x30);
          if (iVar18 < *(int *)(lVar20 + 0x30)) {
            iVar17 = iVar18;
            if ((*(int *)(lVar20 + 0x78) == 0) ||
               (iVar17 = *(int *)(*(long *)(lVar20 + 0x70) + uVar21 * 4), iVar17 != -1)) {
              lVar30 = *(long *)(lVar20 + 0xc0);
              goto LAB_030bab94;
            }
            piVar31 = (int *)(*(long *)(lVar20 + 0x28) + uVar21 * 0x14);
          }
          else {
            lVar30 = *(long *)(lVar20 + 0xe0);
LAB_030bab94:
            piVar31 = (int *)(lVar30 + (long)iVar17 * 0x14);
          }
          iVar7 = *(int *)(lVar20 + 0x40);
          iVar17 = *piVar31;
          iVar18 = piVar31[1];
          lVar30 = 0x38;
          if (iVar7 <= iVar17) {
            lVar30 = 0xf0;
          }
          iVar3 = 0;
          if (iVar7 <= iVar17) {
            iVar3 = iVar7;
          }
          puVar5 = (undefined8 *)(*(long *)(lVar20 + lVar30) + (long)(iVar17 - iVar3) * 0x10);
          uVar32 = *puVar5;
          lVar30 = 0x38;
          if (iVar7 <= iVar18) {
            lVar30 = 0xf0;
          }
          iVar17 = 0;
          if (iVar7 <= iVar18) {
            iVar17 = iVar7;
          }
          puVar11 = (undefined8 *)(*(long *)(lVar20 + lVar30) + (long)(iVar18 - iVar17) * 0x10);
          fVar44 = (float)puVar11[1];
          uVar13 = *puVar11;
          fVar48 = (float)uVar13;
          fVar42 = (float)((ulong)uVar13 >> 0x20);
          fVar39 = (float)uVar32;
          fVar46 = (float)((ulong)uVar32 >> 0x20);
          fVar43 = (float)puVar5[1];
          fVar49 = (float)*(undefined8 *)(lVar23 + 0x80);
          fVar50 = (float)((ulong)*(undefined8 *)(lVar23 + 0x80) >> 0x20);
          fVar51 = (float)*(undefined8 *)(lVar23 + 0x88);
          fVar52 = (float)((ulong)*(undefined8 *)(lVar23 + 0x88) >> 0x20);
          fVar53 = (float)*(undefined8 *)(lVar23 + 0x90);
          fVar40 = fVar53 + fVar49 * fVar43 +
                            *(float *)(lVar23 + 0x60) * fVar39 + *(float *)(lVar23 + 0x70) * fVar46;
          fVar54 = (float)((ulong)*(undefined8 *)(lVar23 + 0x90) >> 0x20);
          fVar41 = fVar54 + fVar50 * fVar43 +
                            *(float *)(lVar23 + 100) * fVar39 + *(float *)(lVar23 + 0x74) * fVar46;
          fVar55 = (float)*(undefined8 *)(lVar23 + 0x98);
          fVar45 = fVar55 + fVar51 * fVar43 +
                            *(float *)(lVar23 + 0x68) * fVar39 + *(float *)(lVar23 + 0x78) * fVar46;
          fVar56 = (float)((ulong)*(undefined8 *)(lVar23 + 0x98) >> 0x20);
          fVar39 = fVar56 + fVar52 * fVar43 +
                            *(float *)(lVar23 + 0x6c) * fVar39 + *(float *)(lVar23 + 0x7c) * fVar46;
          local_d40 = CONCAT44(fVar41 + ((fVar54 + fVar50 * fVar44 +
                                                   *(float *)(lVar23 + 100) * fVar48 +
                                                   *(float *)(lVar23 + 0x74) * fVar42) - fVar41) *
                                        0.5,
                               fVar40 + ((fVar53 + fVar49 * fVar44 +
                                                   *(float *)(lVar23 + 0x60) * fVar48 +
                                                   *(float *)(lVar23 + 0x70) * fVar42) - fVar40) *
                                        0.5);
          uStack_d38 = CONCAT44(fVar39 + ((fVar56 + fVar52 * fVar44 +
                                                    *(float *)(lVar23 + 0x6c) * fVar48 +
                                                    *(float *)(lVar23 + 0x7c) * fVar42) - fVar39) *
                                         0.5,
                                fVar45 + ((fVar55 + fVar51 * fVar44 +
                                                    *(float *)(lVar23 + 0x68) * fVar48 +
                                                    *(float *)(lVar23 + 0x78) * fVar42) - fVar45) *
                                         0.5);
        }
        if ((*(byte *)(param_2 + 0xaa) & 1) != 0) {
          iVar17 = *(int *)PTR_DAT_047e4f38;
          lVar23 = *(long *)(lVar34 + 0x1000b8);
          if (lVar23 == 0) {
            lVar23 = FUN_00e5d3b4();
            *(long *)(lVar34 + 0x1000b8) = lVar23;
          }
          if (*(long *)(lVar23 + (long)iVar17 * 8 + 1000) != 0) {
            FUN_03231bdc();
            lVar23 = *(long *)(lVar34 + 0x1000b8);
          }
          if (lVar23 == 0) {
            lVar23 = FUN_00e5d3b4();
            *(long *)(lVar34 + 0x1000b8) = lVar23;
          }
          plVar24 = *(long **)(lVar23 + 0x3e0);
          if (plVar24 != (long *)0x0) {
            lVar23 = *plVar24;
            if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
              (**(code **)(lVar23 + 0x18))("smooth",6,*(undefined8 *)(lVar23 + 0x28));
            }
            puVar5 = (undefined8 *)plVar24[2];
            uVar21 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
            if ((uVar21 <= (ulong)plVar24[3]) && (plVar24[2] = uVar21, puVar5 != (undefined8 *)0x0))
            {
              *puVar5 = "Ttsmooth";
              uVar32 = nn::os::GetSystemTick();
              puVar5[1] = uVar32;
            }
            if (((*(byte *)(lVar23 + 0x38) & 1) != 0) && (plVar24[6] != 0)) {
              puVar5 = (undefined8 *)plVar24[2];
              uVar21 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
              if ((uVar21 <= (ulong)plVar24[3]) &&
                 (plVar24[2] = uVar21, puVar5 != (undefined8 *)0x0)) {
                *puVar5 = &DAT_03c4e575;
                puVar5[1] = *(undefined8 *)(plVar24[6] + 8);
              }
            }
          }
          bVar8 = *(byte *)(param_2 + 0xaa);
          fVar39 = *(float *)(param_2 + 0x60) * 0.5;
          fVar40 = *(float *)(param_2 + 0xb8);
          if ((int)(*(uint *)(param_3 + 0x34) & 0x7fffffff) < *(int *)(param_3 + 0x20)) {
            FUN_0308eb60(param_3 + 0x28,PTR_PTR_047d1a50);
          }
          FUN_030c089c(fVar39,param_1,&local_1a80,plVar35,*(undefined4 *)(param_2 + 0x40),puVar25,
                       &local_d40,bVar8 & 2,bVar8 & 4,&local_d60,fVar39 <= fVar40,param_3 + 0x28,0,0
                       ,0);
          if (plVar24 != (long *)0x0) {
            lVar23 = *plVar24;
            if (((*(byte *)(lVar23 + 0x38) & 1) != 0) && (plVar24[6] != 0)) {
              puVar25 = (undefined8 *)plVar24[2];
              uVar21 = (long)puVar25 + 0x17U & 0xfffffffffffffff8;
              if ((uVar21 <= (ulong)plVar24[3]) &&
                 (plVar24[2] = uVar21, puVar25 != (undefined8 *)0x0)) {
                *puVar25 = &DAT_03c4e575;
                puVar25[1] = *(undefined8 *)(plVar24[6] + 8);
              }
            }
            puVar25 = (undefined8 *)plVar24[2];
            uVar21 = (long)puVar25 + 0x17U & 0xfffffffffffffff8;
            if ((uVar21 <= (ulong)plVar24[3]) && (plVar24[2] = uVar21, puVar25 != (undefined8 *)0x0)
               ) {
              *puVar25 = &DAT_03c2d363;
              uVar32 = nn::os::GetSystemTick();
              puVar25[1] = uVar32;
            }
            if (*(code **)(lVar23 + 0x20) != (code *)0x0) {
              (**(code **)(lVar23 + 0x20))(*(undefined8 *)(lVar23 + 0x28));
            }
          }
        }
      }
    }
    else {
      *(undefined1 *)(param_3 + 0x4c) = 1;
      *(undefined4 *)(param_3 + 0x40) = 0;
      *(int *)(param_3 + 0x44) = iVar17;
      bVar8 = *(byte *)(param_2 + 0xaa);
      if ((bVar8 & 1) != 0) {
        fVar39 = *(float *)(param_2 + 0x60);
        if ((int)(*(uint *)(param_3 + 0x34) & 0x7fffffff) < *(int *)(param_3 + 0x20) + 2) {
          FUN_0308eb60(param_3 + 0x28,PTR_PTR_047d1a50);
        }
        FUN_030c25d4(fVar39 * 0.5,param_1,&local_1a80,param_3 + 0x18,*(undefined4 *)(param_2 + 0x40)
                     ,puVar25,*(long *)(param_2 + 0x30) + (long)iVar17 * 0x10,bVar8 & 2,bVar8 & 4,
                     &local_d60,param_3 + 0x28,0,in_stack_ffffffffffffdce8 & 0xffffffff00000000);
      }
    }
    iVar17 = *(int *)PTR_DAT_047e4f38;
    lVar23 = *(long *)(lVar34 + 0x1000b8);
    if (lVar23 == 0) {
      lVar23 = FUN_00e5d3b4();
      *(long *)(lVar34 + 0x1000b8) = lVar23;
    }
    if (*(long *)(lVar23 + (long)iVar17 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    local_2028 = 0;
    if ((-1 < (int)local_2024) && (local_2030 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,local_2030,(local_2024 & 0xffffffff) << 2);
    }
    local_1ca0 = 0;
    if ((-1 < (int)local_1c9c) && (local_1ca8 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,local_1ca8,(ulong)local_1c9c << 3);
    }
    uVar27 = local_1ac0._4_4_;
    local_1ac0 = (ulong)local_1ac0._4_4_ << 0x20;
    if ((-1 < (int)uVar27) && (local_1ac8 != 0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    }
    uVar21 = local_1ad0;
    local_1ac8 = 0;
    local_1ac0 = CONCAT44(0x80000000,(uint)local_1ac0);
    local_1ad0 = local_1ad0 & 0xffffffff00000000;
    if ((-1 < (long)uVar21) && (local_1ad8 != 0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    }
    uVar27 = local_1a88._4_4_;
    local_1a88 = (ulong)local_1a88._4_4_ << 0x20;
    if ((-1 < (int)uVar27) && (local_1a90 != 0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    }
    uVar21 = local_1a98;
    local_1a90 = 0;
    local_1a88 = CONCAT44(0x80000000,(uint)local_1a88);
    local_1a98 = local_1a98 & 0xffffffff00000000;
    if ((-1 < (long)uVar21) && (local_1aa0 != 0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    }
    plVar35 = local_d48;
  }
  else {
    lVar23 = *(long *)(lVar34 + 0x1000b8);
    if (lVar23 == 0) {
      lVar23 = FUN_00e5d3b4();
      *(long *)(lVar34 + 0x1000b8) = lVar23;
    }
    plVar24 = *(long **)(lVar23 + 0x3e0);
    if (plVar24 != (long *)0x0) {
      lVar23 = *plVar24;
      if (((*(byte *)(lVar23 + 0x38) & 1) != 0) && (plVar24[6] != 0)) {
        puVar25 = (undefined8 *)plVar24[2];
        uVar21 = (long)puVar25 + 0x17U & 0xfffffffffffffff8;
        if ((uVar21 <= (ulong)plVar24[3]) && (plVar24[2] = uVar21, puVar25 != (undefined8 *)0x0)) {
          *puVar25 = &DAT_03c4e575;
          puVar25[1] = *(undefined8 *)(plVar24[6] + 8);
        }
      }
      puVar25 = (undefined8 *)plVar24[2];
      uVar21 = (long)puVar25 + 0x17U & 0xfffffffffffffff8;
      if ((uVar21 <= (ulong)plVar24[3]) && (plVar24[2] = uVar21, puVar25 != (undefined8 *)0x0)) {
        *puVar25 = "StcheckLineOfSight";
        uVar32 = nn::os::GetSystemTick();
        puVar25[1] = uVar32;
      }
      if (*(code **)(lVar23 + 0x20) != (code *)0x0) {
        (**(code **)(lVar23 + 0x20))(*(undefined8 *)(lVar23 + 0x28));
      }
      if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
        (**(code **)(lVar23 + 0x18))("checkLineOfSight",0x10,*(undefined8 *)(lVar23 + 0x28));
      }
    }
    uStack_d38 = *(undefined8 *)(param_2 + 0x28);
    local_d40 = *(undefined8 *)(param_2 + 0x20);
    puVar25 = *(undefined8 **)(param_2 + 0x30);
    iVar17 = 0;
    if (1 < *(int *)(param_2 + 0x38)) {
      fVar39 = (float)local_d40 - (float)*puVar25;
      fVar40 = (float)((ulong)local_d40 >> 0x20);
      fVar41 = fVar40 - (float)((ulong)*puVar25 >> 0x20);
      fVar43 = (float)uStack_d38 - (float)puVar25[1];
      fVar46 = (float)((ulong)uStack_d38 >> 0x20);
      fVar45 = fVar46 - (float)((ulong)puVar25[1] >> 0x20);
      fVar39 = fVar39 * fVar39;
      fVar41 = fVar41 * fVar41;
      fVar43 = fVar43 * fVar43;
      fVar45 = fVar45 * fVar45;
      auVar57._4_4_ = fVar41;
      auVar57._0_4_ = fVar39;
      auVar57._8_4_ = fVar43;
      auVar57._12_4_ = fVar45;
      auVar12._4_4_ = fVar41;
      auVar12._0_4_ = fVar39;
      auVar12._8_4_ = fVar43;
      auVar12._12_4_ = fVar45;
      auVar57 = NEON_ext(auVar57,auVar12,8,1);
      lVar23 = 1;
      fVar39 = fVar39 + fVar41 + auVar57._0_4_;
      do {
        pfVar22 = (float *)(puVar25 + lVar23 * 2);
        fVar41 = (float)local_d40 - *pfVar22;
        fVar43 = fVar40 - pfVar22[1];
        fVar45 = (float)uStack_d38 - pfVar22[2];
        fVar48 = fVar46 - pfVar22[3];
        auVar47._0_4_ = fVar41 * fVar41;
        auVar47._4_4_ = fVar43 * fVar43;
        auVar47._8_4_ = fVar45 * fVar45;
        auVar47._12_4_ = fVar48 * fVar48;
        auVar57 = NEON_ext(auVar47,auVar47,8,1);
        fVar41 = auVar47._0_4_ + auVar47._4_4_ + auVar57._0_4_;
        iVar18 = (int)lVar23;
        if (fVar39 <= fVar41) {
          fVar41 = fVar39;
          iVar18 = iVar17;
        }
        iVar17 = iVar18;
        lVar23 = lVar23 + 1;
        fVar39 = fVar41;
      } while (*(int *)(param_2 + 0x38) != (int)lVar23);
    }
    local_cd4 = 0;
    local_cd2 = 1;
    uStack_cc8 = (puVar25 + (long)iVar17 * 2)[1];
    local_cd0 = puVar25[(long)iVar17 * 2];
    uStack_d28 = *(undefined8 *)(param_2 + 0x78);
    local_d30 = *(undefined8 *)(param_2 + 0x70);
    local_cc0 = *(undefined4 *)(*(long *)(param_2 + 0x48) + (long)iVar17 * 4);
    local_d20 = CONCAT44(*(undefined4 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x40));
    local_d18 = *(undefined8 *)pfVar28;
    local_d10 = *(undefined8 *)(param_2 + 0x68);
    local_d08 = CONCAT44(*(undefined4 *)(param_2 + 0xbc),*(undefined4 *)(param_2 + 0xc0));
    local_d00 = *(undefined8 *)(param_2 + 0x80);
    local_cf8 = *(undefined8 *)(param_2 + 0x88);
    local_ce0 = *(undefined8 *)(param_2 + 0xa0);
    local_cf0 = *(long *)(param_2 + 0x90);
    local_ce8 = *(undefined4 *)(param_2 + 0x98);
    local_2008 = -0x8000000000000000;
    local_1ff8 = -0x8000000000000000;
    local_1fe8 = -0x8000000000000000;
    local_2010 = (long *)0x0;
    local_2000 = 0;
    local_1ff0 = 0;
    local_1fdc = 0xffffffff00000000;
    local_1fd4 = 0;
    local_cd8 = (uint)CONCAT11(*(undefined1 *)(param_2 + 0xac),*(undefined1 *)(param_2 + 0xae)) << 8
    ;
    uStack_1fc8 = 0x7f7fffee7f7fffee;
    local_1fd0 = 0x7f7fffee7f7fffee;
    local_1fe0[0] = 0;
    iVar18 = FUN_030b5c54(param_1,&local_d40,&local_2010);
    plVar24 = local_2010;
    uVar36 = 1;
    if (iVar18 == 0) {
      uVar36 = 2;
    }
    *(undefined1 *)(param_3 + 0x4c) = uVar36;
    pplVar2 = (long **)(param_3 + 0x18);
    if (&local_2010 != pplVar2) {
      iVar7 = (int)local_2008;
      lVar23 = (long)(int)local_2008;
      if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) < (int)local_2008) {
        FUN_030b4c90(pplVar2,PTR_PTR_047d1a50,lVar23);
      }
      memcpy(*(void **)(param_3 + 0x18),plVar24,lVar23 << 2);
      *(int *)(param_3 + 0x20) = iVar7;
    }
    lVar23 = local_1fe8;
    puVar14 = PTR_PTR_047d1a50;
    puVar4 = (undefined4 *)(param_3 + 0x48);
    if (iVar18 != 0) {
      puVar4 = &local_1fd4;
    }
    *(undefined4 *)(param_3 + 0x48) = *puVar4;
    uVar21 = (ulong)local_1fe8._4_4_;
    local_1fe8 = (ulong)local_1fe8._4_4_ << 0x20;
    if ((-1 < lVar23) && (local_1ff0 != 0)) {
      (**(code **)(*(long *)puVar14 + 0x20))(puVar14,local_1ff0,uVar21 << 4);
    }
    lVar23 = local_1ff8;
    uVar21 = (ulong)local_1ff8._4_4_;
    local_1ff0 = 0;
    local_1fe8 = CONCAT44(0x80000000,(undefined4)local_1fe8);
    local_1ff8 = (ulong)local_1ff8._4_4_ << 0x20;
    if ((-1 < lVar23) && (local_2000 != 0)) {
      (**(code **)(*(long *)puVar14 + 0x20))(puVar14,local_2000,uVar21 << 2);
    }
    lVar23 = local_2008;
    uVar21 = (ulong)local_2008._4_4_;
    local_2000 = 0;
    local_1ff8 = CONCAT44(0x80000000,(undefined4)local_1ff8);
    local_2008 = (ulong)local_2008._4_4_ << 0x20;
    if ((-1 < lVar23) && (local_2010 != (long *)0x0)) {
      (**(code **)(*(long *)puVar14 + 0x20))(puVar14,local_2010,uVar21 << 2);
    }
    bVar15 = iVar18 != 0;
    fVar39 = *(float *)(param_3 + 0x48);
    if (!bVar15) {
      fVar39 = 3.40282e+38;
    }
    if (*(char *)(param_2 + 0xab) != '\x02') {
      if ((*(char *)(param_2 + 0xab) == '\x01') &&
         (bVar16 = *(long *)(param_2 + 0x80) == 0, iVar18 != 0)) goto LAB_030ba098;
      goto LAB_030ba138;
    }
    bVar16 = true;
    if (iVar18 == 0) goto LAB_030ba138;
LAB_030ba098:
    if (!bVar16) goto LAB_030ba138;
    *(undefined1 *)(param_3 + 0x4c) = 1;
    *(undefined4 *)(param_3 + 0x40) = 0;
    *(int *)(param_3 + 0x44) = iVar17;
    bVar8 = *(byte *)(param_2 + 0xaa);
    if ((bVar8 & 1) != 0) {
      fVar39 = *(float *)(param_2 + 0x60);
      if ((int)(*(uint *)(param_3 + 0x34) & 0x7fffffff) < *(int *)(param_3 + 0x20) + 2) {
        FUN_0308eb60(param_3 + 0x28,PTR_PTR_047d1a50);
      }
      FUN_030c25d4(fVar39 * 0.5,param_1,&local_1a80,pplVar2,*(undefined4 *)(param_2 + 0x40),
                   param_2 + 0x20,*(long *)(param_2 + 0x30) + (long)iVar17 * 0x10,bVar8 & 2,
                   bVar8 & 4,&local_d60,param_3 + 0x28,0,
                   in_stack_ffffffffffffdce8 & 0xffffffff00000000);
    }
  }
  lVar23 = *(long *)(lVar34 + 0x1000b8);
  if (lVar23 == 0) {
    lVar23 = FUN_00e5d3b4();
    *(long *)(lVar34 + 0x1000b8) = lVar23;
  }
  FUN_030684b8(auStack_1a28,*(undefined8 *)(lVar23 + 0x3e0));
joined_r0x030ba074:
  if (plVar35 != (long *)0x0) {
    lVar34 = *plVar35;
    if (((*(byte *)(lVar34 + 0x38) & 1) != 0) && (plVar35[6] != 0)) {
      puVar25 = (undefined8 *)plVar35[2];
      uVar21 = (long)puVar25 + 0x17U & 0xfffffffffffffff8;
      if ((uVar21 <= (ulong)plVar35[3]) && (plVar35[2] = uVar21, puVar25 != (undefined8 *)0x0)) {
        *puVar25 = &DAT_03c4e575;
        puVar25[1] = *(undefined8 *)(plVar35[6] + 8);
      }
    }
    puVar25 = (undefined8 *)plVar35[2];
    uVar21 = (long)puVar25 + 0x17U & 0xfffffffffffffff8;
    if ((uVar21 <= (ulong)plVar35[3]) && (plVar35[2] = uVar21, puVar25 != (undefined8 *)0x0)) {
      *puVar25 = &DAT_03c3697b;
      uVar32 = nn::os::GetSystemTick();
      puVar25[1] = uVar32;
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


