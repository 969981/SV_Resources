/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005bc4c0; name: FUN_005bc4c0
 */


/* WARNING: Removing unreachable block (ram,0x005bcd1c) */
/* WARNING: Removing unreachable block (ram,0x005bcd20) */
/* WARNING: Removing unreachable block (ram,0x005bcd28) */
/* WARNING: Removing unreachable block (ram,0x005bcd30) */
/* WARNING: Removing unreachable block (ram,0x005bcd34) */

void FUN_005bc4c0(undefined8 *param_1,long *param_2,long param_3,undefined8 param_4,long *param_5,
                 long *param_6)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auStack_2a0 [64];
  undefined1 local_260;
  long local_258;
  long *plStack_250;
  long local_248;
  long *local_240;
  undefined1 auStack_238 [64];
  long *local_1f8;
  long *local_1f0;
  long local_1e8;
  long *plStack_1e0;
  undefined1 auStack_1d8 [64];
  undefined1 local_198;
  long local_190;
  long *plStack_188;
  long local_180;
  long *local_178;
  long *local_170;
  long *local_168;
  long local_160;
  long *plStack_158;
  undefined1 auStack_150 [64];
  undefined1 local_110;
  long local_108;
  long *plStack_100;
  long local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long local_d8;
  long *plStack_d0;
  undefined1 auStack_c8 [64];
  undefined1 local_88;
  long local_80;
  long *plStack_78;
  long local_70;
  long *local_68;
  
  FUN_005ba598(auStack_238,param_3,param_4);
  lVar9 = *param_2;
  lVar12 = *(long *)(*(long *)(lVar9 + 8) + 0x48);
  plVar2 = (long *)*param_6;
  plVar3 = (long *)param_6[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar9 = *param_2;
  }
  lVar10 = param_2[1];
  if (lVar10 != 0) {
    plVar1 = (long *)(lVar10 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_005ca330(auStack_2a0,auStack_238);
  local_260 = *(undefined1 *)(param_3 + 0xb0);
  local_258 = *(long *)(param_3 + 0xb8);
  plStack_250 = *(long **)(param_3 + 0xc0);
  if (plStack_250 != (long *)0x0) {
    plVar1 = (long *)((long)plStack_250 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_248 = *param_5;
  local_240 = (long *)param_5[1];
  if (local_240 != (long *)0x0) {
    plVar1 = local_240 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar14 = *(long **)(lVar12 + 0x240);
  puVar11 = *(undefined8 **)(lVar12 + 0x4b8);
  plVar7 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0xe0,8);
  plVar7[2] = 0;
  plVar8 = plVar7 + 1;
  *plVar8 = 0;
  puVar6 = PTR_DAT_047cdec0;
  plVar7[3] = (long)plVar14;
  plVar1 = plVar7 + 4;
  *plVar7 = (long)(puVar6 + 0x10);
  FUN_006c4254(plVar1);
  plVar7[4] = (long)(PTR_DAT_047cdec8 + 0x10);
  nn::os::InitializeEvent(plVar7 + 6,0,0);
  plVar7[4] = (long)(PTR_DAT_047cded0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar7 + 0xb),false,0);
  *(undefined1 *)(plVar7 + 0x1b) = 0;
  if (plVar7 != (long *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar8 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x1c8,8);
  plVar8[2] = 0;
  plVar13 = plVar8 + 1;
  *plVar13 = 0;
  *plVar8 = (long)&PTR_LAB_044cdc18;
  plVar8[3] = (long)plVar14;
  FUN_006c5398();
  plVar8[4] = (long)&PTR_LAB_044cdc50;
  lVar12 = (**(code **)(*plVar14 + 0x10))(plVar14,0x10000,0x10);
  if (lVar12 == 0) {
    local_e8 = (long *)CONCAT44(local_e8._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_e8,"");
  }
  FUN_006c4058(plVar8 + 10,plVar1,0,lVar12,0x10000,1);
  plVar8[10] = (long)&PTR_LAB_044cdc80;
  plVar8[0x34] = (long)plVar14;
  plVar8[0x35] = 0x10000;
  *(undefined1 *)((long)plVar8 + 0x1c1) = 1;
  plVar8[0x36] = (long)plVar1;
  plVar8[0x37] = (long)plVar7;
  if (plVar3 != (long *)0x0) {
    plVar14 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = *plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_1f8 = plVar2;
  local_1f0 = plVar3;
  local_1e8 = lVar9;
  plStack_1e0 = (long *)lVar10;
  FUN_005ca330(auStack_1d8,auStack_2a0);
  plStack_158 = plStack_1e0;
  local_160 = local_1e8;
  plStack_188 = plStack_250;
  local_190 = local_258;
  local_198 = local_260;
  local_258 = 0;
  plStack_250 = (long *)0x0;
  local_180 = local_248;
  local_178 = local_240;
  if (local_240 != (long *)0x0) {
    plVar2 = local_240 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_170 = local_1f8;
  local_168 = local_1f0;
  if (local_1f0 != (long *)0x0) {
    plVar2 = local_1f0 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_1e8 = 0;
  plStack_1e0 = (long *)0x0;
  FUN_005ca330(auStack_150,auStack_1d8);
  plStack_d0 = plStack_158;
  local_d8 = local_160;
  plStack_100 = plStack_188;
  local_108 = local_190;
  local_110 = local_198;
  local_190 = 0;
  plStack_188 = (long *)0x0;
  local_f8 = local_180;
  local_f0 = local_178;
  if (local_178 != (long *)0x0) {
    plVar2 = local_178 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_e8 = local_170;
  local_e0 = local_168;
  if (local_168 != (long *)0x0) {
    plVar2 = local_168 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_160 = 0;
  plStack_158 = (long *)0x0;
  FUN_005ca330(auStack_c8,auStack_150);
  plStack_78 = plStack_100;
  local_80 = local_108;
  local_88 = local_110;
  local_108 = 0;
  plStack_100 = (long *)0x0;
  local_70 = local_f8;
  local_68 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar2 = local_f0 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar8[0x23] = (long)local_e8;
  plVar8[0x24] = (long)local_e0;
  if (local_e0 != (long *)0x0) {
    plVar2 = local_e0 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar8[0x26] = (long)plStack_d0;
  plVar8[0x25] = local_d8;
  local_d8 = 0;
  plStack_d0 = (long *)0x0;
  FUN_005ca330(plVar8 + 0x27,auStack_c8);
  *(undefined1 *)(plVar8 + 0x2f) = local_88;
  plVar8[0x31] = (long)plStack_78;
  plVar8[0x30] = local_80;
  local_80 = 0;
  plStack_78 = (long *)0x0;
  plVar8[0x32] = local_70;
  plVar8[0x33] = (long)local_68;
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
        lVar9 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar2 = plStack_78 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_005f9344(auStack_c8);
  if (plStack_d0 != (long *)0x0) {
    plVar2 = plStack_d0 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_e0 != (long *)0x0) {
    plVar2 = local_e0 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_e0 + 0x10))(local_e0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_f0 != (long *)0x0) {
    plVar2 = local_f0 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_f0 + 0x10))(local_f0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_100 != (long *)0x0) {
    plVar2 = plStack_100 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_100 + 0x10))(plStack_100);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_005f9344(auStack_150);
  if (plStack_158 != (long *)0x0) {
    plVar2 = plStack_158 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_168 != (long *)0x0) {
    plVar2 = local_168 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_168 + 0x10))(local_168);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_178 != (long *)0x0) {
    plVar2 = local_178 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_178 + 0x10))(local_178);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_188 != (long *)0x0) {
    plVar2 = plStack_188 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_005f9344(auStack_1d8);
  if (plStack_1e0 != (long *)0x0) {
    plVar2 = plStack_1e0 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1f0 != (long *)0x0) {
    plVar2 = local_1f0 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_1f0 + 0x10))(local_1f0);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_170 = (long *)0x0;
  local_168 = (long *)0x0;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *plVar13 = *plVar13 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  local_e8 = plVar8 + 4;
  local_e0 = plVar8;
  (**(code **)*puVar11)(puVar11,&local_e8,&local_170);
  if (local_e0 != (long *)0x0) {
    plVar2 = local_e0 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_e0 + 0x10))(local_e0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_168 != (long *)0x0) {
    plVar2 = local_168 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_168 + 0x10))(local_168);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar7;
  do {
    lVar9 = *plVar13;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *plVar13 = lVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__shared_weak_count::__release_weak();
  }
  if (local_240 != (long *)0x0) {
    plVar2 = local_240 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_240 + 0x10))(local_240);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_250 != (long *)0x0) {
    plVar2 = plStack_250 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_250 + 0x10))(plStack_250);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_005f9344(auStack_2a0);
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_005f9344(auStack_238);
  return;
}


