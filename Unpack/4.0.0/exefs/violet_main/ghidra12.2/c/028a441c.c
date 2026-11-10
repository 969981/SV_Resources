/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a441c; name: FUN_028a441c
 */


long FUN_028a441c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  
  plVar1 = (long *)(param_1 + 0x10);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x18) == 0) {
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0x18) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_028a4450;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x20));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x18) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x20));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x18) == 0) {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar7;
            *(undefined8 *)(param_1 + 0x18) = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_028a4450;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0x18) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_028a4450:
  lVar7 = *(long *)(param_1 + 0x3b0);
  lVar9 = *(long *)(param_1 + 0x3b8);
  FUN_017cb1e8(param_1 + 0x3b0,lVar7);
  do {
    lVar4 = *plVar1;
    lVar5 = *(long *)(param_1 + 0x18);
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x18) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar2 != lVar4 || lVar3 != lVar5) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_028a44ec;
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x14) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar8 = true;
LAB_028a44ec:
  if (!bVar8) {
    do {
      lVar4 = *plVar1;
      lVar5 = *(long *)(param_1 + 0x18);
      if (lVar4 != lVar2 || lVar5 != lVar3) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x028a4554;
      }
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x14) = lVar3;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar8 = true;
joined_r0x028a4554:
    if (!bVar8) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar2 != lVar4 || lVar3 != lVar5) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar4 = lVar2;
          lVar5 = lVar3;
          goto joined_r0x028a4554;
        }
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x14) = lVar5;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar8 = true;
      lVar4 = lVar2;
      lVar5 = lVar3;
      goto joined_r0x028a4554;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x20));
  return (lVar9 - lVar7 >> 3) * -0x71c71c71c71c71c7;
}


