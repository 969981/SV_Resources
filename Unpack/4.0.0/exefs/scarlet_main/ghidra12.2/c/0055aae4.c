/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0055aae4; name: FUN_0055aae4
 */


void FUN_0055aae4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = (undefined8 *)(param_1 + 0x20);
  *puVar5 = &PTR_FUN_044c9378;
  if (*(char *)(param_1 + 0x80) != '\0') {
    if (*(long *)(param_1 + 0x58) != 0) {
      std::__shared_weak_count::__release_weak();
    }
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  plVar6 = *(long **)(param_1 + 0x78);
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
      plVar6 = *(long **)(param_1 + 0x68);
      goto joined_r0x0055ab3c;
    }
  }
  plVar6 = *(long **)(param_1 + 0x68);
joined_r0x0055ab3c:
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
      FUN_006c53d4(puVar5);
      return;
    }
  }
  FUN_006c53d4(puVar5);
  return;
}


