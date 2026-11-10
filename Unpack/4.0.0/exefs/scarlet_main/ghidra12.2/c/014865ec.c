/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014865ec; name: FUN_014865ec
 */


void FUN_014865ec(undefined8 *param_1)

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
  
  FUN_00d1a240(param_1,0x800b8080);
  *param_1 = &PTR_FUN_0459b060;
  param_1[4] = &PTR_LAB_0459b1c0;
  param_1[5] = &DAT_0459b2e8;
  param_1[6] = &PTR_LAB_0459b340;
  plVar9 = param_1 + 7;
  *plVar9 = (long)&PTR_LAB_0459b368;
  param_1[0x24] = 0;
  *(undefined4 *)((long)param_1 + 0x134) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x25,0,1);
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = &DAT_cbf29ce484222645;
  param_1[0x2b] = &DAT_03c886bc;
  param_1[0x2e] = &DAT_cbf29ce484222645;
  param_1[0x2f] = &DAT_03c886bc;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
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
    if (DAT_04841488 != '\0') {
      ClearExclusiveLocal();
      return;
    }
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(0x4841488,0x10);
    if (bVar8) {
      DAT_04841488 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar9 = (long *)(lVar10 + 0x78);
  lVar7 = *plVar9;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar7) {
    plVar9 = (long *)0x0;
    bVar8 = true;
LAB_01486740:
    local_38 = PTR_DAT_047dcfe8;
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
      *plVar5 = (long)&LAB_02b39900;
      plVar5[1] = (long)&LAB_02b39920;
      plVar5[2] = (long)&LAB_02b39924;
      plVar5[3] = (long)&LAB_02b39930;
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
    if (cVar2 == '\0') goto LAB_0148673c;
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
          if (cVar2 == '\0') goto LAB_0148673c;
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
LAB_0148673c:
  bVar8 = false;
  goto LAB_01486740;
}


