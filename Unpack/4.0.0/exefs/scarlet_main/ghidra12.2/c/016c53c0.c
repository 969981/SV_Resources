/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016c53c0; name: FUN_016c53c0
 */


void FUN_016c53c0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)(param_1 + 0x30);
  plVar1 = (long *)0x0;
  if (*plVar4 != 0) {
    plVar1 = (long *)(*plVar4 + (long)plVar4);
  }
  lVar5 = 0;
  if (param_2 != 0) {
    lVar5 = param_2 - (long)plVar4;
  }
  *plVar4 = lVar5;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar4 = (long *)(param_2 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((plVar1 != (long *)0x0) && (plVar1[1] != 0)) {
    plVar4 = plVar1 + 2;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x016c5430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))();
      return;
    }
  }
  return;
}


