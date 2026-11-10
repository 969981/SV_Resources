/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00253b78; name: FUN_00253b78
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00253b78(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long local_80;
  long *local_78;
  long *local_70;
  long *plStack_68;
  char *local_60;
  long *local_58;
  long *local_48;
  long *local_40;
  MutexType *local_38;
  char *local_28;
  
  lVar8 = FUN_00248fac();
  lVar11 = *param_2;
  local_78 = (long *)param_2[1];
  if (local_78 != (long *)0x0) {
    plVar10 = local_78 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_28 = "nn::npln::NetworkAvailabilityWatcher";
  local_38 = (MutexType *)(lVar8 + 0x20);
  local_80 = lVar11;
  nn::os::LockMutex(local_38);
  local_48 = (long *)0x0;
  local_40 = (long *)0x0;
  local_58 = (long *)FUN_01cf7e20();
  local_60 = (char *)(**(code **)(*local_58 + 0x10))(local_58,0x30,1);
  uVar7 = s_nn__npln__NetworkAvailabilityWat_03c0105a._24_8_;
  uVar6 = s_nn__npln__NetworkAvailabilityWat_03c0105a._16_8_;
  uVar5 = s_nn__npln__NetworkAvailabilityWat_03c0105a._8_8_;
  uVar4 = s_nn__npln__NetworkAvailabilityWat_03c0105a._0_8_;
  plStack_68 = _UNK_03cab078;
  local_70 = _DAT_03cab070;
  local_60[0x20] = 'c';
  local_60[0x21] = 'h';
  local_60[0x22] = 'e';
  local_60[0x23] = 'r';
  local_60[0x24] = '\0';
  *(undefined8 *)(local_60 + 8) = uVar5;
  *(undefined8 *)local_60 = uVar4;
  *(undefined8 *)(local_60 + 0x18) = uVar7;
  *(undefined8 *)(local_60 + 0x10) = uVar6;
                    /* try { // try from 00253c18 to 00253c23 has its CatchHandler @ 00253e6c */
  lVar9 = FUN_0024e64c(lVar8,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    (**(code **)(*local_58 + 0x18))(local_58,local_60,(ulong)local_70 & 0xfffffffffffffffe,1);
  }
  if (lVar8 + 8 == lVar9) {
    plVar13 = *(long **)(lVar11 + 0x238);
    plVar10 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x78,8);
    puVar1 = PTR_DAT_047cc1b8 + 0x10;
    plVar10[2] = 0;
    plVar10[3] = (long)plVar13;
    *plVar10 = (long)puVar1;
    plVar10[1] = 0;
    FUN_00253448(plVar10 + 4,&local_80);
                    /* try { // try from 00253ce0 to 00253cef has its CatchHandler @ 00253e2c */
    local_70 = plVar10 + 4;
    plStack_68 = plVar10;
    FUN_002541f0(lVar8,&local_28,&local_70);
    plVar10 = local_40;
    if (plStack_68 != (long *)0x0) {
      plVar13 = plStack_68 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = *plVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_48 = local_70;
    local_40 = plStack_68;
    if (plVar10 != (long *)0x0) {
      plVar13 = plVar10 + 1;
      do {
        lVar11 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar10 = local_40;
    if (plStack_68 == (long *)0x0) goto LAB_00253d80;
    plVar13 = plStack_68 + 1;
    do {
      lVar11 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar12 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
    local_48 = *(long **)(lVar9 + 0x40);
    plVar10 = *(long **)(lVar9 + 0x48);
    if (plVar10 != (long *)0x0) {
      plVar13 = plVar10 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = *plVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (local_40 == (long *)0x0) goto LAB_00253d80;
    plVar13 = local_40 + 1;
    do {
      lVar11 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar12 = local_40;
    } while (cVar2 != '\0');
  }
  local_40 = plVar10;
  plVar10 = local_40;
  if (lVar11 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    std::__shared_weak_count::__release_weak();
    plVar10 = local_40;
  }
LAB_00253d80:
  local_40 = plVar10;
  *param_1 = local_48;
  param_1[1] = local_40;
  if (local_40 != (long *)0x0) {
    plVar10 = local_40 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (local_40 != (long *)0x0) {
      plVar10 = local_40 + 1;
      do {
        lVar11 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  nn::os::UnlockMutex(local_38);
  if (local_78 != (long *)0x0) {
    plVar10 = local_78 + 1;
    do {
      lVar11 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*local_78 + 0x10))(local_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


