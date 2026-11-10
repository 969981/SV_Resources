/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0125af80; name: FUN_0125af80
 */


void FUN_0125af80(long param_1,byte param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  byte *local_40;
  byte local_34 [4];
  
  local_34[0] = param_2 & 1;
  local_40 = local_34;
  plVar1 = (long *)(param_1 + 0x110);
  lVar5 = *plVar1;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    bVar4 = true;
LAB_0125afd8:
    FUN_0125b070(*(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x130),&local_40);
    FUN_0125b070(*(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x168),&local_40);
    if (!bVar4) {
      *(undefined8 *)(param_1 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x118));
    }
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
    if (cVar2 == '\0') goto LAB_0125afd4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x118));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x118));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0125afd4;
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
LAB_0125afd4:
  bVar4 = false;
  goto LAB_0125afd8;
}


