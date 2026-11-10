/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005ca50c; name: FUN_005ca50c
 */


void FUN_005ca50c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = (long)&PTR_LAB_044cdc80;
  FUN_006c40fc();
  (**(code **)(*(long *)param_1[0x2a] + 0x18))
            ((long *)param_1[0x2a],param_1[0x12],param_1[0x2b],0x10);
  if (*(char *)((long)param_1 + 0x171) != '\0') {
    FUN_005d3954(param_1 + 0x19);
    *(undefined1 *)((long)param_1 + 0x171) = 0;
  }
  plVar5 = (long *)param_1[0x2d];
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
  plVar5 = (long *)param_1[0x16];
  *param_1 = (long)(PTR_DAT_047cbaf8 + 0x10);
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
      FUN_006c53d4(param_1);
      return;
    }
  }
  FUN_006c53d4(param_1);
  return;
}


