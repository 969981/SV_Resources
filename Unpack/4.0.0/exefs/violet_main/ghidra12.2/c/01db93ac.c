/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01db93ac; name: FUN_01db93ac
 */


void FUN_01db93ac(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar7;
  undefined8 *puVar6;
  long *plVar8;
  undefined1 auStack_a0 [96];
  undefined8 local_28;
  
  bVar4 = true;
  *(undefined1 *)(param_1 + 0x452) = 1;
  plVar8 = (long *)(param_1 + 0x1d8);
  lVar5 = *plVar8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    plVar8 = (long *)0x0;
LAB_01db9428:
    puVar1 = *(undefined8 **)(param_1 + 0x1f8);
    if (*(undefined8 **)(param_1 + 0x1f0) != puVar1) {
      puVar6 = *(undefined8 **)(param_1 + 0x1f0);
      do {
        puVar7 = puVar6 + 1;
        local_28 = *puVar6;
        FUN_02b53578(auStack_a0,&local_28);
        puVar6 = puVar7;
      } while (puVar1 != puVar7);
    }
    if (!bVar4) {
      *plVar8 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
    }
    FUN_02b53580(auStack_a0);
    return;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01db9424;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e0));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e0));
        while (*plVar8 == 0) {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01db9424;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01db9424:
  bVar4 = false;
  goto LAB_01db9428;
}


