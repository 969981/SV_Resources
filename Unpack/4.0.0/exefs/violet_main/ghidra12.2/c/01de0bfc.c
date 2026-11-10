/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01de0bfc; name: FUN_01de0bfc
 */


ulong FUN_01de0bfc(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x138) == 0) {
    uVar4 = 0;
LAB_01de0c84:
    return (ulong)(uVar4 & 1);
  }
  plVar1 = (long *)(param_1 + 0x148);
  lVar7 = *plVar1;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar7) {
    uVar6 = FUN_01de8bb8(*(undefined8 *)(param_1 + 0x138),param_2 & 1,param_3,param_4);
    return uVar6;
  }
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01de0c58;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01de0c58;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01de0c58:
  if (*(long *)(param_1 + 0x138) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_01de8bb8(*(long *)(param_1 + 0x138),param_2 & 1,param_3,param_4);
  }
  *(undefined8 *)(param_1 + 0x148) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x150));
  goto LAB_01de0c84;
}


