/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006e9870; name: FUN_006e9870
 */


void FUN_006e9870(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)(param_1 + 0x20);
  *plVar5 = (long)(PTR_DAT_047cfe78 + 0x10);
  if (*(char *)(param_1 + 0x79) != '\0') {
    *(undefined1 *)(param_1 + 0x79) = 0;
  }
  plVar6 = *(long **)(param_1 + 0x70);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      FUN_006c53d4(plVar5);
      return;
    }
  }
  FUN_006c53d4(plVar5);
  return;
}


