/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012b76f4; name: FUN_012b76f4
 */


void FUN_012b76f4(long param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 local_70 [2];
  int iStack_5c;
  long *local_58 [3];
  CalendarTime aCStack_40 [8];
  PosixTime aPStack_38 [8];
  
  uVar7 = nn::time::IsInitialized();
  if ((uVar7 & 1) == 0) {
    nn::time::Initialize();
  }
  FUN_012b7a54();
  nn::time::StandardUserSystemClock::GetCurrentTime(aPStack_38);
  nn::time::ToCalendarTime(aCStack_40,(CalendarAdditionalInfo *)local_58,aPStack_38);
  nn::time::ToPosixTime(&iStack_5c,(PosixTime *)local_70,2,aCStack_40,(TimeZoneRule *)&DAT_048660c0)
  ;
  *(undefined8 *)(param_1 + 0x28) = local_70[0];
  *(undefined1 *)(param_1 + 0x30) = 1;
  local_58[0] = (long *)0x0;
  plVar8 = (long *)FUN_0145b26c(local_70,param_2,local_58);
  if (plVar8 != (long *)0x0) {
    FUN_00f1b0c8(plVar8);
    lVar13 = plVar8[6];
    if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar10;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar9 = *(long **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar9 != (long *)0x0) {
    lVar13 = plVar9[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_012b7980:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(long **)(param_1 + 0x48) = plVar8;
  (**(code **)(*plVar8 + 0x88))(plVar8,0);
  lVar13 = *(long *)(param_1 + 0x48);
  pcVar11 = *(code **)(lVar13 + 0x388);
  if (pcVar11 != (code *)0x0) {
    *(undefined8 *)(lVar13 + 0x390) = 0;
    *(undefined8 *)(lVar13 + 0x398) = 0;
    *(undefined8 *)(lVar13 + 0x380) = 0;
    *(undefined8 *)(lVar13 + 0x388) = 0;
    (*pcVar11)(lVar13 + 0x3a0);
  }
  *(undefined1 **)(lVar13 + 0x3a8) = &LAB_02b79fe0;
  *(long *)(lVar13 + 0x3a0) = param_1;
  *(undefined8 *)(lVar13 + 0x3b0) = 0;
  *(undefined1 **)(lVar13 + 0x380) = &LAB_02b7a104;
  *(undefined1 **)(lVar13 + 0x388) = &LAB_02b7a120;
  puVar5 = PTR_DAT_047d6c20;
  *(undefined1 **)(lVar13 + 0x390) = &LAB_02b7a124;
  *(undefined1 **)(lVar13 + 0x398) = &LAB_02b7a138;
  if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar6 != 0)) {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  *(undefined8 *)PTR_DAT_047d6c30 = *(undefined8 *)PTR_DAT_047d6c28;
  FUN_01293e44(local_58);
  lVar12 = *(long *)(param_1 + 0x48);
  plVar8 = (long *)(lVar12 + 0x1d0);
  lVar13 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_012b788c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1d8));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1d8));
        while (*plVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_012b788c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_012b788c:
  FUN_00e220f4(lVar12,0,local_58[0]);
  *(undefined8 *)(lVar12 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x1d8));
  if (local_58[0] == (long *)0x0) {
    return;
  }
  lVar13 = local_58[0][6];
  psVar1 = (short *)(lVar13 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 1) {
    *(undefined8 *)(lVar13 + 0x10) = 0;
    (**(code **)(*local_58[0] + 0x50))();
    return;
  }
  if (sVar2 != 0) {
    return;
  }
  goto LAB_012b7980;
}


