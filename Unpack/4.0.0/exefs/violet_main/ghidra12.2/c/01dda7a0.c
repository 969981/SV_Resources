/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dda7a0; name: FUN_01dda7a0
 */


void FUN_01dda7a0(long param_1,undefined8 param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *local_48;
  undefined8 uStack_40;
  long *local_38;
  long *local_30;
  long *local_28;
  
  if ((int)param_2 == 0xb) {
    iVar9 = *(int *)(param_1 + 0x2a8);
    uVar10 = FUN_01195854();
    FUN_014e8ffc(&local_28,uVar10,iVar9 + -1);
    uVar10 = *(undefined8 *)(param_1 + 0x1c0);
    local_30 = local_28;
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 5;
      do {
        lVar11 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)lVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    uVar8 = FUN_0168d1c0();
    FUN_01ddaa3c(uVar10,0,&local_30,uVar8);
    if (local_30 != (long *)0x0) {
      plVar1 = local_30 + 5;
      do {
        lVar11 = *plVar1;
        iVar9 = (int)lVar11 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
      else if ((int)lVar11 == 0) goto LAB_01dda898;
    }
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 5;
      do {
        lVar11 = *plVar1;
        iVar9 = (int)lVar11 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      else if ((int)lVar11 == 0) goto LAB_01dda898;
    }
    param_2 = 0xb;
  }
  FUN_01dd4de4(&local_38,param_1,param_2);
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_01084328(&local_48,param_1 + 0x130);
  FUN_01ddaa6c(&local_48,s_FE2444A4EBE001E38_04541bac,&local_38);
  puVar7 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_48 + 3);
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
      piVar3 = (int *)((long)local_48 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_28 = (long *)*puVar7;
        FUN_00c44438(lVar11 + 0x8040,&local_28);
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
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 5;
    do {
      lVar11 = *plVar1;
      iVar9 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
LAB_01dda898:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


