/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0125a850; name: FUN_0125a850
 */


void FUN_0125a850(long param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x3c0);
  lVar4 = *plVar6;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar4) {
    plVar6 = (long *)0x0;
    bVar5 = true;
LAB_0125a89c:
    lVar2 = *(long *)(param_1 + 0x3d8);
    lVar4 = *(long *)(param_1 + 0x3e0);
    if (lVar2 != lVar4) {
      puVar3 = param_2 + 4;
      (*(code *)*param_2)(puVar3,lVar2);
      if (lVar2 + 0x10 != lVar4) {
        (*(code *)*param_2)(puVar3);
        for (lVar2 = lVar2 + 0x20; lVar2 != lVar4; lVar2 = lVar2 + 0x10) {
          (*(code *)*param_2)(puVar3,lVar2);
        }
      }
    }
    if (bVar5) {
      return;
    }
    *plVar6 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    return;
  }
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar5) {
      *plVar6 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0125a898;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3c8));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3c8));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar5) {
            *plVar6 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_0125a898;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar5) {
      *plVar6 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_0125a898:
  bVar5 = false;
  goto LAB_0125a89c;
}


