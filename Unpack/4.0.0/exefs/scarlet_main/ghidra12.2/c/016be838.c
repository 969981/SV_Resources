/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016be838; name: FUN_016be838
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016be838(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  
  do {
    plVar6 = *(long **)(param_2 + 0x58);
    if (plVar6 == (long *)0x0) {
      plVar9 = _DAT_00000048;
    }
    else {
      plVar1 = plVar6 + 5;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar8 == -1) goto LAB_016be930;
      plVar9 = (long *)plVar6[9];
      do {
        lVar8 = *plVar1;
        iVar5 = (int)lVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (plVar9 != (long *)0x0) {
      piVar7 = (int *)*plVar9;
      piVar2 = (int *)plVar9[1];
      if (piVar7 == piVar2) {
LAB_016be8b8:
        if ((piVar7 != piVar2) && (lVar8 = *(long *)(piVar7 + 2), lVar8 != 0)) {
          *param_1 = lVar8;
          piVar7 = (int *)(lVar8 + 0x28);
          do {
            iVar5 = *piVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar4) {
              *piVar7 = iVar5 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 != -1) {
            return;
          }
LAB_016be930:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      else {
        do {
          if (*piVar7 == param_3) goto LAB_016be8b8;
          piVar7 = piVar7 + 10;
        } while (piVar2 != piVar7);
      }
    }
    param_2 = *(long *)(param_2 + 0x148);
    if (param_2 == 0) {
      *param_1 = 0;
      return;
    }
  } while( true );
}


