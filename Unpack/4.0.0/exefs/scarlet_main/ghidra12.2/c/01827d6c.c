/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01827d6c; name: FUN_01827d6c
 */


ulong FUN_01827d6c(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
LAB_01827e08:
    return (ulong)(uVar4 & 1);
  }
  plVar1 = (long *)(param_1 + 0x148);
  lVar7 = *plVar1;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar7) {
    uVar6 = FUN_01827eb0(*(undefined8 *)(param_1 + 0x138),param_2 & 1,param_3,param_4,param_5,
                         param_6);
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
    if (cVar2 == '\0') goto LAB_01827dd4;
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
          if (cVar2 == '\0') goto LAB_01827dd4;
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
LAB_01827dd4:
  if (*(long *)(param_1 + 0x138) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_01827eb0(*(long *)(param_1 + 0x138),param_2 & 1,param_3,param_4,param_5,param_6);
  }
  *(undefined8 *)(param_1 + 0x148) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x150));
  goto LAB_01827e08;
}


