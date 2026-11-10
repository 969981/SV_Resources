/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f83b9c; name: FUN_00f83b9c
 */


void FUN_00f83b9c(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  
  plVar1 = (long *)(param_2 + 0x40);
  lVar9 = *plVar1;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar9) {
    bVar8 = true;
LAB_00f83bec:
    if (param_3 < (ulong)(*(long *)(param_2 + 0x170) - *(long *)(param_2 + 0x168) >> 3)) {
      plVar7 = *(long **)(*(long *)(*(long *)(param_2 + 0x168) + param_3 * 8) + 0x40);
      plVar1 = (long *)PTR_DAT_047d8b70;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 6;
      }
      plVar2 = (long *)PTR_PTR_047d4508;
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 7;
      }
      lVar6 = *plVar2;
      if (plVar7 == (long *)0x0) {
        lVar9 = 0;
      }
      else {
        lVar9 = plVar7[8];
      }
      *param_1 = *plVar1;
      param_1[1] = lVar6;
      param_1[2] = lVar9;
      param_1[3] = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      param_1[3] = (long)plVar7;
    }
    else {
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      puVar4 = PTR_DAT_047d3e30;
      lVar6 = *(long *)(PTR_DAT_047d3e30 + 8);
      *param_1 = *(long *)PTR_DAT_047d3e30;
      param_1[1] = lVar6;
      plVar1 = *(long **)(puVar4 + 0x18);
      param_1[2] = *(long *)(puVar4 + 0x10);
      param_1[3] = (long)plVar1;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
      }
    }
    if (bVar8) {
      return;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x48));
    return;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00f83be8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x48));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x48));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00f83be8;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00f83be8:
  bVar8 = false;
  goto LAB_00f83bec;
}


