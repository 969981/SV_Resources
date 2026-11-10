/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0104f80c; name: FUN_0104f80c
 */


void FUN_0104f80c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  plVar9 = *(long **)(param_1 + 0xd0);
  plVar2 = *(long **)(param_1 + 0xd8);
  if (plVar9 != plVar2) {
    lVar8 = *(long *)(param_1 + 0x30);
    do {
      plVar7 = (long *)*plVar9;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 5;
        do {
          lVar10 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)lVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((int)lVar10 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        lVar10 = plVar7[0xf];
        do {
          lVar6 = *plVar1;
          iVar5 = (int)lVar6 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
        if (lVar10 != 0) {
          FUN_0104f920(plVar9,param_1 + 0x108,param_2,lVar8 + 0x38);
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar2);
  }
  return;
}


