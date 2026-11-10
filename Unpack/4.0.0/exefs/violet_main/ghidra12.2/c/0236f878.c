/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0236f878; name: FUN_0236f878
 */


undefined1  [16] FUN_0236f878(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  undefined1 auVar5 [16];
  long lVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  plVar2 = (long *)(param_1 + 0x60);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0236f8b4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x68));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x68));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0236f8b4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0236f8b4:
  plVar2 = (long *)(param_1 + 0x290);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar10 = *plVar2;
    lVar9 = *(long *)(param_1 + 0x298);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar10;
      *(long *)(param_1 + 0x298) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0236f8d0:
  while ((lVar10 != 0 && (lVar6 != lVar10))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a0));
    do {
      lVar10 = *plVar2;
      lVar9 = *(long *)(param_1 + 0x298);
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar10;
        *(long *)(param_1 + 0x298) = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar3 = *plVar2;
    if (lVar3 != lVar10 || *(long *)(param_1 + 0x298) != lVar9) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_0236f900;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar10;
      *(long *)(param_1 + 0x294) = lVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_0236f900:
  if (!bVar7) {
    lVar10 = lVar3;
    lVar9 = *(long *)(param_1 + 0x298);
    goto LAB_0236f8d0;
  }
  plVar8 = *(long **)(param_1 + 0x2b0);
  lVar6 = *(long *)(param_1 + 0x2e8);
  if ((lVar6 == 0) || (*plVar8 == param_2)) {
    plVar11 = plVar8;
LAB_0236f958:
    uVar13 = 0;
    uVar14 = 0;
    if (plVar11 == plVar8 + lVar6 * 4) goto LAB_0236f9e0;
    if (*(char *)(*(long *)(param_1 + 0x348) + plVar11[3] * 0x130 + 0xf1) != '\0') {
      lVar6 = *(long *)(param_1 + 0x348) + plVar11[3] * 0x130;
      uVar14 = *(undefined8 *)(lVar6 + 200);
      uVar13 = *(undefined8 *)(lVar6 + 0xc0);
    }
  }
  else {
    lVar10 = lVar6 * 0x20;
    plVar12 = plVar8;
    while (lVar10 = lVar10 + -0x20, lVar10 != 0) {
      plVar1 = plVar12 + 4;
      plVar11 = plVar12 + 4;
      plVar12 = plVar12 + 4;
      if (*plVar1 == param_2) goto LAB_0236f958;
    }
LAB_0236f9e0:
    uVar14 = 0;
    uVar13 = 0;
  }
  do {
    lVar6 = *plVar2;
    lVar10 = *(long *)(param_1 + 0x298);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar6;
      *(long *)(param_1 + 0x298) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar9 = *plVar2;
    lVar3 = *(long *)(param_1 + 0x298);
    if (lVar9 != lVar6 || lVar3 != lVar10) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_0236fa24;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar6;
      *(long *)(param_1 + 0x294) = lVar10 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_0236fa24:
  if (!bVar7) {
    do {
      lVar6 = *plVar2;
      lVar10 = *(long *)(param_1 + 0x298);
      if (lVar6 != lVar9 || lVar10 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x0236fab0;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar9;
        *(long *)(param_1 + 0x294) = lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
joined_r0x0236fab0:
    if (!bVar7) {
      do {
        lVar9 = *plVar2;
        lVar3 = *(long *)(param_1 + 0x298);
        if (lVar9 != lVar6 || lVar3 != lVar10) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar9;
          lVar10 = lVar3;
          goto joined_r0x0236fab0;
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = lVar6;
          *(long *)(param_1 + 0x294) = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar7 = true;
      lVar6 = lVar9;
      lVar10 = lVar3;
      goto joined_r0x0236fab0;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2a0));
  *(undefined8 *)(param_1 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x68));
  auVar5._8_8_ = uVar14;
  auVar5._0_8_ = uVar13;
  return auVar5;
}


