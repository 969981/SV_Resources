/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023d7200; name: FUN_023d7200
 */


bool FUN_023d7200(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  plVar2 = (long *)(param_1 + 0x60);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_023d7238;
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
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_023d7238;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_023d7238:
  plVar2 = (long *)(param_1 + 0x290);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar10 = *plVar2;
    lVar9 = *(long *)(param_1 + 0x298);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar10;
      *(long *)(param_1 + 0x298) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_023d7254:
  while ((lVar10 != 0 && (lVar6 != lVar10))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a0));
    do {
      lVar10 = *plVar2;
      lVar9 = *(long *)(param_1 + 0x298);
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar10;
        *(long *)(param_1 + 0x298) = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar3 = *plVar2;
    if (lVar3 != lVar10 || *(long *)(param_1 + 0x298) != lVar9) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_023d7284;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar10;
      *(long *)(param_1 + 0x294) = lVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar5 = true;
LAB_023d7284:
  if (!bVar5) {
    lVar10 = lVar3;
    lVar9 = *(long *)(param_1 + 0x298);
    goto LAB_023d7254;
  }
  plVar8 = *(long **)(param_1 + 0x2b0);
  lVar6 = *(long *)(param_1 + 0x2e8);
  if ((lVar6 == 0) || (*plVar8 == param_2)) {
    plVar11 = plVar8;
LAB_023d72d8:
    if (plVar11 == plVar8 + lVar6 * 4) goto LAB_023d7304;
    bVar5 = *(char *)(*(long *)(param_1 + 0x348) + plVar11[3] * 0x130 + 0x18) != '\0';
  }
  else {
    lVar10 = lVar6 * 0x20;
    plVar12 = plVar8;
    while (lVar10 = lVar10 + -0x20, lVar10 != 0) {
      plVar1 = plVar12 + 4;
      plVar11 = plVar12 + 4;
      plVar12 = plVar12 + 4;
      if (*plVar1 == param_2) goto LAB_023d72d8;
    }
LAB_023d7304:
    bVar5 = true;
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
      goto LAB_023d7388;
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
LAB_023d7388:
  if (!bVar7) {
    do {
      lVar6 = *plVar2;
      lVar10 = *(long *)(param_1 + 0x298);
      if (lVar6 != lVar9 || lVar10 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x023d7404;
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
joined_r0x023d7404:
    if (!bVar7) {
      do {
        lVar9 = *plVar2;
        lVar3 = *(long *)(param_1 + 0x298);
        if (lVar9 != lVar6 || lVar3 != lVar10) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar9;
          lVar10 = lVar3;
          goto joined_r0x023d7404;
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
      goto joined_r0x023d7404;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2a0));
  *(undefined8 *)(param_1 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x68));
  return bVar5;
}


