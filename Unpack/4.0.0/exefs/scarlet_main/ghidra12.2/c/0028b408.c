/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0028b408; name: FUN_0028b408
 */


void FUN_0028b408(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  *param_1 = &PTR_LAB_0448d570;
                    /* try { // try from 0028b424 to 0028b427 has its CatchHandler @ 0028b67c */
  FUN_00343d90(param_1[9]);
  puVar7 = (undefined8 *)param_1[0x1d];
  if (puVar7 == (undefined8 *)0x0) {
LAB_0028b448:
    puVar7 = (undefined8 *)param_1[0x1b];
    param_1[0x1b] = 0;
  }
  else {
    plVar8 = puVar7 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 != 0) goto LAB_0028b448;
    (**(code **)*puVar7)(puVar7);
    FUN_0049e790(PTR_LAB_047cba48,puVar7);
    puVar7 = (undefined8 *)param_1[0x1b];
    param_1[0x1b] = 0;
  }
  if (puVar7 != (undefined8 *)0x0) {
                    /* try { // try from 0028b45c to 0028b45f has its CatchHandler @ 0028b678 */
    (**(code **)*puVar7)();
  }
  puVar7 = (undefined8 *)param_1[0x1a];
  if (puVar7 == (undefined8 *)0x0) {
LAB_0028b480:
    puVar7 = (undefined8 *)param_1[0x19];
  }
  else {
    plVar8 = puVar7 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 != 0) goto LAB_0028b480;
    (**(code **)*puVar7)(puVar7);
    FUN_0049e790(PTR_LAB_047cba48,puVar7);
    puVar7 = (undefined8 *)param_1[0x19];
  }
  if (puVar7 != (undefined8 *)0x0) {
    plVar8 = puVar7 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)*puVar7)(puVar7);
      FUN_0049e790(PTR_LAB_047cba48,puVar7);
    }
  }
  if (param_1[0x16] != 0) {
    param_1[0x17] = param_1[0x16];
    FUN_0049e790(PTR_LAB_047cba48);
  }
  uVar6 = param_1[0xf];
  uVar4 = uVar6 & 1;
  if ((uVar6 & 1) == 0) {
    puVar7 = param_1 + 0x10;
  }
  else {
    puVar7 = (undefined8 *)param_1[0x10];
  }
  if ((uVar6 >> 1 != 0) && (uVar6 = uVar6 >> 1, puVar7 != (undefined8 *)0x0)) {
    puVar7 = puVar7 + uVar6 * 3;
    do {
      uVar6 = uVar6 - 1;
      FUN_0028bf34(puVar7 + -3,puVar7[-2]);
      puVar7 = puVar7 + -3;
    } while (uVar6 != 0);
    uVar4 = param_1[0xf] & 1;
  }
  if (uVar4 != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_1[0x10]);
  }
  puVar7 = (undefined8 *)param_1[0xd];
  param_1[0xd] = 0;
  if (puVar7 != (undefined8 *)0x0) {
                    /* try { // try from 0028b538 to 0028b53b has its CatchHandler @ 0028b674 */
    (**(code **)*puVar7)();
  }
  plVar8 = (long *)param_1[0xc];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
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
      (**(code **)(*plVar8 + 8))(plVar8);
      FUN_0049e790(PTR_LAB_047cba48,plVar8);
      puVar7 = (undefined8 *)param_1[10];
      goto joined_r0x0028b560;
    }
  }
  puVar7 = (undefined8 *)param_1[10];
joined_r0x0028b560:
  if (puVar7 != (undefined8 *)0x0) {
    plVar8 = puVar7 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)*puVar7)(puVar7);
      FUN_0049e790(PTR_LAB_047cba48,puVar7);
    }
  }
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_1[8]);
  }
  FUN_0032d30c(param_1);
  return;
}


