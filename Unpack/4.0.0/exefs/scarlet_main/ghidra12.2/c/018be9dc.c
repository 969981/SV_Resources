/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018be9dc; name: FUN_018be9dc
 */


void FUN_018be9dc(long *param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  
  lVar5 = *param_2;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar5) {
    bVar4 = true;
LAB_018bea20:
    plVar3 = (long *)param_2[3];
    *param_1 = (long)plVar3;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x58))();
    }
    if (bVar4) {
      return;
    }
    *param_2 = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 1));
    return;
  }
  lVar2 = nn::os::GetCurrentThread();
  while (*param_2 == 0) {
    cVar1 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar4) {
      *param_2 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_018bea1c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 1));
  do {
    if (*param_2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 1));
        while (*param_2 == 0) {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(param_2,0x10);
          if (bVar4) {
            *param_2 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_018bea1c;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar4) {
      *param_2 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_018bea1c:
  bVar4 = false;
  goto LAB_018bea20;
}


