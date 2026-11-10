/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011e5718; name: FUN_011e5718
 */


void FUN_011e5718(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  short *psVar4;
  long lVar5;
  long lVar6;
  short sVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  char *pcVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  bool bVar17;
  long lVar18;
  long local_50;
  undefined1 auStack_48 [8];
  
  plVar1 = (long *)(param_2 + 0x200);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_2 + 0x208) == 0) {
    cVar8 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar17) {
      *plVar1 = lVar10;
      *(undefined8 *)(param_2 + 0x208) = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_011e5760;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x210));
  do {
    if (*plVar1 != 0 || *(long *)(param_2 + 0x208) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x210));
        while (*plVar1 == 0 && *(long *)(param_2 + 0x208) == 0) {
          cVar8 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar17) {
            *plVar1 = lVar10;
            *(undefined8 *)(param_2 + 0x208) = 0;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_011e5760;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar17) {
      *plVar1 = lVar10;
      *(undefined8 *)(param_2 + 0x208) = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_011e5760:
  lVar10 = DAT_0485a0e8;
  if (*(long *)(param_2 + 0x130) == 0) {
    if (*(int *)(param_2 + 0x230) == 2) {
      FUN_011eb858(DAT_0485a0e8,param_2 + 0x128);
    }
    local_50 = lVar10;
    lVar10 = FUN_011e3f20(auStack_48,*(undefined8 *)(lVar10 + 8),&local_50,lVar10 + 0x30);
    if (lVar10 != 0) {
      piVar2 = (int *)(lVar10 + 0x28);
      do {
        iVar9 = *piVar2;
        cVar8 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar17) {
          *piVar2 = iVar9 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar9 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar11 = *(long **)(param_2 + 0x130);
    *(undefined8 *)(param_2 + 0x130) = 0;
    if (plVar11 != (long *)0x0) {
      plVar3 = plVar11 + 5;
      do {
        lVar18 = *plVar3;
        iVar9 = (int)lVar18 + -1;
        cVar8 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar17) {
          *(int *)plVar3 = iVar9;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
      else if ((int)lVar18 == 0) {
        pcVar12 = "count != std::numeric_limits<uint32_t>::max()";
        pcVar14 = "DecrementReferenceInternal";
        pcVar15 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        pcVar16 = "Reference counter underflows.";
        goto LAB_011e5948;
      }
    }
    *(long *)(param_2 + 0x130) = lVar10;
  }
  else {
    FUN_011e7d90(*(long *)(param_2 + 0x130),*(undefined1 *)(param_2 + 0x22c));
  }
  if (*(char *)(param_2 + 0x22c) != '\0') {
    FUN_011f075c(param_2 + 0x1b8,param_2 + 0x138);
  }
  FUN_011efbc4(param_2 + 0x138);
  FUN_011e7f3c(param_2 + 0x140,param_3 + 8);
  lVar10 = *(long *)(param_3 + 0x18);
  if (lVar10 != 0) {
    lVar18 = *(long *)(lVar10 + 0x30);
    if (*(long *)(lVar18 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar4 = (short *)(lVar18 + 0x1a);
    do {
      sVar7 = *psVar4;
      cVar8 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar17) {
        *psVar4 = sVar7 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar7 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar13;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar7 == -1) {
      pcVar12 = "count != 0";
      pcVar14 = "AddReference";
      pcVar15 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar16 = "Reference counter overflows.";
LAB_011e5948:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar12,pcVar14,pcVar15,0x58,pcVar16);
    }
  }
  plVar11 = *(long **)(param_2 + 0x150);
  *(long *)(param_2 + 0x150) = lVar10;
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[6];
    psVar4 = (short *)(lVar10 + 0x1a);
    do {
      sVar7 = *psVar4;
      cVar8 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar17) {
        *psVar4 = sVar7 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_00cef9d0(param_2 + 0x158,param_3 + 0x20);
  FUN_00ceffd4(param_2 + 0x168,param_3 + 0x30);
  FUN_011e5ae0(param_1,param_2);
  do {
    lVar10 = *plVar1;
    lVar18 = *(long *)(param_2 + 0x208);
    cVar8 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar17) {
      *plVar1 = lVar10;
      *(long *)(param_2 + 0x208) = lVar18;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    lVar5 = *plVar1;
    lVar6 = *(long *)(param_2 + 0x208);
    if (lVar5 != lVar10 || lVar6 != lVar18) {
      bVar17 = false;
      ClearExclusiveLocal();
      goto LAB_011e584c;
    }
    cVar8 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar17) {
      *plVar1 = 0;
      *(long *)(param_2 + 0x204) = lVar18;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar17 = true;
LAB_011e584c:
  if (!bVar17) {
    do {
      lVar10 = *plVar1;
      lVar18 = *(long *)(param_2 + 0x208);
      if (lVar10 != lVar5 || lVar18 != lVar6) {
        bVar17 = false;
        ClearExclusiveLocal();
        goto joined_r0x011e5a80;
      }
      cVar8 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar17) {
        *plVar1 = 0;
        *(long *)(param_2 + 0x204) = lVar6;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar17 = true;
joined_r0x011e5a80:
    if (!bVar17) {
      do {
        lVar5 = *plVar1;
        lVar6 = *(long *)(param_2 + 0x208);
        if (lVar5 != lVar10 || lVar6 != lVar18) {
          bVar17 = false;
          ClearExclusiveLocal();
          lVar10 = lVar5;
          lVar18 = lVar6;
          goto joined_r0x011e5a80;
        }
        cVar8 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar17) {
          *plVar1 = 0;
          *(long *)(param_2 + 0x204) = lVar18;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar17 = true;
      lVar10 = lVar5;
      lVar18 = lVar6;
      goto joined_r0x011e5a80;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x210));
  return;
}


