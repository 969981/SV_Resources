/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012d0844; name: FUN_012d0844
 */


long FUN_012d0844(undefined8 param_1)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_48 [8];
  
  FUN_012d0e18();
  puVar6 = PTR_DAT_047d91d0;
  if (((*PTR_DAT_047d91d0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d91d0), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047dcf90,PTR_DAT_047d91d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d91d0);
  }
  puVar8 = PTR_DAT_047d91e0;
  puVar7 = PTR_DAT_047d91d8;
  uVar10 = *(undefined8 *)PTR_DAT_047d91d8;
  *(undefined8 *)PTR_DAT_047d91e0 = uVar10;
  uVar10 = FUN_012d0ca4(uVar10,0);
  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d91d0), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047dcf90,PTR_DAT_047d91d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d91d0);
  }
  uVar11 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar11;
  lVar12 = FUN_012d0ca4(uVar11,1);
  plVar1 = (long *)(lVar12 + 0x1d0);
  lVar13 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_012d08d4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1d8));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1d8));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012d08d4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012d08d4:
  FUN_00e220f4(lVar12,uVar10,0);
  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d91d0), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047dcf90,PTR_DAT_047d91d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d91d0);
  }
  uVar10 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar10;
  lVar13 = FUN_012d0ca4(uVar10,2);
  FUN_00e220f4(lVar12,0,lVar13);
  plVar1 = (long *)(lVar13 + 0x1d0);
  lVar14 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_012d092c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x1d8));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x1d8));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar14;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012d092c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012d092c:
  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d91d0), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047dcf90,PTR_DAT_047d91d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d91d0);
  }
  uVar10 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar10;
  lVar14 = FUN_012d0ca4(uVar10,3);
  FUN_00e220f4(lVar13,0,lVar14);
  plVar1 = (long *)(lVar14 + 0x1d0);
  lVar15 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_012d0974;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x1d8));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x1d8));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012d0974;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012d0974:
  *(undefined8 *)(lVar14 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x1d8));
  *(undefined8 *)(lVar13 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x1d8));
  *(undefined8 *)(lVar12 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x1d8));
  lVar12 = FUN_012e9d6c(auStack_48,param_1);
  if (lVar12 != 0) {
    lVar13 = *(long *)(lVar12 + 0x30);
    if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar13 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar10;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar1 = DAT_04865f20;
  DAT_04865f20 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    lVar13 = plVar1[6];
    psVar2 = (short *)(lVar13 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar1 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  DAT_04865f20 = (long *)lVar12;
  return lVar12;
}


