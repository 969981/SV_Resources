/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02bd102c; name: FUN_02bd102c
 */


/* WARNING: Removing unreachable block (ram,0x02bd10c0) */
/* WARNING: Removing unreachable block (ram,0x02bd1244) */

void FUN_02bd102c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  LightEventType *pLVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  bool bVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  
  plVar14 = (long *)(param_2 + 0x530);
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar16 = *plVar14;
    lVar8 = *(long *)(param_2 + 0x538);
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar10) {
      *plVar14 = lVar16;
      *(long *)(param_2 + 0x538) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pLVar6 = (LightEventType *)(param_2 + 0x540);
  do {
    while ((lVar16 != 0 && (lVar4 != lVar16))) {
      nn::os::WaitLightEvent(pLVar6);
      do {
        lVar16 = *plVar14;
        lVar8 = *(long *)(param_2 + 0x538);
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar10) {
          *plVar14 = lVar16;
          *(long *)(param_2 + 0x538) = lVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    while( true ) {
      if (*plVar14 != lVar16 || *(long *)(param_2 + 0x538) != lVar8) break;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar10) {
        *plVar14 = lVar16;
        *(long *)(param_2 + 0x534) = lVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        if (*(char *)(param_2 + 0x550) != '\0') goto LAB_02bd10fc;
        plVar15 = (long *)(param_2 + 0x60);
        lVar4 = nn::os::GetCurrentThread();
        goto LAB_02bd1148;
      }
    }
    ClearExclusiveLocal();
    lVar16 = *plVar14;
    lVar8 = *(long *)(param_2 + 0x538);
  } while( true );
LAB_02bd10fc:
  do {
    lVar4 = *plVar14;
    lVar16 = *(long *)(param_2 + 0x538);
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar10) {
      *plVar14 = lVar4;
      *(long *)(param_2 + 0x538) = lVar16;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar8 = *plVar14;
    lVar2 = *(long *)(param_2 + 0x538);
    if (lVar8 != lVar4 || lVar2 != lVar16) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto joined_r0x02bd1280;
    }
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar10) {
      *plVar14 = lVar4;
      *(long *)(param_2 + 0x534) = lVar16 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar10 = true;
joined_r0x02bd1280:
  do {
    if (bVar10) {
      nn::os::SignalLightEvent(pLVar6);
      FUN_02bd16d8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return;
    }
    do {
      lVar4 = *plVar14;
      lVar16 = *(long *)(param_2 + 0x538);
      if (lVar4 != lVar8 || lVar16 != lVar2) {
        bVar10 = false;
        ClearExclusiveLocal();
        lVar8 = lVar4;
        lVar2 = lVar16;
        goto joined_r0x02bd1280;
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar10) {
        *plVar14 = lVar8;
        *(long *)(param_2 + 0x534) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar10 = true;
    lVar8 = lVar4;
    lVar2 = lVar16;
  } while( true );
  while( true ) {
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar10) {
      *plVar15 = lVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') break;
LAB_02bd1148:
    if (*plVar15 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar15 == 0) {
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar10) {
            *plVar15 = lVar4;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02bd1158;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_02bd1158:
  plVar15 = (long *)(param_2 + 0x2f0);
  lVar16 = *plVar15;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar16) {
    plVar15 = (long *)0x0;
    bVar10 = true;
  }
  else {
    lVar4 = nn::os::GetCurrentThread();
    do {
      if (*plVar15 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar15 == 0) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar10) {
              *plVar15 = lVar4;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_02bd1188;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar10) {
        *plVar15 = lVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_02bd1188:
    bVar10 = false;
  }
  plVar7 = *(long **)(param_2 + 0x308);
  lVar4 = *(long *)(param_2 + 0x340);
  if ((lVar4 == 0) || (*plVar7 == param_5)) {
    plVar9 = plVar7;
  }
  else {
    lVar16 = lVar4 * 0x40;
    plVar12 = plVar7;
    do {
      lVar16 = lVar16 + -0x40;
      if (lVar16 == 0) goto LAB_02bd12d0;
      plVar13 = plVar12 + 8;
      plVar9 = plVar12 + 8;
      plVar12 = plVar12 + 8;
    } while (*plVar13 != param_5);
  }
  if (plVar9 != plVar7 + lVar4 * 8) {
    uVar5 = FUN_00fb1f0c(param_1,plVar9[3],param_6,param_7);
    plVar7 = (long *)(param_2 + 0x290);
    lVar4 = nn::os::GetCurrentThread();
    do {
      lVar16 = *plVar7;
      lVar8 = *(long *)(param_2 + 0x298);
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar11) {
        *plVar7 = lVar16;
        *(long *)(param_2 + 0x298) = lVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pLVar6 = (LightEventType *)(param_2 + 0x2a0);
LAB_02bd1210:
    while ((lVar16 != 0 && (lVar4 != lVar16))) {
      nn::os::WaitLightEvent(pLVar6);
      do {
        lVar16 = *plVar7;
        lVar8 = *(long *)(param_2 + 0x298);
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar11) {
          *plVar7 = lVar16;
          *(long *)(param_2 + 0x298) = lVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    do {
      if (*plVar7 != lVar16 || *(long *)(param_2 + 0x298) != lVar8) goto LAB_02bd1248;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar11) {
        *plVar7 = lVar16;
        *(long *)(param_2 + 0x294) = lVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_02765478(param_3,uVar5);
    do {
      lVar4 = *plVar7;
      lVar16 = *(long *)(param_2 + 0x298);
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar11) {
        *plVar7 = lVar4;
        *(long *)(param_2 + 0x298) = lVar16;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar8 = *plVar7;
      lVar2 = *(long *)(param_2 + 0x298);
      if (lVar8 != lVar4 || lVar2 != lVar16) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x02bd14e0;
      }
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar11) {
        *plVar7 = lVar4;
        *(long *)(param_2 + 0x294) = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar11 = true;
joined_r0x02bd14e0:
    do {
      if (bVar11) goto LAB_02bd14e8;
      do {
        lVar4 = *plVar7;
        lVar16 = *(long *)(param_2 + 0x298);
        if (lVar4 != lVar8 || lVar16 != lVar2) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar8 = lVar4;
          lVar2 = lVar16;
          goto joined_r0x02bd14e0;
        }
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar11) {
          *plVar7 = lVar8;
          *(long *)(param_2 + 0x294) = lVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar11 = true;
      lVar8 = lVar4;
      lVar2 = lVar16;
    } while( true );
  }
LAB_02bd12d0:
  plVar7 = (long *)(param_2 + 0x730);
  lVar16 = *plVar7;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar16) {
    plVar7 = (long *)0x0;
    bVar11 = true;
  }
  else {
    lVar4 = nn::os::GetCurrentThread();
    do {
      if (*plVar7 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x738));
          while (*plVar7 == 0) {
            cVar3 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar11) {
              *plVar7 = lVar4;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              bVar11 = false;
              goto LAB_02bd1394;
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar11) {
        *plVar7 = lVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar11 = false;
  }
LAB_02bd1394:
  plVar9 = *(long **)(param_2 + 0x748);
  lVar4 = *(long *)(param_2 + 0x780);
  if ((lVar4 == 0) || (*plVar9 == param_5)) {
    plVar12 = plVar9;
  }
  else {
    lVar16 = lVar4 * 0x10;
    plVar13 = plVar9;
    do {
      lVar16 = lVar16 + -0x10;
      if (lVar16 == 0) goto LAB_02bd1444;
      plVar1 = plVar13 + 2;
      plVar12 = plVar13 + 2;
      plVar13 = plVar13 + 2;
    } while (*plVar1 != param_5);
  }
  if ((plVar12 == plVar9 + lVar4 * 2) || (plVar12[1] == 0)) {
LAB_02bd1444:
    if (!bVar11) {
      *plVar7 = 0;
      pLVar6 = (LightEventType *)(plVar7 + 1);
LAB_02bd14e8:
      nn::os::SignalLightEvent(pLVar6);
    }
    bVar11 = false;
  }
  else {
    if (!bVar11) {
      *plVar7 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
    }
    do {
      lVar4 = *plVar14;
      lVar16 = *(long *)(param_2 + 0x538);
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar11) {
        *plVar14 = lVar4;
        *(long *)(param_2 + 0x538) = lVar16;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar8 = *plVar14;
      lVar2 = *(long *)(param_2 + 0x538);
      if (lVar8 != lVar4 || lVar2 != lVar16) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x02bd149c;
      }
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar11) {
        *plVar14 = lVar4;
        *(long *)(param_2 + 0x534) = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar11 = true;
joined_r0x02bd149c:
    if (!bVar11) {
      do {
        lVar4 = *plVar14;
        lVar16 = *(long *)(param_2 + 0x538);
        if (lVar4 != lVar8 || lVar16 != lVar2) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar8 = lVar4;
          lVar2 = lVar16;
          goto joined_r0x02bd149c;
        }
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar11) {
          *plVar14 = lVar8;
          *(long *)(param_2 + 0x534) = lVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar11 = true;
      lVar8 = lVar4;
      lVar2 = lVar16;
      goto joined_r0x02bd149c;
    }
    nn::os::SignalLightEvent(pLVar6);
    FUN_02bd16d8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar14 = (long *)0x0;
    bVar11 = true;
  }
  if (!bVar10) {
    *plVar15 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  if (bVar11) {
    return;
  }
  do {
    lVar4 = *plVar14;
    lVar16 = plVar14[1];
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar10) {
      *plVar14 = lVar4;
      plVar14[1] = lVar16;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar8 = *plVar14;
    lVar2 = plVar14[1];
    if (lVar8 != lVar4 || lVar2 != lVar16) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto joined_r0x02bd1574;
    }
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar10) {
      *plVar14 = lVar4;
      *(long *)((long)plVar14 + 4) = lVar16 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar10 = true;
joined_r0x02bd1574:
  do {
    if (bVar10) {
      nn::os::SignalLightEvent((LightEventType *)(plVar14 + 2));
      return;
    }
    do {
      lVar4 = *plVar14;
      lVar16 = plVar14[1];
      if (lVar4 != lVar8 || lVar16 != lVar2) {
        bVar10 = false;
        ClearExclusiveLocal();
        lVar8 = lVar4;
        lVar2 = lVar16;
        goto joined_r0x02bd1574;
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar10) {
        *plVar14 = lVar8;
        *(long *)((long)plVar14 + 4) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar10 = true;
    lVar8 = lVar4;
    lVar2 = lVar16;
  } while( true );
LAB_02bd1248:
  ClearExclusiveLocal();
  lVar16 = *plVar7;
  lVar8 = *(long *)(param_2 + 0x298);
  goto LAB_02bd1210;
}


