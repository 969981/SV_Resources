/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6f208; name: FUN_01f6f208
 */


void FUN_01f6f208(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  if (param_1[1] == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar6 = (long *)std::__shared_weak_count::lock();
    if ((plVar6 != (long *)0x0) && (lVar7 = *param_1, lVar7 != 0)) {
      uVar2 = *(undefined8 *)(lVar7 + 0x18);
      plVar3 = *(long **)(lVar7 + 0x20);
      if (plVar3 == (long *)0x0) {
        FUN_00547e90(uVar2,(int)param_1[2]);
      }
      else {
        plVar1 = plVar3 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        FUN_00547e90(uVar2,(int)param_1[2]);
        do {
          lVar7 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    lVar7 = param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    if (lVar7 != 0) {
      std::__shared_weak_count::__release_weak();
    }
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        lVar7 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__shared_weak_count::__release_weak();
        return;
      }
    }
  }
  return;
}


