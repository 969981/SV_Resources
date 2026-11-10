/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011677a8; name: FUN_011677a8
 */


void FUN_011677a8(float param_1,float param_2,float param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  
  plVar1 = (long *)(param_4 + 0x1b8);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_011677ec;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_4 + 0x1c0));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_4 + 0x1c0));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_011677ec;
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
LAB_011677ec:
  fVar5 = *(float *)(param_4 + 0xe8) - param_1;
  bVar3 = true;
  if ((fVar5 <= 1.1920929e-07) && (bVar3 = false, !NAN(fVar5))) {
    bVar3 = fVar5 < -1.1920929e-07;
  }
  if (bVar3) {
    *(undefined1 *)(param_4 + 0x1b0) = 1;
    *(float *)(param_4 + 0xe8) = param_1;
    *(undefined1 *)(param_4 + 0x170) = 0;
    *(undefined8 *)(param_4 + 0x174) = 0;
    *(undefined8 *)(param_4 + 0x17c) = 0;
  }
  fVar5 = *(float *)(param_4 + 0xec) - param_2;
  bVar3 = true;
  if ((fVar5 <= 1.1920929e-07) && (bVar3 = false, !NAN(fVar5))) {
    bVar3 = fVar5 < -1.1920929e-07;
  }
  if (bVar3) {
    *(undefined1 *)(param_4 + 0x1b0) = 1;
    *(float *)(param_4 + 0xec) = param_2;
    *(undefined1 *)(param_4 + 0x170) = 0;
    *(undefined8 *)(param_4 + 0x174) = 0;
    *(undefined8 *)(param_4 + 0x17c) = 0;
  }
  fVar5 = *(float *)(param_4 + 0xf0) - param_3;
  bVar3 = true;
  if ((fVar5 <= 1.1920929e-07) && (bVar3 = false, !NAN(fVar5))) {
    bVar3 = fVar5 < -1.1920929e-07;
  }
  if (bVar3) {
    *(undefined1 *)(param_4 + 0x1b0) = 1;
    *(float *)(param_4 + 0xf0) = param_3;
    *(undefined1 *)(param_4 + 0x170) = 0;
    *(undefined8 *)(param_4 + 0x174) = 0;
    *(undefined8 *)(param_4 + 0x17c) = 0;
  }
  *(undefined8 *)(param_4 + 0x1b8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_4 + 0x1c0));
  return;
}


