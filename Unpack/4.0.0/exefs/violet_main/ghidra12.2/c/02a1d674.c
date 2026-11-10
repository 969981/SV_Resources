/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a1d674; name: FUN_02a1d674
 */


void FUN_02a1d674(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    return;
  }
  lVar6 = *param_1;
  plVar1 = (long *)(lVar5 + 0x40);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_02a1d6b0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x48));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x48));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02a1d6b0;
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
LAB_02a1d6b0:
  cVar2 = *(char *)(lVar5 + 100);
  *(undefined8 *)(lVar5 + 0x40) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x48));
  if (cVar2 != '\0') {
    return;
  }
  if ((*(uint *)(lVar5 + 0x68) & 0xfffffffe) != 2) {
    return;
  }
  if (*(char *)(lVar6 + 0xfe) == '\0') {
    *(undefined4 *)(lVar5 + 0x6c) = 1;
    return;
  }
  *(undefined4 *)(lVar5 + 0x6c) = 0;
  return;
}


