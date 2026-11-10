/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e00820; name: FUN_02e00820
 */


void FUN_02e00820(long *param_1)

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
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 local_28;
  
  *param_1 = (long)&PTR_FUN_045ecc70;
  param_1[4] = (long)&PTR_LAB_045ecce8;
  param_1[5] = (long)&DAT_045ecd38;
  if (param_1[0x40] != 0) {
    FUN_028fc5c8(param_1 + 0x40);
    lVar13 = param_1[0x40];
    lVar12 = param_1[0x42];
    plVar15 = (long *)param_1[0x43];
    uVar9 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,lVar13,lVar12 - lVar13,8);
    }
    else {
      FUN_00c48fe8(plVar15,lVar13,lVar12 - lVar13,8);
    }
  }
  if ((char)param_1[0x3f] != '\0') {
    if ((long *)param_1[0x3e] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x3e] + 0x20))();
    }
    if ((long *)param_1[0x3a] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x3a] + 0x20))();
    }
  }
  if ((long *)param_1[0x35] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x35] + 0x20))();
  }
  plVar15 = (long *)param_1[0x2e];
  while (plVar15 != (long *)0x0) {
    plVar16 = (long *)*plVar15;
    FUN_010440c8(plVar15 + 2);
    plVar14 = (long *)param_1[0x2f];
    uVar9 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar9 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar15,0x50,8);
      plVar15 = plVar16;
    }
    else {
      FUN_00c48fe8(plVar14,plVar15,0x50,8);
      plVar15 = plVar16;
    }
  }
  lVar12 = param_1[0x28];
  param_1[0x28] = 0;
  if (lVar12 != 0) {
    lVar13 = param_1[0x29];
    plVar15 = (long *)param_1[0x2a];
    uVar9 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,lVar12,lVar13 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar15,lVar12,lVar13 << 3,8);
    }
  }
  FUN_00db239c(param_1 + 0x1e);
  FUN_00db239c(param_1 + 0x16);
  if ((long *)param_1[0x15] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x15] + 0x20))();
  }
  if ((long *)param_1[0x11] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x11] + 0x20))();
  }
  if ((long *)param_1[0xc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc] + 0x20))();
  }
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 0x20))();
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar11 = (undefined8 *)param_1[6];
  if (puVar11 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar11 + 3);
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
      piVar4 = (int *)((long)puVar11 + 0x1c);
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
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_28 = *puVar11;
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


