/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01830ac8; name: FUN_01830ac8
 */


void FUN_01830ac8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *local_8;
  
  FUN_01830c18(&local_8,*(undefined8 *)(param_1 + 0x48));
  if (local_8 == (long *)0x0) {
    local_8 = (long *)FUN_01830d04(*(undefined8 *)(param_1 + 8));
    if (local_8 != (long *)0x0) {
      plVar1 = local_8 + 5;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    FUN_01830c78(param_1 + 0x130,&local_8);
    if (local_8 == (long *)0x0) {
      return;
    }
    plVar1 = local_8 + 5;
    do {
      iVar4 = (int)*plVar1;
      iVar5 = iVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    plVar1 = local_8 + 5;
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
      (**(code **)(*local_8 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_01830bf0;
    FUN_01830c18(&local_8,*(undefined8 *)(param_1 + 0x48));
    FUN_01830c78(param_1 + 0x130,&local_8);
    if (local_8 == (long *)0x0) {
      return;
    }
    plVar1 = local_8 + 5;
    do {
      iVar4 = (int)*plVar1;
      iVar5 = iVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (iVar5 == 0) {
    (**(code **)(*local_8 + 0x10))();
  }
  else if (iVar4 == 0) {
LAB_01830bf0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


