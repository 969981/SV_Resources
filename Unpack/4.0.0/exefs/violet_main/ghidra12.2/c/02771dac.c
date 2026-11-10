/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02771dac; name: FUN_02771dac
 */


/* WARNING: Removing unreachable block (ram,0x02771e3c) */
/* WARNING: Removing unreachable block (ram,0x02771f1c) */

void FUN_02771dac(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  LightEventType *pLVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  bool bVar11;
  bool bVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  
  plVar16 = (long *)(param_2 + 0x530);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar13 = *plVar16;
    lVar10 = *(long *)(param_2 + 0x538);
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar11) {
      *plVar16 = lVar13;
      *(long *)(param_2 + 0x538) = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pLVar2 = (LightEventType *)(param_2 + 0x540);
  do {
    while ((lVar13 != 0 && (lVar6 != lVar13))) {
      nn::os::WaitLightEvent(pLVar2);
      do {
        lVar13 = *plVar16;
        lVar10 = *(long *)(param_2 + 0x538);
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar11) {
          *plVar16 = lVar13;
          *(long *)(param_2 + 0x538) = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    while( true ) {
      if (*plVar16 != lVar13 || *(long *)(param_2 + 0x538) != lVar10) break;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar11) {
        *plVar16 = lVar13;
        *(long *)(param_2 + 0x534) = lVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        if (*(char *)(param_2 + 0x550) != '\0') goto LAB_02771e78;
        plVar3 = (long *)(param_2 + 0x60);
        lVar6 = nn::os::GetCurrentThread();
        goto LAB_02771ebc;
      }
    }
    ClearExclusiveLocal();
    lVar13 = *plVar16;
    lVar10 = *(long *)(param_2 + 0x538);
  } while( true );
LAB_02771e78:
  do {
    lVar6 = *plVar16;
    lVar13 = *(long *)(param_2 + 0x538);
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar11) {
      *plVar16 = lVar6;
      *(long *)(param_2 + 0x538) = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar10 = *plVar16;
    lVar4 = *(long *)(param_2 + 0x538);
    if (lVar10 != lVar6 || lVar4 != lVar13) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto joined_r0x02772020;
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar11) {
      *plVar16 = lVar6;
      *(long *)(param_2 + 0x534) = lVar13 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar11 = true;
joined_r0x02772020:
  do {
    if (bVar11) {
      nn::os::SignalLightEvent(pLVar2);
      FUN_01a383bc(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      return;
    }
    do {
      lVar6 = *plVar16;
      lVar13 = *(long *)(param_2 + 0x538);
      if (lVar6 != lVar10 || lVar13 != lVar4) {
        bVar11 = false;
        ClearExclusiveLocal();
        lVar10 = lVar6;
        lVar4 = lVar13;
        goto joined_r0x02772020;
      }
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar11) {
        *plVar16 = lVar10;
        *(long *)(param_2 + 0x534) = lVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar11 = true;
    lVar10 = lVar6;
    lVar4 = lVar13;
  } while( true );
  while( true ) {
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar11) {
      *plVar3 = lVar6;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') break;
LAB_02771ebc:
    if (*plVar3 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar3 == 0) {
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar11) {
            *plVar3 = lVar6;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02771ecc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_02771ecc:
  plVar3 = (long *)(param_2 + 0x290);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar13 = *plVar3;
    lVar10 = *(long *)(param_2 + 0x298);
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar11) {
      *plVar3 = lVar13;
      *(long *)(param_2 + 0x298) = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    while ((lVar13 != 0 && (lVar6 != lVar13))) {
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2a0));
      do {
        lVar13 = *plVar3;
        lVar10 = *(long *)(param_2 + 0x298);
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar11) {
          *plVar3 = lVar13;
          *(long *)(param_2 + 0x298) = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    while( true ) {
      if (*plVar3 != lVar13 || *(long *)(param_2 + 0x298) != lVar10) break;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar11) {
        *plVar3 = lVar13;
        *(long *)(param_2 + 0x294) = lVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        plVar8 = *(long **)(param_2 + 0x2b0);
        lVar6 = *(long *)(param_2 + 0x2e8);
        if ((lVar6 == 0) || (*plVar8 == param_5)) {
          plVar15 = plVar8;
          goto LAB_02771f90;
        }
        lVar13 = lVar6 * 0x20;
        plVar9 = plVar8;
        goto LAB_02771f74;
      }
    }
    ClearExclusiveLocal();
    lVar13 = *plVar3;
    lVar10 = *(long *)(param_2 + 0x298);
  } while( true );
  while (plVar14 = plVar9 + 4, plVar15 = plVar9 + 4, plVar9 = plVar9 + 4, *plVar14 != param_5) {
LAB_02771f74:
    lVar13 = lVar13 + -0x20;
    if (lVar13 == 0) goto LAB_02772098;
  }
LAB_02771f90:
  if (plVar15 == plVar8 + lVar6 * 4) {
LAB_02772098:
    plVar8 = (long *)(param_2 + 0x948);
    lVar13 = *plVar8;
    lVar6 = nn::os::GetCurrentThread();
    if (lVar6 == lVar13) {
      plVar8 = (long *)0x0;
      bVar12 = true;
    }
    else {
      lVar6 = nn::os::GetCurrentThread();
      do {
        if (*plVar8 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x950));
            while (*plVar8 == 0) {
              cVar5 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar11) {
                *plVar8 = lVar6;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_02772144;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar11) {
          *plVar8 = lVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_02772144:
      bVar12 = false;
    }
    plVar9 = *(long **)(param_2 + 0x960);
    lVar6 = *(long *)(param_2 + 0x998);
    if ((lVar6 == 0) || (*plVar9 == param_5)) {
      plVar14 = plVar9;
    }
    else {
      lVar13 = lVar6 * 0x10;
      plVar15 = plVar9;
      do {
        lVar13 = lVar13 + -0x10;
        if (lVar13 == 0) goto LAB_0277235c;
        plVar14 = plVar15 + 2;
        plVar1 = plVar15 + 2;
        plVar15 = plVar14;
      } while (*plVar1 != param_5);
    }
    if (plVar14 == plVar9 + lVar6 * 2) {
LAB_0277235c:
      do {
        lVar6 = *plVar16;
        lVar13 = *(long *)(param_2 + 0x538);
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar11) {
          *plVar16 = lVar6;
          *(long *)(param_2 + 0x538) = lVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        lVar10 = *plVar16;
        lVar4 = *(long *)(param_2 + 0x538);
        if (lVar10 != lVar6 || lVar4 != lVar13) {
          bVar11 = false;
          ClearExclusiveLocal();
          goto joined_r0x02772398;
        }
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar11) {
          *plVar16 = lVar6;
          *(long *)(param_2 + 0x534) = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar11 = true;
joined_r0x02772398:
      if (!bVar11) {
        do {
          lVar6 = *plVar16;
          lVar13 = *(long *)(param_2 + 0x538);
          if (lVar6 != lVar10 || lVar13 != lVar4) {
            bVar11 = false;
            ClearExclusiveLocal();
            lVar10 = lVar6;
            lVar4 = lVar13;
            goto joined_r0x02772398;
          }
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar11) {
            *plVar16 = lVar10;
            *(long *)(param_2 + 0x534) = lVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar11 = true;
        lVar10 = lVar6;
        lVar4 = lVar13;
        goto joined_r0x02772398;
      }
      nn::os::SignalLightEvent(pLVar2);
      FUN_01a383bc(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      plVar16 = (long *)0x0;
      bVar11 = false;
    }
    else {
      bVar11 = true;
      *(undefined1 *)(plVar14 + 1) = 1;
    }
    if (!bVar12) {
      *plVar8 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
    }
  }
  else {
    uVar7 = FUN_011762e0(param_1,*(undefined8 *)
                                  (*(long *)(param_2 + 0x348) + plVar15[3] * 0x130 + 0x110),param_6,
                         param_7);
    plVar8 = (long *)*param_3;
    lVar13 = *plVar8;
    lVar6 = nn::os::GetCurrentThread();
    if (lVar6 == lVar13) {
      *(undefined8 *)(plVar8[3] + param_3[1] * 8) = uVar7;
    }
    else {
      lVar6 = nn::os::GetCurrentThread();
      do {
        if (*plVar8 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(plVar8 + 1));
            while (*plVar8 == 0) {
              cVar5 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar11) {
                *plVar8 = lVar6;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_02771ff4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar11) {
          *plVar8 = lVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_02771ff4:
      *(undefined8 *)(plVar8[3] + param_3[1] * 8) = uVar7;
      *plVar8 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
    }
    bVar11 = true;
  }
  do {
    lVar6 = *plVar3;
    lVar13 = *(long *)(param_2 + 0x298);
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar12) {
      *plVar3 = lVar6;
      *(long *)(param_2 + 0x298) = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar10 = *plVar3;
    lVar4 = *(long *)(param_2 + 0x298);
    if (lVar10 != lVar6 || lVar4 != lVar13) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto joined_r0x027721bc;
    }
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar12) {
      *plVar3 = lVar6;
      *(long *)(param_2 + 0x294) = lVar13 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar12 = true;
joined_r0x027721bc:
  if (!bVar12) {
    do {
      lVar6 = *plVar3;
      lVar13 = *(long *)(param_2 + 0x298);
      if (lVar6 != lVar10 || lVar13 != lVar4) {
        bVar12 = false;
        ClearExclusiveLocal();
        lVar10 = lVar6;
        lVar4 = lVar13;
        goto joined_r0x027721bc;
      }
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar12) {
        *plVar3 = lVar10;
        *(long *)(param_2 + 0x294) = lVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar12 = true;
    lVar10 = lVar6;
    lVar4 = lVar13;
    goto joined_r0x027721bc;
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x2a0));
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  if (!bVar11) {
    return;
  }
  do {
    lVar6 = *plVar16;
    lVar13 = plVar16[1];
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar11) {
      *plVar16 = lVar6;
      plVar16[1] = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar10 = *plVar16;
    lVar4 = plVar16[1];
    if (lVar10 != lVar6 || lVar4 != lVar13) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto joined_r0x02772238;
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar11) {
      *plVar16 = lVar6;
      *(long *)((long)plVar16 + 4) = lVar13 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar11 = true;
joined_r0x02772238:
  do {
    if (bVar11) {
      nn::os::SignalLightEvent((LightEventType *)(plVar16 + 2));
      return;
    }
    do {
      lVar6 = *plVar16;
      lVar13 = plVar16[1];
      if (lVar6 != lVar10 || lVar13 != lVar4) {
        bVar11 = false;
        ClearExclusiveLocal();
        lVar10 = lVar6;
        lVar4 = lVar13;
        goto joined_r0x02772238;
      }
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar11) {
        *plVar16 = lVar10;
        *(long *)((long)plVar16 + 4) = lVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar11 = true;
    lVar10 = lVar6;
    lVar4 = lVar13;
  } while( true );
}


