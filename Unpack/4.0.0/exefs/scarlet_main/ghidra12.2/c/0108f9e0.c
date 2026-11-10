/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0108f9e0; name: FUN_0108f9e0
 */


void FUN_0108f9e0(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  bool bVar10;
  long *plVar11;
  long lVar12;
  undefined *local_38;
  
  if (((*PTR_DAT_047d94e8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d94e8), iVar5 != 0))
  {
    FUN_00100190(&LAB_00aa3b14,PTR_DAT_047d94f0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d94e8);
  }
  lVar12 = *(long *)PTR_DAT_047d94f0;
  *(long *)PTR_DAT_047d94f8 = lVar12;
  puVar2 = PTR_DAT_047d9500;
  do {
    if (*puVar2 != '\0') {
      ClearExclusiveLocal();
      return;
    }
    cVar1 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar10) {
      *puVar2 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar11 = (long *)(lVar12 + 0x78);
  lVar9 = *plVar11;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar9) {
    plVar11 = (long *)0x0;
    bVar10 = true;
LAB_0108fa68:
    local_38 = PTR_DAT_047d9508;
    plVar7 = (long *)FUN_0108fedc(lVar12 + 0x90,&local_38);
    if (*plVar7 == 0) {
      pcVar8 = (code *)plVar7[1];
      if (pcVar8 != (code *)0x0) {
        plVar7[2] = 0;
        plVar7[3] = 0;
        *plVar7 = 0;
        plVar7[1] = 0;
        (*pcVar8)(plVar7 + 4);
      }
      puVar4 = PTR_LAB_047d9528;
      puVar3 = PTR_LAB_047d9520;
      puVar2 = PTR_LAB_047d9518;
      *plVar7 = (long)PTR_LAB_047d9510;
      plVar7[1] = (long)puVar2;
      plVar7[2] = (long)puVar3;
      plVar7[3] = (long)puVar4;
    }
    if (!bVar10) {
      *plVar11 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar11 + 1));
    }
    return;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar11 == 0) {
    cVar1 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar10) {
      *plVar11 = lVar6;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0108fa64;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x80));
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x80));
        while (*plVar11 == 0) {
          cVar1 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar10) {
            *plVar11 = lVar6;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_0108fa64;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar10) {
      *plVar11 = lVar6;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_0108fa64:
  bVar10 = false;
  goto LAB_0108fa68;
}


