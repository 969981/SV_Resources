/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010fbea8; name: FUN_010fbea8
 */


void FUN_010fbea8(long param_1,long param_2,long param_3)

{
  long *plVar1;
  float fVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  LightEventType *pLVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  bool bVar13;
  long lVar14;
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
  plVar15 = (long *)(param_1 + 0x530);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar14 = *plVar15;
    lVar8 = *(long *)(param_1 + 0x538);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar4) {
      *plVar15 = lVar14;
      *(long *)(param_1 + 0x538) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pLVar6 = (LightEventType *)(param_1 + 0x540);
  do {
    while ((lVar14 != 0 && (lVar5 != lVar14))) {
      nn::os::WaitLightEvent(pLVar6);
      do {
        lVar14 = *plVar15;
        lVar8 = *(long *)(param_1 + 0x538);
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *plVar15 = lVar14;
          *(long *)(param_1 + 0x538) = lVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    while( true ) {
      if (*plVar15 != lVar14 || *(long *)(param_1 + 0x538) != lVar8) break;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar14;
        *(long *)(param_1 + 0x534) = lVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        if (*(char *)(param_1 + 0x550) != '\0') goto LAB_010fbf6c;
        plVar16 = (long *)(param_1 + 0x2f0);
        lVar14 = *plVar16;
        lVar5 = nn::os::GetCurrentThread();
        if (lVar5 == lVar14) {
          plVar16 = (long *)0x0;
          bVar4 = true;
          goto LAB_010fbfd4;
        }
        lVar5 = nn::os::GetCurrentThread();
        goto LAB_010fbfc0;
      }
    }
    ClearExclusiveLocal();
    lVar14 = *plVar15;
    lVar8 = *(long *)(param_1 + 0x538);
  } while( true );
LAB_010fbf6c:
  do {
    lVar5 = *plVar15;
    lVar14 = *(long *)(param_1 + 0x538);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar4) {
      *plVar15 = lVar5;
      *(long *)(param_1 + 0x538) = lVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while( true ) {
    lVar8 = *plVar15;
    lVar10 = *(long *)(param_1 + 0x538);
    if (lVar8 != lVar5 || lVar10 != lVar14) break;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar4) {
      *plVar15 = lVar5;
      *(long *)(param_1 + 0x534) = lVar14 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_010fc078;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar5 = *plVar15;
      if (lVar5 != lVar8 || *(long *)(param_1 + 0x538) != lVar10) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_010fc06c;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar8;
        *(long *)(param_1 + 0x534) = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = true;
LAB_010fc06c:
    lVar8 = lVar5;
    lVar10 = *(long *)(param_1 + 0x538);
  } while (!bVar4);
LAB_010fc078:
  nn::os::SignalLightEvent(pLVar6);
  local_a0 = param_1;
  lStack_98 = param_2;
  local_90 = param_3;
  FUN_00f338dc(&local_88,param_1);
  fVar2 = *(float *)(param_1 + 0x520);
  FUN_02a6bf44(fVar2,local_88,&local_a0);
  *(float *)(param_1 + 0x520) = fVar2 + 0.01;
  if (local_78 == '\0') {
    return;
  }
  *local_80 = 0;
  pLVar6 = (LightEventType *)(local_80 + 1);
  goto LAB_010fc2a8;
  while( true ) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *plVar16 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') break;
LAB_010fbfc0:
    if (*plVar16 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
        while (*plVar16 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_010fbfd0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_010fbfd0:
  bVar4 = false;
LAB_010fbfd4:
  plVar7 = *(long **)(param_1 + 0x308);
  lVar5 = *(long *)(param_1 + 0x340);
  if ((lVar5 == 0) || (*plVar7 == param_2)) {
    plVar9 = plVar7;
  }
  else {
    lVar14 = lVar5 * 0x40;
    plVar11 = plVar7;
    do {
      lVar14 = lVar14 + -0x40;
      if (lVar14 == 0) goto LAB_010fc0e0;
      plVar12 = plVar11 + 8;
      plVar9 = plVar11 + 8;
      plVar11 = plVar11 + 8;
    } while (*plVar12 != param_2);
  }
  if (plVar9 == plVar7 + lVar5 * 8) {
LAB_010fc0e0:
    plVar7 = (long *)(param_1 + 0x730);
    lVar14 = *plVar7;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 == lVar14) {
      plVar7 = (long *)0x0;
      bVar13 = true;
    }
    else {
      lVar5 = nn::os::GetCurrentThread();
      do {
        if (*plVar7 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x738));
            while (*plVar7 == 0) {
              cVar3 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar13) {
                *plVar7 = lVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                bVar13 = false;
                goto LAB_010fc10c;
              }
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar13) {
          *plVar7 = lVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
        bVar13 = false;
      } while (cVar3 != '\0');
    }
LAB_010fc10c:
    plVar9 = *(long **)(param_1 + 0x748);
    lVar5 = *(long *)(param_1 + 0x780);
    if ((lVar5 == 0) || (*plVar9 == param_2)) {
      plVar11 = plVar9;
    }
    else {
      lVar14 = lVar5 * 0x10;
      plVar12 = plVar9;
      do {
        lVar14 = lVar14 + -0x10;
        if (lVar14 == 0) goto LAB_010fc1d0;
        plVar1 = plVar12 + 2;
        plVar11 = plVar12 + 2;
        plVar12 = plVar12 + 2;
      } while (*plVar1 != param_2);
    }
    if ((plVar11 != plVar9 + lVar5 * 2) && (plVar11[1] != 0)) {
      if (!bVar13) {
        *plVar7 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
      }
      do {
        lVar5 = *plVar15;
        lVar14 = *(long *)(param_1 + 0x538);
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar13) {
          *plVar15 = lVar5;
          *(long *)(param_1 + 0x538) = lVar14;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        lVar8 = *plVar15;
        lVar10 = *(long *)(param_1 + 0x538);
        if (lVar8 != lVar5 || lVar10 != lVar14) {
          bVar13 = false;
          ClearExclusiveLocal();
          goto joined_r0x010fc2d8;
        }
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar13) {
          *plVar15 = lVar5;
          *(long *)(param_1 + 0x534) = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar13 = true;
joined_r0x010fc2d8:
      if (!bVar13) {
        do {
          lVar5 = *plVar15;
          lVar14 = *(long *)(param_1 + 0x538);
          if (lVar5 != lVar8 || lVar14 != lVar10) {
            bVar13 = false;
            ClearExclusiveLocal();
            lVar8 = lVar5;
            lVar10 = lVar14;
            goto joined_r0x010fc2d8;
          }
          cVar3 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar13) {
            *plVar15 = lVar8;
            *(long *)(param_1 + 0x534) = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar13 = true;
        lVar8 = lVar5;
        lVar10 = lVar14;
        goto joined_r0x010fc2d8;
      }
      nn::os::SignalLightEvent(pLVar6);
      local_a0 = param_1;
      lStack_98 = param_2;
      local_90 = param_3;
      FUN_00f338dc(&local_88,param_1);
      fVar2 = *(float *)(param_1 + 0x520);
      FUN_02a6d50c(fVar2,local_88,&local_a0);
      *(float *)(param_1 + 0x520) = fVar2 + 0.01;
      if (local_78 != '\0') {
        *local_80 = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_80 + 1));
      }
      plVar15 = (long *)0x0;
      bVar13 = true;
      goto joined_r0x010fc388;
    }
LAB_010fc1d0:
    if (!bVar13) {
      *plVar7 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
    }
  }
  else {
    FUN_00e2b4fc(plVar9[3],param_3);
  }
  bVar13 = false;
joined_r0x010fc388:
  if (!bVar4) {
    *plVar16 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar16 + 1));
  }
  if (bVar13) {
    return;
  }
  do {
    lVar5 = *plVar15;
    lVar14 = plVar15[1];
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar4) {
      *plVar15 = lVar5;
      plVar15[1] = lVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while( true ) {
    lVar8 = *plVar15;
    lVar10 = plVar15[1];
    if (lVar8 != lVar5 || lVar10 != lVar14) break;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar4) {
      *plVar15 = lVar5;
      *(long *)((long)plVar15 + 4) = lVar14 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_010fc2a4;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar5 = *plVar15;
      if (lVar5 != lVar8 || plVar15[1] != lVar10) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_010fc298;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar8;
        *(long *)((long)plVar15 + 4) = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = true;
LAB_010fc298:
    lVar8 = lVar5;
    lVar10 = plVar15[1];
  } while (!bVar4);
LAB_010fc2a4:
  pLVar6 = (LightEventType *)(plVar15 + 2);
LAB_010fc2a8:
  nn::os::SignalLightEvent(pLVar6);
  return;
}


