/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02dfa4f0; name: FUN_02dfa4f0
 */


void FUN_02dfa4f0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  long *plVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 local_8;
  
  *param_1 = (long)&PTR_FUN_045eaf08;
  param_1[4] = (long)&PTR_LAB_045eaf80;
  param_1[5] = (long)&DAT_045eafd0;
  plVar10 = (long *)param_1[0x19];
  if (plVar10 != (long *)0x0) {
    plVar5 = plVar10 + 5;
    do {
      lVar11 = *plVar5;
      iVar9 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar8) {
        *(int *)plVar5 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_028e8c14(param_1 + 0x10);
  FUN_028e9534(param_1 + 9);
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 0x20))();
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar12 = (undefined8 *)param_1[6];
  if (puVar12 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar12 + 3);
    do {
      sVar6 = *psVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar8) {
        *psVar3 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar4 = (int *)((long)puVar12 + 0x1c);
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_8 = *puVar12;
        FUN_00c44438(lVar11 + 0x8040,&local_8);
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


