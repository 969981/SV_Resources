/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00203af0; name: FUN_00203af0
 */


void FUN_00203af0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  
  plVar4 = *(long **)(param_1 + 0x140);
  if (plVar4 != (long *)0x0) {
    if (plVar4 == (long *)(param_1 + 0x120)) {
      pcVar5 = *(code **)(*plVar4 + 0x10);
    }
    else {
      pcVar5 = *(code **)(*plVar4 + 0x18);
    }
    (*pcVar5)();
  }
  plVar4 = *(long **)(param_1 + 0x110);
  if (plVar4 != (long *)0x0) {
    if (plVar4 == (long *)(param_1 + 0xf0)) {
      pcVar5 = *(code **)(*plVar4 + 0x10);
    }
    else {
      pcVar5 = *(code **)(*plVar4 + 0x18);
    }
    (*pcVar5)();
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 200));
  plVar4 = *(long **)(param_1 + 0xc0);
  if (plVar4 == (long *)0x0) {
LAB_00203b74:
    if ((*(byte *)(param_1 + 0x98) & 1) == 0) goto LAB_00203b7c;
LAB_00203bb8:
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x18))
              (*(long **)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xa8),
               *(ulong *)(param_1 + 0x98) & 0xfffffffffffffffe,1);
    if ((*(byte *)(param_1 + 0x78) & 1) != 0) goto LAB_00203bdc;
LAB_00203b84:
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) goto LAB_00203b8c;
LAB_00203c00:
    (**(code **)(**(long **)(param_1 + 0x70) + 0x18))
              (*(long **)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),
               *(ulong *)(param_1 + 0x58) & 0xfffffffffffffffe,1);
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 != (long *)0x0) goto LAB_00203c24;
LAB_00203c3c:
    plVar4 = *(long **)(param_1 + 0x38);
  }
  else {
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 != 0) goto LAB_00203b74;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__shared_weak_count::__release_weak();
    if ((*(byte *)(param_1 + 0x98) & 1) != 0) goto LAB_00203bb8;
LAB_00203b7c:
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_00203b84;
LAB_00203bdc:
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))
              (*(long **)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x88),
               *(ulong *)(param_1 + 0x78) & 0xfffffffffffffffe,1);
    if ((*(byte *)(param_1 + 0x58) & 1) != 0) goto LAB_00203c00;
LAB_00203b8c:
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 == (long *)0x0) goto LAB_00203c3c;
LAB_00203c24:
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 != 0) goto LAB_00203c3c;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__shared_weak_count::__release_weak();
    plVar4 = *(long **)(param_1 + 0x38);
  }
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
      plVar4 = *(long **)(param_1 + 0x18);
      goto joined_r0x00203cbc;
    }
  }
  plVar4 = *(long **)(param_1 + 0x18);
joined_r0x00203cbc:
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


