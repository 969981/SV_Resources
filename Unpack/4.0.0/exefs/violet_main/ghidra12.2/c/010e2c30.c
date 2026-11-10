/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010e2c30; name: FUN_010e2c30
 */


void FUN_010e2c30(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *plStack_48;
  
  plVar1 = (long *)(param_2 + 0x28);
  lVar5 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar5) {
    bVar3 = true;
LAB_010e2c84:
    local_60 = *param_3;
    uStack_58 = param_3[1];
    local_50 = param_3[2];
    plVar1 = (long *)param_3[3];
    plStack_48 = plVar1;
    if (plVar1 == (long *)0x0) {
      FUN_010e2d6c(param_1,param_2,&local_60);
    }
    else {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      FUN_010e2d6c(param_1,param_2,&local_60);
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    if (bVar3) {
      return;
    }
    *(undefined8 *)(param_2 + 0x28) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x30));
    return;
  }
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_010e2c80;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x30));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x30));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_010e2c80;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_010e2c80:
  bVar3 = false;
  goto LAB_010e2c84;
}


