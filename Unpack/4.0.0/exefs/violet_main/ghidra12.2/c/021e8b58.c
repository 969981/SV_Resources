/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e8b58; name: FUN_021e8b58
 */


ulong FUN_021e8b58(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  plVar1 = (long *)(param_1 + 0x110);
  lVar7 = *plVar1;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar7) {
    uVar6 = FUN_021d93f4(param_1 + 0x58,param_2,*param_3);
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
    if (cVar2 == '\0') goto LAB_021e8ba4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x118));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x118));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_021e8ba4;
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
LAB_021e8ba4:
  uVar4 = FUN_021d93f4(param_1 + 0x58,param_2,*param_3);
  *(undefined8 *)(param_1 + 0x110) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x118));
  return (ulong)(uVar4 & 1);
}


