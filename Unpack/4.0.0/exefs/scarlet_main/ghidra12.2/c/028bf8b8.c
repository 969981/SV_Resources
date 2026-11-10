/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028bf8b8; name: FUN_028bf8b8
 */


void FUN_028bf8b8(long param_1,uint param_2)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  long *local_30;
  long *local_28;
  
  if (((param_2 & 0xff00) == 0x8300) || ((param_2 + 0x7f & 0xff) < 2)) {
    FUN_00c9e664(&local_30,param_1 + 0xe8);
    if (local_30 != (long *)0x0) {
      if (local_28 == (long *)0x0) {
        lVar5 = 0;
      }
      else {
        lVar5 = local_28[9];
      }
      FUN_00d37964(lVar5,0,0);
    }
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 5;
      do {
        lVar5 = *plVar1;
        iVar3 = (int)lVar5 + -1;
        cVar4 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar2) {
          *(int *)plVar1 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
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
  }
  lVar5 = *(long *)(param_1 + 200);
  if (lVar5 != 0) {
    cVar4 = FUN_01018020(param_1 + 0x38);
    FUN_00da04fc(lVar5,cVar4 == -0x7e,0);
  }
  return;
}


