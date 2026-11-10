/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01408558; name: FUN_01408558
 */


void FUN_01408558(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long *plVar15;
  long *plVar16;
  bool bVar17;
  long *plVar18;
  long *local_60;
  long *local_58;
  long *local_38;
  
  if (param_1[0x1d] == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1[0x1d] + 0x48);
  }
  lVar8 = FUN_00f3be00(uVar7);
  if (lVar8 != 0) {
    plVar15 = (long *)(lVar8 + 0x1d0);
    lVar9 = nn::os::GetCurrentThread();
LAB_0140859c:
    if (*plVar15 == 0) goto code_r0x014085a4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x1d8));
    do {
      if (*plVar15 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x1d8));
          while (*plVar15 == 0) {
            cVar4 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar17) {
              *plVar15 = lVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_014085ac;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar17) {
        *plVar15 = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_014085ac:
    if (((*PTR_DAT_047d8d80 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047dcf10,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8d80);
    }
    lVar9 = *(long *)PTR_DAT_047d8d88;
    *(long *)PTR_DAT_047d8d90 = lVar9;
    FUN_00e220f4(lVar8,0,*(undefined8 *)(lVar9 + 0x28));
    *(undefined8 *)(lVar8 + 0x1d0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x1d8));
  }
  FUN_00c9e664(&local_60,param_1 + 0x1d);
  if (local_58 == (long *)0x0) {
    plVar15 = (long *)0x0;
  }
  else {
    plVar15 = (long *)local_58[9];
  }
  plVar18 = (long *)param_1[1];
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar18;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x158,8);
  if (plVar10 == (long *)0x0) {
    (**(code **)(*plVar18 + 0xe8))(plVar18);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_00d1a240(plVar10,0x8009809c);
  puVar5 = PTR_DAT_047dd4b0;
  *plVar10 = (long)(PTR_DAT_047dd4b0 + 0x10);
  plVar16 = plVar10 + 4;
  *plVar16 = (long)(puVar5 + 0x160);
  plVar10[5] = (long)(puVar5 + 0x288);
  plVar10[6] = (long)(puVar5 + 0x2e0);
  plVar10[7] = (long)(puVar5 + 0x308);
  *(undefined4 *)(plVar10 + 0x24) = 0;
  plVar10[0x25] = 0;
  nn::os::InitializeMutex((MutexType *)(plVar10 + 0x26),false,0);
  *(undefined2 *)(plVar10 + 0x2a) = 1;
  plVar10[1] = (long)plVar18;
  plVar10[2] = (long)plVar10;
  *(undefined4 *)((long)plVar10 + 0x154) = 0x42a00000;
  *(undefined4 *)(plVar10 + 3) = 0x80158;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  lVar8 = plVar10[0x13];
  if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar4 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar17) {
      *psVar1 = sVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar3 == 0) {
    uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
    *(undefined8 *)(lVar8 + 8) = uVar7;
    *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
  }
  else if (sVar3 == -1) {
    pcVar11 = "count != 0";
    pcVar12 = "AddReference";
    pcVar13 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar14 = "Reference counter overflows.";
    goto LAB_01408bf0;
  }
  (**(code **)(plVar10[4] + 0xe8))(plVar16,plVar15);
  (**(code **)(plVar10[4] + 0x68))(plVar16);
  local_38 = plVar10;
  FUN_00df8c30(plVar15 + 0x21,&local_38);
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[0x13];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar17) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*plVar15 + 0x100))(plVar15,plVar16);
  plVar18 = plVar15 + 0x88;
  lVar9 = *plVar18;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar9) {
    lVar8 = nn::os::GetCurrentThread();
LAB_01408788:
    if (*plVar18 == 0) goto code_r0x01408790;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar15 + 0x89));
    do {
      if (*plVar18 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar15 + 0x89));
          while (*plVar18 == 0) {
            cVar4 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar17) {
              *plVar18 = lVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01408798;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar17) {
        *plVar18 = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01408798:
    bVar17 = false;
    goto LAB_0140879c;
  }
  plVar18 = (long *)0x0;
  bVar17 = true;
LAB_0140879c:
  if ((*(byte *)(plVar15 + 0x8b) >> 2 & 1) == 0) {
    FUN_00d37964(plVar15,0,0);
  }
  else {
    (**(code **)(*plVar16 + 0xf8))(plVar16);
  }
  if (!bVar17) {
    *plVar18 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
  }
  if (local_58 != (long *)0x0) {
    plVar15 = local_58 + 5;
    do {
      lVar8 = *plVar15;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar17) {
        *(int *)plVar15 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
      pcVar11 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar12 = "DecrementReferenceInternal";
      pcVar13 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar14 = "Reference counter underflows.";
      goto LAB_01408bf0;
    }
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x60))();
  }
  if ((int)plVar10[0x24] == 0) {
    lVar8 = *(long *)(param_1[0x26] + 0x70);
    if (lVar8 != 0) {
      piVar2 = (int *)(lVar8 + 0x28);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar17) {
          *piVar2 = iVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar15 = (long *)plVar10[0x25];
    plVar10[0x25] = lVar8;
    if (plVar15 != (long *)0x0) {
      plVar18 = plVar15 + 5;
      do {
        lVar8 = *plVar18;
        iVar6 = (int)lVar8 + -1;
        cVar4 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar17) {
          *(int *)plVar18 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
      else if ((int)lVar8 == 0) {
        pcVar11 = "count != std::numeric_limits<uint32_t>::max()";
        pcVar12 = "DecrementReferenceInternal";
        pcVar13 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        pcVar14 = "Reference counter underflows.";
LAB_01408bf0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl(pcVar11,pcVar12,pcVar13,0x58,pcVar14);
      }
    }
    *(undefined4 *)(plVar10 + 0x24) = 1;
  }
  local_60 = *(long **)(*(long *)(param_1[0x1d] + 0x48) + 0x460);
  plVar15 = (long *)FUN_01408c20(&local_38,param_1[1],&local_60);
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x58))(plVar15);
  }
  plVar18 = (long *)param_1[0x27];
  param_1[0x27] = 0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x60))();
  }
  param_1[0x27] = (long)plVar15;
  plVar18 = (long *)plVar15[0x70];
  plVar15[0x6d] = 0x38a81037838c3183;
  plVar15[0x6e] = (long)"DetailObject";
  plVar15[0x6f] = 0xc;
  plVar15[0x70] = 0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))();
  }
  if (param_1[0x1d] == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1[0x1d] + 0x48);
  }
  FUN_00dfba48(param_1[0x27],uVar7);
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  (**(code **)(*param_1 + 0x70))(param_1,0);
  return;
code_r0x014085a4:
  cVar4 = '\x01';
  bVar17 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar17) {
    *plVar15 = lVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_014085ac;
  goto LAB_0140859c;
code_r0x01408790:
  cVar4 = '\x01';
  bVar17 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar17) {
    *plVar18 = lVar8;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01408798;
  goto LAB_01408788;
}


