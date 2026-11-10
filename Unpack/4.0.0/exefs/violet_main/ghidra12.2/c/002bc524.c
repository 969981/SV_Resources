/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002bc524; name: FUN_002bc524
 */


void FUN_002bc524(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_047cc7d0 + 0x10);
                    /* try { // try from 002bc540 to 002bc593 has its CatchHandler @ 002bc614 */
  FUN_00373780(param_1 + 5);
  FUN_00373780(param_1 + 0x12);
  FUN_0036a810(param_1[8]);
  FUN_0036a810(param_1[0xd]);
  puVar4 = (undefined8 *)param_1[0x16];
  if ((puVar4 != (undefined8 *)0x0) && (plVar5 = (long *)*puVar4, plVar5 != (long *)0x0)) {
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)puVar4[3])(puVar4[4]);
    }
  }
  if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002bc60c to 002bc60f has its CatchHandler @ 002bc614 */
    abort();
  }
  FUN_0036b880();
  puVar4 = (undefined8 *)param_1[0x23];
  param_1[0x23] = 0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 002bc5a8 to 002bc5ab has its CatchHandler @ 002bc610 */
    (**(code **)*puVar4)();
  }
  FUN_002a515c(param_1 + 0x1f,param_1[0x20]);
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 8))(plVar5);
      FUN_0049e790(PTR_LAB_047cba48,plVar5);
      return;
    }
  }
  return;
}


