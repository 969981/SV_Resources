/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0196168c; name: FUN_0196168c
 */


void FUN_0196168c(long param_1)

{
  int *piVar1;
  short *psVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  undefined8 uVar12;
  long *plVar13;
  long *local_68;
  long *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  if (((*PTR_DAT_047d8c00 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar9 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar9;
  uVar12 = *(undefined8 *)(lVar9 + 0x70);
  FUN_00c9e664(&local_68,param_1 + 0xe8);
  if (local_60 == (long *)0x0) {
    plVar13 = (long *)0x0;
  }
  else {
    plVar13 = (long *)local_60[9];
  }
  (**(code **)(*plVar13 + 0x18))(local_48,plVar13);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  plVar3 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    plVar3 = plVar13 + 5;
  }
  if ((long *)local_48[0][2] == plVar3) {
    FUN_00c9ea00(&local_58,local_48);
  }
  puVar7 = local_48[0];
  if (local_48[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_48[0] + 3);
    do {
      sVar11 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar11 == 1) {
      piVar1 = (int *)((long)local_48[0] + 0x1c);
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
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_38 = *puVar7;
        FUN_00c44438(lVar9 + 0x8040,&local_38);
      }
    }
    else if (sVar11 == 0) goto LAB_0196181c;
  }
  FUN_0100fa74(local_48,uVar12,&local_58);
  FUN_01961c04((long *)(param_1 + 0x120),local_48);
  if (local_48[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_48[0] + 3);
    do {
      sVar11 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar11 == 1) {
      piVar1 = (int *)((long)local_48[0] + 0x1c);
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
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_38 = *local_48[0];
        FUN_00c44438(lVar9 + 0x8040,&local_38);
      }
    }
    else if (sVar11 == 0) goto LAB_0196181c;
  }
  puVar7 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_58 + 3);
    do {
      sVar11 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar11 == 1) {
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
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_38 = *puVar7;
        FUN_00c44438(lVar9 + 0x8040,&local_38);
      }
    }
    else if (sVar11 == 0) {
LAB_0196181c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_60 != (long *)0x0) {
    plVar13 = local_60 + 5;
    do {
      lVar9 = *plVar13;
      iVar8 = (int)lVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x60))();
  }
  lVar9 = *(long *)(param_1 + 0x120);
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar9 + 0x1a);
    sVar11 = *(short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar2;
      if (sVar4 == sVar11) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_019619b0;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_019619b0:
        bVar6 = false;
      }
      if (bVar6) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return;
        }
        *(undefined4 *)(lVar9 + 0xd8) = 1;
        *(undefined4 *)(lVar9 + 0xf8) = 0;
        plVar13 = (long *)(lVar9 + -0x28);
        *(undefined8 *)(lVar9 + 0xe8) = 0;
        *(undefined8 *)(lVar9 + 0xf0) = 0;
        if (((*PTR_DAT_047d8280 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8280);
        }
        lVar10 = *(long *)PTR_DAT_047d8288;
        *(long *)PTR_DAT_047d8290 = lVar10;
        FUN_0100e778(plVar13,*(undefined4 *)(lVar10 + 0x1f8));
        *(undefined4 *)(lVar9 + 0xbc) = 1;
        *(undefined2 *)(lVar9 + 0xd1) = 1;
        if (*(char *)(param_1 + 0x148) != '\0') {
          FUN_029a53a4(param_1);
        }
        if (*(int *)(lVar9 + 0x4c) == 0) {
          *(undefined4 *)(lVar9 + 0x4c) = 1;
        }
        lVar9 = *(long *)(lVar9 + 8);
        psVar2 = (short *)(lVar9 + 0x1a);
        do {
          sVar11 = *psVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*plVar13 + 0x50))(plVar13);
          return;
        }
        if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar11 = sVar4;
    } while (sVar4 != 0);
  }
  return;
}


