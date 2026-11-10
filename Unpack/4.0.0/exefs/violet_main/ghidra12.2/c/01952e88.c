/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01952e88; name: FUN_01952e88
 */


undefined8 FUN_01952e88(undefined4 param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_48;
  
  if (*(long *)(param_2 + 0x1f8) == 0) {
    local_48 = *(undefined8 *)(param_2 + 8);
    FUN_0103caf0(&local_88,local_48,&local_48);
    lVar3 = local_88;
    local_88 = 0;
    lVar5 = *(long *)(param_2 + 0x1f8);
    *(long *)(param_2 + 0x1f8) = lVar3;
    if (lVar5 == 0) {
      *(undefined8 *)(param_2 + 0x210) = local_70;
      *(long *)(param_2 + 0x208) = local_78;
      *(undefined8 *)(param_2 + 0x200) = local_80;
    }
    else {
      FUN_0103e9d8(param_2 + 0x200);
      lVar3 = local_88;
      *(undefined8 *)(param_2 + 0x210) = local_70;
      *(long *)(param_2 + 0x208) = local_78;
      *(undefined8 *)(param_2 + 0x200) = local_80;
      local_88 = 0;
      if (lVar3 != 0) {
        FUN_0103e9d8(&local_80);
      }
    }
  }
  local_88 = -0xfffffffd;
  uVar2 = FUN_0103b2e0(param_2 + 0xe8,&local_88);
  plVar6 = (long *)(param_2 + 0x48);
  lVar5 = *plVar6;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    plVar6 = (long *)0x0;
    bVar4 = true;
LAB_01952f00:
    local_70 = *param_3;
    local_68 = *(undefined1 *)(param_3 + 1);
    local_58 = 1;
    local_88 = param_2;
    local_80 = uVar2;
    local_78 = param_2;
    local_60 = param_1;
    FUN_028cd978(param_2 + 0x60,&local_88);
    if (!bVar4) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    }
    return uVar2;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar1 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_01952efc;
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
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01952efc;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01952efc:
  bVar4 = false;
  goto LAB_01952f00;
}


