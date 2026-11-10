/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6053c; name: FUN_01e6053c
 */


void FUN_01e6053c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  short *psVar4;
  int *piVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 local_28;
  
  *param_1 = (long)&DAT_04550f28;
  param_1[4] = (long)&PTR_LAB_04550fa8;
  param_1[5] = (long)&PTR_LAB_04550ff8;
  param_1[8] = (long)&PTR_LAB_04551050;
  if ((char)param_1[599] != '\0') {
    *(undefined1 *)(param_1 + 599) = 0;
  }
  if ((char)param_1[0x254] != '\0') {
    plVar10 = (long *)param_1[0x256];
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 5;
      do {
        lVar11 = *plVar3;
        iVar9 = (int)lVar11 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar8) {
          *(int *)plVar3 = iVar9;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar11 == 0) goto LAB_01e60620;
    }
    *(undefined1 *)(param_1 + 0x254) = 0;
  }
  plVar10 = (long *)param_1[0x253];
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 5;
    do {
      lVar11 = *plVar3;
      iVar9 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *(int *)plVar3 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
LAB_01e60620:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_01c0b508(param_1 + 0x252);
  if (*(char *)((long)param_1 + 0x974) != '\0') {
    *(undefined1 *)((long)param_1 + 0x974) = 0;
  }
  if (*(char *)((long)param_1 + 0x5c) != '\0') {
    *(undefined1 *)((long)param_1 + 0x5c) = 0;
  }
  plVar10 = (long *)param_1[10];
  if (plVar10 != (long *)0x0) {
    lVar11 = plVar10[6];
    psVar4 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar12 = (undefined8 *)param_1[6];
  if (puVar12 != (undefined8 *)0x0) {
    psVar4 = (short *)(puVar12 + 3);
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
      piVar5 = (int *)((long)puVar12 + 0x1c);
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_28 = *puVar12;
        FUN_00c44438(lVar11 + 0x8040,&local_28);
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


