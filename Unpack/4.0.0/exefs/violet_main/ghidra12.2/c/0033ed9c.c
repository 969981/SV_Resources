/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0033ed9c; name: FUN_0033ed9c
 */


void FUN_0033ed9c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *local_18;
  
  if ((char)param_1[0xb] != '\0') {
    return;
  }
  if (param_1[0xc] != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar4 = (long *)param_1[10];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4,1);
  }
  plVar4 = param_1 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = *plVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
                    /* try { // try from 0033edf8 to 0033edff has its CatchHandler @ 0033ee7c */
  local_18 = param_1;
  lVar5 = FUN_003401a8(&local_18,param_1 + 4);
  puVar6 = (undefined8 *)param_1[0xc];
  param_1[0xc] = lVar5;
  if (puVar6 != (undefined8 *)0x0) {
                    /* try { // try from 0033ee18 to 0033ee1b has its CatchHandler @ 0033ee78 */
    (**(code **)*puVar6)();
  }
  plVar4 = local_18;
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*local_18 + 8))(local_18);
      FUN_0049e790(PTR_LAB_047cba48,plVar4);
    }
  }
  FUN_0033ef18(param_1[0xc]);
  return;
}


