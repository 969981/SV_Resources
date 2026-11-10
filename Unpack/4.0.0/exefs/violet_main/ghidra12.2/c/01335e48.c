/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01335e48; name: FUN_01335e48
 */


void FUN_01335e48(long *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 local_28;
  
  plVar9 = *(long **)(param_2 + 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = *(long **)(param_2 + 0x10);
    if (*plVar9 != param_2) {
      lVar8 = *(long *)(param_2 + 0x10);
      plVar9 = *(long **)(lVar8 + 0x10);
      if (*plVar9 != lVar8) {
        lVar8 = *(long *)(lVar8 + 0x10);
        while( true ) {
          plVar9 = *(long **)(lVar8 + 0x10);
          if (*plVar9 == lVar8) break;
          lVar8 = *(long *)(lVar8 + 0x10);
        }
      }
    }
  }
  else {
    plVar11 = (long *)*plVar9;
    if (((plVar11 != (long *)0x0) &&
        (plVar12 = (long *)*plVar11, plVar9 = plVar11, plVar12 != (long *)0x0)) &&
       (plVar11 = (long *)*plVar12, plVar9 = plVar12, plVar11 != (long *)0x0)) {
      plVar9 = plVar11;
      for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        plVar9 = plVar11;
      }
    }
  }
  if (*param_1 == param_2) {
    *param_1 = (long)plVar9;
  }
  param_1[6] = param_1[6] + -1;
  FUN_01336080(param_1[1],param_2);
  puVar10 = *(undefined8 **)(param_2 + 0x28);
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
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
      piVar2 = (int *)((long)puVar10 + 0x1c);
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
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_28 = *puVar10;
        FUN_00c44438(lVar8 + 0x8040,&local_28);
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
  plVar9 = (long *)param_1[2];
  uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01335f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x18))(plVar9,param_2,0x38,8);
    return;
  }
  FUN_00c48fe8(plVar9,param_2,0x38,8);
  return;
}


