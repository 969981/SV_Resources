/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002b3ea8; name: FUN_002b3ea8
 */


void FUN_002b3ea8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long *local_18;
  
  if (param_1[6] == 0) {
    plVar1 = param_1 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
                    /* try { // try from 002b3ee8 to 002b3eef has its CatchHandler @ 002b3f68 */
    local_18 = param_1;
    lVar5 = FUN_002c31c8(&local_18);
    puVar6 = (undefined8 *)param_1[6];
    param_1[6] = lVar5;
    if (puVar6 != (undefined8 *)0x0) {
                    /* try { // try from 002b3f08 to 002b3f0b has its CatchHandler @ 002b3f64 */
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
  else if (*(long *)(param_1[6] + 0x10) != 0) {
    FUN_002b3fb4();
    return;
  }
  return;
}


