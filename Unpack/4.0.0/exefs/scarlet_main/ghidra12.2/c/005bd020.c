/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005bd020; name: FUN_005bd020
 */


/* WARNING: Removing unreachable block (ram,0x005bd728) */
/* WARNING: Removing unreachable block (ram,0x005bd72c) */
/* WARNING: Removing unreachable block (ram,0x005bd734) */
/* WARNING: Removing unreachable block (ram,0x005bd73c) */
/* WARNING: Removing unreachable block (ram,0x005bd740) */

void FUN_005bd020(undefined8 *param_1,long *param_2,long param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined1 auStack_380 [112];
  undefined1 local_310;
  long local_308;
  long *plStack_300;
  long local_2f8;
  long *local_2f0;
  undefined1 auStack_2e0 [112];
  long *local_270;
  long *plStack_268;
  undefined1 auStack_260 [112];
  undefined1 local_1f0;
  long local_1e8;
  long *plStack_1e0;
  long local_1d8;
  long *local_1d0;
  long *local_1c0;
  long *plStack_1b8;
  undefined1 auStack_1b0 [112];
  undefined1 local_140;
  long local_138;
  long *plStack_130;
  long local_128;
  long *local_120;
  long *local_110;
  long *plStack_108;
  undefined1 auStack_100 [112];
  undefined1 local_90;
  long local_88;
  long *plStack_80;
  long local_78;
  long *local_70;
  
  FUN_005bb474(auStack_2e0,param_3,param_4);
  plVar2 = (long *)*param_2;
  lVar9 = param_2[1];
  lVar10 = *(long *)(plVar2[1] + 0x48);
  if (lVar9 != 0) {
    plVar1 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_005d5f74(auStack_380,auStack_2e0);
  local_310 = *(undefined1 *)(param_3 + 0xa8);
  local_308 = *(long *)(param_3 + 0xb0);
  plStack_300 = *(long **)(param_3 + 0xb8);
  if (plStack_300 != (long *)0x0) {
    plVar1 = (long *)((long)plStack_300 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_2f8 = *param_5;
  local_2f0 = (long *)param_5[1];
  if (local_2f0 != (long *)0x0) {
    plVar1 = local_2f0 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar12 = *(long **)(lVar10 + 0x240);
  puVar8 = *(undefined8 **)(lVar10 + 0x4b8);
  plVar6 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0xe0,8);
  plVar6[2] = 0;
  plVar7 = plVar6 + 1;
  *plVar7 = 0;
  puVar5 = PTR_DAT_047cdec0;
  plVar6[3] = (long)plVar12;
  plVar1 = plVar6 + 4;
  *plVar6 = (long)(puVar5 + 0x10);
  FUN_006c4254(plVar1);
  plVar6[4] = (long)(PTR_DAT_047cdec8 + 0x10);
  nn::os::InitializeEvent(plVar6 + 6,0,0);
  plVar6[4] = (long)(PTR_DAT_047cded0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar6 + 0xb),false,0);
  *(undefined1 *)(plVar6 + 0x1b) = 0;
  if (plVar6 != (long *)0x0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x1e8,8);
  plVar7[2] = 0;
  plVar11 = plVar7 + 1;
  *plVar11 = 0;
  *plVar7 = (long)&PTR_LAB_044ce698;
  plVar7[3] = (long)plVar12;
  FUN_006c5398();
  plVar7[4] = (long)&PTR_LAB_044ce6d0;
  lVar10 = (**(code **)(*plVar12 + 0x10))(plVar12,0x10000,0x10);
  if (lVar10 == 0) {
    local_110 = (long *)CONCAT44(local_110._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_110,"");
  }
  FUN_006c4058(plVar7 + 10,plVar1,0,lVar10,0x10000,1);
  plVar7[10] = (long)&PTR_LAB_044ce700;
  plVar7[0x38] = (long)plVar12;
  plVar7[0x39] = 0x10000;
  *(undefined1 *)((long)plVar7 + 0x1e1) = 1;
  plVar7[0x3a] = (long)plVar1;
  plVar7[0x3b] = (long)plVar6;
  local_270 = plVar2;
  plStack_268 = (long *)lVar9;
  FUN_005d5f74(auStack_260,auStack_380);
  plStack_1b8 = plStack_268;
  local_1c0 = local_270;
  plStack_1e0 = plStack_300;
  local_1e8 = local_308;
  local_1f0 = local_310;
  local_308 = 0;
  plStack_300 = (long *)0x0;
  local_1d8 = local_2f8;
  local_1d0 = local_2f0;
  if (local_2f0 != (long *)0x0) {
    plVar2 = local_2f0 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_270 = (long *)0x0;
  plStack_268 = (long *)0x0;
  FUN_005d5f74(auStack_1b0,auStack_260);
  plStack_130 = plStack_1e0;
  local_138 = local_1e8;
  local_140 = local_1f0;
  local_1e8 = 0;
  plStack_1e0 = (long *)0x0;
  local_128 = local_1d8;
  local_120 = local_1d0;
  if (local_1d0 != (long *)0x0) {
    plVar2 = local_1d0 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_108 = plStack_1b8;
  local_110 = local_1c0;
  local_1c0 = (long *)0x0;
  plStack_1b8 = (long *)0x0;
  FUN_005d5f74(auStack_100,auStack_1b0);
  plStack_80 = plStack_130;
  local_88 = local_138;
  local_90 = local_140;
  local_138 = 0;
  plStack_130 = (long *)0x0;
  local_78 = local_128;
  local_70 = local_120;
  if (local_120 != (long *)0x0) {
    plVar2 = local_120 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7[0x24] = (long)plStack_108;
  plVar7[0x23] = (long)local_110;
  plStack_108 = (long *)0x0;
  local_110 = (long *)0x0;
  FUN_005d5f74(plVar7 + 0x25,auStack_100);
  *(undefined1 *)(plVar7 + 0x33) = local_90;
  plVar7[0x35] = (long)plStack_80;
  plVar7[0x34] = local_88;
  local_88 = 0;
  plStack_80 = (long *)0x0;
  plVar7[0x36] = local_78;
  plVar7[0x37] = (long)local_70;
  if (local_70 != (long *)0x0) {
    plVar2 = local_70 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (local_70 != (long *)0x0) {
      plVar2 = local_70 + 1;
      do {
        lVar9 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (plStack_80 != (long *)0x0) {
    plVar2 = plStack_80 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_005fd8cc(auStack_100);
  if (plStack_108 != (long *)0x0) {
    plVar2 = plStack_108 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_120 != (long *)0x0) {
    plVar2 = local_120 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_120 + 0x10))(local_120);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_130 != (long *)0x0) {
    plVar2 = plStack_130 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_130 + 0x10))(plStack_130);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_005fd8cc(auStack_1b0);
  if (plStack_1b8 != (long *)0x0) {
    plVar2 = plStack_1b8 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1d0 != (long *)0x0) {
    plVar2 = local_1d0 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_1d0 + 0x10))(local_1d0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_1e0 != (long *)0x0) {
    plVar2 = plStack_1e0 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_005fd8cc(auStack_260);
  if (plStack_268 != (long *)0x0) {
    plVar2 = plStack_268 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      std::__shared_weak_count::__release_weak();
    }
  }
  plStack_1b8 = (long *)0x0;
  local_1c0 = (long *)0x0;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = *plVar11 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_110 = plVar7 + 4;
  plStack_108 = plVar7;
  (**(code **)*puVar8)(puVar8,&local_110,&local_1c0);
  if (plStack_108 != (long *)0x0) {
    plVar2 = plStack_108 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_1b8 != (long *)0x0) {
    plVar2 = plStack_1b8 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar6;
  do {
    lVar9 = *plVar11;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
  }
  if (local_2f0 != (long *)0x0) {
    plVar2 = local_2f0 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_2f0 + 0x10))(local_2f0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_300 != (long *)0x0) {
    plVar2 = plStack_300 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_300 + 0x10))(plStack_300);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_005fd8cc(auStack_380);
  FUN_005fd8cc(auStack_2e0);
  return;
}


