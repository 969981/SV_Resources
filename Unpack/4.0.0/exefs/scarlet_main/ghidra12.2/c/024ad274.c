/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024ad274; name: FUN_024ad274
 */


void FUN_024ad274(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  
  lVar6 = *param_1;
  plVar5 = *(long **)(param_2 + 0x18);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      piVar7 = (int *)((long)plVar5 + 0xc);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        iVar4 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
  }
  plVar5 = *(long **)(param_2 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      piVar7 = (int *)((long)plVar5 + 0xc);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        iVar4 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x024ad360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar6 + 0x28) + 0x18))(*(long **)(lVar6 + 0x28),param_2,0x20,0x10);
  return;
}


