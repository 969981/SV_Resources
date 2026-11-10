/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d79950; name: FUN_00d79950
 */


void FUN_00d79950(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  
  plVar4 = (long *)(param_1 + 0xb090);
  lVar3 = *plVar4;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar3) {
    plVar4 = (long *)0x0;
    bVar5 = true;
LAB_00d7999c:
    if (*(long *)(param_1 + 0xb0a8) != 0) {
      FUN_00d79a28();
    }
    if (bVar5) {
      return;
    }
    *plVar4 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar4 + 1));
    return;
  }
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar4 == 0) {
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar5) {
      *plVar4 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00d79994;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb098));
  do {
    if (*plVar4 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb098));
        while (*plVar4 == 0) {
          cVar1 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar5) {
            *plVar4 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00d79994;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar5) {
      *plVar4 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00d79994:
  bVar5 = false;
  goto LAB_00d7999c;
}


