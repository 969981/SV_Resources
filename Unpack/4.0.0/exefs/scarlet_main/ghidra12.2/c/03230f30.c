/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03230f30; name: FUN_03230f30
 */


void FUN_03230f30(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar4 = *param_2;
  plVar6 = (long *)(param_1 + 0x20);
  do {
    lVar5 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar5 + lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar4 = *param_2;
  lVar5 = lVar4 + lVar5;
  if (*(long *)(param_1 + 0x28) < lVar5) {
    plVar6 = (long *)(param_1 + 0x28);
    lVar4 = *(long *)(param_1 + 0x28);
    do {
      lVar7 = *plVar6;
      if (lVar7 == lVar4) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar5;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') break;
      }
      else {
        ClearExclusiveLocal();
      }
      lVar4 = lVar7;
    } while (lVar7 < lVar5);
    lVar4 = *param_2;
  }
  lVar5 = tpidr_el0;
  plVar6 = *(long **)(lVar5 + 0x30);
  if (plVar6 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar6 = DAT_04859430;
    *(long **)(lVar5 + 0x30) = DAT_04859430;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6,lVar4,8);
  plVar6 = (long *)(param_1 + 0x18);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = *plVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar6 = (long *)(param_1 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = *plVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}


