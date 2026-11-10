/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034af84; name: FUN_0034af84
 */


void FUN_0034af84(long *param_1,long param_2,long param_3)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  
  FUN_0038db40();
  if ((0 < param_3) && (param_3 <= *(long *)(param_2 + 0x38))) {
    plVar4 = (long *)(param_2 + 0x28);
    plVar5 = (long *)*plVar4;
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar4;
      do {
        if (param_3 <= plVar5[4]) {
          plVar2 = plVar5;
        }
        plVar5 = (long *)plVar5[plVar5[4] < param_3];
      } while (plVar5 != (long *)0x0);
      if ((plVar2 != plVar4) && (plVar2[4] <= param_3)) {
        lVar3 = plVar2[5];
        plVar4 = (long *)(lVar3 + 8);
        lVar9 = *plVar4;
        if (*plVar4 != 0) {
          do {
            lVar6 = *plVar4;
            if (lVar6 == lVar9) {
              cVar1 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar7) {
                *plVar4 = lVar9 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 != '\0') goto LAB_0034b020;
              bVar7 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_0034b020:
              bVar7 = false;
            }
            if (bVar7) {
              lVar8 = lVar3;
              break;
            }
            lVar8 = 0;
            lVar9 = lVar6;
          } while (lVar6 != 0);
          goto LAB_0034b03c;
        }
      }
    }
  }
  lVar8 = 0;
LAB_0034b03c:
  *param_1 = lVar8;
                    /* try { // try from 0034b040 to 0034b047 has its CatchHandler @ 0034b05c */
  FUN_0038db60(param_2);
  return;
}


