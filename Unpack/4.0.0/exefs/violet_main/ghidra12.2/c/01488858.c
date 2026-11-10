/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01488858; name: FUN_01488858
 */


void FUN_01488858(undefined8 *param_1)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  undefined *local_38;
  
  FUN_00d1a240(param_1,0x800b8180);
  *param_1 = &DAT_04595f00;
  param_1[4] = &PTR_LAB_045960a0;
  param_1[5] = &DAT_045961c8;
  param_1[6] = &PTR_LAB_04596220;
  plVar9 = param_1 + 7;
  *plVar9 = (long)&PTR_LAB_04596248;
  param_1[0x24] = &PTR_LAB_04596280;
  param_1[0x25] = 0;
  *(undefined4 *)((long)param_1 + 0x13c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x26,0,1);
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x2f] = param_1[1];
  param_1[0x30] = 0x1ffffffffffffff;
  param_1[0x31] = 0;
  param_1[0x35] = param_1[1];
  param_1[0x36] = 0x1ffffffffffffff;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  *(undefined1 *)(param_1 + 0x9c) = 1;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  if ((*(char *)(param_1 + 0xb) != '\0') || (*(char *)((long)param_1 + 0x59) != '\0')) {
    uVar1 = *(undefined2 *)(param_1 + 0xb);
    *(undefined2 *)(param_1 + 0xb) = 0;
    if (param_1[9] != 0) {
      FUN_00c6a584(param_1[9],plVar9);
    }
    (**(code **)(*plVar9 + 0x20))(plVar9,uVar1);
  }
  if (((*PTR_DAT_047d94e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d94e8), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047dcfc0,PTR_DAT_047d94f0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d94e8);
  }
  lVar10 = *(long *)PTR_DAT_047d94f0;
  *(long *)PTR_DAT_047d94f8 = lVar10;
  do {
    if (DAT_04840fe0 != '\0') {
      ClearExclusiveLocal();
      return;
    }
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(0x4840fe0,0x10);
    if (bVar8) {
      DAT_04840fe0 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar9 = (long *)(lVar10 + 0x78);
  lVar7 = *plVar9;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar7) {
    plVar9 = (long *)0x0;
    bVar8 = true;
LAB_01488a0c:
    local_38 = PTR_DAT_047dcfb8;
    plVar5 = (long *)FUN_0108fedc(lVar10 + 0x90,&local_38);
    if (*plVar5 == 0) {
      pcVar6 = (code *)plVar5[1];
      if (pcVar6 != (code *)0x0) {
        plVar5[2] = 0;
        plVar5[3] = 0;
        *plVar5 = 0;
        plVar5[1] = 0;
        (*pcVar6)(plVar5 + 4);
      }
      *plVar5 = (long)&LAB_01453f78;
      plVar5[1] = (long)&LAB_02b2ceb4;
      plVar5[2] = (long)&LAB_02b2ceb8;
      plVar5[3] = (long)&LAB_02b2cec4;
    }
    if (!bVar8) {
      *plVar9 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
    }
    return;
  }
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar8) {
      *plVar9 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01488a08;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x80));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x80));
        while (*plVar9 == 0) {
          cVar2 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar8) {
            *plVar9 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01488a08;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar8) {
      *plVar9 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01488a08:
  bVar8 = false;
  goto LAB_01488a0c;
}


