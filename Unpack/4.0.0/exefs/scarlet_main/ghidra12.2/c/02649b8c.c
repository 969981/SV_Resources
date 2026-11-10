/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02649b8c; name: FUN_02649b8c
 */


void FUN_02649b8c(long param_1,undefined1 param_2,undefined1 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined1 local_38;
  undefined1 local_37;
  long *local_30;
  long *local_28;
  
  FUN_00c9e664(&local_30,param_1 + 0xe8);
  if (local_28 == (long *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = local_28[9];
  }
  local_38 = param_2;
  local_37 = param_3;
  FUN_02649c54(lVar5,&local_38);
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 5;
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
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x60))();
  }
  return;
}


