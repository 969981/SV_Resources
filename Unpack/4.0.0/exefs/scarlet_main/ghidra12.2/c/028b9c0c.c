/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b9c0c; name: FUN_028b9c0c
 */


void FUN_028b9c0c(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 local_38;
  
  *param_1 = &PTR_FUN_045e7f88;
  param_1[4] = &PTR_LAB_045e7fb8;
  param_1[0x24] = PTR_DAT_047dd9c0 + 0x10;
  FUN_01495094(param_1 + 0x24);
  puVar12 = (undefined8 *)param_1[0x36];
  if (puVar12 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar12 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar12 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_38 = *puVar12;
        FUN_00c44438(lVar13 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  pcVar10 = (code *)param_1[0x27];
  if (pcVar10 != (code *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    (*pcVar10)(param_1 + 0x2a);
  }
  plVar8 = (long *)param_1[0x21];
  if (plVar8 != (long *)0x0) {
    lVar13 = plVar8[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_028b9b94(param_1 + 0x20);
  lVar13 = param_1[0x19];
  if (lVar13 != 0) {
    lVar11 = param_1[0x1a];
    if (lVar11 == lVar13) {
      lVar11 = lVar13;
    }
    else {
      do {
        plVar8 = (long *)(lVar11 + -8);
        lVar11 = lVar11 + -0x20;
        if ((long *)*plVar8 != (long *)0x0) {
          (**(code **)(*(long *)*plVar8 + 0x20))();
        }
      } while (lVar13 != lVar11);
      lVar11 = param_1[0x19];
    }
    lVar4 = param_1[0x1b];
    plVar8 = (long *)param_1[0x1c];
    param_1[0x1a] = lVar13;
    uVar9 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if ((uVar9 & 1) != 0) {
      lVar13 = FUN_00c4e600();
      if (0 < *(int *)(lVar13 + 0x12c8)) {
        FUN_00c48fe8(plVar8,lVar11,lVar4 - lVar11,8);
        goto LAB_028b9c88;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar11,lVar4 - lVar11,8);
  }
LAB_028b9c88:
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 0x20))();
  }
  if ((long *)param_1[0x14] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14] + 0x20))();
  }
  if ((long *)param_1[0x10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10] + 0x20))();
  }
  FUN_00db239c(param_1 + 5);
  return;
}


