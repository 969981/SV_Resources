/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f0893c; name: FUN_00f0893c
 */


void FUN_00f0893c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long *plVar6;
  bool bVar7;
  undefined8 local_30;
  undefined1 local_28;
  
  local_30 = 0;
  local_28 = 0;
  if (*(char *)(param_1 + 0x150) == '\0') {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    plVar6 = *(long **)(param_1 + 0x148);
    do {
      lVar3 = *plVar6;
      lVar4 = plVar6[1];
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar7) {
        *plVar6 = lVar3;
        plVar6[1] = lVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      lVar1 = *plVar6;
      lVar2 = plVar6[1];
      if (lVar1 != lVar3 || lVar2 != lVar4) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_00f089a8;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar7) {
        *plVar6 = lVar3;
        *(long *)((long)plVar6 + 4) = lVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
LAB_00f089a8:
    if (!bVar7) {
      do {
        lVar3 = *plVar6;
        lVar4 = plVar6[1];
        if (lVar3 != lVar1 || lVar4 != lVar2) {
          bVar7 = false;
          ClearExclusiveLocal();
          goto joined_r0x00f08a70;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar7) {
          *plVar6 = lVar1;
          *(long *)((long)plVar6 + 4) = lVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
joined_r0x00f08a70:
      if (!bVar7) {
        do {
          lVar1 = *plVar6;
          lVar2 = plVar6[1];
          if (lVar1 != lVar3 || lVar2 != lVar4) {
            bVar7 = false;
            ClearExclusiveLocal();
            lVar3 = lVar1;
            lVar4 = lVar2;
            goto joined_r0x00f08a70;
          }
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar7) {
            *plVar6 = lVar3;
            *(long *)((long)plVar6 + 4) = lVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar7 = true;
        lVar3 = lVar1;
        lVar4 = lVar2;
        goto joined_r0x00f08a70;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar6 + 2));
  }
  *(undefined8 *)(param_1 + 0x148) = local_30;
  *(undefined1 *)(param_1 + 0x150) = local_28;
  local_30 = 0;
  local_28 = 0;
  FUN_00f08b20(&local_30);
  if (*(char *)(param_1 + 0x160) != '\0') {
    plVar6 = *(long **)(param_1 + 0x158);
    do {
      lVar3 = *plVar6;
      lVar4 = plVar6[1];
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar7) {
        *plVar6 = lVar3;
        plVar6[1] = lVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      lVar1 = *plVar6;
      lVar2 = plVar6[1];
      if (lVar1 != lVar3 || lVar2 != lVar4) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_00f08a1c;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar7) {
        *plVar6 = 0;
        *(long *)((long)plVar6 + 4) = lVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
LAB_00f08a1c:
    if (!bVar7) {
      do {
        lVar3 = *plVar6;
        lVar4 = plVar6[1];
        if (lVar3 != lVar1 || lVar4 != lVar2) {
          bVar7 = false;
          ClearExclusiveLocal();
          goto joined_r0x00f08ae0;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar7) {
          *plVar6 = 0;
          *(long *)((long)plVar6 + 4) = lVar2;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
joined_r0x00f08ae0:
      if (!bVar7) {
        do {
          lVar1 = *plVar6;
          lVar2 = plVar6[1];
          if (lVar1 != lVar3 || lVar2 != lVar4) {
            bVar7 = false;
            ClearExclusiveLocal();
            lVar3 = lVar1;
            lVar4 = lVar2;
            goto joined_r0x00f08ae0;
          }
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar7) {
            *plVar6 = 0;
            *(long *)((long)plVar6 + 4) = lVar4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar7 = true;
        lVar3 = lVar1;
        lVar4 = lVar2;
        goto joined_r0x00f08ae0;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar6 + 2));
  }
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined1 *)(param_1 + 0x160) = 0;
  return;
}


