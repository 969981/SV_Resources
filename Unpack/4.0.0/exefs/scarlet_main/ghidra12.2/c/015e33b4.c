/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015e33b4; name: FUN_015e33b4
 */


void FUN_015e33b4(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  short *psVar4;
  int *piVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long *local_40;
  long *local_38;
  undefined1 auStack_18 [8];
  
  plVar12 = (long *)param_1[0x15];
  *param_1 = (long)&DAT_0459ba98;
  param_1[4] = (long)&PTR_LAB_0459bb10;
  param_1[5] = (long)&DAT_0459bb60;
  param_1[0x2b] = -1;
  if (plVar12 != (long *)0x0) {
    do {
      FUN_015e3794(plVar12[2],param_1 + 0xe);
      FUN_00c9e664(&local_40,plVar12[2] + 0xe8);
      if (local_40 != (long *)0x0) {
        lVar11 = 0;
        if (local_38 != (long *)0x0) {
          lVar11 = local_38[9];
        }
        lVar11 = FUN_0156b930(lVar11 + 0x108,auStack_18);
        if (lVar11 != 0) {
          FUN_015e4200();
        }
      }
      if (local_38 != (long *)0x0) {
        plVar1 = local_38 + 5;
        do {
          lVar11 = *plVar1;
          iVar9 = (int)lVar11 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *(int *)plVar1 = iVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_38 + 0x10))();
        }
        else if ((int)lVar11 == 0) goto LAB_015e36e8;
      }
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x60))();
      }
      plVar12 = (long *)*plVar12;
    } while (plVar12 != (long *)0x0);
  }
  FUN_015e3f5c(param_1 + 0xf);
  for (plVar12 = (long *)param_1[0x22]; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
    FUN_015e3a74(plVar12[2]);
  }
  FUN_015e3b14(param_1 + 0x1c);
  puVar10 = (undefined8 *)param_1[0x2f];
  if (puVar10 != (undefined8 *)0x0) {
    psVar4 = (short *)(puVar10 + 3);
    do {
      sVar6 = *psVar4;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar8) {
        *psVar4 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar9 = *piVar5;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar8) {
          *piVar5 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_40 = (long *)*puVar10;
        FUN_00c44438(lVar11 + 0x8040,&local_40);
      }
    }
    else if (sVar6 == 0) goto LAB_015e359c;
  }
  if ((long *)param_1[0x29] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x29] + 0x60))();
  }
  FUN_015e38a8(param_1 + 0x1c);
  FUN_015e3ca0(param_1 + 0xf);
  if ((long *)param_1[0xe] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xe] + 0x18))();
  }
  plVar12 = (long *)param_1[0xd];
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 5;
    do {
      lVar11 = *plVar1;
      iVar9 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_015e36e8;
  }
  if ((long *)param_1[0xc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc] + 0x20))();
  }
  plVar12 = (long *)param_1[8];
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 5;
    do {
      lVar11 = *plVar1;
      iVar9 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
LAB_015e36e8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  puVar2 = PTR_DAT_047d8c78 + 0x88;
  puVar3 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar2;
  param_1[5] = (long)puVar3;
  puVar10 = (undefined8 *)param_1[6];
  if (puVar10 != (undefined8 *)0x0) {
    psVar4 = (short *)(puVar10 + 3);
    do {
      sVar6 = *psVar4;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar8) {
        *psVar4 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar9 = *piVar5;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar8) {
          *piVar5 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_40 = (long *)*puVar10;
        FUN_00c44438(lVar11 + 0x8040,&local_40);
      }
    }
    else if (sVar6 == 0) {
LAB_015e359c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


