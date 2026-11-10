/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0222ab84; name: FUN_0222ab84
 */


undefined4 FUN_0222ab84(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  
  plVar6 = (long *)(param_1 + 0x140);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0222abc0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
        while (*plVar6 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0222abc0;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0222abc0:
  plVar6 = *(long **)(param_1 + 0x178);
  plVar1 = *(long **)(param_1 + 0x180);
  uVar7 = 0x3f800000;
  if (plVar6 != plVar1) {
    while (*(long *)(*plVar6 + 0x1d0) != *param_2) {
      plVar6 = plVar6 + 1;
      if (plVar1 == plVar6) goto LAB_0222ac24;
    }
  }
  if ((plVar6 == plVar1) || (lVar4 = *plVar6, lVar4 == 0)) {
LAB_0222ac24:
    *(undefined8 *)(param_1 + 0x140) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x148));
    return uVar7;
  }
  plVar6 = (long *)(lVar4 + 0x60);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0222ac10;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0x68));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0x68));
        while (*plVar6 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0222ac10;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0222ac10:
  uVar7 = *(undefined4 *)(lVar4 + 0xf0);
  *(undefined8 *)(lVar4 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar4 + 0x68));
  goto LAB_0222ac24;
}


