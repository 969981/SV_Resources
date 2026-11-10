/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006fa864; name: FUN_006fa864
 */


void FUN_006fa864(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *local_30;
  long *local_28;
  long lStack_18;
  
  lStack_18 = param_2;
  FUN_006fa940(&local_30,&lStack_18,*(undefined8 *)(*(long *)(param_2 + 0x40) + 0x240),0x10000,
               *(undefined8 *)(*(long *)(param_2 + 0x40) + 0x4b8));
  plVar4 = local_28;
  plVar1 = local_30;
  local_30 = (long *)0x0;
  local_28 = (long *)0x0;
  (**(code **)(*plVar1 + 0x30))(param_1);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 1;
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
      (**(code **)(*local_28 + 0x10))(local_28);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


