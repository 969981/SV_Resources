/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b29b0; name: FUN_028b29b0
 */


void FUN_028b29b0(long *param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined4 local_14;
  
  local_14 = param_2;
  lVar3 = nn::os::GetCurrentThread();
  while (*param_1 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_028b29e0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 1));
  do {
    if (*param_1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 1));
        while (*param_1 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar2) {
            *param_1 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_028b29e0;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_028b29e0:
  FUN_028b2a54(param_1 + 0x114,&local_14);
  FUN_028b2a9c(param_1 + 4,&local_14);
  *param_1 = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 1));
  return;
}


