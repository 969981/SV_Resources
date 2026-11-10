/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0264aba4; name: FUN_0264aba4
 */


void FUN_0264aba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  FUN_011816bc();
  plVar5 = (long *)(param_1 + 0x3f8);
  lVar4 = *plVar5;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar4) {
    plVar5 = (long *)0x0;
    bVar3 = true;
LAB_0264abfc:
    local_60 = param_1;
    uStack_58 = param_2;
    local_48 = param_3;
    FUN_0264ac9c(param_1 + 0x410,&local_60);
    if (bVar3) {
      return;
    }
    *plVar5 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar5 + 1));
    return;
  }
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar5 == 0) {
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0264abf8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x400));
  do {
    if (*plVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x400));
        while (*plVar5 == 0) {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_0264abf8;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_0264abf8:
  bVar3 = false;
  goto LAB_0264abfc;
}


