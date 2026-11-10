/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0126f440; name: FUN_0126f440
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0126f440(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  char *pcVar18;
  int *piVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 uVar25;
  undefined1 *local_118;
  char *local_110;
  undefined8 local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar13 = (undefined8 *)FUN_00f351bc();
  puVar13 = (undefined8 *)FUN_00e514cc(*puVar13);
  plVar24 = (long *)*puVar13;
  if (plVar24 != (long *)0x0) {
    plVar15 = plVar24 + 5;
    do {
      lVar14 = *plVar15;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *(int *)plVar15 = (int)lVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar14 == -1) goto LAB_01271028;
  }
  local_b8 = 0x3c0;
  uStack_b0 = 0x21c;
  local_98 = 1;
  uStack_90 = 2;
  local_78 = 5;
  uStack_70 = 0x200000008;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0x200000005;
  uStack_80 = 0x400000003;
  if (*(long *)(param_1 + 0x380) == 0) {
    local_118 = (undefined1 *)*param_2;
    lVar14 = FUN_00cf3764(&local_f0,*(undefined8 *)(local_118 + 8),&local_118);
    if (lVar14 != 0) {
      piVar19 = (int *)(lVar14 + 0x28);
      do {
        iVar4 = *piVar19;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
        if (bVar7) {
          *piVar19 = iVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == -1) goto LAB_01271028;
    }
    FUN_0117e220(lVar14,&local_b8,1,1,0);
    plVar15 = *(long **)(param_1 + 0x4c0);
    *(undefined8 *)(param_1 + 0x4c0) = 0;
    if (plVar15 != (long *)0x0) {
      plVar16 = plVar15 + 5;
      do {
        lVar20 = *plVar16;
        iVar4 = (int)lVar20 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *(int *)plVar16 = iVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
      else if ((int)lVar20 == 0) goto LAB_01271000;
    }
    *(long *)(param_1 + 0x4c0) = lVar14;
    local_118 = (undefined1 *)0x7c29ab95df07bd2d;
    local_110 = "RT_AOLinerDepth";
    local_108 = 0xf;
    local_100 = (long *)0x0;
    FUN_01344120(plVar24,&local_118);
  }
  else {
    local_118 = (undefined1 *)0x7c29ab95df07bd2d;
    local_110 = "RT_AOLinerDepth";
    local_108 = 0xf;
    local_100 = (long *)0x0;
    FUN_00fff044(&local_f0,plVar24,&local_118);
    plVar15 = *(long **)(param_1 + 0x4c0);
    *(undefined8 *)(param_1 + 0x4c0) = 0;
    if (plVar15 != (long *)0x0) {
      plVar16 = plVar15 + 5;
      do {
        lVar14 = *plVar16;
        iVar4 = (int)lVar14 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *(int *)plVar16 = iVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
      else if ((int)lVar14 == 0) goto LAB_01271000;
    }
    plVar15 = local_f0;
    local_f0 = (long *)0x0;
    *(long **)(param_1 + 0x4c0) = plVar15;
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  local_88 = CONCAT44(local_88._4_4_,0x25);
  local_118 = (undefined1 *)*param_2;
  lVar14 = FUN_00cf3764(&local_f0,*(undefined8 *)(local_118 + 8),&local_118);
  if (lVar14 != 0) {
    piVar19 = (int *)(lVar14 + 0x28);
    do {
      iVar4 = *piVar19;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar7) {
        *piVar19 = iVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == -1) goto LAB_01271028;
  }
  FUN_0117e220(lVar14,&local_b8,1,1,0);
  plVar15 = *(long **)(param_1 + 0x4c8);
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  if (plVar15 != (long *)0x0) {
    plVar16 = plVar15 + 5;
    do {
      lVar20 = *plVar16;
      iVar4 = (int)lVar20 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    else if ((int)lVar20 == 0) goto LAB_01271000;
  }
  plVar15 = (long *)(param_1 + 0x4c8);
  *plVar15 = lVar14;
  local_118 = (undefined1 *)*param_2;
  lVar14 = FUN_00cf3764(&local_f0,*(undefined8 *)(local_118 + 8),&local_118);
  if (lVar14 != 0) {
    piVar19 = (int *)(lVar14 + 0x28);
    do {
      iVar4 = *piVar19;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar7) {
        *piVar19 = iVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == -1) goto LAB_01271028;
  }
  FUN_0117e220(lVar14,&local_b8,1,1,0);
  plVar16 = *(long **)(param_1 + 0x4d0);
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 5;
    do {
      lVar20 = *plVar17;
      iVar4 = (int)lVar20 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
    else if ((int)lVar20 == 0) goto LAB_01271000;
  }
  *(long *)(param_1 + 0x4d0) = lVar14;
  if (*(long *)(param_1 + 0x380) == 0) {
    local_118 = (undefined1 *)*param_2;
    lVar14 = FUN_00cf3764(&local_f0,*(undefined8 *)(local_118 + 8),&local_118);
    if (lVar14 != 0) {
      piVar19 = (int *)(lVar14 + 0x28);
      do {
        iVar4 = *piVar19;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
        if (bVar7) {
          *piVar19 = iVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == -1) goto LAB_01271028;
    }
    FUN_0117e220(lVar14,&local_b8,1,1,0);
    plVar16 = *(long **)(param_1 + 0x4d8);
    *(undefined8 *)(param_1 + 0x4d8) = 0;
    if (plVar16 != (long *)0x0) {
      plVar17 = plVar16 + 5;
      do {
        lVar20 = *plVar17;
        iVar4 = (int)lVar20 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *(int *)plVar17 = iVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar16 + 0x10))();
      }
      else if ((int)lVar20 == 0) goto LAB_01271000;
    }
    *(long *)(param_1 + 0x4d8) = lVar14;
    local_118 = (undefined1 *)*param_2;
    lVar14 = FUN_00cf3764(&local_f0,*(undefined8 *)(local_118 + 8),&local_118);
    if (lVar14 != 0) {
      piVar19 = (int *)(lVar14 + 0x28);
      do {
        iVar4 = *piVar19;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
        if (bVar7) {
          *piVar19 = iVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == -1) goto LAB_01271028;
    }
    FUN_0117e220(lVar14,&local_b8,1,1,0);
    plVar16 = *(long **)(param_1 + 0x4e0);
    *(undefined8 *)(param_1 + 0x4e0) = 0;
    if (plVar16 != (long *)0x0) {
      plVar17 = plVar16 + 5;
      do {
        lVar20 = *plVar17;
        iVar4 = (int)lVar20 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *(int *)plVar17 = iVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar16 + 0x10))();
      }
      else if ((int)lVar20 == 0) goto LAB_01271000;
    }
    *(long *)(param_1 + 0x4e0) = lVar14;
    local_118 = (undefined1 *)0x1afc9b3105949b3d;
    local_110 = "RT_AOWork";
    local_108 = 9;
    local_100 = (long *)0x0;
    FUN_01344120(plVar24,&local_118,(long *)(param_1 + 0x4d8));
    if (local_100 != (long *)0x0) {
      (**(code **)(*local_100 + 0x20))();
    }
    local_118 = (undefined1 *)0xb2721ea0bd9c56dd;
    local_110 = "RT_AOOutput";
    local_108 = 0xb;
    local_100 = (long *)0x0;
    FUN_01344120(plVar24,&local_118,(long *)(param_1 + 0x4e0));
  }
  else {
    local_118 = (undefined1 *)0x1afc9b3105949b3d;
    local_110 = "RT_AOWork";
    local_108 = 9;
    local_100 = (long *)0x0;
    FUN_00fff044(&local_f0,plVar24,&local_118);
    plVar16 = *(long **)(param_1 + 0x4d8);
    *(undefined8 *)(param_1 + 0x4d8) = 0;
    if (plVar16 != (long *)0x0) {
      plVar17 = plVar16 + 5;
      do {
        lVar14 = *plVar17;
        iVar4 = (int)lVar14 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *(int *)plVar17 = iVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar16 + 0x10))();
      }
      else if ((int)lVar14 == 0) goto LAB_01271000;
    }
    plVar16 = local_f0;
    local_f0 = (long *)0x0;
    *(long **)(param_1 + 0x4d8) = plVar16;
    if (local_100 != (long *)0x0) {
      (**(code **)(*local_100 + 0x20))();
    }
    local_118 = (undefined1 *)0xb2721ea0bd9c56dd;
    local_110 = "RT_AOOutput";
    local_108 = 0xb;
    local_100 = (long *)0x0;
    FUN_00fff044(&local_f0,plVar24,&local_118);
    plVar16 = *(long **)(param_1 + 0x4e0);
    *(undefined8 *)(param_1 + 0x4e0) = 0;
    if (plVar16 != (long *)0x0) {
      plVar17 = plVar16 + 5;
      do {
        lVar14 = *plVar17;
        iVar4 = (int)lVar14 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *(int *)plVar17 = iVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar16 + 0x10))();
      }
      else if ((int)lVar14 == 0) goto LAB_01271000;
    }
    plVar16 = local_f0;
    local_f0 = (long *)0x0;
    *(long **)(param_1 + 0x4e0) = plVar16;
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  lVar14 = *(long *)(DAT_0485a0d0 + 0x58);
  iVar4 = *(int *)(param_1 + 0x58c);
  if (*(char *)(lVar14 + 0x48) == '\0') {
    local_c8 = FUN_0166cf98(lVar14,0,4);
    *(undefined1 (*) [16])(lVar14 + 0x48) = local_c8;
  }
  else {
    local_c8 = *(undefined1 (*) [16])(lVar14 + 0x48);
  }
  puVar9 = PTR_s_AODepthSmaller_047e14a0;
  uVar25 = *param_2;
  local_f0 = (long *)&DAT_7b78d29557b76aae;
  pcStack_e8 = PTR_s_AODepthSmaller_047e14a0;
  local_e0 = 0x1f;
  local_d8 = (long *)0x0;
  FUN_01464dd0(&local_118,&local_f0,*(undefined8 *)(param_1 + 0x380));
  FUN_012710b8(&local_d0,uVar25,&local_118);
  plVar16 = *(long **)(param_1 + 0x400);
  *(undefined8 *)(param_1 + 0x400) = 0;
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 5;
    do {
      lVar14 = *plVar17;
      iVar8 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_01271000;
  }
  uVar25 = local_d0;
  local_d0 = 0;
  *(undefined8 *)(param_1 + 0x400) = uVar25;
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  uVar25 = *(undefined8 *)(param_1 + 0x400);
  uVar11 = FUN_01464df0(0x28,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar25,uVar11);
  FUN_01343f00(*(undefined8 *)(param_1 + 0x400),iVar4,0xe);
  plVar16 = *(long **)(*(long *)(param_1 + 0x400) + 0x58);
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 5;
    do {
      lVar14 = *plVar17;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = (int)lVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar14 == -1) goto LAB_01271028;
  }
  iVar8 = iVar4 + 1;
  local_f0 = (long *)CONCAT44(local_f0._4_4_,2);
  local_d0 = CONCAT44(local_d0._4_4_,iVar8);
  local_118 = (undefined1 *)((ulong)local_118 & 0xffffffffffffff00);
  piVar19 = (int *)plVar16[0x22];
  if (piVar19 != (int *)plVar16[0x23]) {
LAB_0126faa0:
    if ((*piVar19 != 2) || (piVar19[1] != iVar8)) goto LAB_0126fab8;
    lVar14 = *(long *)(param_1 + 0x488);
    if (lVar14 != 0) {
      piVar3 = (int *)(lVar14 + 0x28);
      do {
        iVar12 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar12 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 == -1) goto LAB_01271074;
    }
    plVar17 = *(long **)(piVar19 + 2);
    *(long *)(piVar19 + 2) = lVar14;
    if (plVar17 == (long *)0x0) goto LAB_0126fb28;
    plVar1 = plVar17 + 5;
    do {
      lVar14 = *plVar1;
      iVar12 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar17 + 0x10))();
      goto LAB_0126fb28;
    }
    if ((int)lVar14 != 0) goto LAB_0126fb28;
    goto LAB_01271050;
  }
LAB_0126fac4:
  FUN_00d11148(plVar16 + 0x22,&local_f0,&local_d0,(long *)(param_1 + 0x488),&local_118);
LAB_0126fb28:
  local_118 = (undefined1 *)CONCAT44(local_118._4_4_,2);
  local_f0 = (long *)CONCAT44(local_f0._4_4_,iVar8);
  for (piVar19 = (int *)plVar16[0x22]; piVar19 != (int *)plVar16[0x23]; piVar19 = piVar19 + 8) {
    if ((*piVar19 == 2) && (piVar19[1] == iVar8)) {
      *(undefined1 (*) [16])(piVar19 + 4) = local_c8;
      goto LAB_0126fb84;
    }
  }
  FUN_00ed5784(plVar16 + 0x22,&local_118,&local_f0,local_c8);
LAB_0126fb84:
  plVar17 = (long *)(param_1 + 0x4c0);
  local_118 = (undefined1 *)((ulong)local_118 & 0xffffffffffffff00);
  FUN_00d8219c(plVar16,0,plVar17,0xffffffff,&local_118);
  local_118 = (undefined1 *)((ulong)local_118 & 0xffffffffffffff00);
  FUN_00d829fc(plVar16,param_1 + 0x4a0,&local_118);
  FUN_00d81b84(0,0,0,0,plVar16,0);
  FUN_015b3280(plVar16,0,1,1,1,1);
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 5;
    do {
      lVar14 = *plVar1;
      iVar12 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar14 == 0) goto LAB_01271000;
  }
  FUN_01271098(*(undefined8 *)(param_1 + 0x400),0x12);
  uVar25 = *param_2;
  local_f0 = (long *)&DAT_f4218231a7751a80;
  pcStack_e8 = PTR_s_AOCalc_047e14a8;
  local_e0 = 0x1f;
  local_d8 = (long *)0x0;
  FUN_01464dd0(&local_118,&local_f0,*(undefined8 *)(param_1 + 0x380));
  FUN_012710b8(&local_d0,uVar25,&local_118);
  plVar16 = *(long **)(param_1 + 0x408);
  *(undefined8 *)(param_1 + 0x408) = 0;
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 5;
    do {
      lVar14 = *plVar1;
      iVar12 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_01271000;
  }
  uVar25 = local_d0;
  local_d0 = 0;
  *(undefined8 *)(param_1 + 0x408) = uVar25;
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  uVar25 = *(undefined8 *)(param_1 + 0x408);
  iVar12 = FUN_01464df0(0x28,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar25,iVar12 + 1);
  FUN_01343f00(*(undefined8 *)(param_1 + 0x408),iVar4,0xe);
  plVar16 = *(long **)(*(long *)(param_1 + 0x408) + 0x58);
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 5;
    do {
      lVar14 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)lVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar14 == -1) goto LAB_01271028;
  }
  local_f0 = (long *)CONCAT44(local_f0._4_4_,2);
  local_d0 = CONCAT44(local_d0._4_4_,iVar8);
  plVar1 = plVar16 + 0x22;
  local_118 = (undefined1 *)((ulong)local_118 & 0xffffffffffffff00);
  piVar19 = (int *)plVar16[0x22];
  if (piVar19 != (int *)plVar16[0x23]) {
LAB_0126fd1c:
    if ((*piVar19 != 2) || (piVar19[1] != iVar8)) goto LAB_0126fd34;
    lVar14 = *plVar17;
    if (lVar14 != 0) {
      piVar3 = (int *)(lVar14 + 0x28);
      do {
        iVar12 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar12 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 == -1) goto LAB_01271074;
    }
    plVar17 = *(long **)(piVar19 + 2);
    *(long *)(piVar19 + 2) = lVar14;
    if (plVar17 == (long *)0x0) goto LAB_0126fda8;
    plVar2 = plVar17 + 5;
    do {
      lVar14 = *plVar2;
      iVar12 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar17 + 0x10))();
      goto LAB_0126fda8;
    }
    if ((int)lVar14 != 0) goto LAB_0126fda8;
    goto LAB_01271050;
  }
LAB_0126fd40:
  FUN_00d11148(plVar1,&local_f0,&local_d0,plVar17,&local_118);
LAB_0126fda8:
  iVar12 = iVar4 + 2;
  local_f0 = (long *)CONCAT44(local_f0._4_4_,2);
  local_d0 = CONCAT44(local_d0._4_4_,iVar12);
  local_118 = (undefined1 *)((ulong)local_118 & 0xffffffffffffff00);
  piVar19 = (int *)plVar16[0x22];
  if (piVar19 != (int *)plVar16[0x23]) {
LAB_0126fdcc:
    if ((*piVar19 != 2) || (piVar19[1] != iVar12)) goto LAB_0126fde4;
    lVar14 = *(long *)(param_1 + 0x4d0);
    if (lVar14 != 0) {
      piVar3 = (int *)(lVar14 + 0x28);
      do {
        iVar5 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 == -1) goto LAB_01271074;
    }
    plVar17 = *(long **)(piVar19 + 2);
    *(long *)(piVar19 + 2) = lVar14;
    if (plVar17 == (long *)0x0) goto LAB_0126fe54;
    plVar2 = plVar17 + 5;
    do {
      lVar14 = *plVar2;
      iVar5 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar5;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar17 + 0x10))();
      goto LAB_0126fe54;
    }
    if ((int)lVar14 != 0) goto LAB_0126fe54;
    goto LAB_01271050;
  }
LAB_0126fdf0:
  FUN_00d11148(plVar1,&local_f0,&local_d0,(long *)(param_1 + 0x4d0),&local_118);
LAB_0126fe54:
  local_118 = (undefined1 *)CONCAT44(local_118._4_4_,2);
  for (piVar19 = (int *)plVar16[0x22]; piVar19 != (int *)plVar16[0x23]; piVar19 = piVar19 + 8) {
    if ((*piVar19 == 2) && (piVar19[1] == iVar12)) {
      *(undefined1 (*) [16])(piVar19 + 4) = local_c8;
      goto LAB_0126feb0;
    }
  }
  local_f0._0_4_ = iVar12;
  FUN_00ed5784(plVar1,&local_118,&local_f0,local_c8);
LAB_0126feb0:
  iVar12 = iVar4 + 3;
  local_f0 = (long *)CONCAT44(local_f0._4_4_,2);
  local_d0 = CONCAT44(local_d0._4_4_,iVar12);
  local_118 = (undefined1 *)((ulong)local_118 & 0xffffffffffffff00);
  piVar19 = (int *)plVar16[0x22];
  if (piVar19 != (int *)plVar16[0x23]) {
LAB_0126fed4:
    if ((*piVar19 != 2) || (piVar19[1] != iVar12)) goto LAB_0126feec;
    lVar14 = *(long *)(param_1 + 0x468);
    if (lVar14 != 0) {
      piVar3 = (int *)(lVar14 + 0x28);
      do {
        iVar5 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 == -1) goto LAB_01271074;
    }
    plVar17 = *(long **)(piVar19 + 2);
    *(long *)(piVar19 + 2) = lVar14;
    if (plVar17 == (long *)0x0) goto LAB_0126ff5c;
    plVar2 = plVar17 + 5;
    do {
      lVar14 = *plVar2;
      iVar5 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar5;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar17 + 0x10))();
      goto LAB_0126ff5c;
    }
    if ((int)lVar14 != 0) goto LAB_0126ff5c;
    goto LAB_01271050;
  }
LAB_0126fef8:
  FUN_00d11148(plVar1,&local_f0,&local_d0,(long *)(param_1 + 0x468),&local_118);
LAB_0126ff5c:
  local_118 = (undefined1 *)CONCAT44(local_118._4_4_,2);
  local_f0 = (long *)CONCAT44(local_f0._4_4_,iVar12);
  for (piVar19 = (int *)plVar16[0x22]; piVar19 != (int *)plVar16[0x23]; piVar19 = piVar19 + 8) {
    if ((*piVar19 == 2) && (piVar19[1] == iVar12)) {
      *(undefined1 (*) [16])(piVar19 + 4) = local_c8;
      goto LAB_0126ffb8;
    }
  }
  FUN_00ed5784(plVar1,&local_118,&local_f0,local_c8);
LAB_0126ffb8:
  local_118 = (undefined1 *)((ulong)local_118 & 0xffffffffffffff00);
  FUN_00d8219c(plVar16,0,plVar15,0xffffffff,&local_118);
  local_f0 = (long *)0x0;
  local_118 = (undefined1 *)((ulong)local_118 & 0xffffffffffffff00);
  FUN_00d829fc(plVar16,&local_f0,&local_118);
  if (local_f0 != (long *)0x0) {
    plVar17 = local_f0 + 5;
    do {
      lVar14 = *plVar17;
      iVar12 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*local_f0 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_01271000;
  }
  FUN_00d81b84(0,0,0,0,plVar16,0);
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 5;
    do {
      lVar14 = *plVar17;
      iVar12 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar14 == 0) goto LAB_01271000;
  }
  FUN_01271098(*(undefined8 *)(param_1 + 0x408),0x12);
  uVar25 = *param_2;
  local_f0 = (long *)0x11516711e739dffe;
  pcStack_e8 = PTR_s_AOBlurV_047e14b0;
  local_e0 = 0x1f;
  local_d8 = (long *)0x0;
  FUN_01464dd0(&local_118,&local_f0,*(undefined8 *)(param_1 + 0x380));
  FUN_012710b8(&local_d0,uVar25,&local_118);
  plVar16 = *(long **)(param_1 + 0x418);
  *(undefined8 *)(param_1 + 0x418) = 0;
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 5;
    do {
      lVar14 = *plVar17;
      iVar12 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_01271000;
  }
  uVar25 = local_d0;
  local_d0 = 0;
  *(undefined8 *)(param_1 + 0x418) = uVar25;
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  uVar25 = *(undefined8 *)(param_1 + 0x418);
  iVar12 = FUN_01464df0(0x28,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar25,iVar12 + 2);
  FUN_01343f00(*(undefined8 *)(param_1 + 0x418),iVar4,0xe);
  plVar16 = *(long **)(*(long *)(param_1 + 0x418) + 0x58);
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 5;
    do {
      lVar14 = *plVar17;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = (int)lVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar14 == -1) goto LAB_01271028;
  }
  local_f0 = (long *)CONCAT44(local_f0._4_4_,2);
  local_d0 = CONCAT44(local_d0._4_4_,iVar8);
  local_118 = (undefined1 *)((ulong)local_118 & 0xffffffffffffff00);
  piVar19 = (int *)plVar16[0x22];
  if (piVar19 != (int *)plVar16[0x23]) {
LAB_01270154:
    if ((*piVar19 != 2) || (piVar19[1] != iVar8)) goto LAB_0127016c;
    lVar14 = *plVar15;
    if (lVar14 != 0) {
      piVar3 = (int *)(lVar14 + 0x28);
      do {
        iVar12 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar12 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 == -1) goto LAB_01271074;
    }
    plVar15 = *(long **)(piVar19 + 2);
    *(long *)(piVar19 + 2) = lVar14;
    if (plVar15 == (long *)0x0) goto LAB_012701e0;
    plVar17 = plVar15 + 5;
    do {
      lVar14 = *plVar17;
      iVar12 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar15 + 0x10))();
      goto LAB_012701e0;
    }
    if ((int)lVar14 != 0) goto LAB_012701e0;
    goto LAB_01271050;
  }
LAB_01270178:
  FUN_00d11148(plVar16 + 0x22,&local_f0,&local_d0,plVar15,&local_118);
LAB_012701e0:
  plVar15 = (long *)(param_1 + 0x4d8);
  local_118 = (undefined1 *)((ulong)local_118 & 0xffffffffffffff00);
  FUN_00d8219c(plVar16,0,plVar15,0xffffffff,&local_118);
  FUN_00d81b84(0,0,0,0,plVar16,0);
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 5;
    do {
      lVar14 = *plVar17;
      iVar12 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar14 == 0) goto LAB_01271000;
  }
  FUN_01271098(*(undefined8 *)(param_1 + 0x418),0x12);
  puVar10 = PTR_s_AOBlurH_047e14b8;
  uVar25 = *param_2;
  local_f0 = (long *)&DAT_11517111e739f0fc;
  pcStack_e8 = PTR_s_AOBlurH_047e14b8;
  local_e0 = 0x1f;
  local_d8 = (long *)0x0;
  FUN_01464dd0(&local_118,&local_f0,*(undefined8 *)(param_1 + 0x380));
  FUN_012710b8(&local_d0,uVar25,&local_118);
  plVar16 = *(long **)(param_1 + 0x410);
  *(undefined8 *)(param_1 + 0x410) = 0;
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 5;
    do {
      lVar14 = *plVar17;
      iVar12 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_01271000;
  }
  uVar25 = local_d0;
  local_d0 = 0;
  *(undefined8 *)(param_1 + 0x410) = uVar25;
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  uVar25 = *(undefined8 *)(param_1 + 0x410);
  iVar12 = FUN_01464df0(0x28,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar25,iVar12 + 3);
  FUN_01343f00(*(undefined8 *)(param_1 + 0x410),iVar4,0xe);
  plVar16 = *(long **)(*(long *)(param_1 + 0x410) + 0x58);
  if (plVar16 == (long *)0x0) {
    local_f0 = (long *)CONCAT44(local_f0._4_4_,2);
    local_d0 = CONCAT44(local_d0._4_4_,iVar8);
    local_118 = (undefined1 *)((ulong)local_118._1_7_ << 8);
    piVar19 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_01270f00:
      if ((*piVar19 != 2) || (piVar19[1] != iVar8)) goto LAB_01270f18;
      lVar14 = *plVar15;
      if (lVar14 != 0) {
        piVar3 = (int *)(lVar14 + 0x28);
        do {
          iVar4 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = iVar4 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar4 == -1) goto LAB_01271074;
      }
      plVar15 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar14;
      if (plVar15 == (long *)0x0) goto LAB_01270fb4;
      plVar16 = plVar15 + 5;
      do {
        lVar14 = *plVar16;
        iVar4 = (int)lVar14 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *(int *)plVar16 = iVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar15 + 0x10))();
        goto LAB_01270fb4;
      }
      if ((int)lVar14 != 0) goto LAB_01270fb4;
      goto LAB_01271050;
    }
LAB_01270f24:
    FUN_00d11148(0x110,&local_f0,&local_d0,plVar15,&local_118);
LAB_01270fb4:
    local_118 = (undefined1 *)((ulong)local_118 & 0xffffffffffffff00);
    FUN_00d8219c(0,0,param_1 + 0x4e0,0xffffffff,&local_118);
    FUN_00d81b84(0,0,0,0,0,0);
  }
  else {
    plVar17 = plVar16 + 5;
    do {
      lVar14 = *plVar17;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = (int)lVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar14 == -1) {
LAB_01271028:
      pcVar18 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_01271048:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",pcVar18,0x53,
                 "Reference counter overflows.");
    }
    local_f0 = (long *)CONCAT44(local_f0._4_4_,2);
    local_d0 = CONCAT44(local_d0._4_4_,iVar8);
    local_118 = (undefined1 *)((ulong)local_118._1_7_ << 8);
    piVar19 = (int *)plVar16[0x22];
    if (piVar19 != (int *)plVar16[0x23]) {
LAB_01270344:
      if ((*piVar19 != 2) || (piVar19[1] != iVar8)) goto LAB_0127035c;
      lVar14 = *plVar15;
      if (lVar14 != 0) {
        piVar3 = (int *)(lVar14 + 0x28);
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
LAB_01271074:
          pcVar18 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          goto LAB_01271048;
        }
      }
      plVar15 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar14;
      if (plVar15 != (long *)0x0) {
        plVar1 = plVar15 + 5;
        do {
          lVar14 = *plVar1;
          iVar4 = (int)lVar14 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *(int *)plVar1 = iVar4;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar15 + 0x10))();
        }
        else if ((int)lVar14 == 0) {
LAB_01271050:
          pcVar18 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          goto LAB_01271020;
        }
      }
      goto LAB_012703f8;
    }
LAB_01270368:
    FUN_00d11148(plVar16 + 0x22,&local_f0,&local_d0,plVar15,&local_118);
LAB_012703f8:
    local_118 = (undefined1 *)((ulong)local_118 & 0xffffffffffffff00);
    FUN_00d8219c(plVar16,0,param_1 + 0x4e0,0xffffffff,&local_118);
    FUN_00d81b84(0,0,0,0,plVar16,0);
    do {
      lVar14 = *plVar17;
      iVar4 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar14 == 0) goto LAB_01271000;
  }
  FUN_01271098(*(undefined8 *)(param_1 + 0x410),0x12);
  local_108 = 0x1f;
  local_100 = (long *)0x0;
  local_f0 = (long *)0x2a9834de9451e142;
  pcStack_e8 = "[AO:DepthSmaller]";
  local_e0 = 0x11;
  local_d8 = (long *)0x0;
  local_118 = &DAT_7b78d29557b76aae;
  local_110 = puVar9;
  FUN_01343d88(&local_d0,DAT_0485a0d0,&local_118,&local_f0,0);
  plVar15 = *(long **)(param_1 + 0x528);
  *(undefined8 *)(param_1 + 0x528) = 0;
  if (plVar15 != (long *)0x0) {
    plVar16 = plVar15 + 5;
    do {
      lVar14 = *plVar16;
      iVar4 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_01271000;
  }
  uVar25 = local_d0;
  local_d0 = 0;
  *(undefined8 *)(param_1 + 0x528) = uVar25;
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  lVar14 = *(long *)(param_1 + 0x528);
  local_f0 = (long *)&DAT_7b78d29557b76aae;
  pcStack_e8 = PTR_s_AODepthSmaller_047e1260;
  local_e0 = 0x1f;
  local_d8 = (long *)0x0;
  FUN_01272358(&local_118,plVar24,&local_f0);
  FUN_00d10690(*(undefined8 *)(lVar14 + 200),0,&local_118);
  if ((char)local_118 != '\0') {
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
    local_118 = (undefined1 *)((ulong)local_118 & 0xffffffffffffff00);
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  FUN_00eacd1c(*(undefined8 *)(param_1 + 0x528),0,0,0);
  FUN_00eb3bec(*(undefined8 *)(*(long *)(param_1 + 0x528) + 200),1);
  FUN_00eb6a8c(*(undefined8 *)(*(long *)(param_1 + 0x528) + 200),8);
  FUN_00eb4900(*(undefined8 *)(*(long *)(param_1 + 0x528) + 200),1);
  FUN_00eb7830(*(undefined8 *)(*(long *)(param_1 + 0x528) + 200),0);
  FUN_00eb2d18(*(undefined8 *)(*(long *)(param_1 + 0x528) + 200),0,1);
  local_118 = &DAT_f4218231a7751a80;
  local_110 = PTR_s_AOCalc_047e14a8;
  local_108 = 0x1f;
  local_f0 = (long *)0xe3dd67fb547d9dd0;
  pcStack_e8 = "[AO:Calc]";
  local_e0 = 9;
  local_d8 = (long *)0x0;
  local_100 = (long *)0x0;
  FUN_01343d88(&local_d0,DAT_0485a0d0,&local_118,&local_f0,0);
  plVar15 = *(long **)(param_1 + 0x530);
  *(undefined8 *)(param_1 + 0x530) = 0;
  if (plVar15 != (long *)0x0) {
    plVar16 = plVar15 + 5;
    do {
      lVar14 = *plVar16;
      iVar4 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_01271000;
  }
  uVar25 = local_d0;
  local_d0 = 0;
  *(undefined8 *)(param_1 + 0x530) = uVar25;
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  lVar14 = *(long *)(param_1 + 0x530);
  local_f0 = (long *)&DAT_f4218231a7751a80;
  pcStack_e8 = PTR_s_AOCalc_047e1268;
  local_e0 = 0x1f;
  local_d8 = (long *)0x0;
  FUN_01272358(&local_118,plVar24,&local_f0);
  FUN_00d10690(*(undefined8 *)(lVar14 + 200),0,&local_118);
  if ((char)local_118 != '\0') {
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
    local_118 = (undefined1 *)((ulong)local_118 & 0xffffffffffffff00);
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  FUN_00eacd1c(*(undefined8 *)(param_1 + 0x530),0,0,0);
  FUN_00eb3bec(*(undefined8 *)(*(long *)(param_1 + 0x530) + 200),0);
  FUN_00eb4900(*(undefined8 *)(*(long *)(param_1 + 0x530) + 200),0);
  local_108 = 0x1f;
  local_100 = (long *)0x0;
  local_f0 = (long *)0x38a2b314b51bfbe3;
  pcStack_e8 = "[AO:Blur-H]";
  local_e0 = 0xb;
  local_d8 = (long *)0x0;
  local_118 = &DAT_11517111e739f0fc;
  local_110 = puVar10;
  FUN_01343d88(&local_d0,DAT_0485a0d0,&local_118,&local_f0,0);
  plVar15 = *(long **)(param_1 + 0x538);
  *(undefined8 *)(param_1 + 0x538) = 0;
  puVar9 = PTR_s_AOBlurV_047e14b0;
  if (plVar15 != (long *)0x0) {
    plVar16 = plVar15 + 5;
    do {
      lVar14 = *plVar16;
      iVar4 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_01271000;
  }
  uVar25 = local_d0;
  local_d0 = 0;
  *(undefined8 *)(param_1 + 0x538) = uVar25;
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  lVar14 = *(long *)(param_1 + 0x538);
  local_f0 = (long *)&DAT_11517111e739f0fc;
  pcStack_e8 = PTR_s_AOBlurH_047e1270;
  local_e0 = 0x1f;
  local_d8 = (long *)0x0;
  FUN_01272358(&local_118,plVar24,&local_f0);
  FUN_00d10690(*(undefined8 *)(lVar14 + 200),0,&local_118);
  if ((char)local_118 != '\0') {
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
    local_118 = (undefined1 *)((ulong)local_118 & 0xffffffffffffff00);
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  FUN_00eacd1c(*(undefined8 *)(param_1 + 0x538),0,0,0);
  FUN_00eb3bec(*(undefined8 *)(*(long *)(param_1 + 0x538) + 200),0);
  FUN_00eb4900(*(undefined8 *)(*(long *)(param_1 + 0x538) + 200),0);
  local_108 = 0x1f;
  local_100 = (long *)0x0;
  local_f0 = (long *)0x38edf714b55c5ae9;
  pcStack_e8 = "[AO:Blur-V]";
  local_e0 = 0xb;
  local_d8 = (long *)0x0;
  local_118 = (undefined1 *)0x11516711e739dffe;
  local_110 = puVar9;
  FUN_01343d88(&local_d0,DAT_0485a0d0,&local_118,&local_f0,0);
  plVar15 = *(long **)(param_1 + 0x540);
  *(undefined8 *)(param_1 + 0x540) = 0;
  if (plVar15 != (long *)0x0) {
    plVar16 = plVar15 + 5;
    do {
      lVar14 = *plVar16;
      iVar4 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_01271000;
  }
  uVar25 = local_d0;
  local_d0 = 0;
  *(undefined8 *)(param_1 + 0x540) = uVar25;
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  lVar14 = *(long *)(param_1 + 0x540);
  local_f0 = (long *)0x11516711e739dffe;
  pcStack_e8 = PTR_s_AOBlurV_047e1278;
  local_e0 = 0x1f;
  local_d8 = (long *)0x0;
  FUN_01272358(&local_118,plVar24,&local_f0);
  FUN_00d10690(*(undefined8 *)(lVar14 + 200),0,&local_118);
  if ((char)local_118 != '\0') {
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
    local_118 = (undefined1 *)((ulong)local_118 & 0xffffffffffffff00);
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  FUN_00eacd1c(*(undefined8 *)(param_1 + 0x540),0,0,0);
  FUN_00eb3bec(*(undefined8 *)(*(long *)(param_1 + 0x540) + 200),0);
  FUN_00eb4900(*(undefined8 *)(*(long *)(param_1 + 0x540) + 200),0);
  lVar14 = DAT_0485a0f0;
  lVar20 = *(long *)(param_1 + 0x528);
  if (*(long *)(DAT_0485a0f0 + 0x38) != *(long *)(DAT_0485a0f0 + 0x30)) {
    *(ulong *)(lVar20 + 0xd0) = *(ulong *)(lVar20 + 0xd0) & 0xfffffffe;
    *(ulong *)(*(long *)(param_1 + 0x530) + 0xd0) =
         *(ulong *)(*(long *)(param_1 + 0x530) + 0xd0) & 0xfffffffe;
    *(ulong *)(*(long *)(param_1 + 0x538) + 0xd0) =
         *(ulong *)(*(long *)(param_1 + 0x538) + 0xd0) & 0xfffffffe;
    *(ulong *)(*(long *)(param_1 + 0x540) + 0xd0) =
         *(ulong *)(*(long *)(param_1 + 0x540) + 0xd0) & 0xfffffffe;
    lVar20 = *(long *)(param_1 + 0x528);
    if (1 < (ulong)((*(long *)(lVar14 + 0x38) - *(long *)(lVar14 + 0x30) >> 4) * -0x5555555555555555
                   )) {
      *(ulong *)(lVar20 + 0xd0) = *(ulong *)(lVar20 + 0xd0) & 0xfffffffd;
      *(ulong *)(*(long *)(param_1 + 0x530) + 0xd0) =
           *(ulong *)(*(long *)(param_1 + 0x530) + 0xd0) & 0xfffffffd;
      *(ulong *)(*(long *)(param_1 + 0x538) + 0xd0) =
           *(ulong *)(*(long *)(param_1 + 0x538) + 0xd0) & 0xfffffffd;
      *(ulong *)(*(long *)(param_1 + 0x540) + 0xd0) =
           *(ulong *)(*(long *)(param_1 + 0x540) + 0xd0) & 0xfffffffd;
      lVar20 = *(long *)(param_1 + 0x528);
      if (2 < (ulong)((*(long *)(lVar14 + 0x38) - *(long *)(lVar14 + 0x30) >> 4) *
                     -0x5555555555555555)) {
        *(ulong *)(lVar20 + 0xd0) = *(ulong *)(lVar20 + 0xd0) & 0xfffffffb;
        *(ulong *)(*(long *)(param_1 + 0x530) + 0xd0) =
             *(ulong *)(*(long *)(param_1 + 0x530) + 0xd0) & 0xfffffffb;
        *(ulong *)(*(long *)(param_1 + 0x538) + 0xd0) =
             *(ulong *)(*(long *)(param_1 + 0x538) + 0xd0) & 0xfffffffb;
        *(ulong *)(*(long *)(param_1 + 0x540) + 0xd0) =
             *(ulong *)(*(long *)(param_1 + 0x540) + 0xd0) & 0xfffffffb;
        lVar20 = *(long *)(param_1 + 0x528);
        if (3 < (ulong)((*(long *)(lVar14 + 0x38) - *(long *)(lVar14 + 0x30) >> 4) *
                       -0x5555555555555555)) {
          uVar22 = 3;
          do {
            uVar21 = (uint)uVar22;
            uVar22 = uVar22 + 1;
            uVar23 = (ulong)(uint)~(1 << (ulong)(uVar21 & 0x1f));
            *(ulong *)(lVar20 + 0xd0) = *(ulong *)(lVar20 + 0xd0) & uVar23;
            *(ulong *)(*(long *)(param_1 + 0x530) + 0xd0) =
                 *(ulong *)(*(long *)(param_1 + 0x530) + 0xd0) & uVar23;
            *(ulong *)(*(long *)(param_1 + 0x538) + 0xd0) =
                 *(ulong *)(*(long *)(param_1 + 0x538) + 0xd0) & uVar23;
            *(ulong *)(*(long *)(param_1 + 0x540) + 0xd0) =
                 *(ulong *)(*(long *)(param_1 + 0x540) + 0xd0) & uVar23;
            lVar20 = *(long *)(param_1 + 0x528);
          } while (uVar22 < (ulong)((*(long *)(lVar14 + 0x38) - *(long *)(lVar14 + 0x30) >> 4) *
                                   -0x5555555555555555));
        }
      }
    }
  }
  *(ulong *)(lVar20 + 0xd0) =
       (ulong)(*(uint *)(lVar20 + 0xd0) | 1 << (ulong)(*(uint *)(param_1 + 0x380) & 0x1f));
  *(ulong *)(*(long *)(param_1 + 0x530) + 0xd0) =
       (ulong)(*(uint *)(*(long *)(param_1 + 0x530) + 0xd0) |
              1 << (ulong)(*(uint *)(param_1 + 0x380) & 0x1f));
  *(ulong *)(*(long *)(param_1 + 0x538) + 0xd0) =
       (ulong)(*(uint *)(*(long *)(param_1 + 0x538) + 0xd0) |
              1 << (ulong)(*(uint *)(param_1 + 0x380) & 0x1f));
  *(ulong *)(*(long *)(param_1 + 0x540) + 0xd0) =
       (ulong)(*(uint *)(*(long *)(param_1 + 0x540) + 0xd0) |
              1 << (ulong)(*(uint *)(param_1 + 0x380) & 0x1f));
  if (plVar24 != (long *)0x0) {
    plVar15 = plVar24 + 5;
    do {
      lVar14 = *plVar15;
      iVar4 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *(int *)plVar15 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
    }
    else if ((int)lVar14 == 0) {
LAB_01271000:
      pcVar18 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_01271020:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 pcVar18,0x58,"Reference counter underflows.");
    }
  }
  return;
LAB_0126fab8:
  piVar19 = piVar19 + 8;
  if ((int *)plVar16[0x23] == piVar19) goto LAB_0126fac4;
  goto LAB_0126faa0;
LAB_0126fd34:
  piVar19 = piVar19 + 8;
  if ((int *)plVar16[0x23] == piVar19) goto LAB_0126fd40;
  goto LAB_0126fd1c;
LAB_0126fde4:
  piVar19 = piVar19 + 8;
  if ((int *)plVar16[0x23] == piVar19) goto LAB_0126fdf0;
  goto LAB_0126fdcc;
LAB_0126feec:
  piVar19 = piVar19 + 8;
  if ((int *)plVar16[0x23] == piVar19) goto LAB_0126fef8;
  goto LAB_0126fed4;
LAB_0127016c:
  piVar19 = piVar19 + 8;
  if ((int *)plVar16[0x23] == piVar19) goto LAB_01270178;
  goto LAB_01270154;
LAB_01270f18:
  piVar19 = piVar19 + 8;
  if (_DAT_00000118 == piVar19) goto LAB_01270f24;
  goto LAB_01270f00;
LAB_0127035c:
  piVar19 = piVar19 + 8;
  if ((int *)plVar16[0x23] == piVar19) goto LAB_01270368;
  goto LAB_01270344;
}


