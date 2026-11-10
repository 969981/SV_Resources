/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0054d26c; name: FUN_0054d26c
 */


undefined8 * FUN_0054d26c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    plVar7 = (long *)param_1[1];
    *param_1 = uVar2;
    param_1[1] = uVar3;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar7 = (long *)param_1[3];
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7,param_1[2]);
    }
    param_1[3] = param_2[3];
    param_2[3] = 0;
    param_1[2] = param_2[2];
    param_2[2] = 0;
    uVar2 = param_2[4];
    uVar3 = param_2[5];
    param_2[4] = 0;
    param_2[5] = 0;
    plVar7 = (long *)param_1[5];
    param_1[4] = uVar2;
    param_1[5] = uVar3;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar2 = param_2[6];
    uVar3 = param_2[7];
    param_2[6] = 0;
    param_2[7] = 0;
    plVar7 = (long *)param_1[7];
    param_1[6] = uVar2;
    param_1[7] = uVar3;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
    }
    param_1[8] = param_2[8];
    uVar2 = param_2[9];
    uVar3 = param_2[10];
    param_2[9] = 0;
    param_2[10] = 0;
    plVar7 = (long *)param_1[10];
    param_1[9] = uVar2;
    param_1[10] = uVar3;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar2 = param_2[0xb];
    uVar3 = param_2[0xc];
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    plVar7 = (long *)param_1[0xc];
    param_1[0xb] = uVar2;
    param_1[0xc] = uVar3;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
    }
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    *(undefined1 *)(param_2 + 0xd) = 1;
  }
  return param_1;
}


