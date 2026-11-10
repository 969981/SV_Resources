/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fa1490; name: FUN_01fa1490
 */


void FUN_01fa1490(long param_1,long *param_2)

{
  long *plVar1;
  short *psVar2;
  long *plVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  long *plVar12;
  long *local_40;
  long *local_38;
  long local_18;
  
  if ((*param_2 != 0) && (*(short *)(*param_2 + 0x1a) != 0)) {
    FUN_00d391ac(param_1 + 0x208);
  }
  FUN_00c9e664(&local_40,param_1 + 0xe8);
  if (local_38 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar11 = (long *)local_38[9];
    plVar1 = local_38 + 5;
    do {
      lVar9 = *plVar1;
      iVar8 = (int)lVar9 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x60))();
  }
  local_40 = (long *)0x0;
  local_38 = (long *)0x0;
  FUN_00d391ac(&local_40,param_1 + 0x208);
  plVar1 = local_40;
  if (local_40 != (long *)0x0) {
    if (*(short *)((long)local_40 + 0x1a) != 0) {
      psVar2 = (short *)((long)local_40 + 0x1a);
      sVar10 = *(short *)((long)local_40 + 0x1a);
      do {
        sVar5 = *psVar2;
        if (sVar5 == sVar10) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar10 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_01fa158c;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01fa158c:
          bVar7 = false;
        }
        if (bVar7) {
          plVar12 = (long *)0x0;
          if (local_40[2] != 0) {
            plVar12 = (long *)(local_40[2] + -0x28);
          }
          goto LAB_01fa15b4;
        }
        sVar10 = sVar5;
      } while (sVar5 != 0);
    }
    plVar12 = (long *)0x0;
LAB_01fa15b4:
    plVar3 = local_40 + 3;
    do {
      sVar10 = (short)*plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(short *)plVar3 = sVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar10 == 1) {
      piVar4 = (int *)((long)local_40 + 0x1c);
      do {
        iVar8 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_18 = *plVar1;
        FUN_00c44438(lVar9 + 0x8040,&local_18);
      }
    }
    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar11 == (long *)0x0) {
      if (plVar12 == (long *)0x0) {
        return;
      }
    }
    else {
      if (plVar12 == (long *)0x0) {
        return;
      }
      local_40 = plVar11;
      (**(code **)(*plVar11 + 0x58))(plVar11);
      FUN_0158822c(plVar12,&local_40);
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x60))();
      }
    }
    lVar9 = plVar12[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar10 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


