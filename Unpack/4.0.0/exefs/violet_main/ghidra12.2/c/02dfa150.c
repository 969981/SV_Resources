/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02dfa150; name: FUN_02dfa150
 */


undefined8 FUN_02dfa150(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar1 = (long *)(param_1 + 0x40);
  lVar5 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar5) {
    return *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x168) + 8) + 0xb8);
  }
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_02dfa190;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02dfa190;
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
LAB_02dfa190:
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x168) + 8) + 0xb8);
  *(undefined8 *)(param_1 + 0x40) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x48));
  return uVar6;
}


