/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a60f94; name: FUN_01a60f94
 */


void FUN_01a60f94(undefined8 *param_1,long *param_2,code *param_3,ulong param_4,undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *local_18;
  
  if ((*param_2 == 0) || (lVar5 = *(long *)(*param_2 + 0x10), lVar5 == 0)) {
    *param_1 = 0;
  }
  else {
    plVar4 = (long *)(lVar5 + ((long)param_4 >> 1) + -0x28);
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *plVar4);
    }
    local_18 = (long *)*param_5;
    *param_5 = 0;
    (*param_3)(plVar4,&local_18);
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
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


