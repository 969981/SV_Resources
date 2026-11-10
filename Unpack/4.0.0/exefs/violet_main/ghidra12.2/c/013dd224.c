/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013dd224; name: FUN_013dd224
 */


void FUN_013dd224(long param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  short *psVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_013dd5ec(param_1 + 0x40);
  lVar10 = *param_3;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x28);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar9 = *(long **)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = lVar10;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 5;
    do {
      lVar10 = *plVar2;
      iVar8 = (int)lVar10 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    uVar11 = *(undefined8 *)(param_1 + 0x50);
    local_38 = (undefined8 *)0x0;
    uStack_30 = 0;
    FUN_00c43ef0(&local_38,param_1 + 0x30);
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    if (local_38[2] == param_1 + 0x28) {
      FUN_013ddc20(&local_58,&local_38);
    }
    puVar7 = local_38;
    if (local_38 != (undefined8 *)0x0) {
      psVar3 = (short *)(local_38 + 3);
      do {
        sVar4 = *psVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar6) {
          *psVar3 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar1 = (int *)((long)local_38 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_28 = *puVar7;
          FUN_00c44438(lVar10 + 0x8040,&local_28);
        }
      }
      else if (sVar4 == 0) goto LAB_013dd384;
    }
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    FUN_013dd850(&local_48,&local_58);
    FUN_013ddf44(uVar11,&local_48);
    puVar7 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      psVar3 = (short *)(local_48 + 3);
      do {
        sVar4 = *psVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar6) {
          *psVar3 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar1 = (int *)((long)local_48 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_38 = (undefined8 *)*puVar7;
          FUN_00c44438(lVar10 + 0x8040,&local_38);
        }
      }
      else if (sVar4 == 0) goto LAB_013dd384;
    }
    puVar7 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      psVar3 = (short *)(local_58 + 3);
      do {
        sVar4 = *psVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar6) {
          *psVar3 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar1 = (int *)((long)local_58 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_38 = (undefined8 *)*puVar7;
          FUN_00c44438(lVar10 + 0x8040,&local_38);
        }
      }
      else if (sVar4 == 0) {
LAB_013dd384:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return;
}


