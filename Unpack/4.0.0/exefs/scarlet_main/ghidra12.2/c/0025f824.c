/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0025f824; name: FUN_0025f824
 */


void FUN_0025f824(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  if ((*(byte *)(param_1 + 0xd8) & 1) == 0) {
    if ((*(byte *)(param_1 + 0xb8) & 1) == 0) goto LAB_0025f840;
LAB_0025f878:
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))
              (*(long **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 200),
               *(ulong *)(param_1 + 0xb8) & 0xfffffffffffffffe,1);
    if ((*(byte *)(param_1 + 0x98) & 1) != 0) goto LAB_0025f89c;
LAB_0025f848:
    plVar6 = *(long **)(param_1 + 0x90);
    if (plVar6 == (long *)0x0) goto LAB_0025f8d8;
LAB_0025f8c0:
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 != 0) goto LAB_0025f8d8;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0x78);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x18))
              (*(long **)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xe8),
               *(ulong *)(param_1 + 0xd8) & 0xfffffffffffffffe,1);
    if ((*(byte *)(param_1 + 0xb8) & 1) != 0) goto LAB_0025f878;
LAB_0025f840:
    if ((*(byte *)(param_1 + 0x98) & 1) == 0) goto LAB_0025f848;
LAB_0025f89c:
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x18))
              (*(long **)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xa8),
               *(ulong *)(param_1 + 0x98) & 0xfffffffffffffffe,1);
    plVar6 = *(long **)(param_1 + 0x90);
    if (plVar6 != (long *)0x0) goto LAB_0025f8c0;
LAB_0025f8d8:
    plVar6 = *(long **)(param_1 + 0x78);
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar6 = *(long **)(param_1 + 0x68);
  if (plVar6 == (long *)0x0) {
LAB_0025f954:
    plVar6 = *(long **)(param_1 + 0x58);
  }
  else {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 != 0) goto LAB_0025f954;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0x58);
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar6 = *(long **)(param_1 + 0x40);
  if (plVar6 != (long *)0x0) {
    if (plVar6 == (long *)(param_1 + 0x20)) {
      pcVar4 = *(code **)(*plVar6 + 0x10);
    }
    else {
      pcVar4 = *(code **)(*plVar6 + 0x18);
    }
    (*pcVar4)();
  }
  plVar6 = *(long **)(param_1 + 0x18);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      plVar6 = *(long **)(param_1 + 8);
      goto joined_r0x0025f9fc;
    }
  }
  plVar6 = *(long **)(param_1 + 8);
joined_r0x0025f9fc:
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


