/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f08b20; name: FUN_00f08b20
 */


void FUN_00f08b20(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long *plVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 1) == '\0') {
    return;
  }
  plVar6 = (long *)*param_1;
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
      goto LAB_00f08b6c;
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
LAB_00f08b6c:
  if (!bVar7) {
    do {
      lVar3 = *plVar6;
      lVar4 = plVar6[1];
      if (lVar3 != lVar1 || lVar4 != lVar2) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x00f08ba8;
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
joined_r0x00f08ba8:
    if (!bVar7) {
      do {
        lVar1 = *plVar6;
        lVar2 = plVar6[1];
        if (lVar1 != lVar3 || lVar2 != lVar4) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar3 = lVar1;
          lVar4 = lVar2;
          goto joined_r0x00f08ba8;
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
      goto joined_r0x00f08ba8;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(plVar6 + 2));
  return;
}


