/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022ec9b8; name: FUN_022ec9b8
 */


undefined8 FUN_022ec9b8(undefined4 param_1,undefined4 *param_2,long *param_3)

{
  LightEventType *pLVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong local_e8;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined4 *local_c0;
  undefined4 *puStack_b8;
  ulong *local_b0;
  undefined4 local_54;
  
  plVar2 = (long *)(param_2 + 0xc0);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_022eca04;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xc2));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xc2));
        while (*plVar2 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_022eca04;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_022eca04:
  plVar9 = *(long **)(param_2 + 0x2e);
  plVar7 = *(long **)(param_2 + 0x30);
  if (plVar9 != plVar7) {
    if (*plVar9 != *param_3) {
      do {
        plVar9 = plVar9 + 0xb;
        if (plVar7 == plVar9) {
          plVar9 = plVar7;
          goto LAB_022eca3c;
        }
      } while (*plVar9 != *param_3);
    }
  }
LAB_022eca3c:
  pLVar1 = (LightEventType *)(param_2 + 0xc2);
  *(undefined8 *)(param_2 + 0xc0) = 0;
  nn::os::SignalLightEvent(pLVar1);
  if (plVar7 == plVar9) {
    return 0;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_022eca70;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar1);
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar1);
        while (*plVar2 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_022eca70;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_022eca70:
  plVar2 = *(long **)(param_2 + 0x2e);
  plVar9 = *(long **)(param_2 + 0x30);
  plVar7 = plVar2;
  if ((plVar2 != plVar9) && (*plVar2 != *param_3)) {
    do {
      plVar7 = plVar7 + 0xb;
      if (plVar9 == plVar7) {
        plVar7 = plVar9;
        goto LAB_022ecaa8;
      }
    } while (*plVar7 != *param_3);
  }
LAB_022ecaa8:
  if (plVar9 == plVar7) {
    uVar8 = 0;
  }
  else {
    uVar8 = (ulong)(uint)((int)((ulong)((long)plVar7 - (long)plVar2) >> 3) * -0x45d1745d) << 0x20;
  }
  *(undefined8 *)(param_2 + 0xc0) = 0;
  nn::os::SignalLightEvent(pLVar1);
  local_e8 = uVar8 | plVar9 != plVar7;
  local_54 = param_1;
  if (*(long *)(param_2 + 0x88) == 0) {
    local_c0 = &local_54;
    local_e0 = &LAB_02e65838;
    local_d8 = FUN_02e65878;
    local_d0 = &LAB_02e6587c;
    puStack_c8 = &LAB_02e65888;
    FUN_00c837c0(param_2,param_2 + 0x2e,&local_e8,&local_e0);
    pcVar5 = local_d8;
  }
  else {
    puStack_b8 = &local_54;
    local_b0 = &local_e8;
    local_e0 = &LAB_029e9340;
    local_d8 = FUN_02e6580c;
    local_d0 = &LAB_02e65810;
    puStack_c8 = &LAB_02e65824;
    local_c0 = param_2;
    FUN_00c837c0(param_2,param_2 + 0x2e,&local_e8,&local_e0);
    pcVar5 = local_d8;
  }
  if (pcVar5 != (code *)0x0) {
    puStack_c8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar5)(&local_c0);
  }
  return 1;
}


