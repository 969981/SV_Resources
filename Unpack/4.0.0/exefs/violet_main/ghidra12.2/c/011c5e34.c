/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011c5e34; name: FUN_011c5e34
 */


void FUN_011c5e34(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 8);
  plVar6 = param_2 + 2;
  plVar5 = param_2;
  if (plVar6 != plVar7) {
    do {
      param_2 = plVar5 + 2;
      FUN_02710f18(plVar5,param_2);
      *(int *)(plVar5 + 1) = (int)plVar5[3];
      plVar6 = plVar5 + 4;
      plVar5 = param_2;
    } while (plVar6 != plVar7);
    plVar6 = *(long **)(param_1 + 8);
    if (plVar6 == param_2) goto LAB_011c5ec8;
  }
  do {
    plVar6 = plVar6 + -2;
    plVar5 = (long *)*plVar6;
    if (plVar5 != (long *)0x0) {
      plVar7 = plVar5 + 5;
      do {
        lVar4 = *plVar7;
        iVar3 = (int)lVar4 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  } while (plVar6 != param_2);
LAB_011c5ec8:
  *(long **)(param_1 + 8) = param_2;
  return;
}


