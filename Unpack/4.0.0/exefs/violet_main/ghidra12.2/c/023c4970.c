/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023c4970; name: FUN_023c4970
 */


void FUN_023c4970(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *local_90;
  char local_88;
  long *local_80;
  char local_78;
  long *local_70;
  char local_68;
  
  plVar6 = (long *)(param_2 + 0x530);
  local_68 = '\x01';
  local_70 = plVar6;
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar11 = *plVar6;
    lVar10 = *(long *)(param_2 + 0x538);
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar8) {
      *plVar6 = lVar11;
      *(long *)(param_2 + 0x538) = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    while ((lVar11 != 0 && (lVar4 != lVar11))) {
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x540));
      do {
        lVar11 = *plVar6;
        lVar10 = *(long *)(param_2 + 0x538);
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar8) {
          *plVar6 = lVar11;
          *(long *)(param_2 + 0x538) = lVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    do {
      lVar2 = *plVar6;
      if (lVar2 != lVar11 || *(long *)(param_2 + 0x538) != lVar10) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto LAB_023c4a10;
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar8) {
        *plVar6 = lVar11;
        *(long *)(param_2 + 0x534) = lVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar8 = true;
LAB_023c4a10:
    lVar11 = lVar2;
    lVar10 = *(long *)(param_2 + 0x538);
  } while (!bVar8);
  if (*(char *)(param_2 + 0x550) == '\0') {
    plVar6 = (long *)(param_2 + 0x60);
    lVar4 = nn::os::GetCurrentThread();
    while (*plVar6 == 0) {
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar8) {
        *plVar6 = lVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_023c4a88;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
    do {
      if (*plVar6 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
          while (*plVar6 == 0) {
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar8) {
              *plVar6 = lVar4;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_023c4a88;
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
LAB_023c4a88:
    plVar6 = (long *)(param_2 + 0x290);
    local_78 = 1;
    local_80 = plVar6;
    lVar4 = nn::os::GetCurrentThread();
    do {
      lVar11 = *plVar6;
      lVar10 = *(long *)(param_2 + 0x298);
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar8) {
        *plVar6 = lVar11;
        *(long *)(param_2 + 0x298) = lVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      while ((lVar11 != 0 && (lVar4 != lVar11))) {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2a0));
        do {
          lVar11 = *plVar6;
          lVar10 = *(long *)(param_2 + 0x298);
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar8) {
            *plVar6 = lVar11;
            *(long *)(param_2 + 0x298) = lVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      do {
        lVar2 = *plVar6;
        if (lVar2 != lVar11 || *(long *)(param_2 + 0x298) != lVar10) {
          bVar8 = false;
          ClearExclusiveLocal();
          goto LAB_023c4ae8;
        }
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar8) {
          *plVar6 = lVar11;
          *(long *)(param_2 + 0x294) = lVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar8 = true;
LAB_023c4ae8:
      lVar11 = lVar2;
      lVar10 = *(long *)(param_2 + 0x298);
    } while (!bVar8);
    plVar6 = *(long **)(param_2 + 0x2b0);
    lVar4 = *(long *)(param_2 + 0x2e8);
    if ((lVar4 == 0) || (*plVar6 == param_5)) {
      plVar7 = plVar6;
LAB_023c4b34:
      if (plVar7 == plVar6 + lVar4 * 4) goto LAB_023c4c58;
      uVar5 = FUN_023bca4c(param_1,*(undefined8 *)
                                    (*(long *)(param_2 + 0x348) + plVar7[3] * 0x130 + 0x120),param_6
                           ,param_7);
      FUN_023b9f80(param_3,uVar5);
    }
    else {
      lVar11 = lVar4 * 0x20;
      plVar12 = plVar6;
      while (lVar11 = lVar11 + -0x20, lVar11 != 0) {
        plVar13 = plVar12 + 4;
        plVar7 = plVar12 + 4;
        plVar12 = plVar12 + 4;
        if (*plVar13 == param_5) goto LAB_023c4b34;
      }
LAB_023c4c58:
      plVar6 = (long *)(param_2 + 0x948);
      lVar11 = *plVar6;
      lVar4 = nn::os::GetCurrentThread();
      if (lVar4 != lVar11) {
        lVar4 = nn::os::GetCurrentThread();
LAB_023c4c74:
        if (*plVar6 == 0) goto code_r0x023c4c7c;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x950));
        do {
          if (*plVar6 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x950));
              while (*plVar6 == 0) {
                cVar3 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar8) {
                  *plVar6 = lVar4;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') goto LAB_023c4c84;
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
LAB_023c4c84:
        bVar8 = false;
        goto LAB_023c4c88;
      }
      plVar6 = (long *)0x0;
      bVar8 = true;
LAB_023c4c88:
      plVar7 = *(long **)(param_2 + 0x960);
      lVar4 = *(long *)(param_2 + 0x998);
      if ((lVar4 == 0) || (*plVar7 == param_5)) {
        plVar12 = plVar7;
LAB_023c4c98:
        if (plVar12 == plVar7 + lVar4 * 2) goto LAB_023c4dc4;
        *(undefined1 *)(plVar12 + 1) = 1;
      }
      else {
        lVar11 = lVar4 * 0x10;
        plVar13 = plVar7;
        while (lVar11 = lVar11 + -0x10, lVar11 != 0) {
          plVar12 = plVar13 + 2;
          plVar1 = plVar13 + 2;
          plVar13 = plVar12;
          if (*plVar1 == param_5) goto LAB_023c4c98;
        }
LAB_023c4dc4:
        local_90 = (long *)0x0;
        local_88 = '\0';
        if (local_68 == '\0') {
          local_70 = (long *)0x0;
        }
        else {
          do {
            lVar4 = *local_70;
            lVar11 = local_70[1];
            cVar3 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(local_70,0x10);
            if (bVar9) {
              *local_70 = lVar4;
              local_70[1] = lVar11;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          do {
            lVar10 = *local_70;
            lVar2 = local_70[1];
            if (lVar10 != lVar4 || lVar2 != lVar11) {
              bVar9 = false;
              ClearExclusiveLocal();
              goto LAB_023c4e1c;
            }
            cVar3 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(local_70,0x10);
            if (bVar9) {
              *local_70 = lVar4;
              *(long *)((long)local_70 + 4) = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          bVar9 = true;
LAB_023c4e1c:
          if (!bVar9) {
            do {
              lVar4 = *local_70;
              lVar11 = local_70[1];
              if (lVar4 != lVar10 || lVar11 != lVar2) {
                bVar9 = false;
                ClearExclusiveLocal();
                goto joined_r0x023c4ea4;
              }
              cVar3 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(local_70,0x10);
              if (bVar9) {
                *local_70 = lVar10;
                *(long *)((long)local_70 + 4) = lVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            bVar9 = true;
joined_r0x023c4ea4:
            if (!bVar9) {
              do {
                lVar10 = *local_70;
                lVar2 = local_70[1];
                if (lVar10 != lVar4 || lVar2 != lVar11) {
                  bVar9 = false;
                  ClearExclusiveLocal();
                  lVar4 = lVar10;
                  lVar11 = lVar2;
                  goto joined_r0x023c4ea4;
                }
                cVar3 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(local_70,0x10);
                if (bVar9) {
                  *local_70 = lVar4;
                  *(long *)((long)local_70 + 4) = lVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              bVar9 = true;
              lVar4 = lVar10;
              lVar11 = lVar2;
              goto joined_r0x023c4ea4;
            }
          }
          nn::os::SignalLightEvent((LightEventType *)(local_70 + 2));
          local_70 = local_90;
          local_68 = local_88;
        }
        local_90 = (long *)0x0;
        local_88 = 0;
        FUN_00f08b20(&local_90);
        FUN_023c4f10(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      }
      if (!bVar8) {
        *plVar6 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
      }
    }
    FUN_00f08b20(&local_80);
    *(undefined8 *)(param_2 + 0x60) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
    goto LAB_023c4be8;
  }
  local_80 = (long *)0x0;
  local_78 = '\0';
  if (local_68 == '\0') {
    local_70 = (long *)0x0;
  }
  else {
    do {
      lVar4 = *local_70;
      lVar11 = local_70[1];
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(local_70,0x10);
      if (bVar8) {
        *local_70 = lVar4;
        local_70[1] = lVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar10 = *local_70;
      lVar2 = local_70[1];
      if (lVar10 != lVar4 || lVar2 != lVar11) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto LAB_023c4b9c;
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(local_70,0x10);
      if (bVar8) {
        *local_70 = lVar4;
        *(long *)((long)local_70 + 4) = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar8 = true;
LAB_023c4b9c:
    if (!bVar8) {
      do {
        lVar4 = *local_70;
        lVar11 = local_70[1];
        if (lVar4 != lVar10 || lVar11 != lVar2) {
          bVar8 = false;
          ClearExclusiveLocal();
          goto joined_r0x023c4d64;
        }
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(local_70,0x10);
        if (bVar8) {
          *local_70 = lVar10;
          *(long *)((long)local_70 + 4) = lVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar8 = true;
joined_r0x023c4d64:
      if (!bVar8) {
        do {
          lVar10 = *local_70;
          lVar2 = local_70[1];
          if (lVar10 != lVar4 || lVar2 != lVar11) {
            bVar8 = false;
            ClearExclusiveLocal();
            lVar4 = lVar10;
            lVar11 = lVar2;
            goto joined_r0x023c4d64;
          }
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(local_70,0x10);
          if (bVar8) {
            *local_70 = lVar4;
            *(long *)((long)local_70 + 4) = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar8 = true;
        lVar4 = lVar10;
        lVar11 = lVar2;
        goto joined_r0x023c4d64;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(local_70 + 2));
    local_70 = local_80;
    local_68 = local_78;
  }
  local_80 = (long *)0x0;
  local_78 = 0;
  FUN_00f08b20(&local_80);
  FUN_023c4f10(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
LAB_023c4be8:
  FUN_00f08b20(&local_70);
  return;
code_r0x023c4c7c:
  cVar3 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar8) {
    *plVar6 = lVar4;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_023c4c84;
  goto LAB_023c4c74;
}


