/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298ea58; name: FUN_0298ea58
 */


void FUN_0298ea58(long *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *local_30;
  undefined1 auStack_28 [8];
  
  plVar7 = (long *)(param_2 + (param_3 & 0xffffffff) * 8 + 0xa0);
  lVar6 = *plVar7;
  if (lVar6 == 0) {
    local_30 = (long *)FUN_010a0d38(auStack_28,*(undefined8 *)(param_2 + 8));
    if (local_30 != (long *)0x0) {
      plVar2 = local_30 + 5;
      do {
        lVar6 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = (int)lVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar6 == -1) goto LAB_0298eb40;
    }
    FUN_014c035c(plVar7,&local_30);
    if (local_30 != (long *)0x0) {
      plVar2 = local_30 + 5;
      do {
        lVar6 = *plVar2;
        iVar3 = (int)lVar6 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    lVar6 = *plVar7;
    *param_1 = lVar6;
    if (lVar6 == 0) {
      return;
    }
  }
  else {
    *param_1 = lVar6;
  }
  piVar1 = (int *)(lVar6 + 0x28);
  do {
    iVar3 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 != -1) {
    return;
  }
LAB_0298eb40:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != 0","IncrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
             ,0x53,"Reference counter overflows.");
}


