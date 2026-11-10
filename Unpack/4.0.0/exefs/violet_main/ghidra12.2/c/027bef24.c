/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027bef24; name: FUN_027bef24
 */


void FUN_027bef24(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  long *plVar5;
  
  FUN_027bf1b4(param_1 + 0x210);
  FUN_027bf1b4(param_1 + 0x350);
  plVar5 = *(long **)(param_1 + 0x498);
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
  FUN_027bf268(param_1 + 0x350);
  FUN_027bf268(param_1 + 0x210);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x1f0));
  plVar5 = *(long **)(param_1 + 0x1a0);
  if (plVar5 != (long *)0x0) {
    if (plVar5 == (long *)(param_1 + 0x180)) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x10);
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x18);
    }
    (*UNRECOVERED_JUMPTABLE)();
  }
  plVar5 = *(long **)(param_1 + 0x120);
  if (plVar5 != (long *)0x0) {
    if (plVar5 == (long *)(param_1 + 0x100)) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x10);
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x18);
    }
    (*UNRECOVERED_JUMPTABLE)();
  }
  plVar5 = *(long **)(param_1 + 0xa0);
  if (plVar5 == (long *)0x0) {
    return;
  }
  if (plVar5 == (long *)(param_1 + 0x80)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x10);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x027bf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


