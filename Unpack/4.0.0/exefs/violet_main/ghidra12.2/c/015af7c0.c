/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015af7c0; name: FUN_015af7c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015af7c0(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long *plVar13;
  int extraout_var;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  char *pcVar18;
  int *piVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  undefined8 uVar24;
  long lVar25;
  long *plVar26;
  long *plVar27;
  bool bVar28;
  int iVar29;
  undefined8 local_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  long *local_e8;
  char *local_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  long *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  
  uVar12 = (**(code **)(*DAT_0485a020 + 0x80))(DAT_0485a020,0);
  uVar10 = (**(code **)(*DAT_0485a020 + 0x78))();
  uVar24 = *(undefined8 *)(param_1 + 0x388);
  local_88 = (long *)0x1b2c6594dd097990;
  pcStack_80 = PTR_s_GBuffer_047e1478;
  local_78 = 0x1f;
  local_70 = (long *)0x0;
  FUN_01464dd0(&local_e8,&local_88,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_108,uVar24,&local_e8);
  plVar13 = *(long **)(param_1 + 0x398);
  *(undefined8 *)(param_1 + 0x398) = 0;
  if (plVar13 != (long *)0x0) {
    plVar27 = plVar13 + 5;
    do {
      lVar22 = *plVar27;
      iVar23 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar28) {
        *(int *)plVar27 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))();
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  uVar24 = local_108;
  local_108 = 0;
  *(undefined8 *)(param_1 + 0x398) = uVar24;
  uVar21 = uVar12 >> 0x20;
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  *(undefined4 *)(*(long *)(param_1 + 0x398) + 0x1e0) = 1;
  uVar24 = *(undefined8 *)(param_1 + 0x398);
  uVar11 = FUN_01464df0(0xf,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar24,uVar11);
  FUN_01343f00(*(undefined8 *)(param_1 + 0x398),uVar21,uVar10);
  plVar13 = *(long **)(*(long *)(param_1 + 0x398) + 0x58);
  if (plVar13 != (long *)0x0) {
    plVar27 = plVar13 + 5;
    do {
      lVar22 = *plVar27;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar28) {
        *(int *)plVar27 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
  }
  local_88 = (long *)0x0;
  local_e8 = (long *)((ulong)local_e8 & 0xffffffffffffff00);
  FUN_00d8219c(plVar13,0,&local_88,0xffffffff,&local_e8);
  if (local_88 != (long *)0x0) {
    plVar27 = local_88 + 5;
    do {
      lVar22 = *plVar27;
      iVar23 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar28) {
        *(int *)plVar27 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  if (plVar13 != (long *)0x0) {
    plVar27 = plVar13 + 5;
    do {
      lVar22 = *plVar27;
      iVar23 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar28) {
        *(int *)plVar27 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x398) + 0x58);
  if (plVar13 != (long *)0x0) {
    plVar27 = plVar13 + 5;
    do {
      lVar22 = *plVar27;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar28) {
        *(int *)plVar27 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
  }
  lVar22 = param_1 + 0x460;
  local_e8 = (long *)((ulong)local_e8 & 0xffffffffffffff00);
  FUN_00d8219c(plVar13,1,lVar22,0xffffffff,&local_e8);
  if (plVar13 != (long *)0x0) {
    plVar27 = plVar13 + 5;
    do {
      lVar7 = *plVar27;
      iVar23 = (int)lVar7 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar28) {
        *(int *)plVar27 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar7 == 0) goto LAB_015b27f8;
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x398) + 0x58);
  if (plVar13 == (long *)0x0) {
    FUN_015b3280(0,1,1,1,1,1);
  }
  else {
    plVar27 = plVar13 + 5;
    do {
      lVar7 = *plVar27;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar28) {
        *(int *)plVar27 = (int)lVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar7 == -1) goto LAB_015b2820;
    FUN_015b3280(plVar13,1,1,1,1,1);
    do {
      lVar7 = *plVar27;
      iVar23 = (int)lVar7 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar28) {
        *(int *)plVar27 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar7 == 0) goto LAB_015b27f8;
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x398) + 0x58);
  if (plVar13 != (long *)0x0) {
    plVar27 = plVar13 + 5;
    do {
      lVar7 = *plVar27;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar28) {
        *(int *)plVar27 = (int)lVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar7 == -1) goto LAB_015b2820;
  }
  lVar7 = param_1 + 0x468;
  local_e8 = (long *)((ulong)local_e8 & 0xffffffffffffff00);
  FUN_00d8219c(plVar13,2,lVar7,0xffffffff,&local_e8);
  if (plVar13 != (long *)0x0) {
    plVar27 = plVar13 + 5;
    do {
      lVar8 = *plVar27;
      iVar23 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar28) {
        *(int *)plVar27 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar8 == 0) goto LAB_015b27f8;
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x398) + 0x58);
  if (plVar13 == (long *)0x0) {
    FUN_015b3280(0,2,1,1,1,1);
  }
  else {
    plVar27 = plVar13 + 5;
    do {
      lVar8 = *plVar27;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar28) {
        *(int *)plVar27 = (int)lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar8 == -1) goto LAB_015b2820;
    FUN_015b3280(plVar13,2,1,1,1,1);
    do {
      lVar8 = *plVar27;
      iVar23 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar28) {
        *(int *)plVar27 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar8 == 0) goto LAB_015b27f8;
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x398) + 0x58);
  if (plVar13 != (long *)0x0) {
    plVar27 = plVar13 + 5;
    do {
      lVar8 = *plVar27;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar28) {
        *(int *)plVar27 = (int)lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar8 == -1) goto LAB_015b2820;
  }
  plVar27 = (long *)(param_1 + 0x470);
  local_e8 = (long *)((ulong)local_e8 & 0xffffffffffffff00);
  FUN_00d8219c(plVar13,3,plVar27,0xffffffff,&local_e8);
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 5;
    do {
      lVar8 = *plVar1;
      iVar23 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar8 == 0) goto LAB_015b27f8;
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x398) + 0x58);
  if (plVar13 == (long *)0x0) {
    FUN_015b3280(0,3,1,1,1,1);
  }
  else {
    plVar1 = plVar13 + 5;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = (int)lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar8 == -1) goto LAB_015b2820;
    FUN_015b3280(plVar13,3,1,1,1,1);
    do {
      lVar8 = *plVar1;
      iVar23 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar8 == 0) goto LAB_015b27f8;
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x398) + 0x58);
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 5;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = (int)lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar8 == -1) goto LAB_015b2820;
  }
  lVar8 = param_1 + 0x478;
  local_e8 = (long *)((ulong)local_e8 & 0xffffffffffffff00);
  FUN_00d8219c(plVar13,4,lVar8,0xffffffff,&local_e8);
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 5;
    do {
      lVar25 = *plVar1;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x398) + 0x58);
  if (plVar13 == (long *)0x0) {
    FUN_015b3280(0,4,1,1,1,1);
  }
  else {
    plVar1 = plVar13 + 5;
    do {
      lVar25 = *plVar1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    FUN_015b3280(plVar13,4,1,1,1,1);
    do {
      lVar25 = *plVar1;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x398) + 0x58);
  if (plVar13 == (long *)0x0) {
    FUN_00d81b84(0,0,0,0x3f800000,0,1);
  }
  else {
    plVar1 = plVar13 + 5;
    do {
      lVar25 = *plVar1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    FUN_00d81b84(0,0,0,0x3f800000,plVar13,1);
    do {
      lVar25 = *plVar1;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x398) + 0x58);
  if (plVar13 == (long *)0x0) {
    FUN_00d81b84(0,0,0,0,0,2);
  }
  else {
    plVar1 = plVar13 + 5;
    do {
      lVar25 = *plVar1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    FUN_00d81b84(0,0,0,0,plVar13,2);
    do {
      lVar25 = *plVar1;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x398) + 0x58);
  if (plVar13 == (long *)0x0) {
    FUN_00d81b84(0x3f800000,0,0,0,0,3);
  }
  else {
    plVar1 = plVar13 + 5;
    do {
      lVar25 = *plVar1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    FUN_00d81b84(0x3f800000,0,0,0,plVar13,3);
    do {
      lVar25 = *plVar1;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x398) + 0x58);
  if (plVar13 == (long *)0x0) {
    FUN_00d81b84(0,0,0,0,0,4);
  }
  else {
    plVar1 = plVar13 + 5;
    do {
      lVar25 = *plVar1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    FUN_00d81b84(0,0,0,0,plVar13,4);
    do {
      lVar25 = *plVar1;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x398) + 0x58);
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 5;
    do {
      lVar25 = *plVar1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
  }
  plVar1 = (long *)(param_1 + 0x488);
  local_e8 = (long *)((ulong)local_e8 & 0xffffffffffffff00);
  FUN_00d829fc(plVar13,plVar1,&local_e8);
  if (plVar13 != (long *)0x0) {
    plVar16 = plVar13 + 5;
    do {
      lVar25 = *plVar16;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar28) {
        *(int *)plVar16 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x398) + 0x58);
  if (plVar13 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar16 = plVar13 + 5;
    do {
      lVar25 = *plVar16;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar28) {
        *(int *)plVar16 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    FUN_00d819c8(0,plVar13,0);
    do {
      lVar25 = *plVar16;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar28) {
        *(int *)plVar16 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x398) + 0x58);
  if (plVar13 == (long *)0x0) {
    FUN_00f190b8(0,0,1);
  }
  else {
    plVar16 = plVar13 + 5;
    do {
      lVar25 = *plVar16;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar28) {
        *(int *)plVar16 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    FUN_00f190b8(plVar13,0,1);
    do {
      lVar25 = *plVar16;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar28) {
        *(int *)plVar16 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  iVar23 = 0;
  do {
    if (0xc < iVar23 - 0x10U) {
      plVar13 = *(long **)(*(long *)(param_1 + 0x398) + 0x58);
      if (plVar13 != (long *)0x0) {
        plVar16 = plVar13 + 5;
        do {
          lVar25 = *plVar16;
          cVar4 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar28) {
            *(int *)plVar16 = (int)lVar25 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar25 == -1) goto LAB_015b2820;
      }
      local_e8 = (long *)0x0;
      FUN_00d101e0(plVar13,0x1f,iVar23,&local_e8);
      if (local_e8 != (long *)0x0) {
        plVar16 = local_e8 + 5;
        do {
          lVar25 = *plVar16;
          iVar29 = (int)lVar25 + -1;
          cVar4 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar28) {
            *(int *)plVar16 = iVar29;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar29 == 0) {
          (**(code **)(*local_e8 + 0x10))();
        }
        else if ((int)lVar25 == 0) goto LAB_015b27f8;
      }
      if (plVar13 != (long *)0x0) {
        plVar16 = plVar13 + 5;
        do {
          lVar25 = *plVar16;
          iVar29 = (int)lVar25 + -1;
          cVar4 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar28) {
            *(int *)plVar16 = iVar29;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar29 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
        else if ((int)lVar25 == 0) goto LAB_015b27f8;
      }
    }
    iVar23 = iVar23 + 1;
  } while (iVar23 != 0x20);
  lVar25 = *(long *)(DAT_0485a0d0 + 0x58);
  if (*(char *)(lVar25 + 0x218) == '\0') {
    local_98 = FUN_0166cf98(lVar25,2,5);
    *(undefined1 (*) [16])(lVar25 + 0x218) = local_98;
  }
  else {
    local_98 = *(undefined1 (*) [16])(lVar25 + 0x218);
  }
  (**(code **)(*DAT_0485a020 + 0x80))(DAT_0485a020,9);
  puVar14 = (undefined8 *)FUN_00f351bc();
  puVar14 = (undefined8 *)FUN_00e514cc(*puVar14);
  plVar13 = (long *)*puVar14;
  if (plVar13 != (long *)0x0) {
    plVar16 = plVar13 + 5;
    do {
      lVar25 = *plVar16;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar28) {
        *(int *)plVar16 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
  }
  if (*(long *)(param_1 + 0x380) == 0) {
    local_c8 = 1;
    uStack_c0 = 2;
    local_b8 = 0x200000035;
    uStack_b0 = 0x400000003;
    local_e8 = (long *)0x780;
    local_e0 = (char *)0x438;
    local_a8 = 5;
    uStack_a0 = 0x200000008;
    local_d8 = 0;
    local_d0 = (long *)0x0;
    local_88 = (long *)*param_2;
    lVar15 = FUN_00cf3764(&local_108,local_88[1],&local_88);
    lVar25 = 0;
    if (lVar15 != 0) {
      piVar19 = (int *)(lVar15 + 0x28);
      do {
        iVar23 = *piVar19;
        cVar4 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(piVar19,0x10);
        if (bVar28) {
          *piVar19 = iVar23 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar23 == -1) goto LAB_015b2820;
      lVar25 = lVar15;
    }
    FUN_0117e220(lVar25,&local_e8,1,1,0);
    plVar16 = *(long **)(param_1 + 0x498);
    *(undefined8 *)(param_1 + 0x498) = 0;
    if (plVar16 != (long *)0x0) {
      plVar26 = plVar16 + 5;
      do {
        lVar25 = *plVar26;
        iVar23 = (int)lVar25 + -1;
        cVar4 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar28) {
          *(int *)plVar26 = iVar23;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar23 == 0) {
        (**(code **)(*plVar16 + 0x10))();
      }
      else if ((int)lVar25 == 0) goto LAB_015b27f8;
    }
    *(long *)(param_1 + 0x498) = lVar15;
    local_88 = (long *)0xd6057fb211a9d909;
    pcStack_80 = "RT_GBufferOpaqueDepth";
    local_78 = 0x15;
    local_70 = (long *)0x0;
    FUN_01344120(plVar13,&local_88);
    plVar16 = local_70;
  }
  else {
    local_e8 = (long *)0xd6057fb211a9d909;
    local_e0 = "RT_GBufferOpaqueDepth";
    local_d8 = 0x15;
    local_d0 = (long *)0x0;
    FUN_00fff044(&local_88,plVar13,&local_e8);
    plVar16 = *(long **)(param_1 + 0x498);
    *(undefined8 *)(param_1 + 0x498) = 0;
    if (plVar16 != (long *)0x0) {
      plVar26 = plVar16 + 5;
      do {
        lVar25 = *plVar26;
        iVar23 = (int)lVar25 + -1;
        cVar4 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar28) {
          *(int *)plVar26 = iVar23;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar23 == 0) {
        (**(code **)(*plVar16 + 0x10))();
      }
      else if ((int)lVar25 == 0) goto LAB_015b27f8;
    }
    plVar16 = local_88;
    local_88 = (long *)0x0;
    *(long **)(param_1 + 0x498) = plVar16;
    plVar16 = local_d0;
  }
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x20))();
  }
  uVar24 = *(undefined8 *)(param_1 + 0x388);
  local_88 = (long *)0x2adf510f3dbf4b10;
  pcStack_80 = PTR_s_GBuffer_Transparent_047e1480;
  local_78 = 0x1f;
  local_70 = (long *)0x0;
  FUN_01464dd0(&local_e8,&local_88,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_108,uVar24,&local_e8);
  plVar16 = *(long **)(param_1 + 0x3a0);
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  if (plVar16 != (long *)0x0) {
    plVar26 = plVar16 + 5;
    do {
      lVar25 = *plVar26;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  uVar24 = local_108;
  local_108 = 0;
  *(undefined8 *)(param_1 + 0x3a0) = uVar24;
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  *(undefined4 *)(*(long *)(param_1 + 0x3a0) + 0x1e0) = 2;
  uVar24 = *(undefined8 *)(param_1 + 0x3a0);
  uVar11 = FUN_01464df0(0x10,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar24,uVar11);
  FUN_01343f00(*(undefined8 *)(param_1 + 0x3a0),uVar21,uVar10);
  plVar16 = *(long **)(*(long *)(param_1 + 0x3a0) + 0x58);
  if (plVar16 != (long *)0x0) {
    plVar26 = plVar16 + 5;
    do {
      lVar25 = *plVar26;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
  }
  local_88 = (long *)0x0;
  local_e8 = (long *)((ulong)local_e8 & 0xffffffffffffff00);
  FUN_00d8219c(plVar16,0,&local_88,0xffffffff,&local_e8);
  if (local_88 != (long *)0x0) {
    plVar26 = local_88 + 5;
    do {
      lVar25 = *plVar26;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  if (plVar16 != (long *)0x0) {
    plVar26 = plVar16 + 5;
    do {
      lVar25 = *plVar26;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  plVar16 = *(long **)(*(long *)(param_1 + 0x3a0) + 0x58);
  if (plVar16 == (long *)0x0) {
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d8219c(0,1,lVar22,0xffffffff,&local_e8);
  }
  else {
    plVar26 = plVar16 + 5;
    do {
      lVar25 = *plVar26;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d8219c(plVar16,1,lVar22,0xffffffff,&local_e8);
    do {
      lVar25 = *plVar26;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  plVar16 = *(long **)(*(long *)(param_1 + 0x3a0) + 0x58);
  if (plVar16 == (long *)0x0) {
    FUN_015b3280(0,1,1,1,1,1);
  }
  else {
    plVar26 = plVar16 + 5;
    do {
      lVar25 = *plVar26;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    FUN_015b3280(plVar16,1,1,1,1,1);
    do {
      lVar25 = *plVar26;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  plVar16 = *(long **)(*(long *)(param_1 + 0x3a0) + 0x58);
  if (plVar16 == (long *)0x0) {
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d8219c(0,2,lVar7,0xffffffff,&local_e8);
  }
  else {
    plVar26 = plVar16 + 5;
    do {
      lVar25 = *plVar26;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d8219c(plVar16,2,lVar7,0xffffffff,&local_e8);
    do {
      lVar25 = *plVar26;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  plVar16 = *(long **)(*(long *)(param_1 + 0x3a0) + 0x58);
  if (plVar16 == (long *)0x0) {
    FUN_015b3280(0,2,1,1,1,1);
  }
  else {
    plVar26 = plVar16 + 5;
    do {
      lVar25 = *plVar26;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    FUN_015b3280(plVar16,2,1,1,1,1);
    do {
      lVar25 = *plVar26;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  plVar16 = *(long **)(*(long *)(param_1 + 0x3a0) + 0x58);
  if (plVar16 == (long *)0x0) {
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d8219c(0,3,plVar27,0xffffffff,&local_e8);
  }
  else {
    plVar26 = plVar16 + 5;
    do {
      lVar25 = *plVar26;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d8219c(plVar16,3,plVar27,0xffffffff,&local_e8);
    do {
      lVar25 = *plVar26;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  plVar16 = *(long **)(*(long *)(param_1 + 0x3a0) + 0x58);
  if (plVar16 == (long *)0x0) {
    FUN_015b3280(0,3,1,1,1,1);
  }
  else {
    plVar26 = plVar16 + 5;
    do {
      lVar25 = *plVar26;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    FUN_015b3280(plVar16,3,1,1,1,1);
    do {
      lVar25 = *plVar26;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  plVar16 = *(long **)(*(long *)(param_1 + 0x3a0) + 0x58);
  if (plVar16 == (long *)0x0) {
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d8219c(0,4,lVar8,0xffffffff,&local_e8);
  }
  else {
    plVar26 = plVar16 + 5;
    do {
      lVar25 = *plVar26;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d8219c(plVar16,4,lVar8,0xffffffff,&local_e8);
    do {
      lVar25 = *plVar26;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  plVar16 = *(long **)(*(long *)(param_1 + 0x3a0) + 0x58);
  if (plVar16 == (long *)0x0) {
    FUN_015b3280(0,4,1,1,1,1);
  }
  else {
    plVar26 = plVar16 + 5;
    do {
      lVar25 = *plVar26;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    FUN_015b3280(plVar16,4,1,1,1,1);
    do {
      lVar25 = *plVar26;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  plVar16 = *(long **)(*(long *)(param_1 + 0x3a0) + 0x58);
  if (plVar16 == (long *)0x0) {
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d829fc(0,plVar1,&local_e8);
  }
  else {
    plVar26 = plVar16 + 5;
    do {
      lVar25 = *plVar26;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d829fc(plVar16,plVar1,&local_e8);
    do {
      lVar25 = *plVar26;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  plVar16 = *(long **)(*(long *)(param_1 + 0x3a0) + 0x58);
  if (plVar16 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar26 = plVar16 + 5;
    do {
      lVar25 = *plVar26;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    FUN_00d819c8(0,plVar16,0);
    do {
      lVar25 = *plVar26;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  plVar16 = *(long **)(*(long *)(param_1 + 0x3a0) + 0x58);
  if (plVar16 == (long *)0x0) {
    FUN_00f190b8(0,0,1);
  }
  else {
    plVar26 = plVar16 + 5;
    do {
      lVar25 = *plVar26;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    FUN_00f190b8(plVar16,0,1);
    do {
      lVar25 = *plVar26;
      iVar23 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  plVar16 = *(long **)(*(long *)(param_1 + 0x3a0) + 0x58);
  iVar23 = (int)(uVar12 >> 0x20);
  if (plVar16 == (long *)0x0) {
    local_88 = (long *)CONCAT44(local_88._4_4_,2);
    local_108 = CONCAT44(local_108._4_4_,iVar23 + 1);
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    piVar19 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_015b2294:
      if ((*piVar19 != 2) || (piVar19[1] != iVar23 + 1)) goto LAB_015b22ac;
      lVar25 = *(long *)(param_1 + 0x498);
      if (lVar25 != 0) {
        piVar3 = (int *)(lVar25 + 0x28);
        do {
          iVar29 = *piVar3;
          cVar4 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar28) {
            *piVar3 = iVar29 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar29 == -1) goto LAB_015b2848;
      }
      plVar16 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar25;
      if (plVar16 == (long *)0x0) goto LAB_015b0794;
      plVar26 = plVar16 + 5;
      do {
        lVar25 = *plVar26;
        iVar29 = (int)lVar25 + -1;
        cVar4 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar28) {
          *(int *)plVar26 = iVar29;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar29 == 0) {
        lVar25 = *plVar16;
        goto LAB_015b1be4;
      }
      if ((int)lVar25 != 0) goto LAB_015b0794;
      goto LAB_015b27b4;
    }
LAB_015b22b8:
    FUN_00d11148(0x110,&local_88,&local_108,(long *)(param_1 + 0x498),&local_e8);
  }
  else {
    plVar26 = plVar16 + 5;
    do {
      lVar25 = *plVar26;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    local_88 = (long *)CONCAT44(local_88._4_4_,2);
    local_108 = CONCAT44(local_108._4_4_,iVar23 + 1);
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    piVar19 = (int *)plVar16[0x22];
    if (piVar19 != (int *)plVar16[0x23]) {
LAB_015b06f4:
      if ((*piVar19 != 2) || (piVar19[1] != iVar23 + 1)) goto LAB_015b070c;
      lVar25 = *(long *)(param_1 + 0x498);
      if (lVar25 != 0) {
        piVar3 = (int *)(lVar25 + 0x28);
        do {
          iVar29 = *piVar3;
          cVar4 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar28) {
            *piVar3 = iVar29 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar29 == -1) goto LAB_015b2848;
      }
      plVar17 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar25;
      if (plVar17 == (long *)0x0) goto LAB_015b077c;
      plVar2 = plVar17 + 5;
      do {
        lVar25 = *plVar2;
        iVar29 = (int)lVar25 + -1;
        cVar4 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar28) {
          *(int *)plVar2 = iVar29;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar29 == 0) {
        (**(code **)(*plVar17 + 0x10))();
        goto LAB_015b077c;
      }
      if ((int)lVar25 != 0) goto LAB_015b077c;
      goto LAB_015b27b4;
    }
LAB_015b0718:
    FUN_00d11148(plVar16 + 0x22,&local_88,&local_108,(long *)(param_1 + 0x498),&local_e8);
LAB_015b077c:
    do {
      lVar25 = *plVar26;
      iVar29 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      lVar25 = *plVar16;
LAB_015b1be4:
      (**(code **)(lVar25 + 0x10))(plVar16);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
LAB_015b0794:
  local_100 = 0x600000001;
  uStack_f8 = 0x100000002;
  local_f0 = 1;
  local_108 = 0x500000000;
  local_118 = FUN_015b2874(*param_2,&local_108);
  plVar16 = *(long **)(*(long *)(param_1 + 0x3a0) + 0x58);
  if (plVar16 == (long *)0x0) {
    FUN_00ebe848(0,0,local_118);
  }
  else {
    plVar26 = plVar16 + 5;
    do {
      lVar25 = *plVar26;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    FUN_00ebe848(plVar16,0,local_118);
    do {
      lVar25 = *plVar26;
      iVar29 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  local_e8 = (long *)0x2adf510f3dbf4b10;
  local_e0 = PTR_s_GBuffer_Transparent_047e1480;
  local_d8 = 0x1f;
  local_88 = (long *)0x9473644042941b49;
  pcStack_80 = "[Copy GBuffer Opaque Depth]";
  local_78 = 0x1b;
  local_70 = (long *)0x0;
  local_d0 = (long *)0x0;
  FUN_00dfeda8(&local_120,DAT_0485a0d0,&local_e8,&local_88,0);
  plVar16 = *(long **)(param_1 + 0x500);
  *(undefined8 *)(param_1 + 0x500) = 0;
  if (plVar16 != (long *)0x0) {
    plVar26 = plVar16 + 5;
    do {
      lVar25 = *plVar26;
      iVar29 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  uVar24 = local_120;
  local_120 = 0;
  *(undefined8 *)(param_1 + 0x500) = uVar24;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  *(undefined4 *)(*(long *)(param_1 + 0x500) + 0xf0) = 0x80000000;
  lVar25 = DAT_0485a0f0;
  lVar15 = *(long *)(param_1 + 0x500);
  if (*(long *)(DAT_0485a0f0 + 0x38) != *(long *)(DAT_0485a0f0 + 0x30)) {
    *(ulong *)(lVar15 + 0xd0) = *(ulong *)(lVar15 + 0xd0) & 0xfffffffe;
    lVar15 = *(long *)(param_1 + 0x500);
    if (1 < (ulong)((*(long *)(lVar25 + 0x38) - *(long *)(lVar25 + 0x30) >> 4) * -0x5555555555555555
                   )) {
      *(ulong *)(lVar15 + 0xd0) = *(ulong *)(lVar15 + 0xd0) & 0xfffffffd;
      lVar15 = *(long *)(param_1 + 0x500);
      if (2 < (ulong)((*(long *)(lVar25 + 0x38) - *(long *)(lVar25 + 0x30) >> 4) *
                     -0x5555555555555555)) {
        *(ulong *)(lVar15 + 0xd0) = *(ulong *)(lVar15 + 0xd0) & 0xfffffffb;
        lVar15 = *(long *)(param_1 + 0x500);
        if (3 < (ulong)((*(long *)(lVar25 + 0x38) - *(long *)(lVar25 + 0x30) >> 4) *
                       -0x5555555555555555)) {
          uVar12 = 3;
          do {
            uVar20 = (uint)uVar12;
            uVar12 = uVar12 + 1;
            *(ulong *)(lVar15 + 0xd0) =
                 *(ulong *)(lVar15 + 0xd0) & (ulong)(uint)~(1 << (ulong)(uVar20 & 0x1f));
            lVar15 = *(long *)(param_1 + 0x500);
          } while (uVar12 < (ulong)((*(long *)(lVar25 + 0x38) - *(long *)(lVar25 + 0x30) >> 4) *
                                   -0x5555555555555555));
        }
      }
    }
  }
  *(ulong *)(lVar15 + 0xd0) =
       (ulong)(*(uint *)(lVar15 + 0xd0) | 1 << (ulong)(*(uint *)(param_1 + 0x380) & 0x1f));
  uVar24 = *(undefined8 *)(param_1 + 0x388);
  local_88 = (long *)0x1266b42c0f12f95f;
  pcStack_80 = PTR_s_GBuffer_Terrain_047e1488;
  local_78 = 0x1f;
  local_70 = (long *)0x0;
  FUN_01464dd0(&local_e8,&local_88,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_120,uVar24,&local_e8);
  plVar16 = *(long **)(param_1 + 0x3a8);
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  if (plVar16 != (long *)0x0) {
    plVar26 = plVar16 + 5;
    do {
      lVar25 = *plVar26;
      iVar29 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  uVar24 = local_120;
  local_120 = 0;
  *(undefined8 *)(param_1 + 0x3a8) = uVar24;
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  bVar28 = true;
  *(undefined4 *)(*(long *)(param_1 + 0x3a8) + 0x1e0) = 1;
  uVar24 = *(undefined8 *)(param_1 + 0x3a8);
  uVar11 = FUN_01464df0(0x11,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar24,uVar11);
  FUN_01343f00(*(undefined8 *)(param_1 + 0x3a8),uVar21,uVar10);
  plVar16 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x58);
  if (plVar16 == (long *)0x0) {
    plVar26 = (long *)0x0;
  }
  else {
    plVar26 = plVar16 + 5;
    do {
      lVar25 = *plVar26;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    plVar26 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x58);
    if (plVar26 == (long *)0x0) {
      bVar28 = true;
    }
    else {
      plVar17 = plVar26 + 5;
      do {
        lVar25 = *plVar17;
        cVar4 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar28) {
          *(int *)plVar17 = (int)lVar25 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar25 == -1) goto LAB_015b2820;
      bVar28 = false;
    }
  }
  local_88 = (long *)0x0;
  local_e8 = (long *)((ulong)local_e8 & 0xffffffffffffff00);
  FUN_00d8219c(plVar26,0,&local_88,0xffffffff,&local_e8);
  if (local_88 != (long *)0x0) {
    plVar17 = local_88 + 5;
    do {
      lVar25 = *plVar17;
      iVar29 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *(int *)plVar17 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  if (!bVar28) {
    plVar17 = plVar26 + 5;
    do {
      lVar25 = *plVar17;
      iVar29 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
    else if ((int)lVar25 == 0) goto LAB_015b27f8;
  }
  plVar26 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x58);
  if (plVar26 == (long *)0x0) {
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d8219c(0,1,lVar22,0xffffffff,&local_e8);
  }
  else {
    plVar17 = plVar26 + 5;
    do {
      lVar25 = *plVar17;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = (int)lVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar25 == -1) goto LAB_015b2820;
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d8219c(plVar26,1,lVar22,0xffffffff,&local_e8);
    do {
      lVar22 = *plVar17;
      iVar29 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  plVar26 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x58);
  if (plVar26 == (long *)0x0) {
    FUN_015b3280(0,1,1,1,1,1);
  }
  else {
    plVar17 = plVar26 + 5;
    do {
      lVar22 = *plVar17;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
    FUN_015b3280(plVar26,1,1,1,1,1);
    do {
      lVar22 = *plVar17;
      iVar29 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  plVar26 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x58);
  if (plVar26 == (long *)0x0) {
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d8219c(0,2,lVar7,0xffffffff,&local_e8);
  }
  else {
    plVar17 = plVar26 + 5;
    do {
      lVar22 = *plVar17;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d8219c(plVar26,2,lVar7,0xffffffff,&local_e8);
    do {
      lVar22 = *plVar17;
      iVar29 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  plVar26 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x58);
  if (plVar26 == (long *)0x0) {
    FUN_015b3280(0,2,1,1,1,1);
  }
  else {
    plVar17 = plVar26 + 5;
    do {
      lVar22 = *plVar17;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
    FUN_015b3280(plVar26,2,1,1,1,1);
    do {
      lVar22 = *plVar17;
      iVar29 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  plVar26 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x58);
  if (plVar26 == (long *)0x0) {
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d8219c(0,3,plVar27,0xffffffff,&local_e8);
  }
  else {
    plVar17 = plVar26 + 5;
    do {
      lVar22 = *plVar17;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d8219c(plVar26,3,plVar27,0xffffffff,&local_e8);
    do {
      lVar22 = *plVar17;
      iVar29 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  plVar26 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x58);
  if (plVar26 == (long *)0x0) {
    FUN_015b3280(0,3,1,1,1,1);
  }
  else {
    plVar17 = plVar26 + 5;
    do {
      lVar22 = *plVar17;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
    FUN_015b3280(plVar26,3,1,1,1,1);
    do {
      lVar22 = *plVar17;
      iVar29 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  plVar26 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x58);
  if (plVar26 == (long *)0x0) {
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d8219c(0,4,lVar8,0xffffffff,&local_e8);
  }
  else {
    plVar17 = plVar26 + 5;
    do {
      lVar22 = *plVar17;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d8219c(plVar26,4,lVar8,0xffffffff,&local_e8);
    do {
      lVar22 = *plVar17;
      iVar29 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  plVar26 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x58);
  if (plVar26 == (long *)0x0) {
    FUN_015b3280(0,4,1,1,1,1);
  }
  else {
    plVar17 = plVar26 + 5;
    do {
      lVar22 = *plVar17;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
    FUN_015b3280(plVar26,4,1,1,1,1);
    do {
      lVar22 = *plVar17;
      iVar29 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  plVar26 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x58);
  if (plVar26 == (long *)0x0) {
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d829fc(0,plVar1,&local_e8);
  }
  else {
    plVar17 = plVar26 + 5;
    do {
      lVar22 = *plVar17;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d829fc(plVar26,plVar1,&local_e8);
    do {
      lVar22 = *plVar17;
      iVar29 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  plVar26 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x58);
  if (plVar26 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar17 = plVar26 + 5;
    do {
      lVar22 = *plVar17;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
    FUN_00d819c8(0,plVar26,0);
    do {
      lVar22 = *plVar17;
      iVar29 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  plVar26 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x58);
  if (plVar26 == (long *)0x0) {
    FUN_00eb4900(0,0);
  }
  else {
    plVar17 = plVar26 + 5;
    do {
      lVar22 = *plVar17;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
    FUN_00eb4900(plVar26,0);
    do {
      lVar22 = *plVar17;
      iVar29 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  plVar26 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x58);
  if (plVar26 == (long *)0x0) {
    FUN_00eb3bec(0,1);
  }
  else {
    plVar17 = plVar26 + 5;
    do {
      lVar22 = *plVar17;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
    FUN_00eb3bec(plVar26,1);
    do {
      lVar22 = *plVar17;
      iVar29 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  plVar26 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x58);
  if (plVar26 == (long *)0x0) {
    FUN_00f190b8(0,0,1);
  }
  else {
    plVar17 = plVar26 + 5;
    do {
      lVar22 = *plVar17;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
    FUN_00f190b8(plVar26,0,1);
    do {
      lVar22 = *plVar17;
      iVar29 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  iVar29 = 0;
  do {
    if (0xc < iVar29 - 0x10U) {
      plVar26 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x58);
      if (plVar26 != (long *)0x0) {
        plVar17 = plVar26 + 5;
        do {
          lVar22 = *plVar17;
          cVar4 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar28) {
            *(int *)plVar17 = (int)lVar22 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar22 == -1) goto LAB_015b2820;
      }
      local_e8 = (long *)0x0;
      FUN_00d101e0(plVar26,0x1f,iVar29,&local_e8);
      if (local_e8 != (long *)0x0) {
        plVar17 = local_e8 + 5;
        do {
          lVar22 = *plVar17;
          iVar6 = (int)lVar22 + -1;
          cVar4 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar28) {
            *(int *)plVar17 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*local_e8 + 0x10))();
        }
        else if ((int)lVar22 == 0) goto LAB_015b27f8;
      }
      if (plVar26 != (long *)0x0) {
        plVar17 = plVar26 + 5;
        do {
          lVar22 = *plVar17;
          iVar6 = (int)lVar22 + -1;
          cVar4 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar28) {
            *(int *)plVar17 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
        }
        else if ((int)lVar22 == 0) goto LAB_015b27f8;
      }
    }
    iVar29 = iVar29 + 1;
  } while (iVar29 != 0x20);
  FUN_01271098(*(undefined8 *)(param_1 + 0x3a8),0x12);
  puVar9 = PTR_s_WeatherEffect_047e1490;
  uVar24 = *(undefined8 *)(param_1 + 0x388);
  local_88 = (long *)0x44e183283098fe36;
  pcStack_80 = PTR_s_WeatherEffect_047e1490;
  local_78 = 0x1f;
  local_70 = (long *)0x0;
  FUN_01464dd0(&local_e8,&local_88,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_120,uVar24,&local_e8);
  plVar26 = *(long **)(param_1 + 0x440);
  *(undefined8 *)(param_1 + 0x440) = 0;
  if (plVar26 != (long *)0x0) {
    plVar17 = plVar26 + 5;
    do {
      lVar22 = *plVar17;
      iVar29 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar26 + 0x10))();
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  uVar24 = local_120;
  local_120 = 0;
  *(undefined8 *)(param_1 + 0x440) = uVar24;
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  uVar24 = *(undefined8 *)(param_1 + 0x440);
  uVar11 = FUN_01464df0(0x12,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar24,uVar11);
  FUN_01343f00(*(undefined8 *)(param_1 + 0x440),iVar23,uVar10);
  plVar26 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar26 != (long *)0x0) {
    plVar17 = plVar26 + 5;
    do {
      lVar22 = *plVar17;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
  }
  local_88 = (long *)CONCAT44(local_88._4_4_,2);
  local_120 = CONCAT44(local_120._4_4_,iVar23 + 3);
  local_e8 = (long *)((ulong)local_e8 & 0xffffffffffffff00);
  piVar19 = (int *)plVar26[0x22];
  if (piVar19 != (int *)plVar26[0x23]) {
LAB_015b1128:
    if ((*piVar19 != 2) || (piVar19[1] != iVar23 + 3)) goto LAB_015b1140;
    lVar22 = *plVar27;
    if (lVar22 != 0) {
      piVar3 = (int *)(lVar22 + 0x28);
      do {
        iVar29 = *piVar3;
        cVar4 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar28) {
          *piVar3 = iVar29 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar29 == -1) goto LAB_015b2848;
    }
    plVar27 = *(long **)(piVar19 + 2);
    *(long *)(piVar19 + 2) = lVar22;
    if (plVar27 == (long *)0x0) goto LAB_015b11b8;
    plVar17 = plVar27 + 5;
    do {
      lVar22 = *plVar17;
      iVar29 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar28) {
        *(int *)plVar17 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar27 + 0x10))();
      goto LAB_015b11b8;
    }
    if ((int)lVar22 != 0) goto LAB_015b11b8;
    goto LAB_015b27b4;
  }
LAB_015b114c:
  FUN_00d11148(plVar26 + 0x22,&local_88,&local_120,plVar27,&local_e8);
LAB_015b11b8:
  if (plVar26 != (long *)0x0) {
    plVar27 = plVar26 + 5;
    do {
      lVar22 = *plVar27;
      iVar29 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar28) {
        *(int *)plVar27 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  plVar27 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar27 == (long *)0x0) {
    local_88 = (long *)CONCAT44(local_88._4_4_,2);
    local_120 = CONCAT44(local_120._4_4_,iVar23 + 5);
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    piVar19 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_015b2478:
      if ((*piVar19 != 2) || (piVar19[1] != iVar23 + 5)) goto LAB_015b2490;
      lVar22 = *plVar1;
      if (lVar22 != 0) {
        piVar3 = (int *)(lVar22 + 0x28);
        do {
          iVar29 = *piVar3;
          cVar4 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar28) {
            *piVar3 = iVar29 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar29 == -1) goto LAB_015b2848;
      }
      plVar27 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar22;
      if (plVar27 == (long *)0x0) goto LAB_015b12c4;
      plVar26 = plVar27 + 5;
      do {
        lVar22 = *plVar26;
        iVar29 = (int)lVar22 + -1;
        cVar4 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar28) {
          *(int *)plVar26 = iVar29;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar29 == 0) {
        lVar22 = *plVar27;
        goto LAB_015b1d10;
      }
      if ((int)lVar22 != 0) goto LAB_015b12c4;
      goto LAB_015b27b4;
    }
LAB_015b249c:
    FUN_00d11148(0x110,&local_88,&local_120,plVar1,&local_e8);
  }
  else {
    plVar26 = plVar27 + 5;
    do {
      lVar22 = *plVar26;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
    local_88 = (long *)CONCAT44(local_88._4_4_,2);
    local_120 = CONCAT44(local_120._4_4_,iVar23 + 5);
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    piVar19 = (int *)plVar27[0x22];
    if (piVar19 != (int *)plVar27[0x23]) {
LAB_015b1220:
      if ((*piVar19 != 2) || (piVar19[1] != iVar23 + 5)) goto LAB_015b1238;
      lVar22 = *plVar1;
      if (lVar22 != 0) {
        piVar3 = (int *)(lVar22 + 0x28);
        do {
          iVar29 = *piVar3;
          cVar4 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar28) {
            *piVar3 = iVar29 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar29 == -1) goto LAB_015b2848;
      }
      plVar17 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar22;
      if (plVar17 == (long *)0x0) goto LAB_015b12ac;
      plVar2 = plVar17 + 5;
      do {
        lVar22 = *plVar2;
        iVar29 = (int)lVar22 + -1;
        cVar4 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar28) {
          *(int *)plVar2 = iVar29;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar29 == 0) {
        (**(code **)(*plVar17 + 0x10))();
        goto LAB_015b12ac;
      }
      if ((int)lVar22 != 0) goto LAB_015b12ac;
      goto LAB_015b27b4;
    }
LAB_015b1244:
    FUN_00d11148(plVar27 + 0x22,&local_88,&local_120,plVar1,&local_e8);
LAB_015b12ac:
    do {
      lVar22 = *plVar26;
      iVar29 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      lVar22 = *plVar27;
LAB_015b1d10:
      (**(code **)(lVar22 + 0x10))(plVar27);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
LAB_015b12c4:
  plVar27 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar27 == (long *)0x0) {
    local_88 = (long *)CONCAT44(local_88._4_4_,2);
    local_120 = CONCAT44(local_120._4_4_,extraout_var);
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    piVar19 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_015b24e4:
      if ((*piVar19 != 2) || (piVar19[1] != extraout_var)) goto LAB_015b24fc;
      lVar22 = *(long *)(param_1 + 0x4e8);
      if (lVar22 != 0) {
        piVar3 = (int *)(lVar22 + 0x28);
        do {
          iVar29 = *piVar3;
          cVar4 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar28) {
            *piVar3 = iVar29 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar29 == -1) goto LAB_015b2848;
      }
      plVar27 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar22;
      if (plVar27 == (long *)0x0) goto LAB_015b13ac;
      plVar26 = plVar27 + 5;
      do {
        lVar22 = *plVar26;
        iVar29 = (int)lVar22 + -1;
        cVar4 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar28) {
          *(int *)plVar26 = iVar29;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar29 == 0) {
        lVar22 = *plVar27;
        goto LAB_015b1d24;
      }
      if ((int)lVar22 != 0) goto LAB_015b13ac;
      goto LAB_015b27b4;
    }
LAB_015b2508:
    FUN_00d11148(0x110,&local_88,&local_120,(long *)(param_1 + 0x4e8),&local_e8);
  }
  else {
    plVar26 = plVar27 + 5;
    do {
      lVar22 = *plVar26;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
    local_88 = (long *)CONCAT44(local_88._4_4_,2);
    local_120 = CONCAT44(local_120._4_4_,extraout_var);
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    piVar19 = (int *)plVar27[0x22];
    if (piVar19 != (int *)plVar27[0x23]) {
LAB_015b130c:
      if ((*piVar19 != 2) || (piVar19[1] != extraout_var)) goto LAB_015b1324;
      lVar22 = *(long *)(param_1 + 0x4e8);
      if (lVar22 != 0) {
        piVar3 = (int *)(lVar22 + 0x28);
        do {
          iVar29 = *piVar3;
          cVar4 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar28) {
            *piVar3 = iVar29 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar29 == -1) goto LAB_015b2848;
      }
      plVar17 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar22;
      if (plVar17 == (long *)0x0) goto LAB_015b1394;
      plVar2 = plVar17 + 5;
      do {
        lVar22 = *plVar2;
        iVar29 = (int)lVar22 + -1;
        cVar4 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar28) {
          *(int *)plVar2 = iVar29;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar29 == 0) {
        (**(code **)(*plVar17 + 0x10))();
        goto LAB_015b1394;
      }
      if ((int)lVar22 != 0) goto LAB_015b1394;
      goto LAB_015b27b4;
    }
LAB_015b1330:
    FUN_00d11148(plVar27 + 0x22,&local_88,&local_120,(long *)(param_1 + 0x4e8),&local_e8);
LAB_015b1394:
    do {
      lVar22 = *plVar26;
      iVar29 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      lVar22 = *plVar27;
LAB_015b1d24:
      (**(code **)(lVar22 + 0x10))(plVar27);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
LAB_015b13ac:
  plVar27 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar27 == (long *)0x0) {
    local_e8 = (long *)CONCAT44(local_e8._4_4_,2);
    local_88 = (long *)CONCAT44(local_88._4_4_,extraout_var);
    for (piVar19 = _DAT_00000110; piVar19 != _DAT_00000118; piVar19 = piVar19 + 8) {
      if ((*piVar19 == 2) && (piVar19[1] == extraout_var)) {
        *(undefined1 (*) [16])(piVar19 + 4) = local_98;
        goto LAB_015b1448;
      }
    }
    FUN_00ed5784(0x110,&local_e8,&local_88,local_98);
  }
  else {
    plVar26 = plVar27 + 5;
    do {
      lVar22 = *plVar26;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
    local_e8 = (long *)CONCAT44(local_e8._4_4_,2);
    local_88 = (long *)CONCAT44(local_88._4_4_,extraout_var);
    for (piVar19 = (int *)plVar27[0x22]; piVar19 != (int *)plVar27[0x23]; piVar19 = piVar19 + 8) {
      if ((*piVar19 == 2) && (piVar19[1] == extraout_var)) {
        *(undefined1 (*) [16])(piVar19 + 4) = local_98;
        goto LAB_015b1430;
      }
    }
    FUN_00ed5784(plVar27 + 0x22,&local_e8,&local_88,local_98);
LAB_015b1430:
    do {
      lVar22 = *plVar26;
      iVar29 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar29;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
LAB_015b1448:
  plVar27 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar27 == (long *)0x0) {
    local_88 = (long *)CONCAT44(local_88._4_4_,2);
    local_120 = CONCAT44(local_120._4_4_,iVar23 + 0xc);
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    piVar19 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_015b25b0:
      if ((*piVar19 != 2) || (piVar19[1] != iVar23 + 0xc)) goto LAB_015b25c8;
      lVar22 = *(long *)(param_1 + 0x4f8);
      if (lVar22 != 0) {
        piVar3 = (int *)(lVar22 + 0x28);
        do {
          iVar23 = *piVar3;
          cVar4 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar28) {
            *piVar3 = iVar23 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar23 == -1) goto LAB_015b2848;
      }
      plVar27 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar22;
      if (plVar27 != (long *)0x0) {
        plVar26 = plVar27 + 5;
        do {
          lVar22 = *plVar26;
          iVar23 = (int)lVar22 + -1;
          cVar4 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar28) {
            *(int *)plVar26 = iVar23;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar23 != 0) {
          if ((int)lVar22 != 0) goto LAB_015b1534;
          goto LAB_015b27b4;
        }
        lVar22 = *plVar27;
        goto LAB_015b1d4c;
      }
      goto LAB_015b1534;
    }
LAB_015b25d4:
    FUN_00d11148(0x110,&local_88,&local_120,(long *)(param_1 + 0x4f8),&local_e8);
  }
  else {
    plVar26 = plVar27 + 5;
    do {
      lVar22 = *plVar26;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
    local_88 = (long *)CONCAT44(local_88._4_4_,2);
    local_120 = CONCAT44(local_120._4_4_,iVar23 + 0xc);
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    piVar19 = (int *)plVar27[0x22];
    if (piVar19 != (int *)plVar27[0x23]) {
LAB_015b1494:
      if ((*piVar19 != 2) || (piVar19[1] != iVar23 + 0xc)) goto LAB_015b14ac;
      lVar22 = *(long *)(param_1 + 0x4f8);
      if (lVar22 != 0) {
        piVar3 = (int *)(lVar22 + 0x28);
        do {
          iVar23 = *piVar3;
          cVar4 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar28) {
            *piVar3 = iVar23 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar23 == -1) {
LAB_015b2848:
          pcVar18 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          goto LAB_015b2840;
        }
      }
      plVar17 = *(long **)(piVar19 + 2);
      *(long *)(piVar19 + 2) = lVar22;
      if (plVar17 != (long *)0x0) {
        plVar2 = plVar17 + 5;
        do {
          lVar22 = *plVar2;
          iVar23 = (int)lVar22 + -1;
          cVar4 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar28) {
            *(int *)plVar2 = iVar23;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar23 == 0) {
          (**(code **)(*plVar17 + 0x10))();
        }
        else if ((int)lVar22 == 0) {
LAB_015b27b4:
          pcVar18 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          goto LAB_015b2818;
        }
      }
      goto LAB_015b151c;
    }
LAB_015b14b8:
    FUN_00d11148(plVar27 + 0x22,&local_88,&local_120,(long *)(param_1 + 0x4f8),&local_e8);
LAB_015b151c:
    do {
      lVar22 = *plVar26;
      iVar23 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      lVar22 = *plVar27;
LAB_015b1d4c:
      (**(code **)(lVar22 + 0x10))(plVar27);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
LAB_015b1534:
  FUN_01271098(*(undefined8 *)(param_1 + 0x440),0x12);
  plVar27 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar27 == (long *)0x0) {
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d8219c(0,0,param_1 + 0x460,0xffffffff,&local_e8);
  }
  else {
    plVar26 = plVar27 + 5;
    do {
      lVar22 = *plVar26;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d8219c(plVar27,0,param_1 + 0x460,0xffffffff,&local_e8);
    do {
      lVar22 = *plVar26;
      iVar23 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  plVar27 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar27 == (long *)0x0) {
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d829fc(0,plVar1,&local_e8);
  }
  else {
    plVar26 = plVar27 + 5;
    do {
      lVar22 = *plVar26;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
    local_e8 = (long *)((ulong)local_e8._1_7_ << 8);
    FUN_00d829fc(plVar27,plVar1,&local_e8);
    do {
      lVar22 = *plVar26;
      iVar23 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar28) {
        *(int *)plVar26 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  plVar27 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar27 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar1 = plVar27 + 5;
    do {
      lVar22 = *plVar1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
    FUN_00d819c8(0,plVar27,0);
    do {
      lVar22 = *plVar1;
      iVar23 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  plVar27 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar27 == (long *)0x0) {
    FUN_00eb4900(0,0);
  }
  else {
    plVar1 = plVar27 + 5;
    do {
      lVar22 = *plVar1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
    FUN_00eb4900(plVar27,0);
    do {
      lVar22 = *plVar1;
      iVar23 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  plVar27 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar27 == (long *)0x0) {
    FUN_00eb3bec(0,1);
  }
  else {
    plVar1 = plVar27 + 5;
    do {
      lVar22 = *plVar1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) goto LAB_015b2820;
    FUN_00eb3bec(plVar27,1);
    do {
      lVar22 = *plVar1;
      iVar23 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  plVar27 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar27 == (long *)0x0) {
    FUN_00f190b8(0,0,0);
  }
  else {
    plVar1 = plVar27 + 5;
    do {
      lVar22 = *plVar1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = (int)lVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar22 == -1) {
LAB_015b2820:
      pcVar18 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_015b2840:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",pcVar18,0x53,
                 "Reference counter overflows.");
    }
    FUN_00f190b8(plVar27,0,0);
    do {
      lVar22 = *plVar1;
      iVar23 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  local_d8 = 0x1f;
  local_d0 = (long *)0x0;
  local_88 = (long *)0x4a3004194901cee;
  pcStack_80 = "[WeatherEffect]";
  local_78 = 0xf;
  local_70 = (long *)0x0;
  local_e8 = (long *)0x44e183283098fe36;
  local_e0 = puVar9;
  FUN_01343d88(&local_120,DAT_0485a0d0,&local_e8,&local_88,0);
  plVar27 = *(long **)(param_1 + 0x550);
  *(undefined8 *)(param_1 + 0x550) = 0;
  if (plVar27 != (long *)0x0) {
    plVar1 = plVar27 + 5;
    do {
      lVar22 = *plVar1;
      iVar23 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar27 + 0x10))();
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  uVar24 = local_120;
  local_120 = 0;
  *(undefined8 *)(param_1 + 0x550) = uVar24;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  FUN_00eacd1c(*(undefined8 *)(param_1 + 0x550),0,6,3);
  FUN_00eb3bec(*(undefined8 *)(*(long *)(param_1 + 0x550) + 200),0);
  FUN_00eb4900(*(undefined8 *)(*(long *)(param_1 + 0x550) + 200),0);
  FUN_00eb7830(*(undefined8 *)(*(long *)(param_1 + 0x550) + 200),0);
  FUN_00eb2d18(*(undefined8 *)(*(long *)(param_1 + 0x550) + 200),0,1);
  local_e8 = (long *)0x44e183283098fe36;
  local_e0 = PTR_s_WeatherEffect_047e1498;
  local_d8 = 0x1f;
  local_d0 = (long *)0x0;
  FUN_012a632c(&local_88,plVar13,&local_e8);
  plVar27 = *(long **)(param_1 + 0x598);
  *(undefined8 *)(param_1 + 0x598) = 0;
  if (plVar27 != (long *)0x0) {
    plVar1 = plVar27 + 5;
    do {
      lVar22 = *plVar1;
      iVar23 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar28) {
        *(int *)plVar1 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar27 + 0x10))();
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  plVar27 = local_88;
  local_88 = (long *)0x0;
  *(long **)(param_1 + 0x598) = plVar27;
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))(local_d0);
    plVar27 = *(long **)(param_1 + 0x598);
  }
  FUN_00eb6400(plVar27);
  FUN_00d100a8(*(undefined8 *)(param_1 + 0x598));
  lVar22 = *(long *)(param_1 + 0x550);
  uVar24 = FUN_015f804c(*(undefined8 *)(param_1 + 0x598));
  FUN_00d10690(*(undefined8 *)(lVar22 + 200),0,uVar24);
  if (plVar16 != (long *)0x0) {
    plVar27 = plVar16 + 5;
    do {
      lVar22 = *plVar27;
      iVar23 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar28) {
        *(int *)plVar27 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar22 == 0) goto LAB_015b27f8;
  }
  if (plVar13 != (long *)0x0) {
    plVar27 = plVar13 + 5;
    do {
      lVar22 = *plVar27;
      iVar23 = (int)lVar22 + -1;
      cVar4 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar28) {
        *(int *)plVar27 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar22 == 0) {
LAB_015b27f8:
      pcVar18 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_015b2818:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 pcVar18,0x58,"Reference counter underflows.");
    }
  }
  return;
LAB_015b22ac:
  piVar19 = piVar19 + 8;
  if (_DAT_00000118 == piVar19) goto LAB_015b22b8;
  goto LAB_015b2294;
LAB_015b070c:
  piVar19 = piVar19 + 8;
  if ((int *)plVar16[0x23] == piVar19) goto LAB_015b0718;
  goto LAB_015b06f4;
LAB_015b1140:
  piVar19 = piVar19 + 8;
  if ((int *)plVar26[0x23] == piVar19) goto LAB_015b114c;
  goto LAB_015b1128;
LAB_015b2490:
  piVar19 = piVar19 + 8;
  if (_DAT_00000118 == piVar19) goto LAB_015b249c;
  goto LAB_015b2478;
LAB_015b1238:
  piVar19 = piVar19 + 8;
  if ((int *)plVar27[0x23] == piVar19) goto LAB_015b1244;
  goto LAB_015b1220;
LAB_015b24fc:
  piVar19 = piVar19 + 8;
  if (_DAT_00000118 == piVar19) goto LAB_015b2508;
  goto LAB_015b24e4;
LAB_015b1324:
  piVar19 = piVar19 + 8;
  if ((int *)plVar27[0x23] == piVar19) goto LAB_015b1330;
  goto LAB_015b130c;
LAB_015b25c8:
  piVar19 = piVar19 + 8;
  if (_DAT_00000118 == piVar19) goto LAB_015b25d4;
  goto LAB_015b25b0;
LAB_015b14ac:
  piVar19 = piVar19 + 8;
  if ((int *)plVar27[0x23] == piVar19) goto LAB_015b14b8;
  goto LAB_015b1494;
}


