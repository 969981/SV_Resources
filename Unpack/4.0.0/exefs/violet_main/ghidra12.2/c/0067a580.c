/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0067a580; name: FUN_0067a580
 */


void FUN_0067a580(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_006927a0();
  }
  lVar7 = *(long *)(param_1 + 0x78);
  if (lVar7 != 0) {
    lVar5 = *(long *)(param_1 + 0x80);
    if (lVar5 == lVar7) {
      lVar5 = lVar7;
    }
    else {
      do {
        lVar4 = lVar5 + -0x90;
        lVar5 = lVar5 + -0xa0;
        FUN_01e7396c(lVar4);
      } while (lVar7 != lVar5);
      lVar5 = *(long *)(param_1 + 0x78);
    }
    *(long *)(param_1 + 0x80) = lVar7;
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))
              (*(long **)(param_1 + 0x90),lVar5,*(long *)(param_1 + 0x88) - lVar5,0x10);
  }
  lVar7 = *(long *)(param_1 + 0x58);
  if (lVar7 != 0) {
    *(long *)(param_1 + 0x60) = lVar7;
    (**(code **)(**(long **)(param_1 + 0x70) + 0x18))
              (*(long **)(param_1 + 0x70),lVar7,*(long *)(param_1 + 0x68) - lVar7,2);
  }
  plVar6 = *(long **)(param_1 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


