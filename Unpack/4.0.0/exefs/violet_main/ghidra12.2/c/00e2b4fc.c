/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e2b4fc; name: FUN_00e2b4fc
 */


void FUN_00e2b4fc(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  LightEventType *pLVar5;
  long lVar6;
  undefined8 local_38;
  
  plVar1 = (long *)(param_1 + 0x30);
  lVar6 = *plVar1;
  local_38 = param_2;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar6) {
    plVar1 = (long *)(param_1 + 0x98);
    lVar6 = *plVar1;
    lVar4 = nn::os::GetCurrentThread();
    if (lVar4 == lVar6) {
      FUN_00e2bc48(param_1 + 0xb0,&local_38);
      return;
    }
    lVar4 = nn::os::GetCurrentThread();
    while (*plVar1 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_00e2b5dc;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa0));
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa0));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00e2b5dc;
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
LAB_00e2b5dc:
    FUN_00e2bc48(param_1 + 0xb0,&local_38);
    pLVar5 = (LightEventType *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0x98) = 0;
    goto LAB_00e2b55c;
  }
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00e2b544;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00e2b544;
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
LAB_00e2b544:
  FUN_00e2b668(param_1,local_38);
  *(undefined8 *)(param_1 + 0x30) = 0;
  pLVar5 = (LightEventType *)(param_1 + 0x38);
LAB_00e2b55c:
  nn::os::SignalLightEvent(pLVar5);
  return;
}


