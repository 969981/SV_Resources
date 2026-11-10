/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e02ad4; name: FUN_00e02ad4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e02ad4(long *param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  while( true ) {
    plVar7 = *(long **)(param_2 + 0x58);
    if (plVar7 == (long *)0x0) {
      lVar8 = _DAT_00000048;
    }
    else {
      plVar1 = plVar7 + 5;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar8 == -1) goto LAB_00e02b94;
      lVar8 = plVar7[9];
      do {
        lVar6 = *plVar1;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x38), lVar8 != 0)) break;
    param_2 = *(long *)(param_2 + 0x148);
    if (param_2 == 0) {
      *param_1 = 0;
      return;
    }
  }
  *param_1 = lVar8;
  piVar2 = (int *)(lVar8 + 0x28);
  do {
    iVar5 = *piVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar5 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 != -1) {
    return;
  }
LAB_00e02b94:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != 0","IncrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
             ,0x53,"Reference counter overflows.");
}


