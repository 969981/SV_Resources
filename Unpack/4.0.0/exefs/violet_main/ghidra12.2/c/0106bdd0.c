/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0106bdd0; name: FUN_0106bdd0
 */


void FUN_0106bdd0(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  short *psVar4;
  int *piVar5;
  long lVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 local_48;
  
  *param_1 = (long)&DAT_046076e0;
  param_1[4] = (long)&PTR_LAB_046077b0;
  param_1[5] = (long)&PTR_LAB_04607860;
  plVar11 = (long *)param_1[0x5b];
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 5;
    do {
      lVar17 = *plVar1;
      iVar10 = (int)lVar17 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = iVar10;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar17 = param_1[0x54];
  if (lVar17 != 0) {
    lVar18 = param_1[0x55];
    if (lVar18 == lVar17) {
      lVar18 = lVar17;
    }
    else {
      lVar19 = 0;
      do {
        lVar6 = lVar18 + lVar19;
        lVar14 = *(long *)(lVar6 + -0x60);
        if (lVar14 != 0) {
          plVar11 = *(long **)(lVar6 + -0x48);
          *(long *)(lVar6 + -0x58) = lVar14;
          lVar16 = *(long *)(lVar6 + -0x50) - lVar14;
          uVar12 = (**(code **)(*plVar11 + 0xf8))(plVar11);
          if (((uVar12 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
            (**(code **)(*plVar11 + 0x18))(plVar11,lVar14,lVar16,4);
          }
          else {
            FUN_00c48fe8(plVar11,lVar14,lVar16,4);
          }
        }
        FUN_0106c2b4(lVar6 + -0x4e0);
        if (*(long **)(lVar6 + -0x538) != (long *)0x0) {
          (**(code **)(**(long **)(lVar6 + -0x538) + 0x20))();
        }
        lVar19 = lVar19 + -0x550;
      } while (lVar17 - lVar18 != lVar19);
      lVar18 = param_1[0x54];
    }
    lVar19 = param_1[0x56];
    param_1[0x55] = lVar17;
    plVar11 = (long *)param_1[0x57];
    uVar12 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar12 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar18,lVar19 - lVar18,0x10);
    }
    else {
      FUN_00c48fe8(plVar11,lVar18,lVar19 - lVar18,0x10);
    }
  }
  FUN_0106c458(param_1 + 0x3f);
  FUN_0106c458(param_1 + 0x25);
  if ((long *)param_1[0x1d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1d] + 0x20))();
  }
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 0x20))();
  }
  puVar15 = (undefined8 *)param_1[0x12];
  if (puVar15 != (undefined8 *)0x0) {
    psVar4 = (short *)(puVar15 + 3);
    do {
      sVar7 = *psVar4;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar9) {
        *psVar4 = sVar7 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar7 == 1) {
      piVar5 = (int *)((long)puVar15 + 0x1c);
      do {
        iVar10 = *piVar5;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar9) {
          *piVar5 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_48 = *puVar15;
        FUN_00c44438(lVar17 + 0x8040,&local_48);
      }
    }
    else if (sVar7 == 0) goto LAB_0106c008;
  }
  puVar15 = (undefined8 *)param_1[0xf];
  if (puVar15 != (undefined8 *)0x0) {
    psVar4 = (short *)(puVar15 + 3);
    do {
      sVar7 = *psVar4;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar9) {
        *psVar4 = sVar7 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar7 == 1) {
      piVar5 = (int *)((long)puVar15 + 0x1c);
      do {
        iVar10 = *piVar5;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar9) {
          *piVar5 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_48 = *puVar15;
        FUN_00c44438(lVar17 + 0x8040,&local_48);
      }
    }
    else if (sVar7 == 0) goto LAB_0106c008;
  }
  puVar2 = PTR_DAT_047e3088;
  *param_1 = (long)(PTR_DAT_047e3088 + 0x10);
  param_1[4] = (long)(puVar2 + 0xc0);
  param_1[5] = (long)(puVar2 + 0x170);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 9));
  puVar2 = PTR_DAT_047e3080 + 0x88;
  puVar3 = PTR_DAT_047e3080 + 0x138;
  *param_1 = (long)(PTR_DAT_047e3080 + 0x10);
  param_1[4] = (long)puVar2;
  param_1[5] = (long)puVar3;
  puVar15 = (undefined8 *)param_1[6];
  if (puVar15 != (undefined8 *)0x0) {
    psVar4 = (short *)(puVar15 + 3);
    do {
      sVar7 = *psVar4;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar9) {
        *psVar4 = sVar7 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar7 == 1) {
      piVar5 = (int *)((long)puVar15 + 0x1c);
      do {
        iVar10 = *piVar5;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar9) {
          *piVar5 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_48 = *puVar15;
        FUN_00c44438(lVar17 + 0x8040,&local_48);
      }
    }
    else if (sVar7 == 0) {
LAB_0106c008:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


