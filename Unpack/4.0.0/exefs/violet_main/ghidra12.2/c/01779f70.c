/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01779f70; name: FUN_01779f70
 */


void FUN_01779f70(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long local_50;
  long *local_48;
  
  lVar7 = FUN_0167513c(&local_48);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == -1) goto LAB_0177a2ec;
  }
  plVar8 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 5;
    do {
      lVar10 = *plVar9;
      iVar6 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_0177a2a8;
  }
  *(long *)(param_1 + 0x28) = lVar7;
  local_50 = FUN_0177af60(param_2);
  if (local_50 != 0) {
    piVar1 = (int *)(local_50 + 0x28);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == -1) goto LAB_0177a2ec;
  }
  local_48 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_0177a49c(&local_48);
  lVar7 = local_50;
  local_50 = 0;
  *(long *)(param_1 + 0x30) = lVar7;
  FUN_0177a49c(&local_50);
  FUN_0177a598(&local_48,param_2);
  FUN_0177a508(param_1 + 0x38,&local_48);
  if (local_48 != (long *)0x0) {
    plVar8 = local_48 + 5;
    do {
      lVar7 = *plVar8;
      iVar6 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_0177a2a8;
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_0177a45c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  plVar8 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x50,8);
  if (plVar8 == (long *)0x0) {
    lVar7 = *param_2;
LAB_0177a474:
    (**(code **)(lVar7 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  memset(plVar8 + 1,0,0x48);
  puVar5 = PTR_DAT_047d66f8;
  plVar8[2] = 0;
  *(undefined4 *)(plVar8 + 3) = 0;
  *plVar8 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  nn::os::GetTlsValue(DAT_04865a30);
  plVar9 = plVar8 + 5;
  *(int *)plVar9 = 0;
  puVar5 = PTR_DAT_047d8e08;
  plVar8[6] = 0;
  plVar8[8] = 0;
  plVar8[2] = (long)plVar8;
  plVar8[4] = (long)(puVar5 + 0x48);
  *plVar8 = (long)(puVar5 + 0x10);
  plVar8[1] = (long)param_2;
  *(undefined4 *)(plVar8 + 3) = 0x80050;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  do {
    lVar7 = *plVar9;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *(int *)plVar9 = (int)lVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((int)lVar7 != -1) {
    plVar9 = *(long **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (plVar9 != (long *)0x0) {
      plVar2 = plVar9 + 5;
      do {
        lVar7 = *plVar2;
        iVar6 = (int)lVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_0177a2a8;
    }
    puVar5 = PTR_DAT_047d3f70;
    *(long **)(param_1 + 0x40) = plVar8;
    FUN_0177a604(&local_48,*(undefined8 *)(*(long *)puVar5 + 0x148));
    plVar8 = *(long **)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 5;
      do {
        lVar7 = *plVar9;
        iVar6 = (int)lVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_0177a2a8;
    }
    *(long **)(param_1 + 0x48) = local_48;
    plVar8 = *(long **)(*(long *)puVar5 + 0x148);
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_0177a45c;
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    lVar10 = (**(code **)(*plVar8 + 0x10))(plVar8,0x6508,8);
    if (lVar10 == 0) {
      lVar7 = *plVar8;
      param_2 = plVar8;
      goto LAB_0177a474;
    }
    FUN_0177b984();
    *(undefined4 *)(lVar10 + 0x18) = 0x86508;
    *(long **)(lVar10 + 8) = plVar8;
    *(long *)(lVar10 + 0x10) = lVar10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    piVar1 = (int *)(lVar10 + 0x28);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 != -1) {
      plVar8 = *(long **)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = 0;
      if (plVar8 != (long *)0x0) {
        plVar9 = plVar8 + 5;
        do {
          lVar7 = *plVar9;
          iVar6 = (int)lVar7 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *(int *)plVar9 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        else if ((int)lVar7 == 0) {
LAB_0177a2a8:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      *(long *)(param_1 + 0x50) = lVar10;
      FUN_0177a670(param_2);
      return;
    }
  }
LAB_0177a2ec:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != 0","IncrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
             ,0x53,"Reference counter overflows.");
}


