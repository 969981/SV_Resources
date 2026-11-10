/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021900ac; name: FUN_021900ac
 */


void FUN_021900ac(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long local_28;
  
  if (*(char *)(param_1 + 0x42) == '\0') {
    return;
  }
  plVar1 = (long *)(param_1 + 0x130);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_021900ec;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x138));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x138));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_021900ec;
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
LAB_021900ec:
  if (*(char *)(param_2 + 0x2c) == '\0') {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_2 + 0x28) != 5;
  }
  local_28 = param_2;
  lVar4 = FUN_0218ff60(param_1 + 200,&local_28);
  if ((bVar3 == false) && (*(char *)(lVar4 + 0x18) == '\0')) {
    lVar5 = 1;
  }
  else {
    if ((*(char *)(lVar4 + 0x18) == '\0') || ((bool)(bVar3 ^ 1U))) goto LAB_02190130;
    lVar5 = -1;
  }
  *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + lVar5;
LAB_02190130:
  *(byte *)(lVar4 + 0x18) = bVar3 ^ 1U;
  *(undefined8 *)(param_1 + 0x130) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x138));
  return;
}


