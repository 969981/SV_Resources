/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0218fe68; name: FUN_0218fe68
 */


void FUN_0218fe68(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 local_28;
  
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
    if (cVar2 == '\0') goto LAB_0218fea8;
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
          if (cVar2 == '\0') goto LAB_0218fea8;
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
LAB_0218fea8:
  local_28 = param_2;
  lVar4 = FUN_0218ff60(param_1 + 200,&local_28);
  cVar2 = *(char *)(lVar4 + 0x18);
  FUN_0219006c(param_1 + 200,lVar4);
  if (cVar2 != '\0') {
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + -1;
  }
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + -1;
  *(undefined8 *)(param_1 + 0x130) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x138));
  return;
}


