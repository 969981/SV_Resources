/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029efd94; name: FUN_029efd94
 */


void FUN_029efd94(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  
  pcVar6 = (code *)param_1[1];
  if (pcVar6 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar6)(param_1 + 4);
  }
  lVar7 = *param_2;
  param_1[4] = lVar7;
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
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  param_1[5] = param_2[1];
  plVar5 = (long *)param_2[2];
  param_1[6] = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))();
  }
  *param_1 = thunk_FUN_029efe68;
  param_1[1] = FUN_02e69c8c;
  param_1[2] = FUN_02e69d20;
  param_1[3] = &LAB_02e69da4;
  return;
}


