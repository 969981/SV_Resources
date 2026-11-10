/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0056b2f8; name: FUN_0056b2f8
 */


void FUN_0056b2f8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 != 0) {
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar5 == lVar6) {
      lVar5 = lVar6;
    }
    else {
      do {
        lVar5 = lVar5 + -8;
        FUN_0053dd1c(lVar5);
      } while (lVar6 != lVar5);
      lVar5 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x38) = lVar6;
    (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
              (*(long **)(param_1 + 0x48),lVar5,*(long *)(param_1 + 0x40) - lVar5,8);
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 == lVar6) {
      lVar5 = lVar6;
    }
    else {
      do {
        lVar5 = lVar5 + -8;
        FUN_0056b3f0(lVar5);
      } while (lVar6 != lVar5);
      lVar5 = *(long *)(param_1 + 0x10);
    }
    *(long *)(param_1 + 0x18) = lVar6;
    (**(code **)(**(long **)(param_1 + 0x28) + 0x18))
              (*(long **)(param_1 + 0x28),lVar5,*(long *)(param_1 + 0x20) - lVar5,8);
  }
  plVar4 = *(long **)(param_1 + 8);
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
      return;
    }
  }
  return;
}


