/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005dc444; name: FUN_005dc444
 */


void FUN_005dc444(__shared_weak_count *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = PTR_DAT_047ce688;
  plVar6 = *(long **)(param_1 + 0x30);
  *(undefined **)param_1 = PTR_DAT_047ce680 + 0x10;
  *(undefined **)(param_1 + 0x20) = puVar4 + 0x10;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      std::__shared_weak_count::~__shared_weak_count(param_1);
      return;
    }
  }
  std::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


