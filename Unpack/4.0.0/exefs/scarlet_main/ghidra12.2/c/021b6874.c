/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021b6874; name: FUN_021b6874
 */


void FUN_021b6874(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *local_38;
  long *local_30;
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x120) == 0) {
    FUN_00c9e664(&local_38,param_1 + 0xe8);
    lVar6 = 0;
    if (local_30 != (long *)0x0) {
      lVar6 = local_30[9];
    }
    plVar4 = (long *)FUN_00ded3a0(lVar6 + 0x108,auStack_28);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x58))(plVar4);
    }
    plVar5 = *(long **)(param_1 + 0x120);
    *(long **)(param_1 + 0x120) = plVar4;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x60))();
    }
    if (local_30 != (long *)0x0) {
      plVar4 = local_30 + 5;
      do {
        lVar6 = *plVar4;
        iVar3 = (int)lVar6 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *(int *)plVar4 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x60))();
    }
    lVar6 = 0;
    if (*(long *)(param_1 + 0x120) != 0) {
      lVar6 = *(long *)(param_1 + 0x120) + 0x140;
    }
    *(long *)(param_1 + 0x130) = lVar6;
  }
  return;
}


