/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01447398; name: FUN_01447398
 */


void FUN_01447398(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 *puVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined1 *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  long local_28;
  
  uVar14 = *param_2;
  local_60 = &DAT_af078523c7023ee7;
  puStack_58 = PTR_s_GrassCollision_047dd380;
  local_50 = 0x1f;
  local_48 = (long *)0x0;
  FUN_01464dd0(local_b8,&local_60,*(undefined8 *)(param_1 + 0x380));
  FUN_012710b8(&local_28,uVar14,local_b8);
  plVar9 = *(long **)(param_1 + 0x388);
  *(undefined8 *)(param_1 + 0x388) = 0;
  if (plVar9 != (long *)0x0) {
    plVar15 = plVar9 + 5;
    do {
      lVar12 = *plVar15;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar12 == 0) goto LAB_01447928;
  }
  lVar12 = local_28;
  plVar9 = (long *)(param_1 + 0x388);
  local_28 = 0;
  *plVar9 = lVar12;
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  uVar14 = *(undefined8 *)(param_1 + 0x388);
  uVar8 = FUN_01464df0(10,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar14,uVar8);
  auVar6._8_8_ = local_b8._8_8_;
  auVar6._0_8_ = local_b8._0_8_;
  plVar15 = *(long **)(*(long *)(param_1 + 0x388) + 0x58);
  if (plVar15 == (long *)0x0) {
    FUN_00d81b84(0,0,0,0,0,0);
  }
  else {
    plVar13 = plVar15 + 5;
    do {
      lVar12 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = (int)lVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar12 == -1) goto LAB_01447950;
    FUN_00d81b84(0,0,0,0,plVar15,0);
    do {
      lVar12 = *plVar13;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
    else if ((int)lVar12 == 0) goto LAB_01447928;
  }
  auVar6._8_8_ = local_b8._8_8_;
  auVar6._0_8_ = local_b8._0_8_;
  plVar15 = *(long **)(*plVar9 + 0x58);
  if (plVar15 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar13 = plVar15 + 5;
    do {
      lVar12 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = (int)lVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar12 == -1) goto LAB_01447950;
    FUN_00d819c8(0,plVar15,0);
    do {
      lVar12 = *plVar13;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
    else if ((int)lVar12 == 0) goto LAB_01447928;
  }
  auVar6._8_8_ = local_b8._8_8_;
  auVar6._0_8_ = local_b8._0_8_;
  plVar15 = *(long **)(*plVar9 + 0x58);
  if (plVar15 != (long *)0x0) {
    plVar13 = plVar15 + 5;
    do {
      lVar12 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = (int)lVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar12 == -1) goto LAB_01447950;
  }
  puVar10 = (undefined8 *)FUN_0166cefc();
  local_b8 = FUN_01447978(*puVar10,0,5,0);
  FUN_00ebe848(plVar15,0,local_b8);
  if (plVar15 != (long *)0x0) {
    plVar13 = plVar15 + 5;
    do {
      lVar12 = *plVar13;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
    else if ((int)lVar12 == 0) goto LAB_01447928;
  }
  FUN_0151a864(&local_68,plVar9,3);
  if (local_68 != (long *)0x0) {
    plVar15 = local_68 + 5;
    do {
      lVar12 = *plVar15;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar12 == 0) goto LAB_01447928;
  }
  puVar10 = (undefined8 *)FUN_00f351bc();
  puVar10 = (undefined8 *)FUN_00e514cc(*puVar10);
  plVar15 = (long *)*puVar10;
  if (plVar15 != (long *)0x0) {
    plVar13 = plVar15 + 5;
    do {
      lVar12 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = (int)lVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    auVar6 = local_b8;
    if ((int)lVar12 == -1) goto LAB_01447950;
  }
  if (*(long *)(param_1 + 0x380) == 0) {
    local_98 = 1;
    uStack_90 = 2;
    local_80 = 0x400000003;
    uStack_78 = 5;
    local_a8 = 0;
    local_a0 = (long *)0x0;
    local_88 = 0x200000013;
    local_b8._0_8_ = SEXT48(*(int *)(param_1 + 0x398));
    local_70 = 0x200000008;
    local_60 = (undefined1 *)*param_2;
    local_b8._8_8_ = local_b8._0_8_;
    lVar11 = FUN_00cf3764(&local_28,*(undefined8 *)(local_60 + 8),&local_60);
    auVar6._8_8_ = local_b8._8_8_;
    auVar6._0_8_ = local_b8._0_8_;
    lVar12 = 0;
    if (lVar11 != 0) {
      piVar1 = (int *)(lVar11 + 0x28);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == -1) goto LAB_01447950;
      lVar12 = lVar11;
    }
    FUN_0117e220(lVar12,local_b8,1,1,0);
    plVar13 = *(long **)(param_1 + 0x390);
    *(undefined8 *)(param_1 + 0x390) = 0;
    if (plVar13 != (long *)0x0) {
      plVar2 = plVar13 + 5;
      do {
        lVar12 = *plVar2;
        iVar5 = (int)lVar12 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar13 + 0x10))();
      }
      else if ((int)lVar12 == 0) goto LAB_01447928;
    }
    *(long *)(param_1 + 0x390) = lVar11;
    local_60 = (undefined1 *)0xd30d9a9042bbd2fe;
    puStack_58 = PTR_s_RT_GrassCollision_047e1688;
    local_50 = 0x1f;
    local_48 = (long *)0x0;
    FUN_01344120(plVar15,&local_60);
    plVar13 = local_48;
  }
  else {
    local_b8._0_8_ = (undefined *)0xd30d9a9042bbd2fe;
    local_b8._8_8_ = PTR_s_RT_GrassCollision_047e1688;
    local_a8 = 0x1f;
    local_a0 = (long *)0x0;
    FUN_00fff044(&local_60,plVar15,local_b8);
    plVar13 = *(long **)(param_1 + 0x390);
    *(undefined8 *)(param_1 + 0x390) = 0;
    if (plVar13 != (long *)0x0) {
      plVar2 = plVar13 + 5;
      do {
        lVar12 = *plVar2;
        iVar5 = (int)lVar12 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar13 + 0x10))();
      }
      else if ((int)lVar12 == 0) goto LAB_01447928;
    }
    puVar7 = local_60;
    local_60 = (undefined1 *)0x0;
    *(undefined1 **)(param_1 + 0x390) = puVar7;
    plVar13 = local_a0;
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))();
  }
  auVar6._8_8_ = local_b8._8_8_;
  auVar6._0_8_ = local_b8._0_8_;
  plVar13 = *(long **)(*plVar9 + 0x58);
  if (plVar13 == (long *)0x0) {
    local_b8._0_8_ = (ulong)(uint7)local_b8._1_7_ << 8;
    FUN_00d8219c(0,0,param_1 + 0x390,0xffffffff,local_b8);
  }
  else {
    plVar2 = plVar13 + 5;
    do {
      lVar12 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)lVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar12 == -1) {
LAB_01447950:
      local_b8 = auVar6;
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    local_b8._0_8_ = (ulong)(uint7)local_b8._1_7_ << 8;
    FUN_00d8219c(plVar13,0,param_1 + 0x390,0xffffffff,local_b8);
    do {
      lVar12 = *plVar2;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar12 == 0) goto LAB_01447928;
  }
  FUN_01569c64(*plVar9,0x11);
  if (plVar15 != (long *)0x0) {
    plVar9 = plVar15 + 5;
    do {
      lVar12 = *plVar9;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
    else if ((int)lVar12 == 0) {
LAB_01447928:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


