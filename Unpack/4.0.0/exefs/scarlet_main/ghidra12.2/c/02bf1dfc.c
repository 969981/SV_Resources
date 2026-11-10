/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02bf1dfc; name: FUN_02bf1dfc
 */


void FUN_02bf1dfc(long *param_1,undefined8 param_2)

{
  short *psVar1;
  code *pcVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  short sVar8;
  char cVar9;
  bool bVar10;
  long *plVar11;
  code *pcVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  short sVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  undefined8 local_1a8;
  long *local_1a0;
  undefined8 local_198;
  long *local_190;
  long *local_188;
  long *local_180;
  long *local_178;
  long *local_170;
  long *local_168;
  long local_160;
  long *local_158;
  undefined4 local_14c;
  long *local_148;
  long *local_140;
  undefined8 local_138;
  long *local_130;
  char *pcStack_128;
  undefined8 local_120;
  long *local_118;
  code *local_110;
  code *local_108;
  code *local_100;
  code *local_f8;
  long *local_f0;
  long local_e8 [2];
  char *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 *local_88;
  char *pcStack_80;
  long local_78;
  long *local_70;
  
  FUN_019db778(&local_1a8,*param_1 + 0xe0);
  FUN_019db778(&local_198,&local_1a8);
  FUN_027c8ce8(&local_170,param_1[2]);
  plVar6 = local_170;
  local_130 = (long *)0x34a9bbed8424e7c3;
  pcStack_128 = "LeaveSuccess";
  local_120 = 0xc;
  local_118 = (long *)0x0;
  FUN_019db778(&local_180,&local_198);
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,plVar6 + 6);
  local_88 = (undefined8 *)0x0;
  pcStack_80 = (char *)0x0;
  plVar7 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 5;
  }
  if (*(long **)(local_110 + 0x10) == plVar7) {
    FUN_015d2a6c(&local_88,&local_110);
  }
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar2 = local_110 + 0x18;
    do {
      sVar17 = *(short *)pcVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar10) {
        *(short *)pcVar2 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar14 = *(int *)pcVar2;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar10) {
          *(int *)pcVar2 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_168 = *(long **)pcVar12;
        FUN_00c44438(lVar18 + 0x8040,&local_168);
      }
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  puVar13 = local_88;
  if (local_88 == (undefined8 *)0x0) {
    plVar20 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_88 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_88 + 0x1a);
      sVar17 = *(short *)((long)local_88 + 0x1a);
      do {
        sVar8 = *psVar1;
        if (sVar8 == sVar17) {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar17 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 != '\0') goto LAB_02bf32ec;
          bVar10 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02bf32ec:
          bVar10 = false;
        }
        if (bVar10) {
          plVar20 = (long *)0x0;
          if (local_88[2] != 0) {
            plVar20 = (long *)(local_88[2] + -0x28);
          }
          goto LAB_02bf33f8;
        }
        sVar17 = sVar8;
      } while (sVar8 != 0);
    }
    plVar20 = (long *)0x0;
LAB_02bf33f8:
    psVar1 = (short *)(local_88 + 3);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      piVar3 = (int *)((long)local_88 + 0x1c);
      do {
        iVar14 = *piVar3;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar10) {
          *piVar3 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_110 = (code *)*puVar13;
        FUN_00c44438(lVar18 + 0x8040,&local_110);
      }
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  FUN_01050714(&local_148,&local_130);
  plVar11 = local_148;
  plVar5 = (long *)PTR_PTR_047d4508;
  plVar4 = (long *)PTR_DAT_047d8b70;
  if (local_148 != (long *)0x0) {
    plVar4 = local_148 + 6;
  }
  local_88 = (undefined8 *)*plVar4;
  plVar4 = (long *)PTR_PTR_047d4508;
  if (local_148 != (long *)0x0) {
    plVar4 = local_148 + 7;
  }
  pcStack_80 = (char *)*plVar4;
  if (local_148 == (long *)0x0) {
    local_78 = 0;
  }
  else {
    local_78 = local_148[8];
  }
  local_70 = (long *)0x0;
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x18))(local_148);
  }
  local_70 = plVar11;
  local_14c = 0;
  local_168 = plVar20;
  if (plVar20 != (long *)0x0) {
    lVar18 = plVar20[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_02bf34b4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar15;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar17 == -1) goto LAB_02bf34b4;
  }
  FUN_01f07a84(&local_160,&local_180);
  local_100 = (code *)0x0;
  local_f8 = (code *)0x0;
  local_f0 = local_168;
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  if (local_168 != (long *)0x0) {
    lVar18 = local_168[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_02bf34b4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar15;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar17 == -1) goto LAB_02bf34b4;
  }
  FUN_01f07a84(local_e8,&local_160);
  local_110 = FUN_02bf46e8;
  local_108 = FUN_02bf5320;
  local_100 = FUN_02bf6688;
  local_f8 = FUN_02bf6730;
  FUN_015d1ba8(&local_188,&local_88,&local_14c,&local_110);
  pcVar12 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    (*pcVar12)(&local_f0);
  }
  lVar16 = local_160;
  lVar18 = tpidr_el0;
  if (*(long *)(lVar18 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04859438), iVar14 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar18 + 0x30) = DAT_04859430;
  }
  plVar4 = local_158;
  local_140 = *(long **)(lVar18 + 0x30);
  local_138 = *(undefined8 *)(lVar18 + 0x38);
  *(long *)(lVar18 + 0x30) = lVar16;
  *(undefined2 *)(lVar18 + 0x38) = 1;
  local_158 = (long *)0x0;
  if (plVar4 == (long *)0x0) {
    *(long **)(lVar18 + 0x30) = local_140;
    *(undefined2 *)(lVar18 + 0x38) = (undefined2)local_138;
  }
  else {
    (**(code **)(*plVar4 + 8))();
    *(long **)(lVar18 + 0x30) = local_140;
    *(undefined2 *)(lVar18 + 0x38) = (undefined2)local_138;
    if (local_158 != (long *)0x0) {
      (**(code **)(*local_158 + 8))(local_158);
    }
  }
  if (local_168 != (long *)0x0) {
    lVar16 = local_168[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*local_168 + 0x50))();
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  plVar4 = local_188;
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,plVar6 + 6);
  local_168 = (long *)0x0;
  local_160 = 0;
  if (*(long **)(local_110 + 0x10) == plVar7) {
    FUN_015d2a6c(&local_168,&local_110);
  }
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar2 = local_110 + 0x18;
    do {
      sVar17 = *(short *)pcVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar10) {
        *(short *)pcVar2 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar14 = *(int *)pcVar2;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar10) {
          *(int *)pcVar2 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_140 = *(long **)pcVar12;
        FUN_00c44438(lVar16 + 0x8040,&local_140);
      }
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  FUN_0177de7c(&local_110,&local_168);
  if ((((char)plVar4[0x28] != '\0') && (local_110 != (code *)0x0)) &&
     (*(long *)(local_110 + 0x10) != 0)) {
    (**(code **)(*(long *)(*(long *)(local_110 + 0x10) + -0x28) + 0x78))();
  }
  FUN_0154631c(plVar4 + 0x26,&local_110);
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar2 = local_110 + 0x18;
    do {
      sVar17 = *(short *)pcVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar10) {
        *(short *)pcVar2 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar14 = *(int *)pcVar2;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar10) {
          *(int *)pcVar2 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_140 = *(long **)pcVar12;
        FUN_00c44438(lVar16 + 0x8040,&local_140);
      }
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  plVar7 = local_168;
  if (local_168 != (long *)0x0) {
    plVar6 = local_168 + 3;
    do {
      sVar17 = (short)*plVar6;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar10) {
        *(short *)plVar6 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      piVar3 = (int *)((long)local_168 + 0x1c);
      do {
        iVar14 = *piVar3;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar10) {
          *piVar3 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_140 = (long *)*plVar7;
        FUN_00c44438(lVar16 + 0x8040,&local_140);
      }
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  if (plVar20 != (long *)0x0) {
    lVar16 = plVar20[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar20 + 0x50))(plVar20);
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  plVar7 = local_180;
  if (*(long *)(lVar18 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04859438), iVar14 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar18 + 0x30) = DAT_04859430;
  }
  plVar6 = local_178;
  local_110 = *(code **)(lVar18 + 0x30);
  local_108 = *(code **)(lVar18 + 0x38);
  *(long **)(lVar18 + 0x30) = plVar7;
  *(undefined2 *)(lVar18 + 0x38) = 1;
  local_178 = (long *)0x0;
  if (plVar6 == (long *)0x0) {
    *(code **)(lVar18 + 0x30) = local_110;
    *(undefined2 *)(lVar18 + 0x38) = local_108._0_2_;
  }
  else {
    (**(code **)(*plVar6 + 8))();
    *(code **)(lVar18 + 0x30) = local_110;
    *(undefined2 *)(lVar18 + 0x38) = local_108._0_2_;
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 8))(local_178);
    }
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  if (local_170 != (long *)0x0) {
    lVar16 = local_170[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*local_170 + 0x50))();
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  plVar7 = local_188;
  lVar16 = param_1[1];
  if (lVar16 != 0) {
    lVar19 = *(long *)(lVar16 + 0x30);
    if (*(long *)(lVar19 + 0x10) == 0) goto LAB_02bf34b4;
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      *(undefined8 *)(lVar19 + 8) = uVar15;
      *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
    }
    else if (sVar17 == -1) goto LAB_02bf34b4;
  }
  local_130 = (long *)0x88fe387cc5f312e6;
  pcStack_128 = "RecoverSuccess";
  local_120 = 0xe;
  local_118 = (long *)0x0;
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,plVar7 + 6);
  local_88 = (undefined8 *)0x0;
  pcStack_80 = (char *)0x0;
  plVar6 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7 + 5;
  }
  if (*(long **)(local_110 + 0x10) == plVar6) {
    FUN_015d2a6c(&local_88,&local_110);
  }
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar2 = local_110 + 0x18;
    do {
      sVar17 = *(short *)pcVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar10) {
        *(short *)pcVar2 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar14 = *(int *)pcVar2;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar10) {
          *(int *)pcVar2 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_168 = *(long **)pcVar12;
        FUN_00c44438(lVar19 + 0x8040,&local_168);
      }
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  puVar13 = local_88;
  if (local_88 == (undefined8 *)0x0) {
    plVar20 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_88 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_88 + 0x1a);
      sVar17 = *(short *)((long)local_88 + 0x1a);
      do {
        sVar8 = *psVar1;
        if (sVar8 == sVar17) {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar17 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 != '\0') goto LAB_02bf3338;
          bVar10 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02bf3338:
          bVar10 = false;
        }
        if (bVar10) {
          plVar20 = (long *)0x0;
          if (local_88[2] != 0) {
            plVar20 = (long *)(local_88[2] + -0x28);
          }
          goto LAB_02bf342c;
        }
        sVar17 = sVar8;
      } while (sVar8 != 0);
    }
    plVar20 = (long *)0x0;
LAB_02bf342c:
    psVar1 = (short *)(local_88 + 3);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      piVar3 = (int *)((long)local_88 + 0x1c);
      do {
        iVar14 = *piVar3;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar10) {
          *piVar3 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_110 = (code *)*puVar13;
        FUN_00c44438(lVar19 + 0x8040,&local_110);
      }
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  FUN_01050714(&local_168,&local_130);
  plVar11 = local_168;
  plVar4 = (long *)PTR_DAT_047d8b70;
  if (local_168 != (long *)0x0) {
    plVar5 = local_168 + 7;
    plVar4 = local_168 + 6;
  }
  local_88 = (undefined8 *)*plVar4;
  pcStack_80 = (char *)*plVar5;
  if (local_168 == (long *)0x0) {
    local_78 = 0;
  }
  else {
    local_78 = local_168[8];
  }
  local_70 = (long *)0x0;
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x18))(local_168);
  }
  local_70 = plVar11;
  local_140 = (long *)((ulong)local_140 & 0xffffffff00000000);
  if (plVar20 == (long *)0x0) {
    local_f0 = (long *)0x0;
  }
  else {
    lVar19 = plVar20[6];
    if (*(long *)(lVar19 + 0x10) == 0) goto LAB_02bf34b4;
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      *(undefined8 *)(lVar19 + 8) = uVar15;
      *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
    }
    else if (sVar17 == -1) goto LAB_02bf34b4;
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    lVar19 = plVar20[6];
    local_f0 = plVar20;
    if (*(long *)(lVar19 + 0x10) == 0) goto LAB_02bf34b4;
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      *(undefined8 *)(lVar19 + 8) = uVar15;
      *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
    }
    else if (sVar17 == -1) goto LAB_02bf34b4;
  }
  local_d8 = "RecoverSuccess";
  uStack_d0 = 0xe;
  local_c8 = 0;
  local_110 = (code *)&LAB_02bf67d8;
  local_108 = FUN_02bf7500;
  local_e8[1] = 0x88fe387cc5f312e6;
  local_100 = FUN_02bf8900;
  local_f8 = FUN_02bf8a3c;
  local_e8[0] = lVar16;
  FUN_015d1ba8(&local_148,&local_88,&local_140,&local_110);
  pcVar12 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    (*pcVar12)(&local_f0);
  }
  if (plVar20 != (long *)0x0) {
    lVar16 = plVar20[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar20 + 0x50))(plVar20);
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
  }
  plVar4 = local_148;
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,plVar7 + 6);
  local_168 = (long *)0x0;
  local_160 = 0;
  if (*(long **)(local_110 + 0x10) == plVar6) {
    FUN_015d2a6c(&local_168,&local_110);
  }
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar2 = local_110 + 0x18;
    do {
      sVar17 = *(short *)pcVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar10) {
        *(short *)pcVar2 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar14 = *(int *)pcVar2;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar10) {
          *(int *)pcVar2 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_140 = *(long **)pcVar12;
        FUN_00c44438(lVar16 + 0x8040,&local_140);
      }
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  FUN_0177de7c(&local_110,&local_168);
  if ((((char)plVar4[0x28] != '\0') && (local_110 != (code *)0x0)) &&
     (*(long *)(local_110 + 0x10) != 0)) {
    (**(code **)(*(long *)(*(long *)(local_110 + 0x10) + -0x28) + 0x78))();
  }
  FUN_0154631c(plVar4 + 0x26,&local_110);
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar2 = local_110 + 0x18;
    do {
      sVar17 = *(short *)pcVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar10) {
        *(short *)pcVar2 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar14 = *(int *)pcVar2;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar10) {
          *(int *)pcVar2 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_140 = *(long **)pcVar12;
        FUN_00c44438(lVar16 + 0x8040,&local_140);
      }
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  plVar7 = local_168;
  if (local_168 != (long *)0x0) {
    plVar6 = local_168 + 3;
    do {
      sVar17 = (short)*plVar6;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar10) {
        *(short *)plVar6 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      piVar3 = (int *)((long)local_168 + 0x1c);
      do {
        iVar14 = *piVar3;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar10) {
          *piVar3 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_140 = (long *)*plVar7;
        FUN_00c44438(lVar16 + 0x8040,&local_140);
      }
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  if (plVar20 != (long *)0x0) {
    lVar16 = plVar20[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar20 + 0x50))(plVar20);
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  plVar7 = local_148;
  lVar16 = param_1[1];
  if (lVar16 != 0) {
    lVar19 = *(long *)(lVar16 + 0x30);
    if (*(long *)(lVar19 + 0x10) == 0) goto LAB_02bf34b4;
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      *(undefined8 *)(lVar19 + 8) = uVar15;
      *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
    }
    else if (sVar17 == -1) goto LAB_02bf34b4;
  }
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,plVar7 + 6);
  local_88 = (undefined8 *)0x0;
  pcStack_80 = (char *)0x0;
  plVar6 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7 + 5;
  }
  if (*(long **)(local_110 + 0x10) == plVar6) {
    FUN_015d2a6c(&local_88,&local_110);
  }
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar2 = local_110 + 0x18;
    do {
      sVar17 = *(short *)pcVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar10) {
        *(short *)pcVar2 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar14 = *(int *)pcVar2;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar10) {
          *(int *)pcVar2 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_130 = *(long **)pcVar12;
        FUN_00c44438(lVar19 + 0x8040,&local_130);
      }
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  puVar13 = local_88;
  if (local_88 == (undefined8 *)0x0) {
    plVar20 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_88 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_88 + 0x1a);
      sVar17 = *(short *)((long)local_88 + 0x1a);
      do {
        sVar8 = *psVar1;
        if (sVar8 == sVar17) {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar17 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 != '\0') goto LAB_02bf3384;
          bVar10 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02bf3384:
          bVar10 = false;
        }
        if (bVar10) {
          plVar20 = (long *)0x0;
          if (local_88[2] != 0) {
            plVar20 = (long *)(local_88[2] + -0x28);
          }
          goto LAB_02bf3460;
        }
        sVar17 = sVar8;
      } while (sVar8 != 0);
    }
    plVar20 = (long *)0x0;
LAB_02bf3460:
    psVar1 = (short *)(local_88 + 3);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      piVar3 = (int *)((long)local_88 + 0x1c);
      do {
        iVar14 = *piVar3;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar10) {
          *piVar3 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_110 = (code *)*puVar13;
        FUN_00c44438(lVar19 + 0x8040,&local_110);
      }
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  local_130 = (long *)((ulong)local_130 & 0xffffffff00000000);
  local_88 = (undefined8 *)0xa7c06656e360bf1e;
  pcStack_80 = "RecoverFailred";
  local_78 = 0xe;
  local_70 = (long *)0x0;
  if (plVar20 == (long *)0x0) {
    local_f0 = (long *)0x0;
  }
  else {
    lVar19 = plVar20[6];
    if (*(long *)(lVar19 + 0x10) == 0) goto LAB_02bf34b4;
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      *(undefined8 *)(lVar19 + 8) = uVar15;
      *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
    }
    else if (sVar17 == -1) goto LAB_02bf34b4;
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    lVar19 = plVar20[6];
    local_f0 = plVar20;
    if (*(long *)(lVar19 + 0x10) == 0) goto LAB_02bf34b4;
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      *(undefined8 *)(lVar19 + 8) = uVar15;
      *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
    }
    else if (sVar17 == -1) goto LAB_02bf34b4;
  }
  local_110 = (code *)&LAB_02bf8b0c;
  local_108 = FUN_02bf9454;
  local_100 = FUN_02bf9d2c;
  local_f8 = FUN_02bf9e2c;
  local_e8[0] = lVar16;
  FUN_015d1ba8(&local_180,&local_88,&local_130,&local_110);
  pcVar12 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    (*pcVar12)(&local_f0);
  }
  if (plVar20 != (long *)0x0) {
    lVar16 = plVar20[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar20 + 0x50))(plVar20);
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  plVar4 = local_180;
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,plVar7 + 6);
  local_130 = (long *)0x0;
  pcStack_128 = (char *)0x0;
  if (*(long **)(local_110 + 0x10) == plVar6) {
    FUN_015d2a6c(&local_130,&local_110);
  }
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar2 = local_110 + 0x18;
    do {
      sVar17 = *(short *)pcVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar10) {
        *(short *)pcVar2 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar14 = *(int *)pcVar2;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar10) {
          *(int *)pcVar2 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_168 = *(long **)pcVar12;
        FUN_00c44438(lVar16 + 0x8040,&local_168);
      }
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  FUN_0177de7c(&local_110,&local_130);
  if ((((char)plVar4[0x28] != '\0') && (local_110 != (code *)0x0)) &&
     (*(long *)(local_110 + 0x10) != 0)) {
    (**(code **)(*(long *)(*(long *)(local_110 + 0x10) + -0x28) + 0x78))();
  }
  FUN_0154631c(plVar4 + 0x26,&local_110);
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar2 = local_110 + 0x18;
    do {
      sVar17 = *(short *)pcVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar10) {
        *(short *)pcVar2 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar14 = *(int *)pcVar2;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar10) {
          *(int *)pcVar2 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_168 = *(long **)pcVar12;
        FUN_00c44438(lVar16 + 0x8040,&local_168);
      }
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  plVar7 = local_130;
  if (local_130 != (long *)0x0) {
    plVar6 = local_130 + 3;
    do {
      sVar17 = (short)*plVar6;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar10) {
        *(short *)plVar6 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      piVar3 = (int *)((long)local_130 + 0x1c);
      do {
        iVar14 = *piVar3;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar10) {
          *piVar3 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_168 = (long *)*plVar7;
        FUN_00c44438(lVar16 + 0x8040,&local_168);
      }
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  if (plVar20 != (long *)0x0) {
    lVar16 = plVar20[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar20 + 0x50))(plVar20);
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  plVar7 = local_180;
  lVar16 = param_1[1];
  if (lVar16 != 0) {
    lVar19 = *(long *)(lVar16 + 0x30);
    if (*(long *)(lVar19 + 0x10) == 0) goto LAB_02bf34b4;
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      *(undefined8 *)(lVar19 + 8) = uVar15;
      *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
    }
    else if (sVar17 == -1) goto LAB_02bf34b4;
  }
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,plVar7 + 6);
  local_88 = (undefined8 *)0x0;
  pcStack_80 = (char *)0x0;
  plVar6 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7 + 5;
  }
  if (*(long **)(local_110 + 0x10) == plVar6) {
    FUN_015d2a6c(&local_88,&local_110);
  }
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar2 = local_110 + 0x18;
    do {
      sVar17 = *(short *)pcVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar10) {
        *(short *)pcVar2 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar14 = *(int *)pcVar2;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar10) {
          *(int *)pcVar2 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_130 = *(long **)pcVar12;
        FUN_00c44438(lVar19 + 0x8040,&local_130);
      }
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  puVar13 = local_88;
  if (local_88 == (undefined8 *)0x0) {
    plVar20 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_88 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_88 + 0x1a);
      sVar17 = *(short *)((long)local_88 + 0x1a);
      do {
        sVar8 = *psVar1;
        if (sVar8 == sVar17) {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar17 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 != '\0') goto LAB_02bf33d0;
          bVar10 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02bf33d0:
          bVar10 = false;
        }
        if (bVar10) {
          plVar20 = (long *)0x0;
          if (local_88[2] != 0) {
            plVar20 = (long *)(local_88[2] + -0x28);
          }
          goto LAB_02bf3494;
        }
        sVar17 = sVar8;
      } while (sVar8 != 0);
    }
    plVar20 = (long *)0x0;
LAB_02bf3494:
    psVar1 = (short *)(local_88 + 3);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      piVar3 = (int *)((long)local_88 + 0x1c);
      do {
        iVar14 = *piVar3;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar10) {
          *piVar3 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_110 = (code *)*puVar13;
        FUN_00c44438(lVar19 + 0x8040,&local_110);
      }
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  local_130 = (long *)((ulong)local_130 & 0xffffffff00000000);
  local_88 = (undefined8 *)0xb23cc3a7edb7ac7d;
  pcStack_80 = "RecoverCancel";
  local_78 = 0xd;
  local_70 = (long *)0x0;
  if (plVar20 == (long *)0x0) {
    local_f0 = (long *)0x0;
  }
  else {
    lVar19 = plVar20[6];
    if (*(long *)(lVar19 + 0x10) == 0) goto LAB_02bf34b4;
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      *(undefined8 *)(lVar19 + 8) = uVar15;
      *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
    }
    else if (sVar17 == -1) goto LAB_02bf34b4;
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    lVar19 = plVar20[6];
    local_f0 = plVar20;
    if (*(long *)(lVar19 + 0x10) == 0) goto LAB_02bf34b4;
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      *(undefined8 *)(lVar19 + 8) = uVar15;
      *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
    }
    else if (sVar17 == -1) goto LAB_02bf34b4;
  }
  local_110 = (code *)&LAB_02bf9ed8;
  local_108 = FUN_02bfa724;
  local_100 = FUN_02bfaec8;
  local_f8 = FUN_02bfafc8;
  local_e8[0] = lVar16;
  FUN_015d1ba8(&local_140,&local_88,&local_130,&local_110);
  pcVar12 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    (*pcVar12)(&local_f0);
  }
  if (plVar20 != (long *)0x0) {
    lVar16 = plVar20[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar20 + 0x50))(plVar20);
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  plVar4 = local_140;
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,plVar7 + 6);
  local_130 = (long *)0x0;
  pcStack_128 = (char *)0x0;
  if (*(long **)(local_110 + 0x10) == plVar6) {
    FUN_015d2a6c(&local_130,&local_110);
  }
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar2 = local_110 + 0x18;
    do {
      sVar17 = *(short *)pcVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar10) {
        *(short *)pcVar2 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar14 = *(int *)pcVar2;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar10) {
          *(int *)pcVar2 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_168 = *(long **)pcVar12;
        FUN_00c44438(lVar16 + 0x8040,&local_168);
      }
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  FUN_0177de7c(&local_110,&local_130);
  if ((((char)plVar4[0x28] != '\0') && (local_110 != (code *)0x0)) &&
     (*(long *)(local_110 + 0x10) != 0)) {
    (**(code **)(*(long *)(*(long *)(local_110 + 0x10) + -0x28) + 0x78))();
  }
  FUN_0154631c(plVar4 + 0x26,&local_110);
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar2 = local_110 + 0x18;
    do {
      sVar17 = *(short *)pcVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar10) {
        *(short *)pcVar2 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar14 = *(int *)pcVar2;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar10) {
          *(int *)pcVar2 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_168 = *(long **)pcVar12;
        FUN_00c44438(lVar16 + 0x8040,&local_168);
      }
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  plVar7 = local_130;
  if (local_130 != (long *)0x0) {
    plVar6 = local_130 + 3;
    do {
      sVar17 = (short)*plVar6;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar10) {
        *(short *)plVar6 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      piVar3 = (int *)((long)local_130 + 0x1c);
      do {
        iVar14 = *piVar3;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar10) {
          *piVar3 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_168 = (long *)*plVar7;
        FUN_00c44438(lVar16 + 0x8040,&local_168);
      }
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  if (plVar20 != (long *)0x0) {
    lVar16 = plVar20[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar20 + 0x50))(plVar20);
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  if (local_180 != (long *)0x0) {
    lVar16 = local_180[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*local_180 + 0x50))();
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  if (local_148 != (long *)0x0) {
    lVar16 = local_148[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*local_148 + 0x50))();
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  if (local_188 != (long *)0x0) {
    lVar16 = local_188[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*local_188 + 0x50))();
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
  }
  if (*(long *)(lVar18 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04859438), iVar14 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar18 + 0x30) = DAT_04859430;
  }
  plVar7 = local_190;
  local_110 = *(code **)(lVar18 + 0x30);
  local_108 = *(code **)(lVar18 + 0x38);
  *(undefined8 *)(lVar18 + 0x30) = local_198;
  *(undefined2 *)(lVar18 + 0x38) = 1;
  local_190 = (long *)0x0;
  if (plVar7 == (long *)0x0) {
    *(code **)(lVar18 + 0x30) = local_110;
    *(undefined2 *)(lVar18 + 0x38) = local_108._0_2_;
  }
  else {
    (**(code **)(*plVar7 + 8))();
    *(code **)(lVar18 + 0x30) = local_110;
    *(undefined2 *)(lVar18 + 0x38) = local_108._0_2_;
    if (local_190 != (long *)0x0) {
      (**(code **)(*local_190 + 8))(local_190);
    }
  }
  FUN_0177dc44(&local_110,param_1[1]);
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    lVar16 = *(long *)(local_110 + 0x10);
    plVar7 = (long *)0x0;
    if (lVar16 != 0) {
      plVar7 = (long *)(lVar16 + -0x28);
    }
    pcVar2 = local_110 + 0x18;
    do {
      sVar17 = *(short *)pcVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar10) {
        *(short *)pcVar2 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar14 = *(int *)pcVar2;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar10) {
          *(int *)pcVar2 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_88 = *(undefined8 **)pcVar12;
        FUN_00c44438(lVar19 + 0x8040,&local_88);
      }
    }
    else if (sVar17 == 0) goto LAB_02bf34b4;
    plVar6 = local_140;
    if (lVar16 != 0) {
      local_110 = (code *)0x0;
      local_108 = (code *)0x0;
      FUN_00c43ef0(&local_110,local_140 + 6);
      local_88 = (undefined8 *)0x0;
      pcStack_80 = (char *)0x0;
      plVar20 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        plVar20 = plVar6 + 5;
      }
      if (*(long **)(local_110 + 0x10) == plVar20) {
        FUN_015d2a6c(&local_88,&local_110);
      }
      pcVar12 = local_110;
      if (local_110 != (code *)0x0) {
        pcVar2 = local_110 + 0x18;
        do {
          sVar17 = *(short *)pcVar2;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar10) {
            *(short *)pcVar2 = sVar17 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar17 == 1) {
          pcVar2 = local_110 + 0x1c;
          do {
            iVar14 = *(int *)pcVar2;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
            if (bVar10) {
              *(int *)pcVar2 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar14 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar16 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar16;
            local_130 = *(long **)pcVar12;
            FUN_00c44438(lVar16 + 0x8040,&local_130);
          }
        }
        else if (sVar17 == 0) goto LAB_02bf34b4;
      }
      local_110 = (code *)0x0;
      local_108 = (code *)0x0;
      FUN_0177de7c(&local_110,&local_88);
      (**(code **)(*plVar7 + 0x90))(plVar7,&local_110);
      pcVar12 = local_110;
      if (local_110 != (code *)0x0) {
        pcVar2 = local_110 + 0x18;
        do {
          sVar17 = *(short *)pcVar2;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar10) {
            *(short *)pcVar2 = sVar17 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar17 == 1) {
          pcVar2 = local_110 + 0x1c;
          do {
            iVar14 = *(int *)pcVar2;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
            if (bVar10) {
              *(int *)pcVar2 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar14 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar16 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar16;
            local_130 = *(long **)pcVar12;
            FUN_00c44438(lVar16 + 0x8040,&local_130);
          }
        }
        else if (sVar17 == 0) goto LAB_02bf34b4;
      }
      puVar13 = local_88;
      if (local_88 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_88 + 3);
        do {
          sVar17 = *psVar1;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar17 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar17 == 1) {
          piVar3 = (int *)((long)local_88 + 0x1c);
          do {
            iVar14 = *piVar3;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar10) {
              *piVar3 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar14 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar16 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar16;
            local_130 = (long *)*puVar13;
            FUN_00c44438(lVar16 + 0x8040,&local_130);
          }
        }
        else if (sVar17 == 0) goto LAB_02bf34b4;
      }
    }
  }
  if (local_140 != (long *)0x0) {
    lVar16 = local_140[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*local_140 + 0x50))();
    }
    else if (sVar17 == 0) {
LAB_02bf34b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  if (*(long *)(lVar18 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04859438), iVar14 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar18 + 0x30) = DAT_04859430;
  }
  plVar7 = local_1a0;
  local_110 = *(code **)(lVar18 + 0x30);
  local_108 = *(code **)(lVar18 + 0x38);
  *(undefined8 *)(lVar18 + 0x30) = local_1a8;
  *(undefined2 *)(lVar18 + 0x38) = 1;
  local_1a0 = (long *)0x0;
  if (plVar7 == (long *)0x0) {
    *(code **)(lVar18 + 0x30) = local_110;
    *(undefined2 *)(lVar18 + 0x38) = local_108._0_2_;
  }
  else {
    (**(code **)(*plVar7 + 8))();
    *(code **)(lVar18 + 0x30) = local_110;
    *(undefined2 *)(lVar18 + 0x38) = local_108._0_2_;
    if (local_1a0 != (long *)0x0) {
      (**(code **)(*local_1a0 + 8))(local_1a0);
    }
  }
  if (*(long *)(param_1[3] + 0x40) != 0) {
    FUN_0193d1ec(*(long *)(param_1[3] + 0x40),param_2);
  }
  return;
}


