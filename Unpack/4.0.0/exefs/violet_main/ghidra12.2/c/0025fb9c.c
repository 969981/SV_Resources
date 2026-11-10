/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025fb9c; name: FUN_0025fb9c
 */


void FUN_0025fb9c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
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
  if (param_1 != param_2) {
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
  }
  param_1[10] = param_2[10];
  lVar4 = param_2[0xb];
  param_1[0xb] = lVar4;
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
  param_1[0xc] = param_2[0xc];
  lVar4 = param_2[0xd];
  param_1[0xd] = lVar4;
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
  param_1[0xe] = param_2[0xe];
  lVar4 = param_2[0xf];
  param_1[0xf] = lVar4;
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
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  param_1[0x11] = param_2[0x11];
  lVar4 = param_2[0x12];
  param_1[0x12] = lVar4;
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
  uVar7 = param_2[0x14];
  uVar6 = param_2[0x13];
  uVar8 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar8;
  param_1[0x14] = uVar7;
  param_1[0x13] = uVar6;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
                    /* try { // try from 0025fd00 to 0025fd03 has its CatchHandler @ 0025fd14 */
  FUN_00203970(param_1 + 0x17,param_2 + 0x17);
  return;
}


