/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e3a2a0; name: FUN_01e3a2a0
 */


void FUN_01e3a2a0(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  
  plVar1 = (long *)(param_1 + 8);
  lVar6 = *plVar1;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar6) {
    bVar5 = true;
LAB_01e3a2ec:
    FUN_01e3a474(param_2,param_1 + 0x20);
    FUN_01e3a474(param_2,param_1 + 0x58);
    if ((*(byte *)(param_1 + 600) & 7) != 0) {
      pcVar4 = *(code **)(param_1 + 0xa8);
      if ((*(ulong *)(param_1 + 0xb0) & 1) != 0) {
        pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + ((long)*(ulong *)(param_1 + 0xb0) >> 1)));
      }
      (*pcVar4)();
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
    if (cVar2 == '\0') goto LAB_01e3a2e8;
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
          if (cVar2 == '\0') goto LAB_01e3a2e8;
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
LAB_01e3a2e8:
  bVar5 = false;
  goto LAB_01e3a2ec;
}


