/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015ea478; name: FUN_015ea478
 */


void FUN_015ea478(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x10);
  do {
    if (lVar7 == param_2) {
      return;
    }
    *(long *)(param_1 + 0x10) = lVar7 + -0x50;
    if (*(long **)(lVar7 + -8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar7 + -8) + 0x20))();
    }
    plVar6 = *(long **)(lVar7 + -0x30);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 5;
      do {
        lVar5 = *plVar1;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (*(long **)(lVar7 + -0x38) != (long *)0x0) {
      (**(code **)(**(long **)(lVar7 + -0x38) + 0x20))();
    }
    lVar7 = *(long *)(param_1 + 0x10);
  } while( true );
}


