/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f56ff8; name: FUN_01f56ff8
 */


void FUN_01f56ff8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  undefined8 local_38;
  
  *param_1 = (long)&DAT_045572c8;
  param_1[4] = (long)&PTR_LAB_04557340;
  param_1[5] = (long)&PTR_LAB_04557390;
  uVar12 = param_1[0x1e];
  if (uVar12 != 0) {
    uVar15 = 0;
    do {
      if (((ulong)param_1[0x11] <= uVar15) ||
         ((*(ulong *)(param_1[0x10] + (uVar15 >> 3 & 0x1ffffffffffffff8)) >> (uVar15 & 0x3f) & 1) ==
          0)) {
        FUN_01f524cc(param_1,uVar15);
        uVar12 = param_1[0x1e];
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar12);
  }
  if (((*PTR_DAT_047dab38 & 1) != 0) && (param_1[0x2e] != -1)) {
    if (((*PTR_DAT_047dab40 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047dab40), iVar8 != 0)) {
      FUN_00100190(&LAB_00b592b8,PTR_DAT_047dab48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dab40);
    }
    lVar13 = *(long *)PTR_DAT_047dab48;
    *(long *)PTR_DAT_047dab50 = lVar13;
    plVar16 = *(long **)(lVar13 + 0x140);
    if (plVar16 == (long *)0x0) {
      FUN_012845d0(0,param_1[0x2e]);
    }
    else {
      plVar17 = plVar16 + 5;
      do {
        lVar13 = *plVar17;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *(int *)plVar17 = (int)lVar13 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((int)lVar13 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      FUN_012845d0(plVar16,param_1[0x2e]);
      do {
        lVar13 = *plVar17;
        iVar8 = (int)lVar13 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *(int *)plVar17 = iVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
      else if ((int)lVar13 == 0) goto LAB_01f57240;
    }
  }
  if ((long *)param_1[0x2c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2c] + 0x20))();
  }
  plVar16 = (long *)param_1[0x25];
  if (plVar16 != (long *)0x0) {
    plVar17 = (long *)param_1[0x26];
    if (plVar17 == plVar16) {
      plVar17 = plVar16;
    }
    else {
      plVar9 = (long *)plVar17[-1];
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))();
      }
      if (plVar17 + -1 != plVar16) {
        plVar9 = (long *)plVar17[-2];
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x20))();
        }
        if (plVar17 + -2 != plVar16) {
          plVar9 = (long *)plVar17[-3];
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x20))();
          }
          if (plVar17 + -3 != plVar16) {
            plVar9 = (long *)plVar17[-4];
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 0x20))();
            }
            if (plVar17 + -4 != plVar16) {
              do {
                if ((long *)plVar17[-5] != (long *)0x0) {
                  (**(code **)(*(long *)plVar17[-5] + 0x20))();
                }
                plVar17 = plVar17 + -1;
              } while (plVar16 + 4 != plVar17);
            }
          }
        }
      }
      plVar17 = (long *)param_1[0x25];
    }
    lVar13 = param_1[0x27];
    plVar9 = (long *)param_1[0x28];
    param_1[0x26] = (long)plVar16;
    uVar12 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar12 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,plVar17,lVar13 - (long)plVar17,8);
    }
    else {
      FUN_00c48fe8(plVar9,plVar17,lVar13 - (long)plVar17,8);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x23));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x20));
  FUN_01f56f58(param_1 + 0x17);
  lVar13 = param_1[0x10];
  if (lVar13 != 0) {
    lVar11 = param_1[0x12];
    plVar16 = (long *)param_1[0x13];
    uVar12 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar12 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar13,lVar11 << 3,1);
    }
    else {
      FUN_00c48fe8(plVar16,lVar13,lVar11 << 3,1);
    }
  }
  lVar13 = param_1[9];
  if (lVar13 != 0) {
    lVar11 = param_1[0xb];
    plVar16 = (long *)param_1[0xc];
    param_1[10] = lVar13;
    uVar12 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar12 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar13,lVar11 - lVar13,8);
    }
    else {
      FUN_00c48fe8(plVar16,lVar13,lVar11 - lVar13,8);
    }
  }
  plVar16 = (long *)param_1[8];
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 5;
    do {
      lVar13 = *plVar17;
      iVar8 = (int)lVar13 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
    else if ((int)lVar13 == 0) {
LAB_01f57240:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar14 = (undefined8 *)param_1[6];
  if (puVar14 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar14 + 3);
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
      piVar4 = (int *)((long)puVar14 + 0x1c);
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
        local_38 = *puVar14;
        FUN_00c44438(lVar13 + 0x8040,&local_38);
      }
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


