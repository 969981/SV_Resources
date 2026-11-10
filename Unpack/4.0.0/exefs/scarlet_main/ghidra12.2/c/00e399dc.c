/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e399dc; name: FUN_00e399dc
 */


long FUN_00e399dc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  
  plVar7 = (long *)(param_1 + 8);
  lVar6 = *plVar7;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar6) {
    lVar4 = nn::os::GetCurrentThread();
    bVar8 = false;
LAB_00e39b08:
    if (*plVar7 == 0) goto code_r0x00e39b10;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
    bVar8 = false;
    do {
      if (*plVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
          while (*plVar7 == 0) {
            cVar2 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar8) {
              *plVar7 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            bVar8 = false;
            if (cVar2 == '\0') goto LAB_00e39a0c;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_00e39a0c;
  }
  bVar8 = true;
LAB_00e39a0c:
  plVar7 = *(long **)(param_1 + 0x20);
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar7 != plVar1) {
    do {
      if ((*plVar7 != 0) && (uVar5 = FUN_00e39b74(*plVar7 + 8), (uVar5 & 1) != 0)) {
        uVar5 = (**(code **)(*(long *)*plVar7 + 0xc0))();
        if ((uVar5 & 1) == 0) goto LAB_00e39a50;
      }
      plVar7 = plVar7 + 1;
    } while (plVar1 != plVar7);
    plVar7 = plVar1;
LAB_00e39a50:
    if ((plVar7 != *(long **)(param_1 + 0x28)) && (*plVar7 != 0)) {
      lVar4 = *plVar7 + -0x20;
      goto LAB_00e39ab0;
    }
  }
  plVar7 = *(long **)(param_1 + 0x58);
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar7 != plVar1) {
    do {
      if ((*plVar7 != 0) && (uVar5 = FUN_00e39b74(*plVar7 + 8), (uVar5 & 1) != 0)) {
        uVar5 = (**(code **)(*(long *)*plVar7 + 0xc0))();
        if ((uVar5 & 1) == 0) goto LAB_00e39aa0;
      }
      plVar7 = plVar7 + 1;
    } while (plVar1 != plVar7);
    plVar7 = plVar1;
LAB_00e39aa0:
    if (plVar7 != *(long **)(param_1 + 0x60)) {
      lVar4 = 0;
      if (*plVar7 != 0) {
        lVar4 = *plVar7 + -0x20;
      }
      goto LAB_00e39ab0;
    }
  }
  lVar4 = 0;
LAB_00e39ab0:
  if (!bVar8) {
    *(undefined8 *)(param_1 + 8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
  }
  return lVar4;
code_r0x00e39b10:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar3) {
    *plVar7 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_00e39a0c;
  goto LAB_00e39b08;
}


