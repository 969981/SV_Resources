/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d874e0; name: FUN_01d874e0
 */


void FUN_01d874e0(undefined1 *param_1,char *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long *local_28;
  long *local_8;
  
  if (*param_2 == '\x01') {
    plVar5 = *(long **)(param_2 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 5;
      do {
        iVar6 = (int)*plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01d8751c:
      if (iVar6 == -1) goto LAB_01d87644;
    }
  }
  else if (*param_2 == '\0') {
    plVar5 = *(long **)(param_2 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 5;
      do {
        iVar6 = (int)*plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_01d8751c;
    }
  }
  else {
    plVar5 = (long *)0x0;
  }
  local_8 = plVar5;
  FUN_01d89948(&local_28,&local_8);
  if (local_8 != (long *)0x0) {
    plVar5 = local_8 + 5;
    do {
      lVar4 = *plVar5;
      iVar6 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_8 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_01d875c0;
  }
  if (local_28 == (long *)0x0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    plVar5 = local_28 + 5;
    do {
      lVar4 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = (int)lVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar4 == -1) {
LAB_01d87644:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    *param_1 = 1;
    *(long **)(param_1 + 8) = local_28;
    if (local_28 != (long *)0x0) {
      plVar5 = local_28 + 5;
      do {
        lVar4 = *plVar5;
        iVar6 = (int)lVar4 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = iVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      else if ((int)lVar4 == 0) {
LAB_01d875c0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


