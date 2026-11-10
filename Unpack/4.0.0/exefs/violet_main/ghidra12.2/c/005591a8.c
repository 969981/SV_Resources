/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005591a8; name: FUN_005591a8
 */


void FUN_005591a8(long *param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_30 [8];
  long *local_28;
  
  *param_1 = (long)(PTR_DAT_047cdfc8 + 0x10);
  FUN_0055516c(auStack_30);
  if (local_28 == (long *)0x0) {
LAB_005591f0:
    plVar7 = (long *)param_1[0x39];
  }
  else {
    plVar7 = local_28 + 1;
    do {
      lVar6 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 != 0) goto LAB_005591f0;
    (**(code **)(*local_28 + 0x10))(local_28);
    std::__shared_weak_count::__release_weak();
    plVar7 = (long *)param_1[0x39];
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar7 = (long *)param_1[0x36];
  if (plVar7 == (long *)0x0) {
LAB_0055926c:
    plVar7 = (long *)param_1[0x34];
  }
  else {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 != 0) goto LAB_0055926c;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
    plVar7 = (long *)param_1[0x34];
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar7 = (long *)param_1[0x32];
  if (plVar7 == (long *)0x0) {
LAB_005592e8:
    bVar2 = *(byte *)(param_1 + 0x2d);
  }
  else {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 != 0) goto LAB_005592e8;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
    bVar2 = *(byte *)(param_1 + 0x2d);
  }
  if ((bVar2 & 1) != 0) {
    (**(code **)(*(long *)param_1[0x30] + 0x18))
              ((long *)param_1[0x30],param_1[0x2f],param_1[0x2d] & 0xfffffffffffffffe,1);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x29));
  plVar7 = (long *)param_1[0x28];
  if (plVar7 == (long *)0x0) {
LAB_00559334:
    plVar7 = (long *)param_1[0x26];
  }
  else {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 != 0) goto LAB_00559334;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
    plVar7 = (long *)param_1[0x26];
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar7 = (long *)param_1[0x24];
  if (plVar7 == (long *)0x0) {
LAB_005593d4:
    cVar3 = *(char *)((long)param_1 + 0x114);
  }
  else {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 != 0) goto LAB_005593d4;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
    cVar3 = *(char *)((long)param_1 + 0x114);
  }
  if (cVar3 != '\0') {
    FUN_01f6f208(param_1 + 0x20);
  }
  if (param_1[0x21] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (*(char *)((long)param_1 + 0xfc) != '\0') {
    FUN_01f6f208(param_1 + 0x1d);
  }
  if (param_1[0x1e] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (*(char *)((long)param_1 + 0xe4) != '\0') {
    FUN_01f6f208(param_1 + 0x1a);
  }
  if (param_1[0x1b] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x16));
  FUN_00558b48(param_1 + 0x12,param_1[0x13]);
  plVar7 = (long *)param_1[0x10];
  if (plVar7 != (long *)0x0) {
    if (plVar7 == param_1 + 0xc) {
      pcVar5 = *(code **)(*plVar7 + 0x10);
    }
    else {
      pcVar5 = *(code **)(*plVar7 + 0x18);
    }
    (*pcVar5)();
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 8));
  plVar7 = (long *)param_1[6];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
      plVar7 = (long *)param_1[4];
      goto joined_r0x005594b4;
    }
  }
  plVar7 = (long *)param_1[4];
joined_r0x005594b4:
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (param_1[2] == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


