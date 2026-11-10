/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f97524; name: FUN_01f97524
 */


undefined8 FUN_01f97524(undefined4 param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_48;
  
  if (*(long *)(param_2 + 0x1d8) == 0) {
    local_48 = *(undefined8 *)(param_2 + 8);
    FUN_016772b0(&local_78,local_48,&local_48);
    lVar3 = local_78;
    local_78 = 0;
    lVar5 = *(long *)(param_2 + 0x1d8);
    *(long *)(param_2 + 0x1d8) = lVar3;
    if (lVar5 == 0) {
      *(long *)(param_2 + 0x1e8) = local_68;
      *(undefined8 *)(param_2 + 0x1f0) = local_60;
      *(undefined8 *)(param_2 + 0x1e0) = local_70;
    }
    else {
      FUN_018f3f44(param_2 + 0x1e0);
      lVar3 = local_78;
      *(undefined8 *)(param_2 + 0x1e0) = local_70;
      *(long *)(param_2 + 0x1e8) = local_68;
      *(undefined8 *)(param_2 + 0x1f0) = local_60;
      local_78 = 0;
      if (lVar3 != 0) {
        FUN_018f3f44(&local_70);
      }
    }
  }
  local_78 = -0xfffffffe;
  uVar2 = FUN_0103b2e0(param_2 + 0xe8,&local_78);
  plVar6 = (long *)(param_2 + 0x48);
  lVar5 = *plVar6;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    plVar6 = (long *)0x0;
    bVar4 = true;
LAB_01f975a0:
    local_60 = *param_3;
    local_78 = param_2;
    local_70 = uVar2;
    local_68 = param_2;
    local_58 = param_1;
    FUN_01f97788(param_2 + 0x60,&local_78);
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
    if (cVar1 == '\0') goto LAB_01f9759c;
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
          if (cVar1 == '\0') goto LAB_01f9759c;
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
LAB_01f9759c:
  bVar4 = false;
  goto LAB_01f975a0;
}


