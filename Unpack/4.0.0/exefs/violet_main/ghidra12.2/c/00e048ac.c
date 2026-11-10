/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e048ac; name: FUN_00e048ac
 */


long FUN_00e048ac(long param_1)

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
LAB_00e048dc:
    if (*plVar6 == 0) goto code_r0x00e048e4;
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
            if (cVar2 == '\0') goto LAB_00e048ec;
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
LAB_00e048ec:
    bVar7 = false;
    goto LAB_00e048f0;
  }
  bVar7 = true;
LAB_00e048f0:
  plVar6 = *(long **)(param_1 + 0x20);
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar6 != plVar1) {
    do {
      if ((*plVar6 != 0) && (uVar4 = FUN_00e04a2c(*plVar6 + 8), (uVar4 & 1) != 0)) {
        uVar4 = (**(code **)(*(long *)*plVar6 + 0xc0))();
        if ((uVar4 & 1) == 0) goto LAB_00e04934;
      }
      plVar6 = plVar6 + 1;
    } while (plVar1 != plVar6);
    plVar6 = plVar1;
LAB_00e04934:
    if ((plVar6 != *(long **)(param_1 + 0x28)) && (*plVar6 != 0)) {
      lVar3 = *plVar6 + -0x20;
      goto LAB_00e04994;
    }
  }
  plVar6 = *(long **)(param_1 + 0x58);
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar6 != plVar1) {
    do {
      if ((*plVar6 != 0) && (uVar4 = FUN_00e04a2c(*plVar6 + 8), (uVar4 & 1) != 0)) {
        uVar4 = (**(code **)(*(long *)*plVar6 + 0xc0))();
        if ((uVar4 & 1) == 0) goto LAB_00e04984;
      }
      plVar6 = plVar6 + 1;
    } while (plVar1 != plVar6);
    plVar6 = plVar1;
LAB_00e04984:
    if (plVar6 != *(long **)(param_1 + 0x60)) {
      lVar3 = 0;
      if (*plVar6 != 0) {
        lVar3 = *plVar6 + -0x20;
      }
      goto LAB_00e04994;
    }
  }
  lVar3 = 0;
LAB_00e04994:
  if (!bVar7) {
    *(undefined8 *)(param_1 + 8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
  }
  return lVar3;
code_r0x00e048e4:
  cVar2 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar7) {
    *plVar6 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_00e048ec;
  goto LAB_00e048dc;
}


