/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e66aec; name: FUN_00e66aec
 */


void FUN_00e66aec(long *param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_38;
  
  uVar10 = *(undefined8 *)(*(long *)PTR_DAT_047d3a88 + 8);
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar9 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar9;
  plVar1 = *(long **)(lVar9 + 0x1c8);
  plVar8 = *(long **)(lVar9 + 0x1c0);
  do {
    if (plVar8 == plVar1) {
      lVar9 = 0;
      break;
    }
    lVar9 = *plVar8;
    uVar7 = FUN_011b8548(lVar9 + 0x28);
    plVar8 = plVar8 + 1;
  } while ((uVar7 & 1) == 0);
  switch(param_2) {
  case 0:
  case 1:
    local_38 = (long *)*param_1;
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 5;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar4 == -1) {
LAB_00e66e30:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    FUN_00e66e80(&local_38,param_3,lVar9,uVar10);
    if (local_38 == (long *)0x0) {
      return;
    }
    plVar1 = local_38 + 5;
    do {
      iVar6 = (int)*plVar1;
      bVar5 = iVar6 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar8 = local_38;
    } while (cVar2 != '\0');
    break;
  default:
    goto switchD_00e66ba0_caseD_2;
  case 3:
    local_58 = (long *)*param_1;
    if (local_58 != (long *)0x0) {
      plVar1 = local_58 + 5;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar4 == -1) goto LAB_00e66e30;
    }
    FUN_01dbca68(&local_58,lVar9,uVar10);
    if (local_58 == (long *)0x0) {
      return;
    }
    plVar1 = local_58 + 5;
    do {
      iVar6 = (int)*plVar1;
      bVar5 = iVar6 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar8 = local_58;
    } while (cVar2 != '\0');
    break;
  case 5:
    local_60 = (long *)*param_1;
    if (local_60 != (long *)0x0) {
      plVar1 = local_60 + 5;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar4 == -1) goto LAB_00e66e30;
    }
    FUN_01dbcd1c(&local_60,param_3,lVar9,uVar10);
    if (local_60 == (long *)0x0) {
      return;
    }
    plVar1 = local_60 + 5;
    do {
      iVar6 = (int)*plVar1;
      bVar5 = iVar6 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar8 = local_60;
    } while (cVar2 != '\0');
    break;
  case 7:
    uVar10 = FUN_01dbd030();
    local_68 = (long *)*param_1;
    if (local_68 != (long *)0x0) {
      plVar1 = local_68 + 5;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar9 == -1) goto LAB_00e66e30;
    }
    FUN_01dbd0f4(&local_68,param_3,(uint)uVar10 & 0xffff,(uint)((ulong)uVar10 >> 0x10) & 0xff,
                 (uint)((ulong)uVar10 >> 0x18) & 0xff);
    if (local_68 == (long *)0x0) {
      return;
    }
    plVar1 = local_68 + 5;
    do {
      iVar6 = (int)*plVar1;
      bVar5 = iVar6 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar8 = local_68;
    } while (cVar2 != '\0');
    break;
  case 8:
    local_70 = (long *)*param_1;
    if (local_70 != (long *)0x0) {
      plVar1 = local_70 + 5;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar4 == -1) goto LAB_00e66e30;
    }
    FUN_01dbd2f0(&local_70,param_3,lVar9,uVar10);
    if (local_70 == (long *)0x0) {
      return;
    }
    plVar1 = local_70 + 5;
    do {
      iVar6 = (int)*plVar1;
      bVar5 = iVar6 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar8 = local_70;
    } while (cVar2 != '\0');
    break;
  case 9:
    local_78 = (long *)*param_1;
    if (local_78 != (long *)0x0) {
      plVar1 = local_78 + 5;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar9 == -1) goto LAB_00e66e30;
    }
    FUN_01dbd4c8(&local_78,param_3);
    if (local_78 == (long *)0x0) {
      return;
    }
    plVar1 = local_78 + 5;
    do {
      iVar6 = (int)*plVar1;
      bVar5 = iVar6 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar8 = local_78;
    } while (cVar2 != '\0');
  }
  if (bVar5) {
    (**(code **)(*plVar8 + 0x10))();
  }
  else if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
switchD_00e66ba0_caseD_2:
  return;
}


