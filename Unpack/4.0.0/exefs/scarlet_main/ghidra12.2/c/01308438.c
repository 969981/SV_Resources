/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01308438; name: FUN_01308438
 */


void FUN_01308438(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x198) == 0) {
    local_48 = *(undefined8 *)(param_1 + 8);
    FUN_01306690(&local_80,local_48,&local_48);
    lVar3 = local_80;
    local_80 = 0;
    lVar5 = *(long *)(param_1 + 0x198);
    *(long *)(param_1 + 0x198) = lVar3;
    if (lVar5 == 0) {
      *(long *)(param_1 + 0x1a8) = local_70;
      *(undefined8 *)(param_1 + 0x1b0) = local_68;
      *(undefined8 *)(param_1 + 0x1a0) = local_78;
    }
    else {
      FUN_018ded80(param_1 + 0x1a0);
      lVar3 = local_80;
      *(undefined8 *)(param_1 + 0x1a0) = local_78;
      *(long *)(param_1 + 0x1a8) = local_70;
      *(undefined8 *)(param_1 + 0x1b0) = local_68;
      local_80 = 0;
      if (lVar3 != 0) {
        FUN_018ded80(&local_78);
      }
    }
  }
  local_80 = -0x100000000;
  uVar2 = FUN_0103b2e0(param_1 + 0xe8,&local_80);
  plVar6 = (long *)(param_1 + 0x48);
  lVar5 = *plVar6;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    plVar6 = (long *)0x0;
    bVar4 = true;
LAB_013084a8:
    uStack_58 = param_2[1];
    local_60 = *param_2;
    local_80 = param_1;
    local_78 = uVar2;
    local_70 = param_1;
    FUN_028cac0c(param_1 + 0x60,&local_80);
    if (!bVar4) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    }
    return;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar1 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_013084a4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_013084a4;
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
LAB_013084a4:
  bVar4 = false;
  goto LAB_013084a8;
}


