/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0067bec0; name: FUN_0067bec0
 */


void FUN_0067bec0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x90);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
      lVar6 = *(long *)(param_1 + 0x68);
      goto joined_r0x0067bef0;
    }
  }
  lVar6 = *(long *)(param_1 + 0x68);
joined_r0x0067bef0:
  if (lVar6 != 0) {
    lVar5 = *(long *)(param_1 + 0x70);
    if (lVar5 == lVar6) {
      lVar5 = lVar6;
    }
    else {
      do {
        lVar4 = lVar5 + -0x90;
        lVar5 = lVar5 + -0xa0;
        FUN_01e7396c(lVar4);
      } while (lVar6 != lVar5);
      lVar5 = *(long *)(param_1 + 0x68);
    }
    *(long *)(param_1 + 0x70) = lVar6;
    (**(code **)(**(long **)(param_1 + 0x80) + 0x18))
              (*(long **)(param_1 + 0x80),lVar5,*(long *)(param_1 + 0x78) - lVar5,0x10);
  }
  lVar6 = *(long *)(param_1 + 0x48);
  if (lVar6 != 0) {
    *(long *)(param_1 + 0x50) = lVar6;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
              (*(long **)(param_1 + 0x60),lVar6,*(long *)(param_1 + 0x58) - lVar6,2);
  }
  FUN_006927a0(param_1 + 0x10);
  plVar7 = *(long **)(param_1 + 8);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


