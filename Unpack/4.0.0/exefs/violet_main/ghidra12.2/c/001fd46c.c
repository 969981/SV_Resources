/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001fd46c; name: FUN_001fd46c
 */


void FUN_001fd46c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)param_1[10];
  *param_1 = (long)(PTR_DAT_047cba98 + 0x10);
  if (plVar5 == (long *)0x0) {
LAB_001fd4a8:
    plVar5 = (long *)param_1[8];
    param_1[8] = 0;
  }
  else {
    plVar6 = plVar5 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 != 0) goto LAB_001fd4a8;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
    plVar5 = (long *)param_1[8];
    param_1[8] = 0;
  }
  if (plVar5 != (long *)0x0) {
    plVar6 = (long *)plVar5[2];
    *plVar5 = (long)(PTR_DAT_047cbab8 + 0x10);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar5);
  }
  plVar5 = (long *)param_1[6];
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
      plVar5 = (long *)param_1[4];
      goto joined_r0x001fd5ac;
    }
  }
  plVar5 = (long *)param_1[4];
joined_r0x001fd5ac:
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


