/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e6fc34; name: FUN_00e6fc34
 */


undefined1  [16] FUN_00e6fc34(long param_1,short param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined1 auVar4 [16];
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  
  plVar1 = (long *)(param_1 + 0x450);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x458);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x458) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00e6fc70:
  while ((lVar7 != 0 && (lVar5 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x460));
    do {
      lVar7 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x458);
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x458) = lVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar7 || *(long *)(param_1 + 0x458) != lVar8) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00e6fca0;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x454) = lVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_00e6fca0:
  if (!bVar6) {
    lVar7 = lVar2;
    lVar8 = *(long *)(param_1 + 0x458);
    goto LAB_00e6fc70;
  }
  auVar4 = *(undefined1 (*) [16])
            (*(long *)(param_1 + 0x360) +
            (long)*(short *)(*(long *)(param_1 + 0xa0) + (long)param_2 * 2) * 0x40);
  do {
    lVar5 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x458);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x458) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar8 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x458);
    if (lVar8 != lVar5 || lVar2 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00e6fd20;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x454) = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_00e6fd20:
  if (!bVar6) {
    do {
      lVar5 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x458);
      if (lVar5 != lVar8 || lVar7 != lVar2) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x00e6fd98;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x454) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar6 = true;
joined_r0x00e6fd98:
    if (!bVar6) {
      do {
        lVar8 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x458);
        if (lVar8 != lVar5 || lVar2 != lVar7) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar8;
          lVar7 = lVar2;
          goto joined_r0x00e6fd98;
        }
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar5;
          *(long *)(param_1 + 0x454) = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar6 = true;
      lVar5 = lVar8;
      lVar7 = lVar2;
      goto joined_r0x00e6fd98;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x460));
  return auVar4;
}


