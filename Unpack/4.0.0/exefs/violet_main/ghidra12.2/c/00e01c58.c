/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e01c58; name: FUN_00e01c58
 */


void FUN_00e01c58(long param_1,int param_2,int param_3,long *param_4)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  int local_1c;
  int aiStack_18 [2];
  
  piVar4 = *(int **)(param_1 + 0x148);
  while( true ) {
    local_1c = param_3;
    aiStack_18[0] = param_2;
    if (piVar4 == *(int **)(param_1 + 0x150)) {
      FUN_00e01d68(param_1 + 0x148,aiStack_18,&local_1c);
      return;
    }
    if ((*piVar4 == param_2) && (piVar4[1] == param_3)) break;
    piVar4 = piVar4 + 4;
  }
  lVar8 = *param_4;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar7 = *(long **)(piVar4 + 2);
  *(long *)(piVar4 + 2) = lVar8;
  if (plVar7 == (long *)0x0) {
    return;
  }
  plVar2 = plVar7 + 5;
  do {
    lVar8 = *plVar2;
    iVar3 = (int)lVar8 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *(int *)plVar2 = iVar3;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00e01d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x10))();
    return;
  }
  if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


