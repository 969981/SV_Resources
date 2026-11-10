/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019b1788; name: FUN_019b1788
 */


void FUN_019b1788(long *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *local_48;
  long *local_40;
  undefined1 auStack_38 [8];
  long local_30;
  undefined1 **ppuStack_28;
  undefined1 *local_8;
  
  FUN_00c9e664(&local_48,param_1[1] + 0xe8);
  local_30 = 0;
  if (local_40 != (long *)0x0) {
    local_30 = local_40[9];
  }
  local_8 = auStack_38;
  local_30 = local_30 + 0x108;
  ppuStack_28 = &local_8;
  FUN_019b1884(local_30,&local_30);
  if (local_40 != (long *)0x0) {
    plVar5 = local_40 + 5;
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
      (**(code **)(*local_40 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x60))();
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x60))();
  }
  plVar5 = (long *)*param_1;
  *param_1 = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  return;
}


