/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017806f0; name: FUN_017806f0
 */


long FUN_017806f0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *local_40;
  long *local_38;
  
  FUN_00c9e664(&local_40,param_1 + 0xe8);
  plVar2 = local_40;
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 5;
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
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_017807f0;
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x60))(local_40);
  }
  if (plVar2 == (long *)0x0) {
    param_1 = param_1 + 0x150;
  }
  else {
    FUN_00c9e664(&local_40,param_1 + 0xe8);
    if (local_38 == (long *)0x0) {
      param_1 = 0x368;
    }
    else {
      param_1 = local_38[9] + 0x368;
      plVar2 = local_38 + 5;
      do {
        lVar6 = *plVar2;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
LAB_017807f0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x60))();
    }
  }
  return param_1;
}


