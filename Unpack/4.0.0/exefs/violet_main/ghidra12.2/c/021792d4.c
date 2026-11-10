/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021792d4; name: FUN_021792d4
 */


void FUN_021792d4(float param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  
  plVar1 = (long *)(param_2 + 0x1b8);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0217930c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x1c0));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x1c0));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0217930c;
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
LAB_0217930c:
  fVar5 = *(float *)(param_2 + 0xe4) - param_1;
  bVar3 = true;
  if ((fVar5 <= 1.1920929e-07) && (bVar3 = false, !NAN(fVar5))) {
    bVar3 = fVar5 < -1.1920929e-07;
  }
  if (bVar3) {
    *(undefined1 *)(param_2 + 0x1b0) = 1;
    *(float *)(param_2 + 0xe4) = param_1;
    *(undefined1 *)(param_2 + 0x170) = 0;
    *(undefined8 *)(param_2 + 0x174) = 0;
    *(undefined8 *)(param_2 + 0x17c) = 0;
  }
  *(undefined8 *)(param_2 + 0x1b8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x1c0));
  return;
}


