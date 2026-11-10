/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015a3c08; name: FUN_015a3c08
 */


void FUN_015a3c08(undefined8 *param_1)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 local_8;
  
  *param_1 = &DAT_045dbc08;
  param_1[4] = &PTR_LAB_045dbe68;
  param_1[5] = &DAT_045dbf90;
  param_1[6] = &PTR_LAB_045dbfe8;
  param_1[7] = &PTR_LAB_045dc010;
  param_1[0x24] = &PTR_LAB_045dc048;
  param_1[0x25] = &PTR_LAB_045dc108;
  param_1[0x28] = &PTR_LAB_045dc408;
  param_1[0x26] = &PTR_LAB_045dc210;
  param_1[0x27] = &PTR_LAB_045dc2f0;
  if (*(char *)(param_1 + 0x61) != '\0') {
    if (((*PTR_DAT_047d88d0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d88d0);
    }
    uVar8 = *(undefined8 *)PTR_DAT_047d88d8;
    *(undefined8 *)PTR_DAT_047d88e0 = uVar8;
    FUN_015a3e8c(uVar8,*(undefined4 *)((long)param_1 + 0x30c));
    *(undefined1 *)(param_1 + 0x61) = 0;
  }
  if ((uint)((ulong)param_1[0x2d] >> 0x20) <
      (uint)((ulong)(*(long *)(DAT_0485a0e0 + 0xe0) - *(long *)(DAT_0485a0e0 + 0xd8)) >> 2)) {
    *(undefined4 *)(*(long *)(DAT_0485a0e0 + 0xd8) + ((ulong)param_1[0x2d] >> 0x20) * 4) =
         0xffffffff;
  }
  plVar9 = (long *)param_1[0x62];
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar11 = *plVar1;
      iVar7 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x5e));
  puVar10 = (undefined8 *)param_1[0x58];
  if (puVar10 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar10 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar7 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar7 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_8 = *puVar10;
        FUN_00c44438(lVar11 + 0x8040,&local_8);
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
  if ((long *)param_1[0x2c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2c] + 0x20))();
  }
  FUN_00e6bfa4(param_1);
  return;
}


