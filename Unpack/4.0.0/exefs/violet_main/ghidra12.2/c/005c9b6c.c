/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005c9b6c; name: FUN_005c9b6c
 */


void FUN_005c9b6c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  FUN_006c4a3c(param_1,*param_2,*param_3);
  *param_1 = (long)(PTR_DAT_047ce7d8 + 0x10);
  lVar5 = *param_2;
  param_1[9] = param_2[1];
  param_1[8] = lVar5;
  *param_2 = 0;
  param_2[1] = 0;
  lVar5 = *param_3;
  param_1[0xb] = param_3[1];
  param_1[10] = lVar5;
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  lVar5 = *param_4;
  plVar2 = (long *)param_4[1];
  if (plVar2 == (long *)0x0) {
    param_1[6] = lVar5;
    param_1[7] = 0;
    return;
  }
  plVar1 = plVar2 + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  param_1[6] = lVar5;
  param_1[7] = (long)plVar2;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar5 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__shared_weak_count::__release_weak();
  }
  do {
    lVar5 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__shared_weak_count::__release_weak();
  }
  do {
    lVar5 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


