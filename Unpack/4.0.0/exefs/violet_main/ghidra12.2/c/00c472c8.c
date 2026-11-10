/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c472c8; name: FUN_00c472c8
 */


long FUN_00c472c8(long param_1,short param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  
  plVar1 = (long *)(param_1 + 0x450);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x458);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x458) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00c47300:
  while ((lVar8 != 0 && (lVar6 != lVar8))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x460));
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x458);
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x458) = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar8 || *(long *)(param_1 + 0x458) != lVar9) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00c47330;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x454) = lVar9 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_00c47330:
  if (!bVar7) {
    lVar8 = lVar2;
    lVar9 = *(long *)(param_1 + 0x458);
    goto LAB_00c47300;
  }
  sVar4 = *(short *)(*(long *)(param_1 + 0xa0) + (long)param_2 * 2);
  lVar6 = *(long *)(param_1 + 0x248);
  do {
    lVar8 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x458);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x458) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x458);
    if (lVar2 != lVar8 || lVar3 != lVar9) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00c47390;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x454) = lVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_00c47390:
  if (!bVar7) {
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x458);
      if (lVar8 != lVar2 || lVar9 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c47404;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar2;
        *(long *)(param_1 + 0x454) = lVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
joined_r0x00c47404:
    if (!bVar7) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x458);
        if (lVar2 != lVar8 || lVar3 != lVar9) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar8 = lVar2;
          lVar9 = lVar3;
          goto joined_r0x00c47404;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar8;
          *(long *)(param_1 + 0x454) = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
      lVar8 = lVar2;
      lVar9 = lVar3;
      goto joined_r0x00c47404;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x460));
  return lVar6 + (long)sVar4 * 0x30;
}


