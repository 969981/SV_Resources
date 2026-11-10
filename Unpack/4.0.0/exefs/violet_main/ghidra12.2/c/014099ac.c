/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014099ac; name: FUN_014099ac
 */


void FUN_014099ac(long param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  
  plVar1 = (long *)(param_1 + 0x110);
  lVar5 = *plVar1;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    bVar4 = true;
LAB_014099fc:
    if ((param_2 != param_3) &&
       (FUN_01409ae0(param_1,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),
                     *(undefined4 *)(param_2 + 0x14)), param_2 + 0x18 != param_3)) {
      FUN_01409ae0(param_1,*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28),
                   *(undefined4 *)(param_2 + 0x2c));
      for (param_2 = param_2 + 0x30; param_2 != param_3; param_2 = param_2 + 0x18) {
        FUN_01409ae0(param_1,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),
                     *(undefined4 *)(param_2 + 0x14));
      }
    }
    if (bVar4) {
      return;
    }
    *(undefined8 *)(param_1 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x118));
    return;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_014099f8;
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
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_014099f8;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_014099f8:
  bVar4 = false;
  goto LAB_014099fc;
}


