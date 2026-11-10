/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011e3db0; name: FUN_011e3db0
 */


void FUN_011e3db0(long param_1,byte param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long local_38;
  undefined1 auStack_18 [8];
  
  lVar6 = DAT_0485a0e8;
  lVar8 = *(long *)(param_1 + 0x130);
  if (lVar8 == 0) {
    if (*(int *)(param_1 + 0x230) == 2) {
      FUN_011eb858(DAT_0485a0e8,param_1 + 0x128);
    }
    local_38 = lVar6;
    lVar8 = FUN_011e3f20(auStack_18,*(undefined8 *)(lVar6 + 8),&local_38,lVar6 + 0x30);
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 0x28);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar7 = *(long **)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x130) = 0;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 5;
      do {
        lVar6 = *plVar2;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
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
    }
    *(long *)(param_1 + 0x130) = lVar8;
    if ((**(char **)(lVar8 + 0x98) != '\0') == (bool)(param_2 & 1)) {
      return;
    }
  }
  if (*(long *)(param_1 + 0x140) != 0) {
    FUN_012921a0(lVar8);
    lVar8 = *(long *)(param_1 + 0x130);
  }
  FUN_011e44c8(lVar8,param_2 & 1);
  FUN_011e5ae0(0,param_1);
  return;
}


