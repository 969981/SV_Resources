/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a55b34; name: FUN_01a55b34
 */


void FUN_01a55b34(long *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *local_18;
  
  if ((*param_1 != 0) && (lVar5 = *(long *)(*param_1 + 0x10), lVar5 != 0)) {
    plVar4 = (long *)(lVar5 + ((long)param_3 >> 1) + -0x28);
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar4);
    }
    local_18 = (long *)*param_4;
    *param_4 = 0;
    (*param_2)(plVar4,&local_18);
    if (local_18 != (long *)0x0) {
      plVar4 = local_18 + 5;
      do {
        lVar5 = *plVar4;
        iVar3 = (int)lVar5 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *(int *)plVar4 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_18 + 0x10))();
      }
      else if ((int)lVar5 == 0) {
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


