/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b344e4; name: FUN_01b344e4
 */


void FUN_01b344e4(char *param_1,long param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if (*param_1 != '\x01') {
    if ((*param_1 == '\0') && (lVar7 = *(long *)(param_1 + 8), lVar7 != 0)) {
      lVar8 = *param_3;
      if (lVar8 != 0) {
        piVar1 = (int *)(lVar8 + 0x28);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      plVar6 = *(long **)(lVar7 + param_2);
      *(long *)(lVar7 + param_2) = lVar8;
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 5;
        do {
          lVar7 = *plVar2;
          iVar3 = (int)lVar7 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar3;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01b34598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x10))();
          return;
        }
        if ((int)lVar7 == 0) {
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
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 != 0) {
    lVar8 = *param_3;
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 0x28);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar6 = *(long **)(lVar7 + param_2);
    *(long *)(lVar7 + param_2) = lVar8;
    if (plVar6 != (long *)0x0) {
      plVar2 = plVar6 + 5;
      do {
        lVar7 = *plVar2;
        iVar3 = (int)lVar7 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01b3465c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))();
        return;
      }
      if ((int)lVar7 == 0) {
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


