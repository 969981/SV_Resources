/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0273f20c; name: FUN_0273f20c
 */


void FUN_0273f20c(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  short *psVar4;
  int *piVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 local_38;
  
  *param_1 = (long)&PTR_FUN_045d9560;
  param_1[4] = (long)&PTR_LAB_045d9628;
  param_1[5] = (long)&DAT_045d9678;
  plVar10 = (long *)param_1[0x79];
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar13 = *plVar1;
      iVar9 = (int)lVar13 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar13 == 0) goto LAB_0273f43c;
  }
  plVar10 = (long *)param_1[0x78];
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar13 = *plVar1;
      iVar9 = (int)lVar13 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar13 == 0) {
LAB_0273f43c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (param_1[0x71] != 0) {
    FUN_0273f0a0(param_1 + 0x71);
    lVar14 = param_1[0x71];
    lVar13 = param_1[0x73];
    plVar10 = (long *)param_1[0x74];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if ((uVar11 & 1) != 0) {
      lVar12 = FUN_00c4e600();
      if (0 < *(int *)(lVar12 + 0x12c8)) {
        FUN_00c48fe8(plVar10,lVar14,lVar13 - lVar14,8);
        goto LAB_0273f2d4;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar14,lVar13 - lVar14,8);
  }
LAB_0273f2d4:
  puVar15 = (undefined8 *)param_1[0x6c];
  puVar2 = PTR_DAT_047dd318 + 0xc0;
  puVar3 = PTR_DAT_047dd318 + 0x110;
  *param_1 = (long)(PTR_DAT_047dd318 + 0x10);
  param_1[4] = (long)puVar2;
  param_1[5] = (long)puVar3;
  if (puVar15 != (undefined8 *)0x0) {
    psVar4 = (short *)(puVar15 + 3);
    do {
      sVar6 = *psVar4;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar8) {
        *psVar4 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)puVar15 + 0x1c);
      do {
        iVar9 = *piVar5;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar8) {
          *piVar5 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_38 = *puVar15;
        FUN_00c44438(lVar13 + 0x8040,&local_38);
      }
    }
    else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  FUN_00fef530(param_1);
  return;
}


