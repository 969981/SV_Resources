/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01968a58; name: FUN_01968a58
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01968a58(long param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  char *pcVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  undefined8 uVar23;
  long *plVar24;
  int iVar25;
  undefined8 local_e0;
  long *local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  long *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  long *local_88;
  ulong local_80;
  undefined *puStack_78;
  undefined8 local_70;
  long *local_68;
  
  puVar11 = (undefined8 *)FUN_00f351bc();
  puVar11 = (undefined8 *)FUN_00e514cc(*puVar11);
  plVar24 = (long *)*puVar11;
  if (plVar24 != (long *)0x0) {
    plVar12 = plVar24 + 5;
    do {
      lVar20 = *plVar12;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = (int)lVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar20 == -1) goto LAB_0196b868;
  }
  iVar4 = *(int *)(param_1 + 0x58c);
  uVar23 = *(undefined8 *)(param_1 + 0x388);
  local_a0 = (long *)0x45a6fa210a564d58;
  puStack_98 = PTR_s_Main_Transparent_047e1130;
  local_90 = 0x1f;
  local_88 = (long *)0x0;
  FUN_01464dd0(&local_80,&local_a0,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_c0,uVar23,&local_80);
  plVar12 = *(long **)(param_1 + 0x390);
  *(undefined8 *)(param_1 + 0x390) = 0;
  if (plVar12 != (long *)0x0) {
    plVar16 = plVar12 + 5;
    do {
      lVar20 = *plVar16;
      iVar7 = (int)lVar20 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar20 == 0) goto LAB_0196b840;
  }
  uVar23 = local_c0;
  local_c0 = 0;
  *(undefined8 *)(param_1 + 0x390) = uVar23;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  FUN_01343f00(*(undefined8 *)(param_1 + 0x390),iVar4,0xe);
  *(undefined4 *)(*(long *)(param_1 + 0x390) + 0x1e0) = 2;
  uVar23 = *(undefined8 *)(param_1 + 0x390);
  uVar10 = FUN_01464df0(0x88,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar23,uVar10);
  plVar12 = *(long **)(*(long *)(param_1 + 0x390) + 0x58);
  if (plVar12 != (long *)0x0) {
    plVar16 = plVar12 + 5;
    do {
      lVar20 = *plVar16;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = (int)lVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar20 == -1) goto LAB_0196b868;
  }
  local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
  plVar16 = (long *)(param_1 + 0x458);
  local_c0 = CONCAT44(local_c0._4_4_,iVar4 + 5);
  local_80 = local_80 & 0xffffffffffffff00;
  piVar19 = (int *)plVar12[0x22];
  if (piVar19 != (int *)plVar12[0x23]) {
LAB_01968bc0:
    if ((*piVar19 != 2) || (piVar19[1] != iVar4 + 5)) goto LAB_01968bd8;
    lVar20 = *plVar16;
    if (lVar20 != 0) {
      piVar3 = (int *)(lVar20 + 0x28);
      do {
        iVar7 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = iVar7 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == -1) goto LAB_0196b890;
    }
    plVar17 = *(long **)(piVar19 + 2);
    *(long *)(piVar19 + 2) = lVar20;
    if (plVar17 == (long *)0x0) goto LAB_01968c4c;
    plVar15 = plVar17 + 5;
    do {
      lVar20 = *plVar15;
      iVar7 = (int)lVar20 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar17 + 0x10))();
      goto LAB_01968c4c;
    }
    if ((int)lVar20 != 0) goto LAB_01968c4c;
    goto LAB_0196b7a0;
  }
LAB_01968be4:
  FUN_00d11148(plVar12 + 0x22,&local_a0,&local_c0,plVar16,&local_80);
LAB_01968c4c:
  if (plVar12 != (long *)0x0) {
    plVar17 = plVar12 + 5;
    do {
      lVar20 = *plVar17;
      iVar7 = (int)lVar20 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar20 == 0) goto LAB_0196b840;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x390) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_c0 = CONCAT44(local_c0._4_4_,iVar4 + 3);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_0196adec:
      if ((*piVar19 != 2) || (piVar19[1] != iVar4 + 3)) goto LAB_0196ae04;
      lVar20 = *(long *)(param_1 + 0x470);
      if (lVar20 != 0) {
        piVar3 = (int *)(lVar20 + 0x28);
        do {
          iVar7 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar7 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == -1) goto LAB_0196b890;
      }
      plVar12 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar20;
      if (plVar12 == (long *)0x0) goto LAB_01968d58;
      plVar17 = plVar12 + 5;
      do {
        lVar20 = *plVar17;
        iVar7 = (int)lVar20 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        lVar20 = *plVar12;
        goto LAB_0196a8f0;
      }
      if ((int)lVar20 != 0) goto LAB_01968d58;
      goto LAB_0196b7a0;
    }
LAB_0196ae10:
    FUN_00d11148(0x110,&local_a0,&local_c0,(long *)(param_1 + 0x470),&local_80);
  }
  else {
    plVar17 = plVar12 + 5;
    do {
      lVar20 = *plVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = (int)lVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar20 == -1) goto LAB_0196b868;
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_c0 = CONCAT44(local_c0._4_4_,iVar4 + 3);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = (int *)plVar12[0x22];
    if (piVar19 != (int *)plVar12[0x23]) {
LAB_01968cb8:
      if ((*piVar19 != 2) || (piVar19[1] != iVar4 + 3)) goto LAB_01968cd0;
      lVar20 = *(long *)(param_1 + 0x470);
      if (lVar20 != 0) {
        piVar3 = (int *)(lVar20 + 0x28);
        do {
          iVar7 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar7 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == -1) goto LAB_0196b890;
      }
      plVar15 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar20;
      if (plVar15 == (long *)0x0) goto LAB_01968d40;
      plVar14 = plVar15 + 5;
      do {
        lVar20 = *plVar14;
        iVar7 = (int)lVar20 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar15 + 0x10))();
        goto LAB_01968d40;
      }
      if ((int)lVar20 != 0) goto LAB_01968d40;
      goto LAB_0196b7a0;
    }
LAB_01968cdc:
    FUN_00d11148(plVar12 + 0x22,&local_a0,&local_c0,(long *)(param_1 + 0x470),&local_80);
LAB_01968d40:
    do {
      lVar20 = *plVar17;
      iVar7 = (int)lVar20 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      lVar20 = *plVar12;
LAB_0196a8f0:
      (**(code **)(lVar20 + 0x10))(plVar12);
    }
    else if ((int)lVar20 == 0) goto LAB_0196b840;
  }
LAB_01968d58:
  plVar12 = *(long **)(*(long *)(param_1 + 0x390) + 0x58);
  if (plVar12 != (long *)0x0) {
    plVar17 = plVar12 + 5;
    do {
      lVar20 = *plVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = (int)lVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar20 == -1) goto LAB_0196b868;
  }
  lVar20 = param_1 + 0x480;
  local_80 = local_80 & 0xffffffffffffff00;
  FUN_00d8219c(plVar12,0,lVar20,0xffffffff,&local_80);
  if (plVar12 != (long *)0x0) {
    plVar17 = plVar12 + 5;
    do {
      lVar9 = *plVar17;
      iVar7 = (int)lVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar9 == 0) goto LAB_0196b840;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x390) + 0x58);
  if (plVar12 != (long *)0x0) {
    plVar17 = plVar12 + 5;
    do {
      lVar9 = *plVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = (int)lVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar9 == -1) goto LAB_0196b868;
  }
  lVar9 = param_1 + 0x488;
  local_80 = local_80 & 0xffffffffffffff00;
  FUN_00d829fc(plVar12,lVar9,&local_80);
  if (plVar12 != (long *)0x0) {
    plVar17 = plVar12 + 5;
    do {
      lVar21 = *plVar17;
      iVar7 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x390) + 0x58);
  if (plVar12 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar17 = plVar12 + 5;
    do {
      lVar21 = *plVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    FUN_00d819c8(0,plVar12,0);
    do {
      lVar21 = *plVar17;
      iVar7 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  FUN_01271098(*(undefined8 *)(param_1 + 0x390),0x12);
  local_b8 = 0x400000001;
  uStack_b0 = 0x100000002;
  local_a8 = 1;
  local_c0 = 0x100000001;
  local_d0 = FUN_015b2874(*param_2,&local_c0);
  plVar12 = *(long **)(*(long *)(param_1 + 0x390) + 0x58);
  if (plVar12 == (long *)0x0) {
    FUN_00ebe848(0,1,local_d0);
  }
  else {
    plVar17 = plVar12 + 5;
    do {
      lVar21 = *plVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    FUN_00ebe848(plVar12,1,local_d0);
    do {
      lVar21 = *plVar17;
      iVar7 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  iVar4 = iVar4 + 0xc;
  plVar12 = *(long **)(*(long *)(param_1 + 0x390) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_d8 = (long *)CONCAT44(local_d8._4_4_,iVar4);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_0196ae7c:
      if ((*piVar19 != 2) || (piVar19[1] != iVar4)) goto LAB_0196ae94;
      lVar21 = *(long *)(param_1 + 0x4f8);
      if (lVar21 != 0) {
        piVar3 = (int *)(lVar21 + 0x28);
        do {
          iVar4 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar4 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 == -1) goto LAB_0196b890;
      }
      plVar12 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar21;
      if (plVar12 == (long *)0x0) goto LAB_01968fec;
      plVar17 = plVar12 + 5;
      do {
        lVar21 = *plVar17;
        iVar4 = (int)lVar21 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = iVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == 0) {
        lVar21 = *plVar12;
        goto LAB_0196a92c;
      }
      if ((int)lVar21 != 0) goto LAB_01968fec;
      goto LAB_0196b7a0;
    }
LAB_0196aea0:
    FUN_00d11148(0x110,&local_a0,&local_d8,(long *)(param_1 + 0x4f8),&local_80);
  }
  else {
    plVar17 = plVar12 + 5;
    do {
      lVar21 = *plVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_d8 = (long *)CONCAT44(local_d8._4_4_,iVar4);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = (int *)plVar12[0x22];
    if (piVar19 != (int *)plVar12[0x23]) {
LAB_01968f4c:
      if ((*piVar19 != 2) || (piVar19[1] != iVar4)) goto LAB_01968f64;
      lVar21 = *(long *)(param_1 + 0x4f8);
      if (lVar21 != 0) {
        piVar3 = (int *)(lVar21 + 0x28);
        do {
          iVar4 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar4 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 == -1) goto LAB_0196b890;
      }
      plVar15 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar21;
      if (plVar15 == (long *)0x0) goto LAB_01968fd4;
      plVar14 = plVar15 + 5;
      do {
        lVar21 = *plVar14;
        iVar4 = (int)lVar21 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar15 + 0x10))();
        goto LAB_01968fd4;
      }
      if ((int)lVar21 != 0) goto LAB_01968fd4;
      goto LAB_0196b7a0;
    }
LAB_01968f70:
    FUN_00d11148(plVar12 + 0x22,&local_a0,&local_d8,(long *)(param_1 + 0x4f8),&local_80);
LAB_01968fd4:
    do {
      lVar21 = *plVar17;
      iVar4 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      lVar21 = *plVar12;
LAB_0196a92c:
      (**(code **)(lVar21 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
LAB_01968fec:
  iVar4 = *(int *)(param_1 + 0x58c);
  uVar23 = *(undefined8 *)(param_1 + 0x388);
  local_a0 = (long *)0xb6b279fe04ef1289;
  puStack_98 = PTR_s_BeforeWater_047e14d0;
  local_90 = 0x1f;
  local_88 = (long *)0x0;
  FUN_01464dd0(&local_80,&local_a0,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_d8,uVar23,&local_80);
  plVar12 = *(long **)(param_1 + 0x3d8);
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  if (plVar12 != (long *)0x0) {
    plVar17 = plVar12 + 5;
    do {
      lVar21 = *plVar17;
      iVar7 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  plVar12 = local_d8;
  local_d8 = (long *)0x0;
  *(long **)(param_1 + 0x3d8) = plVar12;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  FUN_01343f00(*(undefined8 *)(param_1 + 0x3d8),iVar4,0xe);
  uVar23 = *(undefined8 *)(param_1 + 0x3d8);
  uVar10 = FUN_01464df0(0x78,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar23,uVar10);
  plVar12 = *(long **)(*(long *)(param_1 + 0x3d8) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_d8 = (long *)CONCAT44(local_d8._4_4_,iVar4 + 5);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_0196aee4:
      if ((*piVar19 != 2) || (piVar19[1] != iVar4 + 5)) goto LAB_0196aefc;
      lVar21 = *plVar16;
      if (lVar21 != 0) {
        piVar3 = (int *)(lVar21 + 0x28);
        do {
          iVar7 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar7 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == -1) goto LAB_0196b890;
      }
      plVar12 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar21;
      if (plVar12 == (long *)0x0) goto LAB_01969194;
      plVar17 = plVar12 + 5;
      do {
        lVar21 = *plVar17;
        iVar7 = (int)lVar21 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        lVar21 = *plVar12;
        goto LAB_0196a940;
      }
      if ((int)lVar21 != 0) goto LAB_01969194;
      goto LAB_0196b7a0;
    }
LAB_0196af08:
    FUN_00d11148(0x110,&local_a0,&local_d8,plVar16,&local_80);
  }
  else {
    plVar17 = plVar12 + 5;
    do {
      lVar21 = *plVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_d8 = (long *)CONCAT44(local_d8._4_4_,iVar4 + 5);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = (int *)plVar12[0x22];
    if (piVar19 != (int *)plVar12[0x23]) {
LAB_019690f0:
      if ((*piVar19 != 2) || (piVar19[1] != iVar4 + 5)) goto LAB_01969108;
      lVar21 = *plVar16;
      if (lVar21 != 0) {
        piVar3 = (int *)(lVar21 + 0x28);
        do {
          iVar7 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar7 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == -1) goto LAB_0196b890;
      }
      plVar15 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar21;
      if (plVar15 == (long *)0x0) goto LAB_0196917c;
      plVar14 = plVar15 + 5;
      do {
        lVar21 = *plVar14;
        iVar7 = (int)lVar21 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar15 + 0x10))();
        goto LAB_0196917c;
      }
      if ((int)lVar21 != 0) goto LAB_0196917c;
      goto LAB_0196b7a0;
    }
LAB_01969114:
    FUN_00d11148(plVar12 + 0x22,&local_a0,&local_d8,plVar16,&local_80);
LAB_0196917c:
    do {
      lVar21 = *plVar17;
      iVar7 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      lVar21 = *plVar12;
LAB_0196a940:
      (**(code **)(lVar21 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
LAB_01969194:
  plVar12 = *(long **)(*(long *)(param_1 + 0x3d8) + 0x58);
  if (plVar12 != (long *)0x0) {
    plVar17 = plVar12 + 5;
    do {
      lVar21 = *plVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
  }
  iVar7 = iVar4 + 0xc;
  local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
  local_d8 = (long *)CONCAT44(local_d8._4_4_,iVar7);
  plVar17 = (long *)(param_1 + 0x450);
  local_80 = local_80 & 0xffffffffffffff00;
  piVar19 = (int *)plVar12[0x22];
  if (piVar19 != (int *)plVar12[0x23]) {
LAB_019691e0:
    if ((*piVar19 != 2) || (piVar19[1] != iVar7)) goto LAB_019691f8;
    lVar21 = *plVar17;
    if (lVar21 != 0) {
      piVar3 = (int *)(lVar21 + 0x28);
      do {
        iVar25 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = iVar25 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar25 == -1) goto LAB_0196b890;
    }
    plVar15 = *(long **)(piVar19 + 2);
    *(long *)(piVar19 + 2) = lVar21;
    if (plVar15 == (long *)0x0) goto LAB_0196926c;
    plVar14 = plVar15 + 5;
    do {
      lVar21 = *plVar14;
      iVar25 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar15 + 0x10))();
      goto LAB_0196926c;
    }
    if ((int)lVar21 != 0) goto LAB_0196926c;
    goto LAB_0196b7a0;
  }
LAB_01969204:
  FUN_00d11148(plVar12 + 0x22,&local_a0,&local_d8,plVar17,&local_80);
LAB_0196926c:
  if (plVar12 != (long *)0x0) {
    plVar15 = plVar12 + 5;
    do {
      lVar21 = *plVar15;
      iVar25 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x3d8) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_80 = (ulong)local_80._1_7_ << 8;
    FUN_00d8219c(0,0,lVar20,0xffffffff,&local_80);
  }
  else {
    plVar15 = plVar12 + 5;
    do {
      lVar21 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    local_80 = (ulong)local_80._1_7_ << 8;
    FUN_00d8219c(plVar12,0,lVar20,0xffffffff,&local_80);
    do {
      lVar21 = *plVar15;
      iVar25 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x3d8) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_80 = (ulong)local_80._1_7_ << 8;
    FUN_00d829fc(0,lVar9,&local_80);
  }
  else {
    plVar15 = plVar12 + 5;
    do {
      lVar21 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    local_80 = (ulong)local_80._1_7_ << 8;
    FUN_00d829fc(plVar12,lVar9,&local_80);
    do {
      lVar21 = *plVar15;
      iVar25 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x3d8) + 0x58);
  if (plVar12 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar15 = plVar12 + 5;
    do {
      lVar21 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    FUN_00d819c8(0,plVar12,0);
    do {
      lVar21 = *plVar15;
      iVar25 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  uVar23 = *(undefined8 *)(param_1 + 0x388);
  local_a0 = (long *)0x51b8652aab57eb0;
  puStack_98 = PTR_s_Water_047e14e0;
  local_90 = 0x1f;
  local_88 = (long *)0x0;
  FUN_01464dd0(&local_80,&local_a0,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_d8,uVar23,&local_80);
  plVar12 = *(long **)(param_1 + 0x3e0);
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  if (plVar12 != (long *)0x0) {
    plVar15 = plVar12 + 5;
    do {
      lVar21 = *plVar15;
      iVar25 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  plVar12 = local_d8;
  local_d8 = (long *)0x0;
  *(long **)(param_1 + 0x3e0) = plVar12;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  uVar23 = *(undefined8 *)(param_1 + 0x3e0);
  uVar10 = FUN_01464df0(0x7f,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar23,uVar10);
  FUN_01343f00(*(undefined8 *)(param_1 + 0x3e0),iVar4,0xe);
  plVar12 = *(long **)(*(long *)(param_1 + 0x3e0) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_80 = (ulong)local_80._1_7_ << 8;
    FUN_00d8219c(0,0,lVar20,0xffffffff,&local_80);
  }
  else {
    plVar15 = plVar12 + 5;
    do {
      lVar21 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    local_80 = (ulong)local_80._1_7_ << 8;
    FUN_00d8219c(plVar12,0,lVar20,0xffffffff,&local_80);
    do {
      lVar21 = *plVar15;
      iVar25 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x3e0) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_80 = (ulong)local_80._1_7_ << 8;
    FUN_00d829fc(0,lVar9,&local_80);
  }
  else {
    plVar15 = plVar12 + 5;
    do {
      lVar21 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    local_80 = (ulong)local_80._1_7_ << 8;
    FUN_00d829fc(plVar12,lVar9,&local_80);
    do {
      lVar21 = *plVar15;
      iVar25 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x3e0) + 0x58);
  if (plVar12 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar15 = plVar12 + 5;
    do {
      lVar21 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    FUN_00d819c8(0,plVar12,0);
    do {
      lVar21 = *plVar15;
      iVar25 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x3e0) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_d8 = (long *)CONCAT44(local_d8._4_4_,iVar4 + 1);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_0196afec:
      if ((*piVar19 != 2) || (piVar19[1] != iVar4 + 1)) goto LAB_0196b004;
      lVar21 = *(long *)(param_1 + 0x498);
      if (lVar21 != 0) {
        piVar3 = (int *)(lVar21 + 0x28);
        do {
          iVar25 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar25 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar25 == -1) goto LAB_0196b890;
      }
      plVar12 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar21;
      if (plVar12 == (long *)0x0) goto LAB_01969640;
      plVar15 = plVar12 + 5;
      do {
        lVar21 = *plVar15;
        iVar25 = (int)lVar21 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *(int *)plVar15 = iVar25;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar25 == 0) {
        lVar21 = *plVar12;
        goto LAB_0196a9cc;
      }
      if ((int)lVar21 != 0) goto LAB_01969640;
      goto LAB_0196b7a0;
    }
LAB_0196b010:
    FUN_00d11148(0x110,&local_a0,&local_d8,(long *)(param_1 + 0x498),&local_80);
  }
  else {
    plVar15 = plVar12 + 5;
    do {
      lVar21 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_d8 = (long *)CONCAT44(local_d8._4_4_,iVar4 + 1);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = (int *)plVar12[0x22];
    if (piVar19 != (int *)plVar12[0x23]) {
LAB_0196959c:
      if ((*piVar19 != 2) || (piVar19[1] != iVar4 + 1)) goto LAB_019695b4;
      lVar21 = *(long *)(param_1 + 0x498);
      if (lVar21 != 0) {
        piVar3 = (int *)(lVar21 + 0x28);
        do {
          iVar25 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar25 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar25 == -1) goto LAB_0196b890;
      }
      plVar14 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar21;
      if (plVar14 == (long *)0x0) goto LAB_01969628;
      plVar13 = plVar14 + 5;
      do {
        lVar21 = *plVar13;
        iVar25 = (int)lVar21 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *(int *)plVar13 = iVar25;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar25 == 0) {
        (**(code **)(*plVar14 + 0x10))();
        goto LAB_01969628;
      }
      if ((int)lVar21 != 0) goto LAB_01969628;
      goto LAB_0196b7a0;
    }
LAB_019695c0:
    FUN_00d11148(plVar12 + 0x22,&local_a0,&local_d8,(long *)(param_1 + 0x498),&local_80);
LAB_01969628:
    do {
      lVar21 = *plVar15;
      iVar25 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar25 == 0) {
      lVar21 = *plVar12;
LAB_0196a9cc:
      (**(code **)(lVar21 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
LAB_01969640:
  iVar25 = iVar4 + 1;
  plVar15 = (long *)(param_1 + 0x498);
  plVar12 = *(long **)(*(long *)(param_1 + 0x3e0) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_d8 = (long *)CONCAT44(local_d8._4_4_,iVar4 + 2);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_0196b058:
      if ((*piVar19 != 2) || (piVar19[1] != iVar4 + 2)) goto LAB_0196b070;
      lVar21 = *plVar17;
      if (lVar21 != 0) {
        piVar3 = (int *)(lVar21 + 0x28);
        do {
          iVar22 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar22 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar22 == -1) goto LAB_0196b890;
      }
      plVar12 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar21;
      if (plVar12 == (long *)0x0) goto LAB_0196972c;
      plVar14 = plVar12 + 5;
      do {
        lVar21 = *plVar14;
        iVar22 = (int)lVar21 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar22;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar22 == 0) {
        lVar21 = *plVar12;
        goto LAB_0196a9e0;
      }
      if ((int)lVar21 != 0) goto LAB_0196972c;
      goto LAB_0196b7a0;
    }
LAB_0196b07c:
    FUN_00d11148(0x110,&local_a0,&local_d8,plVar17,&local_80);
  }
  else {
    plVar14 = plVar12 + 5;
    do {
      lVar21 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_d8 = (long *)CONCAT44(local_d8._4_4_,iVar4 + 2);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = (int *)plVar12[0x22];
    if (piVar19 != (int *)plVar12[0x23]) {
LAB_01969688:
      if ((*piVar19 != 2) || (piVar19[1] != iVar4 + 2)) goto LAB_019696a0;
      lVar21 = *plVar17;
      if (lVar21 != 0) {
        piVar3 = (int *)(lVar21 + 0x28);
        do {
          iVar22 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar22 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar22 == -1) goto LAB_0196b890;
      }
      plVar13 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar21;
      if (plVar13 == (long *)0x0) goto LAB_01969714;
      plVar2 = plVar13 + 5;
      do {
        lVar21 = *plVar2;
        iVar22 = (int)lVar21 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar22;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar22 == 0) {
        (**(code **)(*plVar13 + 0x10))();
        goto LAB_01969714;
      }
      if ((int)lVar21 != 0) goto LAB_01969714;
      goto LAB_0196b7a0;
    }
LAB_019696ac:
    FUN_00d11148(plVar12 + 0x22,&local_a0,&local_d8,plVar17,&local_80);
LAB_01969714:
    do {
      lVar21 = *plVar14;
      iVar22 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar22;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar22 == 0) {
      lVar21 = *plVar12;
LAB_0196a9e0:
      (**(code **)(lVar21 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
LAB_0196972c:
  iVar22 = iVar4 + 2;
  plVar12 = *(long **)(*(long *)(param_1 + 0x3e0) + 0x58);
  if (plVar12 != (long *)0x0) {
    plVar14 = plVar12 + 5;
    do {
      lVar21 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
  }
  iVar1 = iVar4 + 3;
  FUN_0196b8b4(&local_a0,*(undefined8 *)(param_1 + 0x578));
  local_d8 = (long *)CONCAT44(local_d8._4_4_,2);
  local_e0 = CONCAT44(local_e0._4_4_,iVar1);
  local_80 = local_80 & 0xffffffffffffff00;
  piVar19 = (int *)plVar12[0x22];
  if (piVar19 != (int *)plVar12[0x23]) {
LAB_01969780:
    if ((*piVar19 != 2) || (piVar19[1] != iVar1)) goto LAB_01969798;
    if (local_a0 != (long *)0x0) {
      plVar14 = local_a0 + 5;
      do {
        lVar21 = *plVar14;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = (int)lVar21 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar21 == -1) goto LAB_0196b890;
    }
    plVar14 = *(long **)(piVar19 + 2);
    *(long **)(piVar19 + 2) = local_a0;
    if (plVar14 == (long *)0x0) goto LAB_0196980c;
    plVar13 = plVar14 + 5;
    do {
      lVar21 = *plVar13;
      iVar8 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar14 + 0x10))();
      goto LAB_0196980c;
    }
    if ((int)lVar21 != 0) goto LAB_0196980c;
    goto LAB_0196b7a0;
  }
LAB_019697a4:
  FUN_00d11148(plVar12 + 0x22,&local_d8,&local_e0,&local_a0,&local_80);
LAB_0196980c:
  if (local_a0 != (long *)0x0) {
    plVar14 = local_a0 + 5;
    do {
      lVar21 = *plVar14;
      iVar8 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  if (plVar12 != (long *)0x0) {
    plVar14 = plVar12 + 5;
    do {
      lVar21 = *plVar14;
      iVar8 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x3e0) + 0x58);
  if (plVar12 == (long *)0x0) {
    FUN_00ebe848(0,1,local_d0);
  }
  else {
    plVar14 = plVar12 + 5;
    do {
      lVar21 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    FUN_00ebe848(plVar12,1,local_d0);
    do {
      lVar21 = *plVar14;
      iVar8 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  uVar23 = *(undefined8 *)(param_1 + 0x388);
  local_a0 = (long *)0xe7c53912c508c7d9;
  puStack_98 = PTR_s_WaterTransparent1_047e1150;
  local_90 = 0x1f;
  local_88 = (long *)0x0;
  FUN_01464dd0(&local_80,&local_a0,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_d8,uVar23,&local_80);
  plVar12 = *(long **)(param_1 + 1000);
  *(undefined8 *)(param_1 + 1000) = 0;
  if (plVar12 != (long *)0x0) {
    plVar14 = plVar12 + 5;
    do {
      lVar21 = *plVar14;
      iVar8 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  plVar12 = local_d8;
  local_d8 = (long *)0x0;
  *(long **)(param_1 + 1000) = plVar12;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  uVar23 = *(undefined8 *)(param_1 + 1000);
  uVar10 = FUN_01464df0(0x80,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar23,uVar10);
  *(undefined4 *)(*(long *)(param_1 + 1000) + 0x1e0) = 2;
  FUN_01343f00(*(undefined8 *)(param_1 + 1000),iVar4,0xe);
  plVar12 = *(long **)(*(long *)(param_1 + 1000) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_80 = (ulong)local_80._1_7_ << 8;
    FUN_00d8219c(0,0,lVar20,0xffffffff,&local_80);
  }
  else {
    plVar14 = plVar12 + 5;
    do {
      lVar21 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    local_80 = (ulong)local_80._1_7_ << 8;
    FUN_00d8219c(plVar12,0,lVar20,0xffffffff,&local_80);
    do {
      lVar21 = *plVar14;
      iVar8 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 1000) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_80 = (ulong)local_80._1_7_ << 8;
    FUN_00d829fc(0,lVar9,&local_80);
  }
  else {
    plVar14 = plVar12 + 5;
    do {
      lVar21 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    local_80 = (ulong)local_80._1_7_ << 8;
    FUN_00d829fc(plVar12,lVar9,&local_80);
    do {
      lVar21 = *plVar14;
      iVar8 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 1000) + 0x58);
  if (plVar12 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar14 = plVar12 + 5;
    do {
      lVar21 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    FUN_00d819c8(0,plVar12,0);
    do {
      lVar21 = *plVar14;
      iVar8 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 1000) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_d8 = (long *)CONCAT44(local_d8._4_4_,iVar25);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_0196b120:
      if ((*piVar19 != 2) || (piVar19[1] != iVar25)) goto LAB_0196b138;
      lVar21 = *plVar15;
      if (lVar21 != 0) {
        piVar3 = (int *)(lVar21 + 0x28);
        do {
          iVar8 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 == -1) goto LAB_0196b890;
      }
      plVar12 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar21;
      if (plVar12 == (long *)0x0) goto LAB_01969b4c;
      plVar14 = plVar12 + 5;
      do {
        lVar21 = *plVar14;
        iVar8 = (int)lVar21 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        lVar21 = *plVar12;
        goto LAB_0196aa44;
      }
      if ((int)lVar21 != 0) goto LAB_01969b4c;
      goto LAB_0196b7a0;
    }
LAB_0196b144:
    FUN_00d11148(0x110,&local_a0,&local_d8,plVar15,&local_80);
  }
  else {
    plVar14 = plVar12 + 5;
    do {
      lVar21 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_d8 = (long *)CONCAT44(local_d8._4_4_,iVar25);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = (int *)plVar12[0x22];
    if (piVar19 != (int *)plVar12[0x23]) {
LAB_01969aa8:
      if ((*piVar19 != 2) || (piVar19[1] != iVar25)) goto LAB_01969ac0;
      lVar21 = *plVar15;
      if (lVar21 != 0) {
        piVar3 = (int *)(lVar21 + 0x28);
        do {
          iVar8 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 == -1) goto LAB_0196b890;
      }
      plVar13 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar21;
      if (plVar13 == (long *)0x0) goto LAB_01969b34;
      plVar2 = plVar13 + 5;
      do {
        lVar21 = *plVar2;
        iVar8 = (int)lVar21 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar13 + 0x10))();
        goto LAB_01969b34;
      }
      if ((int)lVar21 != 0) goto LAB_01969b34;
      goto LAB_0196b7a0;
    }
LAB_01969acc:
    FUN_00d11148(plVar12 + 0x22,&local_a0,&local_d8,plVar15,&local_80);
LAB_01969b34:
    do {
      lVar21 = *plVar14;
      iVar8 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      lVar21 = *plVar12;
LAB_0196aa44:
      (**(code **)(lVar21 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
LAB_01969b4c:
  plVar12 = *(long **)(*(long *)(param_1 + 1000) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_d8 = (long *)CONCAT44(local_d8._4_4_,iVar22);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_0196b188:
      if ((*piVar19 != 2) || (piVar19[1] != iVar22)) goto LAB_0196b1a0;
      lVar21 = *plVar17;
      if (lVar21 != 0) {
        piVar3 = (int *)(lVar21 + 0x28);
        do {
          iVar8 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 == -1) goto LAB_0196b890;
      }
      plVar12 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar21;
      if (plVar12 == (long *)0x0) goto LAB_01969c34;
      plVar14 = plVar12 + 5;
      do {
        lVar21 = *plVar14;
        iVar8 = (int)lVar21 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        lVar21 = *plVar12;
        goto LAB_0196aa58;
      }
      if ((int)lVar21 != 0) goto LAB_01969c34;
      goto LAB_0196b7a0;
    }
LAB_0196b1ac:
    FUN_00d11148(0x110,&local_a0,&local_d8,plVar17,&local_80);
  }
  else {
    plVar14 = plVar12 + 5;
    do {
      lVar21 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_d8 = (long *)CONCAT44(local_d8._4_4_,iVar22);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = (int *)plVar12[0x22];
    if (piVar19 != (int *)plVar12[0x23]) {
LAB_01969b90:
      if ((*piVar19 != 2) || (piVar19[1] != iVar22)) goto LAB_01969ba8;
      lVar21 = *plVar17;
      if (lVar21 != 0) {
        piVar3 = (int *)(lVar21 + 0x28);
        do {
          iVar8 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 == -1) goto LAB_0196b890;
      }
      plVar13 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar21;
      if (plVar13 == (long *)0x0) goto LAB_01969c1c;
      plVar2 = plVar13 + 5;
      do {
        lVar21 = *plVar2;
        iVar8 = (int)lVar21 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar13 + 0x10))();
        goto LAB_01969c1c;
      }
      if ((int)lVar21 != 0) goto LAB_01969c1c;
      goto LAB_0196b7a0;
    }
LAB_01969bb4:
    FUN_00d11148(plVar12 + 0x22,&local_a0,&local_d8,plVar17,&local_80);
LAB_01969c1c:
    do {
      lVar21 = *plVar14;
      iVar8 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      lVar21 = *plVar12;
LAB_0196aa58:
      (**(code **)(lVar21 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
LAB_01969c34:
  plVar12 = *(long **)(*(long *)(param_1 + 1000) + 0x58);
  if (plVar12 != (long *)0x0) {
    plVar14 = plVar12 + 5;
    do {
      lVar21 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
  }
  FUN_0196b8b4(&local_a0,*(undefined8 *)(param_1 + 0x578));
  local_d8 = (long *)CONCAT44(local_d8._4_4_,2);
  local_e0 = CONCAT44(local_e0._4_4_,iVar1);
  local_80 = local_80 & 0xffffffffffffff00;
  piVar19 = (int *)plVar12[0x22];
  if (piVar19 != (int *)plVar12[0x23]) {
LAB_01969c84:
    if ((*piVar19 != 2) || (piVar19[1] != iVar1)) goto LAB_01969c9c;
    if (local_a0 != (long *)0x0) {
      plVar14 = local_a0 + 5;
      do {
        lVar21 = *plVar14;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = (int)lVar21 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar21 == -1) goto LAB_0196b890;
    }
    plVar14 = *(long **)(piVar19 + 2);
    *(long **)(piVar19 + 2) = local_a0;
    if (plVar14 == (long *)0x0) goto LAB_01969d10;
    plVar13 = plVar14 + 5;
    do {
      lVar21 = *plVar13;
      iVar8 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar14 + 0x10))();
      goto LAB_01969d10;
    }
    if ((int)lVar21 != 0) goto LAB_01969d10;
    goto LAB_0196b7a0;
  }
LAB_01969ca8:
  FUN_00d11148(plVar12 + 0x22,&local_d8,&local_e0,&local_a0,&local_80);
LAB_01969d10:
  if (local_a0 != (long *)0x0) {
    plVar14 = local_a0 + 5;
    do {
      lVar21 = *plVar14;
      iVar8 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  if (plVar12 != (long *)0x0) {
    plVar14 = plVar12 + 5;
    do {
      lVar21 = *plVar14;
      iVar8 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 1000) + 0x58);
  if (plVar12 == (long *)0x0) {
    FUN_00ebe848(0,1,local_d0);
  }
  else {
    plVar14 = plVar12 + 5;
    do {
      lVar21 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    FUN_00ebe848(plVar12,1,local_d0);
    do {
      lVar21 = *plVar14;
      iVar8 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  uVar23 = *(undefined8 *)(param_1 + 0x388);
  local_a0 = (long *)0xe7c53612c508c2c0;
  puStack_98 = PTR_s_WaterTransparent2_047e1158;
  local_90 = 0x1f;
  local_88 = (long *)0x0;
  FUN_01464dd0(&local_80,&local_a0,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_d8,uVar23,&local_80);
  plVar12 = *(long **)(param_1 + 0x3f0);
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  if (plVar12 != (long *)0x0) {
    plVar14 = plVar12 + 5;
    do {
      lVar21 = *plVar14;
      iVar8 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  plVar12 = local_d8;
  local_d8 = (long *)0x0;
  *(long **)(param_1 + 0x3f0) = plVar12;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  uVar23 = *(undefined8 *)(param_1 + 0x3f0);
  uVar10 = FUN_01464df0(0x81,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar23,uVar10);
  *(undefined4 *)(*(long *)(param_1 + 0x3f0) + 0x1e0) = 2;
  FUN_01343f00(*(undefined8 *)(param_1 + 0x3f0),iVar4,0xe);
  plVar12 = *(long **)(*(long *)(param_1 + 0x3f0) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_80 = (ulong)local_80._1_7_ << 8;
    FUN_00d8219c(0,0,lVar20,0xffffffff,&local_80);
  }
  else {
    plVar14 = plVar12 + 5;
    do {
      lVar21 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    local_80 = (ulong)local_80._1_7_ << 8;
    FUN_00d8219c(plVar12,0,lVar20,0xffffffff,&local_80);
    do {
      lVar21 = *plVar14;
      iVar8 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x3f0) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_80 = (ulong)local_80._1_7_ << 8;
    FUN_00d829fc(0,lVar9,&local_80);
  }
  else {
    plVar14 = plVar12 + 5;
    do {
      lVar21 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    local_80 = (ulong)local_80._1_7_ << 8;
    FUN_00d829fc(plVar12,lVar9,&local_80);
    do {
      lVar21 = *plVar14;
      iVar8 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x3f0) + 0x58);
  if (plVar12 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar14 = plVar12 + 5;
    do {
      lVar21 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    FUN_00d819c8(0,plVar12,0);
    do {
      lVar21 = *plVar14;
      iVar8 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x3f0) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_d8 = (long *)CONCAT44(local_d8._4_4_,iVar25);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_0196b254:
      if ((*piVar19 != 2) || (piVar19[1] != iVar25)) goto LAB_0196b26c;
      lVar21 = *plVar15;
      if (lVar21 != 0) {
        piVar3 = (int *)(lVar21 + 0x28);
        do {
          iVar25 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar25 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar25 == -1) goto LAB_0196b890;
      }
      plVar12 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar21;
      if (plVar12 == (long *)0x0) goto LAB_0196a054;
      plVar15 = plVar12 + 5;
      do {
        lVar21 = *plVar15;
        iVar25 = (int)lVar21 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *(int *)plVar15 = iVar25;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar25 == 0) {
        (**(code **)(*plVar12 + 0x10))();
        goto LAB_0196a054;
      }
      if ((int)lVar21 != 0) goto LAB_0196a054;
      goto LAB_0196b7a0;
    }
LAB_0196b278:
    FUN_00d11148(0x110,&local_a0,&local_d8,plVar15,&local_80);
  }
  else {
    plVar14 = plVar12 + 5;
    do {
      lVar21 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_d8 = (long *)CONCAT44(local_d8._4_4_,iVar25);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = (int *)plVar12[0x22];
    if (piVar19 != (int *)plVar12[0x23]) {
LAB_01969fac:
      if ((*piVar19 != 2) || (piVar19[1] != iVar25)) goto LAB_01969fc4;
      lVar21 = *plVar15;
      if (lVar21 != 0) {
        piVar3 = (int *)(lVar21 + 0x28);
        do {
          iVar25 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar25 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar25 == -1) goto LAB_0196b890;
      }
      plVar15 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar21;
      if (plVar15 == (long *)0x0) goto LAB_0196a038;
      plVar13 = plVar15 + 5;
      do {
        lVar21 = *plVar13;
        iVar25 = (int)lVar21 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *(int *)plVar13 = iVar25;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar25 == 0) {
        (**(code **)(*plVar15 + 0x10))();
        goto LAB_0196a038;
      }
      if ((int)lVar21 != 0) goto LAB_0196a038;
      goto LAB_0196b7a0;
    }
LAB_01969fd0:
    FUN_00d11148(plVar12 + 0x22,&local_a0,&local_d8,plVar15,&local_80);
LAB_0196a038:
    do {
      lVar21 = *plVar14;
      iVar25 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
LAB_0196a054:
  plVar12 = *(long **)(*(long *)(param_1 + 0x3f0) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_d8 = (long *)CONCAT44(local_d8._4_4_,iVar22);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_0196b2bc:
      if ((*piVar19 != 2) || (piVar19[1] != iVar22)) goto LAB_0196b2d4;
      lVar21 = *plVar17;
      if (lVar21 != 0) {
        piVar3 = (int *)(lVar21 + 0x28);
        do {
          iVar25 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar25 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar25 == -1) goto LAB_0196b890;
      }
      plVar12 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar21;
      if (plVar12 == (long *)0x0) goto LAB_0196a13c;
      plVar17 = plVar12 + 5;
      do {
        lVar21 = *plVar17;
        iVar25 = (int)lVar21 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = iVar25;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar25 == 0) {
        lVar21 = *plVar12;
        goto LAB_0196aad4;
      }
      if ((int)lVar21 != 0) goto LAB_0196a13c;
      goto LAB_0196b7a0;
    }
LAB_0196b2e0:
    FUN_00d11148(0x110,&local_a0,&local_d8,plVar17,&local_80);
  }
  else {
    plVar15 = plVar12 + 5;
    do {
      lVar21 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_d8 = (long *)CONCAT44(local_d8._4_4_,iVar22);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = (int *)plVar12[0x22];
    if (piVar19 != (int *)plVar12[0x23]) {
LAB_0196a098:
      if ((*piVar19 != 2) || (piVar19[1] != iVar22)) goto LAB_0196a0b0;
      lVar21 = *plVar17;
      if (lVar21 != 0) {
        piVar3 = (int *)(lVar21 + 0x28);
        do {
          iVar25 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar25 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar25 == -1) goto LAB_0196b890;
      }
      plVar17 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar21;
      if (plVar17 == (long *)0x0) goto LAB_0196a124;
      plVar14 = plVar17 + 5;
      do {
        lVar21 = *plVar14;
        iVar25 = (int)lVar21 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar25;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar25 == 0) {
        (**(code **)(*plVar17 + 0x10))();
        goto LAB_0196a124;
      }
      if ((int)lVar21 != 0) goto LAB_0196a124;
      goto LAB_0196b7a0;
    }
LAB_0196a0bc:
    FUN_00d11148(plVar12 + 0x22,&local_a0,&local_d8,plVar17,&local_80);
LAB_0196a124:
    do {
      lVar21 = *plVar15;
      iVar25 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar25 == 0) {
      lVar21 = *plVar12;
LAB_0196aad4:
      (**(code **)(lVar21 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
LAB_0196a13c:
  plVar12 = *(long **)(*(long *)(param_1 + 0x3f0) + 0x58);
  if (plVar12 != (long *)0x0) {
    plVar17 = plVar12 + 5;
    do {
      lVar21 = *plVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
  }
  FUN_0196b8b4(&local_a0,*(undefined8 *)(param_1 + 0x578));
  local_d8 = (long *)CONCAT44(local_d8._4_4_,2);
  local_e0 = CONCAT44(local_e0._4_4_,iVar1);
  local_80 = local_80 & 0xffffffffffffff00;
  piVar19 = (int *)plVar12[0x22];
  if (piVar19 != (int *)plVar12[0x23]) {
LAB_0196a18c:
    if ((*piVar19 != 2) || (piVar19[1] != iVar1)) goto LAB_0196a1a4;
    if (local_a0 != (long *)0x0) {
      plVar17 = local_a0 + 5;
      do {
        lVar21 = *plVar17;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = (int)lVar21 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar21 == -1) goto LAB_0196b890;
    }
    plVar17 = *(long **)(piVar19 + 2);
    *(long **)(piVar19 + 2) = local_a0;
    if (plVar17 == (long *)0x0) goto LAB_0196a218;
    plVar15 = plVar17 + 5;
    do {
      lVar21 = *plVar15;
      iVar25 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar17 + 0x10))();
      goto LAB_0196a218;
    }
    if ((int)lVar21 != 0) goto LAB_0196a218;
    goto LAB_0196b7a0;
  }
LAB_0196a1b0:
  FUN_00d11148(plVar12 + 0x22,&local_d8,&local_e0,&local_a0,&local_80);
LAB_0196a218:
  if (local_a0 != (long *)0x0) {
    plVar17 = local_a0 + 5;
    do {
      lVar21 = *plVar17;
      iVar25 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  if (plVar12 != (long *)0x0) {
    plVar17 = plVar12 + 5;
    do {
      lVar21 = *plVar17;
      iVar25 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x3f0) + 0x58);
  if (plVar12 == (long *)0x0) {
    FUN_00ebe848(0,1,local_d0);
  }
  else {
    plVar17 = plVar12 + 5;
    do {
      lVar21 = *plVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    FUN_00ebe848(plVar12,1,local_d0);
    do {
      lVar21 = *plVar17;
      iVar25 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  local_80 = 0x6b21fb462691e0eb;
  puStack_78 = PTR_s_RefractionTarget_047e12c0;
  local_70 = 0x1f;
  local_68 = (long *)0x0;
  FUN_00fff044(&local_d8,plVar24,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  uVar23 = *(undefined8 *)(param_1 + 0x388);
  local_a0 = (long *)0xe8395c3183a7326a;
  puStack_98 = PTR_s_Refraction_047e0fc0;
  local_90 = 0x1f;
  local_88 = (long *)0x0;
  FUN_01464dd0(&local_80,&local_a0,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_e0,uVar23,&local_80);
  plVar12 = *(long **)(param_1 + 0x3f8);
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  if (plVar12 != (long *)0x0) {
    plVar17 = plVar12 + 5;
    do {
      lVar21 = *plVar17;
      iVar25 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
  uVar23 = local_e0;
  local_e0 = 0;
  *(undefined8 *)(param_1 + 0x3f8) = uVar23;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  FUN_01343f00(*(undefined8 *)(param_1 + 0x3f8),iVar4,0xe);
  uVar23 = *(undefined8 *)(param_1 + 0x3f8);
  uVar10 = FUN_01464df0(0x85,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar23,uVar10);
  plVar12 = *(long **)(*(long *)(param_1 + 0x3f8) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_e0 = CONCAT44(local_e0._4_4_,iVar4 + 5);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_0196b33c:
      if ((*piVar19 != 2) || (piVar19[1] != iVar4 + 5)) goto LAB_0196b354;
      lVar21 = *plVar16;
      if (lVar21 != 0) {
        piVar3 = (int *)(lVar21 + 0x28);
        do {
          iVar4 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar4 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 == -1) goto LAB_0196b890;
      }
      plVar12 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar21;
      if (plVar12 == (long *)0x0) goto LAB_0196a490;
      plVar16 = plVar12 + 5;
      do {
        lVar21 = *plVar16;
        iVar4 = (int)lVar21 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *(int *)plVar16 = iVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == 0) {
        lVar21 = *plVar12;
        goto LAB_0196aafc;
      }
      if ((int)lVar21 != 0) goto LAB_0196a490;
      goto LAB_0196b7a0;
    }
LAB_0196b360:
    FUN_00d11148(0x110,&local_a0,&local_e0,plVar16,&local_80);
  }
  else {
    plVar17 = plVar12 + 5;
    do {
      lVar21 = *plVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_e0 = CONCAT44(local_e0._4_4_,iVar4 + 5);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = (int *)plVar12[0x22];
    if (piVar19 != (int *)plVar12[0x23]) {
LAB_0196a3e8:
      if ((*piVar19 != 2) || (piVar19[1] != iVar4 + 5)) goto LAB_0196a400;
      lVar21 = *plVar16;
      if (lVar21 != 0) {
        piVar3 = (int *)(lVar21 + 0x28);
        do {
          iVar4 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar4 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 == -1) goto LAB_0196b890;
      }
      plVar16 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar21;
      if (plVar16 == (long *)0x0) goto LAB_0196a478;
      plVar15 = plVar16 + 5;
      do {
        lVar21 = *plVar15;
        iVar4 = (int)lVar21 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *(int *)plVar15 = iVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar16 + 0x10))();
        goto LAB_0196a478;
      }
      if ((int)lVar21 != 0) goto LAB_0196a478;
      goto LAB_0196b7a0;
    }
LAB_0196a40c:
    FUN_00d11148(plVar12 + 0x22,&local_a0,&local_e0,plVar16,&local_80);
LAB_0196a478:
    do {
      lVar21 = *plVar17;
      iVar4 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      lVar21 = *plVar12;
LAB_0196aafc:
      (**(code **)(lVar21 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
LAB_0196a490:
  plVar12 = *(long **)(*(long *)(param_1 + 0x3f8) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_e0 = CONCAT44(local_e0._4_4_,iVar7);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_0196b3a4:
      if ((*piVar19 != 2) || (piVar19[1] != iVar7)) goto LAB_0196b3bc;
      if (local_d8 != (long *)0x0) {
        plVar12 = local_d8 + 5;
        do {
          lVar21 = *plVar12;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *(int *)plVar12 = (int)lVar21 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((int)lVar21 == -1) goto LAB_0196b890;
      }
      plVar12 = *(long **)(piVar19 + 2);
      *(long **)(piVar19 + 2) = local_d8;
      if (plVar12 != (long *)0x0) {
        plVar16 = plVar12 + 5;
        do {
          lVar21 = *plVar16;
          iVar4 = (int)lVar21 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *(int *)plVar16 = iVar4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 != 0) {
          if ((int)lVar21 != 0) goto LAB_0196a578;
          goto LAB_0196b7a0;
        }
        lVar21 = *plVar12;
        goto LAB_0196ab10;
      }
      goto LAB_0196a578;
    }
LAB_0196b3c8:
    FUN_00d11148(0x110,&local_a0,&local_e0,&local_d8,&local_80);
  }
  else {
    plVar16 = plVar12 + 5;
    do {
      lVar21 = *plVar16;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    local_a0 = (long *)CONCAT44(local_a0._4_4_,2);
    local_e0 = CONCAT44(local_e0._4_4_,iVar7);
    local_80 = (ulong)local_80._1_7_ << 8;
    piVar19 = (int *)plVar12[0x22];
    if (piVar19 != (int *)plVar12[0x23]) {
LAB_0196a4d4:
      if ((*piVar19 != 2) || (piVar19[1] != iVar7)) goto LAB_0196a4ec;
      if (local_d8 != (long *)0x0) {
        plVar17 = local_d8 + 5;
        do {
          lVar21 = *plVar17;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = (int)lVar21 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((int)lVar21 == -1) {
LAB_0196b890:
          pcVar18 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          goto LAB_0196b888;
        }
      }
      plVar17 = *(long **)(piVar19 + 2);
      *(long **)(piVar19 + 2) = local_d8;
      if (plVar17 != (long *)0x0) {
        plVar15 = plVar17 + 5;
        do {
          lVar21 = *plVar15;
          iVar4 = (int)lVar21 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *(int *)plVar15 = iVar4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar17 + 0x10))();
        }
        else if ((int)lVar21 == 0) {
LAB_0196b7a0:
          pcVar18 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          goto LAB_0196b860;
        }
      }
      goto LAB_0196a560;
    }
LAB_0196a4f8:
    FUN_00d11148(plVar12 + 0x22,&local_a0,&local_e0,&local_d8,&local_80);
LAB_0196a560:
    do {
      lVar21 = *plVar16;
      iVar4 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      lVar21 = *plVar12;
LAB_0196ab10:
      (**(code **)(lVar21 + 0x10))(plVar12);
    }
    else if ((int)lVar21 == 0) goto LAB_0196b840;
  }
LAB_0196a578:
  plVar12 = *(long **)(*(long *)(param_1 + 0x3f8) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_80 = (ulong)local_80._1_7_ << 8;
    FUN_00d8219c(0,0,lVar20,0xffffffff,&local_80);
  }
  else {
    plVar16 = plVar12 + 5;
    do {
      lVar21 = *plVar16;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = (int)lVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar21 == -1) goto LAB_0196b868;
    local_80 = (ulong)local_80._1_7_ << 8;
    FUN_00d8219c(plVar12,0,lVar20,0xffffffff,&local_80);
    do {
      lVar20 = *plVar16;
      iVar4 = (int)lVar20 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar20 == 0) goto LAB_0196b840;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x3f8) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_80 = (ulong)local_80._1_7_ << 8;
    FUN_00d829fc(0,lVar9,&local_80);
  }
  else {
    plVar16 = plVar12 + 5;
    do {
      lVar20 = *plVar16;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = (int)lVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar20 == -1) goto LAB_0196b868;
    local_80 = (ulong)local_80._1_7_ << 8;
    FUN_00d829fc(plVar12,lVar9,&local_80);
    do {
      lVar20 = *plVar16;
      iVar4 = (int)lVar20 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar20 == 0) goto LAB_0196b840;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x3f8) + 0x58);
  if (plVar12 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar16 = plVar12 + 5;
    do {
      lVar20 = *plVar16;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = (int)lVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar20 == -1) goto LAB_0196b868;
    FUN_00d819c8(0,plVar12,0);
    do {
      lVar20 = *plVar16;
      iVar4 = (int)lVar20 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar20 == 0) goto LAB_0196b840;
  }
  if (*(long *)(param_1 + 0x380) == 0) {
    uVar23 = *(undefined8 *)(param_1 + 0x388);
    local_a0 = (long *)0xea4bb56dde0cca0;
    puStack_98 = PTR_DAT_047e14e8;
    local_90 = 0x1f;
    local_88 = (long *)0x0;
    FUN_01464dd0(&local_80,&local_a0,0);
    FUN_013442d4(&local_e0,uVar23,&local_80);
    plVar12 = *(long **)(param_1 + 0x430);
    *(undefined8 *)(param_1 + 0x430) = 0;
    if (plVar12 != (long *)0x0) {
      plVar16 = plVar12 + 5;
      do {
        lVar20 = *plVar16;
        iVar4 = (int)lVar20 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *(int *)plVar16 = iVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
      else if ((int)lVar20 == 0) goto LAB_0196b840;
    }
    uVar23 = local_e0;
    local_e0 = 0;
    *(undefined8 *)(param_1 + 0x430) = uVar23;
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    *(undefined1 *)(*(long *)(param_1 + 0x430) + 0x28b) = 0;
    uVar23 = *(undefined8 *)(param_1 + 0x430);
    uVar10 = FUN_01464df0(0xd,*(undefined8 *)(param_1 + 0x380));
    FUN_01464e08(uVar23,uVar10);
    FUN_01271098(*(undefined8 *)(param_1 + 0x430),0x12);
    plVar12 = *(long **)(*(long *)(param_1 + 0x430) + 0x58);
    if (plVar12 == (long *)0x0) {
      FUN_00d819c8(0,0,0);
      FUN_0170bbb8(0);
    }
    else {
      plVar16 = plVar12 + 5;
      do {
        lVar20 = *plVar16;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *(int *)plVar16 = (int)lVar20 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar20 == -1) {
LAB_0196b868:
        pcVar18 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
        ;
LAB_0196b888:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",pcVar18,0x53,
                   "Reference counter overflows.");
      }
      FUN_00d819c8(0,plVar12,0);
      FUN_0170bbb8(plVar12);
      do {
        lVar20 = *plVar16;
        iVar4 = (int)lVar20 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *(int *)plVar16 = iVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
      else if ((int)lVar20 == 0) goto LAB_0196b840;
    }
  }
  if (local_d8 != (long *)0x0) {
    plVar12 = local_d8 + 5;
    do {
      lVar20 = *plVar12;
      iVar4 = (int)lVar20 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_d8 + 0x10))();
    }
    else if ((int)lVar20 == 0) goto LAB_0196b840;
  }
  if (plVar24 != (long *)0x0) {
    plVar12 = plVar24 + 5;
    do {
      lVar20 = *plVar12;
      iVar4 = (int)lVar20 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
    }
    else if ((int)lVar20 == 0) {
LAB_0196b840:
      pcVar18 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_0196b860:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 pcVar18,0x58,"Reference counter underflows.");
    }
  }
  return;
LAB_01968bd8:
  piVar19 = piVar19 + 8;
  if ((int *)plVar12[0x23] == piVar19) goto LAB_01968be4;
  goto LAB_01968bc0;
LAB_0196ae04:
  piVar19 = piVar19 + 8;
  if (_DAT_00000118 == piVar19) goto LAB_0196ae10;
  goto LAB_0196adec;
LAB_01968cd0:
  piVar19 = piVar19 + 8;
  if ((int *)plVar12[0x23] == piVar19) goto LAB_01968cdc;
  goto LAB_01968cb8;
LAB_0196ae94:
  piVar19 = piVar19 + 8;
  if (_DAT_00000118 == piVar19) goto LAB_0196aea0;
  goto LAB_0196ae7c;
LAB_01968f64:
  piVar19 = piVar19 + 8;
  if ((int *)plVar12[0x23] == piVar19) goto LAB_01968f70;
  goto LAB_01968f4c;
LAB_0196aefc:
  piVar19 = piVar19 + 8;
  if (_DAT_00000118 == piVar19) goto LAB_0196af08;
  goto LAB_0196aee4;
LAB_01969108:
  piVar19 = piVar19 + 8;
  if ((int *)plVar12[0x23] == piVar19) goto LAB_01969114;
  goto LAB_019690f0;
LAB_019691f8:
  piVar19 = piVar19 + 8;
  if ((int *)plVar12[0x23] == piVar19) goto LAB_01969204;
  goto LAB_019691e0;
LAB_0196b004:
  piVar19 = piVar19 + 8;
  if (_DAT_00000118 == piVar19) goto LAB_0196b010;
  goto LAB_0196afec;
LAB_019695b4:
  piVar19 = piVar19 + 8;
  if ((int *)plVar12[0x23] == piVar19) goto LAB_019695c0;
  goto LAB_0196959c;
LAB_0196b070:
  piVar19 = piVar19 + 8;
  if (_DAT_00000118 == piVar19) goto LAB_0196b07c;
  goto LAB_0196b058;
LAB_019696a0:
  piVar19 = piVar19 + 8;
  if ((int *)plVar12[0x23] == piVar19) goto LAB_019696ac;
  goto LAB_01969688;
LAB_01969798:
  piVar19 = piVar19 + 8;
  if ((int *)plVar12[0x23] == piVar19) goto LAB_019697a4;
  goto LAB_01969780;
LAB_0196b138:
  piVar19 = piVar19 + 8;
  if (_DAT_00000118 == piVar19) goto LAB_0196b144;
  goto LAB_0196b120;
LAB_01969ac0:
  piVar19 = piVar19 + 8;
  if ((int *)plVar12[0x23] == piVar19) goto LAB_01969acc;
  goto LAB_01969aa8;
LAB_0196b1a0:
  piVar19 = piVar19 + 8;
  if (_DAT_00000118 == piVar19) goto LAB_0196b1ac;
  goto LAB_0196b188;
LAB_01969ba8:
  piVar19 = piVar19 + 8;
  if ((int *)plVar12[0x23] == piVar19) goto LAB_01969bb4;
  goto LAB_01969b90;
LAB_01969c9c:
  piVar19 = piVar19 + 8;
  if ((int *)plVar12[0x23] == piVar19) goto LAB_01969ca8;
  goto LAB_01969c84;
LAB_0196b26c:
  piVar19 = piVar19 + 8;
  if (_DAT_00000118 == piVar19) goto LAB_0196b278;
  goto LAB_0196b254;
LAB_01969fc4:
  piVar19 = piVar19 + 8;
  if ((int *)plVar12[0x23] == piVar19) goto LAB_01969fd0;
  goto LAB_01969fac;
LAB_0196b2d4:
  piVar19 = piVar19 + 8;
  if (_DAT_00000118 == piVar19) goto LAB_0196b2e0;
  goto LAB_0196b2bc;
LAB_0196a0b0:
  piVar19 = piVar19 + 8;
  if ((int *)plVar12[0x23] == piVar19) goto LAB_0196a0bc;
  goto LAB_0196a098;
LAB_0196a1a4:
  piVar19 = piVar19 + 8;
  if ((int *)plVar12[0x23] == piVar19) goto LAB_0196a1b0;
  goto LAB_0196a18c;
LAB_0196b354:
  piVar19 = piVar19 + 8;
  if (_DAT_00000118 == piVar19) goto LAB_0196b360;
  goto LAB_0196b33c;
LAB_0196a400:
  piVar19 = piVar19 + 8;
  if ((int *)plVar12[0x23] == piVar19) goto LAB_0196a40c;
  goto LAB_0196a3e8;
LAB_0196b3bc:
  piVar19 = piVar19 + 8;
  if (_DAT_00000118 == piVar19) goto LAB_0196b3c8;
  goto LAB_0196b3a4;
LAB_0196a4ec:
  piVar19 = piVar19 + 8;
  if ((int *)plVar12[0x23] == piVar19) goto LAB_0196a4f8;
  goto LAB_0196a4d4;
}


