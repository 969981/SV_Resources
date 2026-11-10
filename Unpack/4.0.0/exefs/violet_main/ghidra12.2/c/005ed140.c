/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005ed140; name: FUN_005ed140
 */


void FUN_005ed140(undefined8 *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar4 = (long *)(**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,0x80,8);
  lVar5 = *param_2;
  plVar6 = plVar4 + 1;
  *plVar6 = 0;
  puVar3 = PTR_DAT_047ceb18;
  plVar7 = plVar4 + 2;
  *plVar7 = 0;
  plVar4[3] = lVar5;
  *plVar4 = (long)(puVar3 + 0x10);
  lVar5 = *param_3;
  plVar8 = plVar4 + 4;
  *plVar8 = 0;
  plVar4[5] = 0;
  plVar4[6] = lVar5;
  plVar4[9] = 0;
  lVar5 = FUN_01cf7e20();
  plVar4[10] = lVar5;
  plVar4[0xb] = 0;
  plVar4[8] = (long)(plVar4 + 9);
  nn::os::InitializeMutex((MutexType *)(plVar4 + 0xc),true,0);
  *param_1 = plVar8;
  param_1[1] = plVar4;
  if (plVar4[5] == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4[4] = (long)plVar8;
    plVar4[5] = (long)plVar4;
  }
  else {
    if (*(long *)(plVar4[5] + 8) != -1) {
      return;
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4[4] = (long)plVar8;
    plVar4[5] = (long)plVar4;
    std::__shared_weak_count::__release_weak();
  }
  do {
    lVar5 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


