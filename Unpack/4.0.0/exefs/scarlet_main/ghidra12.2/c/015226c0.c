/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015226c0; name: FUN_015226c0
 */


bool FUN_015226c0(long param_1,long *param_2)

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
  long lVar13;
  
  if ((long *)*param_2 == (long *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(long *)*param_2;
  }
  plVar2 = (long *)(param_1 + 0x60);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01522700;
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
          if (cVar4 == '\0') goto LAB_01522700;
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
LAB_01522700:
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
LAB_0152271c:
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
      goto LAB_0152274c;
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
LAB_0152274c:
  if (!bVar5) {
    lVar10 = lVar3;
    lVar9 = *(long *)(param_1 + 0x298);
    goto LAB_0152271c;
  }
  plVar8 = *(long **)(param_1 + 0x2b0);
  lVar6 = *(long *)(param_1 + 0x2e8);
  if ((lVar6 == 0) || (*plVar8 == lVar13)) {
    plVar11 = plVar8;
LAB_015227a0:
    if (plVar11 == plVar8 + lVar6 * 4) goto LAB_0152287c;
    bVar5 = *(char *)(*(long *)(param_1 + 0x348) + plVar11[3] * 0x130 + 300) != '\0';
  }
  else {
    lVar10 = lVar6 * 0x20;
    plVar12 = plVar8;
    while (lVar10 = lVar10 + -0x20, lVar10 != 0) {
      plVar1 = plVar12 + 4;
      plVar11 = plVar12 + 4;
      plVar12 = plVar12 + 4;
      if (*plVar1 == lVar13) goto LAB_015227a0;
    }
LAB_0152287c:
    bVar5 = false;
  }
  do {
    lVar13 = *plVar2;
    lVar6 = *(long *)(param_1 + 0x298);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar13;
      *(long *)(param_1 + 0x298) = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar10 = *plVar2;
    lVar9 = *(long *)(param_1 + 0x298);
    if (lVar10 != lVar13 || lVar9 != lVar6) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_01522848;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar13;
      *(long *)(param_1 + 0x294) = lVar6 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_01522848:
  if (!bVar7) {
    do {
      lVar13 = *plVar2;
      lVar6 = *(long *)(param_1 + 0x298);
      if (lVar13 != lVar10 || lVar6 != lVar9) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x015228cc;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar10;
        *(long *)(param_1 + 0x294) = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
joined_r0x015228cc:
    if (!bVar7) {
      do {
        lVar10 = *plVar2;
        lVar9 = *(long *)(param_1 + 0x298);
        if (lVar10 != lVar13 || lVar9 != lVar6) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar13 = lVar10;
          lVar6 = lVar9;
          goto joined_r0x015228cc;
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = lVar13;
          *(long *)(param_1 + 0x294) = lVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar7 = true;
      lVar13 = lVar10;
      lVar6 = lVar9;
      goto joined_r0x015228cc;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2a0));
  *(undefined8 *)(param_1 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x68));
  return bVar5;
}


