/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011e465c; name: FUN_011e465c
 */


void FUN_011e465c(long param_1,undefined4 param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  long local_48;
  undefined1 auStack_28 [8];
  
  plVar1 = (long *)(param_1 + 0x200);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x208) == 0) {
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar9;
      *(undefined8 *)(param_1 + 0x208) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_011e469c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x210));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x208) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x210));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x208) == 0) {
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar9;
            *(undefined8 *)(param_1 + 0x208) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_011e469c;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar9;
      *(undefined8 *)(param_1 + 0x208) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_011e469c:
  lVar9 = DAT_0485a0e8;
  if (*(long *)(param_1 + 0x130) == 0) {
    if (*(int *)(param_1 + 0x230) == 2) {
      FUN_011eb858(DAT_0485a0e8,param_1 + 0x128);
    }
    local_48 = lVar9;
    lVar9 = FUN_011e3f20(auStack_28,*(undefined8 *)(lVar9 + 8),&local_48,lVar9 + 0x30);
    if (lVar9 != 0) {
      piVar2 = (int *)(lVar9 + 0x28);
      do {
        iVar8 = *piVar2;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = iVar8 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar8 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar10 = *(long **)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x130) = 0;
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 5;
      do {
        lVar6 = *plVar3;
        iVar8 = (int)lVar6 + -1;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar11) {
          *(int *)plVar3 = iVar8;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    *(long *)(param_1 + 0x130) = lVar9;
  }
  *(undefined4 *)(param_1 + 0x228) = param_2;
  do {
    lVar9 = *plVar1;
    lVar6 = *(long *)(param_1 + 0x208);
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x208) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar4 = *plVar1;
    lVar5 = *(long *)(param_1 + 0x208);
    if (lVar4 != lVar9 || lVar5 != lVar6) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_011e4730;
    }
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x204) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar11 = true;
LAB_011e4730:
  if (!bVar11) {
    do {
      lVar9 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x208);
      if (lVar9 != lVar4 || lVar6 != lVar5) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x011e4884;
      }
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x204) = lVar5;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar11 = true;
joined_r0x011e4884:
    if (!bVar11) {
      do {
        lVar4 = *plVar1;
        lVar5 = *(long *)(param_1 + 0x208);
        if (lVar4 != lVar9 || lVar5 != lVar6) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar9 = lVar4;
          lVar6 = lVar5;
          goto joined_r0x011e4884;
        }
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x204) = lVar6;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar11 = true;
      lVar9 = lVar4;
      lVar6 = lVar5;
      goto joined_r0x011e4884;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x210));
  FUN_011e48c4(param_1,*(int *)(param_1 + 0x228) != 0);
  return;
}


