/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021526c0; name: FUN_021526c0
 */


undefined8 FUN_021526c0(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  
  plVar6 = (long *)(param_1 + 0xf0);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_021526f0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf8));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf8));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_021526f0;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_021526f0:
  plVar6 = (long *)**(undefined8 **)(param_1 + 0x4c8);
  uVar7 = 0;
  if (plVar6 != (long *)0x0) {
    plVar5 = (long *)(**(code **)plVar6[5])(plVar6 + 5);
    if (((*PTR_DAT_047dd140 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047dd140), iVar3 != 0)) {
      uVar7 = FUN_02152568();
      *(undefined8 *)PTR_DAT_047dd148 = uVar7;
      __cxa_guard_release(PTR_DAT_047dd140);
    }
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)PTR_DAT_047dd148) {
        if (*(char *)((long)plVar6 + 0x4c) == '\0') {
          (**(code **)(*plVar6 + 0x70))(plVar6);
          uVar7 = 1;
          *(undefined1 *)(param_1 + 0x81) = 1;
          FUN_02152b3c(param_1);
        }
        else {
          (**(code **)(*plVar6 + 0x80))(plVar6);
          uVar7 = 1;
          *(undefined1 *)(param_1 + 0x81) = 1;
          FUN_02152d3c(param_1);
        }
        goto LAB_0215273c;
      }
    }
    uVar7 = 0;
  }
LAB_0215273c:
  *(undefined8 *)(param_1 + 0xf0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xf8));
  return uVar7;
}


