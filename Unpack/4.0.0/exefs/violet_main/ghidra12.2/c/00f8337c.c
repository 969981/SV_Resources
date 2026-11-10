/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f8337c; name: FUN_00f8337c
 */


uint FUN_00f8337c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *plStack_48;
  
  plVar1 = (long *)(param_1 + 0x40);
  lVar5 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar5) {
    bVar6 = true;
LAB_00f833cc:
    local_60 = *param_2;
    uStack_58 = param_2[1];
    local_50 = param_2[2];
    plVar1 = (long *)param_2[3];
    plStack_48 = plVar1;
    if (plVar1 == (long *)0x0) {
      uVar3 = FUN_00f87e7c(param_1,&local_60);
    }
    else {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      uVar3 = FUN_00f87e7c(param_1,&local_60);
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    if (!bVar6) {
      *(undefined8 *)(param_1 + 0x40) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x48));
    }
    return uVar3 & 1;
  }
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00f833c8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00f833c8;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00f833c8:
  bVar6 = false;
  goto LAB_00f833cc;
}


