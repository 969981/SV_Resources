/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0127cc18; name: FUN_0127cc18
 */


void FUN_0127cc18(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  
  plVar1 = (long *)(param_1 + 0x1b0);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x1b8) == 0) {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_0127cc54;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x1b8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x1b8) == 0) {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar6;
            *(undefined8 *)(param_1 + 0x1b8) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0127cc54;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0127cc54:
  plVar7 = *(long **)(param_1 + 0x1d8);
  if (plVar7 != *(long **)(param_1 + 0x1e0)) {
    do {
      if (*plVar7 == *param_2) {
        FUN_0127d48c(param_1 + 0x1d8);
        break;
      }
      plVar7 = plVar7 + 2;
    } while (*(long **)(param_1 + 0x1e0) != plVar7);
  }
  do {
    lVar6 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x1b8);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x1b8) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x1b8);
    if (lVar2 != lVar6 || lVar3 != lVar4) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_0127cd08;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x1b4) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_0127cd08:
  if (!bVar8) {
    do {
      lVar6 = *plVar1;
      lVar4 = *(long *)(param_1 + 0x1b8);
      if (lVar6 != lVar2 || lVar4 != lVar3) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x0127cd58;
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x1b4) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar8 = true;
joined_r0x0127cd58:
    if (!bVar8) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x1b8);
        if (lVar2 != lVar6 || lVar3 != lVar4) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar6 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x0127cd58;
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x1b4) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar8 = true;
      lVar6 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x0127cd58;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c0));
  return;
}


