/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0276bde0; name: FUN_0276bde0
 */


/* WARNING: Removing unreachable block (ram,0x0276be70) */
/* WARNING: Removing unreachable block (ram,0x0276bfe8) */

void FUN_0276bde0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,undefined8 param_6,undefined8 param_7)

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
  long lVar15;
  long *plVar16;
  
  plVar16 = (long *)(param_2 + 0x530);
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar15 = *plVar16;
    lVar8 = *(long *)(param_2 + 0x538);
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar10) {
      *plVar16 = lVar15;
      *(long *)(param_2 + 0x538) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pLVar6 = (LightEventType *)(param_2 + 0x540);
  do {
    while ((lVar15 != 0 && (lVar4 != lVar15))) {
      nn::os::WaitLightEvent(pLVar6);
      do {
        lVar15 = *plVar16;
        lVar8 = *(long *)(param_2 + 0x538);
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar10) {
          *plVar16 = lVar15;
          *(long *)(param_2 + 0x538) = lVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    while( true ) {
      if (*plVar16 != lVar15 || *(long *)(param_2 + 0x538) != lVar8) break;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar10) {
        *plVar16 = lVar15;
        *(long *)(param_2 + 0x534) = lVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        if (*(char *)(param_2 + 0x550) != '\0') goto LAB_0276beac;
        plVar14 = (long *)(param_2 + 0x60);
        lVar4 = nn::os::GetCurrentThread();
        goto LAB_0276bef0;
      }
    }
    ClearExclusiveLocal();
    lVar15 = *plVar16;
    lVar8 = *(long *)(param_2 + 0x538);
  } while( true );
LAB_0276beac:
  do {
    lVar4 = *plVar16;
    lVar15 = *(long *)(param_2 + 0x538);
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar10) {
      *plVar16 = lVar4;
      *(long *)(param_2 + 0x538) = lVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar8 = *plVar16;
    lVar2 = *(long *)(param_2 + 0x538);
    if (lVar8 != lVar4 || lVar2 != lVar15) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto joined_r0x0276c024;
    }
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar10) {
      *plVar16 = lVar4;
      *(long *)(param_2 + 0x534) = lVar15 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar10 = true;
joined_r0x0276c024:
  do {
    if (bVar10) {
      nn::os::SignalLightEvent(pLVar6);
      FUN_0276c460(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      return;
    }
    do {
      lVar4 = *plVar16;
      lVar15 = *(long *)(param_2 + 0x538);
      if (lVar4 != lVar8 || lVar15 != lVar2) {
        bVar10 = false;
        ClearExclusiveLocal();
        lVar8 = lVar4;
        lVar2 = lVar15;
        goto joined_r0x0276c024;
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar10) {
        *plVar16 = lVar8;
        *(long *)(param_2 + 0x534) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar10 = true;
    lVar8 = lVar4;
    lVar2 = lVar15;
  } while( true );
  while( true ) {
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar10) {
      *plVar14 = lVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') break;
LAB_0276bef0:
    if (*plVar14 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar14 == 0) {
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar10) {
            *plVar14 = lVar4;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0276bf00;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_0276bf00:
  plVar14 = (long *)(param_2 + 0x2f0);
  lVar15 = *plVar14;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar15) {
    plVar14 = (long *)0x0;
    bVar10 = true;
  }
  else {
    lVar4 = nn::os::GetCurrentThread();
    do {
      if (*plVar14 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar14 == 0) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar10) {
              *plVar14 = lVar4;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0276bf30;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar10) {
        *plVar14 = lVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_0276bf30:
    bVar10 = false;
  }
  plVar7 = *(long **)(param_2 + 0x308);
  lVar4 = *(long *)(param_2 + 0x340);
  if ((lVar4 == 0) || (*plVar7 == param_5)) {
    plVar9 = plVar7;
  }
  else {
    lVar15 = lVar4 * 0x40;
    plVar12 = plVar7;
    do {
      lVar15 = lVar15 + -0x40;
      if (lVar15 == 0) goto LAB_0276c070;
      plVar13 = plVar12 + 8;
      plVar9 = plVar12 + 8;
      plVar12 = plVar12 + 8;
    } while (*plVar13 != param_5);
  }
  if (plVar9 != plVar7 + lVar4 * 8) {
    uVar5 = FUN_011762e0(param_1,plVar9[2],param_6,param_7);
    plVar7 = (long *)(param_2 + 0x290);
    lVar4 = nn::os::GetCurrentThread();
    do {
      lVar15 = *plVar7;
      lVar8 = *(long *)(param_2 + 0x298);
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar11) {
        *plVar7 = lVar15;
        *(long *)(param_2 + 0x298) = lVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pLVar6 = (LightEventType *)(param_2 + 0x2a0);
LAB_0276bfb4:
    while ((lVar15 != 0 && (lVar4 != lVar15))) {
      nn::os::WaitLightEvent(pLVar6);
      do {
        lVar15 = *plVar7;
        lVar8 = *(long *)(param_2 + 0x298);
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar11) {
          *plVar7 = lVar15;
          *(long *)(param_2 + 0x298) = lVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    do {
      if (*plVar7 != lVar15 || *(long *)(param_2 + 0x298) != lVar8) goto LAB_0276bfec;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar11) {
        *plVar7 = lVar15;
        *(long *)(param_2 + 0x294) = lVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_02764658(param_3,uVar5);
    do {
      lVar4 = *plVar7;
      lVar15 = *(long *)(param_2 + 0x298);
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar11) {
        *plVar7 = lVar4;
        *(long *)(param_2 + 0x298) = lVar15;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar8 = *plVar7;
      lVar2 = *(long *)(param_2 + 0x298);
      if (lVar8 != lVar4 || lVar2 != lVar15) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x0276c278;
      }
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar11) {
        *plVar7 = lVar4;
        *(long *)(param_2 + 0x294) = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar11 = true;
joined_r0x0276c278:
    do {
      if (bVar11) goto LAB_0276c280;
      do {
        lVar4 = *plVar7;
        lVar15 = *(long *)(param_2 + 0x298);
        if (lVar4 != lVar8 || lVar15 != lVar2) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar8 = lVar4;
          lVar2 = lVar15;
          goto joined_r0x0276c278;
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
      lVar2 = lVar15;
    } while( true );
  }
LAB_0276c070:
  plVar7 = (long *)(param_2 + 0x730);
  lVar15 = *plVar7;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar15) {
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
              goto LAB_0276c144;
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
LAB_0276c144:
  plVar9 = *(long **)(param_2 + 0x748);
  lVar4 = *(long *)(param_2 + 0x780);
  if ((lVar4 == 0) || (*plVar9 == param_5)) {
    plVar12 = plVar9;
  }
  else {
    lVar15 = lVar4 * 0x10;
    plVar13 = plVar9;
    do {
      lVar15 = lVar15 + -0x10;
      if (lVar15 == 0) goto LAB_0276c1e0;
      plVar1 = plVar13 + 2;
      plVar12 = plVar13 + 2;
      plVar13 = plVar13 + 2;
    } while (*plVar1 != param_5);
  }
  if (plVar12 == plVar9 + lVar4 * 2) {
LAB_0276c1e0:
    if (!bVar11) {
      pLVar6 = (LightEventType *)(plVar7 + 1);
      *plVar7 = 0;
LAB_0276c280:
      nn::os::SignalLightEvent(pLVar6);
    }
  }
  else {
    lVar4 = plVar12[1];
    if (!bVar11) {
      *plVar7 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
    }
    if (lVar4 != 0) {
      do {
        lVar4 = *plVar16;
        lVar15 = *(long *)(param_2 + 0x538);
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar11) {
          *plVar16 = lVar4;
          *(long *)(param_2 + 0x538) = lVar15;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        lVar8 = *plVar16;
        lVar2 = *(long *)(param_2 + 0x538);
        if (lVar8 != lVar4 || lVar2 != lVar15) {
          bVar11 = false;
          ClearExclusiveLocal();
          goto joined_r0x0276c238;
        }
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar11) {
          *plVar16 = lVar4;
          *(long *)(param_2 + 0x534) = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar11 = true;
joined_r0x0276c238:
      if (!bVar11) {
        do {
          lVar4 = *plVar16;
          lVar15 = *(long *)(param_2 + 0x538);
          if (lVar4 != lVar8 || lVar15 != lVar2) {
            bVar11 = false;
            ClearExclusiveLocal();
            lVar8 = lVar4;
            lVar2 = lVar15;
            goto joined_r0x0276c238;
          }
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar11) {
            *plVar16 = lVar8;
            *(long *)(param_2 + 0x534) = lVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar11 = true;
        lVar8 = lVar4;
        lVar2 = lVar15;
        goto joined_r0x0276c238;
      }
      nn::os::SignalLightEvent(pLVar6);
      FUN_0276c460(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      plVar16 = (long *)0x0;
      bVar11 = true;
      goto LAB_0276c288;
    }
  }
  bVar11 = false;
LAB_0276c288:
  if (!bVar10) {
    *plVar14 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar14 + 1));
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  if (bVar11) {
    return;
  }
  do {
    lVar4 = *plVar16;
    lVar15 = plVar16[1];
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar10) {
      *plVar16 = lVar4;
      plVar16[1] = lVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar8 = *plVar16;
    lVar2 = plVar16[1];
    if (lVar8 != lVar4 || lVar2 != lVar15) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto joined_r0x0276c30c;
    }
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar10) {
      *plVar16 = lVar4;
      *(long *)((long)plVar16 + 4) = lVar15 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar10 = true;
joined_r0x0276c30c:
  do {
    if (bVar10) {
      nn::os::SignalLightEvent((LightEventType *)(plVar16 + 2));
      return;
    }
    do {
      lVar4 = *plVar16;
      lVar15 = plVar16[1];
      if (lVar4 != lVar8 || lVar15 != lVar2) {
        bVar10 = false;
        ClearExclusiveLocal();
        lVar8 = lVar4;
        lVar2 = lVar15;
        goto joined_r0x0276c30c;
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar10) {
        *plVar16 = lVar8;
        *(long *)((long)plVar16 + 4) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar10 = true;
    lVar8 = lVar4;
    lVar2 = lVar15;
  } while( true );
LAB_0276bfec:
  ClearExclusiveLocal();
  lVar15 = *plVar7;
  lVar8 = *(long *)(param_2 + 0x298);
  goto LAB_0276bfb4;
}


