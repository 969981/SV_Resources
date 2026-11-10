/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01808ed0; name: FUN_01808ed0
 */


void FUN_01808ed0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *local_80;
  long *local_78;
  long *local_60;
  undefined8 *local_50;
  undefined8 uStack_48;
  long local_28;
  
  FUN_00c9e664(&local_80,param_1 + 0xe8);
  if (local_78 == (long *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = local_78[9];
  }
  plVar9 = (long *)FUN_010fff68(lVar8,*(undefined8 *)(lVar8 + 8),param_3);
  if (local_78 != (long *)0x0) {
    plVar10 = local_78 + 5;
    do {
      lVar8 = *plVar10;
      iVar7 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x60))();
  }
  (**(code **)(*plVar9 + 0x18))(&local_80,plVar9);
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  plVar10 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 5;
  }
  if ((long *)local_80[2] == plVar10) {
    FUN_010b7b78(&local_50,&local_80);
  }
  plVar9 = local_80;
  if (local_80 != (long *)0x0) {
    plVar10 = local_80 + 3;
    do {
      sVar3 = (short)*plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(short *)plVar10 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_80 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_28 = *plVar9;
        FUN_00c44438(lVar8 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) goto LAB_018090c4;
  }
  FUN_010764a4(param_1 + 0x1c0,&local_50);
  puVar6 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_80 = (long *)*puVar6;
        FUN_00c44438(lVar8 + 0x8040,&local_80);
      }
    }
    else if (sVar3 == 0) {
LAB_018090c4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(param_1 + 0x160) = *param_2;
  *(undefined8 *)(param_1 + 0x168) = param_2[1];
  *(undefined8 *)(param_1 + 0x170) = param_2[2];
  plVar9 = (long *)param_2[3];
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  plVar10 = *(long **)(param_1 + 0x178);
  *(long **)(param_1 + 0x178) = plVar9;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x180) = param_2[4];
  *(undefined8 *)(param_1 + 0x188) = param_2[5];
  *(undefined8 *)(param_1 + 400) = param_2[6];
  plVar9 = (long *)param_2[7];
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  plVar10 = *(long **)(param_1 + 0x198);
  *(long **)(param_1 + 0x198) = plVar9;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  uVar11 = *(undefined8 *)((long)param_2 + 0x4d);
  *(undefined8 *)(param_1 + 0x1a8) = param_2[9];
  uVar12 = param_2[8];
  *(undefined8 *)(param_1 + 0x1ad) = uVar11;
  *(undefined8 *)(param_1 + 0x1a0) = uVar12;
  FUN_00cbf4c0(&local_80,param_1 + 0x160);
  local_50 = *(undefined8 **)(param_1 + 8);
  FUN_018092cc(param_1 + 0x120,&local_80,&local_50);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x1d0) = 1;
  return;
}


