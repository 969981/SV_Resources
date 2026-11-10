/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02150730; name: FUN_02150730
 */


void FUN_02150730(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  local_68 = &local_48;
  local_48 = 0;
  FUN_02150a30(param_1,&local_68);
  lVar9 = local_48;
  if (local_48 != 0) {
    uVar7 = FUN_02150724(param_1);
    plVar8 = *(long **)(param_1 + 200);
    if (plVar8 == (long *)0x0) {
      return;
    }
    plVar1 = plVar8 + 5;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar10 == -1) {
LAB_021509e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    do {
      lVar10 = *plVar1;
      iVar6 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_02150a08;
    plVar8 = *(long **)(param_1 + 200);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 5;
      do {
        lVar10 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar10 == -1) goto LAB_021509e0;
    }
    local_68 = *(long **)(lVar9 + 0x88);
    uStack_60 = *(undefined8 *)(lVar9 + 0x90);
    local_58 = *(undefined8 *)(lVar9 + 0x98);
    local_50 = *(long **)(lVar9 + 0xa0);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x18))();
    }
    lVar9 = (**(code **)(*plVar8 + 0x130))
                      (plVar8,param_1,lVar9 + 0x40,&local_68,
                       (int)((ulong)uVar7 >> 0x20) * (int)uVar7);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    plVar1 = plVar8 + 5;
    do {
      lVar10 = *plVar1;
      iVar6 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    else if ((int)lVar10 == 0) goto LAB_02150a08;
    if (lVar9 == 0) {
      lVar9 = *(long *)(param_1 + 0x650);
    }
    else {
      plVar8 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x28))((undefined8 *)(lVar9 + 0x28));
      if (((*PTR_DAT_047d9050 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d9050), iVar6 != 0)) {
        uVar7 = FUN_00ea2d24();
        *(undefined8 *)PTR_DAT_047d9058 = uVar7;
        __cxa_guard_release(PTR_DAT_047d9050);
      }
      for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        if (plVar8 == (long *)PTR_DAT_047d9058) goto LAB_02150898;
      }
      lVar9 = 0;
LAB_02150898:
      *(long *)(param_1 + 0x650) = lVar9;
    }
    if (lVar9 != 0) {
      lVar10 = *(long *)(param_1 + 200);
      if (lVar10 != 0) {
        piVar2 = (int *)(lVar10 + 0x28);
        do {
          iVar6 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == -1) goto LAB_021509e0;
      }
      plVar8 = *(long **)(lVar9 + 200);
      *(undefined8 *)(lVar9 + 200) = 0;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 5;
        do {
          lVar5 = *plVar1;
          iVar6 = (int)lVar5 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        else if ((int)lVar5 == 0) {
LAB_02150a08:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      *(long *)(lVar9 + 200) = lVar10;
      lVar9 = *(long *)(param_1 + 0x650);
      local_68 = *(long **)(lVar9 + 0x88);
      uStack_60 = *(undefined8 *)(lVar9 + 0x90);
      plVar8 = *(long **)(param_1 + 200);
      local_58 = *(undefined8 *)(lVar9 + 0x98);
      local_50 = *(long **)(lVar9 + 0xa0);
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x18))();
      }
      (**(code **)(*plVar8 + 0x70))(plVar8,&local_68,0);
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x20))();
      }
    }
  }
  return;
}


