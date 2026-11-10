/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b43a88; name: FUN_02b43a88
 */


void FUN_02b43a88(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  LightEventType *pLVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
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
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *plVar16 = lVar13;
      *(long *)(param_2 + 0x538) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  pLVar2 = (LightEventType *)(param_2 + 0x540);
  do {
    while ((lVar13 != 0 && (lVar6 != lVar13))) {
      nn::os::WaitLightEvent(pLVar2);
      do {
        lVar13 = *plVar16;
        lVar10 = *(long *)(param_2 + 0x538);
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = lVar13;
          *(long *)(param_2 + 0x538) = lVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    while( true ) {
      if (*plVar16 != lVar13 || *(long *)(param_2 + 0x538) != lVar10) break;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar13;
        *(long *)(param_2 + 0x534) = lVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        if (*(char *)(param_2 + 0x550) != '\0') goto LAB_02b43b58;
        plVar3 = (long *)(param_2 + 0x60);
        lVar6 = nn::os::GetCurrentThread();
        goto LAB_02b43ba0;
      }
    }
    ClearExclusiveLocal();
    lVar13 = *plVar16;
    lVar10 = *(long *)(param_2 + 0x538);
  } while( true );
  while( true ) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *plVar3 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') break;
LAB_02b43ba0:
    if (*plVar3 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar3 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *plVar3 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02b43bb0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_02b43bb0:
  plVar3 = (long *)(param_2 + 0x290);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar13 = *plVar3;
    lVar10 = *(long *)(param_2 + 0x298);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *plVar3 = lVar13;
      *(long *)(param_2 + 0x298) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    while ((lVar13 != 0 && (lVar6 != lVar13))) {
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2a0));
      do {
        lVar13 = *plVar3;
        lVar10 = *(long *)(param_2 + 0x298);
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar13;
          *(long *)(param_2 + 0x298) = lVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    while( true ) {
      if (*plVar3 != lVar13 || *(long *)(param_2 + 0x298) != lVar10) break;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar13;
        *(long *)(param_2 + 0x294) = lVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        plVar8 = *(long **)(param_2 + 0x2b0);
        lVar6 = *(long *)(param_2 + 0x2e8);
        if ((lVar6 == 0) || (*plVar8 == param_5)) {
          plVar15 = plVar8;
          goto LAB_02b43c78;
        }
        lVar13 = lVar6 * 0x20;
        plVar9 = plVar8;
        goto LAB_02b43c5c;
      }
    }
    ClearExclusiveLocal();
    lVar13 = *plVar3;
    lVar10 = *(long *)(param_2 + 0x298);
  } while( true );
LAB_02b43b58:
  do {
    lVar6 = *plVar16;
    lVar13 = *(long *)(param_2 + 0x538);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *plVar16 = lVar6;
      *(long *)(param_2 + 0x538) = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    lVar10 = *plVar16;
    lVar11 = *(long *)(param_2 + 0x538);
    if (lVar10 != lVar6 || lVar11 != lVar13) break;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *plVar16 = lVar6;
      *(long *)(param_2 + 0x534) = lVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02b43d44;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar6 = *plVar16;
      if (lVar6 != lVar10 || *(long *)(param_2 + 0x538) != lVar11) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto LAB_02b43d38;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar10;
        *(long *)(param_2 + 0x534) = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar5 = true;
LAB_02b43d38:
    lVar10 = lVar6;
    lVar11 = *(long *)(param_2 + 0x538);
  } while (!bVar5);
LAB_02b43d44:
  nn::os::SignalLightEvent(pLVar2);
  FUN_02b440f8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
  while (plVar14 = plVar9 + 4, plVar15 = plVar9 + 4, plVar9 = plVar9 + 4, *plVar14 != param_5) {
LAB_02b43c5c:
    lVar13 = lVar13 + -0x20;
    if (lVar13 == 0) goto LAB_02b43dbc;
  }
LAB_02b43c78:
  if (plVar15 == plVar8 + lVar6 * 4) {
LAB_02b43dbc:
    plVar8 = (long *)(param_2 + 0x948);
    lVar13 = *plVar8;
    lVar6 = nn::os::GetCurrentThread();
    if (lVar6 == lVar13) {
      plVar8 = (long *)0x0;
      bVar5 = true;
    }
    else {
      lVar6 = nn::os::GetCurrentThread();
      do {
        if (*plVar8 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x950));
            while (*plVar8 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar5) {
                *plVar8 = lVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_02b43dec;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = lVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_02b43dec:
      bVar5 = false;
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
        if (lVar13 == 0) goto LAB_02b44020;
        plVar14 = plVar15 + 2;
        plVar1 = plVar15 + 2;
        plVar15 = plVar14;
      } while (*plVar1 != param_5);
    }
    if (plVar14 == plVar9 + lVar6 * 2) {
LAB_02b44020:
      do {
        lVar6 = *plVar16;
        lVar13 = *(long *)(param_2 + 0x538);
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar12) {
          *plVar16 = lVar6;
          *(long *)(param_2 + 0x538) = lVar13;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        lVar10 = *plVar16;
        lVar11 = *(long *)(param_2 + 0x538);
        if (lVar10 != lVar6 || lVar11 != lVar13) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto joined_r0x02b4405c;
        }
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar12) {
          *plVar16 = lVar6;
          *(long *)(param_2 + 0x534) = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar12 = true;
joined_r0x02b4405c:
      if (!bVar12) {
        do {
          lVar6 = *plVar16;
          lVar13 = *(long *)(param_2 + 0x538);
          if (lVar6 != lVar10 || lVar13 != lVar11) {
            bVar12 = false;
            ClearExclusiveLocal();
            lVar10 = lVar6;
            lVar11 = lVar13;
            goto joined_r0x02b4405c;
          }
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar12) {
            *plVar16 = lVar10;
            *(long *)(param_2 + 0x534) = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar12 = true;
        lVar10 = lVar6;
        lVar11 = lVar13;
        goto joined_r0x02b4405c;
      }
      nn::os::SignalLightEvent(pLVar2);
      FUN_02b440f8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      plVar16 = (long *)0x0;
      bVar12 = false;
    }
    else {
      bVar12 = true;
      *(undefined1 *)(plVar14 + 1) = 1;
    }
    if (!bVar5) {
      *plVar8 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
    }
  }
  else {
    uVar7 = FUN_011d8674(param_1,*(undefined8 *)
                                  (*(long *)(param_2 + 0x348) + plVar15[3] * 0x130 + 0x118),param_6,
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
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar5) {
                *plVar8 = lVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_02b43cdc;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = lVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_02b43cdc:
      *(undefined8 *)(plVar8[3] + param_3[1] * 8) = uVar7;
      *plVar8 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
    }
    bVar12 = true;
  }
  do {
    lVar6 = *plVar3;
    lVar13 = *(long *)(param_2 + 0x298);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *plVar3 = lVar6;
      *(long *)(param_2 + 0x298) = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    lVar10 = *plVar3;
    lVar11 = *(long *)(param_2 + 0x298);
    if (lVar10 != lVar6 || lVar11 != lVar13) break;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *plVar3 = lVar6;
      *(long *)(param_2 + 0x294) = lVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02b43eac;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar6 = *plVar3;
      if (lVar6 != lVar10 || *(long *)(param_2 + 0x298) != lVar11) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto LAB_02b43ea0;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar10;
        *(long *)(param_2 + 0x294) = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar5 = true;
LAB_02b43ea0:
    lVar10 = lVar6;
    lVar11 = *(long *)(param_2 + 0x298);
  } while (!bVar5);
LAB_02b43eac:
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x2a0));
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  if (!bVar12) {
    return;
  }
  do {
    lVar6 = *plVar16;
    lVar13 = plVar16[1];
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *plVar16 = lVar6;
      plVar16[1] = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    lVar10 = *plVar16;
    lVar11 = plVar16[1];
    if (lVar10 != lVar6 || lVar11 != lVar13) break;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *plVar16 = lVar6;
      *(long *)((long)plVar16 + 4) = lVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02b43f94;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar6 = *plVar16;
      if (lVar6 != lVar10 || plVar16[1] != lVar11) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto LAB_02b43f88;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar10;
        *(long *)((long)plVar16 + 4) = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar5 = true;
LAB_02b43f88:
    lVar10 = lVar6;
    lVar11 = plVar16[1];
  } while (!bVar5);
LAB_02b43f94:
  nn::os::SignalLightEvent((LightEventType *)(plVar16 + 2));
  return;
}


