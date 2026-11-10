/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01887c98; name: FUN_01887c98
 */


void FUN_01887c98(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong local_68;
  undefined *puStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  
  local_68 = 0x121d7307bd58c49b;
  puStack_60 = PTR_DAT_047d8e40;
  local_58 = 0x1f;
  local_50 = (long *)0x0;
  FUN_012710b8(&local_48,*param_2,&local_68);
  plVar7 = *(long **)(param_1 + 0x388);
  *(undefined8 *)(param_1 + 0x388) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_01888478;
  }
  uVar8 = local_48;
  local_48 = 0;
  *(undefined8 *)(param_1 + 0x388) = uVar8;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))(local_50);
    uVar8 = *(undefined8 *)(param_1 + 0x388);
  }
  FUN_01464e08(uVar8,0x7fffff9c);
  plVar7 = *(long **)(*(long *)(param_1 + 0x388) + 0x58);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) goto LAB_018884a0;
  }
  lVar5 = param_1 + 0x390;
  local_68 = local_68 & 0xffffffffffffff00;
  FUN_00d8219c(plVar7,0,lVar5,0xffffffff,&local_68);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar6 = *plVar1;
      iVar4 = (int)lVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar6 == 0) goto LAB_01888478;
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x388) + 0x58);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar6 == -1) goto LAB_018884a0;
  }
  FUN_00d80894(0,0,(float)*(ulong *)(param_1 + 0x3a8),(float)*(ulong *)(param_1 + 0x3b0),plVar7,0);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar6 = *plVar1;
      iVar4 = (int)lVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar6 == 0) goto LAB_01888478;
  }
  FUN_00d8037c(*(undefined8 *)(param_1 + 0x388),0,0,0,*(undefined4 *)(param_1 + 0x3a8),
               *(undefined4 *)(param_1 + 0x3b0));
  *(undefined1 *)(*(long *)(param_1 + 0x388) + 0x28a) = 1;
  local_68 = 0xdb783c8cd7462c54;
  puStack_60 = PTR_s_Vfx2DBeforeUI_047e1168;
  local_58 = 0x1f;
  local_50 = (long *)0x0;
  FUN_012710b8(&local_48,*param_2,&local_68);
  plVar7 = *(long **)(param_1 + 0x3b8);
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar6 = *plVar1;
      iVar4 = (int)lVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_01888478;
  }
  uVar8 = local_48;
  local_48 = 0;
  *(undefined8 *)(param_1 + 0x3b8) = uVar8;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))(local_50);
    uVar8 = *(undefined8 *)(param_1 + 0x3b8);
  }
  FUN_01464e08(uVar8,0x7fffff9b);
  plVar7 = *(long **)(*(long *)(param_1 + 0x3b8) + 0x58);
  if (plVar7 == (long *)0x0) {
    local_68 = (ulong)local_68._1_7_ << 8;
    FUN_00d8219c(0,0,lVar5,0xffffffff,&local_68);
  }
  else {
    plVar1 = plVar7 + 5;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar6 == -1) goto LAB_018884a0;
    local_68 = (ulong)local_68._1_7_ << 8;
    FUN_00d8219c(plVar7,0,lVar5,0xffffffff,&local_68);
    do {
      lVar6 = *plVar1;
      iVar4 = (int)lVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar6 == 0) goto LAB_01888478;
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x3b8) + 0x58);
  if (plVar7 == (long *)0x0) {
    FUN_00d80894(0,0,(float)*(ulong *)(param_1 + 0x3a8),(float)*(ulong *)(param_1 + 0x3b0),0,0);
  }
  else {
    plVar1 = plVar7 + 5;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar6 == -1) goto LAB_018884a0;
    FUN_00d80894(0,0,(float)*(ulong *)(param_1 + 0x3a8),(float)*(ulong *)(param_1 + 0x3b0),plVar7,0)
    ;
    do {
      lVar6 = *plVar1;
      iVar4 = (int)lVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar6 == 0) goto LAB_01888478;
  }
  FUN_00d8037c(*(undefined8 *)(param_1 + 0x3b8),0,0,0,*(undefined4 *)(param_1 + 0x3a8),
               *(undefined4 *)(param_1 + 0x3b0));
  *(undefined1 *)(*(long *)(param_1 + 0x3b8) + 0x28a) = 1;
  local_68 = 0xe8c1457a6fc98d69;
  puStack_60 = PTR_DAT_047e1160;
  local_58 = 0x1f;
  local_50 = (long *)0x0;
  FUN_012710b8(&local_48,*param_2,&local_68);
  plVar7 = *(long **)(param_1 + 0x3c0);
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar6 = *plVar1;
      iVar4 = (int)lVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_01888478;
  }
  uVar8 = local_48;
  local_48 = 0;
  *(undefined8 *)(param_1 + 0x3c0) = uVar8;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))(local_50);
    uVar8 = *(undefined8 *)(param_1 + 0x3c0);
  }
  FUN_01464e08(uVar8,0x7fffff9d);
  plVar7 = *(long **)(*(long *)(param_1 + 0x3c0) + 0x58);
  if (plVar7 == (long *)0x0) {
    local_68 = (ulong)local_68._1_7_ << 8;
    FUN_00d8219c(0,0,lVar5,0xffffffff,&local_68);
  }
  else {
    plVar1 = plVar7 + 5;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar6 == -1) goto LAB_018884a0;
    local_68 = (ulong)local_68._1_7_ << 8;
    FUN_00d8219c(plVar7,0,lVar5,0xffffffff,&local_68);
    do {
      lVar6 = *plVar1;
      iVar4 = (int)lVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar6 == 0) goto LAB_01888478;
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x3c0) + 0x58);
  if (plVar7 == (long *)0x0) {
    FUN_00d80894(0,0,(float)*(ulong *)(param_1 + 0x3a8),(float)*(ulong *)(param_1 + 0x3b0),0,0);
  }
  else {
    plVar1 = plVar7 + 5;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar6 == -1) goto LAB_018884a0;
    FUN_00d80894(0,0,(float)*(ulong *)(param_1 + 0x3a8),(float)*(ulong *)(param_1 + 0x3b0),plVar7,0)
    ;
    do {
      lVar6 = *plVar1;
      iVar4 = (int)lVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar6 == 0) goto LAB_01888478;
  }
  FUN_00d8037c(*(undefined8 *)(param_1 + 0x3c0),0,0,0,*(undefined4 *)(param_1 + 0x3a8),
               *(undefined4 *)(param_1 + 0x3b0));
  *(undefined1 *)(*(long *)(param_1 + 0x3c0) + 0x28a) = 1;
  local_68 = 0x4ad5e3fd795e3808;
  puStack_60 = PTR_s_BeforeUI_047e1190;
  local_58 = 0x1f;
  local_50 = (long *)0x0;
  FUN_012710b8(&local_48,*param_2,&local_68);
  plVar7 = *(long **)(param_1 + 0x3c8);
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar6 = *plVar1;
      iVar4 = (int)lVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_01888478;
  }
  uVar8 = local_48;
  local_48 = 0;
  *(undefined8 *)(param_1 + 0x3c8) = uVar8;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))(local_50);
    uVar8 = *(undefined8 *)(param_1 + 0x3c8);
  }
  FUN_01464e08(uVar8,0x7fffff9a);
  plVar7 = *(long **)(*(long *)(param_1 + 0x3c8) + 0x58);
  if (plVar7 == (long *)0x0) {
    local_68 = (ulong)local_68._1_7_ << 8;
    FUN_00d8219c(0,0,lVar5,0xffffffff,&local_68);
  }
  else {
    plVar1 = plVar7 + 5;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar6 == -1) goto LAB_018884a0;
    local_68 = (ulong)local_68._1_7_ << 8;
    FUN_00d8219c(plVar7,0,lVar5,0xffffffff,&local_68);
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar5 == 0) goto LAB_01888478;
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x3c8) + 0x58);
  if (plVar7 == (long *)0x0) {
    FUN_00d80894(0,0,(float)*(ulong *)(param_1 + 0x3a8),(float)*(ulong *)(param_1 + 0x3b0),0,0);
  }
  else {
    plVar1 = plVar7 + 5;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) {
LAB_018884a0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_00d80894(0,0,(float)*(ulong *)(param_1 + 0x3a8),(float)*(ulong *)(param_1 + 0x3b0),plVar7,0)
    ;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar5 == 0) {
LAB_01888478:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_00d8037c(*(undefined8 *)(param_1 + 0x3c8),0,0,0,*(undefined4 *)(param_1 + 0x3a8),
               *(undefined4 *)(param_1 + 0x3b0));
  return;
}


