/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b3ffa4; name: FUN_02b3ffa4
 */


void FUN_02b3ffa4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  long *plVar14;
  long lVar15;
  bool bVar16;
  
  plVar13 = (long *)(param_2 + 0x530);
  lVar3 = nn::os::GetCurrentThread();
  do {
    lVar15 = *plVar13;
    lVar7 = *(long *)(param_2 + 0x538);
    cVar2 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar16) {
      *plVar13 = lVar15;
      *(long *)(param_2 + 0x538) = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  pLVar5 = (LightEventType *)(param_2 + 0x540);
  do {
    while ((lVar15 != 0 && (lVar3 != lVar15))) {
      nn::os::WaitLightEvent(pLVar5);
      do {
        lVar15 = *plVar13;
        lVar7 = *(long *)(param_2 + 0x538);
        cVar2 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar16) {
          *plVar13 = lVar15;
          *(long *)(param_2 + 0x538) = lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    while( true ) {
      if (*plVar13 != lVar15 || *(long *)(param_2 + 0x538) != lVar7) break;
      cVar2 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar16) {
        *plVar13 = lVar15;
        *(long *)(param_2 + 0x534) = lVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(param_2 + 0x550) != '\0') goto LAB_02b40074;
        plVar14 = (long *)(param_2 + 0x60);
        lVar3 = nn::os::GetCurrentThread();
        goto LAB_02b400c4;
      }
    }
    ClearExclusiveLocal();
    lVar15 = *plVar13;
    lVar7 = *(long *)(param_2 + 0x538);
  } while( true );
LAB_02b401c4:
  ClearExclusiveLocal();
  lVar15 = *plVar6;
  lVar7 = *(long *)(param_2 + 0x298);
  goto LAB_02b4018c;
code_r0x02b403ec:
  cVar2 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar10) {
    *plVar13 = lVar3;
    *(long *)(param_2 + 0x534) = lVar15 + -1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_02b40498;
  goto LAB_02b403d8;
LAB_02b40074:
  do {
    lVar3 = *plVar13;
    lVar15 = *(long *)(param_2 + 0x538);
    cVar2 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar16) {
      *plVar13 = lVar3;
      *(long *)(param_2 + 0x538) = lVar15;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while( true ) {
    lVar7 = *plVar13;
    lVar9 = *(long *)(param_2 + 0x538);
    if (lVar7 != lVar3 || lVar9 != lVar15) break;
    cVar2 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar16) {
      *plVar13 = lVar3;
      *(long *)(param_2 + 0x534) = lVar15 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_02b4023c;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar3 = *plVar13;
      if (lVar3 != lVar7 || *(long *)(param_2 + 0x538) != lVar9) {
        bVar16 = false;
        ClearExclusiveLocal();
        goto LAB_02b40230;
      }
      cVar2 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar16) {
        *plVar13 = lVar7;
        *(long *)(param_2 + 0x534) = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar16 = true;
LAB_02b40230:
    lVar7 = lVar3;
    lVar9 = *(long *)(param_2 + 0x538);
  } while (!bVar16);
LAB_02b4023c:
  nn::os::SignalLightEvent(pLVar5);
  FUN_02b4064c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
  while( true ) {
    cVar2 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar16) {
      *plVar14 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_02b400c4:
    if (*plVar14 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar14 == 0) {
          cVar2 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar16) {
            *plVar14 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02b400d4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_02b400d4:
  plVar14 = (long *)(param_2 + 0x2f0);
  lVar15 = *plVar14;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar15) {
    plVar14 = (long *)0x0;
    bVar16 = true;
  }
  else {
    lVar3 = nn::os::GetCurrentThread();
    do {
      if (*plVar14 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar14 == 0) {
            cVar2 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar16) {
              *plVar14 = lVar3;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_02b40104;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar16) {
        *plVar14 = lVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_02b40104:
    bVar16 = false;
  }
  plVar6 = *(long **)(param_2 + 0x308);
  lVar3 = *(long *)(param_2 + 0x340);
  if ((lVar3 == 0) || (*plVar6 == param_5)) {
    plVar8 = plVar6;
  }
  else {
    lVar15 = lVar3 * 0x40;
    plVar11 = plVar6;
    do {
      lVar15 = lVar15 + -0x40;
      if (lVar15 == 0) goto LAB_02b40288;
      plVar12 = plVar11 + 8;
      plVar8 = plVar11 + 8;
      plVar11 = plVar11 + 8;
    } while (*plVar12 != param_5);
  }
  if (plVar8 != plVar6 + lVar3 * 8) {
    uVar4 = FUN_011d8674(param_1,plVar8[3],param_6,param_7);
    plVar6 = (long *)(param_2 + 0x290);
    lVar3 = nn::os::GetCurrentThread();
    do {
      lVar15 = *plVar6;
      lVar7 = *(long *)(param_2 + 0x298);
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar10) {
        *plVar6 = lVar15;
        *(long *)(param_2 + 0x298) = lVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pLVar5 = (LightEventType *)(param_2 + 0x2a0);
LAB_02b4018c:
    while ((lVar15 != 0 && (lVar3 != lVar15))) {
      nn::os::WaitLightEvent(pLVar5);
      do {
        lVar15 = *plVar6;
        lVar7 = *(long *)(param_2 + 0x298);
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar10) {
          *plVar6 = lVar15;
          *(long *)(param_2 + 0x298) = lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    do {
      if (*plVar6 != lVar15 || *(long *)(param_2 + 0x298) != lVar7) goto LAB_02b401c4;
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar10) {
        *plVar6 = lVar15;
        *(long *)(param_2 + 0x294) = lVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_021794e0(param_3,uVar4);
    do {
      lVar3 = *plVar6;
      lVar15 = *(long *)(param_2 + 0x298);
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar10) {
        *plVar6 = lVar3;
        *(long *)(param_2 + 0x298) = lVar15;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      lVar7 = *plVar6;
      lVar9 = *(long *)(param_2 + 0x298);
      if (lVar7 != lVar3 || lVar9 != lVar15) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x02b404d8;
      }
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar10) {
        *plVar6 = lVar3;
        *(long *)(param_2 + 0x294) = lVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar10 = true;
joined_r0x02b404d8:
    do {
      if (bVar10) goto LAB_02b4051c;
      do {
        lVar3 = *plVar6;
        lVar15 = *(long *)(param_2 + 0x298);
        if (lVar3 != lVar7 || lVar15 != lVar9) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar7 = lVar3;
          lVar9 = lVar15;
          goto joined_r0x02b404d8;
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
      lVar9 = lVar15;
    } while( true );
  }
LAB_02b40288:
  plVar6 = (long *)(param_2 + 0x730);
  lVar15 = *plVar6;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar15) {
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
              goto LAB_02b4034c;
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
LAB_02b4034c:
  plVar8 = *(long **)(param_2 + 0x748);
  lVar3 = *(long *)(param_2 + 0x780);
  if ((lVar3 == 0) || (*plVar8 == param_5)) {
    plVar11 = plVar8;
  }
  else {
    lVar15 = lVar3 * 0x10;
    plVar12 = plVar8;
    do {
      lVar15 = lVar15 + -0x10;
      if (lVar15 == 0) goto LAB_02b40400;
      plVar1 = plVar12 + 2;
      plVar11 = plVar12 + 2;
      plVar12 = plVar12 + 2;
    } while (*plVar1 != param_5);
  }
  if ((plVar11 != plVar8 + lVar3 * 2) && (plVar11[1] != 0)) {
    if (!bVar10) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    }
    do {
      lVar3 = *plVar13;
      lVar15 = *(long *)(param_2 + 0x538);
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar10) {
        *plVar13 = lVar3;
        *(long *)(param_2 + 0x538) = lVar15;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_02b403d8:
    lVar7 = *plVar13;
    lVar9 = *(long *)(param_2 + 0x538);
    if (lVar7 == lVar3 && lVar9 == lVar15) goto code_r0x02b403ec;
    ClearExclusiveLocal();
    do {
      do {
        lVar3 = *plVar13;
        if (lVar3 != lVar7 || *(long *)(param_2 + 0x538) != lVar9) {
          bVar10 = false;
          ClearExclusiveLocal();
          goto LAB_02b4048c;
        }
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar10) {
          *plVar13 = lVar7;
          *(long *)(param_2 + 0x534) = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar10 = true;
LAB_02b4048c:
      lVar7 = lVar3;
      lVar9 = *(long *)(param_2 + 0x538);
    } while (!bVar10);
LAB_02b40498:
    nn::os::SignalLightEvent(pLVar5);
    FUN_02b4064c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar13 = (long *)0x0;
    bVar10 = true;
    goto LAB_02b40524;
  }
LAB_02b40400:
  if (!bVar10) {
    *plVar6 = 0;
    pLVar5 = (LightEventType *)(plVar6 + 1);
LAB_02b4051c:
    nn::os::SignalLightEvent(pLVar5);
  }
  bVar10 = false;
LAB_02b40524:
  if (!bVar16) {
    *plVar14 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar14 + 1));
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  if (bVar10) {
    return;
  }
  do {
    lVar3 = *plVar13;
    lVar15 = plVar13[1];
    cVar2 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar16) {
      *plVar13 = lVar3;
      plVar13[1] = lVar15;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while( true ) {
    lVar7 = *plVar13;
    lVar9 = plVar13[1];
    if (lVar7 != lVar3 || lVar9 != lVar15) break;
    cVar2 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar16) {
      *plVar13 = lVar3;
      *(long *)((long)plVar13 + 4) = lVar15 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_02b405ec;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar3 = *plVar13;
      if (lVar3 != lVar7 || plVar13[1] != lVar9) {
        bVar16 = false;
        ClearExclusiveLocal();
        goto LAB_02b405e0;
      }
      cVar2 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar16) {
        *plVar13 = lVar7;
        *(long *)((long)plVar13 + 4) = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar16 = true;
LAB_02b405e0:
    lVar7 = lVar3;
    lVar9 = plVar13[1];
  } while (!bVar16);
LAB_02b405ec:
  nn::os::SignalLightEvent((LightEventType *)(plVar13 + 2));
  return;
}


