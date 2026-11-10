/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015c8234; name: FUN_015c8234
 */


void FUN_015c8234(undefined8 *param_1)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 local_38;
  
  *param_1 = &DAT_045dc840;
  param_1[4] = &PTR_LAB_045dc990;
  param_1[5] = &DAT_045dcab8;
  param_1[6] = &PTR_LAB_045dcb10;
  param_1[7] = &PTR_LAB_045dcb38;
  FUN_015c862c();
  plVar9 = (long *)param_1[0x18c];
  if (plVar9 != (long *)0x0) {
    lVar13 = plVar9[6];
    psVar2 = (short *)(lVar13 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar11 = (undefined8 *)param_1[0x18a];
  if (puVar11 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar11 + 3);
    do {
      sVar4 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)puVar11 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_38 = *puVar11;
        FUN_00c44438(lVar13 + 0x8040,&local_38);
      }
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x187));
  plVar9 = (long *)param_1[0x41];
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar13 = *plVar1;
      iVar8 = (int)lVar13 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar13 == 0) goto LAB_015c853c;
  }
  FUN_015c8564(param_1 + 0x32);
  lVar13 = param_1[0x2b];
  if (lVar13 != 0) {
    lVar12 = param_1[0x2c];
    if (lVar12 == lVar13) {
      lVar12 = lVar13;
    }
    else {
      do {
        lVar12 = lVar12 + -0x20;
        FUN_015c8b14(lVar12);
      } while (lVar13 != lVar12);
      lVar12 = param_1[0x2b];
    }
    lVar5 = param_1[0x2d];
    plVar9 = (long *)param_1[0x2e];
    param_1[0x2c] = lVar13;
    uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if ((uVar10 & 1) != 0) {
      lVar13 = FUN_00c4e600();
      if (0 < *(int *)(lVar13 + 0x12c8)) {
        FUN_00c48fe8(plVar9,lVar12,lVar5 - lVar12,8);
        goto LAB_015c8320;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar12,lVar5 - lVar12,8);
  }
LAB_015c8320:
  if ((long *)param_1[0x2a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2a] + 0x20))();
  }
  plVar9 = (long *)param_1[0x26];
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar13 = *plVar1;
      iVar8 = (int)lVar13 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar13 == 0) goto LAB_015c853c;
  }
  plVar9 = (long *)param_1[0x25];
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar13 = *plVar1;
      iVar8 = (int)lVar13 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar13 == 0) {
LAB_015c853c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_00e6bfa4(param_1);
  return;
}


