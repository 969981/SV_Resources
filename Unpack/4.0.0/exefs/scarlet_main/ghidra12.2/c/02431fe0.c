/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02431fe0; name: FUN_02431fe0
 */


void FUN_02431fe0(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,long param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  bool bVar8;
  bool bVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *local_90;
  char local_88;
  long *local_80;
  char local_78;
  
  plVar15 = (long *)(param_2 + 0x530);
  local_78 = '\x01';
  local_80 = plVar15;
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar14 = *plVar15;
    lVar10 = *(long *)(param_2 + 0x538);
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar8) {
      *plVar15 = lVar14;
      *(long *)(param_2 + 0x538) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    while ((lVar14 != 0 && (lVar5 != lVar14))) {
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x540));
      do {
        lVar14 = *plVar15;
        lVar10 = *(long *)(param_2 + 0x538);
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar8) {
          *plVar15 = lVar14;
          *(long *)(param_2 + 0x538) = lVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    do {
      lVar2 = *plVar15;
      if (lVar2 != lVar14 || *(long *)(param_2 + 0x538) != lVar10) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto LAB_02432080;
      }
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar8) {
        *plVar15 = lVar14;
        *(long *)(param_2 + 0x534) = lVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar8 = true;
LAB_02432080:
    lVar14 = lVar2;
    lVar10 = *(long *)(param_2 + 0x538);
  } while (!bVar8);
  if (*(char *)(param_2 + 0x550) != '\0') {
    local_90 = (long *)0x0;
    local_88 = '\0';
    if (local_78 == '\0') {
      local_80 = (long *)0x0;
    }
    else {
      do {
        lVar5 = *local_80;
        lVar14 = local_80[1];
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(local_80,0x10);
        if (bVar8) {
          *local_80 = lVar5;
          local_80[1] = lVar14;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        lVar10 = *local_80;
        lVar2 = local_80[1];
        if (lVar10 != lVar5 || lVar2 != lVar14) {
          bVar8 = false;
          ClearExclusiveLocal();
          goto LAB_02432254;
        }
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(local_80,0x10);
        if (bVar8) {
          *local_80 = lVar5;
          *(long *)((long)local_80 + 4) = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar8 = true;
LAB_02432254:
      if (!bVar8) {
        do {
          lVar5 = *local_80;
          lVar14 = local_80[1];
          if (lVar5 != lVar10 || lVar14 != lVar2) {
            bVar8 = false;
            ClearExclusiveLocal();
            goto joined_r0x024325d4;
          }
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(local_80,0x10);
          if (bVar8) {
            *local_80 = lVar10;
            *(long *)((long)local_80 + 4) = lVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar8 = true;
joined_r0x024325d4:
        if (!bVar8) {
          do {
            lVar10 = *local_80;
            lVar2 = local_80[1];
            if (lVar10 != lVar5 || lVar2 != lVar14) {
              bVar8 = false;
              ClearExclusiveLocal();
              lVar5 = lVar10;
              lVar14 = lVar2;
              goto joined_r0x024325d4;
            }
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(local_80,0x10);
            if (bVar8) {
              *local_80 = lVar5;
              *(long *)((long)local_80 + 4) = lVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          bVar8 = true;
          lVar5 = lVar10;
          lVar14 = lVar2;
          goto joined_r0x024325d4;
        }
      }
      nn::os::SignalLightEvent((LightEventType *)(local_80 + 2));
      local_80 = local_90;
      local_78 = local_88;
    }
    local_90 = (long *)0x0;
    local_88 = 0;
    FUN_00f08b20(&local_90);
    uVar6 = *param_3;
    uVar3 = param_3[1];
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_00d334b4(&local_b8,param_6);
    local_a8 = *(undefined8 *)(param_6 + 0x10);
    *(undefined8 *)(param_6 + 0x10) = 0;
    uStack_a0 = 0;
    local_98 = 0;
    FUN_00c96b7c(&uStack_a0,param_6 + 0x18);
    FUN_02432ce4(param_1,param_2,uVar6,uVar3,param_4,param_5,&local_b8,param_7);
    FUN_02431d98(&local_b8);
LAB_024322e0:
    FUN_00f08b20(&local_80);
    return;
  }
  plVar15 = (long *)(param_2 + 0x60);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar15 == 0) {
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar8) {
      *plVar15 = lVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_024320f8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
  do {
    if (*plVar15 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar15 == 0) {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar8) {
            *plVar15 = lVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_024320f8;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar8) {
      *plVar15 = lVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_024320f8:
  plVar15 = (long *)(param_2 + 0x2f0);
  lVar14 = *plVar15;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 != lVar14) {
    lVar5 = nn::os::GetCurrentThread();
LAB_02432114:
    if (*plVar15 == 0) goto code_r0x0243211c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
    do {
      if (*plVar15 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar15 == 0) {
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar8) {
              *plVar15 = lVar5;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_02432124;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar8) {
        *plVar15 = lVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_02432124:
    bVar8 = false;
    goto LAB_02432128;
  }
  plVar15 = (long *)0x0;
  bVar8 = true;
LAB_02432128:
  plVar7 = *(long **)(param_2 + 0x308);
  lVar5 = *(long *)(param_2 + 0x340);
  if ((lVar5 == 0) || (*plVar7 == param_5)) {
    plVar11 = plVar7;
LAB_02432168:
    if (plVar11 == plVar7 + lVar5 * 8) goto LAB_02432210;
    uVar6 = FUN_02432ff0(param_1,plVar11[4],param_6,param_7);
    plVar7 = (long *)(param_2 + 0x290);
    local_88 = 1;
    local_90 = plVar7;
    lVar5 = nn::os::GetCurrentThread();
    do {
      lVar14 = *plVar7;
      lVar10 = *(long *)(param_2 + 0x298);
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar9) {
        *plVar7 = lVar14;
        *(long *)(param_2 + 0x298) = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      while ((lVar14 != 0 && (lVar5 != lVar14))) {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2a0));
        do {
          lVar14 = *plVar7;
          lVar10 = *(long *)(param_2 + 0x298);
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar9) {
            *plVar7 = lVar14;
            *(long *)(param_2 + 0x298) = lVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      do {
        lVar2 = *plVar7;
        if (lVar2 != lVar14 || *(long *)(param_2 + 0x298) != lVar10) {
          bVar9 = false;
          ClearExclusiveLocal();
          goto LAB_024321ec;
        }
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar9) {
          *plVar7 = lVar14;
          *(long *)(param_2 + 0x294) = lVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar9 = true;
LAB_024321ec:
      lVar14 = lVar2;
      lVar10 = *(long *)(param_2 + 0x298);
    } while (!bVar9);
    FUN_024330f4(param_3,uVar6);
    FUN_00f08b20(&local_90);
    goto LAB_0243254c;
  }
  lVar14 = lVar5 * 0x40;
  plVar12 = plVar7;
  while (lVar14 = lVar14 + -0x40, lVar14 != 0) {
    plVar13 = plVar12 + 8;
    plVar11 = plVar12 + 8;
    plVar12 = plVar12 + 8;
    if (*plVar13 == param_5) goto LAB_02432168;
  }
LAB_02432210:
  plVar7 = (long *)(param_2 + 0x730);
  lVar14 = *plVar7;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 != lVar14) {
    lVar5 = nn::os::GetCurrentThread();
LAB_02432230:
    if (*plVar7 == 0) goto code_r0x02432238;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x738));
    do {
      if (*plVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x738));
          while (*plVar7 == 0) {
            cVar4 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar9) {
              *plVar7 = lVar5;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_024323e0;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar9) {
        *plVar7 = lVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_024323e0:
    bVar9 = false;
    goto LAB_024323ec;
  }
  plVar7 = (long *)0x0;
  bVar9 = true;
LAB_024323ec:
  plVar11 = *(long **)(param_2 + 0x748);
  lVar5 = *(long *)(param_2 + 0x780);
  if ((lVar5 == 0) || (*plVar11 == param_5)) {
    plVar12 = plVar11;
LAB_0243242c:
    if (plVar12 != plVar11 + lVar5 * 2) {
      lVar5 = plVar12[1];
      if (!bVar9) {
        *plVar7 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
      }
      if (lVar5 == 0) goto LAB_0243254c;
      local_90 = (long *)0x0;
      local_88 = '\0';
      if (local_78 == '\0') {
        local_80 = (long *)0x0;
      }
      else {
        do {
          lVar5 = *local_80;
          lVar14 = local_80[1];
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(local_80,0x10);
          if (bVar9) {
            *local_80 = lVar5;
            local_80[1] = lVar14;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          lVar10 = *local_80;
          lVar2 = local_80[1];
          if (lVar10 != lVar5 || lVar2 != lVar14) {
            bVar9 = false;
            ClearExclusiveLocal();
            goto LAB_024324b4;
          }
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(local_80,0x10);
          if (bVar9) {
            *local_80 = lVar5;
            *(long *)((long)local_80 + 4) = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar9 = true;
LAB_024324b4:
        if (!bVar9) {
          do {
            lVar5 = *local_80;
            lVar14 = local_80[1];
            if (lVar5 != lVar10 || lVar14 != lVar2) {
              bVar9 = false;
              ClearExclusiveLocal();
              goto joined_r0x02432668;
            }
            cVar4 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(local_80,0x10);
            if (bVar9) {
              *local_80 = lVar10;
              *(long *)((long)local_80 + 4) = lVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          bVar9 = true;
joined_r0x02432668:
          if (!bVar9) {
            do {
              lVar10 = *local_80;
              lVar2 = local_80[1];
              if (lVar10 != lVar5 || lVar2 != lVar14) {
                bVar9 = false;
                ClearExclusiveLocal();
                lVar5 = lVar10;
                lVar14 = lVar2;
                goto joined_r0x02432668;
              }
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(local_80,0x10);
              if (bVar9) {
                *local_80 = lVar5;
                *(long *)((long)local_80 + 4) = lVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            bVar9 = true;
            lVar5 = lVar10;
            lVar14 = lVar2;
            goto joined_r0x02432668;
          }
        }
        nn::os::SignalLightEvent((LightEventType *)(local_80 + 2));
        local_80 = local_90;
        local_78 = local_88;
      }
      local_90 = (long *)0x0;
      local_88 = 0;
      FUN_00f08b20(&local_90);
      uVar6 = *param_3;
      uVar3 = param_3[1];
      local_e0 = 0;
      uStack_d8 = 0;
      FUN_00d334b4(&local_e0,param_6);
      local_d0 = *(undefined8 *)(param_6 + 0x10);
      *(undefined8 *)(param_6 + 0x10) = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      FUN_00c96b7c(&uStack_c8,param_6 + 0x18);
      FUN_02432ce4(param_1,param_2,uVar6,uVar3,param_4,param_5,&local_e0,param_7);
      FUN_02431d98(&local_e0);
      goto LAB_0243254c;
    }
  }
  else {
    lVar14 = lVar5 * 0x10;
    plVar13 = plVar11;
    while (lVar14 = lVar14 + -0x10, lVar14 != 0) {
      plVar1 = plVar13 + 2;
      plVar12 = plVar13 + 2;
      plVar13 = plVar13 + 2;
      if (*plVar1 == param_5) goto LAB_0243242c;
    }
  }
  if (!bVar9) {
    *plVar7 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
  }
LAB_0243254c:
  if (!bVar8) {
    *plVar15 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  goto LAB_024322e0;
code_r0x0243211c:
  cVar4 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar8) {
    *plVar15 = lVar5;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_02432124;
  goto LAB_02432114;
code_r0x02432238:
  cVar4 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar9) {
    *plVar7 = lVar5;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto code_r0x02432240;
  goto LAB_02432230;
code_r0x02432240:
  bVar9 = false;
  goto LAB_024323ec;
}


