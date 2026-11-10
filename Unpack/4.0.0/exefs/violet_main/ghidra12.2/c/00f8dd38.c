/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f8dd38; name: FUN_00f8dd38
 */


undefined8 FUN_00f8dd38(long param_1,long param_2,byte param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  
  plVar2 = (long *)(param_1 + 0x530);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar10 = *plVar2;
    lVar9 = *(long *)(param_1 + 0x538);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar10;
      *(long *)(param_1 + 0x538) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00f8dd78:
  while ((lVar10 != 0 && (lVar6 != lVar10))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x540));
    do {
      lVar10 = *plVar2;
      lVar9 = *(long *)(param_1 + 0x538);
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar10;
        *(long *)(param_1 + 0x538) = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar4 = *plVar2;
    if (lVar4 != lVar10 || *(long *)(param_1 + 0x538) != lVar9) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00f8dda8;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar10;
      *(long *)(param_1 + 0x534) = lVar9 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_00f8dda8:
  if (!bVar7) {
    lVar10 = lVar4;
    lVar9 = *(long *)(param_1 + 0x538);
    goto LAB_00f8dd78;
  }
  if (*(char *)(param_1 + 0x550) == '\0') {
    plVar3 = (long *)(param_1 + 0x60);
    lVar6 = nn::os::GetCurrentThread();
LAB_00f8ddd4:
    if (*plVar3 == 0) goto code_r0x00f8dddc;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x68));
    do {
      if (*plVar3 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x68));
          while (*plVar3 == 0) {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar7) {
              *plVar3 = lVar6;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_00f8dde4;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_00f8dde4:
    plVar3 = (long *)(param_1 + 0x290);
    lVar6 = nn::os::GetCurrentThread();
    do {
      lVar10 = *plVar3;
      lVar9 = *(long *)(param_1 + 0x298);
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar10;
        *(long *)(param_1 + 0x298) = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_00f8de00:
    while ((lVar10 != 0 && (lVar6 != lVar10))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a0));
      do {
        lVar10 = *plVar3;
        lVar9 = *(long *)(param_1 + 0x298);
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *plVar3 = lVar10;
          *(long *)(param_1 + 0x298) = lVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    do {
      lVar4 = *plVar3;
      if (lVar4 != lVar10 || *(long *)(param_1 + 0x298) != lVar9) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_00f8de30;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar10;
        *(long *)(param_1 + 0x294) = lVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
LAB_00f8de30:
    if (!bVar7) {
      lVar10 = lVar4;
      lVar9 = *(long *)(param_1 + 0x298);
      goto LAB_00f8de00;
    }
    plVar8 = *(long **)(param_1 + 0x2b0);
    lVar6 = *(long *)(param_1 + 0x2e8);
    if ((lVar6 == 0) || (*plVar8 == param_2)) {
      plVar11 = plVar8;
LAB_00f8de84:
      if (plVar11 == plVar8 + lVar6 * 4) goto LAB_00f8dfb0;
      uVar13 = 1;
      *(byte *)(*(long *)(param_1 + 0x348) + plVar11[3] * 0x130 + 0x18) = param_3 & 1;
    }
    else {
      lVar10 = lVar6 * 0x20;
      plVar12 = plVar8;
      while (lVar10 = lVar10 + -0x20, lVar10 != 0) {
        plVar1 = plVar12 + 4;
        plVar11 = plVar12 + 4;
        plVar12 = plVar12 + 4;
        if (*plVar1 == param_2) goto LAB_00f8de84;
      }
LAB_00f8dfb0:
      uVar13 = 0;
    }
    do {
      lVar6 = *plVar3;
      lVar10 = *(long *)(param_1 + 0x298);
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar6;
        *(long *)(param_1 + 0x298) = lVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      lVar9 = *plVar3;
      lVar4 = *(long *)(param_1 + 0x298);
      if (lVar9 != lVar6 || lVar4 != lVar10) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_00f8df30;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar6;
        *(long *)(param_1 + 0x294) = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
LAB_00f8df30:
    if (!bVar7) {
      do {
        lVar6 = *plVar3;
        lVar10 = *(long *)(param_1 + 0x298);
        if (lVar6 != lVar9 || lVar10 != lVar4) {
          bVar7 = false;
          ClearExclusiveLocal();
          goto joined_r0x00f8e08c;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *plVar3 = lVar9;
          *(long *)(param_1 + 0x294) = lVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
joined_r0x00f8e08c:
      if (!bVar7) {
        do {
          lVar9 = *plVar3;
          lVar4 = *(long *)(param_1 + 0x298);
          if (lVar9 != lVar6 || lVar4 != lVar10) {
            bVar7 = false;
            ClearExclusiveLocal();
            lVar6 = lVar9;
            lVar10 = lVar4;
            goto joined_r0x00f8e08c;
          }
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *plVar3 = lVar6;
            *(long *)(param_1 + 0x294) = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar7 = true;
        lVar6 = lVar9;
        lVar10 = lVar4;
        goto joined_r0x00f8e08c;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2a0));
    *(undefined8 *)(param_1 + 0x60) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x68));
    goto LAB_00f8df4c;
  }
  uVar13 = 0;
LAB_00f8df4c:
  do {
    lVar6 = *plVar2;
    lVar10 = *(long *)(param_1 + 0x538);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar6;
      *(long *)(param_1 + 0x538) = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar9 = *plVar2;
    lVar4 = *(long *)(param_1 + 0x538);
    if (lVar9 != lVar6 || lVar4 != lVar10) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00f8df88;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar6;
      *(long *)(param_1 + 0x534) = lVar10 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_00f8df88:
  if (!bVar7) {
    do {
      lVar6 = *plVar2;
      lVar10 = *(long *)(param_1 + 0x538);
      if (lVar6 != lVar9 || lVar10 != lVar4) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x00f8e000;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar9;
        *(long *)(param_1 + 0x534) = lVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
joined_r0x00f8e000:
    if (!bVar7) {
      do {
        lVar9 = *plVar2;
        lVar4 = *(long *)(param_1 + 0x538);
        if (lVar9 != lVar6 || lVar4 != lVar10) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar9;
          lVar10 = lVar4;
          goto joined_r0x00f8e000;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = lVar6;
          *(long *)(param_1 + 0x534) = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
      lVar6 = lVar9;
      lVar10 = lVar4;
      goto joined_r0x00f8e000;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x540));
  return uVar13;
code_r0x00f8dddc:
  cVar5 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
  if (bVar7) {
    *plVar3 = lVar6;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00f8dde4;
  goto LAB_00f8ddd4;
}


