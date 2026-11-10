/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a60f9c; name: FUN_02a60f9c
 */


void FUN_02a60f9c(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  LightEventType *pLVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  
  plVar13 = (long *)(param_2 + 0x530);
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar15 = *plVar13;
    lVar8 = *(long *)(param_2 + 0x538);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar15;
      *(long *)(param_2 + 0x538) = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  pLVar6 = (LightEventType *)(param_2 + 0x540);
  do {
    while ((lVar15 != 0 && (lVar4 != lVar15))) {
      nn::os::WaitLightEvent(pLVar6);
      do {
        lVar15 = *plVar13;
        lVar8 = *(long *)(param_2 + 0x538);
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar15;
          *(long *)(param_2 + 0x538) = lVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    while( true ) {
      if (*plVar13 != lVar15 || *(long *)(param_2 + 0x538) != lVar8) break;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar15;
        *(long *)(param_2 + 0x534) = lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(param_2 + 0x550) != '\0') goto LAB_02a6106c;
        plVar14 = (long *)(param_2 + 0x60);
        lVar4 = nn::os::GetCurrentThread();
        goto LAB_02a610b8;
      }
    }
    ClearExclusiveLocal();
    lVar15 = *plVar13;
    lVar8 = *(long *)(param_2 + 0x538);
  } while( true );
  while( true ) {
    cVar2 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar10) {
      *plVar16 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_02a61424:
    if (*plVar16 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(plVar16 + 1));
        while (*plVar16 == 0) {
          cVar2 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar10) {
            *plVar16 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02a61434;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_02a61434:
  *(undefined8 *)(plVar16[3] + param_3[1] * 8) = uVar5;
  *plVar16 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar16 + 1));
LAB_02a61450:
  do {
    lVar4 = *plVar7;
    lVar15 = *(long *)(param_2 + 0x298);
    cVar2 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar10) {
      *plVar7 = lVar4;
      *(long *)(param_2 + 0x298) = lVar15;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    lVar8 = *plVar7;
    lVar9 = *(long *)(param_2 + 0x298);
    if (lVar8 != lVar4 || lVar9 != lVar15) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto joined_r0x02a61518;
    }
    cVar2 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar10) {
      *plVar7 = lVar4;
      *(long *)(param_2 + 0x294) = lVar15 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar10 = true;
joined_r0x02a61518:
  if (!bVar10) {
    do {
      lVar4 = *plVar7;
      lVar15 = *(long *)(param_2 + 0x298);
      if (lVar4 != lVar8 || lVar15 != lVar9) {
        bVar10 = false;
        ClearExclusiveLocal();
        lVar8 = lVar4;
        lVar9 = lVar15;
        goto joined_r0x02a61518;
      }
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar10) {
        *plVar7 = lVar8;
        *(long *)(param_2 + 0x294) = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar10 = true;
    lVar8 = lVar4;
    lVar9 = lVar15;
    goto joined_r0x02a61518;
  }
  goto LAB_02a6155c;
code_r0x02a613e0:
  cVar2 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar10) {
    *plVar13 = lVar4;
    *(long *)(param_2 + 0x534) = lVar15 + -1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_02a614cc;
  goto LAB_02a613cc;
LAB_02a6106c:
  do {
    lVar4 = *plVar13;
    lVar15 = *(long *)(param_2 + 0x538);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar4;
      *(long *)(param_2 + 0x538) = lVar15;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while( true ) {
    lVar8 = *plVar13;
    lVar9 = *(long *)(param_2 + 0x538);
    if (lVar8 != lVar4 || lVar9 != lVar15) break;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar4;
      *(long *)(param_2 + 0x534) = lVar15 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_02a6122c;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar4 = *plVar13;
      if (lVar4 != lVar8 || *(long *)(param_2 + 0x538) != lVar9) {
        bVar3 = false;
        ClearExclusiveLocal();
        goto LAB_02a61220;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar8;
        *(long *)(param_2 + 0x534) = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = true;
LAB_02a61220:
    lVar8 = lVar4;
    lVar9 = *(long *)(param_2 + 0x538);
  } while (!bVar3);
LAB_02a6122c:
  nn::os::SignalLightEvent(pLVar6);
  FUN_02a616bc(param_1,PTR_DAT_047dc0e0,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar3) {
      *plVar14 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_02a610b8:
    if (*plVar14 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar14 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02a610c8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_02a610c8:
  plVar14 = (long *)(param_2 + 0x2f0);
  lVar15 = *plVar14;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar15) {
    plVar14 = (long *)0x0;
    bVar3 = true;
  }
  else {
    lVar4 = nn::os::GetCurrentThread();
    do {
      if (*plVar14 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar14 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_02a610f8;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_02a610f8:
    bVar3 = false;
  }
  plVar7 = *(long **)(param_2 + 0x308);
  lVar4 = *(long *)(param_2 + 0x340);
  if ((lVar4 == 0) || (*plVar7 == param_5)) {
    plVar16 = plVar7;
  }
  else {
    lVar15 = lVar4 * 0x40;
    plVar11 = plVar7;
    do {
      lVar15 = lVar15 + -0x40;
      if (lVar15 == 0) goto LAB_02a61280;
      plVar12 = plVar11 + 8;
      plVar16 = plVar11 + 8;
      plVar11 = plVar11 + 8;
    } while (*plVar12 != param_5);
  }
  if (plVar16 != plVar7 + lVar4 * 8) {
    uVar5 = FUN_0194c548(param_1,plVar16[3],param_6,param_7);
    plVar7 = (long *)(param_2 + 0x290);
    lVar4 = nn::os::GetCurrentThread();
    do {
      lVar15 = *plVar7;
      lVar8 = *(long *)(param_2 + 0x298);
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar10) {
        *plVar7 = lVar15;
        *(long *)(param_2 + 0x298) = lVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pLVar6 = (LightEventType *)(param_2 + 0x2a0);
    do {
      while ((lVar15 != 0 && (lVar4 != lVar15))) {
        nn::os::WaitLightEvent(pLVar6);
        do {
          lVar15 = *plVar7;
          lVar8 = *(long *)(param_2 + 0x298);
          cVar2 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar10) {
            *plVar7 = lVar15;
            *(long *)(param_2 + 0x298) = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      while( true ) {
        if (*plVar7 != lVar15 || *(long *)(param_2 + 0x298) != lVar8) break;
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar10) {
          *plVar7 = lVar15;
          *(long *)(param_2 + 0x294) = lVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar16 = (long *)*param_3;
          lVar15 = *plVar16;
          lVar4 = nn::os::GetCurrentThread();
          if (lVar4 != lVar15) {
            lVar4 = nn::os::GetCurrentThread();
            goto LAB_02a61424;
          }
          *(undefined8 *)(plVar16[3] + param_3[1] * 8) = uVar5;
          goto LAB_02a61450;
        }
      }
      ClearExclusiveLocal();
      lVar15 = *plVar7;
      lVar8 = *(long *)(param_2 + 0x298);
    } while( true );
  }
LAB_02a61280:
  plVar7 = (long *)(param_2 + 0x730);
  lVar15 = *plVar7;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar15) {
    plVar7 = (long *)0x0;
    bVar10 = true;
  }
  else {
    lVar4 = nn::os::GetCurrentThread();
    do {
      if (*plVar7 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x738));
          while (*plVar7 == 0) {
            cVar2 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar10) {
              *plVar7 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              bVar10 = false;
              goto LAB_02a61354;
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar10) {
        *plVar7 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar10 = false;
  }
LAB_02a61354:
  plVar16 = *(long **)(param_2 + 0x748);
  lVar4 = *(long *)(param_2 + 0x780);
  if ((lVar4 == 0) || (*plVar16 == param_5)) {
    plVar11 = plVar16;
  }
  else {
    lVar15 = lVar4 * 0x10;
    plVar12 = plVar16;
    do {
      lVar15 = lVar15 + -0x10;
      if (lVar15 == 0) goto LAB_02a613f4;
      plVar1 = plVar12 + 2;
      plVar11 = plVar12 + 2;
      plVar12 = plVar12 + 2;
    } while (*plVar1 != param_5);
  }
  if ((plVar11 != plVar16 + lVar4 * 2) && (plVar11[1] != 0)) {
    if (!bVar10) {
      *plVar7 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
    }
    do {
      lVar4 = *plVar13;
      lVar15 = *(long *)(param_2 + 0x538);
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar10) {
        *plVar13 = lVar4;
        *(long *)(param_2 + 0x538) = lVar15;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_02a613cc:
    lVar8 = *plVar13;
    lVar9 = *(long *)(param_2 + 0x538);
    if (lVar8 == lVar4 && lVar9 == lVar15) goto code_r0x02a613e0;
    ClearExclusiveLocal();
    do {
      do {
        lVar4 = *plVar13;
        if (lVar4 != lVar8 || *(long *)(param_2 + 0x538) != lVar9) {
          bVar10 = false;
          ClearExclusiveLocal();
          goto LAB_02a614c0;
        }
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar10) {
          *plVar13 = lVar8;
          *(long *)(param_2 + 0x534) = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar10 = true;
LAB_02a614c0:
      lVar8 = lVar4;
      lVar9 = *(long *)(param_2 + 0x538);
    } while (!bVar10);
LAB_02a614cc:
    nn::os::SignalLightEvent(pLVar6);
    FUN_02a616bc(param_1,PTR_DAT_047dc0e0,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar13 = (long *)0x0;
    bVar10 = true;
    goto joined_r0x02a61508;
  }
LAB_02a613f4:
  if (bVar10) goto LAB_02a61560;
  *plVar7 = 0;
  pLVar6 = (LightEventType *)(plVar7 + 1);
LAB_02a6155c:
  nn::os::SignalLightEvent(pLVar6);
LAB_02a61560:
  bVar10 = false;
joined_r0x02a61508:
  if (!bVar3) {
    *plVar14 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar14 + 1));
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  if (bVar10) {
    return;
  }
  do {
    lVar4 = *plVar13;
    lVar15 = plVar13[1];
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar4;
      plVar13[1] = lVar15;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while( true ) {
    lVar8 = *plVar13;
    lVar9 = plVar13[1];
    if (lVar8 != lVar4 || lVar9 != lVar15) break;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar4;
      *(long *)((long)plVar13 + 4) = lVar15 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_02a6162c;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar4 = *plVar13;
      if (lVar4 != lVar8 || plVar13[1] != lVar9) {
        bVar3 = false;
        ClearExclusiveLocal();
        goto LAB_02a61620;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar8;
        *(long *)((long)plVar13 + 4) = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = true;
LAB_02a61620:
    lVar8 = lVar4;
    lVar9 = plVar13[1];
  } while (!bVar3);
LAB_02a6162c:
  nn::os::SignalLightEvent((LightEventType *)(plVar13 + 2));
  return;
}


