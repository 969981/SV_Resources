/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010fc3b8; name: FUN_010fc3b8
 */


void FUN_010fc3b8(long param_1,long param_2,long param_3)

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
        if (*(char *)(param_1 + 0x550) != '\0') goto LAB_010fc47c;
        plVar16 = (long *)(param_1 + 0x2f0);
        lVar14 = *plVar16;
        lVar5 = nn::os::GetCurrentThread();
        if (lVar5 == lVar14) {
          plVar16 = (long *)0x0;
          bVar4 = true;
          goto LAB_010fc4e4;
        }
        lVar5 = nn::os::GetCurrentThread();
        goto LAB_010fc4d0;
      }
    }
    ClearExclusiveLocal();
    lVar14 = *plVar15;
    lVar8 = *(long *)(param_1 + 0x538);
  } while( true );
LAB_010fc47c:
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
    if (cVar3 == '\0') goto LAB_010fc588;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar5 = *plVar15;
      if (lVar5 != lVar8 || *(long *)(param_1 + 0x538) != lVar10) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_010fc57c;
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
LAB_010fc57c:
    lVar8 = lVar5;
    lVar10 = *(long *)(param_1 + 0x538);
  } while (!bVar4);
LAB_010fc588:
  nn::os::SignalLightEvent(pLVar6);
  local_a0 = param_1;
  lStack_98 = param_2;
  local_90 = param_3;
  FUN_00f338dc(&local_88,param_1);
  fVar2 = *(float *)(param_1 + 0x520);
  FUN_02a6ead4(fVar2,local_88,&local_a0);
  *(float *)(param_1 + 0x520) = fVar2 + 0.01;
  if (local_78 == '\0') {
    return;
  }
  *local_80 = 0;
  pLVar6 = (LightEventType *)(local_80 + 1);
  goto LAB_010fc7b8;
  while( true ) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *plVar16 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') break;
LAB_010fc4d0:
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
          if (cVar3 == '\0') goto LAB_010fc4e0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_010fc4e0:
  bVar4 = false;
LAB_010fc4e4:
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
      if (lVar14 == 0) goto LAB_010fc5f0;
      plVar12 = plVar11 + 8;
      plVar9 = plVar11 + 8;
      plVar11 = plVar11 + 8;
    } while (*plVar12 != param_2);
  }
  if (plVar9 == plVar7 + lVar5 * 8) {
LAB_010fc5f0:
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
                goto LAB_010fc61c;
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
LAB_010fc61c:
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
        if (lVar14 == 0) goto LAB_010fc6e0;
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
          goto joined_r0x010fc7e8;
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
joined_r0x010fc7e8:
      if (!bVar13) {
        do {
          lVar5 = *plVar15;
          lVar14 = *(long *)(param_1 + 0x538);
          if (lVar5 != lVar8 || lVar14 != lVar10) {
            bVar13 = false;
            ClearExclusiveLocal();
            lVar8 = lVar5;
            lVar10 = lVar14;
            goto joined_r0x010fc7e8;
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
        goto joined_r0x010fc7e8;
      }
      nn::os::SignalLightEvent(pLVar6);
      local_a0 = param_1;
      lStack_98 = param_2;
      local_90 = param_3;
      FUN_00f338dc(&local_88,param_1);
      fVar2 = *(float *)(param_1 + 0x520);
      FUN_02a700ac(fVar2,local_88,&local_a0);
      *(float *)(param_1 + 0x520) = fVar2 + 0.01;
      if (local_78 != '\0') {
        *local_80 = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_80 + 1));
      }
      plVar15 = (long *)0x0;
      bVar13 = true;
      goto joined_r0x010fc898;
    }
LAB_010fc6e0:
    if (!bVar13) {
      *plVar7 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
    }
  }
  else {
    FUN_00ffb5e8(plVar9[4],param_3);
  }
  bVar13 = false;
joined_r0x010fc898:
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
    if (cVar3 == '\0') goto LAB_010fc7b4;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar5 = *plVar15;
      if (lVar5 != lVar8 || plVar15[1] != lVar10) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_010fc7a8;
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
LAB_010fc7a8:
    lVar8 = lVar5;
    lVar10 = plVar15[1];
  } while (!bVar4);
LAB_010fc7b4:
  pLVar6 = (LightEventType *)(plVar15 + 2);
LAB_010fc7b8:
  nn::os::SignalLightEvent(pLVar6);
  return;
}


