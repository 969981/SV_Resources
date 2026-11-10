/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025eb00; name: FUN_0025eb00
 */


void FUN_0025eb00(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_0448baa8;
  plVar4 = (long *)param_1[10];
  if (plVar4 != (long *)0x0) {
    if (plVar4 == param_1 + 6) {
      pcVar5 = *(code **)(*plVar4 + 0x10);
    }
    else {
      pcVar5 = *(code **)(*plVar4 + 0x18);
    }
    (*pcVar5)();
  }
  plVar4 = (long *)param_1[5];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
      lVar6 = param_1[3];
      goto joined_r0x0025eb90;
    }
  }
  lVar6 = param_1[3];
joined_r0x0025eb90:
  if (lVar6 == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


