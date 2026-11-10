/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026d89cc; name: FUN_026d89cc
 */


undefined8 FUN_026d89cc(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x198) == 0) {
    local_68 = *(undefined8 *)(param_1 + 8);
    FUN_017adf40(&local_60,local_68,&local_68);
    lVar3 = local_60;
    local_60 = 0;
    lVar5 = *(long *)(param_1 + 0x198);
    *(long *)(param_1 + 0x198) = lVar3;
    if (lVar5 == 0) {
      *(long *)(param_1 + 0x1a8) = local_50;
      *(undefined8 *)(param_1 + 0x1b0) = local_48;
      *(undefined8 *)(param_1 + 0x1a0) = local_58;
    }
    else {
      FUN_013d4b20(param_1 + 0x1a0);
      lVar3 = local_60;
      *(undefined8 *)(param_1 + 0x1a0) = local_58;
      *(long *)(param_1 + 0x1a8) = local_50;
      *(undefined8 *)(param_1 + 0x1b0) = local_48;
      local_60 = 0;
      if (lVar3 != 0) {
        FUN_013d4b20(&local_58);
      }
    }
  }
  local_60 = -0x100000000;
  uVar2 = FUN_0103b2e0(param_1 + 0xe8,&local_60);
  plVar6 = (long *)(param_1 + 0x48);
  lVar5 = *plVar6;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    plVar6 = (long *)0x0;
    bVar4 = true;
LAB_026d8a3c:
    local_48 = *param_2;
    local_60 = param_1;
    local_58 = uVar2;
    local_50 = param_1;
    FUN_026d8dbc(param_1 + 0x60,&local_60);
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
    if (cVar1 == '\0') goto LAB_026d8a38;
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
          if (cVar1 == '\0') goto LAB_026d8a38;
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
LAB_026d8a38:
  bVar4 = false;
  goto LAB_026d8a3c;
}


