/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0055516c; name: FUN_0055516c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0055516c(long *param_1,long *param_2)

{
  MutexType *pMVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  byte *pbVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  byte *pbVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 local_110;
  long *local_108;
  byte local_100;
  undefined7 uStack_ff;
  undefined8 local_f0;
  long *plStack_e8;
  undefined8 local_e0;
  long *local_d8;
  byte local_d0;
  undefined7 uStack_cf;
  undefined8 local_c0;
  long *plStack_b8;
  byte local_b0;
  undefined7 uStack_af;
  undefined8 local_a0;
  long *plStack_98;
  byte local_90;
  undefined7 uStack_8f;
  undefined8 local_80;
  long *plStack_78;
  long local_70;
  long *local_68;
  
  pMVar1 = (MutexType *)(param_2 + 8);
  nn::os::LockMutex(pMVar1);
  if (param_2[7] == 0) {
    lVar18 = param_2[0x36];
    *param_1 = param_2[0x35];
    param_1[1] = lVar18;
    if (lVar18 != 0) {
      plVar11 = (long *)(lVar18 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  param_2[7] = 0;
  nn::os::UnlockMutex(pMVar1);
  FUN_01f6f208(param_2 + 0x20);
  FUN_01f6f208(param_2 + 0x1d);
  (**(code **)(*param_2 + 0x30))(param_2,0);
  puVar10 = (undefined8 *)(**(code **)(*param_2 + 0xc0))(param_2);
  FUN_0053f58c(*puVar10,param_2 + 0x35);
  plVar11 = (long *)(**(code **)(*param_2 + 0xc0))(param_2);
  lVar18 = *plVar11;
  uVar12 = FUN_00560c54();
  FUN_01f6ef54(&local_110,lVar18 + 0x10,uVar12);
  pbVar13 = (byte *)(**(code **)(*param_2 + 0x18))(param_2);
  pbVar17 = *(byte **)(pbVar13 + 0x10);
  if ((*pbVar13 & 1) == 0) {
    pbVar17 = pbVar13 + 1;
  }
  FUN_01f6fa0c(&local_e0,&local_110,pbVar17);
  FUN_00539fa8(&local_70,&local_e0);
  if ((local_90 & 1) != 0) {
    (**(code **)(*plStack_78 + 0x18))
              (plStack_78,local_80,CONCAT71(uStack_8f,local_90) & 0xfffffffffffffffe,1);
  }
  if ((local_b0 & 1) != 0) {
    (**(code **)(*plStack_98 + 0x18))
              (plStack_98,local_a0,CONCAT71(uStack_af,local_b0) & 0xfffffffffffffffe,1);
  }
  if ((local_d0 & 1) != 0) {
    (**(code **)(*plStack_b8 + 0x18))
              (plStack_b8,local_c0,CONCAT71(uStack_cf,local_d0) & 0xfffffffffffffffe,1);
  }
  if (local_d8 != (long *)0x0) {
    plVar11 = local_d8 + 1;
    do {
      lVar18 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*local_d8 + 0x10))(local_d8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((local_100 & 1) != 0) {
    (**(code **)(*plStack_e8 + 0x18))
              (plStack_e8,local_f0,CONCAT71(uStack_ff,local_100) & 0xfffffffffffffffe,1);
  }
  if (local_108 != (long *)0x0) {
    plVar11 = local_108 + 1;
    do {
      lVar18 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*local_108 + 0x10))(local_108);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar9 = local_68;
  lVar8 = local_70;
  local_70 = 0;
  local_68 = (long *)0x0;
  lVar18 = param_2[0x31];
  lVar3 = param_2[0x32];
  lVar2 = param_2[0x33];
  lVar4 = param_2[0x34];
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  plVar19 = *(long **)(param_2[3] + 0x240);
  puVar10 = *(undefined8 **)(param_2[3] + 0x4b8);
  plVar14 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x78,8);
  plVar14[2] = 0;
  plVar20 = plVar14 + 1;
  *plVar20 = 0;
  puVar7 = PTR_DAT_047cc0d8;
  plVar14[3] = (long)plVar19;
  plVar11 = plVar14 + 4;
  *plVar14 = (long)(puVar7 + 0x10);
  FUN_006c4254(plVar11);
  plVar14[4] = (long)(PTR_DAT_047cc0e0 + 0x10);
  nn::os::InitializeEvent(plVar14 + 6,0,0);
  plVar14[4] = (long)(PTR_DAT_047cc0e8 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar14 + 0xb),false,0);
  if (plVar14 != (long *)0x0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *plVar20 = *plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar15 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x170,8);
  plVar21 = plVar15 + 1;
  *plVar21 = 0;
  plVar15[2] = 0;
  plVar15[3] = (long)plVar19;
  *plVar15 = (long)&PTR_FUN_044c97e0;
  FUN_006c5398(plVar15 + 4);
  plVar15[4] = (long)&PTR_LAB_044c9818;
  lVar16 = (**(code **)(*plVar19 + 0x10))(plVar19,0x10000,0x10);
  if (lVar16 == 0) {
    local_e0 = (long *)CONCAT44(local_e0._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_e0,"");
  }
  FUN_006c4058(plVar15 + 10,plVar11,0,lVar16,0x10000,1);
  plVar15[10] = (long)&PTR_LAB_044c9848;
  plVar15[0x29] = (long)plVar19;
  plVar15[0x2a] = 0x10000;
  *(undefined1 *)((long)plVar15 + 0x169) = 1;
  plVar15[0x2b] = (long)plVar11;
  plVar15[0x2c] = (long)plVar14;
  plVar15[0x23] = lVar8;
  plVar15[0x24] = (long)plVar9;
  plVar15[0x25] = lVar18;
  plVar15[0x26] = lVar3;
  plVar15[0x27] = lVar2;
  plVar15[0x28] = lVar4;
  local_110 = 0;
  local_108 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = *plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_e0 = plVar15 + 4;
  local_d8 = plVar15;
  (**(code **)*puVar10)(puVar10,&local_e0,&local_110);
  if (local_d8 != (long *)0x0) {
    plVar11 = local_d8 + 1;
    do {
      lVar18 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*local_d8 + 0x10))(local_d8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_108 != (long *)0x0) {
    plVar11 = local_108 + 1;
    do {
      lVar18 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*local_108 + 0x10))(local_108);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar15 != (long *)0x0) {
    do {
      lVar18 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar14 != (long *)0x0) {
    do {
      lVar18 = *plVar20;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *plVar20 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar18 = param_2[0x36];
  *param_1 = param_2[0x35];
  param_1[1] = lVar18;
  if (lVar18 != 0) {
    plVar11 = (long *)(lVar18 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (local_68 != (long *)0x0) {
    plVar11 = local_68 + 1;
    do {
      lVar18 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


