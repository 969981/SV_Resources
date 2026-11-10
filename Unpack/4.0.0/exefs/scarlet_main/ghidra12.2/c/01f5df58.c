/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f5df58; name: FUN_01f5df58
 */


void FUN_01f5df58(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  bool bVar7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined1 local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *plStack_58;
  
  plVar1 = (long *)(param_2 + 0x40);
  lVar6 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar6) {
    bVar7 = true;
LAB_01f5dfb4:
    local_70 = *param_3;
    uStack_68 = param_3[1];
    local_60 = param_3[2];
    plVar1 = (long *)param_3[3];
    plStack_58 = plVar1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
    local_a8 = *param_4;
    uStack_a0 = param_4[1];
    local_98 = param_4[2];
    plVar2 = (long *)param_4[3];
    plStack_90 = plVar2;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    local_88 = param_4[4];
    local_80 = *(undefined1 *)(param_4 + 5);
    plVar5 = (long *)param_4[6];
    local_78 = plVar5;
    if (plVar5 == (long *)0x0) {
      FUN_028e6340(param_1,param_2,&local_70,&local_a8);
    }
    else {
      (**(code **)(*plVar5 + 0x18))(plVar5);
      FUN_028e6340(param_1,param_2,&local_70,&local_a8);
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2);
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    if (bVar7) {
      return;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x48));
    return;
  }
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01f5dfb0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x48));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x48));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar4;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01f5dfb0;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01f5dfb0:
  bVar7 = false;
  goto LAB_01f5dfb4;
}


