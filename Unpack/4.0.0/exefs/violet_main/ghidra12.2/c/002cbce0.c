/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002cbce0; name: FUN_002cbce0
 */


void FUN_002cbce0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  *param_1 = (long)(PTR_DAT_047cc888 + 0x10);
  plVar5 = param_1 + 2;
                    /* try { // try from 002cbd1c to 002cbd27 has its CatchHandler @ 002cbe38 */
  FUN_002bf7fc(*plVar5,param_1[3],param_1[4],param_1[5],param_1[6],param_1[7],param_1[8],param_1 + 9
               ,param_1);
  plVar7 = (long *)*plVar5;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar7 + 8))(plVar7);
      FUN_0049e790(PTR_LAB_047cba48,plVar7);
    }
  }
  param_1[2] = 0;
  FUN_002c1d5c(param_1 + 0x12,param_1[0x13]);
                    /* try { // try from 002cbd5c to 002cbd5f has its CatchHandler @ 002cbe34 */
  FUN_0038db20(param_1 + 0xe);
  puVar6 = (undefined8 *)param_1[9];
  if (puVar6 != (undefined8 *)0x0) {
    plVar7 = puVar6 + 1;
    do {
      lVar4 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)*puVar6)(puVar6);
      FUN_0049e790(PTR_LAB_047cba48,puVar6);
      plVar5 = (long *)*plVar5;
      goto joined_r0x002cbd84;
    }
  }
  plVar5 = (long *)*plVar5;
joined_r0x002cbd84:
  if (plVar5 != (long *)0x0) {
    plVar7 = plVar5 + 1;
    do {
      lVar4 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 8))(plVar5);
      FUN_0049e790(PTR_LAB_047cba48,plVar5);
      return;
    }
  }
  return;
}


