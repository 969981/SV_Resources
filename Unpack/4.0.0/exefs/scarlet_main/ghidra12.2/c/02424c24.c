/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02424c24; name: FUN_02424c24
 */


void FUN_02424c24(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *local_90;
  char local_88;
  long *local_80;
  char local_78;
  
  plVar14 = (long *)(param_2 + 0x530);
  local_78 = '\x01';
  local_80 = plVar14;
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar13 = *plVar14;
    lVar9 = *(long *)(param_2 + 0x538);
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar7) {
      *plVar14 = lVar13;
      *(long *)(param_2 + 0x538) = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    while ((lVar13 != 0 && (lVar4 != lVar13))) {
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x540));
      do {
        lVar13 = *plVar14;
        lVar9 = *(long *)(param_2 + 0x538);
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar7) {
          *plVar14 = lVar13;
          *(long *)(param_2 + 0x538) = lVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    do {
      lVar2 = *plVar14;
      if (lVar2 != lVar13 || *(long *)(param_2 + 0x538) != lVar9) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_02424cc4;
      }
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *plVar14 = lVar13;
        *(long *)(param_2 + 0x534) = lVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar7 = true;
LAB_02424cc4:
    lVar13 = lVar2;
    lVar9 = *(long *)(param_2 + 0x538);
  } while (!bVar7);
  if (*(char *)(param_2 + 0x550) != '\0') {
    local_90 = (long *)0x0;
    local_88 = '\0';
    if (local_78 == '\0') {
      local_80 = (long *)0x0;
    }
    else {
      do {
        lVar4 = *local_80;
        lVar13 = local_80[1];
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_80,0x10);
        if (bVar7) {
          *local_80 = lVar4;
          local_80[1] = lVar13;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        lVar9 = *local_80;
        lVar2 = local_80[1];
        if (lVar9 != lVar4 || lVar2 != lVar13) {
          bVar7 = false;
          ClearExclusiveLocal();
          goto LAB_02424e98;
        }
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_80,0x10);
        if (bVar7) {
          *local_80 = lVar4;
          *(long *)((long)local_80 + 4) = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar7 = true;
LAB_02424e98:
      if (!bVar7) {
        do {
          lVar4 = *local_80;
          lVar13 = local_80[1];
          if (lVar4 != lVar9 || lVar13 != lVar2) {
            bVar7 = false;
            ClearExclusiveLocal();
            goto joined_r0x02425180;
          }
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(local_80,0x10);
          if (bVar7) {
            *local_80 = lVar9;
            *(long *)((long)local_80 + 4) = lVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar7 = true;
joined_r0x02425180:
        if (!bVar7) {
          do {
            lVar9 = *local_80;
            lVar2 = local_80[1];
            if (lVar9 != lVar4 || lVar2 != lVar13) {
              bVar7 = false;
              ClearExclusiveLocal();
              lVar4 = lVar9;
              lVar13 = lVar2;
              goto joined_r0x02425180;
            }
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(local_80,0x10);
            if (bVar7) {
              *local_80 = lVar4;
              *(long *)((long)local_80 + 4) = lVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          bVar7 = true;
          lVar4 = lVar9;
          lVar13 = lVar2;
          goto joined_r0x02425180;
        }
      }
      nn::os::SignalLightEvent((LightEventType *)(local_80 + 2));
      local_80 = local_90;
      local_78 = local_88;
    }
    local_90 = (long *)0x0;
    local_88 = 0;
    FUN_00f08b20(&local_90);
    FUN_02425274(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
LAB_02424ee4:
    FUN_00f08b20(&local_80);
    return;
  }
  plVar14 = (long *)(param_2 + 0x60);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar14 == 0) {
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar7) {
      *plVar14 = lVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_02424d3c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
  do {
    if (*plVar14 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar14 == 0) {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar7) {
            *plVar14 = lVar4;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02424d3c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar7) {
      *plVar14 = lVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02424d3c:
  plVar14 = (long *)(param_2 + 0x2f0);
  lVar13 = *plVar14;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar13) {
    lVar4 = nn::os::GetCurrentThread();
LAB_02424d58:
    if (*plVar14 == 0) goto code_r0x02424d60;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
    do {
      if (*plVar14 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar14 == 0) {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar7) {
              *plVar14 = lVar4;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_02424d68;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *plVar14 = lVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_02424d68:
    bVar7 = false;
    goto LAB_02424d6c;
  }
  plVar14 = (long *)0x0;
  bVar7 = true;
LAB_02424d6c:
  plVar6 = *(long **)(param_2 + 0x308);
  lVar4 = *(long *)(param_2 + 0x340);
  if ((lVar4 == 0) || (*plVar6 == param_5)) {
    plVar10 = plVar6;
LAB_02424dac:
    if (plVar10 == plVar6 + lVar4 * 8) goto LAB_02424e54;
    uVar5 = FUN_02425730(param_1,plVar10[4],param_6,param_7);
    plVar6 = (long *)(param_2 + 0x290);
    local_88 = 1;
    local_90 = plVar6;
    lVar4 = nn::os::GetCurrentThread();
    do {
      lVar13 = *plVar6;
      lVar9 = *(long *)(param_2 + 0x298);
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar8) {
        *plVar6 = lVar13;
        *(long *)(param_2 + 0x298) = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      while ((lVar13 != 0 && (lVar4 != lVar13))) {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2a0));
        do {
          lVar13 = *plVar6;
          lVar9 = *(long *)(param_2 + 0x298);
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar8) {
            *plVar6 = lVar13;
            *(long *)(param_2 + 0x298) = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      do {
        lVar2 = *plVar6;
        if (lVar2 != lVar13 || *(long *)(param_2 + 0x298) != lVar9) {
          bVar8 = false;
          ClearExclusiveLocal();
          goto LAB_02424e30;
        }
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar8) {
          *plVar6 = lVar13;
          *(long *)(param_2 + 0x294) = lVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar8 = true;
LAB_02424e30:
      lVar13 = lVar2;
      lVar9 = *(long *)(param_2 + 0x298);
    } while (!bVar8);
    FUN_02422770(param_3,uVar5);
    FUN_00f08b20(&local_90);
    goto LAB_024250f8;
  }
  lVar13 = lVar4 * 0x40;
  plVar11 = plVar6;
  while (lVar13 = lVar13 + -0x40, lVar13 != 0) {
    plVar12 = plVar11 + 8;
    plVar10 = plVar11 + 8;
    plVar11 = plVar11 + 8;
    if (*plVar12 == param_5) goto LAB_02424dac;
  }
LAB_02424e54:
  plVar6 = (long *)(param_2 + 0x730);
  lVar13 = *plVar6;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar13) {
    lVar4 = nn::os::GetCurrentThread();
LAB_02424e74:
    if (*plVar6 == 0) goto code_r0x02424e7c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x738));
    do {
      if (*plVar6 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x738));
          while (*plVar6 == 0) {
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar8) {
              *plVar6 = lVar4;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_02424fdc;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar8) {
        *plVar6 = lVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_02424fdc:
    bVar8 = false;
    goto LAB_02424fe0;
  }
  plVar6 = (long *)0x0;
  bVar8 = true;
LAB_02424fe0:
  plVar10 = *(long **)(param_2 + 0x748);
  lVar4 = *(long *)(param_2 + 0x780);
  if ((lVar4 == 0) || (*plVar10 == param_5)) {
    plVar11 = plVar10;
LAB_02425020:
    if (plVar11 != plVar10 + lVar4 * 2) {
      lVar4 = plVar11[1];
      if (!bVar8) {
        *plVar6 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
      }
      if (lVar4 == 0) goto LAB_024250f8;
      local_90 = (long *)0x0;
      local_88 = '\0';
      if (local_78 == '\0') {
        local_80 = (long *)0x0;
      }
      else {
        do {
          lVar4 = *local_80;
          lVar13 = local_80[1];
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(local_80,0x10);
          if (bVar8) {
            *local_80 = lVar4;
            local_80[1] = lVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          lVar9 = *local_80;
          lVar2 = local_80[1];
          if (lVar9 != lVar4 || lVar2 != lVar13) {
            bVar8 = false;
            ClearExclusiveLocal();
            goto LAB_024250ac;
          }
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(local_80,0x10);
          if (bVar8) {
            *local_80 = lVar4;
            *(long *)((long)local_80 + 4) = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar8 = true;
LAB_024250ac:
        if (!bVar8) {
          do {
            lVar4 = *local_80;
            lVar13 = local_80[1];
            if (lVar4 != lVar9 || lVar13 != lVar2) {
              bVar8 = false;
              ClearExclusiveLocal();
              goto joined_r0x02425214;
            }
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(local_80,0x10);
            if (bVar8) {
              *local_80 = lVar9;
              *(long *)((long)local_80 + 4) = lVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          bVar8 = true;
joined_r0x02425214:
          if (!bVar8) {
            do {
              lVar9 = *local_80;
              lVar2 = local_80[1];
              if (lVar9 != lVar4 || lVar2 != lVar13) {
                bVar8 = false;
                ClearExclusiveLocal();
                lVar4 = lVar9;
                lVar13 = lVar2;
                goto joined_r0x02425214;
              }
              cVar3 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(local_80,0x10);
              if (bVar8) {
                *local_80 = lVar4;
                *(long *)((long)local_80 + 4) = lVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            bVar8 = true;
            lVar4 = lVar9;
            lVar13 = lVar2;
            goto joined_r0x02425214;
          }
        }
        nn::os::SignalLightEvent((LightEventType *)(local_80 + 2));
        local_80 = local_90;
        local_78 = local_88;
      }
      local_90 = (long *)0x0;
      local_88 = 0;
      FUN_00f08b20(&local_90);
      FUN_02425274(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      goto LAB_024250f8;
    }
  }
  else {
    lVar13 = lVar4 * 0x10;
    plVar12 = plVar10;
    while (lVar13 = lVar13 + -0x10, lVar13 != 0) {
      plVar1 = plVar12 + 2;
      plVar11 = plVar12 + 2;
      plVar12 = plVar12 + 2;
      if (*plVar1 == param_5) goto LAB_02425020;
    }
  }
  if (!bVar8) {
    *plVar6 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
  }
LAB_024250f8:
  if (!bVar7) {
    *plVar14 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar14 + 1));
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  goto LAB_02424ee4;
code_r0x02424d60:
  cVar3 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar7) {
    *plVar14 = lVar4;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_02424d68;
  goto LAB_02424d58;
code_r0x02424e7c:
  cVar3 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar8) {
    *plVar6 = lVar4;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto code_r0x02424e84;
  goto LAB_02424e74;
code_r0x02424e84:
  bVar8 = false;
  goto LAB_02424fe0;
}


