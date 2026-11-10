/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b28d8; name: FUN_028b28d8
 */


uint FUN_028b28d8(long *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = nn::os::GetCurrentThread();
  while (*param_1 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_028b2908;
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
          if (cVar1 == '\0') goto LAB_028b2908;
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
LAB_028b2908:
  uVar3 = param_2 - (int)param_1[4];
  uVar5 = *(ulong *)((long)(param_1 + 4) + ((ulong)(uVar3 >> 3) & 0x1ffffff8) + 0x818);
  *param_1 = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 1));
  return (uint)(uVar5 >> ((ulong)uVar3 & 0x3f)) & 1;
}


