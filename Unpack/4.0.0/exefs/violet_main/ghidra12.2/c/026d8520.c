/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026d8520; name: FUN_026d8520
 */


void FUN_026d8520(long *param_1)

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
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *local_38;
  
  *param_1 = (long)&PTR_FUN_045cca30;
  param_1[4] = (long)&PTR_LAB_045ccaa8;
  param_1[5] = (long)&DAT_045ccaf8;
  uVar12 = param_1[0x1e];
  if (uVar12 != 0) {
    uVar14 = 0;
    do {
      if (((ulong)param_1[0x11] <= uVar14) ||
         ((*(ulong *)(param_1[0x10] + (uVar14 >> 3 & 0x1ffffffffffffff8)) >> (uVar14 & 0x3f) & 1) ==
          0)) {
        FUN_026d7088(param_1,uVar14);
        uVar12 = param_1[0x1e];
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar12);
  }
  uVar12 = FUN_017ad774();
  if (((uVar12 & 1) != 0) && (param_1[0x2e] != -1)) {
    if (((*PTR_DAT_047dab40 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047dab40), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047dd780,PTR_DAT_047dab48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dab40);
    }
    *(undefined8 *)PTR_DAT_047dab50 = *(undefined8 *)PTR_DAT_047dab48;
    FUN_017ad788(&local_38);
    FUN_012845d0(local_38,param_1[0x2e]);
    if (local_38 != (long *)0x0) {
      plVar17 = local_38 + 5;
      do {
        lVar16 = *plVar17;
        iVar9 = (int)lVar16 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar8) {
          *(int *)plVar17 = iVar9;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      else if ((int)lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  if ((long *)param_1[0x2c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2c] + 0x20))();
  }
  plVar17 = (long *)param_1[0x25];
  if (plVar17 != (long *)0x0) {
    plVar15 = (long *)param_1[0x26];
    if (plVar15 == plVar17) {
      plVar15 = plVar17;
    }
    else {
      do {
        plVar15 = plVar15 + -1;
        if ((long *)*plVar15 != (long *)0x0) {
          (**(code **)(*(long *)*plVar15 + 0x20))();
        }
      } while (plVar17 != plVar15);
      plVar15 = (long *)param_1[0x25];
    }
    lVar16 = param_1[0x27];
    plVar6 = (long *)param_1[0x28];
    param_1[0x26] = (long)plVar17;
    uVar12 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar12 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar15,lVar16 - (long)plVar15,8);
    }
    else {
      FUN_00c48fe8(plVar6,plVar15,lVar16 - (long)plVar15,8);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x23));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x20));
  FUN_026d7d18(param_1 + 0x17);
  lVar16 = param_1[0x10];
  if (lVar16 != 0) {
    lVar11 = param_1[0x12];
    plVar17 = (long *)param_1[0x13];
    uVar12 = (**(code **)(*plVar17 + 0xf8))(plVar17);
    if (((uVar12 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar17 + 0x18))(plVar17,lVar16,lVar11 << 3,1);
    }
    else {
      FUN_00c48fe8(plVar17,lVar16,lVar11 << 3,1);
    }
  }
  lVar16 = param_1[9];
  if (lVar16 != 0) {
    lVar11 = param_1[0xb];
    plVar17 = (long *)param_1[0xc];
    param_1[10] = lVar16;
    uVar12 = (**(code **)(*plVar17 + 0xf8))(plVar17);
    if (((uVar12 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar17 + 0x18))(plVar17,lVar16,lVar11 - lVar16,8);
    }
    else {
      FUN_00c48fe8(plVar17,lVar16,lVar11 - lVar16,8);
    }
  }
  FUN_026d627c(param_1 + 8);
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
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_38 = (long *)*puVar13;
        FUN_00c44438(lVar16 + 0x8040,&local_38);
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


