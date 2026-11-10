/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e9fce0; name: FUN_01e9fce0
 */


/* WARNING: Removing unreachable block (ram,0x01ea05d4) */
/* WARNING: Removing unreachable block (ram,0x01ea05d8) */
/* WARNING: Removing unreachable block (ram,0x01ea05e0) */
/* WARNING: Removing unreachable block (ram,0x01ea05e8) */
/* WARNING: Removing unreachable block (ram,0x01ea05ec) */
/* WARNING: Removing unreachable block (ram,0x01ea060c) */
/* WARNING: Removing unreachable block (ram,0x01ea0610) */
/* WARNING: Removing unreachable block (ram,0x01ea0618) */
/* WARNING: Removing unreachable block (ram,0x01ea0620) */
/* WARNING: Removing unreachable block (ram,0x01ea0624) */

void FUN_01e9fce0(undefined8 *param_1,long param_2,long param_3,long *param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  code *pcVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  undefined1 auStack_260 [32];
  long local_240 [4];
  long *local_220;
  long local_210;
  long *local_208;
  undefined1 auStack_200 [32];
  long local_1e0;
  long *plStack_1d8;
  long local_1d0;
  long *local_1c8;
  undefined1 auStack_1c0 [32];
  long local_1a0 [4];
  long *local_180;
  long local_170;
  long *local_168;
  long local_160;
  long *plStack_158;
  long local_150;
  long *local_148;
  undefined1 auStack_140 [32];
  long local_120 [4];
  long *local_100;
  long local_f0;
  long *local_e8;
  undefined8 local_e0;
  long *plStack_d8;
  ulong local_d0;
  long *local_c8;
  undefined1 auStack_c0 [32];
  long local_a0 [4];
  long *local_80;
  long local_70;
  long *local_68;
  
                    /* try { // try from 01e9fd10 to 01e9fd1b has its CatchHandler @ 01ea06c4 */
  FUN_007231a8(auStack_200,0);
  FUN_006fb5b0(&local_e0,*(undefined4 *)(param_3 + 8));
  uVar3 = (ulong)&local_e0 | 1;
  if (((ulong)local_e0 & 1) != 0) {
    uVar3 = local_d0;
  }
                    /* try { // try from 01e9fd40 to 01e9fd47 has its CatchHandler @ 01ea0688 */
  FUN_006efb5c(auStack_200,uVar3);
  if (((ulong)local_e0 & 1) != 0) {
    (**(code **)(*local_c8 + 0x18))(local_c8,local_d0,(ulong)local_e0 & 0xfffffffffffffffe,1);
  }
  lVar14 = *(long *)(param_2 + 8);
  lVar19 = *(long *)(param_2 + 0x10);
  lVar10 = *(long *)(param_2 + 0x18);
  if (lVar19 == 0) {
    lVar15 = lVar10;
  }
  else {
    plVar13 = (long *)(lVar19 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = *plVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar15 = *(long *)(param_2 + 0x18);
  }
  lVar16 = *(long *)(param_2 + 0x20);
  if (lVar16 != 0) {
    plVar13 = (long *)(lVar16 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = *plVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_006efc7c(auStack_260,auStack_200);
  plVar13 = local_240;
  if ((plVar13 == param_4) || (plVar7 = (long *)param_4[4], plVar7 == (long *)0x0)) {
    local_220 = (long *)0x0;
    local_210 = *param_5;
    local_208 = (long *)param_5[1];
  }
  else if (plVar7 == param_4) {
    local_220 = plVar13;
    (**(code **)(*plVar7 + 0x30))(plVar7,plVar13);
    local_210 = *param_5;
    local_208 = (long *)param_5[1];
  }
  else {
    param_4[4] = 0;
    local_210 = *param_5;
    local_208 = (long *)param_5[1];
    local_220 = plVar7;
  }
  if (local_208 != (long *)0x0) {
    plVar7 = local_208 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar20 = *(long **)(lVar10 + 0x240);
  puVar17 = *(undefined8 **)(lVar10 + 0x4b8);
  plVar7 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x128,8);
  plVar7[2] = 0;
  plVar9 = plVar7 + 1;
  *plVar9 = 0;
  puVar6 = PTR_DAT_047cfef0;
  plVar7[3] = (long)plVar20;
  plVar8 = plVar7 + 4;
  *plVar7 = (long)(puVar6 + 0x10);
  FUN_006c4254();
  plVar7[4] = (long)(PTR_DAT_047cfef8 + 0x10);
  nn::os::InitializeEvent(plVar7 + 6,0,0);
  plVar7[4] = (long)(PTR_DAT_047cff00 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar7 + 0xb),false,0);
  *(undefined1 *)(plVar7 + 0x24) = 0;
  if (plVar7 != (long *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x1e0,0x10);
  plVar9[2] = 0;
  plVar21 = plVar9 + 1;
  *plVar21 = 0;
  *plVar9 = (long)&PTR_FUN_044da9e0;
  plVar9[4] = (long)plVar20;
  FUN_006c5398();
  plVar9[6] = (long)&PTR_LAB_044daa18;
  lVar10 = (**(code **)(*plVar20 + 0x10))(plVar20,0x10000,0x10);
  if (lVar10 == 0) {
    local_e0 = (long *)CONCAT44(local_e0._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_e0,"");
  }
  FUN_006c4058(plVar9 + 0xc,plVar8,0,lVar10,0x10000,1);
  *(undefined1 *)((long)plVar9 + 0x1d1) = 1;
  plVar9[0x36] = (long)plVar20;
  plVar9[0x37] = 0x10000;
  plVar9[0xc] = (long)&PTR_LAB_044daa48;
  plVar9[0x38] = (long)plVar8;
  plVar9[0x39] = (long)plVar7;
  local_1e0 = lVar14;
  plStack_1d8 = (long *)lVar19;
  local_1d0 = lVar15;
  local_1c8 = (long *)lVar16;
  FUN_006efc7c(auStack_1c0,auStack_260);
  plVar20 = local_1a0;
  if (local_220 == (long *)0x0) {
    local_180 = (long *)0x0;
  }
  else if (local_220 == plVar13) {
    local_180 = plVar20;
    (**(code **)(local_240[0] + 0x30))(plVar13,plVar20);
  }
  else {
    local_180 = local_220;
    local_220 = (long *)0x0;
  }
  local_148 = local_1c8;
  local_150 = local_1d0;
  plStack_158 = plStack_1d8;
  local_160 = local_1e0;
  local_170 = local_210;
  local_168 = local_208;
  if (local_208 != (long *)0x0) {
    plVar12 = local_208 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_1e0 = 0;
  plStack_1d8 = (long *)0x0;
  local_1d0 = 0;
  local_1c8 = (long *)0x0;
  FUN_006efc7c(auStack_140,auStack_1c0);
  plVar12 = local_120;
  if (local_180 == (long *)0x0) {
    local_100 = (long *)0x0;
  }
  else if (local_180 == plVar20) {
    local_100 = plVar12;
    (**(code **)(local_1a0[0] + 0x30))(plVar20);
  }
  else {
    local_100 = local_180;
    local_180 = (long *)0x0;
  }
  local_c8 = local_148;
  local_d0 = local_150;
  plStack_d8 = plStack_158;
  local_e0 = (long *)local_160;
  local_f0 = local_170;
  local_e8 = local_168;
  if (local_168 != (long *)0x0) {
    plVar11 = local_168 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_160 = 0;
  plStack_158 = (long *)0x0;
  local_150 = 0;
  local_148 = (long *)0x0;
  FUN_006efc7c(auStack_c0,auStack_140);
  plVar11 = local_a0;
  if (local_100 == (long *)0x0) {
    local_80 = (long *)0x0;
  }
  else if (local_100 == plVar12) {
    local_80 = plVar11;
    (**(code **)(local_120[0] + 0x30))(plVar12,plVar11);
  }
  else {
    local_80 = local_100;
    local_100 = (long *)0x0;
  }
  plVar2 = plStack_d8;
  lVar19 = (long)local_e0;
  local_70 = local_f0;
  local_68 = local_e8;
  if (local_e8 != (long *)0x0) {
    plVar1 = local_e8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_e0 = (long *)0x0;
  plStack_d8 = (long *)0x0;
  plVar9[0x27] = (long)plVar2;
  plVar9[0x26] = lVar19;
  plVar9[0x29] = (long)local_c8;
  plVar9[0x28] = local_d0;
  local_d0 = 0;
  local_c8 = (long *)0x0;
  FUN_006efc7c(plVar9 + 0x2a,auStack_c0);
  plVar9[0x32] = 0;
  if (&local_e0 != plVar9 + 0x26) {
    if (local_80 != (long *)0x0) {
      if (local_80 == plVar11) {
        plVar9[0x32] = (long)(plVar9 + 0x2e);
        (**(code **)(local_a0[0] + 0x30))(plVar11);
        plVar9[0x34] = local_70;
        plVar9[0x35] = (long)local_68;
      }
      else {
        plVar9[0x32] = (long)local_80;
        local_80 = (long *)0x0;
        plVar9[0x34] = local_70;
        plVar9[0x35] = (long)local_68;
      }
      goto joined_r0x01ea01cc;
    }
    plVar9[0x32] = 0;
  }
  plVar9[0x34] = local_70;
  plVar9[0x35] = (long)local_68;
joined_r0x01ea01cc:
  if (local_68 != (long *)0x0) {
    plVar2 = local_68 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (local_68 != (long *)0x0) {
      plVar2 = local_68 + 1;
      do {
        lVar19 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (local_80 != (long *)0x0) {
    if (local_80 == plVar11) {
      pcVar18 = *(code **)(*local_80 + 0x10);
    }
    else {
      pcVar18 = *(code **)(*local_80 + 0x18);
      plVar11 = local_80;
    }
    (*pcVar18)(plVar11);
  }
  FUN_007231fc(auStack_c0);
  if (local_c8 != (long *)0x0) {
    plVar11 = local_c8 + 1;
    do {
      lVar19 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_c8 + 0x10))(local_c8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_d8 != (long *)0x0) {
    plVar11 = plStack_d8 + 1;
    do {
      lVar19 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_e8 != (long *)0x0) {
    plVar11 = local_e8 + 1;
    do {
      lVar19 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_e8 + 0x10))(local_e8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_100 != (long *)0x0) {
    if (local_100 == plVar12) {
      pcVar18 = *(code **)(*local_100 + 0x10);
    }
    else {
      pcVar18 = *(code **)(*local_100 + 0x18);
      plVar12 = local_100;
    }
    (*pcVar18)(plVar12);
  }
  FUN_007231fc(auStack_140);
  if (local_148 != (long *)0x0) {
    plVar12 = local_148 + 1;
    do {
      lVar19 = *plVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_148 + 0x10))(local_148);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_158 != (long *)0x0) {
    plVar12 = plStack_158 + 1;
    do {
      lVar19 = *plVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_168 != (long *)0x0) {
    plVar12 = local_168 + 1;
    do {
      lVar19 = *plVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_168 + 0x10))(local_168);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_180 != (long *)0x0) {
    if (local_180 == plVar20) {
      pcVar18 = *(code **)(*local_180 + 0x10);
    }
    else {
      pcVar18 = *(code **)(*local_180 + 0x18);
      plVar20 = local_180;
    }
    (*pcVar18)(plVar20);
  }
  FUN_007231fc(auStack_1c0);
  if (local_1c8 != (long *)0x0) {
    plVar20 = local_1c8 + 1;
    do {
      lVar19 = *plVar20;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_1c8 + 0x10))(local_1c8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_1d8 != (long *)0x0) {
    plVar20 = plStack_1d8 + 1;
    do {
      lVar19 = *plVar20;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
      std::__shared_weak_count::__release_weak();
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar5) {
      *plVar21 = *plVar21 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  local_e0 = plVar9 + 6;
  plStack_d8 = plVar9;
  (**(code **)*puVar17)(puVar17,&local_e0,param_5);
  if (plStack_d8 != (long *)0x0) {
    plVar20 = plStack_d8 + 1;
    do {
      lVar19 = *plVar20;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar8;
  param_1[1] = plVar7;
  do {
    lVar19 = *plVar21;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar5) {
      *plVar21 = lVar19 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar19 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__shared_weak_count::__release_weak();
  }
  if (local_208 != (long *)0x0) {
    plVar7 = local_208 + 1;
    do {
      lVar19 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_208 + 0x10))(local_208);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_220 != (long *)0x0) {
    if (local_220 == plVar13) {
      pcVar18 = *(code **)(*local_220 + 0x10);
    }
    else {
      pcVar18 = *(code **)(*local_220 + 0x18);
      plVar13 = local_220;
    }
    (*pcVar18)(plVar13);
  }
  FUN_007231fc(auStack_260);
  FUN_007231fc(auStack_200);
  return;
}


