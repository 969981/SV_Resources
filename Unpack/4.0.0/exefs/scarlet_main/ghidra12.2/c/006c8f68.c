/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c8f68; name: FUN_006c8f68
 */


/* WARNING: Removing unreachable block (ram,0x006c9ca8) */
/* WARNING: Removing unreachable block (ram,0x006c9cac) */
/* WARNING: Removing unreachable block (ram,0x006c9cb4) */
/* WARNING: Removing unreachable block (ram,0x006c9cbc) */
/* WARNING: Removing unreachable block (ram,0x006c9cc0) */
/* WARNING: Removing unreachable block (ram,0x006c9ce0) */
/* WARNING: Removing unreachable block (ram,0x006c9ce4) */
/* WARNING: Removing unreachable block (ram,0x006c9cec) */
/* WARNING: Removing unreachable block (ram,0x006c9cf4) */
/* WARNING: Removing unreachable block (ram,0x006c9cf8) */

void FUN_006c8f68(undefined8 *param_1,long param_2,long param_3,long *param_4,long *param_5,
                 long *param_6,long *param_7)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  code *pcVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  undefined1 auStack_3e0 [32];
  long local_3c0 [4];
  long *local_3a0;
  long local_390 [4];
  long *local_370;
  long local_360 [4];
  long *local_340;
  long local_330;
  long *local_328;
  undefined1 auStack_320 [32];
  long *local_300;
  long *plStack_2f8;
  long local_2f0;
  long *local_2e8;
  undefined1 auStack_2e0 [32];
  long local_2c0 [4];
  long *local_2a0;
  long local_290 [4];
  long *local_270;
  long local_260 [4];
  long *local_240;
  long local_230;
  long *local_228;
  long *local_220;
  long *plStack_218;
  long local_210;
  long *local_208;
  undefined1 auStack_200 [32];
  long local_1e0 [4];
  long *local_1c0;
  long local_1b0 [4];
  long *local_190;
  long local_180 [4];
  long *local_160;
  long local_150;
  long *local_148;
  long *local_140;
  long *plStack_138;
  ulong local_130;
  long *local_128;
  undefined1 auStack_120 [32];
  long local_100 [4];
  long *local_e0;
  long local_d0 [4];
  long *local_b0;
  long local_a0 [4];
  long *local_80;
  long local_70;
  long *local_68;
  
                    /* try { // try from 006c8fa0 to 006c8fab has its CatchHandler @ 006c9db4 */
  FUN_00707f24(auStack_320,0);
  FUN_006ebc90(&local_140,param_3 + 8);
  uVar4 = (ulong)&local_140 | 1;
  if (((ulong)local_140 & 1) != 0) {
    uVar4 = local_130;
  }
                    /* try { // try from 006c8fd0 to 006c8fd7 has its CatchHandler @ 006c9d78 */
  FUN_006c9db8(auStack_320,uVar4);
  if (((ulong)local_140 & 1) != 0) {
    (**(code **)(*local_128 + 0x18))(local_128,local_130,(ulong)local_140 & 0xfffffffffffffffe,1);
  }
  plVar22 = *(long **)(param_2 + 8);
  lVar28 = *(long *)(param_2 + 0x10);
  lVar13 = *(long *)(param_2 + 0x18);
  if (lVar28 == 0) {
    lVar23 = lVar13;
  }
  else {
    plVar21 = (long *)(lVar28 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = *plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar23 = *(long *)(param_2 + 0x18);
  }
  lVar24 = *(long *)(param_2 + 0x20);
  if (lVar24 != 0) {
    plVar21 = (long *)(lVar24 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = *plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_006c9ed8(auStack_3e0,auStack_320);
  plVar21 = local_3c0;
  local_3a0 = (long *)0x0;
  if (plVar21 != param_4) {
    plVar9 = (long *)param_4[4];
    if (plVar9 == (long *)0x0) {
      local_3a0 = (long *)0x0;
    }
    else if (plVar9 == param_4) {
      local_3a0 = plVar21;
      (**(code **)(*plVar9 + 0x30))(plVar9,plVar21);
    }
    else {
      param_4[4] = 0;
      local_3a0 = plVar9;
    }
  }
  plVar9 = local_390;
  local_370 = (long *)0x0;
  if (plVar9 != param_5) {
    plVar10 = (long *)param_5[4];
    if (plVar10 == (long *)0x0) {
      local_370 = (long *)0x0;
    }
    else if (plVar10 == param_5) {
      local_370 = plVar9;
      (**(code **)(*plVar10 + 0x30))(plVar10,plVar9);
    }
    else {
      param_5[4] = 0;
      local_370 = plVar10;
    }
  }
  plVar10 = local_360;
  local_340 = (long *)0x0;
  if (plVar10 != param_6) {
    local_340 = (long *)param_6[4];
    if (local_340 == (long *)0x0) {
      local_340 = (long *)0x0;
    }
    else if (local_340 == param_6) {
      lVar25 = *local_340;
      local_340 = plVar10;
      (**(code **)(lVar25 + 0x30))();
    }
    else {
      param_6[4] = 0;
    }
  }
  local_330 = *param_7;
  local_328 = (long *)param_7[1];
  if (local_328 != (long *)0x0) {
    plVar1 = local_328 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar29 = *(long **)(lVar13 + 0x240);
  puVar26 = *(undefined8 **)(lVar13 + 0x4b8);
  plVar11 = (long *)(**(code **)(*plVar29 + 0x10))(plVar29,0xd0,8);
  plVar11[2] = 0;
  plVar12 = plVar11 + 1;
  *plVar12 = 0;
  puVar7 = PTR_DAT_047cc158;
  plVar11[3] = (long)plVar29;
  plVar1 = plVar11 + 4;
  *plVar11 = (long)(puVar7 + 0x10);
  FUN_006c4254(plVar1);
  plVar11[4] = (long)(PTR_DAT_047cc168 + 0x10);
  nn::os::InitializeEvent(plVar11 + 6,0,0);
  plVar11[4] = (long)(PTR_DAT_047cc160 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar11 + 0xb),false,0);
  *(undefined1 *)(plVar11 + 0x19) = 0;
  if (plVar11 != (long *)0x0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar12 = (long *)(**(code **)(*plVar29 + 0x10))(plVar29,0x240,0x10);
  plVar12[2] = 0;
  plVar30 = plVar12 + 1;
  *plVar30 = 0;
  *plVar12 = (long)&PTR_LAB_044d9ca0;
  plVar12[4] = (long)plVar29;
  FUN_006c5398();
  plVar12[6] = (long)&PTR_LAB_044d9cd8;
  lVar13 = (**(code **)(*plVar29 + 0x10))(plVar29,0x10000,0x10);
  if (lVar13 == 0) {
    local_140 = (long *)CONCAT44(local_140._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_140,"");
  }
  FUN_006c4058(plVar12 + 0xc,plVar1,0,lVar13,0x10000,1);
  plVar12[0x42] = (long)plVar29;
  plVar12[0x43] = 0x10000;
  plVar12[0x44] = (long)plVar1;
  plVar12[0x45] = (long)plVar11;
  *(undefined1 *)((long)plVar12 + 0x231) = 1;
  plVar12[0xc] = (long)&PTR_LAB_044d9d08;
  local_300 = plVar22;
  plStack_2f8 = (long *)lVar28;
  local_2f0 = lVar23;
  local_2e8 = (long *)lVar24;
  FUN_006c9ed8(auStack_2e0,auStack_3e0);
  plVar22 = local_2c0;
  if (local_3a0 == (long *)0x0) {
    local_2a0 = (long *)0x0;
  }
  else if (local_3a0 == plVar21) {
    local_2a0 = plVar22;
    (**(code **)(local_3c0[0] + 0x30))(plVar21,plVar22);
  }
  else {
    local_2a0 = local_3a0;
    local_3a0 = (long *)0x0;
  }
  plVar29 = local_290;
  if (local_370 == (long *)0x0) {
    local_270 = (long *)0x0;
  }
  else if (local_370 == plVar9) {
    local_270 = plVar29;
    (**(code **)(local_390[0] + 0x30))(plVar9,plVar29);
  }
  else {
    local_270 = local_370;
    local_370 = (long *)0x0;
  }
  plVar20 = local_260;
  if (local_340 == (long *)0x0) {
    local_240 = (long *)0x0;
  }
  else if (local_340 == plVar10) {
    local_240 = plVar20;
    (**(code **)(local_360[0] + 0x30))();
  }
  else {
    local_240 = local_340;
    local_340 = (long *)0x0;
  }
  local_208 = local_2e8;
  local_210 = local_2f0;
  plStack_218 = plStack_2f8;
  local_220 = local_300;
  local_230 = local_330;
  local_228 = local_328;
  if (local_328 != (long *)0x0) {
    plVar19 = local_328 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *plVar19 = *plVar19 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_300 = (long *)0x0;
  plStack_2f8 = (long *)0x0;
  local_2f0 = 0;
  local_2e8 = (long *)0x0;
  FUN_006c9ed8(auStack_200,auStack_2e0);
  plVar19 = local_1e0;
  if (local_2a0 == (long *)0x0) {
    local_1c0 = (long *)0x0;
  }
  else if (local_2a0 == plVar22) {
    local_1c0 = plVar19;
    (**(code **)(local_2c0[0] + 0x30))(plVar22);
  }
  else {
    local_1c0 = local_2a0;
    local_2a0 = (long *)0x0;
  }
  plVar18 = local_1b0;
  if (local_270 == (long *)0x0) {
    local_190 = (long *)0x0;
  }
  else if (local_270 == plVar29) {
    local_190 = plVar18;
    (**(code **)(local_290[0] + 0x30))(plVar29,plVar18);
  }
  else {
    local_190 = local_270;
    local_270 = (long *)0x0;
  }
  plVar17 = local_180;
  if (local_240 == (long *)0x0) {
    local_160 = (long *)0x0;
  }
  else if (local_240 == plVar20) {
    local_160 = plVar17;
    (**(code **)(local_260[0] + 0x30))();
  }
  else {
    local_160 = local_240;
    local_240 = (long *)0x0;
  }
  local_128 = local_208;
  local_130 = local_210;
  plStack_138 = plStack_218;
  local_140 = local_220;
  local_150 = local_230;
  local_148 = local_228;
  if (local_228 != (long *)0x0) {
    plVar16 = local_228 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = *plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_220 = (long *)0x0;
  plStack_218 = (long *)0x0;
  local_210 = 0;
  local_208 = (long *)0x0;
  FUN_006c9ed8(auStack_120,auStack_200);
  plVar16 = local_100;
  if (local_1c0 == (long *)0x0) {
    local_e0 = (long *)0x0;
  }
  else if (local_1c0 == plVar19) {
    local_e0 = plVar16;
    (**(code **)(local_1e0[0] + 0x30))(plVar19,plVar16);
  }
  else {
    local_e0 = local_1c0;
    local_1c0 = (long *)0x0;
  }
  plVar15 = local_d0;
  if (local_190 == (long *)0x0) {
    local_b0 = (long *)0x0;
  }
  else if (local_190 == plVar18) {
    local_b0 = plVar15;
    (**(code **)(local_1b0[0] + 0x30))(plVar18,plVar15);
  }
  else {
    local_b0 = local_190;
    local_190 = (long *)0x0;
  }
  plVar14 = local_a0;
  if (local_160 == (long *)0x0) {
    local_80 = (long *)0x0;
  }
  else if (local_160 == plVar17) {
    local_80 = plVar14;
    (**(code **)(local_180[0] + 0x30))(plVar17,plVar14);
  }
  else {
    local_80 = local_160;
    local_160 = (long *)0x0;
  }
  plVar8 = plStack_138;
  plVar3 = local_140;
  local_70 = local_150;
  local_68 = local_148;
  if (local_148 != (long *)0x0) {
    plVar2 = local_148 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = *plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_138 = (long *)0x0;
  local_140 = (long *)0x0;
  plVar12[0x27] = (long)plVar8;
  plVar12[0x26] = (long)plVar3;
  plVar12[0x29] = (long)local_128;
  plVar12[0x28] = local_130;
  local_130 = 0;
  local_128 = (long *)0x0;
  FUN_006c9ed8(plVar12 + 0x2a,auStack_120);
  plVar12[0x32] = 0;
  if (plVar16 == plVar12 + 0x2e) {
LAB_006c96d0:
    plVar12[0x38] = 0;
  }
  else {
    if (local_e0 == (long *)0x0) {
      plVar12[0x32] = 0;
      goto LAB_006c96d0;
    }
    if (local_e0 == plVar16) {
      plVar12[0x32] = (long)(plVar12 + 0x2e);
      (**(code **)(local_100[0] + 0x30))(plVar16);
      plVar12[0x38] = 0;
    }
    else {
      plVar12[0x32] = (long)local_e0;
      local_e0 = (long *)0x0;
      plVar12[0x38] = 0;
    }
  }
  if (&local_140 != (long **)(plVar12 + 0x26)) {
    if (local_b0 == (long *)0x0) {
      plVar12[0x38] = 0;
      plVar12[0x3e] = 0;
    }
    else if (local_b0 == plVar15) {
      plVar12[0x38] = (long)(plVar12 + 0x34);
      (**(code **)(local_d0[0] + 0x30))(plVar15);
      plVar12[0x3e] = 0;
    }
    else {
      plVar12[0x38] = (long)local_b0;
      local_b0 = (long *)0x0;
      plVar12[0x3e] = 0;
    }
    if (local_80 != (long *)0x0) {
      if (local_80 == plVar14) {
        plVar12[0x3e] = (long)(plVar12 + 0x3a);
        (**(code **)(local_a0[0] + 0x30))(plVar14);
      }
      else {
        plVar12[0x3e] = (long)local_80;
        local_80 = (long *)0x0;
      }
      goto LAB_006c9780;
    }
  }
  plVar12[0x3e] = 0;
LAB_006c9780:
  plVar12[0x40] = local_70;
  plVar12[0x41] = (long)local_68;
  if (local_68 != (long *)0x0) {
    plVar3 = local_68 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *plVar3 = *plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (local_68 != (long *)0x0) {
      plVar3 = local_68 + 1;
      do {
        lVar28 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar28 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar28 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (local_80 != (long *)0x0) {
    if (local_80 == plVar14) {
      pcVar27 = *(code **)(*local_80 + 0x10);
    }
    else {
      pcVar27 = *(code **)(*local_80 + 0x18);
      plVar14 = local_80;
    }
    (*pcVar27)(plVar14);
  }
  if (local_b0 != (long *)0x0) {
    if (local_b0 == plVar15) {
      pcVar27 = *(code **)(*local_b0 + 0x10);
    }
    else {
      pcVar27 = *(code **)(*local_b0 + 0x18);
      plVar15 = local_b0;
    }
    (*pcVar27)(plVar15);
  }
  if (local_e0 != (long *)0x0) {
    if (local_e0 == plVar16) {
      pcVar27 = *(code **)(*local_e0 + 0x10);
    }
    else {
      pcVar27 = *(code **)(*local_e0 + 0x18);
      plVar16 = local_e0;
    }
    (*pcVar27)(plVar16);
  }
  FUN_00707f78(auStack_120);
  if (local_128 != (long *)0x0) {
    plVar16 = local_128 + 1;
    do {
      lVar28 = *plVar16;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = lVar28 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*local_128 + 0x10))(local_128);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_138 != (long *)0x0) {
    plVar16 = plStack_138 + 1;
    do {
      lVar28 = *plVar16;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = lVar28 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_148 != (long *)0x0) {
    plVar16 = local_148 + 1;
    do {
      lVar28 = *plVar16;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = lVar28 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*local_148 + 0x10))(local_148);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_160 != (long *)0x0) {
    if (local_160 == plVar17) {
      pcVar27 = *(code **)(*local_160 + 0x10);
    }
    else {
      pcVar27 = *(code **)(*local_160 + 0x18);
      plVar17 = local_160;
    }
    (*pcVar27)(plVar17);
  }
  if (local_190 != (long *)0x0) {
    if (local_190 == plVar18) {
      pcVar27 = *(code **)(*local_190 + 0x10);
    }
    else {
      pcVar27 = *(code **)(*local_190 + 0x18);
      plVar18 = local_190;
    }
    (*pcVar27)(plVar18);
  }
  if (local_1c0 != (long *)0x0) {
    if (local_1c0 == plVar19) {
      pcVar27 = *(code **)(*local_1c0 + 0x10);
    }
    else {
      pcVar27 = *(code **)(*local_1c0 + 0x18);
      plVar19 = local_1c0;
    }
    (*pcVar27)(plVar19);
  }
  FUN_00707f78(auStack_200);
  if (local_208 != (long *)0x0) {
    plVar19 = local_208 + 1;
    do {
      lVar28 = *plVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *plVar19 = lVar28 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*local_208 + 0x10))(local_208);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_218 != (long *)0x0) {
    plVar19 = plStack_218 + 1;
    do {
      lVar28 = *plVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *plVar19 = lVar28 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plStack_218 + 0x10))(plStack_218);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_228 != (long *)0x0) {
    plVar19 = local_228 + 1;
    do {
      lVar28 = *plVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *plVar19 = lVar28 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*local_228 + 0x10))(local_228);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_240 != (long *)0x0) {
    if (local_240 == plVar20) {
      pcVar27 = *(code **)(*local_240 + 0x10);
    }
    else {
      pcVar27 = *(code **)(*local_240 + 0x18);
      plVar20 = local_240;
    }
    (*pcVar27)(plVar20);
  }
  if (local_270 != (long *)0x0) {
    if (local_270 == plVar29) {
      pcVar27 = *(code **)(*local_270 + 0x10);
    }
    else {
      pcVar27 = *(code **)(*local_270 + 0x18);
      plVar29 = local_270;
    }
    (*pcVar27)(plVar29);
  }
  if (local_2a0 != (long *)0x0) {
    if (local_2a0 == plVar22) {
      pcVar27 = *(code **)(*local_2a0 + 0x10);
    }
    else {
      pcVar27 = *(code **)(*local_2a0 + 0x18);
      plVar22 = local_2a0;
    }
    (*pcVar27)(plVar22);
  }
  FUN_00707f78(auStack_2e0);
  if (local_2e8 != (long *)0x0) {
    plVar22 = local_2e8 + 1;
    do {
      lVar28 = *plVar22;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *plVar22 = lVar28 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*local_2e8 + 0x10))(local_2e8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_2f8 != (long *)0x0) {
    plVar22 = plStack_2f8 + 1;
    do {
      lVar28 = *plVar22;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *plVar22 = lVar28 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
      std::__shared_weak_count::__release_weak();
    }
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
    if (bVar6) {
      *plVar30 = *plVar30 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  local_140 = plVar12 + 6;
  plStack_138 = plVar12;
  (**(code **)*puVar26)(puVar26,&local_140,param_7);
  if (plStack_138 != (long *)0x0) {
    plVar22 = plStack_138 + 1;
    do {
      lVar28 = *plVar22;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *plVar22 = lVar28 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar11;
  do {
    lVar28 = *plVar30;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
    if (bVar6) {
      *plVar30 = lVar28 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar28 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    std::__shared_weak_count::__release_weak();
  }
  if (local_328 != (long *)0x0) {
    plVar22 = local_328 + 1;
    do {
      lVar28 = *plVar22;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *plVar22 = lVar28 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*local_328 + 0x10))(local_328);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_340 != (long *)0x0) {
    if (local_340 == plVar10) {
      pcVar27 = *(code **)(*local_340 + 0x10);
    }
    else {
      pcVar27 = *(code **)(*local_340 + 0x18);
      plVar10 = local_340;
    }
    (*pcVar27)(plVar10);
  }
  if (local_370 != (long *)0x0) {
    if (local_370 == plVar9) {
      pcVar27 = *(code **)(*local_370 + 0x10);
    }
    else {
      pcVar27 = *(code **)(*local_370 + 0x18);
      plVar9 = local_370;
    }
    (*pcVar27)(plVar9);
  }
  if (local_3a0 != (long *)0x0) {
    if (local_3a0 == plVar21) {
      pcVar27 = *(code **)(*local_3a0 + 0x10);
    }
    else {
      pcVar27 = *(code **)(*local_3a0 + 0x18);
      plVar21 = local_3a0;
    }
    (*pcVar27)(plVar21);
  }
  FUN_00707f78(auStack_3e0);
  FUN_00707f78(auStack_320);
  return;
}


