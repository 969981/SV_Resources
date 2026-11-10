/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005ca60c; name: FUN_005ca60c
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_005ca60c(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  code *pcVar17;
  long lVar18;
  int local_2f0 [2];
  ulong local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  long *plStack_2d0;
  char local_2c8;
  long *local_2c0;
  long local_2b8;
  undefined8 uStack_2b0;
  long local_2a8;
  undefined8 local_2a0;
  long *plStack_298;
  long alStack_290 [4];
  long *local_270;
  ulong local_260;
  ulong local_258;
  long local_250;
  long *local_248;
  byte local_240;
  undefined7 uStack_23f;
  undefined8 local_230;
  long *plStack_228;
  byte local_208;
  undefined7 uStack_207;
  undefined8 local_1f8;
  long *plStack_1f0;
  byte local_1e8;
  undefined7 uStack_1e7;
  undefined8 local_1d8;
  long *plStack_1d0;
  byte local_1c8;
  undefined7 uStack_1c7;
  undefined8 local_1b8;
  long *plStack_1b0;
  long *local_1a8;
  long *local_1a0;
  int local_198 [2];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  long *plStack_178;
  char local_170;
  long *local_168;
  long local_160;
  undefined8 uStack_158;
  long local_150;
  byte local_148;
  undefined1 auStack_147 [15];
  undefined1 *local_138;
  byte local_128;
  undefined1 auStack_127 [15];
  undefined1 *local_118;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  byte *local_f0;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 *******local_c0;
  undefined8 *******local_b8;
  undefined1 auStack_a8 [64];
  undefined **local_68;
  undefined8 local_60;
  
  lVar18 = *(long *)(param_1 + 0x160);
  plVar1 = (long *)(param_1 + 0x140);
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = (long *)FUN_01cf7e20();
                    /* try { // try from 005ca650 to 005ca66b has its CatchHandler @ 005cabb0 */
  FUN_005caca0(local_198,param_1 + 0xd8,param_1 + 0xe8,&local_260,plVar1,
               *(undefined1 *)(param_1 + 0x128),param_1 + 200);
  uVar8 = local_260;
  uVar7 = local_258;
  if (local_260 != 0) {
    while (uVar7 != uVar8) {
      FUN_005c84cc(uVar7 - 0xe0);
      uVar7 = uVar7 - 0xe0;
    }
    local_258 = uVar8;
    (**(code **)(*local_248 + 0x18))(local_248,local_260,local_250 - local_260,8);
  }
  uVar12 = local_180;
  uVar11 = uStack_188;
  uVar10 = local_190;
  if (local_198[0] != 0) {
    local_2f0[0] = local_198[0];
    local_2c8 = '\0';
    local_180 = 0;
    local_190 = 0;
    uStack_188 = 0;
    uStack_2e0 = uVar11;
    local_2e8 = uVar10;
    plStack_2d0 = plStack_178;
    local_2d8 = uVar12;
    if (local_170 != '\0') {
      local_2c0 = local_168;
      uStack_2b0 = uStack_158;
      local_2b8 = local_160;
      local_2a8 = local_150;
      if (local_150 == 0) {
        local_2c0 = &local_2b8;
      }
      else {
        *(long **)(local_160 + 0x10) = &local_2b8;
        local_168 = &local_160;
        local_160 = 0;
        local_150 = 0;
      }
      local_2c8 = '\x01';
    }
    local_2a0 = 0;
    plStack_298 = (long *)0x0;
    FUN_005bdc74(local_198);
    lVar14 = *plVar1;
    goto joined_r0x005ca9b4;
  }
  puVar3 = auStack_147;
  if ((local_148 & 1) != 0) {
    puVar3 = local_138;
  }
  puVar4 = auStack_127;
  if ((local_128 & 1) != 0) {
    puVar4 = local_118;
  }
  if ((*local_f0 & 1) == 0) {
    pbVar15 = local_f0 + 1;
    if ((local_f0[0x68] & 1) == 0) goto LAB_005ca7ac;
LAB_005ca784:
    pbVar16 = *(byte **)(local_f0 + 0x78);
    if ((local_f0[0x88] & 1) == 0) goto LAB_005ca7bc;
LAB_005ca794:
    local_f0 = *(byte **)(local_f0 + 0x98);
  }
  else {
    pbVar15 = *(byte **)(local_f0 + 0x10);
    if ((local_f0[0x68] & 1) != 0) goto LAB_005ca784;
LAB_005ca7ac:
    pbVar16 = local_f0 + 0x69;
    if ((local_f0[0x88] & 1) != 0) goto LAB_005ca794;
LAB_005ca7bc:
    local_f0 = local_f0 + 0x89;
  }
  FUN_005c92c4(&local_260,puVar3,puVar4,local_108,local_100,local_f8,pbVar15,pbVar16,local_f0);
  lVar14 = *(long *)(*(long *)(param_1 + 0xd8) + 8);
  plVar13 = (long *)FUN_01cf7e20();
  FUN_005e6418(&local_d0,lVar14 + 8,lVar14 + 0x48);
  local_270 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x20,8);
  *local_270 = (long)&PTR_FUN_044cef88;
  local_270[1] = (long)plVar13;
  local_270[3] = (long)puStack_c8;
  local_270[2] = (long)local_d0;
  FUN_00541f78(&local_1a8,&local_260,param_1 + 0x130,alStack_290,
               *(long *)(*(long *)(param_1 + 0xd8) + 8) + 0x48);
  puVar2 = PTR_DAT_047cbb30 + 0x10;
  local_c0 = &local_c0;
  local_60 = 0;
  local_68 = (undefined **)0x0;
  puStack_c8 = PTR_DAT_047cbb38 + 0x10;
  local_d0 = puVar2;
  local_b8 = local_c0;
  (**(code **)(*local_1a8 + 0x10))(local_1a8,auStack_a8);
  local_68 = &puStack_c8;
  thunk_FUN_006c4e40(&local_d0);
  local_d0 = puVar2;
  FUN_006c4274(&puStack_c8);
  plVar9 = local_1a0;
  plVar13 = local_1a8;
  local_1a8 = (long *)0x0;
  local_1a0 = (long *)0x0;
  (**(code **)(*plVar13 + 0x30))(local_2f0);
  if (plVar9 != (long *)0x0) {
    plVar13 = plVar9 + 1;
    do {
      lVar14 = *plVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1a0 != (long *)0x0) {
    plVar13 = local_1a0 + 1;
    do {
      lVar14 = *plVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_1a0 + 0x10))(local_1a0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_270 != (long *)0x0) {
    if (local_270 == alStack_290) {
      pcVar17 = *(code **)(*local_270 + 0x10);
    }
    else {
      pcVar17 = *(code **)(*local_270 + 0x18);
    }
    (*pcVar17)();
  }
  if ((local_1c8 & 1) != 0) {
    (**(code **)(*plStack_1b0 + 0x18))
              (plStack_1b0,local_1b8,CONCAT71(uStack_1c7,local_1c8) & 0xfffffffffffffffe,1);
  }
  if ((local_1e8 & 1) != 0) {
    (**(code **)(*plStack_1d0 + 0x18))
              (plStack_1d0,local_1d8,CONCAT71(uStack_1e7,local_1e8) & 0xfffffffffffffffe,1);
  }
  if ((local_208 & 1) != 0) {
    (**(code **)(*plStack_1f0 + 0x18))
              (plStack_1f0,local_1f8,CONCAT71(uStack_207,local_208) & 0xfffffffffffffffe,1);
  }
  if ((local_240 & 1) != 0) {
    (**(code **)(*plStack_228 + 0x18))
              (plStack_228,local_230,CONCAT71(uStack_23f,local_240) & 0xfffffffffffffffe,1);
  }
  if ((local_260 & 1) == 0) {
    FUN_005bdc74(local_198);
    lVar14 = *plVar1;
  }
  else {
    (**(code **)(*local_248 + 0x18))(local_248,local_250,local_260 & 0xfffffffffffffffe,1);
    FUN_005bdc74(local_198);
    lVar14 = *plVar1;
  }
joined_r0x005ca9b4:
  if (lVar14 != 0) {
    FUN_005cbab4(lVar14,&DAT_03c886bc);
  }
  nn::os::LockMutex((MutexType *)(lVar18 + 0x38));
  *(int *)(lVar18 + 0x58) = local_2f0[0];
  *(undefined8 *)(lVar18 + 0x68) = uStack_2e0;
  *(ulong *)(lVar18 + 0x60) = local_2e8;
  *(long **)(lVar18 + 0x78) = plStack_2d0;
  *(undefined8 *)(lVar18 + 0x70) = local_2d8;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d8 = 0;
  *(undefined1 *)(lVar18 + 0x80) = 0;
  if (local_2c8 != '\0') {
    *(long **)(lVar18 + 0x88) = local_2c0;
    *(undefined8 *)(lVar18 + 0x98) = uStack_2b0;
    *(long *)(lVar18 + 0x90) = local_2b8;
    plVar1 = (long *)(lVar18 + 0x90);
    *(long *)(lVar18 + 0xa0) = local_2a8;
    if (local_2a8 == 0) {
      *(long **)(lVar18 + 0x88) = plVar1;
    }
    else {
      *(long **)(*plVar1 + 0x10) = plVar1;
      local_2c0 = &local_2b8;
      local_2b8 = 0;
      local_2a8 = 0;
    }
    *(undefined1 *)(lVar18 + 0x80) = 1;
  }
  *(long **)(lVar18 + 0xb0) = plStack_298;
  *(undefined8 *)(lVar18 + 0xa8) = local_2a0;
  local_2a0 = 0;
  plStack_298 = (long *)0x0;
  *(undefined1 *)(lVar18 + 0xb8) = 1;
  nn::os::UnlockMutex((MutexType *)(lVar18 + 0x38));
  if (plStack_298 != (long *)0x0) {
    plVar1 = plStack_298 + 1;
    do {
      lVar18 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_298 + 0x10))(plStack_298);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_2c8 != '\0') {
    FUN_01cfa44c(&local_2c0,local_2b8);
  }
  if ((local_2e8 & 1) != 0) {
    (**(code **)(*plStack_2d0 + 0x18))(plStack_2d0,local_2d8,local_2e8 & 0xfffffffffffffffe,1);
  }
  return 1;
}


