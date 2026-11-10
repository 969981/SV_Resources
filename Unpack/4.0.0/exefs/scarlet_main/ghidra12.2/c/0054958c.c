/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0054958c; name: FUN_0054958c
 */


void FUN_0054958c(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  MutexType *pMVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  undefined1 *local_188;
  undefined8 local_180;
  long *plStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 local_150;
  long *local_140;
  undefined1 local_138;
  undefined1 local_130 [8];
  long *local_128;
  long *local_120;
  MutexType aMStack_118 [32];
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  undefined8 *****pppppuStack_c8;
  undefined8 *****local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  long **local_70;
  undefined8 uStack_68;
  
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = (long *)FUN_01cf7e20();
  nn::os::InitializeMutex(aMStack_118,false,0);
  local_128 = (long *)0x0;
  local_120 = (long *)0x0;
  local_130[0] = 0;
  if ((param_1[1] == 0) ||
     (plVar11 = (long *)std::__shared_weak_count::lock(), plVar11 == (long *)0x0)) {
    bVar6 = false;
  }
  else {
    if ((*param_1 == 0) ||
       (lVar15 = *(long *)(*(long *)(*param_1 + 8) + 0x48), *(int *)(lVar15 + 0x200) != 3)) {
      bVar6 = false;
    }
    else {
      plVar21 = *(long **)(lVar15 + 0x240);
      puVar19 = *(undefined8 **)(lVar15 + 0x850);
      plVar12 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x78,8);
      plVar12[2] = 0;
      plVar13 = plVar12 + 1;
      *plVar13 = 0;
      puVar9 = PTR_DAT_047cc0d8;
      plVar12[3] = (long)plVar21;
      plVar1 = plVar12 + 4;
      *plVar12 = (long)(puVar9 + 0x10);
      FUN_006c4254(plVar1);
      plVar12[4] = (long)(PTR_DAT_047cc0e0 + 0x10);
      nn::os::InitializeEvent(plVar12 + 6,0,0);
      plVar12[4] = (long)(PTR_DAT_047cc0e8 + 0x10);
      nn::os::InitializeMutex((MutexType *)(plVar12 + 0xb),false,0);
      if (plVar12 != (long *)0x0) {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = *plVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar13 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x160,8);
      plVar22 = plVar13 + 1;
      *plVar22 = 0;
      plVar13[2] = 0;
      plVar13[3] = (long)plVar21;
      *plVar13 = (long)&PTR_LAB_044c8ae0;
      FUN_006c5398(plVar13 + 4);
      plVar13[4] = (long)&PTR_LAB_044c8b18;
      lVar15 = (**(code **)(*plVar21 + 0x10))(plVar21,0x10000,0x10);
      if (lVar15 == 0) {
        local_d8 = (long *)CONCAT44(local_d8._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0,(Result *)&local_d8,"");
      }
      FUN_006c4058(plVar13 + 10,plVar1,0,lVar15,0x10000,1);
      *(undefined1 *)((long)plVar13 + 0x159) = 1;
      plVar13[10] = (long)&PTR_LAB_044c8b48;
      plVar13[0x23] = (long)param_1;
      plVar13[0x24] = (long)&local_f8;
      plVar13[0x27] = (long)plVar21;
      plVar13[0x28] = 0x10000;
      plVar13[0x29] = (long)plVar1;
      plVar13[0x2a] = (long)plVar12;
      plVar13[0x25] = (long)local_130;
      plVar13[0x26] = (long)aMStack_118;
      local_180 = 0;
      plStack_178 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar6) {
            *plVar22 = *plVar22 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      local_d8 = plVar13 + 4;
      local_d0 = plVar13;
      (**(code **)*puVar19)(puVar19,&local_d8,&local_180);
      if (local_d0 != (long *)0x0) {
        plVar21 = local_d0 + 1;
        do {
          lVar15 = *plVar21;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar6) {
            *plVar21 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_178 != (long *)0x0) {
        plVar21 = plStack_178 + 1;
        do {
          lVar15 = *plVar21;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar6) {
            *plVar21 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_178 + 0x10))(plStack_178);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plVar13 != (long *)0x0) {
        do {
          lVar15 = *plVar22;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar6) {
            *plVar22 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar13 = local_120;
      local_128 = plVar1;
      if (local_120 != (long *)0x0) {
        plVar1 = local_120 + 1;
        do {
          lVar15 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          lVar15 = *local_120;
          local_120 = plVar12;
          (**(code **)(lVar15 + 0x10))(plVar13);
          std::__shared_weak_count::__release_weak();
          plVar12 = local_120;
        }
      }
      local_120 = plVar12;
      bVar6 = true;
    }
    plVar1 = plVar11 + 1;
    do {
      lVar15 = *plVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_140 = param_1 + 6;
  local_138 = 1;
  local_b0 = 0;
  pppppuStack_c8 = (undefined8 *****)0x0;
  local_d0 = (long *)0x0;
  uStack_b8 = 0;
  local_c0 = (undefined8 *****)0x0;
  local_d8 = local_140;
                    /* try { // try from 005498e4 to 005498ef has its CatchHandler @ 00549d00 */
  FUN_0057444c(&pppppuStack_c8,0);
  local_a8 = 1;
  FUN_00549d4c(&local_d8);
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  plStack_178 = (long *)0x0;
  local_180 = 0;
                    /* try { // try from 00549910 to 0054991b has its CatchHandler @ 00549cfc */
  FUN_0057444c(&local_170,0);
  local_150 = 0;
  local_180 = 0;
  while (local_d8 != (long *)0x0) {
    while (bVar6) {
      while (nn::os::LockMutex(aMStack_118), uVar2 = local_f0,
            (ulong)param_1[0x43] <= (ulong)((long)(local_f0 - local_f8) >> 5)) {
        nn::os::UnlockMutex(aMStack_118);
        local_188 = &LAB_00989680;
        FUN_00248820(&local_188);
      }
      if (local_f0 < local_e8) {
        FUN_005508ec(local_f0,&pppppuStack_c8);
        local_f0 = uVar2 + 0x20;
      }
      else {
        lVar15 = (long)(local_f0 - local_f8) >> 5;
        uVar2 = lVar15 + 1;
        if (uVar2 >> 0x3b != 0) {
                    /* try { // try from 00549c88 to 00549c8f has its CatchHandler @ 00549cb4 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        uVar16 = (long)(local_e8 - local_f8) >> 4;
        if (uVar2 <= uVar16) {
          uVar2 = uVar16;
        }
        if (0x3fffffffffffffe < (ulong)((long)(local_e8 - local_f8) >> 5)) {
          uVar2 = 0x7ffffffffffffff;
        }
        if (uVar2 == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = (**(code **)(*local_e0 + 0x10))(local_e0,uVar2 << 5,8);
        }
        uVar16 = lVar14 + lVar15 * 0x20;
        FUN_005508ec(uVar16,&pppppuStack_c8);
        uVar10 = local_f8;
        uVar18 = uVar16;
        uVar7 = local_f8;
        uVar17 = local_f8;
        uVar20 = local_f0;
        uVar8 = local_e8;
        while (local_f8 = uVar18, local_e8 = lVar14 + uVar2 * 0x20, uVar18 = uVar16 + 0x20,
              uVar20 != uVar10) {
          uVar18 = local_f8 - 0x20;
          uVar20 = uVar20 - 0x20;
          local_f8 = uVar7;
          local_e8 = uVar8;
          FUN_005508ec(uVar18,uVar20);
          uVar7 = local_f8;
          uVar17 = local_f0;
          uVar8 = local_e8;
        }
        while (local_f0 = uVar18, uVar17 != uVar7) {
          uVar17 = uVar17 - 0x20;
          FUN_005744a0(uVar17);
          uVar18 = local_f0;
        }
        if (uVar7 != 0) {
          (**(code **)(*local_e0 + 0x18))(local_e0,uVar7,uVar8 - uVar7,8);
        }
      }
      nn::os::UnlockMutex(aMStack_118);
      FUN_00549d4c(&local_d8);
      if (local_d8 == (long *)0x0) goto LAB_00549ab4;
    }
    FUN_00548560(param_1,&pppppuStack_c8);
    FUN_00549d4c(&local_d8);
  }
LAB_00549ab4:
  FUN_005744a0(&local_170);
  FUN_005744a0(&pppppuStack_c8);
  if ((char)local_140[10] == '\0') {
    *(undefined1 *)(local_140 + 10) = 1;
                    /* try { // try from 00549ae8 to 00549aef has its CatchHandler @ 00549cf8 */
    (**(code **)(**(long **)(local_140[6] + 0x20) + 0x40))(*(long **)(local_140[6] + 0x20),0);
  }
  local_130[0] = 1;
  if (local_128 != (long *)0x0) {
    plVar11 = (long *)(PTR_DAT_047cbb30 + 0x10);
    pppppuStack_c8 = &pppppuStack_c8;
    local_70 = (long **)0x0;
    uStack_68 = 0;
    local_d0 = (long *)(PTR_DAT_047cbb38 + 0x10);
    local_d8 = plVar11;
    local_c0 = pppppuStack_c8;
    (**(code **)(*local_128 + 0x10))(local_128,&local_b0);
    local_70 = &local_d0;
    thunk_FUN_006c4e40(&local_d8);
    local_d8 = plVar11;
    FUN_006c4274(&local_d0);
  }
  pMVar3 = (MutexType *)(param_1 + 0x2d);
  nn::os::LockMutex(pMVar3);
  FUN_01ea06c8(param_1 + 0x26);
  *(undefined1 *)(param_1 + 0x31) = 1;
  nn::os::SignalEvent((EventType *)(param_1 + 0x28));
  plVar11 = (long *)param_1[0x25];
  if (plVar11 == (long *)0x0) {
    nn::os::UnlockMutex(pMVar3);
  }
  else {
    plVar1 = plVar11 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    nn::os::UnlockMutex(pMVar3);
    do {
      lVar15 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_120 != (long *)0x0) {
    plVar11 = local_120 + 1;
    do {
      lVar15 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*local_120 + 0x10))(local_120);
      std::__shared_weak_count::__release_weak();
    }
  }
  nn::os::FinalizeMutex(aMStack_118);
  uVar16 = local_f8;
  uVar2 = local_f0;
  if (local_f8 != 0) {
    while (uVar2 != uVar16) {
      FUN_005744a0(uVar2 - 0x20);
      uVar2 = uVar2 - 0x20;
    }
    local_f0 = uVar16;
    (**(code **)(*local_e0 + 0x18))(local_e0,local_f8,local_e8 - local_f8,8);
  }
  return;
}


