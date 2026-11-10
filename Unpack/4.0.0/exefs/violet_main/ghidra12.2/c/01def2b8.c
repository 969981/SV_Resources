/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01def2b8; name: FUN_01def2b8
 */


void FUN_01def2b8(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  
  FUN_01967b00(&local_58);
  plVar5 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar5 != (long *)0x0) {
    plVar9 = plVar5 + 5;
    do {
      lVar8 = *plVar9;
      iVar3 = (int)lVar8 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *(int *)plVar9 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_01def734;
  }
  *(long **)(param_1 + 0x30) = local_58;
  FUN_0129e560(local_58,0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar8 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar8;
  plVar5 = *(long **)(lVar8 + 0x1c8);
  plVar9 = *(long **)(lVar8 + 0x1c0);
  do {
    if (plVar9 == plVar5) {
      lVar8 = 0;
      break;
    }
    lVar8 = *plVar9;
    uVar6 = FUN_01dc3ca0(lVar8 + 0x28);
    plVar9 = plVar9 + 1;
  } while ((uVar6 & 1) == 0);
  iVar3 = FUN_01def898(*(undefined8 *)(param_1 + 0x30));
  if (iVar3 == 0) {
    local_58 = (long *)&DAT_ce02c237861a2a94;
    pcStack_50 = "strinput";
    local_48 = 8;
    local_40 = (long *)0x0;
    local_78 = 0x85774f59e4e87e12;
    pcStack_70 = "msg_ui_strinput_box_name_00";
    local_68 = 0x1b;
    local_60 = (long *)0x0;
    FUN_00f11e84(&local_38,&local_58,&local_78);
    plVar5 = local_38;
    local_38 = (long *)0x0;
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
    uVar4 = FUN_0149c05c(lVar8);
    FUN_014e7ddc(&local_58,lVar8,uVar4);
    plVar9 = local_58;
    if (local_58 != (long *)0x0) {
      plVar7 = local_58 + 5;
      do {
        lVar8 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = (int)lVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((int)lVar8 == -1) goto LAB_01def870;
      if (local_58 != (long *)0x0) {
        plVar7 = local_58 + 5;
        do {
          lVar8 = *plVar7;
          iVar3 = (int)lVar8 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *(int *)plVar7 = iVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*local_58 + 0x10))();
        }
        else if ((int)lVar8 == 0) goto LAB_01def734;
      }
    }
    uVar4 = FUN_01d9eee0(0x10);
    local_80 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar7 = plVar5 + 5;
      do {
        lVar8 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = (int)lVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((int)lVar8 == -1) goto LAB_01def870;
    }
    local_90 = plVar9;
    local_88 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar7 = plVar9 + 5;
      do {
        lVar8 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = (int)lVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((int)lVar8 == -1) goto LAB_01def870;
    }
    FUN_01def8a0(&local_80,&local_88,&local_90,1,uVar4);
    if (local_90 != (long *)0x0) {
      plVar7 = local_90 + 5;
      do {
        lVar8 = *plVar7;
        iVar3 = (int)lVar8 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
      else if ((int)lVar8 == 0) goto LAB_01def734;
    }
    if (local_88 != (long *)0x0) {
      plVar7 = local_88 + 5;
      do {
        lVar8 = *plVar7;
        iVar3 = (int)lVar8 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
      else if ((int)lVar8 == 0) goto LAB_01def734;
    }
    if (local_80 != (long *)0x0) {
      plVar7 = local_80 + 5;
      do {
        iVar3 = (int)*plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar7 = local_80;
      if (iVar3 + -1 != 0) goto LAB_01def6ac;
LAB_01def5c0:
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  else {
    local_58 = (long *)&DAT_ce02c237861a2a94;
    pcStack_50 = "strinput";
    local_48 = 8;
    local_40 = (long *)0x0;
    local_78 = 0xc462d626ff5efb42;
    pcStack_70 = "msg_ui_strinput_team_name_00";
    local_68 = 0x1c;
    local_60 = (long *)0x0;
    FUN_00f11e84(&local_38,&local_58,&local_78);
    plVar5 = local_38;
    local_38 = (long *)0x0;
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
    iVar3 = FUN_01dc4ca0(*(undefined8 *)(param_1 + 0x30));
    FUN_014e8ffc(&local_58,lVar8,iVar3 + -1);
    plVar9 = local_58;
    if (local_58 != (long *)0x0) {
      plVar7 = local_58 + 5;
      do {
        lVar8 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = (int)lVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((int)lVar8 == -1) goto LAB_01def870;
      if (local_58 != (long *)0x0) {
        plVar7 = local_58 + 5;
        do {
          lVar8 = *plVar7;
          iVar3 = (int)lVar8 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *(int *)plVar7 = iVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*local_58 + 0x10))();
        }
        else if ((int)lVar8 == 0) goto LAB_01def734;
      }
    }
    uVar4 = FUN_01d9eee0(10);
    local_98 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar7 = plVar5 + 5;
      do {
        lVar8 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = (int)lVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((int)lVar8 == -1) goto LAB_01def870;
    }
    local_a8 = plVar9;
    local_a0 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar7 = plVar9 + 5;
      do {
        lVar8 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = (int)lVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((int)lVar8 == -1) {
LAB_01def870:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    FUN_014edb40(&local_98,&local_a0,&local_a8,1,uVar4,1);
    if (local_a8 != (long *)0x0) {
      plVar7 = local_a8 + 5;
      do {
        lVar8 = *plVar7;
        iVar3 = (int)lVar8 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_a8 + 0x10))();
      }
      else if ((int)lVar8 == 0) goto LAB_01def734;
    }
    if (local_a0 != (long *)0x0) {
      plVar7 = local_a0 + 5;
      do {
        lVar8 = *plVar7;
        iVar3 = (int)lVar8 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_a0 + 0x10))();
      }
      else if ((int)lVar8 == 0) goto LAB_01def734;
    }
    if (local_98 != (long *)0x0) {
      plVar7 = local_98 + 5;
      do {
        iVar3 = (int)*plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar7 = local_98;
      if (iVar3 + -1 == 0) goto LAB_01def5c0;
LAB_01def6ac:
      if (iVar3 == 0) goto LAB_01def734;
    }
  }
  if (plVar9 != (long *)0x0) {
    plVar7 = plVar9 + 5;
    do {
      lVar8 = *plVar7;
      iVar3 = (int)lVar8 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    else if ((int)lVar8 == 0) goto LAB_01def734;
  }
  if (plVar5 != (long *)0x0) {
    plVar9 = plVar5 + 5;
    do {
      lVar8 = *plVar9;
      iVar3 = (int)lVar8 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *(int *)plVar9 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    else if ((int)lVar8 == 0) {
LAB_01def734:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


