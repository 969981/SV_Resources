/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0111ef3c; name: FUN_0111ef3c
 */


void FUN_0111ef3c(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  LightEventType *pLVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  bool bVar16;
  
  plVar15 = (long *)(param_2 + 0x530);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar12 = *plVar15;
    lVar11 = *(long *)(param_2 + 0x538);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar8) {
      *plVar15 = lVar12;
      *(long *)(param_2 + 0x538) = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pLVar2 = (LightEventType *)(param_2 + 0x540);
LAB_0111ef98:
  while ((lVar12 != 0 && (lVar6 != lVar12))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      lVar12 = *plVar15;
      lVar11 = *(long *)(param_2 + 0x538);
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar8) {
        *plVar15 = lVar12;
        *(long *)(param_2 + 0x538) = lVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar4 = *plVar15;
    if (lVar4 != lVar12 || *(long *)(param_2 + 0x538) != lVar11) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_0111efc8;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar8) {
      *plVar15 = lVar12;
      *(long *)(param_2 + 0x534) = lVar11 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_0111efc8:
  if (!bVar8) {
    lVar12 = lVar4;
    lVar11 = *(long *)(param_2 + 0x538);
    goto LAB_0111ef98;
  }
  if (*(char *)(param_2 + 0x550) != '\0') {
    do {
      lVar6 = *plVar15;
      lVar12 = *(long *)(param_2 + 0x538);
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar8) {
        *plVar15 = lVar6;
        *(long *)(param_2 + 0x538) = lVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      lVar11 = *plVar15;
      lVar4 = *(long *)(param_2 + 0x538);
      if (lVar11 != lVar6 || lVar4 != lVar12) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x0111f54c;
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar8) {
        *plVar15 = lVar6;
        *(long *)(param_2 + 0x534) = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar8 = true;
joined_r0x0111f54c:
    do {
      if (bVar8) {
        nn::os::SignalLightEvent(pLVar2);
        FUN_0111f5f8(param_1,PTR_DAT_047dc488,param_2,param_3,param_4,param_5,param_6,param_7);
        return;
      }
      do {
        lVar6 = *plVar15;
        lVar12 = *(long *)(param_2 + 0x538);
        if (lVar6 != lVar11 || lVar12 != lVar4) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar11 = lVar6;
          lVar4 = lVar12;
          goto joined_r0x0111f54c;
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar8) {
          *plVar15 = lVar11;
          *(long *)(param_2 + 0x534) = lVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar8 = true;
      lVar11 = lVar6;
      lVar4 = lVar12;
    } while( true );
  }
  plVar3 = (long *)(param_2 + 0x60);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar3 == 0) {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar8) {
      *plVar3 = lVar6;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_0111f01c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
  do {
    if (*plVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar3 == 0) {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar8) {
            *plVar3 = lVar6;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0111f01c;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar8) {
      *plVar3 = lVar6;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0111f01c:
  plVar3 = (long *)(param_2 + 0x290);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar12 = *plVar3;
    lVar11 = *(long *)(param_2 + 0x298);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar8) {
      *plVar3 = lVar12;
      *(long *)(param_2 + 0x298) = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0111f038:
  while ((lVar12 != 0 && (lVar6 != lVar12))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2a0));
    do {
      lVar12 = *plVar3;
      lVar11 = *(long *)(param_2 + 0x298);
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *plVar3 = lVar12;
        *(long *)(param_2 + 0x298) = lVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar4 = *plVar3;
    if (lVar4 != lVar12 || *(long *)(param_2 + 0x298) != lVar11) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_0111f068;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar8) {
      *plVar3 = lVar12;
      *(long *)(param_2 + 0x294) = lVar11 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_0111f068:
  if (!bVar8) {
    lVar12 = lVar4;
    lVar11 = *(long *)(param_2 + 0x298);
    goto LAB_0111f038;
  }
  plVar9 = *(long **)(param_2 + 0x2b0);
  lVar6 = *(long *)(param_2 + 0x2e8);
  if ((lVar6 == 0) || (*plVar9 == param_5)) {
    plVar10 = plVar9;
LAB_0111f0d4:
    if (plVar10 == plVar9 + lVar6 * 4) goto LAB_0111f0e0;
    uVar7 = FUN_011207d0(param_1,*(undefined8 *)
                                  (*(long *)(param_2 + 0x348) + plVar10[3] * 0x130 + 0x120),param_6,
                         param_7);
    plVar9 = (long *)*param_3;
    lVar12 = *plVar9;
    lVar6 = nn::os::GetCurrentThread();
    if (lVar6 != lVar12) {
      lVar6 = nn::os::GetCurrentThread();
LAB_0111f4bc:
      if (*plVar9 == 0) goto code_r0x0111f4c4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar9 + 1));
      do {
        if (*plVar9 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar9 + 1));
            while (*plVar9 == 0) {
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar8) {
                *plVar9 = lVar6;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_0111f4cc;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar8) {
          *plVar9 = lVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_0111f4cc:
      *(undefined8 *)(plVar9[3] + param_3[1] * 8) = uVar7;
      *plVar9 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
      goto LAB_0111f4e4;
    }
    *(undefined8 *)(plVar9[3] + param_3[1] * 8) = uVar7;
LAB_0111f4e4:
    bVar8 = true;
    goto LAB_0111f288;
  }
  lVar12 = lVar6 * 0x20;
  plVar13 = plVar9;
  while (lVar12 = lVar12 + -0x20, lVar12 != 0) {
    plVar14 = plVar13 + 4;
    plVar10 = plVar13 + 4;
    plVar13 = plVar13 + 4;
    if (*plVar14 == param_5) goto LAB_0111f0d4;
  }
LAB_0111f0e0:
  plVar9 = (long *)(param_2 + 0x948);
  lVar12 = *plVar9;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 != lVar12) {
    lVar6 = nn::os::GetCurrentThread();
LAB_0111f100:
    if (*plVar9 == 0) goto code_r0x0111f108;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x950));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x950));
          while (*plVar9 == 0) {
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar8) {
              *plVar9 = lVar6;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_0111f1a8;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar8) {
        *plVar9 = lVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_0111f1a8:
    bVar16 = false;
    goto LAB_0111f1b8;
  }
  plVar9 = (long *)0x0;
  bVar16 = true;
LAB_0111f1b8:
  plVar10 = *(long **)(param_2 + 0x960);
  lVar6 = *(long *)(param_2 + 0x998);
  if ((lVar6 == 0) || (*plVar10 == param_5)) {
    plVar13 = plVar10;
LAB_0111f1c8:
    if (plVar13 == plVar10 + lVar6 * 2) goto LAB_0111f1d4;
    bVar8 = true;
    *(undefined1 *)(plVar13 + 1) = 1;
  }
  else {
    lVar12 = lVar6 * 0x10;
    plVar14 = plVar10;
    while (lVar12 = lVar12 + -0x10, lVar12 != 0) {
      plVar13 = plVar14 + 2;
      plVar1 = plVar14 + 2;
      plVar14 = plVar13;
      if (*plVar1 == param_5) goto LAB_0111f1c8;
    }
LAB_0111f1d4:
    do {
      lVar6 = *plVar15;
      lVar12 = *(long *)(param_2 + 0x538);
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar8) {
        *plVar15 = lVar6;
        *(long *)(param_2 + 0x538) = lVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      lVar11 = *plVar15;
      lVar4 = *(long *)(param_2 + 0x538);
      if (lVar11 != lVar6 || lVar4 != lVar12) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x0111f204;
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar8) {
        *plVar15 = lVar6;
        *(long *)(param_2 + 0x534) = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar8 = true;
joined_r0x0111f204:
    if (!bVar8) {
      do {
        lVar6 = *plVar15;
        lVar12 = *(long *)(param_2 + 0x538);
        if (lVar6 != lVar11 || lVar12 != lVar4) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar11 = lVar6;
          lVar4 = lVar12;
          goto joined_r0x0111f204;
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar8) {
          *plVar15 = lVar11;
          *(long *)(param_2 + 0x534) = lVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar8 = true;
      lVar11 = lVar6;
      lVar4 = lVar12;
      goto joined_r0x0111f204;
    }
    nn::os::SignalLightEvent(pLVar2);
    FUN_0111f5f8(param_1,PTR_DAT_047dc488,param_2,param_3,param_4,param_5,param_6,param_7);
    plVar15 = (long *)0x0;
    bVar8 = false;
  }
  if (!bVar16) {
    *plVar9 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
  }
LAB_0111f288:
  do {
    lVar6 = *plVar3;
    lVar12 = *(long *)(param_2 + 0x298);
    cVar5 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar16) {
      *plVar3 = lVar6;
      *(long *)(param_2 + 0x298) = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar11 = *plVar3;
    lVar4 = *(long *)(param_2 + 0x298);
    if (lVar11 != lVar6 || lVar4 != lVar12) {
      bVar16 = false;
      ClearExclusiveLocal();
      goto joined_r0x0111f2b8;
    }
    cVar5 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar16) {
      *plVar3 = lVar6;
      *(long *)(param_2 + 0x294) = lVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar16 = true;
joined_r0x0111f2b8:
  if (!bVar16) {
    do {
      lVar6 = *plVar3;
      lVar12 = *(long *)(param_2 + 0x298);
      if (lVar6 != lVar11 || lVar12 != lVar4) {
        bVar16 = false;
        ClearExclusiveLocal();
        lVar11 = lVar6;
        lVar4 = lVar12;
        goto joined_r0x0111f2b8;
      }
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar16) {
        *plVar3 = lVar11;
        *(long *)(param_2 + 0x294) = lVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar16 = true;
    lVar11 = lVar6;
    lVar4 = lVar12;
    goto joined_r0x0111f2b8;
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x2a0));
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  if (!bVar8) {
    return;
  }
  do {
    lVar6 = *plVar15;
    lVar12 = plVar15[1];
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar8) {
      *plVar15 = lVar6;
      plVar15[1] = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar11 = *plVar15;
    lVar4 = plVar15[1];
    if (lVar11 != lVar6 || lVar4 != lVar12) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto joined_r0x0111f344;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar8) {
      *plVar15 = lVar6;
      *(long *)((long)plVar15 + 4) = lVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
joined_r0x0111f344:
  do {
    if (bVar8) {
      nn::os::SignalLightEvent((LightEventType *)(plVar15 + 2));
      return;
    }
    do {
      lVar6 = *plVar15;
      lVar12 = plVar15[1];
      if (lVar6 != lVar11 || lVar12 != lVar4) {
        bVar8 = false;
        ClearExclusiveLocal();
        lVar11 = lVar6;
        lVar4 = lVar12;
        goto joined_r0x0111f344;
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar8) {
        *plVar15 = lVar11;
        *(long *)((long)plVar15 + 4) = lVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar8 = true;
    lVar11 = lVar6;
    lVar4 = lVar12;
  } while( true );
code_r0x0111f4c4:
  cVar5 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar8) {
    *plVar9 = lVar6;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_0111f4cc;
  goto LAB_0111f4bc;
code_r0x0111f108:
  cVar5 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar8) {
    *plVar9 = lVar6;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto code_r0x0111f110;
  goto LAB_0111f100;
code_r0x0111f110:
  bVar16 = false;
  goto LAB_0111f1b8;
}


