/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00261a04; name: FUN_00261a04
 */


void FUN_00261a04(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = param_2[2];
  lVar4 = param_2[3];
  param_1[3] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[8] = 0;
  if (param_1 == param_2) {
    param_1[0xe] = 0;
  }
  else {
    puVar5 = (undefined8 *)param_2[8];
    if (puVar5 == (undefined8 *)0x0) {
      param_1[8] = 0;
    }
    else if (puVar5 == param_2 + 4) {
      param_1[8] = param_1 + 4;
      (**(code **)(*(long *)param_2[8] + 0x30))((long *)param_2[8],param_1 + 4);
    }
    else {
      param_1[8] = puVar5;
      param_2[8] = 0;
    }
    puVar6 = param_1 + 0xe;
    *puVar6 = 0;
    puVar5 = (undefined8 *)param_2[0xe];
    if (puVar5 == (undefined8 *)0x0) {
      *puVar6 = 0;
    }
    else if (puVar5 == param_2 + 10) {
      *puVar6 = param_1 + 10;
      (**(code **)(*(long *)param_2[0xe] + 0x30))((long *)param_2[0xe],param_1 + 10);
    }
    else {
      *puVar6 = puVar5;
      param_2[0xe] = 0;
    }
  }
  param_1[0x10] = param_2[0x10];
  lVar4 = param_2[0x11];
  param_1[0x11] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x12] = param_2[0x12];
  lVar4 = param_2[0x13];
  param_1[0x13] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x14] = param_2[0x14];
  lVar4 = param_2[0x15];
  param_1[0x15] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  param_1[0x17] = param_2[0x17];
  lVar4 = param_2[0x18];
  param_1[0x18] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar8 = param_2[0x1a];
  uVar7 = param_2[0x19];
  uVar9 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar9;
  param_1[0x1a] = uVar8;
  param_1[0x19] = uVar7;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
                    /* try { // try from 00261bc8 to 00261bcb has its CatchHandler @ 00261be0 */
  FUN_00200584(param_1 + 0x1d,param_2 + 0x1d);
  return;
}


