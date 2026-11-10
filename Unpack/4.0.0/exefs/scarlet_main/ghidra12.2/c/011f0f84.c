/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011f0f84; name: FUN_011f0f84
 */


void FUN_011f0f84(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  long lVar9;
  long *local_38;
  long local_30;
  undefined1 auStack_28 [8];
  
  lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x1f8) + 0x58);
  if (lVar9 == 0) {
    puVar8 = &DAT_03c886bc;
  }
  else {
    puVar8 = (undefined1 *)
             (*(long *)(*(long *)(*(long *)(lVar9 + 0x28) + (long)*(int *)(param_1 + 0xbc) * 8) +
                       0x60) + 2);
  }
  lVar9 = FUN_00ec0c08(*(long *)(param_1 + 0x50),puVar8);
  if (lVar9 != 0) {
    local_30 = *(long *)(param_1 + 0x40);
    local_38 = (long *)FUN_00cf3764(auStack_28,*(undefined8 *)(local_30 + 8),&local_30);
    if (local_38 != (long *)0x0) {
      plVar7 = local_38 + 5;
      do {
        lVar6 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = (int)lVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar6 == -1) goto LAB_011f1098;
    }
    FUN_00ec0d30(local_38,lVar9,1);
    lVar9 = FUN_011f1130(&local_30,*(undefined8 *)(param_1 + 8),&local_38);
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 0x28);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == -1) {
LAB_011f1098:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar7 = *(long **)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 5;
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
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_011f10dc;
    }
    *(long *)(param_1 + 0x88) = lVar9;
    if (local_38 != (long *)0x0) {
      plVar7 = local_38 + 5;
      do {
        lVar9 = *plVar7;
        iVar5 = (int)lVar9 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      else if ((int)lVar9 == 0) {
LAB_011f10dc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


