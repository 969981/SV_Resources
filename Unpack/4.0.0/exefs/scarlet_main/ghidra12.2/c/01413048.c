/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01413048; name: FUN_01413048
 */


void FUN_01413048(undefined1 param_1 [16],long param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *local_20;
  long *local_18;
  
  if (*(char *)(param_2 + 0x142) == '\0') {
    FUN_00c9e664(&local_20,param_2 + 0xe8);
    plVar5 = (long *)local_18[9];
    plVar5[0x1b] = param_1._8_8_;
    plVar5[0x1a] = param_1._0_8_;
    if (*(char *)((long)plVar5 + 0xf4) == '\0') {
      *(undefined1 *)((long)plVar5 + 0xf4) = 1;
      (**(code **)(*plVar5 + 0x78))(plVar5);
    }
    if (local_18 != (long *)0x0) {
      plVar5 = local_18 + 5;
      do {
        lVar4 = *plVar5;
        iVar3 = (int)lVar4 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_18 + 0x10))();
      }
      else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_20 != (long *)0x0) {
      (**(code **)(*local_20 + 0x60))();
    }
  }
  return;
}


