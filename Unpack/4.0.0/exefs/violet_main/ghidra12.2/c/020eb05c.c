/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020eb05c; name: FUN_020eb05c
 */


int FUN_020eb05c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long *local_18;
  
  if (*(long *)(param_1 + 0xa10) == 0) {
    iVar6 = 0;
  }
  else {
    iVar5 = FUN_017e4040(*(long *)(param_1 + 0xa10),0);
    param_2 = (long *)*param_2;
    local_18 = param_2;
    if (param_2 == (long *)0x0) {
      iVar6 = FUN_020eaefc(param_1,&local_18,1);
      iVar6 = iVar5 * 0x1e - iVar6;
    }
    else {
      plVar1 = param_2 + 5;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      iVar6 = FUN_020eaefc(param_1,&local_18,1);
      iVar6 = iVar5 * 0x1e - iVar6;
      if (param_2 != (long *)0x0) {
        plVar1 = param_2 + 5;
        do {
          lVar4 = *plVar1;
          iVar5 = (int)lVar4 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*param_2 + 0x10))(param_2);
        }
        else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
  }
  return iVar6;
}


