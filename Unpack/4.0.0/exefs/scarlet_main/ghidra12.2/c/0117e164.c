/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0117e164; name: FUN_0117e164
 */


void FUN_0117e164(long *param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long local_48;
  undefined1 auStack_28 [8];
  
  local_48 = param_2;
  lVar5 = FUN_00cf3764(auStack_28,*(undefined8 *)(param_2 + 8),&local_48);
  *param_1 = lVar5;
  lVar6 = 0;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x28);
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
    lVar6 = *param_1;
  }
  FUN_0117e220(lVar6,param_3,param_4,param_5,param_6);
  return;
}


