/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020eb614; name: FUN_020eb614
 */


void FUN_020eb614(long *param_1)

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
  code *pcVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 local_8;
  
  *param_1 = (long)&PTR_FUN_04581350;
  param_1[4] = (long)&PTR_LAB_045813e0;
  param_1[5] = (long)&DAT_04581430;
  FUN_0164cb74(param_1 + 0x142);
  plVar10 = (long *)param_1[0x141];
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar12 = *plVar1;
      iVar9 = (int)lVar12 + -1;
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
    else if ((int)lVar12 == 0) goto LAB_020eb7e8;
  }
  FUN_020eb810(param_1 + 0x13a);
  pcVar11 = (code *)param_1[299];
  if (pcVar11 != (code *)0x0) {
    param_1[0x12d] = 0;
    param_1[300] = 0;
    param_1[299] = 0;
    param_1[0x12a] = 0;
    (*pcVar11)(param_1 + 0x12e);
  }
  plVar10 = (long *)param_1[0x129];
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar12 = *plVar1;
      iVar9 = (int)lVar12 + -1;
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
    else if ((int)lVar12 == 0) {
LAB_020eb7e8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  puVar2 = PTR_DAT_047d8c78 + 0x88;
  puVar3 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar2;
  param_1[5] = (long)puVar3;
  puVar13 = (undefined8 *)param_1[6];
  if (puVar13 != (undefined8 *)0x0) {
    psVar4 = (short *)(puVar13 + 3);
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
      piVar5 = (int *)((long)puVar13 + 0x1c);
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
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_8 = *puVar13;
        FUN_00c44438(lVar12 + 0x8040,&local_8);
      }
    }
    else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


