/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f8230; name: FUN_002f8230
 */


void FUN_002f8230(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_04494108;
                    /* try { // try from 002f8248 to 002f828b has its CatchHandler @ 002f83c8 */
  FUN_0038db20(param_1 + 4);
  FUN_0038c090(param_1[2]);
  FUN_0038c170(param_1[0x41]);
  if (param_1[9] != 0) {
    FUN_00350f40();
  }
  if (param_1[10] != 0) {
    FUN_00368470();
    free((void *)param_1[10]);
  }
  free((void *)param_1[0xe]);
  FUN_00368470(param_1 + 0xf);
  plVar4 = (long *)param_1[0x40];
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
      puVar5 = (undefined8 *)param_1[3];
      param_1[0x40] = 0;
      goto joined_r0x002f8338;
    }
  }
  puVar5 = (undefined8 *)param_1[3];
  param_1[0x40] = 0;
joined_r0x002f8338:
  if (puVar5 == (undefined8 *)0x0) {
    param_1[3] = 0;
    return;
  }
  plVar4 = puVar5 + 1;
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
    (**(code **)*puVar5)(puVar5);
    FUN_0049e790(PTR_LAB_047cba48,puVar5);
    plVar4 = (long *)param_1[0x40];
    param_1[3] = 0;
  }
  else {
    plVar4 = (long *)param_1[0x40];
    param_1[3] = 0;
  }
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
      puVar5 = (undefined8 *)param_1[3];
    }
    else {
      puVar5 = (undefined8 *)param_1[3];
    }
    if (puVar5 != (undefined8 *)0x0) {
      plVar4 = puVar5 + 1;
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
        (**(code **)*puVar5)(puVar5);
        FUN_0049e790(PTR_LAB_047cba48,puVar5);
        return;
      }
    }
  }
  return;
}


