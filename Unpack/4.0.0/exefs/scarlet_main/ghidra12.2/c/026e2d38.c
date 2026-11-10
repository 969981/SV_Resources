/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026e2d38; name: FUN_026e2d38
 */


bool FUN_026e2d38(long param_1)

{
  long *plVar1;
  short *psVar2;
  long *plVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 *local_50;
  undefined8 uStack_48;
  long *local_40;
  long *local_38;
  long local_18;
  
  if (*(int *)(param_1 + 0x134) != 1) {
    if (*(int *)(param_1 + 0x134) != 0) goto LAB_026e2da8;
    *(undefined4 *)(param_1 + 0x134) = 1;
  }
  if ((*(long *)(param_1 + 0x140) == 0) || (*(short *)(*(long *)(param_1 + 0x140) + 0x1a) == 0)) {
    FUN_00c9e664(&local_40,param_1 + 0xe8);
    lVar11 = 0;
    if (local_38 != (long *)0x0) {
      lVar11 = local_38[9];
    }
    lVar11 = FUN_00efcb90(lVar11 + 0x108,&local_50);
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 5;
      do {
        lVar10 = *plVar1;
        iVar9 = (int)lVar10 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x60))();
    }
    if (lVar11 == 0) goto LAB_026e2da8;
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    FUN_00c43ef0(&local_40,lVar11 + 0x98);
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    if (local_40[2] == lVar11 + 0x28) {
      FUN_00efcde8(&local_50,&local_40);
    }
    plVar1 = local_40;
    if (local_40 != (long *)0x0) {
      plVar3 = local_40 + 3;
      do {
        sVar5 = (short)*plVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *(short *)plVar3 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar4 = (int *)((long)local_40 + 0x1c);
        do {
          iVar9 = *piVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar7) {
            *piVar4 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_18 = *plVar1;
          FUN_00c44438(lVar11 + 0x8040,&local_18);
        }
      }
      else if (sVar5 == 0) goto LAB_026e2ec4;
    }
    FUN_0108458c((long *)(param_1 + 0x140),&local_50);
    puVar8 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_50 + 3);
      do {
        sVar5 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar4 = (int *)((long)local_50 + 0x1c);
        do {
          iVar9 = *piVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar7) {
            *piVar4 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_40 = (long *)*puVar8;
          FUN_00c44438(lVar11 + 0x8040,&local_40);
        }
      }
      else if (sVar5 == 0) {
LAB_026e2ec4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  else {
    lVar10 = *(long *)(*(long *)(param_1 + 0x140) + 0x10);
    lVar11 = 0;
    if (lVar10 != 0) {
      lVar11 = lVar10 + -0x28;
    }
    if (*(char *)(lVar11 + 0x11a) != '\0') {
      *(undefined4 *)(param_1 + 0x134) = 2;
    }
  }
LAB_026e2da8:
  return *(int *)(param_1 + 0x134) == 2;
}


