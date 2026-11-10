/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028c2748; name: FUN_028c2748
 */


void FUN_028c2748(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_48;
  
  plVar5 = param_2 + 0x33;
  lVar4 = *plVar5;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar4) {
    plVar5 = (long *)0x0;
    bVar3 = true;
LAB_028c27a0:
    local_48 = FUN_028d99e8(param_1,*param_2,param_3);
    FUN_0103bd9c(param_2 + 0x36,&local_48);
    if (bVar3) {
      return;
    }
    *plVar5 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar5 + 1));
    return;
  }
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar5 == 0) {
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_028c279c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x34));
  do {
    if (*plVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x34));
        while (*plVar5 == 0) {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_028c279c;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_028c279c:
  bVar3 = false;
  goto LAB_028c27a0;
}


