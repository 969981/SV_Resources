/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a30948; name: FUN_01a30948
 */


void FUN_01a30948(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
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
    uVar5 = FUN_01a30ae8(lVar6 + 0x108,auStack_28);
    FUN_01a30bd4(param_1 + 0x120,uVar5);
    if (local_30 != (long *)0x0) {
      plVar1 = local_30 + 5;
      do {
        lVar6 = *plVar1;
        iVar4 = (int)lVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x60))();
    }
    FUN_01a30a2c(param_1 + 0x128,*(undefined8 *)(*(long *)(param_1 + 0x120) + 0x120));
  }
  return;
}


