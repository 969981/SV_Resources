/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029ed088; name: FUN_029ed088
 */


void FUN_029ed088(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  
  pcVar5 = (code *)param_1[1];
  if (pcVar5 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar5)(param_1 + 4);
  }
  lVar6 = *param_2;
  param_1[4] = lVar6;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x28);
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
  FUN_00e5045c(param_1 + 6,param_2 + 2);
  *param_1 = thunk_FUN_029ed150;
  param_1[1] = &LAB_02e68d8c;
  param_1[2] = FUN_029ed2c4;
  param_1[3] = &LAB_02e68e78;
  return;
}


