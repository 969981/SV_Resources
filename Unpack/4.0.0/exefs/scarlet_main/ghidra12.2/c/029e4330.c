/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e4330; name: FUN_029e4330
 */


int FUN_029e4330(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  iVar5 = FUN_029e40e0();
  lVar8 = *param_3;
  if (*(uint *)(*param_4 + 0x1f8) < *(uint *)(lVar8 + 0x1f8)) {
    *param_3 = 0;
    lVar7 = *param_4;
    *param_4 = 0;
    *param_3 = lVar7;
    plVar6 = (long *)*param_4;
    *param_4 = 0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 5;
      do {
        lVar7 = *plVar1;
        iVar4 = (int)lVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_029e44b4;
    }
    *param_4 = lVar8;
    lVar8 = *param_2;
    if (*(uint *)(lVar8 + 0x1f8) <= *(uint *)(*param_3 + 0x1f8)) {
      return iVar5 + 1;
    }
    *param_2 = 0;
    lVar7 = *param_3;
    *param_3 = 0;
    *param_2 = lVar7;
    plVar6 = (long *)*param_3;
    *param_3 = 0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 5;
      do {
        lVar7 = *plVar1;
        iVar4 = (int)lVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_029e44b4;
    }
    *param_3 = lVar8;
    lVar8 = *param_1;
    if (*(uint *)(*param_2 + 0x1f8) < *(uint *)(lVar8 + 0x1f8)) {
      *param_1 = 0;
      lVar7 = *param_2;
      *param_2 = 0;
      *param_1 = lVar7;
      plVar6 = (long *)*param_2;
      *param_2 = 0;
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 5;
        do {
          lVar7 = *plVar1;
          iVar4 = (int)lVar7 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        else if ((int)lVar7 == 0) {
LAB_029e44b4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      iVar5 = iVar5 + 3;
      *param_2 = lVar8;
    }
    else {
      iVar5 = iVar5 + 2;
    }
  }
  return iVar5;
}


