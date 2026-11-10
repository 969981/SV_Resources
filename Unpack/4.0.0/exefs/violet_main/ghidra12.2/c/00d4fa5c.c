/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d4fa5c; name: FUN_00d4fa5c
 */


undefined * FUN_00d4fa5c(long param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  
  plVar4 = (long *)(param_1 + 0x140);
  lVar7 = *plVar4;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar7) {
    bVar6 = true;
LAB_00d4faa8:
    if ((ulong)(long)(int)param_2 < *(ulong *)(param_1 + 0x1b0)) {
      plVar4 = *(long **)(param_1 + 0x188);
      if ((0 < (int)param_2) && (plVar4 = (long *)*plVar4, 1 < param_2)) {
        lVar3 = (ulong)param_2 + 1;
        do {
          plVar4 = (long *)*plVar4;
          lVar3 = lVar3 + -1;
        } while (2 < lVar3);
      }
      puVar5 = (undefined *)(plVar4 + 2);
    }
    else if (((*PTR_DAT_047d3e28 & 1) == 0) &&
            (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), puVar5 = PTR_DAT_047d3e30, iVar2 != 0))
    {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    else {
      puVar5 = PTR_DAT_047d3e30;
    }
    if (!bVar6) {
      *(undefined8 *)(param_1 + 0x140) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x148));
    }
    return puVar5;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar4 == 0) {
    cVar1 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar6) {
      *plVar4 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00d4faa4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
  do {
    if (*plVar4 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
        while (*plVar4 == 0) {
          cVar1 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar6) {
            *plVar4 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00d4faa4;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar6) {
      *plVar4 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00d4faa4:
  bVar6 = false;
  goto LAB_00d4faa8;
}


