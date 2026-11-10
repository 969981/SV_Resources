/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022ed20c; name: FUN_022ed20c
 */


undefined8 FUN_022ed20c(byte *param_1,long *param_2,byte param_3)

{
  byte *pbVar1;
  LightEventType *pLVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong local_e8;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  byte *local_c0;
  byte *pbStack_b8;
  ulong *local_b0;
  byte local_54 [4];
  
  pbVar1 = param_1 + 0x300;
  uVar7 = nn::os::GetCurrentThread();
  while (*(long *)pbVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *(undefined8 *)pbVar1 = uVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_022ed254;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x308));
  do {
    if (*(long *)pbVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x308));
        while (*(long *)pbVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar5) {
            *(undefined8 *)pbVar1 = uVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_022ed254;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *(undefined8 *)pbVar1 = uVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_022ed254:
  plVar10 = *(long **)(param_1 + 0xf0);
  plVar3 = *(long **)(param_1 + 0xf8);
  if (plVar10 != plVar3) {
    if (*plVar10 != *param_2) {
      do {
        plVar10 = plVar10 + 0xb;
        if (plVar3 == plVar10) {
          plVar10 = plVar3;
          goto LAB_022ed28c;
        }
      } while (*plVar10 != *param_2);
    }
  }
LAB_022ed28c:
  pLVar2 = (LightEventType *)(param_1 + 0x308);
  param_1[0x300] = 0;
  param_1[0x301] = 0;
  param_1[0x302] = 0;
  param_1[0x303] = 0;
  param_1[0x304] = 0;
  param_1[0x305] = 0;
  param_1[0x306] = 0;
  param_1[0x307] = 0;
  nn::os::SignalLightEvent(pLVar2);
  if (plVar3 == plVar10) {
    return 0;
  }
  uVar7 = nn::os::GetCurrentThread();
  while (*(long *)pbVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *(undefined8 *)pbVar1 = uVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_022ed2c0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*(long *)pbVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*(long *)pbVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar5) {
            *(undefined8 *)pbVar1 = uVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_022ed2c0;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *(undefined8 *)pbVar1 = uVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_022ed2c0:
  plVar10 = *(long **)(param_1 + 0xf0);
  plVar3 = *(long **)(param_1 + 0xf8);
  plVar8 = plVar10;
  if ((plVar10 != plVar3) && (*plVar10 != *param_2)) {
    do {
      plVar8 = plVar8 + 0xb;
      if (plVar3 == plVar8) {
        plVar8 = plVar3;
        goto LAB_022ed2f8;
      }
    } while (*plVar8 != *param_2);
  }
LAB_022ed2f8:
  if (plVar3 == plVar8) {
    uVar9 = 0;
  }
  else {
    uVar9 = (ulong)(uint)((int)((ulong)((long)plVar8 - (long)plVar10) >> 3) * -0x45d1745d) << 0x20;
  }
  param_1[0x300] = 0;
  param_1[0x301] = 0;
  param_1[0x302] = 0;
  param_1[0x303] = 0;
  param_1[0x304] = 0;
  param_1[0x305] = 0;
  param_1[0x306] = 0;
  param_1[0x307] = 0;
  nn::os::SignalLightEvent(pLVar2);
  local_e8 = uVar9 | plVar3 != plVar8;
  local_54[0] = param_3 & 1;
  if (*(long *)(param_1 + 0x288) == 0) {
    local_c0 = local_54;
    local_e0 = &LAB_02e658c0;
    local_d8 = FUN_02e65908;
    local_d0 = &LAB_02e6590c;
    puStack_c8 = &LAB_02e65918;
    FUN_00c837c0(param_1,param_1 + 0xf0,&local_e8,&local_e0);
    pcVar6 = local_d8;
  }
  else {
    pbStack_b8 = local_54;
    local_b0 = &local_e8;
    local_e0 = &LAB_029e9640;
    local_d8 = FUN_02e65894;
    local_d0 = &LAB_02e65898;
    puStack_c8 = &LAB_02e658ac;
    local_c0 = param_1;
    FUN_00c837c0(param_1,param_1 + 0xf0,&local_e8,&local_e0);
    pcVar6 = local_d8;
  }
  if (pcVar6 != (code *)0x0) {
    puStack_c8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar6)(&local_c0);
  }
  return 1;
}


