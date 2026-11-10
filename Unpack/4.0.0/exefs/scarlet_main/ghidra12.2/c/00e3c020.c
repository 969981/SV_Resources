/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e3c020; name: FUN_00e3c020
 */


void FUN_00e3c020(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 local_38;
  
  pcVar10 = (code *)param_1[0xb];
  if (pcVar10 != (code *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    (*pcVar10)(param_1 + 0xe);
  }
  plVar13 = (long *)param_1[2];
  if (plVar13 != (long *)0x0) {
    plVar12 = (long *)param_1[3];
    if (plVar12 == plVar13) {
      plVar12 = plVar13;
    }
    else {
      do {
        plVar12 = plVar12 + -1;
        if ((long *)*plVar12 != (long *)0x0) {
          (**(code **)(*(long *)*plVar12 + 0x20))();
        }
      } while (plVar13 != plVar12);
      plVar12 = (long *)param_1[2];
    }
    lVar11 = param_1[4];
    plVar4 = (long *)param_1[5];
    param_1[3] = plVar13;
    uVar8 = (**(code **)(*plVar4 + 0xf8))(plVar4);
    if ((uVar8 & 1) != 0) {
      lVar9 = FUN_00c4e600();
      if (0 < *(int *)(lVar9 + 0x12c8)) {
        FUN_00c48fe8(plVar4,plVar12,lVar11 - (long)plVar12,8);
        goto LAB_00e3c0c8;
      }
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,plVar12,lVar11 - (long)plVar12,8);
  }
LAB_00e3c0c8:
  param_1 = (undefined8 *)*param_1;
  if (param_1 != (undefined8 *)0x0) {
    psVar1 = (short *)(param_1 + 3);
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
      piVar2 = (int *)((long)param_1 + 0x1c);
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_38 = *param_1;
        FUN_00c44438(lVar11 + 0x8040,&local_38);
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
  return;
}


