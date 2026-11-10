/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f47d18; name: FUN_00f47d18
 */


long FUN_00f47d18(long param_1)

{
  long lVar1;
  long *plVar2;
  short *psVar3;
  long *plVar4;
  int *piVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  undefined8 *local_48;
  undefined8 uStack_40;
  long *local_38;
  long *local_30;
  long local_28;
  
  lVar1 = param_1 + 0x120;
  if ((*(long *)(param_1 + 0x120) == 0) || (*(short *)(*(long *)(param_1 + 0x120) + 0x1a) == 0)) {
    FUN_00c9e664(&local_38,param_1 + 0xe8);
    if (local_30 == (long *)0x0) {
      lVar12 = 0;
    }
    else {
      lVar12 = local_30[9];
      plVar2 = local_30 + 5;
      do {
        lVar9 = *plVar2;
        iVar11 = (int)lVar9 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *(int *)plVar2 = iVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
      else if ((int)lVar9 == 0) {
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
    if (lVar12 == 0) {
      return lVar1;
    }
    lVar12 = FUN_00f49db4(lVar12 + 0x108,&local_38);
    if (lVar12 == 0) {
      return lVar1;
    }
    if (*(char *)(lVar12 + 0x11a) == '\0') {
      return lVar1;
    }
    local_38 = (long *)0x0;
    local_30 = (long *)0x0;
    FUN_00c43ef0(&local_38,lVar12 + 0x98);
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    if (local_38[2] == lVar12 + 0x28) {
      FUN_00f4a560(&local_48,&local_38);
    }
    plVar2 = local_38;
    if (local_38 != (long *)0x0) {
      plVar4 = local_38 + 3;
      do {
        sVar6 = (short)*plVar4;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar8) {
          *(short *)plVar4 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        piVar5 = (int *)((long)local_38 + 0x1c);
        do {
          iVar11 = *piVar5;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar8) {
            *piVar5 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_28 = *plVar2;
          FUN_00c44438(lVar12 + 0x8040,&local_28);
        }
      }
      else if (sVar6 == 0) goto LAB_00f47e64;
    }
    FUN_00f4a23c(lVar1,&local_48);
    puVar10 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      psVar3 = (short *)(local_48 + 3);
      do {
        sVar6 = *psVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar8) {
          *psVar3 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        piVar5 = (int *)((long)local_48 + 0x1c);
        do {
          iVar11 = *piVar5;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar8) {
            *piVar5 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_38 = (long *)*puVar10;
          FUN_00c44438(lVar12 + 0x8040,&local_38);
        }
      }
      else if (sVar6 == 0) {
LAB_00f47e64:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return lVar1;
}


