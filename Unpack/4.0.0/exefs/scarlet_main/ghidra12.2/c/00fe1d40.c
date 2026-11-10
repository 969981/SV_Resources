/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fe1d40; name: FUN_00fe1d40
 */


uint FUN_00fe1d40(uint param_1,long *param_2,undefined8 *param_3,int *param_4,int *param_5)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  
  plVar5 = (long *)*param_2;
  plVar7 = (long *)*param_3;
  if (plVar5 != plVar7) {
    if (plVar7 != (long *)0x0) {
      plVar5 = plVar7 + 5;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = (int)lVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar5 = (long *)*param_2;
    }
    *param_2 = (long)plVar7;
    if (plVar5 != (long *)0x0) {
      plVar7 = plVar5 + 5;
      do {
        iVar1 = (int)*plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 == 1) {
        (**(code **)(*plVar5 + 0x10))();
      }
      else if (iVar1 == 0) {
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
  return (param_1 | uVar6) & 1;
}


