/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01026aa0; name: FUN_01026aa0
 */


long FUN_01026aa0(long param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  
  plVar6 = (long *)(param_1 + 8);
  lVar5 = *plVar6;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 != lVar5) {
    lVar3 = nn::os::GetCurrentThread();
LAB_01026ad0:
    if (*plVar6 == 0) goto code_r0x01026ad8;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
    do {
      if (*plVar6 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
          while (*plVar6 == 0) {
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar7) {
              *plVar6 = lVar3;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01026ae0;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar7) {
        *plVar6 = lVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01026ae0:
    bVar7 = false;
    goto LAB_01026ae4;
  }
  bVar7 = true;
LAB_01026ae4:
  plVar6 = *(long **)(param_1 + 0x20);
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar6 != plVar1) {
    do {
      if ((*plVar6 != 0) && (uVar4 = FUN_01026c20(*plVar6 + 8), (uVar4 & 1) != 0)) {
        uVar4 = (**(code **)(*(long *)*plVar6 + 0xc0))();
        if ((uVar4 & 1) == 0) goto LAB_01026b28;
      }
      plVar6 = plVar6 + 1;
    } while (plVar1 != plVar6);
    plVar6 = plVar1;
LAB_01026b28:
    if ((plVar6 != *(long **)(param_1 + 0x28)) && (*plVar6 != 0)) {
      lVar3 = *plVar6 + -0x20;
      goto LAB_01026b88;
    }
  }
  plVar6 = *(long **)(param_1 + 0x58);
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar6 != plVar1) {
    do {
      if ((*plVar6 != 0) && (uVar4 = FUN_01026c20(*plVar6 + 8), (uVar4 & 1) != 0)) {
        uVar4 = (**(code **)(*(long *)*plVar6 + 0xc0))();
        if ((uVar4 & 1) == 0) goto LAB_01026b78;
      }
      plVar6 = plVar6 + 1;
    } while (plVar1 != plVar6);
    plVar6 = plVar1;
LAB_01026b78:
    if (plVar6 != *(long **)(param_1 + 0x60)) {
      lVar3 = 0;
      if (*plVar6 != 0) {
        lVar3 = *plVar6 + -0x20;
      }
      goto LAB_01026b88;
    }
  }
  lVar3 = 0;
LAB_01026b88:
  if (!bVar7) {
    *(undefined8 *)(param_1 + 8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
  }
  return lVar3;
code_r0x01026ad8:
  cVar2 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar7) {
    *plVar6 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01026ae0;
  goto LAB_01026ad0;
}


