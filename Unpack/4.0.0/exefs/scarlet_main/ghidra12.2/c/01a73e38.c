/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a73e38; name: FUN_01a73e38
 */


void FUN_01a73e38(long *param_1,code *param_2,ulong param_3,undefined8 param_4,undefined4 *param_5,
                 undefined8 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *local_18;
  
  if ((*param_1 != 0) && (lVar6 = *(long *)(*param_1 + 0x10), lVar6 != 0)) {
    plVar5 = (long *)(lVar6 + ((long)param_3 >> 1) + -0x28);
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar5);
    }
    local_18 = (long *)*param_6;
    uVar1 = *param_5;
    *param_6 = 0;
    (*param_2)(*param_7,plVar5,param_4,uVar1,&local_18);
    if (local_18 != (long *)0x0) {
      plVar5 = local_18 + 5;
      do {
        lVar6 = *plVar5;
        iVar4 = (int)lVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_18 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


