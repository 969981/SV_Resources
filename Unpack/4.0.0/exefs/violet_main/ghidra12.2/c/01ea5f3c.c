/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea5f3c; name: FUN_01ea5f3c
 */


void FUN_01ea5f3c(long param_1,byte param_2,undefined8 param_3)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  byte *local_a0 [12];
  byte local_24 [4];
  
  local_24[0] = param_2 & 1;
  plVar10 = (long *)(param_1 + 0x158);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01ea5f80;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x160));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x160));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01ea5f80;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01ea5f80:
  local_a0[0] = local_24;
  local_c0 = &LAB_02e62dd8;
  local_b8 = FUN_02e62f44;
  local_b0 = &LAB_02e62f48;
  puStack_a8 = &LAB_02e62f54;
  FUN_00d54858(param_1,param_3,&local_c0);
  pcVar6 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar6)(local_a0);
  }
  if (local_24[0] != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x170) + 0x50);
    for (lVar7 = *(long *)(*(long *)(param_1 + 0x170) + 0x48); lVar7 != lVar2; lVar7 = lVar7 + 0x30)
    {
      lVar8 = *(long *)(lVar7 + 0x20);
      if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar8 + 0x1a);
        sVar9 = *(short *)(lVar8 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar9) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar9 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_01ea60a4;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01ea60a4:
            bVar5 = false;
          }
          if (bVar5) {
            if (*(long *)(lVar8 + 0x10) != 0) {
              plVar10 = (long *)(*(long *)(lVar8 + 0x10) + -8);
              (**(code **)(*plVar10 + 0x150))(plVar10);
              (**(code **)(*plVar10 + 0x18))(plVar10);
            }
            break;
          }
          sVar9 = sVar3;
        } while (sVar3 != 0);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x158) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x160));
  return;
}


