/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019499ec; name: FUN_019499ec
 */


void FUN_019499ec(char *param_1,long param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  cVar3 = *param_1;
  if (cVar3 == '\x01') {
    lVar8 = *(long *)(param_1 + 8);
    if (lVar8 != 0) {
      lVar9 = *param_3;
      if (lVar9 != 0) {
        piVar2 = (int *)(lVar9 + 0x28);
        do {
          iVar6 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      plVar7 = *(long **)(lVar8 + param_2);
      *(long *)(lVar8 + param_2) = lVar9;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 5;
        do {
          lVar8 = *plVar1;
          iVar6 = (int)lVar8 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01949bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x10))();
          return;
        }
        if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    return;
  }
  if (cVar3 == '\x02') {
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar8 == 0) {
      return;
    }
    lVar9 = *param_3;
    if (lVar9 != 0) {
      piVar2 = (int *)(lVar9 + 0x28);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == -1) goto LAB_01949b0c;
    }
    lVar8 = lVar8 + -0x28;
    plVar7 = *(long **)(lVar8 + param_2);
    *(long *)(lVar8 + param_2) = lVar9;
    if (plVar7 == (long *)0x0) {
      return;
    }
    plVar1 = plVar7 + 5;
    do {
      iVar6 = (int)*plVar1;
      iVar5 = iVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (cVar3 != '\0') {
      return;
    }
    lVar8 = *(long *)(param_1 + 8);
    if (lVar8 == 0) {
      return;
    }
    lVar9 = *param_3;
    if (lVar9 != 0) {
      piVar2 = (int *)(lVar9 + 0x28);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == -1) {
LAB_01949b0c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar7 = *(long **)(lVar8 + param_2);
    *(long *)(lVar8 + param_2) = lVar9;
    if (plVar7 == (long *)0x0) {
      return;
    }
    plVar1 = plVar7 + 5;
    do {
      iVar6 = (int)*plVar1;
      iVar5 = iVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01949a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x10))();
    return;
  }
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


