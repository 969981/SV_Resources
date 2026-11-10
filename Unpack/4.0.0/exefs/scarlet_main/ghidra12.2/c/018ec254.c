/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018ec254; name: FUN_018ec254
 */


void FUN_018ec254(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x248);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_018ec284;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x250));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x250));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_018ec284;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_018ec284:
  lVar4 = *(long *)(*(long *)(param_1 + 0x1c0) + 0xf8);
  if (((lVar4 != 0) && (*(int *)(*(long *)(param_1 + 0x1c0) + 0x100) == *(int *)(lVar4 + 0x2c))) &&
     (lVar4 = FUN_00c41664(), lVar4 != 0)) {
    *(undefined1 *)(param_1 + 0x299) = 1;
    if (*(char *)(param_1 + 0x298) == '\0') {
      *(undefined1 *)(lVar4 + 10) = 0;
    }
    else {
      *(undefined1 *)(lVar4 + 10) = 1;
    }
  }
  *(undefined8 *)(param_1 + 0x248) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x250));
  return;
}


