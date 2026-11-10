/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0192ae5c; name: FUN_0192ae5c
 */


long FUN_0192ae5c(long param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  
  plVar3 = (long *)(param_1 + 8);
  lVar4 = *plVar3;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar4) {
    bVar5 = true;
LAB_0192aea0:
    plVar3 = (long *)FUN_0192af70(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    if ((*(long **)(param_1 + 0x28) == plVar3) || (*plVar3 == 0)) {
      plVar3 = (long *)FUN_0192af70(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60))
      ;
      if (*(long **)(param_1 + 0x60) == plVar3) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        if (*plVar3 != 0) {
          lVar2 = *plVar3 + -0x20;
        }
      }
    }
    else {
      lVar2 = *plVar3 + -0x20;
    }
    if (!bVar5) {
      *(undefined8 *)(param_1 + 8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
    }
    return lVar2;
  }
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar3 == 0) {
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *plVar3 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0192ae9c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
  do {
    if (*plVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
        while (*plVar3 == 0) {
          cVar1 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *plVar3 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_0192ae9c;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *plVar3 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_0192ae9c:
  bVar5 = false;
  goto LAB_0192aea0;
}


