/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017558a4; name: FUN_017558a4
 */


void FUN_017558a4(long param_1,int param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  int local_4;
  
  if ((param_2 < 5) || (param_2 == 0xff)) {
    local_4 = param_2;
    plVar5 = (long *)FUN_01755990(param_1 + 0x98,&local_4);
    lVar7 = *param_3;
    if (lVar7 != 0) {
      piVar1 = (int *)(lVar7 + 0x28);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar6 = (long *)*plVar5;
    *plVar5 = lVar7;
    if (plVar6 != (long *)0x0) {
      plVar5 = plVar6 + 5;
      do {
        lVar7 = *plVar5;
        iVar2 = (int)lVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *(int *)plVar5 = iVar2;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


