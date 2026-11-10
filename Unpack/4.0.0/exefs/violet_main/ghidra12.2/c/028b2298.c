/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b2298; name: FUN_028b2298
 */


uint FUN_028b2298(long *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  uint local_14;
  
  lVar4 = nn::os::GetCurrentThread();
  while (*param_1 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_028b22c4;
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
            *param_1 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_028b22c4;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_028b22c4:
  uVar3 = FUN_028b23d0(param_1 + 4);
  local_14 = uVar3;
  FUN_028b2574(param_1 + 0x114,&local_14,&local_14);
  *param_1 = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 1));
  return uVar3;
}


