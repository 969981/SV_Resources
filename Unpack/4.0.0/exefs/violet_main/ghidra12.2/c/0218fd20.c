/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0218fd20; name: FUN_0218fd20
 */


void FUN_0218fd20(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long local_48;
  undefined1 local_24 [4];
  
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
    if (cVar2 == '\0') goto LAB_0218fd64;
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
          if (cVar2 == '\0') goto LAB_0218fd64;
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
LAB_0218fd64:
  if (*(char *)(param_2 + 0x2c) == '\0') {
    bVar3 = true;
  }
  else {
    bVar3 = *(int *)(param_2 + 0x28) == 5;
  }
  local_48 = param_2;
  local_24[0] = bVar3;
  FUN_0218fe34(param_1 + 200,&local_48,local_24);
  if (bVar3) {
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
  }
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
  *(undefined8 *)(param_1 + 0x130) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x138));
  return;
}


