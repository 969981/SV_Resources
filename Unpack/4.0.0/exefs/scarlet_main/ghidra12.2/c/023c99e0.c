/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023c99e0; name: FUN_023c99e0
 */


void FUN_023c99e0(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,long param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  bool bVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long *local_c8;
  char local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *local_90;
  char local_88;
  long *local_80;
  char local_78;
  
  plVar7 = (long *)(param_2 + 0x530);
  local_78 = '\x01';
  local_80 = plVar7;
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar12 = *plVar7;
    lVar11 = *(long *)(param_2 + 0x538);
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar9) {
      *plVar7 = lVar12;
      *(long *)(param_2 + 0x538) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    while ((lVar12 != 0 && (lVar5 != lVar12))) {
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x540));
      do {
        lVar12 = *plVar7;
        lVar11 = *(long *)(param_2 + 0x538);
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar9) {
          *plVar7 = lVar12;
          *(long *)(param_2 + 0x538) = lVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    do {
      lVar2 = *plVar7;
      if (lVar2 != lVar12 || *(long *)(param_2 + 0x538) != lVar11) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto LAB_023c9a80;
      }
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar9) {
        *plVar7 = lVar12;
        *(long *)(param_2 + 0x534) = lVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar9 = true;
LAB_023c9a80:
    lVar12 = lVar2;
    lVar11 = *(long *)(param_2 + 0x538);
  } while (!bVar9);
  if (*(char *)(param_2 + 0x550) == '\0') {
    plVar7 = (long *)(param_2 + 0x60);
    lVar5 = nn::os::GetCurrentThread();
    while (*plVar7 == 0) {
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar9) {
        *plVar7 = lVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_023c9af8;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
    do {
      if (*plVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
          while (*plVar7 == 0) {
            cVar4 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar9) {
              *plVar7 = lVar5;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_023c9af8;
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
LAB_023c9af8:
    plVar7 = (long *)(param_2 + 0x290);
    local_88 = 1;
    local_90 = plVar7;
    lVar5 = nn::os::GetCurrentThread();
    do {
      lVar12 = *plVar7;
      lVar11 = *(long *)(param_2 + 0x298);
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar9) {
        *plVar7 = lVar12;
        *(long *)(param_2 + 0x298) = lVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      while ((lVar12 != 0 && (lVar5 != lVar12))) {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2a0));
        do {
          lVar12 = *plVar7;
          lVar11 = *(long *)(param_2 + 0x298);
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar9) {
            *plVar7 = lVar12;
            *(long *)(param_2 + 0x298) = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      do {
        lVar2 = *plVar7;
        if (lVar2 != lVar12 || *(long *)(param_2 + 0x298) != lVar11) {
          bVar9 = false;
          ClearExclusiveLocal();
          goto LAB_023c9b58;
        }
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar9) {
          *plVar7 = lVar12;
          *(long *)(param_2 + 0x294) = lVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar9 = true;
LAB_023c9b58:
      lVar12 = lVar2;
      lVar11 = *(long *)(param_2 + 0x298);
    } while (!bVar9);
    plVar7 = *(long **)(param_2 + 0x2b0);
    lVar5 = *(long *)(param_2 + 0x2e8);
    if ((lVar5 == 0) || (*plVar7 == param_5)) {
      plVar8 = plVar7;
LAB_023c9ba4:
      if (plVar8 == plVar7 + lVar5 * 4) goto LAB_023c9d08;
      uVar6 = FUN_023ca30c(param_1,*(undefined8 *)
                                    (*(long *)(param_2 + 0x348) + plVar8[3] * 0x130 + 0x120),param_6
                           ,param_7);
      FUN_023ca7f0(param_3,uVar6);
    }
    else {
      lVar12 = lVar5 * 0x20;
      plVar13 = plVar7;
      while (lVar12 = lVar12 + -0x20, lVar12 != 0) {
        plVar14 = plVar13 + 4;
        plVar8 = plVar13 + 4;
        plVar13 = plVar13 + 4;
        if (*plVar14 == param_5) goto LAB_023c9ba4;
      }
LAB_023c9d08:
      plVar7 = (long *)(param_2 + 0x948);
      lVar12 = *plVar7;
      lVar5 = nn::os::GetCurrentThread();
      if (lVar5 != lVar12) {
        lVar5 = nn::os::GetCurrentThread();
LAB_023c9d24:
        if (*plVar7 == 0) goto code_r0x023c9d2c;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x950));
        do {
          if (*plVar7 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x950));
              while (*plVar7 == 0) {
                cVar4 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar9) {
                  *plVar7 = lVar5;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_023c9d34;
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
LAB_023c9d34:
        bVar9 = false;
        goto LAB_023c9d38;
      }
      plVar7 = (long *)0x0;
      bVar9 = true;
LAB_023c9d38:
      plVar8 = *(long **)(param_2 + 0x960);
      lVar5 = *(long *)(param_2 + 0x998);
      if ((lVar5 == 0) || (*plVar8 == param_5)) {
        plVar13 = plVar8;
LAB_023c9d48:
        if (plVar13 == plVar8 + lVar5 * 2) goto LAB_023c9e74;
        *(undefined1 *)(plVar13 + 1) = 1;
      }
      else {
        lVar12 = lVar5 * 0x10;
        plVar14 = plVar8;
        while (lVar12 = lVar12 + -0x10, lVar12 != 0) {
          plVar13 = plVar14 + 2;
          plVar1 = plVar14 + 2;
          plVar14 = plVar13;
          if (*plVar1 == param_5) goto LAB_023c9d48;
        }
LAB_023c9e74:
        local_c8 = (long *)0x0;
        local_c0 = '\0';
        if (local_78 == '\0') {
          local_80 = (long *)0x0;
        }
        else {
          do {
            lVar5 = *local_80;
            lVar12 = local_80[1];
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(local_80,0x10);
            if (bVar10) {
              *local_80 = lVar5;
              local_80[1] = lVar12;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            lVar11 = *local_80;
            lVar2 = local_80[1];
            if (lVar11 != lVar5 || lVar2 != lVar12) {
              bVar10 = false;
              ClearExclusiveLocal();
              goto LAB_023c9ecc;
            }
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(local_80,0x10);
            if (bVar10) {
              *local_80 = lVar5;
              *(long *)((long)local_80 + 4) = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          bVar10 = true;
LAB_023c9ecc:
          if (!bVar10) {
            do {
              lVar5 = *local_80;
              lVar12 = local_80[1];
              if (lVar5 != lVar11 || lVar12 != lVar2) {
                bVar10 = false;
                ClearExclusiveLocal();
                goto joined_r0x023c9f94;
              }
              cVar4 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(local_80,0x10);
              if (bVar10) {
                *local_80 = lVar11;
                *(long *)((long)local_80 + 4) = lVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            bVar10 = true;
joined_r0x023c9f94:
            if (!bVar10) {
              do {
                lVar11 = *local_80;
                lVar2 = local_80[1];
                if (lVar11 != lVar5 || lVar2 != lVar12) {
                  bVar10 = false;
                  ClearExclusiveLocal();
                  lVar5 = lVar11;
                  lVar12 = lVar2;
                  goto joined_r0x023c9f94;
                }
                cVar4 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(local_80,0x10);
                if (bVar10) {
                  *local_80 = lVar5;
                  *(long *)((long)local_80 + 4) = lVar12 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              bVar10 = true;
              lVar5 = lVar11;
              lVar12 = lVar2;
              goto joined_r0x023c9f94;
            }
          }
          nn::os::SignalLightEvent((LightEventType *)(local_80 + 2));
          local_80 = local_c8;
          local_78 = local_c0;
        }
        local_c8 = (long *)0x0;
        local_c0 = 0;
        FUN_00f08b20(&local_c8);
        uVar6 = *param_3;
        uVar3 = param_3[1];
        local_f0 = 0;
        uStack_e8 = 0;
        FUN_00d334b4(&local_f0,param_6);
        local_e0 = *(undefined8 *)(param_6 + 0x10);
        *(undefined8 *)(param_6 + 0x10) = 0;
        uStack_d8 = 0;
        local_d0 = 0;
        FUN_00c96b7c(&uStack_d8,param_6 + 0x18);
        FUN_023ca4e4(param_1,param_2,uVar6,uVar3,param_4,param_5,&local_f0,param_7);
        FUN_023c90b4(&local_f0);
      }
      if (!bVar9) {
        *plVar7 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
      }
    }
    FUN_00f08b20(&local_90);
    *(undefined8 *)(param_2 + 0x60) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
    goto LAB_023c9c98;
  }
  local_90 = (long *)0x0;
  local_88 = '\0';
  if (local_78 == '\0') {
    local_80 = (long *)0x0;
  }
  else {
    do {
      lVar5 = *local_80;
      lVar12 = local_80[1];
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(local_80,0x10);
      if (bVar9) {
        *local_80 = lVar5;
        local_80[1] = lVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar11 = *local_80;
      lVar2 = local_80[1];
      if (lVar11 != lVar5 || lVar2 != lVar12) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto LAB_023c9c0c;
      }
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(local_80,0x10);
      if (bVar9) {
        *local_80 = lVar5;
        *(long *)((long)local_80 + 4) = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar9 = true;
LAB_023c9c0c:
    if (!bVar9) {
      do {
        lVar5 = *local_80;
        lVar12 = local_80[1];
        if (lVar5 != lVar11 || lVar12 != lVar2) {
          bVar9 = false;
          ClearExclusiveLocal();
          goto joined_r0x023c9e14;
        }
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(local_80,0x10);
        if (bVar9) {
          *local_80 = lVar11;
          *(long *)((long)local_80 + 4) = lVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar9 = true;
joined_r0x023c9e14:
      if (!bVar9) {
        do {
          lVar11 = *local_80;
          lVar2 = local_80[1];
          if (lVar11 != lVar5 || lVar2 != lVar12) {
            bVar9 = false;
            ClearExclusiveLocal();
            lVar5 = lVar11;
            lVar12 = lVar2;
            goto joined_r0x023c9e14;
          }
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(local_80,0x10);
          if (bVar9) {
            *local_80 = lVar5;
            *(long *)((long)local_80 + 4) = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar9 = true;
        lVar5 = lVar11;
        lVar12 = lVar2;
        goto joined_r0x023c9e14;
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
  FUN_023ca4e4(param_1,param_2,uVar6,uVar3,param_4,param_5,&local_b8,param_7);
  FUN_023c90b4(&local_b8);
LAB_023c9c98:
  FUN_00f08b20(&local_80);
  return;
code_r0x023c9d2c:
  cVar4 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar9) {
    *plVar7 = lVar5;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_023c9d34;
  goto LAB_023c9d24;
}


