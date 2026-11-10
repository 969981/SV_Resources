/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f66328; name: FUN_00f66328
 */


long FUN_00f66328(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_40 = &local_38;
  plVar1 = (long *)(param_1 + 8);
  lVar4 = *plVar1;
  local_38 = param_2;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar4) {
    bVar5 = true;
LAB_00f66378:
    lVar3 = FUN_021b584c(&local_40,param_1 + 0x20);
    if (lVar3 == 0) {
      lVar3 = FUN_021b584c(&local_40,param_1 + 0x58);
    }
    if (!bVar5) {
      *(undefined8 *)(param_1 + 8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
    }
    return lVar3;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00f66374;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00f66374;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00f66374:
  bVar5 = false;
  goto LAB_00f66378;
}


