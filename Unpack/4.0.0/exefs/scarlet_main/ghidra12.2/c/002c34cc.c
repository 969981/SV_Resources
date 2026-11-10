/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c34cc; name: FUN_002c34cc
 */


void FUN_002c34cc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long *local_18;
  
  if (*(char *)((long)param_1 + 0xa1) == '\0') {
    if ((*(long *)(param_1[3] + 0x18) == 0) || (param_1[2] != 0)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar1 = param_1 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
                    /* try { // try from 002c3518 to 002c351f has its CatchHandler @ 002c3590 */
    local_18 = param_1;
    lVar5 = FUN_002c384c(&local_18);
    puVar6 = (undefined8 *)param_1[2];
    param_1[2] = lVar5;
    if (puVar6 != (undefined8 *)0x0) {
                    /* try { // try from 002c3538 to 002c353b has its CatchHandler @ 002c358c */
      (**(code **)*puVar6)();
    }
    plVar1 = local_18;
    if (local_18 != (long *)0x0) {
      plVar2 = local_18 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*local_18 + 8))(local_18);
        FUN_0049e790(PTR_LAB_047cba48,plVar1);
        return;
      }
    }
  }
  return;
}


