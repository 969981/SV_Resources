/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012cf898; name: FUN_012cf898
 */


void FUN_012cf898(undefined8 *param_1)

{
  LightEventType *pLVar1;
  short *psVar2;
  long *plVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  bool bVar14;
  long *plVar15;
  long local_78;
  long *local_70;
  char local_68;
  undefined1 auStack_60 [8];
  undefined8 *local_58;
  char local_50;
  undefined1 auStack_48 [8];
  
  FUN_012d026c();
  *param_1 = &PTR_FUN_045ebbf8;
  param_1[4] = &PTR_LAB_045ebc28;
  FUN_012cfdd8(param_1 + 5);
  FUN_012cfe20(param_1 + 0xf);
  bVar14 = true;
  plVar15 = param_1 + 0x1f;
  *plVar15 = 0;
  pLVar1 = (LightEventType *)(param_1 + 0x20);
  *(undefined4 *)((long)param_1 + 0x10c) = 1;
  nn::os::InitializeLightEvent(pLVar1,0,1);
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  lVar13 = *plVar15;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar13) {
    lVar8 = nn::os::GetCurrentThread();
LAB_012cf920:
    if (*plVar15 == 0) goto code_r0x012cf928;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar1);
    do {
      if (*plVar15 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          while (*plVar15 == 0) {
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar14) {
              *plVar15 = lVar8;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_012cf930;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar14) {
        *plVar15 = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_012cf930:
    bVar14 = false;
    goto LAB_012cf938;
  }
  plVar15 = (long *)0x0;
LAB_012cf938:
  local_78 = param_1[1];
  FUN_012cfce8(param_1 + 0x22,&local_78);
  local_78 = param_1[1];
  FUN_012cfce8(param_1 + 0x22,&local_78);
  local_78 = 0;
  plVar9 = (long *)FUN_0145b26c(auStack_48,param_1[1],&local_78);
  if (plVar9 != (long *)0x0) {
    FUN_00f1b0c8(plVar9);
    lVar8 = plVar9[6];
    if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar11;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar3 = param_1 + 0x4d;
  plVar10 = (long *)*plVar3;
  *plVar3 = 0;
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *plVar3 = (long)plVar9;
  plVar10 = plVar9;
  if ((long *)plVar9[0x36] != (long *)0x0) {
    plVar10 = (long *)plVar9[0x36];
  }
  *(undefined4 *)(plVar9 + 0x6e) = 0;
  if (plVar10 != plVar9) {
    (**(code **)(*plVar10 + 0x88))(plVar10,0);
  }
  plVar10 = plVar9;
  if ((long *)plVar9[0x35] != (long *)0x0) {
    plVar10 = (long *)plVar9[0x35];
  }
  if (plVar10 != plVar9) {
    (**(code **)(*plVar10 + 0x88))(plVar10,0);
  }
  lVar8 = param_1[0x4d];
  pcVar12 = *(code **)(lVar8 + 0x388);
  if (pcVar12 != (code *)0x0) {
    *(undefined8 *)(lVar8 + 0x390) = 0;
    *(undefined8 *)(lVar8 + 0x398) = 0;
    *(undefined8 *)(lVar8 + 0x380) = 0;
    *(undefined8 *)(lVar8 + 0x388) = 0;
    (*pcVar12)(lVar8 + 0x3a0);
  }
  *(undefined1 **)(lVar8 + 0x380) = &LAB_00c63e9c;
  *(undefined1 **)(lVar8 + 0x388) = &LAB_02dfdf60;
  *(undefined1 **)(lVar8 + 0x390) = &LAB_02dfdf64;
  *(undefined8 **)(lVar8 + 0x3a0) = param_1;
  *(undefined1 **)(lVar8 + 0x398) = &LAB_02dfdf70;
  if (((*PTR_DAT_047d91d0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d91d0), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047dcf90,PTR_DAT_047d91d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d91d0);
  }
  lVar8 = *(long *)PTR_DAT_047d91d8;
  *(long *)PTR_DAT_047d91e0 = lVar8;
  lVar13 = *(long *)(lVar8 + 0x40);
  local_70 = (undefined8 *)0x0;
  local_68 = '\0';
  plVar9 = (long *)(lVar13 + 0x1d0);
  local_78 = lVar13;
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_012cfa9c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x1d8));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x1d8));
        while (*plVar9 == 0) {
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_012cfa9c;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_012cfa9c:
  if (local_68 != '\0') {
    *local_70 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_70 + 1));
  }
  local_68 = '\x01';
  local_70 = plVar9;
  FUN_012d01a0(auStack_60,&local_78,plVar3);
  if (local_50 != '\0') {
    *local_58 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_58 + 1));
    if (local_68 == '\0') goto LAB_012cfaf0;
    plVar9 = local_70;
  }
  *plVar9 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
LAB_012cfaf0:
  if (!bVar14) {
    *plVar15 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
  }
  return;
code_r0x012cf928:
  cVar6 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar14) {
    *plVar15 = lVar8;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_012cf930;
  goto LAB_012cf920;
}


