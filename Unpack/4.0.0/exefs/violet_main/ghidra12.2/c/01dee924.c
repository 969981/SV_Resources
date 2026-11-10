/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dee924; name: FUN_01dee924
 */


void FUN_01dee924(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  LightEventType *pLVar7;
  bool bVar8;
  long lVar9;
  long local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  char *pcStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char local_68 [8];
  long *local_60;
  undefined1 local_54 [4];
  
  local_54[0] = 0;
  local_68[0] = '\0';
  plVar1 = (long *)(param_2 + 0x120);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar6 = *plVar1;
    lVar9 = *(long *)(param_2 + 0x128);
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(long *)(param_2 + 0x128) = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pLVar7 = (LightEventType *)(param_2 + 0x130);
LAB_01dee978:
  while ((plVar4 = local_60, lVar6 != 0 && (lVar5 != lVar6))) {
    nn::os::WaitLightEvent(pLVar7);
    do {
      lVar6 = *plVar1;
      lVar9 = *(long *)(param_2 + 0x128);
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar6;
        *(long *)(param_2 + 0x128) = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar6 || *(long *)(param_2 + 0x128) != lVar9) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_01dee9a8;
    }
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(long *)(param_2 + 0x124) = lVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar8 = true;
LAB_01dee9a8:
  if (!bVar8) {
    lVar6 = lVar2;
    lVar9 = *(long *)(param_2 + 0x128);
    goto LAB_01dee978;
  }
  if (*(long *)(param_2 + 0x118) == 0) {
    *param_1 = 0;
    if (local_68[0] != '\0') {
      local_60 = (long *)0x0;
      *(long **)(param_1 + 8) = plVar4;
      *param_1 = 1;
    }
    do {
      lVar5 = *plVar1;
      lVar6 = *(long *)(param_2 + 0x128);
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar5;
        *(long *)(param_2 + 0x128) = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar9 = *plVar1;
      lVar2 = *(long *)(param_2 + 0x128);
      if (lVar9 != lVar5 || lVar2 != lVar6) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x01deec20;
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar5;
        *(long *)(param_2 + 0x124) = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar8 = true;
joined_r0x01deec20:
    if (!bVar8) {
      do {
        lVar5 = *plVar1;
        lVar6 = *(long *)(param_2 + 0x128);
        if (lVar5 != lVar9 || lVar6 != lVar2) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar9 = lVar5;
          lVar2 = lVar6;
          goto joined_r0x01deec20;
        }
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar9;
          *(long *)(param_2 + 0x124) = lVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar8 = true;
      lVar9 = lVar5;
      lVar2 = lVar6;
      goto joined_r0x01deec20;
    }
  }
  else {
    do {
      lVar5 = *plVar1;
      lVar6 = *(long *)(param_2 + 0x128);
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar5;
        *(long *)(param_2 + 0x128) = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar9 = *plVar1;
      lVar2 = *(long *)(param_2 + 0x128);
      if (lVar9 != lVar5 || lVar2 != lVar6) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x01deea0c;
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar5;
        *(long *)(param_2 + 0x124) = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar8 = true;
joined_r0x01deea0c:
    if (!bVar8) {
      do {
        lVar5 = *plVar1;
        lVar6 = *(long *)(param_2 + 0x128);
        if (lVar5 != lVar9 || lVar6 != lVar2) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar9 = lVar5;
          lVar2 = lVar6;
          goto joined_r0x01deea0c;
        }
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar9;
          *(long *)(param_2 + 0x124) = lVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar8 = true;
      lVar9 = lVar5;
      lVar2 = lVar6;
      goto joined_r0x01deea0c;
    }
    nn::os::SignalLightEvent(pLVar7);
    plVar1 = (long *)(param_2 + 0x80);
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar5;
        *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_2 + 0x88);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = nn::os::GetCurrentThread();
    if (lVar6 == lVar5) {
      bVar8 = true;
    }
    else {
      lVar5 = nn::os::GetCurrentThread();
      do {
        lVar6 = *plVar1;
        lVar9 = *(long *)(param_2 + 0x88);
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar6;
          *(long *)(param_2 + 0x88) = lVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        while ((lVar6 != 0 && (lVar5 != lVar6))) {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x90));
          do {
            lVar6 = *plVar1;
            lVar9 = *(long *)(param_2 + 0x88);
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *plVar1 = lVar6;
              *(long *)(param_2 + 0x88) = lVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        do {
          lVar2 = *plVar1;
          if (lVar2 != lVar6 || *(long *)(param_2 + 0x88) != lVar9) {
            bVar8 = false;
            ClearExclusiveLocal();
            goto LAB_01deeac0;
          }
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar6;
            *(long *)(param_2 + 0x84) = lVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar8 = true;
LAB_01deeac0:
        lVar6 = lVar2;
        lVar9 = *(long *)(param_2 + 0x88);
      } while (!bVar8);
      bVar8 = false;
    }
    local_88 = local_54;
    pcStack_80 = local_68;
    local_98 = param_2;
    uStack_90 = param_3;
    local_78 = param_4;
    uStack_70 = param_5;
    FUN_01deecbc(*(undefined8 *)(param_2 + 0x100),&local_98);
    plVar4 = local_60;
    *param_1 = 0;
    if (local_68[0] != '\0') {
      local_60 = (long *)0x0;
      *(long **)(param_1 + 8) = plVar4;
      *param_1 = 1;
    }
    if (bVar8) goto LAB_01deeba0;
    do {
      lVar5 = *plVar1;
      lVar6 = *(long *)(param_2 + 0x88);
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar5;
        *(long *)(param_2 + 0x88) = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar9 = *plVar1;
      lVar2 = *(long *)(param_2 + 0x88);
      if (lVar9 != lVar5 || lVar2 != lVar6) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x01deeb58;
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar5;
        *(long *)(param_2 + 0x84) = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar8 = true;
joined_r0x01deeb58:
    if (!bVar8) {
      do {
        lVar5 = *plVar1;
        lVar6 = *(long *)(param_2 + 0x88);
        if (lVar5 != lVar9 || lVar6 != lVar2) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar9 = lVar5;
          lVar2 = lVar6;
          goto joined_r0x01deeb58;
        }
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar9;
          *(long *)(param_2 + 0x84) = lVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar8 = true;
      lVar9 = lVar5;
      lVar2 = lVar6;
      goto joined_r0x01deeb58;
    }
    pLVar7 = (LightEventType *)(param_2 + 0x90);
  }
  nn::os::SignalLightEvent(pLVar7);
LAB_01deeba0:
  if ((local_68[0] != '\0') && (local_60 != (long *)0x0)) {
    (**(code **)(*local_60 + 0x20))();
  }
  return;
}


