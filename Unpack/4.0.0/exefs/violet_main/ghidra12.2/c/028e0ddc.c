/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028e0ddc; name: FUN_028e0ddc
 */


undefined8 FUN_028e0ddc(undefined8 param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_48;
  
  plVar6 = (long *)(param_2 + 0x30);
  lVar4 = *plVar6;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar4) {
    if (*(long *)(param_2 + 0x1f8) == 0) {
      local_48 = *(undefined8 *)(param_2 + 8);
      FUN_0103caf0(&local_88,local_48,&local_48);
      lVar2 = local_88;
      local_88 = 0;
      lVar4 = *(long *)(param_2 + 0x1f8);
      *(long *)(param_2 + 0x1f8) = lVar2;
      if (lVar4 == 0) {
        *(undefined8 *)(param_2 + 0x210) = local_70;
        *(long *)(param_2 + 0x208) = local_78;
        *(undefined8 *)(param_2 + 0x200) = local_80;
      }
      else {
        FUN_0103e9d8(param_2 + 0x200);
        lVar2 = local_88;
        *(undefined8 *)(param_2 + 0x210) = local_70;
        *(long *)(param_2 + 0x208) = local_78;
        *(undefined8 *)(param_2 + 0x200) = local_80;
        local_88 = 0;
        if (lVar2 != 0) {
          FUN_0103e9d8(&local_80);
        }
      }
    }
    local_88 = -0xfffffffd;
    uVar3 = FUN_0103b2e0(param_2 + 0xe8,&local_88);
    plVar6 = (long *)(param_2 + 0x48);
    lVar4 = *plVar6;
    lVar2 = nn::os::GetCurrentThread();
    if (lVar2 == lVar4) {
      plVar6 = (long *)0x0;
      bVar5 = true;
LAB_028e0f4c:
      local_70 = *param_3;
      local_68 = *(undefined1 *)(param_3 + 1);
      local_60 = (undefined4)param_1;
      local_58 = 1;
      local_88 = param_2;
      local_80 = uVar3;
      local_78 = param_2;
      FUN_028e11dc(param_2 + 0x60,&local_88);
      if (!bVar5) {
        *plVar6 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
      }
      return uVar3;
    }
    lVar2 = nn::os::GetCurrentThread();
    while (*plVar6 == 0) {
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') goto LAB_028e0f48;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
    do {
      if (*plVar6 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
          while (*plVar6 == 0) {
            cVar1 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar5) {
              *plVar6 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_028e0f48;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_028e0f48:
    bVar5 = false;
    goto LAB_028e0f4c;
  }
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar5) {
      *plVar6 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_028e0e2c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x38));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x38));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar5) {
            *plVar6 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_028e0e2c;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar5) {
      *plVar6 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_028e0e2c:
  uVar3 = FUN_028e1070(param_1,param_2,param_3);
  *(undefined8 *)(param_2 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x38));
  return uVar3;
}


