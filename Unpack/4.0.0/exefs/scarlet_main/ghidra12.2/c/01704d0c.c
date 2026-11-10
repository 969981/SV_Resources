/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01704d0c; name: FUN_01704d0c
 */


void FUN_01704d0c(long param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  
  plVar1 = (long *)(param_1 + 8);
  lVar5 = *plVar1;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    bVar4 = true;
LAB_01704d50:
    FUN_01704de0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    FUN_01704de0(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
    if (bVar4) {
      return;
    }
    *(undefined8 *)(param_1 + 8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
    return;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01704d4c;
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
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01704d4c;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01704d4c:
  bVar4 = false;
  goto LAB_01704d50;
}


