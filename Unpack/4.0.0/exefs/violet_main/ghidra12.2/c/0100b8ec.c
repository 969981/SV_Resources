/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0100b8ec; name: FUN_0100b8ec
 */


undefined8 FUN_0100b8ec(undefined4 param_1,long param_2,void *param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98 [5];
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_58;
  
  if (*(long *)(param_2 + 0x1f8) == 0) {
    local_58 = *(undefined8 *)(param_2 + 8);
    FUN_0103caf0(&local_b0,local_58,&local_58);
    lVar3 = local_b0;
    local_b0 = 0;
    lVar4 = *(long *)(param_2 + 0x1f8);
    *(long *)(param_2 + 0x1f8) = lVar3;
    if (lVar4 == 0) {
      *(undefined8 *)(param_2 + 0x210) = local_98[0];
      *(long *)(param_2 + 0x208) = local_a0;
      *(undefined8 *)(param_2 + 0x200) = local_a8;
    }
    else {
      FUN_0103e9d8(param_2 + 0x200);
      lVar3 = local_b0;
      *(undefined8 *)(param_2 + 0x210) = local_98[0];
      *(long *)(param_2 + 0x208) = local_a0;
      *(undefined8 *)(param_2 + 0x200) = local_a8;
      local_b0 = 0;
      if (lVar3 != 0) {
        FUN_0103e9d8(&local_a8);
      }
    }
  }
  local_b0 = -0xfffffffd;
  uVar2 = FUN_0103b2e0(param_2 + 0xe8,&local_b0);
  plVar6 = (long *)(param_2 + 0x48);
  lVar4 = *plVar6;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar4) {
    plVar6 = (long *)0x0;
    bVar5 = true;
LAB_0100b970:
    local_b0 = param_2;
    local_a8 = uVar2;
    local_a0 = param_2;
    memcpy(local_98,param_3,0x28);
    local_70 = param_1;
    local_68 = param_4;
    FUN_01fee564(param_2 + 0x60,&local_b0);
    if (!bVar5) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    }
    return uVar2;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar5) {
      *plVar6 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0100b96c;
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
            *plVar6 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_0100b96c;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar5) {
      *plVar6 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_0100b96c:
  bVar5 = false;
  goto LAB_0100b970;
}


