/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0154b804; name: FUN_0154b804
 */


void FUN_0154b804(long param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  
  plVar1 = (long *)(param_1 + 0x130);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x138) == 0) {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0x138) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_0154b840;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x138) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x138) == 0) {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar6;
            *(undefined8 *)(param_1 + 0x138) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0154b840;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0x138) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0154b840:
  *(undefined4 *)(param_1 + 0x150) = param_2;
  lVar6 = DAT_0485a0e8;
  plVar2 = (long *)(DAT_0485a0e8 + 0xe08);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_0154b868;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xe10));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xe10));
        while (*plVar2 == 0) {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0154b868;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0154b868:
  if (1 < (ulong)(*(long *)(lVar6 + 0xdd0) - *(long *)(lVar6 + 0xdc8) >> 3)) {
    FUN_011e4ae0();
  }
  *(undefined8 *)(lVar6 + 0xe08) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0xe10));
  do {
    lVar6 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x138);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x138) = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x138);
    if (lVar3 != lVar6 || lVar4 != lVar7) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_0154b960;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x134) = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_0154b960:
  if (!bVar8) {
    do {
      lVar6 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x138);
      if (lVar6 != lVar3 || lVar7 != lVar4) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x0154b9a8;
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x134) = lVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar8 = true;
joined_r0x0154b9a8:
    if (!bVar8) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x138);
        if (lVar3 != lVar6 || lVar4 != lVar7) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar6 = lVar3;
          lVar7 = lVar4;
          goto joined_r0x0154b9a8;
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x134) = lVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar8 = true;
      lVar6 = lVar3;
      lVar7 = lVar4;
      goto joined_r0x0154b9a8;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x140));
  return;
}


