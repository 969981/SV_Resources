/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00247394; name: FUN_00247394
 */


void FUN_00247394(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_047cc0d0 + 0x10);
  if ((char)param_1[0xc] != '\0') {
    thunk_FUN_006c5184(param_1 + 3,param_1);
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
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
  plVar4 = (long *)param_1[4];
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
    }
  }
  FUN_006c5054(param_1);
  operator_delete(param_1);
  return;
}


