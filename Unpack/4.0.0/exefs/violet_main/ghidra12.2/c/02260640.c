/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02260640; name: FUN_02260640
 */


void FUN_02260640(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  short *psVar4;
  int *piVar5;
  short sVar6;
  long lVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long *local_38;
  
  *param_1 = (long)&PTR_FUN_045ad530;
  param_1[4] = (long)&PTR_LAB_045ad5a8;
  param_1[5] = (long)&DAT_045ad5f8;
  uVar13 = param_1[0x1e];
  if (uVar13 != 0) {
    uVar15 = 0;
    do {
      if (((ulong)param_1[0x11] <= uVar15) ||
         ((*(ulong *)(param_1[0x10] + (uVar15 >> 3 & 0x1ffffffffffffff8)) >> (uVar15 & 0x3f) & 1) ==
          0)) {
        FUN_0225b7e8(param_1,uVar15);
        uVar13 = param_1[0x1e];
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar13);
  }
  uVar13 = FUN_017ad774();
  if (((uVar13 & 1) != 0) && (param_1[0x2e] != -1)) {
    if (((*PTR_DAT_047dab40 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047dab40), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047dd780,PTR_DAT_047dab48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dab40);
    }
    *(undefined8 *)PTR_DAT_047dab50 = *(undefined8 *)PTR_DAT_047dab48;
    FUN_017ad788(&local_38);
    FUN_012845d0(local_38,param_1[0x2e]);
    if (local_38 != (long *)0x0) {
      plVar11 = local_38 + 5;
      do {
        lVar16 = *plVar11;
        iVar10 = (int)lVar16 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar9) {
          *(int *)plVar11 = iVar10;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      else if ((int)lVar16 == 0) goto LAB_022609e0;
    }
  }
  if ((long *)param_1[0x2c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2c] + 0x20))();
  }
  FUN_0225cb98(param_1 + 0x25);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x23));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x20));
  FUN_0225c720(param_1 + 0x17);
  lVar16 = param_1[0x10];
  if (lVar16 != 0) {
    lVar7 = param_1[0x12];
    plVar11 = (long *)param_1[0x13];
    uVar13 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar13 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar16,lVar7 << 3,1);
    }
    else {
      FUN_00c48fe8(plVar11,lVar16,lVar7 << 3,1);
    }
  }
  lVar16 = param_1[9];
  if (lVar16 != 0) {
    lVar7 = param_1[0xb];
    plVar11 = (long *)param_1[0xc];
    param_1[10] = lVar16;
    uVar13 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar13 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar16,lVar7 - lVar16,8);
    }
    else {
      FUN_00c48fe8(plVar11,lVar16,lVar7 - lVar16,8);
    }
  }
  plVar11 = (long *)param_1[8];
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 5;
    do {
      lVar16 = *plVar1;
      iVar10 = (int)lVar16 + -1;
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
    else if ((int)lVar16 == 0) {
LAB_022609e0:
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
  puVar14 = (undefined8 *)param_1[6];
  if (puVar14 != (undefined8 *)0x0) {
    psVar4 = (short *)(puVar14 + 3);
    do {
      sVar6 = *psVar4;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar9) {
        *psVar4 = sVar6 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)puVar14 + 0x1c);
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
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_38 = (long *)*puVar14;
        FUN_00c44438(lVar16 + 0x8040,&local_38);
      }
    }
    else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


