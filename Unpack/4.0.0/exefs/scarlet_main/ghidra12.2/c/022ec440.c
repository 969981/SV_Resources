/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022ec440; name: FUN_022ec440
 */


undefined4 FUN_022ec440(long param_1,long *param_2)

{
  long *plVar1;
  LightEventType *pLVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong local_d8;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined4 *local_b0 [12];
  undefined4 local_34;
  
  plVar1 = (long *)(param_1 + 0x300);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_022ec484;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x308));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x308));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_022ec484;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_022ec484:
  plVar9 = *(long **)(param_1 + 0x80);
  plVar7 = *(long **)(param_1 + 0x88);
  if (plVar9 != plVar7) {
    if (*plVar9 != *param_2) {
      do {
        plVar9 = plVar9 + 0xb;
        if (plVar7 == plVar9) {
          plVar9 = plVar7;
          goto LAB_022ec4bc;
        }
      } while (*plVar9 != *param_2);
    }
  }
LAB_022ec4bc:
  pLVar2 = (LightEventType *)(param_1 + 0x308);
  *(undefined8 *)(param_1 + 0x300) = 0;
  nn::os::SignalLightEvent(pLVar2);
  if (plVar7 == plVar9) {
    return 0;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_022ec4f0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_022ec4f0;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_022ec4f0:
  plVar1 = *(long **)(param_1 + 0x80);
  plVar9 = *(long **)(param_1 + 0x88);
  plVar7 = plVar1;
  if ((plVar1 != plVar9) && (*plVar1 != *param_2)) {
    do {
      plVar7 = plVar7 + 0xb;
      if (plVar9 == plVar7) {
        plVar7 = plVar9;
        goto LAB_022ec528;
      }
    } while (*plVar7 != *param_2);
  }
LAB_022ec528:
  if (plVar9 == plVar7) {
    uVar8 = 0;
  }
  else {
    uVar8 = (ulong)(uint)((int)((ulong)((long)plVar7 - (long)plVar1) >> 3) * -0x45d1745d) << 0x20;
  }
  *(undefined8 *)(param_1 + 0x300) = 0;
  nn::os::SignalLightEvent(pLVar2);
  local_d8 = uVar8 | plVar9 != plVar7;
  local_b0[0] = &local_34;
  local_34 = 0;
  local_d0 = &LAB_02e65a44;
  local_c8 = FUN_02e65a84;
  local_c0 = &LAB_02e65a88;
  puStack_b8 = &LAB_02e65a94;
  FUN_00c837c0(param_1,param_1 + 0x80,&local_d8,&local_d0);
  pcVar5 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    puStack_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar5)(local_b0);
  }
  return local_34;
}


