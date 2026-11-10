/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002529e8; name: FUN_002529e8
 */


void FUN_002529e8(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar5 = (long *)(**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,0x90,8);
  lVar6 = *param_2;
  plVar7 = plVar5 + 1;
  *plVar7 = 0;
  plVar8 = plVar5 + 2;
  *plVar8 = 0;
  puVar4 = PTR_DAT_047cc1a8;
  plVar5[3] = lVar6;
  plVar5[5] = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  plVar9 = plVar5 + 4;
  *plVar9 = 0;
  plVar5[6] = *param_3;
  lVar6 = param_3[1];
  plVar5[7] = lVar6;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5[8] = *param_4;
  nn::os::InitializeMutex((MutexType *)(plVar5 + 9),false,0);
  FUN_01e9fa84(plVar5 + 0xd,*(undefined8 *)(*param_3 + 0x238));
  FUN_01e9fa84(plVar5 + 0xf,*(undefined8 *)(*param_3 + 0x238));
  *(undefined1 *)(plVar5 + 0x11) = 0;
  *param_1 = plVar9;
  param_1[1] = plVar5;
  if (plVar5[5] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar5[4] = (long)plVar9;
    plVar5[5] = (long)plVar5;
  }
  else {
    if (*(long *)(plVar5[5] + 8) != -1) {
      return;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar5[4] = (long)plVar9;
    plVar5[5] = (long)plVar5;
    std::__shared_weak_count::__release_weak();
  }
  do {
    lVar6 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


