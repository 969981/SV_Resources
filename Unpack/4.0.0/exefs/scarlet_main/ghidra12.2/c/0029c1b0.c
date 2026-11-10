/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0029c1b0; name: FUN_0029c1b0
 */


void FUN_0029c1b0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = (undefined8 *)param_1[0xc];
  *param_1 = &PTR_LAB_0448df20;
  if (puVar5 == (undefined8 *)0x0) {
LAB_0029c1e8:
    puVar5 = (undefined8 *)param_1[10];
    param_1[10] = 0;
  }
  else {
    plVar6 = puVar5 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 != 0) goto LAB_0029c1e8;
    (**(code **)*puVar5)(puVar5);
    FUN_0049e790(PTR_LAB_047cba48,puVar5);
    puVar5 = (undefined8 *)param_1[10];
    param_1[10] = 0;
  }
  if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 0029c1fc to 0029c1ff has its CatchHandler @ 0029c320 */
    (**(code **)*puVar5)();
  }
  puVar5 = (undefined8 *)param_1[9];
  if (puVar5 != (undefined8 *)0x0) {
    plVar6 = puVar5 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)*puVar5)(puVar5);
      FUN_0049e790(PTR_LAB_047cba48,puVar5);
      plVar6 = (long *)param_1[8];
      goto joined_r0x0029c224;
    }
  }
  plVar6 = (long *)param_1[8];
joined_r0x0029c224:
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 8))(plVar6);
      FUN_0049e790(PTR_LAB_047cba48,plVar6);
    }
  }
  puVar5 = (undefined8 *)param_1[6];
  if (puVar5 != (undefined8 *)0x0) {
    plVar6 = puVar5 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)*puVar5)(puVar5);
      FUN_0049e790(PTR_LAB_047cba48,puVar5);
      FUN_0032d30c(param_1);
      return;
    }
  }
  FUN_0032d30c(param_1);
  return;
}


