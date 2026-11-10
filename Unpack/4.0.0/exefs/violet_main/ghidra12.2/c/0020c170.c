/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0020c170; name: FUN_0020c170
 */


void FUN_0020c170(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = (long)&PTR_LAB_04488170;
  FUN_006c40fc();
  (**(code **)(*(long *)param_1[0x25] + 0x18))
            ((long *)param_1[0x25],param_1[0x12],param_1[0x26],0x10);
  if (*(char *)((long)param_1 + 0x149) != '\0') {
    if ((*(byte *)(param_1 + 0x21) & 1) != 0) {
      (**(code **)(*(long *)param_1[0x24] + 0x18))
                ((long *)param_1[0x24],param_1[0x23],param_1[0x21] & 0xfffffffffffffffe,1);
    }
    if ((*(byte *)(param_1 + 0x1d) & 1) != 0) {
      (**(code **)(*(long *)param_1[0x20] + 0x18))
                ((long *)param_1[0x20],param_1[0x1f],param_1[0x1d] & 0xfffffffffffffffe,1);
    }
    plVar5 = (long *)param_1[0x1b];
    param_1[0x19] = (long)(PTR_DAT_047cba88 + 0x10);
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
    *(undefined1 *)((long)param_1 + 0x149) = 0;
  }
  plVar5 = (long *)param_1[0x28];
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


