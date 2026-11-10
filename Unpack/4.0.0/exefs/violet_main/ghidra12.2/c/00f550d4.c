/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f550d4; name: FUN_00f550d4
 */


void FUN_00f550d4(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  undefined *local_38;
  
  if (((*PTR_DAT_047d94e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d94e8), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047dcfc0,PTR_DAT_047d94f0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d94e8);
  }
  lVar9 = *(long *)PTR_DAT_047d94f0;
  *(long *)PTR_DAT_047d94f8 = lVar9;
  do {
    if (DAT_0485dc5e != '\0') {
      ClearExclusiveLocal();
      return;
    }
    cVar1 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x485dc5e,0x10);
    if (bVar7) {
      DAT_0485dc5e = '\x01';
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar8 = (long *)(lVar9 + 0x78);
  lVar6 = *plVar8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar6) {
    plVar8 = (long *)0x0;
    bVar7 = true;
LAB_00f5515c:
    local_38 = PTR_DAT_047e2010;
    plVar4 = (long *)FUN_0108fedc(lVar9 + 0x90,&local_38);
    if (*plVar4 == 0) {
      pcVar5 = (code *)plVar4[1];
      if (pcVar5 != (code *)0x0) {
        plVar4[2] = 0;
        plVar4[3] = 0;
        *plVar4 = 0;
        plVar4[1] = 0;
        (*pcVar5)(plVar4 + 4);
      }
      *plVar4 = (long)&LAB_02bd93a4;
      plVar4[1] = (long)&LAB_02bd93e8;
      plVar4[2] = (long)&LAB_02bd93ec;
      plVar4[3] = (long)&LAB_02bd93f8;
    }
    if (!bVar7) {
      *plVar8 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
    }
    return;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar1 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar7) {
      *plVar8 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00f55158;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x80));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x80));
        while (*plVar8 == 0) {
          cVar1 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar7) {
            *plVar8 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00f55158;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar7) {
      *plVar8 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00f55158:
  bVar7 = false;
  goto LAB_00f5515c;
}


