/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033ba98; name: FUN_0033ba98
 */


void FUN_0033ba98(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1[1]);
    puVar5 = (undefined8 *)*param_1;
    if (puVar5 != (undefined8 *)0x0) {
      plVar3 = puVar5 + 1;
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        (**(code **)*puVar5)(puVar5);
        FUN_0049e790(PTR_LAB_047cba48,puVar5);
      }
    }
    *param_1 = 0;
  }
  FUN_0038db40(param_1 + 4);
  if (*(char *)((long)param_1 + 0x91) != '\0') {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0033bba8 to 0033bbab has its CatchHandler @ 0033bbac */
    abort();
  }
  puVar5 = (undefined8 *)param_1[9];
  *(undefined1 *)((long)param_1 + 0x91) = 1;
  param_1[9] = 0;
  if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 0033bb10 to 0033bb13 has its CatchHandler @ 0033bbc4 */
    (**(code **)*puVar5)();
  }
  puVar5 = (undefined8 *)param_1[0x11];
  if (puVar5 != (undefined8 *)0x0) {
    plVar3 = puVar5 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)*puVar5)(puVar5);
      FUN_0049e790(PTR_LAB_047cba48,puVar5);
    }
  }
  param_1[0x11] = 0;
  FUN_0033d0cc(param_1 + 0x16,param_1[0x17]);
  param_1[0x16] = (long)(param_1 + 0x17);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
                    /* try { // try from 0033bb4c to 0033bb53 has its CatchHandler @ 0033bbc8 */
  FUN_0038db60(param_1 + 4);
  return;
}


