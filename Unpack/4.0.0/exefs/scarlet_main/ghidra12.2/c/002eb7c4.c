/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002eb7c4; name: FUN_002eb7c4
 */


void FUN_002eb7c4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      FUN_00270ba4(plVar4);
      FUN_0049e790(PTR_LAB_047cba48,plVar4);
      lVar3 = param_1[2];
      param_1[1] = 0;
      goto joined_r0x002eb7f8;
    }
  }
  lVar3 = param_1[2];
  param_1[1] = 0;
joined_r0x002eb7f8:
  if ((lVar3 != 0) && ((code *)param_1[3] != (code *)0x0)) {
                    /* try { // try from 002eb804 to 002eb807 has its CatchHandler @ 002eb8bc */
    (*(code *)param_1[3])();
    plVar4 = (long *)param_1[1];
    if (plVar4 != (long *)0x0) {
      do {
        lVar3 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 + -1 == 0) {
        FUN_00270ba4(plVar4);
        FUN_0049e790(PTR_LAB_047cba48,plVar4);
      }
    }
  }
  param_1 = (undefined8 *)*param_1;
  if (param_1 != (undefined8 *)0x0) {
    plVar4 = param_1 + 1;
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      (**(code **)*param_1)(param_1);
      FUN_0049e790(PTR_LAB_047cba48,param_1);
      return;
    }
  }
  return;
}


