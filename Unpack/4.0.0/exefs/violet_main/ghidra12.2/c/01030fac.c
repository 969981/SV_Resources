/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01030fac; name: FUN_01030fac
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_01030fac(long param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  long *plVar7;
  
  if (**(char **)(param_1 + 0x150) != '\0') {
    plVar7 = *(long **)(param_1 + 200);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)lVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar4 == -1) goto LAB_01031168;
    }
    uVar5 = (**(code **)(*plVar7 + 0x78))(plVar7,param_1 + 0x148);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar4 = *plVar1;
        iVar3 = (int)lVar4 + -1;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      else if ((int)lVar4 == 0) goto LAB_010310fc;
    }
    if ((uVar5 & 1) != 0) {
      return;
    }
    plVar7 = *(long **)(param_1 + 200);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    plVar1 = plVar7 + 5;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)lVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar4 == -1) {
LAB_01031168:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    (**(code **)(*plVar7 + 0x70))(plVar7,param_1 + 0x148,1);
    do {
      lVar4 = *plVar1;
      iVar3 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar4 == 0) goto LAB_010310fc;
    plVar7 = *(long **)(param_1 + 200);
    if (plVar7 == (long *)0x0) {
      bVar6 = true;
    }
    else {
      plVar1 = plVar7 + 5;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)lVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar4 == -1) goto LAB_01031168;
      bVar6 = false;
    }
    if (**(char **)(param_1 + 0x1f0) != '\0') {
      (**(code **)(*plVar7 + 0x88))(plVar7,param_1 + 0x1e8);
    }
    if (!bVar6) {
      plVar1 = plVar7 + 5;
      do {
        lVar4 = *plVar1;
        iVar3 = (int)lVar4 + -1;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01031164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
      if ((int)lVar4 == 0) {
LAB_010310fc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


