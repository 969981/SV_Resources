/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029af764; name: FUN_029af764
 */


void FUN_029af764(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *local_50;
  long local_48;
  
  plVar4 = (long *)FUN_00f351bc();
  lVar5 = *plVar4;
  local_48 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x20) + 0x10))();
  }
  FUN_00fff1a4(&local_50,lVar5,param_1);
  FUN_01344120(*param_5,param_3,param_4);
  FUN_02712d10(local_50,&local_48,param_2,param_3,1,0);
  FUN_00ec2ec4(local_50,param_5);
  if (local_50 != (long *)0x0) {
    plVar4 = local_50 + 5;
    do {
      lVar5 = *plVar4;
      iVar3 = (int)lVar5 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *(int *)plVar4 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x20) + 0x18))();
  }
  return;
}


