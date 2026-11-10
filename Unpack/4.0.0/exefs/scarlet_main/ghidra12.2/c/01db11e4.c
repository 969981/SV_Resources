/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01db11e4; name: FUN_01db11e4
 */


void FUN_01db11e4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_48;
  
  plVar5 = param_2 + 0x33;
  lVar4 = *plVar5;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar4) {
    plVar5 = (long *)0x0;
    bVar3 = true;
LAB_01db123c:
    local_48 = FUN_01db15a4(param_1,*param_2,param_3);
    FUN_00d76ea4(param_2 + 0x36,&local_48);
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
    if (cVar1 == '\0') goto LAB_01db1238;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x34));
  do {
    if (*plVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x34));
        while (*plVar5 == 0) {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01db1238;
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
LAB_01db1238:
  bVar3 = false;
  goto LAB_01db123c;
}


