/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00257c0c; name: FUN_00257c0c
 */


void FUN_00257c0c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long local_30;
  long *local_28;
  
  if (*(long *)(param_2 + 8) == 0) {
                    /* try { // try from 00257c50 to 00257c53 has its CatchHandler @ 00257d18 */
    FUN_00274ca0();
    FUN_006c5550(&local_30,*(undefined8 *)(param_2 + 0x18));
    plVar1 = local_28;
    lVar4 = local_30;
    local_30 = 0;
    local_28 = (long *)0x0;
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 8) = 1;
    }
    plVar5 = *(long **)(param_2 + 0x10);
    *(long *)(param_2 + 8) = lVar4;
    *(long **)(param_2 + 0x10) = plVar1;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 1;
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
        (**(code **)(*local_28 + 0x10))(local_28);
        std::__shared_weak_count::__release_weak();
      }
    }
    lVar4 = *(long *)(param_2 + 0x10);
    *param_1 = *(long *)(param_2 + 8);
    param_1[1] = lVar4;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    *param_1 = *(long *)(param_2 + 8);
    lVar4 = *(long *)(param_2 + 0x10);
    param_1[1] = lVar4;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}


