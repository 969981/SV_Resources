/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003290c4; name: FUN_003290c4
 */


void FUN_003290c4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (*(long *)(param_1[2] + 0x168) != 0) {
    return;
  }
  puVar6 = (undefined8 *)param_1[8];
  puVar8 = (undefined8 *)*param_2;
  if (puVar6 == puVar8) {
    return;
  }
  if (puVar6 != (undefined8 *)0x0) {
    plVar1 = puVar6 + 1;
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
      (**(code **)*puVar6)(puVar6);
      FUN_0049e790(PTR_LAB_047cba48,puVar6);
    }
  }
  param_1[8] = puVar8;
  plVar1 = param_1 + 1;
  *param_2 = 0;
  lVar4 = param_1[2];
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar6 = (undefined8 *)(lVar4 + 0x158);
  puVar8 = *(undefined8 **)(lVar4 + 0x158);
  if (*(undefined8 **)(lVar4 + 0x158) == (undefined8 *)0x0) {
    puVar9 = puVar6;
  }
  else {
    while( true ) {
      while (puVar9 = puVar8, param_1 < (undefined8 *)puVar8[4]) {
        if ((undefined8 *)*puVar8 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)*puVar8;
          goto joined_r0x00329190;
        }
        puVar6 = puVar8;
        puVar8 = (undefined8 *)*puVar8;
      }
      if (param_1 <= (undefined8 *)puVar8[4]) break;
      puVar6 = puVar8 + 1;
      if ((undefined8 *)*puVar6 == (undefined8 *)0x0) break;
      puVar8 = (undefined8 *)*puVar6;
    }
  }
  puVar5 = (undefined8 *)*puVar6;
  puVar8 = puVar6;
joined_r0x00329190:
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    puVar5[4] = param_1;
    puVar5[5] = 0;
    puVar5[2] = puVar9;
    *puVar5 = 0;
    puVar5[1] = 0;
    *puVar8 = puVar5;
    if (**(long **)(lVar4 + 0x150) == 0) {
      puVar6 = puVar5;
    }
    else {
      *(long *)(lVar4 + 0x150) = **(long **)(lVar4 + 0x150);
      puVar6 = (undefined8 *)*puVar8;
    }
    FUN_010108e0(*(undefined8 *)(lVar4 + 0x158),puVar6);
    *(long *)(lVar4 + 0x160) = *(long *)(lVar4 + 0x160) + 1;
    lVar4 = param_1[8];
    puVar6 = (undefined8 *)0x0;
    if (lVar4 != 0) goto LAB_003291a0;
LAB_00329230:
    uVar7 = 0;
    puVar8 = (undefined8 *)puVar5[5];
  }
  else {
    lVar4 = param_1[8];
    puVar6 = param_1;
    if (lVar4 == 0) goto LAB_00329230;
LAB_003291a0:
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar7 = param_1[8];
    puVar8 = (undefined8 *)puVar5[5];
  }
  if (puVar8 != (undefined8 *)0x0) {
    plVar1 = puVar8 + 1;
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
      (**(code **)*puVar8)(puVar8);
      FUN_0049e790(PTR_LAB_047cba48,puVar8);
      puVar5[5] = uVar7;
      goto joined_r0x003292f4;
    }
  }
  puVar5[5] = uVar7;
joined_r0x003292f4:
  if (puVar6 != (undefined8 *)0x0) {
    plVar1 = puVar6 + 1;
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
      (**(code **)*puVar6)(puVar6);
      FUN_0049e790(PTR_LAB_047cba48,puVar6);
      return;
    }
  }
  return;
}


