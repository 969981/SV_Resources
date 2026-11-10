/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010411a8; name: FUN_010411a8
 */


void FUN_010411a8(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *local_48;
  long *local_28;
  
  plVar7 = (long *)(param_1 + 0x140);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_010411e4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
        while (*plVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_010411e4;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_010411e4:
  plVar7 = (long *)(param_1 + 0x158);
  lVar5 = nn::os::GetCurrentThread();
  do {
    if (*plVar7 != 0) {
      bVar3 = false;
      ClearExclusiveLocal();
      goto LAB_01041250;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar3 = true;
LAB_01041250:
  plVar7 = *(long **)(param_1 + 0x178);
  plVar1 = *(long **)(param_1 + 0x180);
  if (plVar7 == plVar1) {
LAB_01041270:
    if (plVar7 == plVar1) goto LAB_01041340;
    plVar7 = (long *)*plVar7;
  }
  else {
    do {
      if (*(long *)(*plVar7 + 0x1d0) == *param_2) goto LAB_01041270;
      plVar7 = plVar7 + 1;
    } while (plVar1 != plVar7);
LAB_01041340:
    plVar7 = (long *)0x0;
  }
  if (bVar3) {
    local_28 = plVar7;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) {
LAB_010413ec:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      if (plVar7 != (long *)0x0) {
        FUN_01041cd8(*(undefined8 *)(param_1 + 0x170),plVar7 + 0x3a);
        uVar6 = FUN_010415b0(*(undefined8 *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x180),
                             &local_28);
        FUN_01041414(param_1 + 0x178,uVar6,*(undefined8 *)(param_1 + 0x180));
        if (local_28 != (long *)0x0) {
          plVar7 = local_28 + 5;
          do {
            lVar5 = *plVar7;
            iVar4 = (int)lVar5 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *(int *)plVar7 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*local_28 + 0x10))();
          }
          else if ((int)lVar5 == 0) goto LAB_010413a4;
        }
      }
    }
    *(undefined8 *)(param_1 + 0x158) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x160));
  }
  else {
    *(undefined1 *)(param_1 + 0x248) = 1;
    local_48 = plVar7;
    if (plVar7 != (long *)0x0) {
      plVar7 = plVar7 + 5;
      do {
        lVar5 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) goto LAB_010413ec;
    }
    FUN_010418c0(param_1 + 0x1e8,&local_48);
    if (local_48 != (long *)0x0) {
      plVar7 = local_48 + 5;
      do {
        lVar5 = *plVar7;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      else if ((int)lVar5 == 0) {
LAB_010413a4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x148));
  return;
}


