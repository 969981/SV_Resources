/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0217ba84; name: FUN_0217ba84
 */


void FUN_0217ba84(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  LightEventType *pLVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  bool bVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  bool bVar15;
  long *plVar16;
  
  plVar16 = (long *)(param_2 + 0x530);
  lVar3 = nn::os::GetCurrentThread();
  do {
    lVar14 = *plVar16;
    lVar7 = *(long *)(param_2 + 0x538);
    cVar2 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar15) {
      *plVar16 = lVar14;
      *(long *)(param_2 + 0x538) = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  pLVar5 = (LightEventType *)(param_2 + 0x540);
  do {
    while ((lVar14 != 0 && (lVar3 != lVar14))) {
      nn::os::WaitLightEvent(pLVar5);
      do {
        lVar14 = *plVar16;
        lVar7 = *(long *)(param_2 + 0x538);
        cVar2 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar15) {
          *plVar16 = lVar14;
          *(long *)(param_2 + 0x538) = lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    while( true ) {
      if (*plVar16 != lVar14 || *(long *)(param_2 + 0x538) != lVar7) break;
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar15) {
        *plVar16 = lVar14;
        *(long *)(param_2 + 0x534) = lVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(param_2 + 0x550) != '\0') goto LAB_0217bb50;
        plVar13 = (long *)(param_2 + 0x60);
        lVar3 = nn::os::GetCurrentThread();
        goto LAB_0217bb98;
      }
    }
    ClearExclusiveLocal();
    lVar14 = *plVar16;
    lVar7 = *(long *)(param_2 + 0x538);
  } while( true );
LAB_0217bc94:
  ClearExclusiveLocal();
  lVar14 = *plVar6;
  lVar7 = *(long *)(param_2 + 0x298);
  goto LAB_0217bc5c;
code_r0x0217beb4:
  cVar2 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar10) {
    *plVar16 = lVar3;
    *(long *)(param_2 + 0x534) = lVar14 + -1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_0217bf60;
  goto LAB_0217bea0;
LAB_0217bb50:
  do {
    lVar3 = *plVar16;
    lVar14 = *(long *)(param_2 + 0x538);
    cVar2 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar15) {
      *plVar16 = lVar3;
      *(long *)(param_2 + 0x538) = lVar14;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while( true ) {
    lVar7 = *plVar16;
    lVar9 = *(long *)(param_2 + 0x538);
    if (lVar7 != lVar3 || lVar9 != lVar14) break;
    cVar2 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar15) {
      *plVar16 = lVar3;
      *(long *)(param_2 + 0x534) = lVar14 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0217bd0c;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar3 = *plVar16;
      if (lVar3 != lVar7 || *(long *)(param_2 + 0x538) != lVar9) {
        bVar15 = false;
        ClearExclusiveLocal();
        goto LAB_0217bd00;
      }
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar15) {
        *plVar16 = lVar7;
        *(long *)(param_2 + 0x534) = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar15 = true;
LAB_0217bd00:
    lVar7 = lVar3;
    lVar9 = *(long *)(param_2 + 0x538);
  } while (!bVar15);
LAB_0217bd0c:
  nn::os::SignalLightEvent(pLVar5);
  FUN_0217c100(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
  while( true ) {
    cVar2 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar15) {
      *plVar13 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_0217bb98:
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar13 == 0) {
          cVar2 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar15) {
            *plVar13 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0217bba8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_0217bba8:
  plVar13 = (long *)(param_2 + 0x2f0);
  lVar14 = *plVar13;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar14) {
    plVar13 = (long *)0x0;
    bVar15 = true;
  }
  else {
    lVar3 = nn::os::GetCurrentThread();
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar13 == 0) {
            cVar2 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar15) {
              *plVar13 = lVar3;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_0217bbd8;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar15) {
        *plVar13 = lVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_0217bbd8:
    bVar15 = false;
  }
  plVar6 = *(long **)(param_2 + 0x308);
  lVar3 = *(long *)(param_2 + 0x340);
  if ((lVar3 == 0) || (*plVar6 == param_5)) {
    plVar8 = plVar6;
  }
  else {
    lVar14 = lVar3 * 0x40;
    plVar11 = plVar6;
    do {
      lVar14 = lVar14 + -0x40;
      if (lVar14 == 0) goto LAB_0217bd54;
      plVar12 = plVar11 + 8;
      plVar8 = plVar11 + 8;
      plVar11 = plVar11 + 8;
    } while (*plVar12 != param_5);
  }
  if (plVar8 != plVar6 + lVar3 * 8) {
    uVar4 = FUN_010616cc(param_1,plVar8[2],param_6,param_7);
    plVar6 = (long *)(param_2 + 0x290);
    lVar3 = nn::os::GetCurrentThread();
    do {
      lVar14 = *plVar6;
      lVar7 = *(long *)(param_2 + 0x298);
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar10) {
        *plVar6 = lVar14;
        *(long *)(param_2 + 0x298) = lVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pLVar5 = (LightEventType *)(param_2 + 0x2a0);
LAB_0217bc5c:
    while ((lVar14 != 0 && (lVar3 != lVar14))) {
      nn::os::WaitLightEvent(pLVar5);
      do {
        lVar14 = *plVar6;
        lVar7 = *(long *)(param_2 + 0x298);
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar10) {
          *plVar6 = lVar14;
          *(long *)(param_2 + 0x298) = lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    do {
      if (*plVar6 != lVar14 || *(long *)(param_2 + 0x298) != lVar7) goto LAB_0217bc94;
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar10) {
        *plVar6 = lVar14;
        *(long *)(param_2 + 0x294) = lVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_0217940c(param_3,uVar4);
    do {
      lVar3 = *plVar6;
      lVar14 = *(long *)(param_2 + 0x298);
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar10) {
        *plVar6 = lVar3;
        *(long *)(param_2 + 0x298) = lVar14;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      lVar7 = *plVar6;
      lVar9 = *(long *)(param_2 + 0x298);
      if (lVar7 != lVar3 || lVar9 != lVar14) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x0217bf9c;
      }
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar10) {
        *plVar6 = lVar3;
        *(long *)(param_2 + 0x294) = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar10 = true;
joined_r0x0217bf9c:
    do {
      if (bVar10) goto LAB_0217bfe0;
      do {
        lVar3 = *plVar6;
        lVar14 = *(long *)(param_2 + 0x298);
        if (lVar3 != lVar7 || lVar14 != lVar9) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar7 = lVar3;
          lVar9 = lVar14;
          goto joined_r0x0217bf9c;
        }
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar10) {
          *plVar6 = lVar7;
          *(long *)(param_2 + 0x294) = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar10 = true;
      lVar7 = lVar3;
      lVar9 = lVar14;
    } while( true );
  }
LAB_0217bd54:
  plVar6 = (long *)(param_2 + 0x730);
  lVar14 = *plVar6;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar14) {
    plVar6 = (long *)0x0;
    bVar10 = true;
  }
  else {
    lVar3 = nn::os::GetCurrentThread();
    do {
      if (*plVar6 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x738));
          while (*plVar6 == 0) {
            cVar2 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar10) {
              *plVar6 = lVar3;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              bVar10 = false;
              goto LAB_0217be28;
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar10) {
        *plVar6 = lVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar10 = false;
  }
LAB_0217be28:
  plVar8 = *(long **)(param_2 + 0x748);
  lVar3 = *(long *)(param_2 + 0x780);
  if ((lVar3 == 0) || (*plVar8 == param_5)) {
    plVar11 = plVar8;
  }
  else {
    lVar14 = lVar3 * 0x10;
    plVar12 = plVar8;
    do {
      lVar14 = lVar14 + -0x10;
      if (lVar14 == 0) goto LAB_0217bec8;
      plVar1 = plVar12 + 2;
      plVar11 = plVar12 + 2;
      plVar12 = plVar12 + 2;
    } while (*plVar1 != param_5);
  }
  if (plVar11 == plVar8 + lVar3 * 2) {
LAB_0217bec8:
    if (!bVar10) {
      pLVar5 = (LightEventType *)(plVar6 + 1);
      *plVar6 = 0;
LAB_0217bfe0:
      nn::os::SignalLightEvent(pLVar5);
    }
  }
  else {
    lVar3 = plVar11[1];
    if (!bVar10) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    }
    if (lVar3 != 0) {
      do {
        lVar3 = *plVar16;
        lVar14 = *(long *)(param_2 + 0x538);
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar10) {
          *plVar16 = lVar3;
          *(long *)(param_2 + 0x538) = lVar14;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_0217bea0:
      lVar7 = *plVar16;
      lVar9 = *(long *)(param_2 + 0x538);
      if (lVar7 == lVar3 && lVar9 == lVar14) goto code_r0x0217beb4;
      ClearExclusiveLocal();
      do {
        do {
          lVar3 = *plVar16;
          if (lVar3 != lVar7 || *(long *)(param_2 + 0x538) != lVar9) {
            bVar10 = false;
            ClearExclusiveLocal();
            goto LAB_0217bf54;
          }
          cVar2 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar10) {
            *plVar16 = lVar7;
            *(long *)(param_2 + 0x534) = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        bVar10 = true;
LAB_0217bf54:
        lVar7 = lVar3;
        lVar9 = *(long *)(param_2 + 0x538);
      } while (!bVar10);
LAB_0217bf60:
      nn::os::SignalLightEvent(pLVar5);
      FUN_0217c100(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      plVar16 = (long *)0x0;
      bVar10 = true;
      goto LAB_0217bfe8;
    }
  }
  bVar10 = false;
LAB_0217bfe8:
  if (!bVar15) {
    *plVar13 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  if (bVar10) {
    return;
  }
  do {
    lVar3 = *plVar16;
    lVar14 = plVar16[1];
    cVar2 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar15) {
      *plVar16 = lVar3;
      plVar16[1] = lVar14;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while( true ) {
    lVar7 = *plVar16;
    lVar9 = plVar16[1];
    if (lVar7 != lVar3 || lVar9 != lVar14) break;
    cVar2 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar15) {
      *plVar16 = lVar3;
      *(long *)((long)plVar16 + 4) = lVar14 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0217c0b0;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar3 = *plVar16;
      if (lVar3 != lVar7 || plVar16[1] != lVar9) {
        bVar15 = false;
        ClearExclusiveLocal();
        goto LAB_0217c0a4;
      }
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar15) {
        *plVar16 = lVar7;
        *(long *)((long)plVar16 + 4) = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar15 = true;
LAB_0217c0a4:
    lVar7 = lVar3;
    lVar9 = plVar16[1];
  } while (!bVar15);
LAB_0217c0b0:
  nn::os::SignalLightEvent((LightEventType *)(plVar16 + 2));
  return;
}


