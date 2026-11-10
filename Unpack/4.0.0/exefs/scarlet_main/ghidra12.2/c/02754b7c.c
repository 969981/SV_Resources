/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02754b7c; name: FUN_02754b7c
 */


void FUN_02754b7c(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *local_60;
  long *local_58;
  
  puVar4 = PTR_DAT_047d4240;
  if (((*PTR_DAT_047d4240 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  puVar6 = PTR_DAT_047d4250;
  puVar5 = PTR_DAT_047d4248;
  uVar8 = *(undefined8 *)PTR_DAT_047d4248;
  *(undefined8 *)PTR_DAT_047d4250 = uVar8;
  FUN_00cf9884(&local_58,uVar8,"Light");
  plVar1 = (long *)PTR_DAT_047d8b70;
  plVar9 = (long *)PTR_DAT_047d8b70;
  if (*(long *)(param_2 + 8) != 0) {
    plVar9 = (long *)(*(long *)(param_2 + 8) + 0x30);
  }
  lVar10 = *plVar9;
  plVar9 = (long *)PTR_DAT_047d8b70;
  if (local_58 != (long *)0x0) {
    plVar9 = local_58 + 6;
  }
  lVar11 = *plVar9;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (lVar10 == lVar11) {
    plVar9 = (long *)FUN_02754f88(*(undefined8 *)(param_1 + 8),param_2);
    if (plVar9 == (long *)0x0) {
LAB_02754c64:
      local_58 = plVar9;
      FUN_027550b8(param_1 + 0x128,&local_58);
      FUN_0275510c(&local_58);
      if (plVar9 == (long *)0x0) {
        return;
      }
      plVar1 = plVar9 + 5;
      do {
        lVar10 = *plVar1;
        iVar7 = (int)lVar10 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        return;
      }
      if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
      return;
    }
    plVar1 = plVar9 + 5;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar10 != -1) {
      plVar1 = plVar9 + 5;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_58 = plVar9;
      if ((int)lVar10 != -1) goto LAB_02754c64;
    }
  }
  else {
    if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar8 = *(undefined8 *)puVar5;
    *(undefined8 *)puVar6 = uVar8;
    FUN_00cf9884(&local_58,uVar8,"ImplicitVolume");
    plVar9 = plVar1;
    if (*(long *)(param_2 + 8) != 0) {
      plVar9 = (long *)(*(long *)(param_2 + 8) + 0x30);
    }
    lVar10 = *plVar9;
    plVar9 = plVar1;
    if (local_58 != (long *)0x0) {
      plVar9 = local_58 + 6;
    }
    lVar11 = *plVar9;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (lVar10 == lVar11) {
      local_60 = (long *)CONCAT71(local_60._1_7_,1);
      local_58 = (long *)FUN_02755178(*(undefined8 *)(param_1 + 8),param_2,&local_60);
      if (local_58 != (long *)0x0) {
        plVar9 = local_58 + 5;
        do {
          lVar10 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar10 == -1) goto LAB_02754f60;
      }
      if (local_58 == (long *)0x0) goto LAB_02754e28;
      plVar9 = local_58 + 5;
      do {
        iVar7 = (int)*plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = iVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar8 = *(undefined8 *)puVar5;
      *(undefined8 *)puVar6 = uVar8;
      FUN_00cf9884(&local_58,uVar8,"ImplicitVolume_EndJoint");
      plVar9 = plVar1;
      if (*(long *)(param_2 + 8) != 0) {
        plVar9 = (long *)(*(long *)(param_2 + 8) + 0x30);
      }
      lVar10 = *plVar9;
      if (local_58 != (long *)0x0) {
        plVar1 = local_58 + 6;
      }
      lVar11 = *plVar1;
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      if (lVar10 != lVar11) {
        return;
      }
      local_60 = (long *)((ulong)local_60 & 0xffffffffffffff00);
      local_58 = (long *)FUN_02755178(*(undefined8 *)(param_1 + 8),param_2,&local_60);
      if (local_58 != (long *)0x0) {
        plVar9 = local_58 + 5;
        do {
          lVar10 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar10 == -1) goto LAB_02754f60;
      }
      if (local_58 == (long *)0x0) goto LAB_02754e28;
      plVar9 = local_58 + 5;
      do {
        iVar7 = (int)*plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = iVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_60 = local_58;
    if (iVar7 != -1) {
LAB_02754e28:
      local_60 = local_58;
      FUN_027550b8(param_1 + 0x128,&local_60);
      FUN_0275510c(&local_60);
      FUN_027552b8(&local_58);
      return;
    }
  }
LAB_02754f60:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != 0","IncrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
             ,0x53,"Reference counter overflows.");
}


