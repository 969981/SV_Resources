/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01771104; name: FUN_01771104
 */


/* WARNING: Removing unreachable block (ram,0x017711b8) */
/* WARNING: Removing unreachable block (ram,0x017711bc) */
/* WARNING: Removing unreachable block (ram,0x017711c4) */
/* WARNING: Removing unreachable block (ram,0x017711cc) */
/* WARNING: Removing unreachable block (ram,0x01771404) */
/* WARNING: Removing unreachable block (ram,0x017711d0) */
/* WARNING: Removing unreachable block (ram,0x01771204) */
/* WARNING: Removing unreachable block (ram,0x01771208) */
/* WARNING: Removing unreachable block (ram,0x01771210) */
/* WARNING: Removing unreachable block (ram,0x01771218) */
/* WARNING: Removing unreachable block (ram,0x017713b4) */
/* WARNING: Removing unreachable block (ram,0x0177121c) */
/* WARNING: Removing unreachable block (ram,0x01771250) */
/* WARNING: Removing unreachable block (ram,0x01771254) */
/* WARNING: Removing unreachable block (ram,0x0177125c) */
/* WARNING: Removing unreachable block (ram,0x01771264) */
/* WARNING: Removing unreachable block (ram,0x017713c4) */
/* WARNING: Removing unreachable block (ram,0x01771268) */

void FUN_01771104(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long local_48;
  long *local_40;
  long *local_38;
  long *local_30;
  long local_28;
  
  if (*(long *)(param_1 + 0x380) == 0) {
    lVar5 = FUN_017715a8(*(undefined8 *)(param_1 + 8));
    local_28 = lVar5;
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 0x28);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 == -1) goto LAB_0177143c;
    }
    local_40 = *(long **)(param_1 + 0x558);
    *(undefined8 *)(param_1 + 0x558) = 0;
    FUN_01771464(&local_40);
    local_28 = 0;
    *(long *)(param_1 + 0x558) = lVar5;
    FUN_01771464(&local_28);
    local_38 = (long *)0x0;
    local_30 = (long *)0x0;
    local_40 = (long *)0x0;
    plVar6 = *(long **)(param_1 + 0x4b0);
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 5;
      do {
        lVar5 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = (int)lVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar5 == -1) goto LAB_0177143c;
    }
    plVar7 = *(long **)(param_1 + 0x4b8);
    local_40 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar6 = plVar7 + 5;
      do {
        lVar5 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *(int *)plVar6 = (int)lVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar5 == -1) goto LAB_0177143c;
    }
    local_30 = (long *)0x0;
    plVar6 = *(long **)(param_1 + 0x4a0);
    local_38 = plVar7;
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 5;
      do {
        lVar5 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = (int)lVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar5 == -1) goto LAB_0177143c;
    }
    local_30 = plVar6;
    FUN_017730b0(*(undefined8 *)(param_1 + 0x558),&local_40);
    lVar5 = FUN_01771784(*(undefined8 *)(param_1 + 8));
    local_48 = lVar5;
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 0x28);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 == -1) goto LAB_0177143c;
    }
    local_28 = *(long *)(param_1 + 0x568);
    *(undefined8 *)(param_1 + 0x568) = 0;
    FUN_017714d0(&local_28);
    local_48 = 0;
    *(long *)(param_1 + 0x568) = lVar5;
    FUN_017714d0(&local_48);
    FUN_01771d38(*(undefined8 *)(param_1 + 0x568));
    lVar5 = FUN_017719c4(*(undefined8 *)(param_1 + 8));
    local_48 = lVar5;
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 0x28);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 == -1) {
LAB_0177143c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    local_28 = *(long *)(param_1 + 0x570);
    *(undefined8 *)(param_1 + 0x570) = 0;
    FUN_0177153c(&local_28);
    local_48 = 0;
    *(long *)(param_1 + 0x570) = lVar5;
    FUN_0177153c(&local_48);
    FUN_01772e04(*(undefined8 *)(param_1 + 0x570));
    if (local_30 != (long *)0x0) {
      plVar6 = local_30 + 5;
      do {
        lVar5 = *plVar6;
        iVar2 = (int)lVar5 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *(int *)plVar6 = iVar2;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
      else if ((int)lVar5 == 0) goto LAB_01771414;
    }
    if (local_38 != (long *)0x0) {
      plVar6 = local_38 + 5;
      do {
        lVar5 = *plVar6;
        iVar2 = (int)lVar5 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *(int *)plVar6 = iVar2;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      else if ((int)lVar5 == 0) goto LAB_01771414;
    }
    if (local_40 != (long *)0x0) {
      plVar6 = local_40 + 5;
      do {
        lVar5 = *plVar6;
        iVar2 = (int)lVar5 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *(int *)plVar6 = iVar2;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 == 0) {
        (**(code **)(*local_40 + 0x10))();
      }
      else if ((int)lVar5 == 0) {
LAB_01771414:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


