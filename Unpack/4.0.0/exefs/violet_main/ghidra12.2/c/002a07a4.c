/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002a07a4; name: FUN_002a07a4
 */


void FUN_002a07a4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  plVar5 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0448e128;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 8))(plVar5);
      FUN_0049e790(PTR_LAB_047cba48,plVar5);
      puVar6 = (undefined8 *)param_1[7];
      param_1[2] = 0;
      goto joined_r0x002a07e4;
    }
  }
  puVar6 = (undefined8 *)param_1[7];
  param_1[2] = 0;
joined_r0x002a07e4:
  if (puVar6 != (undefined8 *)0x0) {
    plVar5 = puVar6 + 1;
    do {
      lVar4 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)*puVar6)(puVar6);
      FUN_0049e790(PTR_LAB_047cba48,puVar6);
    }
  }
  puVar6 = (undefined8 *)param_1[6];
  param_1[6] = 0;
  if (puVar6 != (undefined8 *)0x0) {
                    /* try { // try from 002a0814 to 002a0817 has its CatchHandler @ 002a08d8 */
    (**(code **)*puVar6)();
  }
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_1[5]);
  }
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 8))(plVar5);
      FUN_0049e790(PTR_LAB_047cba48,plVar5);
      return;
    }
  }
  return;
}


