/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005f520c; name: FUN_005f520c
 */


void FUN_005f520c(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 != 0) {
    lVar7 = *(long *)(param_1 + 0x38);
    if (lVar7 == lVar5) {
      lVar7 = lVar5;
    }
    else {
      do {
        if ((*(byte *)(lVar7 + -0x20) & 1) == 0) {
          bVar2 = *(byte *)(lVar7 + -0x48);
        }
        else {
          (**(code **)(**(long **)(lVar7 + -8) + 0x18))
                    (*(long **)(lVar7 + -8),*(undefined8 *)(lVar7 + -0x10),
                     *(ulong *)(lVar7 + -0x20) & 0xfffffffffffffffe,1);
          bVar2 = *(byte *)(lVar7 + -0x48);
        }
        if ((bVar2 & 1) != 0) {
          (**(code **)(**(long **)(lVar7 + -0x30) + 0x18))
                    (*(long **)(lVar7 + -0x30),*(undefined8 *)(lVar7 + -0x38),
                     *(ulong *)(lVar7 + -0x48) & 0xfffffffffffffffe,1);
        }
        lVar7 = lVar7 + -0x48;
      } while (lVar5 != lVar7);
      lVar7 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x38) = lVar5;
    (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
              (*(long **)(param_1 + 0x48),lVar7,*(long *)(param_1 + 0x40) - lVar7,8);
  }
  plVar6 = *(long **)(param_1 + 0x28);
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
      plVar6 = *(long **)(param_1 + 0x18);
      goto joined_r0x005f533c;
    }
  }
  plVar6 = *(long **)(param_1 + 0x18);
joined_r0x005f533c:
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
    }
  }
  plVar6 = *(long **)(param_1 + 8);
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
      return;
    }
  }
  return;
}


