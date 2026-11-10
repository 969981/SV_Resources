/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01284184; name: FUN_01284184
 */


void FUN_01284184(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  long *plVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 local_28;
  
  *param_1 = (long)&DAT_045aa688;
  param_1[4] = (long)&PTR_LAB_045aa700;
  param_1[5] = (long)&DAT_045aa750;
  uVar11 = param_1[0x1e];
  if (uVar11 != 0) {
    if ((param_1[0x11] == 0) || ((*(byte *)param_1[0x10] & 1) == 0)) {
      FUN_01284cd0(param_1,0);
      uVar11 = param_1[0x1e];
    }
    if (1 < uVar11) {
      if (((ulong)param_1[0x11] < 2) || ((*(byte *)param_1[0x10] >> 1 & 1) == 0)) {
        FUN_01284cd0(param_1,1);
        uVar11 = param_1[0x1e];
      }
      if (2 < uVar11) {
        uVar15 = 2;
        do {
          if (((ulong)param_1[0x11] <= uVar15) ||
             ((*(ulong *)(param_1[0x10] + (uVar15 >> 3 & 0x1ffffffffffffff8)) >> (uVar15 & 0x3f) & 1
              ) == 0)) {
            FUN_01284cd0(param_1,uVar15);
            uVar11 = param_1[0x1e];
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar11);
      }
    }
  }
  if (((*PTR_DAT_047dab38 & 1) != 0) && (param_1[0x2e] != -1)) {
    if (((*PTR_DAT_047dab40 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047dab40), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047dd780,PTR_DAT_047dab48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dab40);
    }
    lVar12 = *(long *)PTR_DAT_047dab48;
    *(long *)PTR_DAT_047dab50 = lVar12;
    plVar14 = *(long **)(lVar12 + 0x140);
    if (plVar14 == (long *)0x0) {
      FUN_012845d0(0,param_1[0x2e]);
    }
    else {
      plVar16 = plVar14 + 5;
      do {
        lVar12 = *plVar16;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar8) {
          *(int *)plVar16 = (int)lVar12 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((int)lVar12 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      FUN_012845d0(plVar14,param_1[0x2e]);
      do {
        lVar12 = *plVar16;
        iVar9 = (int)lVar12 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar8) {
          *(int *)plVar16 = iVar9;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
      else if ((int)lVar12 == 0) goto LAB_01284400;
    }
  }
  if ((long *)param_1[0x2c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2c] + 0x20))();
  }
  plVar14 = (long *)param_1[0x25];
  if (plVar14 != (long *)0x0) {
    plVar16 = (long *)param_1[0x26];
    if (plVar16 == plVar14) {
      plVar16 = plVar14;
    }
    else {
      do {
        plVar16 = plVar16 + -1;
        if ((long *)*plVar16 != (long *)0x0) {
          (**(code **)(*(long *)*plVar16 + 0x20))();
        }
      } while (plVar14 != plVar16);
      plVar16 = (long *)param_1[0x25];
    }
    lVar12 = param_1[0x27];
    plVar6 = (long *)param_1[0x28];
    param_1[0x26] = (long)plVar14;
    uVar11 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar11 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar16,lVar12 - (long)plVar16,8);
    }
    else {
      FUN_00c48fe8(plVar6,plVar16,lVar12 - (long)plVar16,8);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x23));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x20));
  FUN_01284734(param_1 + 9);
  plVar14 = (long *)param_1[8];
  if (plVar14 != (long *)0x0) {
    plVar16 = plVar14 + 5;
    do {
      lVar12 = *plVar16;
      iVar9 = (int)lVar12 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar8) {
        *(int *)plVar16 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
    else if ((int)lVar12 == 0) {
LAB_01284400:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar13 = (undefined8 *)param_1[6];
  if (puVar13 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar13 + 3);
    do {
      sVar5 = *psVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar8) {
        *psVar3 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar9 = *piVar4;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar8) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_28 = *puVar13;
        FUN_00c44438(lVar12 + 0x8040,&local_28);
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


