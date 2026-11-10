/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ff0bbc; name: FUN_01ff0bbc
 */


void FUN_01ff0bbc(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7)

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
  long lVar14;
  long *plVar15;
  long *plVar16;
  
  plVar16 = (long *)(param_2 + 0x530);
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar14 = *plVar16;
    lVar8 = *(long *)(param_2 + 0x538);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar3) {
      *plVar16 = lVar14;
      *(long *)(param_2 + 0x538) = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  pLVar6 = (LightEventType *)(param_2 + 0x540);
  do {
    while ((lVar14 != 0 && (lVar4 != lVar14))) {
      nn::os::WaitLightEvent(pLVar6);
      do {
        lVar14 = *plVar16;
        lVar8 = *(long *)(param_2 + 0x538);
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = lVar14;
          *(long *)(param_2 + 0x538) = lVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    while( true ) {
      if (*plVar16 != lVar14 || *(long *)(param_2 + 0x538) != lVar8) break;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar14;
        *(long *)(param_2 + 0x534) = lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(param_2 + 0x550) != '\0') goto LAB_01ff0c88;
        plVar13 = (long *)(param_2 + 0x60);
        lVar4 = nn::os::GetCurrentThread();
        goto LAB_01ff0cd0;
      }
    }
    ClearExclusiveLocal();
    lVar14 = *plVar16;
    lVar8 = *(long *)(param_2 + 0x538);
  } while( true );
  while( true ) {
    cVar2 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar10) {
      *plVar15 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_01ff1038:
    if (*plVar15 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(plVar15 + 1));
        while (*plVar15 == 0) {
          cVar2 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar10) {
            *plVar15 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01ff1048;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_01ff1048:
  *(undefined8 *)(plVar15[3] + param_3[1] * 8) = uVar5;
  *plVar15 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
LAB_01ff1064:
  do {
    lVar4 = *plVar7;
    lVar14 = *(long *)(param_2 + 0x298);
    cVar2 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar10) {
      *plVar7 = lVar4;
      *(long *)(param_2 + 0x298) = lVar14;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    lVar8 = *plVar7;
    lVar9 = *(long *)(param_2 + 0x298);
    if (lVar8 != lVar4 || lVar9 != lVar14) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto joined_r0x01ff1124;
    }
    cVar2 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar10) {
      *plVar7 = lVar4;
      *(long *)(param_2 + 0x294) = lVar14 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar10 = true;
joined_r0x01ff1124:
  if (!bVar10) {
    do {
      lVar4 = *plVar7;
      lVar14 = *(long *)(param_2 + 0x298);
      if (lVar4 != lVar8 || lVar14 != lVar9) {
        bVar10 = false;
        ClearExclusiveLocal();
        lVar8 = lVar4;
        lVar9 = lVar14;
        goto joined_r0x01ff1124;
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
    lVar9 = lVar14;
    goto joined_r0x01ff1124;
  }
  goto LAB_01ff1168;
code_r0x01ff0ff4:
  cVar2 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar10) {
    *plVar16 = lVar4;
    *(long *)(param_2 + 0x534) = lVar14 + -1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01ff10e0;
  goto LAB_01ff0fe0;
LAB_01ff0c88:
  do {
    lVar4 = *plVar16;
    lVar14 = *(long *)(param_2 + 0x538);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar3) {
      *plVar16 = lVar4;
      *(long *)(param_2 + 0x538) = lVar14;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while( true ) {
    lVar8 = *plVar16;
    lVar9 = *(long *)(param_2 + 0x538);
    if (lVar8 != lVar4 || lVar9 != lVar14) break;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar3) {
      *plVar16 = lVar4;
      *(long *)(param_2 + 0x534) = lVar14 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01ff0e44;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar4 = *plVar16;
      if (lVar4 != lVar8 || *(long *)(param_2 + 0x538) != lVar9) {
        bVar3 = false;
        ClearExclusiveLocal();
        goto LAB_01ff0e38;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar8;
        *(long *)(param_2 + 0x534) = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = true;
LAB_01ff0e38:
    lVar8 = lVar4;
    lVar9 = *(long *)(param_2 + 0x538);
  } while (!bVar3);
LAB_01ff0e44:
  nn::os::SignalLightEvent(pLVar6);
  FUN_01ff12c8(param_1,PTR_DAT_047dbea0,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_01ff0cd0:
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar13 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01ff0ce0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_01ff0ce0:
  plVar13 = (long *)(param_2 + 0x2f0);
  lVar14 = *plVar13;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar14) {
    plVar13 = (long *)0x0;
    bVar3 = true;
  }
  else {
    lVar4 = nn::os::GetCurrentThread();
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar13 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01ff0d10;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01ff0d10:
    bVar3 = false;
  }
  plVar7 = *(long **)(param_2 + 0x308);
  lVar4 = *(long *)(param_2 + 0x340);
  if ((lVar4 == 0) || (*plVar7 == param_5)) {
    plVar15 = plVar7;
  }
  else {
    lVar14 = lVar4 * 0x40;
    plVar11 = plVar7;
    do {
      lVar14 = lVar14 + -0x40;
      if (lVar14 == 0) goto LAB_01ff0e94;
      plVar12 = plVar11 + 8;
      plVar15 = plVar11 + 8;
      plVar11 = plVar11 + 8;
    } while (*plVar12 != param_5);
  }
  if (plVar15 != plVar7 + lVar4 * 8) {
    uVar5 = FUN_0194a7dc(param_1,plVar15[2],param_6,param_7);
    plVar7 = (long *)(param_2 + 0x290);
    lVar4 = nn::os::GetCurrentThread();
    do {
      lVar14 = *plVar7;
      lVar8 = *(long *)(param_2 + 0x298);
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar10) {
        *plVar7 = lVar14;
        *(long *)(param_2 + 0x298) = lVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pLVar6 = (LightEventType *)(param_2 + 0x2a0);
    do {
      while ((lVar14 != 0 && (lVar4 != lVar14))) {
        nn::os::WaitLightEvent(pLVar6);
        do {
          lVar14 = *plVar7;
          lVar8 = *(long *)(param_2 + 0x298);
          cVar2 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar10) {
            *plVar7 = lVar14;
            *(long *)(param_2 + 0x298) = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      while( true ) {
        if (*plVar7 != lVar14 || *(long *)(param_2 + 0x298) != lVar8) break;
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar10) {
          *plVar7 = lVar14;
          *(long *)(param_2 + 0x294) = lVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar15 = (long *)*param_3;
          lVar14 = *plVar15;
          lVar4 = nn::os::GetCurrentThread();
          if (lVar4 != lVar14) {
            lVar4 = nn::os::GetCurrentThread();
            goto LAB_01ff1038;
          }
          *(undefined8 *)(plVar15[3] + param_3[1] * 8) = uVar5;
          goto LAB_01ff1064;
        }
      }
      ClearExclusiveLocal();
      lVar14 = *plVar7;
      lVar8 = *(long *)(param_2 + 0x298);
    } while( true );
  }
LAB_01ff0e94:
  plVar7 = (long *)(param_2 + 0x730);
  lVar14 = *plVar7;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar14) {
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
              goto LAB_01ff0f68;
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
LAB_01ff0f68:
  plVar15 = *(long **)(param_2 + 0x748);
  lVar4 = *(long *)(param_2 + 0x780);
  if ((lVar4 == 0) || (*plVar15 == param_5)) {
    plVar11 = plVar15;
  }
  else {
    lVar14 = lVar4 * 0x10;
    plVar12 = plVar15;
    do {
      lVar14 = lVar14 + -0x10;
      if (lVar14 == 0) goto LAB_01ff1008;
      plVar1 = plVar12 + 2;
      plVar11 = plVar12 + 2;
      plVar12 = plVar12 + 2;
    } while (*plVar1 != param_5);
  }
  if (plVar11 != plVar15 + lVar4 * 2) {
    lVar4 = plVar11[1];
    if (!bVar10) {
      *plVar7 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
    }
    if (lVar4 != 0) {
      do {
        lVar4 = *plVar16;
        lVar14 = *(long *)(param_2 + 0x538);
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar10) {
          *plVar16 = lVar4;
          *(long *)(param_2 + 0x538) = lVar14;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01ff0fe0:
      lVar8 = *plVar16;
      lVar9 = *(long *)(param_2 + 0x538);
      if (lVar8 == lVar4 && lVar9 == lVar14) goto code_r0x01ff0ff4;
      ClearExclusiveLocal();
      do {
        do {
          lVar4 = *plVar16;
          if (lVar4 != lVar8 || *(long *)(param_2 + 0x538) != lVar9) {
            bVar10 = false;
            ClearExclusiveLocal();
            goto LAB_01ff10d4;
          }
          cVar2 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar10) {
            *plVar16 = lVar8;
            *(long *)(param_2 + 0x534) = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        bVar10 = true;
LAB_01ff10d4:
        lVar8 = lVar4;
        lVar9 = *(long *)(param_2 + 0x538);
      } while (!bVar10);
LAB_01ff10e0:
      nn::os::SignalLightEvent(pLVar6);
      FUN_01ff12c8(param_1,PTR_DAT_047dbea0,param_2,param_3,param_4,param_5,param_6,param_7);
      plVar16 = (long *)0x0;
      bVar10 = true;
      goto joined_r0x01ff1114;
    }
    goto LAB_01ff116c;
  }
LAB_01ff1008:
  if (bVar10) goto LAB_01ff116c;
  pLVar6 = (LightEventType *)(plVar7 + 1);
  *plVar7 = 0;
LAB_01ff1168:
  nn::os::SignalLightEvent(pLVar6);
LAB_01ff116c:
  bVar10 = false;
joined_r0x01ff1114:
  if (!bVar3) {
    *plVar13 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  if (bVar10) {
    return;
  }
  do {
    lVar4 = *plVar16;
    lVar14 = plVar16[1];
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar3) {
      *plVar16 = lVar4;
      plVar16[1] = lVar14;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while( true ) {
    lVar8 = *plVar16;
    lVar9 = plVar16[1];
    if (lVar8 != lVar4 || lVar9 != lVar14) break;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar3) {
      *plVar16 = lVar4;
      *(long *)((long)plVar16 + 4) = lVar14 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01ff1238;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar4 = *plVar16;
      if (lVar4 != lVar8 || plVar16[1] != lVar9) {
        bVar3 = false;
        ClearExclusiveLocal();
        goto LAB_01ff122c;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar8;
        *(long *)((long)plVar16 + 4) = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = true;
LAB_01ff122c:
    lVar8 = lVar4;
    lVar9 = plVar16[1];
  } while (!bVar3);
LAB_01ff1238:
  nn::os::SignalLightEvent((LightEventType *)(plVar16 + 2));
  return;
}


