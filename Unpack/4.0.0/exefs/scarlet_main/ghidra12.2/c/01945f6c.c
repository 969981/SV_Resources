/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01945f6c; name: FUN_01945f6c
 */


void FUN_01945f6c(long *param_1,long param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar7 = *(long **)(param_2 + 0x48);
  plVar3 = *(long **)(param_2 + 0x50);
  lVar8 = *param_3;
  plVar6 = (long *)param_3[3];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (plVar7 != plVar3) {
    do {
      if (*(long *)(*plVar7 + 0x98) == lVar8) goto LAB_01945fd0;
      plVar7 = plVar7 + 1;
    } while (plVar3 != plVar7);
    plVar7 = plVar3;
  }
LAB_01945fd0:
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if (plVar7 == *(long **)(param_2 + 0x50)) {
    *param_1 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)(*plVar7 + 0x88) + 0x30);
    *param_1 = lVar8;
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 0x28);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
  }
  return;
}


