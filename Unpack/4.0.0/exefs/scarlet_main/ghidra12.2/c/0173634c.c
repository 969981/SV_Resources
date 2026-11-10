/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0173634c; name: FUN_0173634c
 */


long FUN_0173634c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = (long *)(param_1 + 8);
  lVar6 = *plVar7;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 != lVar6) {
    lVar3 = nn::os::GetCurrentThread();
LAB_01736384:
    if (*plVar7 == 0) goto code_r0x0173638c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
    do {
      if (*plVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
          while (*plVar7 == 0) {
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = lVar3;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01736394;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01736394:
    bVar5 = false;
    goto LAB_01736398;
  }
  bVar5 = true;
LAB_01736398:
  plVar7 = *(long **)(param_1 + 0x20);
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar7 != plVar1) {
    do {
      if (((*plVar7 != 0) && (uVar4 = FUN_0144a7e0(*plVar7 + 8), (uVar4 & 1) != 0)) &&
         (uVar4 = (**(code **)(*(long *)*plVar7 + 0xc0))(), (uVar4 & 1) == 0)) {
        lVar3 = param_2[1];
        lVar6 = *(long *)*param_2;
        *(long *)*param_2 = lVar6 + 1;
        if (lVar3 == lVar6) goto LAB_017363f4;
      }
      plVar7 = plVar7 + 1;
    } while (plVar1 != plVar7);
    plVar7 = plVar1;
LAB_017363f4:
    if ((plVar7 != *(long **)(param_1 + 0x28)) && (*plVar7 != 0)) {
      lVar3 = *plVar7 + -0x20;
      goto LAB_017364d4;
    }
  }
  plVar7 = *(long **)(param_1 + 0x58);
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar7 != plVar1) {
    do {
      if (((*plVar7 != 0) && (uVar4 = FUN_0144a7e0(*plVar7 + 8), (uVar4 & 1) != 0)) &&
         (uVar4 = (**(code **)(*(long *)*plVar7 + 0xc0))(), (uVar4 & 1) == 0)) {
        lVar3 = param_2[1];
        lVar6 = *(long *)*param_2;
        *(long *)*param_2 = lVar6 + 1;
        if (lVar3 == lVar6) goto LAB_0173646c;
      }
      plVar7 = plVar7 + 1;
    } while (plVar1 != plVar7);
    plVar7 = plVar1;
LAB_0173646c:
    if (plVar7 != *(long **)(param_1 + 0x60)) {
      lVar3 = 0;
      if (*plVar7 != 0) {
        lVar3 = *plVar7 + -0x20;
      }
      goto LAB_017364d4;
    }
  }
  lVar3 = 0;
LAB_017364d4:
  if (!bVar5) {
    *(undefined8 *)(param_1 + 8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
  }
  return lVar3;
code_r0x0173638c:
  cVar2 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar5) {
    *plVar7 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01736394;
  goto LAB_01736384;
}


