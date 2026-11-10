/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0270b190; name: FUN_0270b190
 */


uint FUN_0270b190(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,undefined8 param_12)

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
  
  plVar7 = (long *)*param_1;
  param_2 = (long *)*param_2;
  if (plVar7 == param_2) {
    uVar9 = 0;
  }
  else {
    if (param_2 != (long *)0x0) {
      plVar7 = param_2 + 5;
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
      plVar7 = (long *)*param_1;
    }
    *param_1 = (long)param_2;
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
        (**(code **)(*plVar7 + 0x10))(plVar7,param_5);
      }
      else if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    uVar9 = 1;
  }
  uVar8 = uVar9;
  if (*param_3 != *param_4) {
    uVar8 = 1;
    *param_3 = *param_4;
  }
  uVar6 = FUN_0270b300(uVar8,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12);
  return uVar9 | uVar8 | uVar6 & 1;
}


