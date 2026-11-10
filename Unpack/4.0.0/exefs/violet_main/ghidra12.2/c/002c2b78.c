/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c2b78; name: FUN_002c2b78
 */


void FUN_002c2b78(long *param_1)

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
                    /* try { // try from 002c2bc4 to 002c2bcb has its CatchHandler @ 002c2c3c */
    local_18 = param_1;
    lVar5 = FUN_002c2ef8(&local_18);
    puVar6 = (undefined8 *)param_1[2];
    param_1[2] = lVar5;
    if (puVar6 != (undefined8 *)0x0) {
                    /* try { // try from 002c2be4 to 002c2be7 has its CatchHandler @ 002c2c38 */
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


