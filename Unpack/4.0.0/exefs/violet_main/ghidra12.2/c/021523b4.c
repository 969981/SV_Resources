/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021523b4; name: FUN_021523b4
 */


undefined8 FUN_021523b4(long param_1,uint param_2)

{
  LightEventType *pLVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (**(long **)(param_1 + 0x4c8) != 0) {
    plVar5 = (long *)(*(code *)**(undefined8 **)(**(long **)(param_1 + 0x4c8) + 0x28))();
    if (((*PTR_DAT_047dd130 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047dd130), iVar4 != 0)) {
      uVar7 = FUN_02152568();
      *(undefined8 *)PTR_DAT_047dd138 = uVar7;
      __cxa_guard_release(PTR_DAT_047dd130);
    }
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)PTR_DAT_047dd138) {
        plVar5 = (long *)(param_1 + 0xf0);
        lVar6 = nn::os::GetCurrentThread();
        goto LAB_0215241c;
      }
    }
  }
  return 0;
LAB_0215241c:
  if (*plVar5 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0215242c;
    goto LAB_0215241c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf8));
  do {
    if (*plVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf8));
        while (*plVar5 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0215242c;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0215242c:
  FUN_0215267c(param_1);
  pLVar1 = (LightEventType *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  nn::os::SignalLightEvent(pLVar1);
  if ((param_2 & 1) == 0) {
    return 1;
  }
  FUN_021526c0(param_1);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar5 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0215246c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar1);
  do {
    if (*plVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar1);
        while (*plVar5 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0215246c;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0215246c:
  FUN_02152834(param_1);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  nn::os::SignalLightEvent(pLVar1);
  return 1;
}


