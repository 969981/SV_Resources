/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f7d288; name: FUN_01f7d288
 */


void FUN_01f7d288(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_28;
  
  plVar13 = (long *)param_1[0x46];
  *param_1 = &PTR_FUN_0455f450;
  param_1[4] = &PTR_LAB_0455f598;
  param_1[5] = &DAT_0455f6c0;
  param_1[6] = &PTR_LAB_0455f718;
  param_1[7] = &PTR_LAB_0455f740;
  if (plVar13 != (long *)0x0) {
    plVar12 = (long *)*plVar13;
    if ((long *)plVar13[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar13[5] + 0x20))();
    }
    plVar14 = (long *)param_1[0x47];
    uVar7 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar13,0x50,8);
    }
    else {
      FUN_00c48fe8(plVar14,plVar13,0x50,8);
    }
    while (plVar12 != (long *)0x0) {
      plVar13 = (long *)*plVar12;
      if ((long *)plVar12[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar12[5] + 0x20))();
      }
      plVar14 = (long *)param_1[0x47];
      uVar7 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,plVar12,0x50,8);
        plVar12 = plVar13;
      }
      else {
        FUN_00c48fe8(plVar14,plVar12,0x50,8);
        plVar12 = plVar13;
      }
    }
  }
  lVar10 = param_1[0x40];
  param_1[0x40] = 0;
  if (lVar10 != 0) {
    lVar9 = param_1[0x41];
    plVar13 = (long *)param_1[0x42];
    uVar7 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar10,lVar9 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar13,lVar10,lVar9 << 3,8);
    }
  }
  plVar13 = (long *)param_1[0x3b];
  if (plVar13 != (long *)0x0) {
    lVar10 = plVar13[6];
    psVar1 = (short *)(lVar10 + 0x1a);
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
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_01f7d42c;
  }
  plVar13 = (long *)param_1[0x39];
  if (plVar13 != (long *)0x0) {
    lVar10 = plVar13[0x13];
    psVar1 = (short *)(lVar10 + 0x1a);
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
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_01f7d42c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar11 = (undefined8 *)param_1[0x37];
  if (puVar11 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar11 + 3);
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
      piVar2 = (int *)((long)puVar11 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_28 = *puVar11;
        FUN_00c44438(lVar10 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  FUN_00e6bfa4(param_1);
  return;
}


