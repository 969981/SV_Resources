/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02736240; name: FUN_02736240
 */


void FUN_02736240(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  char *pcVar14;
  int *piVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 local_b8;
  long local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  ulong local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar9 = (undefined8 *)FUN_00f351bc();
  puVar9 = (undefined8 *)FUN_00e514cc(*puVar9);
  plVar17 = (long *)*puVar9;
  if (plVar17 != (long *)0x0) {
    plVar11 = plVar17 + 5;
    do {
      lVar16 = *plVar11;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *(int *)plVar11 = (int)lVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar16 == -1) goto LAB_02736a28;
  }
  if (*(long *)(param_1 + 0x380) == 0) {
    local_90 = 0x3c0;
    pcStack_88 = (char *)0x21c;
    local_70 = 1;
    uStack_68 = 2;
    local_50 = 5;
    uStack_48 = 0x200000008;
    local_80 = 0;
    local_78 = (long *)0x0;
    local_60 = 0x200000001;
    uStack_58 = 0x400000003;
    local_b0 = *param_2;
    lVar10 = FUN_00cf3764(&local_b8,*(undefined8 *)(local_b0 + 8),&local_b0);
    lVar16 = 0;
    if (lVar10 != 0) {
      piVar15 = (int *)(lVar10 + 0x28);
      do {
        iVar4 = *piVar15;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar7) {
          *piVar15 = iVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == -1) goto LAB_02736a28;
      lVar16 = lVar10;
    }
    FUN_0117e220(lVar16,&local_90,1,1,0);
    plVar11 = *(long **)(param_1 + 0x4f0);
    *(undefined8 *)(param_1 + 0x4f0) = 0;
    if (plVar11 != (long *)0x0) {
      plVar13 = plVar11 + 5;
      do {
        lVar16 = *plVar13;
        iVar4 = (int)lVar16 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar7) {
          *(int *)plVar13 = iVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
      else if ((int)lVar16 == 0) goto LAB_027369dc;
    }
    *(long *)(param_1 + 0x4f0) = lVar10;
    local_b0 = 0x7c5fa78c052503f9;
    pcStack_a8 = "RT_ShadowFactorBuffer";
    local_a0 = 0x15;
    local_98 = (long *)0x0;
    FUN_01344120(plVar17,&local_b0);
    plVar11 = local_98;
  }
  else {
    local_90 = 0x7c5fa78c052503f9;
    pcStack_88 = "RT_ShadowFactorBuffer";
    local_80 = 0x15;
    local_78 = (long *)0x0;
    FUN_00fff044(&local_b0,plVar17,&local_90);
    plVar11 = *(long **)(param_1 + 0x4f0);
    *(undefined8 *)(param_1 + 0x4f0) = 0;
    if (plVar11 != (long *)0x0) {
      plVar13 = plVar11 + 5;
      do {
        lVar16 = *plVar13;
        iVar4 = (int)lVar16 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar7) {
          *(int *)plVar13 = iVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
      else if ((int)lVar16 == 0) goto LAB_027369dc;
    }
    lVar16 = local_b0;
    local_b0 = 0;
    *(long *)(param_1 + 0x4f0) = lVar16;
    plVar11 = local_78;
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))();
  }
  uVar18 = *(undefined8 *)(param_1 + 0x388);
  local_b0 = -0x3842b56cc4ac286;
  pcStack_a8 = PTR_s_ShadowFactor_047e14f8;
  local_a0 = 0x1f;
  local_98 = (long *)0x0;
  FUN_01464dd0(&local_90,&local_b0,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_b8,uVar18,&local_90);
  plVar11 = *(long **)(param_1 + 0x3c0);
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  if (plVar11 != (long *)0x0) {
    plVar13 = plVar11 + 5;
    do {
      lVar16 = *plVar13;
      iVar4 = (int)lVar16 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *(int *)plVar13 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar16 == 0) goto LAB_027369dc;
  }
  uVar18 = local_b8;
  local_b8 = 0;
  *(undefined8 *)(param_1 + 0x3c0) = uVar18;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  uVar18 = *(undefined8 *)(param_1 + 0x3c0);
  uVar8 = FUN_01464df0(0x37,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar18,uVar8);
  plVar11 = *(long **)(*(long *)(param_1 + 0x3c0) + 0x58);
  if (plVar11 != (long *)0x0) {
    plVar13 = plVar11 + 5;
    do {
      lVar16 = *plVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *(int *)plVar13 = (int)lVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar16 == -1) {
LAB_02736a28:
      pcVar14 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_02736a6c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",pcVar14,0x53,
                 "Reference counter overflows.");
    }
  }
  local_90 = local_90 & 0xffffffffffffff00;
  FUN_00d8219c(plVar11,0,param_1 + 0x4f0,0xffffffff,&local_90);
  plVar13 = (long *)(param_1 + 0x4a0);
  local_90 = local_90 & 0xffffffffffffff00;
  FUN_00d829fc(plVar11,plVar13,&local_90);
  FUN_00d819c8(0,plVar11,0);
  FUN_00d81b84(0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar11,0);
  iVar4 = *(int *)(param_1 + 0x58c);
  FUN_01343f00(*(undefined8 *)(param_1 + 0x3c0),iVar4,0xe);
  local_b0 = CONCAT44(local_b0._4_4_,2);
  local_b8 = CONCAT44(local_b8._4_4_,iVar4 + 1);
  plVar1 = plVar11 + 0x22;
  local_90 = local_90 & 0xffffffffffffff00;
  piVar15 = (int *)plVar11[0x22];
  if (piVar15 != (int *)plVar11[0x23]) {
LAB_02736584:
    if ((*piVar15 != 2) || (piVar15[1] != iVar4 + 1)) goto LAB_0273659c;
    lVar16 = *(long *)(param_1 + 0x460);
    if (lVar16 != 0) {
      piVar3 = (int *)(lVar16 + 0x28);
      do {
        iVar5 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 == -1) goto LAB_02736a4c;
    }
    plVar12 = *(long **)(piVar15 + 2);
    *(long *)(piVar15 + 2) = lVar16;
    if (plVar12 == (long *)0x0) goto LAB_0273660c;
    plVar2 = plVar12 + 5;
    do {
      lVar16 = *plVar2;
      iVar5 = (int)lVar16 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar5;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar12 + 0x10))();
      goto LAB_0273660c;
    }
    if ((int)lVar16 != 0) goto LAB_0273660c;
    goto LAB_02736a00;
  }
LAB_027365a8:
  FUN_00d11148(plVar1,&local_b0,&local_b8,(long *)(param_1 + 0x460),&local_90);
LAB_0273660c:
  local_b0 = CONCAT44(local_b0._4_4_,2);
  local_b8 = CONCAT44(local_b8._4_4_,iVar4 + 2);
  local_90 = local_90 & 0xffffffffffffff00;
  piVar15 = (int *)plVar11[0x22];
  if (piVar15 != (int *)plVar11[0x23]) {
LAB_02736630:
    if ((*piVar15 != 2) || (piVar15[1] != iVar4 + 2)) goto LAB_02736648;
    lVar16 = *(long *)(param_1 + 0x468);
    if (lVar16 != 0) {
      piVar3 = (int *)(lVar16 + 0x28);
      do {
        iVar5 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 == -1) goto LAB_02736a4c;
    }
    plVar12 = *(long **)(piVar15 + 2);
    *(long *)(piVar15 + 2) = lVar16;
    if (plVar12 == (long *)0x0) goto LAB_027366b8;
    plVar2 = plVar12 + 5;
    do {
      lVar16 = *plVar2;
      iVar5 = (int)lVar16 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar5;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar12 + 0x10))();
      goto LAB_027366b8;
    }
    if ((int)lVar16 != 0) goto LAB_027366b8;
    goto LAB_02736a00;
  }
LAB_02736654:
  FUN_00d11148(plVar1,&local_b0,&local_b8,(long *)(param_1 + 0x468),&local_90);
LAB_027366b8:
  local_b0 = CONCAT44(local_b0._4_4_,2);
  local_b8 = CONCAT44(local_b8._4_4_,iVar4 + 3);
  local_90 = local_90 & 0xffffffffffffff00;
  piVar15 = (int *)plVar11[0x22];
  if (piVar15 != (int *)plVar11[0x23]) {
LAB_027366dc:
    if ((*piVar15 != 2) || (piVar15[1] != iVar4 + 3)) goto LAB_027366f4;
    lVar16 = *(long *)(param_1 + 0x470);
    if (lVar16 != 0) {
      piVar3 = (int *)(lVar16 + 0x28);
      do {
        iVar5 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 == -1) goto LAB_02736a4c;
    }
    plVar12 = *(long **)(piVar15 + 2);
    *(long *)(piVar15 + 2) = lVar16;
    if (plVar12 == (long *)0x0) goto LAB_02736764;
    plVar2 = plVar12 + 5;
    do {
      lVar16 = *plVar2;
      iVar5 = (int)lVar16 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar5;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar12 + 0x10))();
      goto LAB_02736764;
    }
    if ((int)lVar16 != 0) goto LAB_02736764;
    goto LAB_02736a00;
  }
LAB_02736700:
  FUN_00d11148(plVar1,&local_b0,&local_b8,(long *)(param_1 + 0x470),&local_90);
LAB_02736764:
  local_b0 = CONCAT44(local_b0._4_4_,2);
  local_b8 = CONCAT44(local_b8._4_4_,iVar4 + 4);
  local_90 = local_90 & 0xffffffffffffff00;
  piVar15 = (int *)plVar11[0x22];
  if (piVar15 != (int *)plVar11[0x23]) {
LAB_02736788:
    if ((*piVar15 != 2) || (piVar15[1] != iVar4 + 4)) goto LAB_027367a0;
    lVar16 = *(long *)(param_1 + 0x478);
    if (lVar16 != 0) {
      piVar3 = (int *)(lVar16 + 0x28);
      do {
        iVar5 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 == -1) goto LAB_02736a4c;
    }
    plVar12 = *(long **)(piVar15 + 2);
    *(long *)(piVar15 + 2) = lVar16;
    if (plVar12 == (long *)0x0) goto LAB_02736810;
    plVar2 = plVar12 + 5;
    do {
      lVar16 = *plVar2;
      iVar5 = (int)lVar16 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar5;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar12 + 0x10))();
      goto LAB_02736810;
    }
    if ((int)lVar16 != 0) goto LAB_02736810;
    goto LAB_02736a00;
  }
LAB_027367ac:
  FUN_00d11148(plVar1,&local_b0,&local_b8,(long *)(param_1 + 0x478),&local_90);
LAB_02736810:
  local_b0 = CONCAT44(local_b0._4_4_,2);
  local_b8 = CONCAT44(local_b8._4_4_,iVar4 + 5);
  local_90 = local_90 & 0xffffffffffffff00;
  piVar15 = (int *)plVar11[0x22];
  if (piVar15 != (int *)plVar11[0x23]) {
LAB_02736830:
    if ((*piVar15 != 2) || (piVar15[1] != iVar4 + 5)) goto LAB_02736848;
    lVar16 = *plVar13;
    if (lVar16 != 0) {
      piVar3 = (int *)(lVar16 + 0x28);
      do {
        iVar4 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == -1) {
LAB_02736a4c:
        pcVar14 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        goto LAB_02736a6c;
      }
    }
    plVar13 = *(long **)(piVar15 + 2);
    *(long *)(piVar15 + 2) = lVar16;
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 5;
      do {
        lVar16 = *plVar1;
        iVar4 = (int)lVar16 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar13 + 0x10))();
      }
      else if ((int)lVar16 == 0) {
LAB_02736a00:
        pcVar14 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        goto LAB_02736a20;
      }
    }
    goto LAB_027368bc;
  }
LAB_02736854:
  FUN_00d11148(plVar1,&local_b0,&local_b8,plVar13,&local_90);
LAB_027368bc:
  if (plVar11 != (long *)0x0) {
    plVar13 = plVar11 + 5;
    do {
      lVar16 = *plVar13;
      iVar4 = (int)lVar16 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *(int *)plVar13 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    else if ((int)lVar16 == 0) goto LAB_027369dc;
  }
  if (plVar17 != (long *)0x0) {
    plVar11 = plVar17 + 5;
    do {
      lVar16 = *plVar11;
      iVar4 = (int)lVar16 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *(int *)plVar11 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
    else if ((int)lVar16 == 0) {
LAB_027369dc:
      pcVar14 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_02736a20:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 pcVar14,0x58,"Reference counter underflows.");
    }
  }
  return;
LAB_0273659c:
  piVar15 = piVar15 + 8;
  if ((int *)plVar11[0x23] == piVar15) goto LAB_027365a8;
  goto LAB_02736584;
LAB_02736648:
  piVar15 = piVar15 + 8;
  if ((int *)plVar11[0x23] == piVar15) goto LAB_02736654;
  goto LAB_02736630;
LAB_027366f4:
  piVar15 = piVar15 + 8;
  if ((int *)plVar11[0x23] == piVar15) goto LAB_02736700;
  goto LAB_027366dc;
LAB_027367a0:
  piVar15 = piVar15 + 8;
  if ((int *)plVar11[0x23] == piVar15) goto LAB_027367ac;
  goto LAB_02736788;
LAB_02736848:
  piVar15 = piVar15 + 8;
  if ((int *)plVar11[0x23] == piVar15) goto LAB_02736854;
  goto LAB_02736830;
}


