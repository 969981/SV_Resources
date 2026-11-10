/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026ed4bc; name: FUN_026ed4bc
 */


void FUN_026ed4bc(undefined8 *param_1)

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
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_28;
  
  *param_1 = &PTR_FUN_045cdcd8;
  param_1[4] = &PTR_LAB_045cde78;
  param_1[5] = &DAT_045cdfa0;
  param_1[6] = &PTR_LAB_045cdff8;
  param_1[7] = &PTR_LAB_045ce020;
  FUN_026ed6a8(param_1,param_1 + 0x27);
  lVar11 = param_1[0x6a];
  if (lVar11 != 0) {
    lVar8 = param_1[0x6b];
    if (lVar8 == lVar11) {
      lVar8 = lVar11;
    }
    else {
      do {
        plVar12 = (long *)(lVar8 + -8);
        lVar8 = lVar8 + -0x20;
        if ((long *)*plVar12 != (long *)0x0) {
          (**(code **)(*(long *)*plVar12 + 0x20))();
        }
      } while (lVar11 != lVar8);
      lVar8 = param_1[0x6a];
    }
    plVar12 = (long *)param_1[0x6d];
    lVar9 = param_1[0x6c];
    param_1[0x6b] = lVar11;
    uVar7 = FUN_00c4e564(plVar12);
    if ((uVar7 & 1) == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar8,lVar9 - lVar8,8);
    }
    else {
      FUN_00c48fe8(plVar12,lVar8,lVar9 - lVar8,8);
    }
  }
  puVar10 = (undefined8 *)param_1[0x27];
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_28 = *puVar10;
        FUN_00c44438(lVar11 + 0x8040,&local_28);
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
  FUN_026d5214(param_1);
  return;
}


