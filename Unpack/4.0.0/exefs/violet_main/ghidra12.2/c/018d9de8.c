/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018d9de8; name: FUN_018d9de8
 */


void FUN_018d9de8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined1 *puVar13;
  char *pcVar14;
  int *piVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined1 *local_b0;
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
  undefined8 local_28;
  
  puVar8 = (undefined8 *)FUN_00f351bc();
  puVar8 = (undefined8 *)FUN_00e514cc(*puVar8);
  plVar16 = (long *)*puVar8;
  if (plVar16 != (long *)0x0) {
    plVar10 = plVar16 + 5;
    do {
      lVar11 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = (int)lVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar11 == -1) goto LAB_018da934;
  }
  if (*(long *)(param_1 + 0x380) == 0) {
    local_70 = 1;
    uStack_68 = 2;
    local_60 = 0x200000029;
    uStack_58 = 0x400000003;
    local_90 = 0x3c0;
    pcStack_88 = (char *)0x21c;
    local_80 = 0;
    local_78 = (long *)0x0;
    local_50 = 5;
    uStack_48 = 0x200000008;
    local_b0 = (undefined1 *)*param_2;
    lVar9 = FUN_00cf3764(&local_28,*(undefined8 *)(local_b0 + 8),&local_b0);
    lVar11 = 0;
    if (lVar9 != 0) {
      piVar15 = (int *)(lVar9 + 0x28);
      do {
        iVar3 = *piVar15;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar6) {
          *piVar15 = iVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == -1) goto LAB_018da934;
      lVar11 = lVar9;
    }
    FUN_0117e220(lVar11,&local_90,1,1,0);
    plVar10 = *(long **)(param_1 + 0x4b0);
    *(undefined8 *)(param_1 + 0x4b0) = 0;
    if (plVar10 != (long *)0x0) {
      plVar18 = plVar10 + 5;
      do {
        lVar11 = *plVar18;
        iVar3 = (int)lVar11 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *(int *)plVar18 = iVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar11 == 0) goto LAB_018da90c;
    }
    *(long *)(param_1 + 0x4b0) = lVar9;
    local_b0 = (undefined1 *)*param_2;
    lVar11 = FUN_00cf3764(&local_28,*(undefined8 *)(local_b0 + 8),&local_b0);
    if (lVar11 != 0) {
      piVar15 = (int *)(lVar11 + 0x28);
      do {
        iVar3 = *piVar15;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar6) {
          *piVar15 = iVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == -1) goto LAB_018da934;
    }
    FUN_0117e220(lVar11,&local_90,1,1,0);
    plVar10 = *(long **)(param_1 + 0x4b8);
    *(undefined8 *)(param_1 + 0x4b8) = 0;
    if (plVar10 != (long *)0x0) {
      plVar18 = plVar10 + 5;
      do {
        lVar9 = *plVar18;
        iVar3 = (int)lVar9 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *(int *)plVar18 = iVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_018da90c;
    }
    *(long *)(param_1 + 0x4b8) = lVar11;
    local_b0 = (undefined1 *)0x5fd2cddc580a2d9c;
    pcStack_a8 = "RT_IrradianceVolume";
    local_a0 = 0x13;
    local_98 = (long *)0x0;
    FUN_01344120(plVar16,&local_b0,(long *)(param_1 + 0x4b0));
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    local_b0 = (undefined1 *)0x11cced9ca0c07839;
    pcStack_a8 = "RT_SpecularProbe";
    local_a0 = 0x10;
    local_98 = (long *)0x0;
    FUN_01344120(plVar16,&local_b0,(long *)(param_1 + 0x4b8));
    plVar10 = local_98;
  }
  else {
    local_90 = 0x5fd2cddc580a2d9c;
    pcStack_88 = "RT_IrradianceVolume";
    local_80 = 0x13;
    local_78 = (long *)0x0;
    FUN_00fff044(&local_b0,plVar16,&local_90);
    plVar10 = *(long **)(param_1 + 0x4b0);
    *(undefined8 *)(param_1 + 0x4b0) = 0;
    if (plVar10 != (long *)0x0) {
      plVar18 = plVar10 + 5;
      do {
        lVar11 = *plVar18;
        iVar3 = (int)lVar11 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *(int *)plVar18 = iVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar11 == 0) goto LAB_018da90c;
    }
    puVar13 = local_b0;
    local_b0 = (undefined1 *)0x0;
    *(undefined1 **)(param_1 + 0x4b0) = puVar13;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    local_90 = 0x11cced9ca0c07839;
    pcStack_88 = "RT_SpecularProbe";
    local_80 = 0x10;
    local_78 = (long *)0x0;
    FUN_00fff044(&local_b0,plVar16,&local_90);
    plVar10 = *(long **)(param_1 + 0x4b8);
    *(undefined8 *)(param_1 + 0x4b8) = 0;
    if (plVar10 != (long *)0x0) {
      plVar18 = plVar10 + 5;
      do {
        lVar11 = *plVar18;
        iVar3 = (int)lVar11 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *(int *)plVar18 = iVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar11 == 0) goto LAB_018da90c;
    }
    puVar13 = local_b0;
    local_b0 = (undefined1 *)0x0;
    *(undefined1 **)(param_1 + 0x4b8) = puVar13;
    plVar10 = local_78;
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  uVar17 = *(undefined8 *)(param_1 + 0x388);
  local_b0 = &DAT_11ed5f07bd2f7edd;
  pcStack_a8 = PTR_DAT_047e14c0;
  local_a0 = 0x1f;
  local_98 = (long *)0x0;
  FUN_01464dd0(&local_90,&local_b0,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_28,uVar17,&local_90);
  plVar10 = *(long **)(param_1 + 0x3c8);
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  if (plVar10 != (long *)0x0) {
    plVar18 = plVar10 + 5;
    do {
      lVar11 = *plVar18;
      iVar3 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *(int *)plVar18 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_018da90c;
  }
  uVar17 = local_28;
  local_28 = 0;
  *(undefined8 *)(param_1 + 0x3c8) = uVar17;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  uVar17 = *(undefined8 *)(param_1 + 0x3c8);
  uVar7 = FUN_01464df0(0x32,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar17,uVar7);
  plVar10 = *(long **)(*(long *)(param_1 + 0x3c8) + 0x58);
  if (plVar10 == (long *)0x0) {
LAB_018da8cc:
    local_90 = (ulong)local_90._1_7_ << 8;
    FUN_00d8219c(0,0,param_1 + 0x4b0,0xffffffff,&local_90);
  }
  else {
    plVar18 = plVar10 + 5;
    do {
      lVar11 = *plVar18;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *(int *)plVar18 = (int)lVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar11 == -1) goto LAB_018da934;
    plVar18 = *(long **)(*(long *)(param_1 + 0x3c8) + 0x58);
    if (plVar18 == (long *)0x0) goto LAB_018da8cc;
    plVar12 = plVar18 + 5;
    do {
      lVar11 = *plVar12;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = (int)lVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar11 == -1) goto LAB_018da934;
    local_90 = (ulong)local_90._1_7_ << 8;
    FUN_00d8219c(plVar18,0,param_1 + 0x4b0,0xffffffff,&local_90);
    do {
      lVar11 = *plVar12;
      iVar3 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
    else if ((int)lVar11 == 0) goto LAB_018da90c;
  }
  plVar18 = *(long **)(*(long *)(param_1 + 0x3c8) + 0x58);
  if (plVar18 == (long *)0x0) {
    local_90 = (ulong)local_90._1_7_ << 8;
    FUN_00d8219c(0,1,param_1 + 0x4b8,0xffffffff,&local_90);
  }
  else {
    plVar12 = plVar18 + 5;
    do {
      lVar11 = *plVar12;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = (int)lVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar11 == -1) goto LAB_018da934;
    local_90 = (ulong)local_90._1_7_ << 8;
    FUN_00d8219c(plVar18,1,param_1 + 0x4b8,0xffffffff,&local_90);
    do {
      lVar11 = *plVar12;
      iVar3 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
    else if ((int)lVar11 == 0) goto LAB_018da90c;
  }
  local_90 = local_90 & 0xffffffffffffff00;
  FUN_00d829fc(plVar10,param_1 + 0x4a0,&local_90);
  FUN_00d819c8(0,plVar10,0);
  iVar3 = *(int *)(param_1 + 0x58c);
  FUN_01343f00(*(undefined8 *)(param_1 + 0x3c8),iVar3,0xe);
  local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,2);
  local_28 = CONCAT44(local_28._4_4_,iVar3 + 1);
  plVar18 = plVar10 + 0x22;
  local_90 = local_90 & 0xffffffffffffff00;
  piVar15 = (int *)plVar10[0x22];
  if (piVar15 != (int *)plVar10[0x23]) {
LAB_018da2dc:
    if ((*piVar15 != 2) || (piVar15[1] != iVar3 + 1)) goto LAB_018da2f4;
    lVar11 = *(long *)(param_1 + 0x460);
    if (lVar11 != 0) {
      piVar2 = (int *)(lVar11 + 0x28);
      do {
        iVar4 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == -1) goto LAB_018da980;
    }
    plVar12 = *(long **)(piVar15 + 2);
    *(long *)(piVar15 + 2) = lVar11;
    if (plVar12 == (long *)0x0) goto LAB_018da364;
    plVar1 = plVar12 + 5;
    do {
      lVar11 = *plVar1;
      iVar4 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x10))();
      goto LAB_018da364;
    }
    if ((int)lVar11 != 0) goto LAB_018da364;
    goto LAB_018da95c;
  }
LAB_018da300:
  FUN_00d11148(plVar18,&local_b0,&local_28,(long *)(param_1 + 0x460),&local_90);
LAB_018da364:
  local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,2);
  local_28 = CONCAT44(local_28._4_4_,iVar3 + 2);
  local_90 = local_90 & 0xffffffffffffff00;
  piVar15 = (int *)plVar10[0x22];
  if (piVar15 != (int *)plVar10[0x23]) {
LAB_018da388:
    if ((*piVar15 != 2) || (piVar15[1] != iVar3 + 2)) goto LAB_018da3a0;
    lVar11 = *(long *)(param_1 + 0x468);
    if (lVar11 != 0) {
      piVar2 = (int *)(lVar11 + 0x28);
      do {
        iVar4 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == -1) goto LAB_018da980;
    }
    plVar12 = *(long **)(piVar15 + 2);
    *(long *)(piVar15 + 2) = lVar11;
    if (plVar12 == (long *)0x0) goto LAB_018da410;
    plVar1 = plVar12 + 5;
    do {
      lVar11 = *plVar1;
      iVar4 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x10))();
      goto LAB_018da410;
    }
    if ((int)lVar11 != 0) goto LAB_018da410;
    goto LAB_018da95c;
  }
LAB_018da3ac:
  FUN_00d11148(plVar18,&local_b0,&local_28,(long *)(param_1 + 0x468),&local_90);
LAB_018da410:
  local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,2);
  local_28 = CONCAT44(local_28._4_4_,iVar3 + 3);
  local_90 = local_90 & 0xffffffffffffff00;
  piVar15 = (int *)plVar10[0x22];
  if (piVar15 != (int *)plVar10[0x23]) {
LAB_018da434:
    if ((*piVar15 != 2) || (piVar15[1] != iVar3 + 3)) goto LAB_018da44c;
    lVar11 = *(long *)(param_1 + 0x470);
    if (lVar11 != 0) {
      piVar2 = (int *)(lVar11 + 0x28);
      do {
        iVar4 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == -1) goto LAB_018da980;
    }
    plVar12 = *(long **)(piVar15 + 2);
    *(long *)(piVar15 + 2) = lVar11;
    if (plVar12 == (long *)0x0) goto LAB_018da4bc;
    plVar1 = plVar12 + 5;
    do {
      lVar11 = *plVar1;
      iVar4 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x10))();
      goto LAB_018da4bc;
    }
    if ((int)lVar11 != 0) goto LAB_018da4bc;
    goto LAB_018da95c;
  }
LAB_018da458:
  FUN_00d11148(plVar18,&local_b0,&local_28,(long *)(param_1 + 0x470),&local_90);
LAB_018da4bc:
  local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,2);
  local_28 = CONCAT44(local_28._4_4_,iVar3 + 4);
  local_90 = local_90 & 0xffffffffffffff00;
  piVar15 = (int *)plVar10[0x22];
  if (piVar15 != (int *)plVar10[0x23]) {
LAB_018da4e0:
    if ((*piVar15 != 2) || (piVar15[1] != iVar3 + 4)) goto LAB_018da4f8;
    lVar11 = *(long *)(param_1 + 0x478);
    if (lVar11 != 0) {
      piVar2 = (int *)(lVar11 + 0x28);
      do {
        iVar4 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == -1) goto LAB_018da980;
    }
    plVar12 = *(long **)(piVar15 + 2);
    *(long *)(piVar15 + 2) = lVar11;
    if (plVar12 == (long *)0x0) goto LAB_018da568;
    plVar1 = plVar12 + 5;
    do {
      lVar11 = *plVar1;
      iVar4 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x10))();
      goto LAB_018da568;
    }
    if ((int)lVar11 != 0) goto LAB_018da568;
    goto LAB_018da95c;
  }
LAB_018da504:
  FUN_00d11148(plVar18,&local_b0,&local_28,(long *)(param_1 + 0x478),&local_90);
LAB_018da568:
  local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,2);
  local_28 = CONCAT44(local_28._4_4_,iVar3 + 5);
  local_90 = local_90 & 0xffffffffffffff00;
  piVar15 = (int *)plVar10[0x22];
  if (piVar15 != (int *)plVar10[0x23]) {
LAB_018da58c:
    if ((*piVar15 != 2) || (piVar15[1] != iVar3 + 5)) goto LAB_018da5a4;
    lVar11 = *(long *)(param_1 + 0x488);
    if (lVar11 != 0) {
      piVar2 = (int *)(lVar11 + 0x28);
      do {
        iVar4 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == -1) goto LAB_018da980;
    }
    plVar12 = *(long **)(piVar15 + 2);
    *(long *)(piVar15 + 2) = lVar11;
    if (plVar12 == (long *)0x0) goto LAB_018da614;
    plVar1 = plVar12 + 5;
    do {
      lVar11 = *plVar1;
      iVar4 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x10))();
      goto LAB_018da614;
    }
    if ((int)lVar11 != 0) goto LAB_018da614;
    goto LAB_018da95c;
  }
LAB_018da5b0:
  FUN_00d11148(plVar18,&local_b0,&local_28,(long *)(param_1 + 0x488),&local_90);
LAB_018da614:
  local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,2);
  local_28 = CONCAT44(local_28._4_4_,iVar3 + 0xc);
  local_90 = local_90 & 0xffffffffffffff00;
  piVar15 = (int *)plVar10[0x22];
  if (piVar15 != (int *)plVar10[0x23]) {
LAB_018da638:
    if ((*piVar15 != 2) || (piVar15[1] != iVar3 + 0xc)) goto LAB_018da650;
    lVar11 = *(long *)(param_1 + 0x4f8);
    if (lVar11 != 0) {
      piVar2 = (int *)(lVar11 + 0x28);
      do {
        iVar3 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == -1) {
LAB_018da980:
        pcVar14 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        goto LAB_018da954;
      }
    }
    plVar18 = *(long **)(piVar15 + 2);
    *(long *)(piVar15 + 2) = lVar11;
    if (plVar18 != (long *)0x0) {
      plVar12 = plVar18 + 5;
      do {
        lVar11 = *plVar12;
        iVar3 = (int)lVar11 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *(int *)plVar12 = iVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar18 + 0x10))();
      }
      else if ((int)lVar11 == 0) {
LAB_018da95c:
        pcVar14 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        goto LAB_018da92c;
      }
    }
    goto LAB_018da6c0;
  }
LAB_018da65c:
  FUN_00d11148(plVar18,&local_b0,&local_28,(long *)(param_1 + 0x4f8),&local_90);
LAB_018da6c0:
  FUN_00eb2008(plVar10,4);
  if (*(long *)(param_1 + 0x380) == 0) {
    puVar13 = (undefined1 *)FUN_018daa10(*(undefined8 *)(param_1 + 8));
    local_b0 = puVar13;
    if (puVar13 != (undefined1 *)0x0) {
      piVar15 = (int *)(puVar13 + 0x28);
      do {
        iVar3 = *piVar15;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar6) {
          *piVar15 = iVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == -1) {
LAB_018da934:
        pcVar14 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
        ;
LAB_018da954:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",pcVar14,0x53,
                   "Reference counter overflows.");
      }
    }
    local_90 = *(ulong *)(param_1 + 0x560);
    *(undefined8 *)(param_1 + 0x560) = 0;
    FUN_018da9a4(&local_90);
    local_b0 = (undefined1 *)0x0;
    *(undefined1 **)(param_1 + 0x560) = puVar13;
    FUN_018da9a4(&local_b0);
    FUN_018dac28(*(undefined8 *)(param_1 + 0x560));
  }
  if (plVar10 != (long *)0x0) {
    plVar18 = plVar10 + 5;
    do {
      lVar11 = *plVar18;
      iVar3 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *(int *)plVar18 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar11 == 0) goto LAB_018da90c;
  }
  if (plVar16 != (long *)0x0) {
    plVar10 = plVar16 + 5;
    do {
      lVar11 = *plVar10;
      iVar3 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar11 == 0) {
LAB_018da90c:
      pcVar14 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_018da92c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 pcVar14,0x58,"Reference counter underflows.");
    }
  }
  return;
LAB_018da2f4:
  piVar15 = piVar15 + 8;
  if ((int *)plVar10[0x23] == piVar15) goto LAB_018da300;
  goto LAB_018da2dc;
LAB_018da3a0:
  piVar15 = piVar15 + 8;
  if ((int *)plVar10[0x23] == piVar15) goto LAB_018da3ac;
  goto LAB_018da388;
LAB_018da44c:
  piVar15 = piVar15 + 8;
  if ((int *)plVar10[0x23] == piVar15) goto LAB_018da458;
  goto LAB_018da434;
LAB_018da4f8:
  piVar15 = piVar15 + 8;
  if ((int *)plVar10[0x23] == piVar15) goto LAB_018da504;
  goto LAB_018da4e0;
LAB_018da5a4:
  piVar15 = piVar15 + 8;
  if ((int *)plVar10[0x23] == piVar15) goto LAB_018da5b0;
  goto LAB_018da58c;
LAB_018da650:
  piVar15 = piVar15 + 8;
  if ((int *)plVar10[0x23] == piVar15) goto LAB_018da65c;
  goto LAB_018da638;
}


