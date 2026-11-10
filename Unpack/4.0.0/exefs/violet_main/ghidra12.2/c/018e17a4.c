/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018e17a4; name: FUN_018e17a4
 */


long FUN_018e17a4(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_40 = &local_38;
  plVar1 = (long *)(param_1 + 8);
  lVar4 = *plVar1;
  local_38 = param_2;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar4) {
    bVar5 = true;
LAB_018e17f4:
    lVar3 = FUN_018e1894(&local_40,param_1 + 0x20);
    if (lVar3 == 0) {
      lVar3 = FUN_018e1894(&local_40,param_1 + 0x58);
    }
    if (!bVar5) {
      *(undefined8 *)(param_1 + 8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
    }
    return lVar3;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_018e17f0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_018e17f0;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_018e17f0:
  bVar5 = false;
  goto LAB_018e17f4;
}


