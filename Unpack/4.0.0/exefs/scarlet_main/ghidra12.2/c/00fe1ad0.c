/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fe1ad0; name: FUN_00fe1ad0
 */


byte FUN_00fe1ad0(int *param_1,int *param_2,long *param_3,long *param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  byte bVar6;
  long *plVar7;
  bool bVar8;
  
  bVar5 = *param_1 != *param_2;
  if (bVar5) {
    *param_1 = *param_2;
  }
  plVar7 = (long *)*param_3;
  param_4 = (long *)*param_4;
  bVar8 = bVar5;
  if (plVar7 != param_4) {
    if (param_4 != (long *)0x0) {
      plVar7 = param_4 + 5;
      do {
        lVar4 = *plVar7;
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar8) {
          *(int *)plVar7 = (int)lVar4 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar7 = (long *)*param_3;
    }
    *param_3 = (long)param_4;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        iVar2 = (int)*plVar1;
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *(int *)plVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    bVar8 = true;
  }
  bVar6 = FUN_00fe1c40(bVar8,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12);
  return bVar5 | bVar8 | bVar6 & 1;
}


