/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00682334; name: FUN_00682334
 */


void FUN_00682334(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = &PTR_FUN_044d5198;
  if (*(char *)((long)param_1 + 0x111) == '\0') goto LAB_006823a4;
  plVar6 = (long *)param_1[0x1e];
  if (plVar6 == (long *)0x0) {
LAB_00682374:
    FUN_01e7396c(param_1 + 10);
    bVar2 = *(byte *)(param_1 + 6);
  }
  else {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 != 0) goto LAB_00682374;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    FUN_01e7396c(param_1 + 10);
    bVar2 = *(byte *)(param_1 + 6);
  }
  if ((bVar2 & 1) != 0) {
    (**(code **)(*(long *)param_1[9] + 0x18))
              ((long *)param_1[9],param_1[8],param_1[6] & 0xfffffffffffffffe,1);
  }
  *(undefined1 *)((long)param_1 + 0x111) = 0;
LAB_006823a4:
  plVar6 = (long *)param_1[0x21];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      FUN_006c53d4(param_1);
      return;
    }
  }
  FUN_006c53d4(param_1);
  return;
}


