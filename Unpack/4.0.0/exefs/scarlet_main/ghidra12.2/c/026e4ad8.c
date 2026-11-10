/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026e4ad8; name: FUN_026e4ad8
 */


void FUN_026e4ad8(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  plVar1 = (long *)(param_1 + 8);
  lVar4 = *plVar1;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar4) {
    bVar5 = true;
LAB_026e4b24:
    lVar4 = *(long *)(param_1 + 0x28);
    for (lVar3 = *(long *)(param_1 + 0x20); lVar3 != lVar4; lVar3 = lVar3 + 8) {
      FUN_026e4cc0(lVar3,param_2);
    }
    lVar4 = *(long *)(param_1 + 0x60);
    for (lVar3 = *(long *)(param_1 + 0x58); lVar3 != lVar4; lVar3 = lVar3 + 8) {
      FUN_026e4cc0(lVar3,param_2);
    }
    if (bVar5) {
      return;
    }
    *(undefined8 *)(param_1 + 8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
    return;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_026e4b20;
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
          if (cVar2 == '\0') goto LAB_026e4b20;
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
LAB_026e4b20:
  bVar5 = false;
  goto LAB_026e4b24;
}


