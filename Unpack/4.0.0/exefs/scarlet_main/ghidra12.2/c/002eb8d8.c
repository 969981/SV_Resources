/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002eb8d8; name: FUN_002eb8d8
 */


void FUN_002eb8d8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
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
      lVar3 = param_1[1];
      *param_1 = 0;
      goto joined_r0x002eb908;
    }
  }
  lVar3 = param_1[1];
  *param_1 = 0;
joined_r0x002eb908:
  if ((lVar3 != 0) && ((code *)param_1[2] != (code *)0x0)) {
                    /* try { // try from 002eb914 to 002eb917 has its CatchHandler @ 002eb988 */
    (*(code *)param_1[2])();
    plVar4 = (long *)*param_1;
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
        return;
      }
    }
  }
  return;
}


