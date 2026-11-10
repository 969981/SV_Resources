/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ffc9ac; name: FUN_01ffc9ac
 */


void FUN_01ffc9ac(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  LightEventType *pLVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
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
    lVar10 = *(long *)(param_2 + 0x538);
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar7) {
      *plVar16 = lVar14;
      *(long *)(param_2 + 0x538) = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pLVar6 = (LightEventType *)(param_2 + 0x540);
LAB_01ffca08:
  while ((lVar14 != 0 && (lVar4 != lVar14))) {
    nn::os::WaitLightEvent(pLVar6);
    do {
      lVar14 = *plVar16;
      lVar10 = *(long *)(param_2 + 0x538);
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = lVar14;
        *(long *)(param_2 + 0x538) = lVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar16;
    if (lVar2 != lVar14 || *(long *)(param_2 + 0x538) != lVar10) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_01ffca38;
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar7) {
      *plVar16 = lVar14;
      *(long *)(param_2 + 0x534) = lVar10 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar7 = true;
LAB_01ffca38:
  if (!bVar7) {
    lVar14 = lVar2;
    lVar10 = *(long *)(param_2 + 0x538);
    goto LAB_01ffca08;
  }
  if (*(char *)(param_2 + 0x550) != '\0') {
    do {
      lVar4 = *plVar16;
      lVar14 = *(long *)(param_2 + 0x538);
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = lVar4;
        *(long *)(param_2 + 0x538) = lVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar10 = *plVar16;
      lVar2 = *(long *)(param_2 + 0x538);
      if (lVar10 != lVar4 || lVar2 != lVar14) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x01ffca9c;
      }
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = lVar4;
        *(long *)(param_2 + 0x534) = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar7 = true;
joined_r0x01ffca9c:
    do {
      if (bVar7) {
        nn::os::SignalLightEvent(pLVar6);
        FUN_01ffd104(param_1,PTR_DAT_047dc320,param_2,param_3,param_4,param_5,param_6,param_7);
        return;
      }
      do {
        lVar4 = *plVar16;
        lVar14 = *(long *)(param_2 + 0x538);
        if (lVar4 != lVar10 || lVar14 != lVar2) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar10 = lVar4;
          lVar2 = lVar14;
          goto joined_r0x01ffca9c;
        }
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *plVar16 = lVar10;
          *(long *)(param_2 + 0x534) = lVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar7 = true;
      lVar10 = lVar4;
      lVar2 = lVar14;
    } while( true );
  }
  plVar13 = (long *)(param_2 + 0x60);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar13 == 0) {
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar7) {
      *plVar13 = lVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01ffcb4c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar13 == 0) {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar7) {
            *plVar13 = lVar4;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01ffcb4c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar7) {
      *plVar13 = lVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01ffcb4c:
  plVar13 = (long *)(param_2 + 0x2f0);
  lVar14 = *plVar13;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar14) {
    lVar4 = nn::os::GetCurrentThread();
LAB_01ffcb6c:
    if (*plVar13 == 0) goto code_r0x01ffcb74;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
    do {
      if (*plVar13 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar13 == 0) {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar7) {
              *plVar13 = lVar4;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01ffcb7c;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = lVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01ffcb7c:
    bVar7 = false;
    goto LAB_01ffcb80;
  }
  plVar13 = (long *)0x0;
  bVar7 = true;
LAB_01ffcb80:
  plVar9 = *(long **)(param_2 + 0x308);
  lVar4 = *(long *)(param_2 + 0x340);
  if ((lVar4 == 0) || (*plVar9 == param_5)) {
    plVar15 = plVar9;
LAB_01ffcbc0:
    if (plVar15 == plVar9 + lVar4 * 8) goto LAB_01ffcc68;
    uVar5 = FUN_011207d0(param_1,plVar15[4],param_6,param_7);
    plVar9 = (long *)(param_2 + 0x290);
    lVar4 = nn::os::GetCurrentThread();
    do {
      lVar14 = *plVar9;
      lVar10 = *(long *)(param_2 + 0x298);
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar8) {
        *plVar9 = lVar14;
        *(long *)(param_2 + 0x298) = lVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pLVar6 = (LightEventType *)(param_2 + 0x2a0);
LAB_01ffcc00:
    while ((lVar14 != 0 && (lVar4 != lVar14))) {
      nn::os::WaitLightEvent(pLVar6);
      do {
        lVar14 = *plVar9;
        lVar10 = *(long *)(param_2 + 0x298);
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar8) {
          *plVar9 = lVar14;
          *(long *)(param_2 + 0x298) = lVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    do {
      lVar2 = *plVar9;
      if (lVar2 != lVar14 || *(long *)(param_2 + 0x298) != lVar10) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto LAB_01ffcc30;
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar8) {
        *plVar9 = lVar14;
        *(long *)(param_2 + 0x294) = lVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar8 = true;
LAB_01ffcc30:
    if (!bVar8) {
      lVar14 = lVar2;
      lVar10 = *(long *)(param_2 + 0x298);
      goto LAB_01ffcc00;
    }
    plVar15 = (long *)*param_3;
    lVar14 = *plVar15;
    lVar4 = nn::os::GetCurrentThread();
    if (lVar4 != lVar14) {
      lVar4 = nn::os::GetCurrentThread();
LAB_01ffcf98:
      if (*plVar15 == 0) goto code_r0x01ffcfa0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar15 + 1));
      do {
        if (*plVar15 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar15 + 1));
            while (*plVar15 == 0) {
              cVar3 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar8) {
                *plVar15 = lVar4;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_01ffcfa8;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar8) {
          *plVar15 = lVar4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01ffcfa8:
      *(undefined8 *)(plVar15[3] + param_3[1] * 8) = uVar5;
      *plVar15 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
      goto LAB_01ffcfc4;
    }
    *(undefined8 *)(plVar15[3] + param_3[1] * 8) = uVar5;
LAB_01ffcfc4:
    do {
      lVar4 = *plVar9;
      lVar14 = *(long *)(param_2 + 0x298);
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar8) {
        *plVar9 = lVar4;
        *(long *)(param_2 + 0x298) = lVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar10 = *plVar9;
      lVar2 = *(long *)(param_2 + 0x298);
      if (lVar10 != lVar4 || lVar2 != lVar14) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x01ffd00c;
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar8) {
        *plVar9 = lVar4;
        *(long *)(param_2 + 0x294) = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar8 = true;
joined_r0x01ffd00c:
    if (!bVar8) {
      do {
        lVar4 = *plVar9;
        lVar14 = *(long *)(param_2 + 0x298);
        if (lVar4 != lVar10 || lVar14 != lVar2) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar10 = lVar4;
          lVar2 = lVar14;
          goto joined_r0x01ffd00c;
        }
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar8) {
          *plVar9 = lVar10;
          *(long *)(param_2 + 0x294) = lVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar8 = true;
      lVar10 = lVar4;
      lVar2 = lVar14;
      goto joined_r0x01ffd00c;
    }
LAB_01ffcf60:
    nn::os::SignalLightEvent(pLVar6);
LAB_01ffcf64:
    bVar8 = false;
    goto LAB_01ffce8c;
  }
  lVar14 = lVar4 * 0x40;
  plVar11 = plVar9;
  while (lVar14 = lVar14 + -0x40, lVar14 != 0) {
    plVar1 = plVar11 + 8;
    plVar15 = plVar11 + 8;
    plVar11 = plVar11 + 8;
    if (*plVar1 == param_5) goto LAB_01ffcbc0;
  }
LAB_01ffcc68:
  plVar9 = (long *)(param_2 + 0x730);
  lVar14 = *plVar9;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar14) {
    lVar4 = nn::os::GetCurrentThread();
LAB_01ffcc84:
    if (*plVar9 == 0) goto code_r0x01ffcc8c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x738));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x738));
          while (*plVar9 == 0) {
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar8) {
              *plVar9 = lVar4;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01ffcd70;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar8) {
        *plVar9 = lVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01ffcd70:
    bVar8 = false;
    goto LAB_01ffcd80;
  }
  plVar9 = (long *)0x0;
  bVar8 = true;
LAB_01ffcd80:
  plVar15 = *(long **)(param_2 + 0x748);
  lVar4 = *(long *)(param_2 + 0x780);
  if ((lVar4 != 0) && (*plVar15 != param_5)) {
    lVar14 = lVar4 * 0x10;
    plVar11 = plVar15;
    while (lVar14 = lVar14 + -0x10, lVar14 != 0) {
      plVar1 = plVar11 + 2;
      plVar12 = plVar11 + 2;
      plVar11 = plVar11 + 2;
      if (*plVar1 == param_5) goto LAB_01ffcdc0;
    }
LAB_01ffcf54:
    if (!bVar8) {
      pLVar6 = (LightEventType *)(plVar9 + 1);
      *plVar9 = 0;
      goto LAB_01ffcf60;
    }
    goto LAB_01ffcf64;
  }
  plVar12 = plVar15;
LAB_01ffcdc0:
  if (plVar12 == plVar15 + lVar4 * 2) goto LAB_01ffcf54;
  lVar4 = plVar12[1];
  if (!bVar8) {
    *plVar9 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
  }
  if (lVar4 == 0) goto LAB_01ffcf64;
  do {
    lVar4 = *plVar16;
    lVar14 = *(long *)(param_2 + 0x538);
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar8) {
      *plVar16 = lVar4;
      *(long *)(param_2 + 0x538) = lVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar10 = *plVar16;
    lVar2 = *(long *)(param_2 + 0x538);
    if (lVar10 != lVar4 || lVar2 != lVar14) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto joined_r0x01ffce18;
    }
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar8) {
      *plVar16 = lVar4;
      *(long *)(param_2 + 0x534) = lVar14 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar8 = true;
joined_r0x01ffce18:
  if (!bVar8) {
    do {
      lVar4 = *plVar16;
      lVar14 = *(long *)(param_2 + 0x538);
      if (lVar4 != lVar10 || lVar14 != lVar2) {
        bVar8 = false;
        ClearExclusiveLocal();
        lVar10 = lVar4;
        lVar2 = lVar14;
        goto joined_r0x01ffce18;
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar8) {
        *plVar16 = lVar10;
        *(long *)(param_2 + 0x534) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar8 = true;
    lVar10 = lVar4;
    lVar2 = lVar14;
    goto joined_r0x01ffce18;
  }
  nn::os::SignalLightEvent(pLVar6);
  FUN_01ffd104(param_1,PTR_DAT_047dc320,param_2,param_3,param_4,param_5,param_6,param_7);
  plVar16 = (long *)0x0;
  bVar8 = true;
LAB_01ffce8c:
  if (!bVar7) {
    *plVar13 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  if (bVar8) {
    return;
  }
  do {
    lVar4 = *plVar16;
    lVar14 = plVar16[1];
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar7) {
      *plVar16 = lVar4;
      plVar16[1] = lVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar10 = *plVar16;
    lVar2 = plVar16[1];
    if (lVar10 != lVar4 || lVar2 != lVar14) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto joined_r0x01ffcee0;
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar7) {
      *plVar16 = lVar4;
      *(long *)((long)plVar16 + 4) = lVar14 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar7 = true;
joined_r0x01ffcee0:
  do {
    if (bVar7) {
      nn::os::SignalLightEvent((LightEventType *)(plVar16 + 2));
      return;
    }
    do {
      lVar4 = *plVar16;
      lVar14 = plVar16[1];
      if (lVar4 != lVar10 || lVar14 != lVar2) {
        bVar7 = false;
        ClearExclusiveLocal();
        lVar10 = lVar4;
        lVar2 = lVar14;
        goto joined_r0x01ffcee0;
      }
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = lVar10;
        *(long *)((long)plVar16 + 4) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar7 = true;
    lVar10 = lVar4;
    lVar2 = lVar14;
  } while( true );
code_r0x01ffcb74:
  cVar3 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar7) {
    *plVar13 = lVar4;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01ffcb7c;
  goto LAB_01ffcb6c;
code_r0x01ffcfa0:
  cVar3 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar8) {
    *plVar15 = lVar4;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01ffcfa8;
  goto LAB_01ffcf98;
code_r0x01ffcc8c:
  cVar3 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar8) {
    *plVar9 = lVar4;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto code_r0x01ffcc94;
  goto LAB_01ffcc84;
code_r0x01ffcc94:
  bVar8 = false;
  goto LAB_01ffcd80;
}


