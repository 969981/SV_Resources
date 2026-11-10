/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014e4b9c; name: FUN_014e4b9c
 */


void FUN_014e4b9c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  lVar9 = *(long *)(param_1 + 0x1c0);
  plVar11 = (long *)*param_3;
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 5;
    do {
      lVar12 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = (int)lVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar12 == -1) goto LAB_014e4e80;
  }
  lVar12 = *(long *)(lVar9 + 0x118);
  *(undefined4 *)(lVar9 + 0xcc) = 0;
  *(undefined2 *)(lVar9 + 0xd0) = 0;
  *(undefined4 *)(lVar9 + 0xd4) = 0;
  *(undefined4 *)(lVar9 + 0xdc) = 0;
  FUN_0109c76c(lVar9,plVar11);
  if (*(char *)(lVar12 + 0x54) != '\0') {
    **(undefined2 **)(lVar12 + 0x30) = 0;
    *(undefined2 *)(lVar12 + 0x52) = 0;
  }
  FUN_0109c334(lVar9,lVar12,plVar11,0,0);
  plVar10 = *(long **)(lVar9 + 0x118);
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)lVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar9 == -1) goto LAB_014e4e80;
  }
  plVar1 = plVar11 + 5;
  do {
    lVar9 = *plVar1;
    iVar8 = (int)lVar9 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *(int *)plVar1 = iVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  else if ((int)lVar9 == 0) goto LAB_014e4d1c;
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_00ca1a48(&local_50,param_1 + 0x120);
  local_58 = plVar10;
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 5;
    do {
      lVar9 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = (int)lVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar9 == -1) {
LAB_014e4e80:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_0111d018(&local_50,param_2,&local_58);
  if (local_58 != (long *)0x0) {
    plVar11 = local_58 + 5;
    do {
      lVar9 = *plVar11;
      iVar8 = (int)lVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_014e4d1c;
  }
  puVar7 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_50 + 3);
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
      piVar3 = (int *)((long)local_50 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_28 = *puVar7;
        FUN_00c44438(lVar9 + 0x8040,&local_28);
      }
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 5;
    do {
      lVar9 = *plVar11;
      iVar8 = (int)lVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar9 == 0) {
LAB_014e4d1c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


