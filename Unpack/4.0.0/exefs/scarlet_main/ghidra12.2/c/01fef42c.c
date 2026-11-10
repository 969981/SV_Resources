/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fef42c; name: FUN_01fef42c
 */


undefined8 FUN_01fef42c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_48;
  
  plVar6 = param_2 + 0x33;
  lVar5 = *plVar6;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar5) {
    plVar6 = (long *)0x0;
    bVar4 = true;
LAB_01fef484:
    uVar3 = FUN_01fef52c(param_1,*param_2,param_3,1);
    local_48 = uVar3;
    FUN_00e2bc48(param_2 + 0x36,&local_48);
    if (!bVar4) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    }
    return uVar3;
  }
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar1 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_01fef480;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x34));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x34));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01fef480;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01fef480:
  bVar4 = false;
  goto LAB_01fef484;
}


