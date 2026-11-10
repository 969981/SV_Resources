/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029ddde0; name: FUN_029ddde0
 */


void FUN_029ddde0(undefined4 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  long *plStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  
  plVar1 = (long *)(param_2 + 0x140);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_029dde28;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x148));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x148));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_029dde28;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_029dde28:
  local_f8 = *param_3;
  uStack_f0 = param_3[1];
  local_e8 = param_3[2];
  plVar1 = (long *)param_3[3];
  plStack_e0 = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  local_d0 = 0;
  local_c8 = (code *)0x0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d8 = param_1;
  FUN_029ddf1c(&local_d0,&local_f8);
  FUN_00d54858(param_2,param_4,&local_d0);
  pcVar4 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar4)(auStack_b0);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  *(undefined8 *)(param_2 + 0x140) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x148));
  return;
}


