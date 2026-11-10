/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0193c918; name: FUN_0193c918
 */


void FUN_0193c918(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  
  plVar2 = (long *)(param_2 + 0x60);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0193c954;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0193c954;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0193c954:
  plVar2 = (long *)(param_2 + 0x290);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar11 = *plVar2;
    lVar9 = *(long *)(param_2 + 0x298);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar11;
      *(long *)(param_2 + 0x298) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0193c970:
  while ((lVar11 != 0 && (lVar5 != lVar11))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2a0));
    do {
      lVar11 = *plVar2;
      lVar9 = *(long *)(param_2 + 0x298);
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar11;
        *(long *)(param_2 + 0x298) = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar3 = *plVar2;
    if (lVar3 != lVar11 || *(long *)(param_2 + 0x298) != lVar9) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_0193c9a0;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar11;
      *(long *)(param_2 + 0x294) = lVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_0193c9a0:
  if (!bVar6) {
    lVar11 = lVar3;
    lVar9 = *(long *)(param_2 + 0x298);
    goto LAB_0193c970;
  }
  plVar7 = *(long **)(param_2 + 0x2b0);
  lVar5 = *(long *)(param_2 + 0x2e8);
  if ((lVar5 == 0) || (*plVar7 == param_3)) {
    plVar13 = plVar7;
LAB_0193c9f4:
    if (plVar13 == plVar7 + lVar5 * 4) goto LAB_0193ca40;
    if (*(char *)(*(long *)(param_2 + 0x348) + plVar13[3] * 0x130 + 0xf0) == '\0')
    goto LAB_0193ca40;
    lVar5 = *(long *)(param_2 + 0x348) + plVar13[3] * 0x130;
    uVar12 = *(undefined8 *)(lVar5 + 0xa8);
    param_1[3] = *(undefined8 *)(lVar5 + 0xb8);
    uVar10 = *(undefined8 *)(lVar5 + 0xa0);
    uVar8 = *(undefined8 *)(lVar5 + 0xb0);
    param_1[1] = uVar12;
    param_1[2] = uVar8;
    *param_1 = uVar10;
  }
  else {
    lVar11 = lVar5 * 0x20;
    plVar14 = plVar7;
    while (lVar11 = lVar11 + -0x20, lVar11 != 0) {
      plVar1 = plVar14 + 4;
      plVar13 = plVar14 + 4;
      plVar14 = plVar14 + 4;
      if (*plVar1 == param_3) goto LAB_0193c9f4;
    }
LAB_0193ca40:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  do {
    lVar5 = *plVar2;
    lVar11 = *(long *)(param_2 + 0x298);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar5;
      *(long *)(param_2 + 0x298) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar9 = *plVar2;
    lVar3 = *(long *)(param_2 + 0x298);
    if (lVar9 != lVar5 || lVar3 != lVar11) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_0193cac8;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar5;
      *(long *)(param_2 + 0x294) = lVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_0193cac8:
  if (!bVar6) {
    do {
      lVar5 = *plVar2;
      lVar11 = *(long *)(param_2 + 0x298);
      if (lVar5 != lVar9 || lVar11 != lVar3) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x0193cb3c;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9;
        *(long *)(param_2 + 0x294) = lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = true;
joined_r0x0193cb3c:
    if (!bVar6) {
      do {
        lVar9 = *plVar2;
        lVar3 = *(long *)(param_2 + 0x298);
        if (lVar9 != lVar5 || lVar3 != lVar11) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar9;
          lVar11 = lVar3;
          goto joined_r0x0193cb3c;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar5;
          *(long *)(param_2 + 0x294) = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar6 = true;
      lVar5 = lVar9;
      lVar11 = lVar3;
      goto joined_r0x0193cb3c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x2a0));
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  return;
}


