/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01690980; name: FUN_01690980
 */


void FUN_01690980(long param_1,int param_2,int param_3,long *param_4)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined1 local_30 [20];
  int local_1c;
  int aiStack_18 [2];
  
  local_30[0] = 0;
  piVar4 = *(int **)(param_1 + 0x110);
  while( true ) {
    local_1c = param_3;
    aiStack_18[0] = param_2;
    if (piVar4 == *(int **)(param_1 + 0x118)) {
      FUN_00d11148(param_1 + 0x110,aiStack_18,&local_1c,param_4,local_30);
      return;
    }
    if ((*piVar4 == param_2) && (piVar4[1] == param_3)) break;
    piVar4 = piVar4 + 8;
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


