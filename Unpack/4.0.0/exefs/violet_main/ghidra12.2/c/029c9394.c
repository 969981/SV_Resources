/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029c9394; name: FUN_029c9394
 */


void FUN_029c9394(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 local_28;
  
  *param_1 = (long)&PTR_FUN_04606b18;
  param_1[4] = (long)&PTR_LAB_04606be8;
  param_1[5] = (long)&PTR_LAB_04606c98;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2a));
  plVar16 = (long *)param_1[0x23];
  if (plVar16 != (long *)0x0) {
    plVar15 = (long *)*plVar16;
    pcVar11 = (code *)plVar16[7];
    if (pcVar11 != (code *)0x0) {
      plVar16[8] = 0;
      plVar16[9] = 0;
      plVar16[6] = 0;
      plVar16[7] = 0;
      (*pcVar11)(plVar16 + 10);
    }
    if ((long *)plVar16[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar16[5] + 0x20))();
    }
    plVar17 = (long *)param_1[0x24];
    uVar9 = (**(code **)(*plVar17 + 0xf8))(plVar17);
    if (((uVar9 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar17 + 0x18))(plVar17,plVar16,0xb0,0x10);
    }
    else {
      FUN_00c48fe8(plVar17,plVar16,0xb0,0x10);
    }
    while (plVar15 != (long *)0x0) {
      plVar16 = (long *)*plVar15;
      pcVar11 = (code *)plVar15[7];
      if (pcVar11 != (code *)0x0) {
        plVar15[8] = 0;
        plVar15[9] = 0;
        plVar15[6] = 0;
        plVar15[7] = 0;
        (*pcVar11)(plVar15 + 10);
      }
      if ((long *)plVar15[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar15[5] + 0x20))();
      }
      plVar17 = (long *)param_1[0x24];
      uVar9 = (**(code **)(*plVar17 + 0xf8))(plVar17);
      if (((uVar9 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar17 + 0x18))(plVar17,plVar15,0xb0,0x10);
        plVar15 = plVar16;
      }
      else {
        FUN_00c48fe8(plVar17,plVar15,0xb0,0x10);
        plVar15 = plVar16;
      }
    }
  }
  lVar13 = param_1[0x1d];
  param_1[0x1d] = 0;
  if (lVar13 != 0) {
    lVar14 = param_1[0x1e];
    plVar16 = (long *)param_1[0x1f];
    uVar9 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar13,lVar14 << 3,0x10);
    }
    else {
      FUN_00c48fe8(plVar16,lVar13,lVar14 << 3,0x10);
    }
  }
  lVar13 = param_1[0x16];
  if (lVar13 != 0) {
    lVar14 = param_1[0x17];
    if (lVar14 == lVar13) {
      lVar14 = lVar13;
    }
    else {
      if (*(long **)(lVar14 + -8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar14 + -8) + 0x20))();
      }
      if (lVar14 + -0x60 != lVar13) {
        if (*(long **)(lVar14 + -0x68) != (long *)0x0) {
          (**(code **)(**(long **)(lVar14 + -0x68) + 0x20))();
        }
        if (lVar14 + -0xc0 != lVar13) {
          if (*(long **)(lVar14 + -200) != (long *)0x0) {
            (**(code **)(**(long **)(lVar14 + -200) + 0x20))();
          }
          if (lVar14 + -0x120 != lVar13) {
            if (*(long **)(lVar14 + -0x128) != (long *)0x0) {
              (**(code **)(**(long **)(lVar14 + -0x128) + 0x20))();
            }
            if (lVar14 + -0x180 != lVar13) {
              do {
                if (*(long **)(lVar14 + -0x188) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar14 + -0x188) + 0x20))();
                }
                lVar14 = lVar14 + -0x60;
              } while (lVar13 + 0x180 != lVar14);
            }
          }
        }
      }
      lVar14 = param_1[0x16];
    }
    lVar10 = param_1[0x18];
    plVar16 = (long *)param_1[0x19];
    param_1[0x17] = lVar13;
    uVar9 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar9 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar14,lVar10 - lVar14,0x10);
    }
    else {
      FUN_00c48fe8(plVar16,lVar14,lVar10 - lVar14,0x10);
    }
  }
  lVar13 = param_1[0xf];
  if (lVar13 != 0) {
    lVar14 = param_1[0x10];
    if (lVar14 == lVar13) {
      lVar14 = lVar13;
    }
    else {
      do {
        lVar14 = lVar14 + -0x40;
        FUN_00db239c(lVar14);
      } while (lVar13 != lVar14);
      lVar14 = param_1[0xf];
    }
    lVar10 = param_1[0x11];
    plVar16 = (long *)param_1[0x12];
    param_1[0x10] = lVar13;
    uVar9 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar9 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar14,lVar10 - lVar14,8);
    }
    else {
      FUN_00c48fe8(plVar16,lVar14,lVar10 - lVar14,8);
    }
  }
  plVar16 = (long *)param_1[0xd];
  if (plVar16 != (long *)0x0) {
    plVar15 = plVar16 + 5;
    do {
      lVar13 = *plVar15;
      iVar8 = (int)lVar13 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *(int *)plVar15 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
    else if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  puVar1 = PTR_DAT_047e3088;
  *param_1 = (long)(PTR_DAT_047e3088 + 0x10);
  param_1[4] = (long)(puVar1 + 0xc0);
  param_1[5] = (long)(puVar1 + 0x170);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 9));
  puVar1 = PTR_DAT_047e3080 + 0x88;
  puVar2 = PTR_DAT_047e3080 + 0x138;
  *param_1 = (long)(PTR_DAT_047e3080 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar12 = (undefined8 *)param_1[6];
  if (puVar12 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar12 + 3);
    do {
      sVar5 = *psVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar12 + 0x1c);
      do {
        iVar8 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
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
        local_28 = *puVar12;
        FUN_00c44438(lVar13 + 0x8040,&local_28);
      }
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


