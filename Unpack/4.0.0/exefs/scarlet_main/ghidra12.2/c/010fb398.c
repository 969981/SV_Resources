/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010fb398; name: FUN_010fb398
 */


void FUN_010fb398(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  float fVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  LightEventType *pLVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long local_a0;
  long lStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 *local_80;
  char local_78;
  
  if (param_3 == -1) {
    return;
  }
  plVar16 = (long *)(param_1 + 0x530);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar13 = *plVar16;
    lVar10 = *(long *)(param_1 + 0x538);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *plVar16 = lVar13;
      *(long *)(param_1 + 0x538) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  pLVar7 = (LightEventType *)(param_1 + 0x540);
  do {
    while ((lVar13 != 0 && (lVar6 != lVar13))) {
      nn::os::WaitLightEvent(pLVar7);
      do {
        lVar13 = *plVar16;
        lVar10 = *(long *)(param_1 + 0x538);
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = lVar13;
          *(long *)(param_1 + 0x538) = lVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    while( true ) {
      if (*plVar16 != lVar13 || *(long *)(param_1 + 0x538) != lVar10) break;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar13;
        *(long *)(param_1 + 0x534) = lVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        if (*(char *)(param_1 + 0x550) != '\0') goto LAB_010fb45c;
        plVar2 = (long *)(param_1 + 0x60);
        lVar6 = nn::os::GetCurrentThread();
        goto LAB_010fb4a0;
      }
    }
    ClearExclusiveLocal();
    lVar13 = *plVar16;
    lVar10 = *(long *)(param_1 + 0x538);
  } while( true );
LAB_010fb45c:
  do {
    lVar6 = *plVar16;
    lVar13 = *(long *)(param_1 + 0x538);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *plVar16 = lVar6;
      *(long *)(param_1 + 0x538) = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    lVar10 = *plVar16;
    lVar11 = *(long *)(param_1 + 0x538);
    if (lVar10 != lVar6 || lVar11 != lVar13) break;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *plVar16 = lVar6;
      *(long *)(param_1 + 0x534) = lVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_010fb5ec;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar6 = *plVar16;
      if (lVar6 != lVar10 || *(long *)(param_1 + 0x538) != lVar11) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto LAB_010fb5e0;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar10;
        *(long *)(param_1 + 0x534) = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar5 = true;
LAB_010fb5e0:
    lVar10 = lVar6;
    lVar11 = *(long *)(param_1 + 0x538);
  } while (!bVar5);
LAB_010fb5ec:
  nn::os::SignalLightEvent(pLVar7);
  local_a0 = param_1;
  lStack_98 = param_2;
  local_90 = param_3;
  FUN_00f338dc(&local_88,param_1);
  fVar3 = *(float *)(param_1 + 0x520);
  FUN_02a76d94(fVar3,local_88,&local_a0);
  *(float *)(param_1 + 0x520) = fVar3 + 0.01;
  if (local_78 == '\0') {
    return;
  }
  *local_80 = 0;
  pLVar7 = (LightEventType *)(local_80 + 1);
  goto LAB_010fb95c;
  while( true ) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') break;
LAB_010fb4a0:
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x68));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_010fb4b0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_010fb4b0:
  plVar2 = (long *)(param_1 + 0x290);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar13 = *plVar2;
    lVar10 = *(long *)(param_1 + 0x298);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar13;
      *(long *)(param_1 + 0x298) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    while ((lVar13 != 0 && (lVar6 != lVar13))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a0));
      do {
        lVar13 = *plVar2;
        lVar10 = *(long *)(param_1 + 0x298);
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar13;
          *(long *)(param_1 + 0x298) = lVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    while( true ) {
      if (*plVar2 != lVar13 || *(long *)(param_1 + 0x298) != lVar10) break;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar13;
        *(long *)(param_1 + 0x294) = lVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        plVar8 = *(long **)(param_1 + 0x2b0);
        lVar6 = *(long *)(param_1 + 0x2e8);
        if ((lVar6 == 0) || (*plVar8 == param_2)) {
          plVar14 = plVar8;
          goto LAB_010fb574;
        }
        lVar13 = lVar6 * 0x20;
        plVar9 = plVar8;
        goto LAB_010fb558;
      }
    }
    ClearExclusiveLocal();
    lVar13 = *plVar2;
    lVar10 = *(long *)(param_1 + 0x298);
  } while( true );
  while (plVar15 = plVar9 + 4, plVar14 = plVar9 + 4, plVar9 = plVar9 + 4, *plVar15 != param_2) {
LAB_010fb558:
    lVar13 = lVar13 + -0x20;
    if (lVar13 == 0) goto LAB_010fb680;
  }
LAB_010fb574:
  if (plVar14 == plVar8 + lVar6 * 4) {
LAB_010fb680:
    plVar8 = (long *)(param_1 + 0x948);
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
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x950));
            while (*plVar8 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar5) {
                *plVar8 = lVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_010fb6ac;
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
LAB_010fb6ac:
      bVar5 = false;
    }
    plVar9 = *(long **)(param_1 + 0x960);
    lVar6 = *(long *)(param_1 + 0x998);
    if ((lVar6 == 0) || (*plVar9 == param_2)) {
      plVar15 = plVar9;
    }
    else {
      lVar13 = lVar6 * 0x10;
      plVar14 = plVar9;
      do {
        lVar13 = lVar13 + -0x10;
        if (lVar13 == 0) goto LAB_010fb740;
        plVar15 = plVar14 + 2;
        plVar1 = plVar14 + 2;
        plVar14 = plVar15;
      } while (*plVar1 != param_2);
    }
    if (plVar15 == plVar9 + lVar6 * 2) {
LAB_010fb740:
      do {
        lVar6 = *plVar16;
        lVar13 = *(long *)(param_1 + 0x538);
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar12) {
          *plVar16 = lVar6;
          *(long *)(param_1 + 0x538) = lVar13;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        lVar10 = *plVar16;
        lVar11 = *(long *)(param_1 + 0x538);
        if (lVar10 != lVar6 || lVar11 != lVar13) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto joined_r0x010fb77c;
        }
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar12) {
          *plVar16 = lVar6;
          *(long *)(param_1 + 0x534) = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar12 = true;
joined_r0x010fb77c:
      if (!bVar12) {
        do {
          lVar6 = *plVar16;
          lVar13 = *(long *)(param_1 + 0x538);
          if (lVar6 != lVar10 || lVar13 != lVar11) {
            bVar12 = false;
            ClearExclusiveLocal();
            lVar10 = lVar6;
            lVar11 = lVar13;
            goto joined_r0x010fb77c;
          }
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar12) {
            *plVar16 = lVar10;
            *(long *)(param_1 + 0x534) = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar12 = true;
        lVar10 = lVar6;
        lVar11 = lVar13;
        goto joined_r0x010fb77c;
      }
      nn::os::SignalLightEvent(pLVar7);
      local_a0 = param_1;
      lStack_98 = param_2;
      local_90 = param_3;
      FUN_00f338dc(&local_88,param_1);
      fVar3 = *(float *)(param_1 + 0x520);
      FUN_02a7835c(fVar3,local_88,&local_a0);
      *(float *)(param_1 + 0x520) = fVar3 + 0.01;
      if (local_78 != '\0') {
        *local_80 = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_80 + 1));
      }
      plVar16 = (long *)0x0;
      bVar12 = false;
    }
    else {
      bVar12 = true;
      *(undefined1 *)(plVar15 + 1) = 1;
    }
    if (!bVar5) {
      *plVar8 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
    }
  }
  else {
    FUN_00ffb5e8(*(undefined8 *)(*(long *)(param_1 + 0x348) + plVar14[3] * 0x130 + 0x120),param_3);
    bVar12 = true;
  }
  do {
    lVar6 = *plVar2;
    lVar13 = *(long *)(param_1 + 0x298);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar6;
      *(long *)(param_1 + 0x298) = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    lVar10 = *plVar2;
    lVar11 = *(long *)(param_1 + 0x298);
    if (lVar10 != lVar6 || lVar11 != lVar13) break;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar6;
      *(long *)(param_1 + 0x294) = lVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_010fb8bc;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar6 = *plVar2;
      if (lVar6 != lVar10 || *(long *)(param_1 + 0x298) != lVar11) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto LAB_010fb8b0;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar10;
        *(long *)(param_1 + 0x294) = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar5 = true;
LAB_010fb8b0:
    lVar10 = lVar6;
    lVar11 = *(long *)(param_1 + 0x298);
  } while (!bVar5);
LAB_010fb8bc:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2a0));
  *(undefined8 *)(param_1 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x68));
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
    if (cVar4 == '\0') goto LAB_010fb958;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar6 = *plVar16;
      if (lVar6 != lVar10 || plVar16[1] != lVar11) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto LAB_010fb94c;
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
LAB_010fb94c:
    lVar10 = lVar6;
    lVar11 = plVar16[1];
  } while (!bVar5);
LAB_010fb958:
  pLVar7 = (LightEventType *)(plVar16 + 2);
LAB_010fb95c:
  nn::os::SignalLightEvent(pLVar7);
  return;
}


