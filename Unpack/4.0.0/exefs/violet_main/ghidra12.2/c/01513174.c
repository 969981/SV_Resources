/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01513174; name: FUN_01513174
 */


void FUN_01513174(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  code *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_80;
  
  plVar1 = (long *)(param_1 + 0x128);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_015131b0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x130));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x130));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_015131b0;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_015131b0:
  uVar2 = *param_2;
  uVar4 = param_2[1];
  uVar3 = param_2[2];
  plVar1 = (long *)param_2[3];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  local_b0 = (undefined1 *)0x0;
  puStack_a8 = (undefined1 *)0x0;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_a0 = param_1;
  uStack_98 = uVar2;
  local_90 = uVar4;
  uStack_88 = uVar3;
  local_80 = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  local_c0 = FUN_017801cc;
  local_b8 = FUN_02b2ced0;
  local_b0 = &LAB_02b2cfd8;
  puStack_a8 = &LAB_02b2d014;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  *(undefined1 *)(param_1 + 0x150) = 1;
  FUN_014540c0(param_1 + 0x158,&local_c0);
  pcVar7 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar7)(&local_a0);
  }
  *(undefined8 *)(param_1 + 0x128) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x130));
  return;
}


