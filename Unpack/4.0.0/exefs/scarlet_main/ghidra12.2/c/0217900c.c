/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0217900c; name: FUN_0217900c
 */


void FUN_0217900c(float param_1,float param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  
  plVar1 = (long *)(param_3 + 0x1b8);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_02179048;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_3 + 0x1c0));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_3 + 0x1c0));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02179048;
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
LAB_02179048:
  fVar5 = *(float *)(param_3 + 0xd4) - param_1;
  bVar3 = true;
  if ((fVar5 <= 1.1920929e-07) && (bVar3 = false, !NAN(fVar5))) {
    bVar3 = fVar5 < -1.1920929e-07;
  }
  if (bVar3) {
    *(undefined1 *)(param_3 + 0x1b0) = 1;
    *(float *)(param_3 + 0xd4) = param_1;
    *(undefined1 *)(param_3 + 0x170) = 0;
    *(undefined8 *)(param_3 + 0x174) = 0;
    *(undefined8 *)(param_3 + 0x17c) = 0;
  }
  fVar5 = *(float *)(param_3 + 0xd8) - param_2;
  bVar3 = true;
  if ((fVar5 <= 1.1920929e-07) && (bVar3 = false, !NAN(fVar5))) {
    bVar3 = fVar5 < -1.1920929e-07;
  }
  if (bVar3) {
    *(undefined1 *)(param_3 + 0x1b0) = 1;
    *(float *)(param_3 + 0xd8) = param_2;
    *(undefined1 *)(param_3 + 0x170) = 0;
    *(undefined8 *)(param_3 + 0x174) = 0;
    *(undefined8 *)(param_3 + 0x17c) = 0;
  }
  *(undefined8 *)(param_3 + 0x1b8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_3 + 0x1c0));
  return;
}


