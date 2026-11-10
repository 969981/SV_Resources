/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ff1dc; name: FUN_001ff1dc
 */


void FUN_001ff1dc(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar6 != (long *)0x0) {
    plVar7 = *(long **)(param_1 + 0x48);
    plVar3 = (long *)plVar6[4];
    if (plVar3 != (long *)0x0) {
      if (plVar3 == plVar6) {
        pcVar4 = *(code **)(*plVar3 + 0x10);
      }
      else {
        pcVar4 = *(code **)(*plVar3 + 0x18);
      }
      (*pcVar4)();
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,plVar6,0x30,0x10);
  }
  plVar6 = *(long **)(param_1 + 0x38);
  if (plVar6 == (long *)0x0) {
LAB_001ff258:
    plVar6 = *(long **)(param_1 + 0x28);
  }
  else {
    plVar3 = plVar6 + 1;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 != 0) goto LAB_001ff258;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0x28);
  }
  if (plVar6 != (long *)0x0) {
    plVar3 = plVar6 + 1;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar6 = *(long **)(param_1 + 0x18);
  if (plVar6 != (long *)0x0) {
    plVar3 = plVar6 + 1;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      plVar6 = *(long **)(param_1 + 8);
      goto joined_r0x001ff2d8;
    }
  }
  plVar6 = *(long **)(param_1 + 8);
joined_r0x001ff2d8:
  if (plVar6 != (long *)0x0) {
    plVar3 = plVar6 + 1;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


