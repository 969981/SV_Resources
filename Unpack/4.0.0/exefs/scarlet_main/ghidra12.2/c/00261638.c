/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00261638; name: FUN_00261638
 */


void FUN_00261638(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  if ((*(byte *)(param_1 + 0x128) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x108) & 1) == 0) goto LAB_00261654;
LAB_00261694:
    (**(code **)(**(long **)(param_1 + 0x120) + 0x18))
              (*(long **)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x118),
               *(ulong *)(param_1 + 0x108) & 0xfffffffffffffffe,1);
    if ((*(byte *)(param_1 + 0xe8) & 1) != 0) goto LAB_002616b8;
LAB_0026165c:
    if ((*(byte *)(param_1 + 200) & 1) == 0) goto LAB_00261664;
LAB_002616dc:
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x18))
              (*(long **)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xd8),
               *(ulong *)(param_1 + 200) & 0xfffffffffffffffe,1);
    plVar6 = *(long **)(param_1 + 0xc0);
    if (plVar6 != (long *)0x0) goto LAB_00261700;
LAB_00261718:
    plVar6 = *(long **)(param_1 + 0xa8);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x140) + 0x18))
              (*(long **)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x138),
               *(ulong *)(param_1 + 0x128) & 0xfffffffffffffffe,1);
    if ((*(byte *)(param_1 + 0x108) & 1) != 0) goto LAB_00261694;
LAB_00261654:
    if ((*(byte *)(param_1 + 0xe8) & 1) == 0) goto LAB_0026165c;
LAB_002616b8:
    (**(code **)(**(long **)(param_1 + 0x100) + 0x18))
              (*(long **)(param_1 + 0x100),*(undefined8 *)(param_1 + 0xf8),
               *(ulong *)(param_1 + 0xe8) & 0xfffffffffffffffe,1);
    if ((*(byte *)(param_1 + 200) & 1) != 0) goto LAB_002616dc;
LAB_00261664:
    plVar6 = *(long **)(param_1 + 0xc0);
    if (plVar6 == (long *)0x0) goto LAB_00261718;
LAB_00261700:
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
    if (lVar5 != 0) goto LAB_00261718;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0xa8);
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
  plVar6 = *(long **)(param_1 + 0x98);
  if (plVar6 == (long *)0x0) {
LAB_00261794:
    plVar6 = *(long **)(param_1 + 0x88);
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
    if (lVar5 != 0) goto LAB_00261794;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0x88);
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
  plVar6 = *(long **)(param_1 + 0x70);
  if (plVar6 != (long *)0x0) {
    if (plVar6 == (long *)(param_1 + 0x50)) {
      pcVar4 = *(code **)(*plVar6 + 0x10);
    }
    else {
      pcVar4 = *(code **)(*plVar6 + 0x18);
    }
    (*pcVar4)();
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
      goto joined_r0x00261864;
    }
  }
  plVar6 = *(long **)(param_1 + 8);
joined_r0x00261864:
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


