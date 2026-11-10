/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01421b44; name: FUN_01421b44
 */


void FUN_01421b44(long *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_8;
  
  local_28 = 0x1000;
  local_8 = 0x200000100;
  local_2c = 0;
  local_38 = 0;
  lVar5 = FUN_01421ea8(*(undefined8 *)(param_2 + 8),param_3,(long)&local_8 + 4,&local_28,&local_8,
                       &local_2c,&local_38);
  *param_1 = lVar5;
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
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  return;
}


