/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0270b300; name: FUN_0270b300
 */


uint FUN_0270b300(uint param_1,long *param_2,long *param_3,long *param_4,long *param_5,int *param_6,
                 int *param_7,int *param_8,int *param_9)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  
  plVar7 = (long *)*param_2;
  param_3 = (long *)*param_3;
  if (plVar7 != param_3) {
    if (param_3 != (long *)0x0) {
      plVar7 = param_3 + 5;
      do {
        lVar5 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = (int)lVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar7 = (long *)*param_2;
    }
    *param_2 = (long)param_3;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        iVar2 = (int)*plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      else if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    param_1 = 1;
  }
  uVar6 = param_1;
  if (*param_4 != *param_5) {
    uVar6 = 1;
    *param_4 = *param_5;
  }
  uVar9 = uVar6;
  if (*param_6 != *param_7) {
    uVar9 = 1;
    *param_6 = *param_7;
  }
  uVar8 = uVar9;
  if (*param_8 != *param_9) {
    uVar8 = 1;
    *param_8 = *param_9;
  }
  return (param_1 | uVar6 | uVar9 | uVar8) & 1;
}


