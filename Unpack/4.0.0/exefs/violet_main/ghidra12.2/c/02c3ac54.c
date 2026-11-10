/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02c3ac54; name: FUN_02c3ac54
 */


void FUN_02c3ac54(long *param_1)

{
  short *psVar1;
  code *pcVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  code *pcVar12;
  int iVar13;
  undefined8 uVar14;
  short sVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long *local_158;
  long *local_150;
  long *local_148;
  undefined8 *local_140;
  char *pcStack_138;
  undefined8 local_130;
  long *local_128;
  long *local_120;
  undefined8 uStack_118;
  code *local_110;
  code *local_108;
  code *local_100;
  code *local_f8;
  long *local_f0;
  long local_e8;
  undefined8 uStack_e0;
  char *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 *local_88;
  char *pcStack_80;
  long local_78;
  long *local_70;
  undefined8 local_68;
  
  FUN_027c8ce8(&local_158,param_1[1]);
  plVar9 = local_158;
  lVar18 = *param_1;
  if (lVar18 != 0) {
    lVar16 = *(long *)(lVar18 + 0x30);
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_02c3b9d8;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar14;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar15 == -1) goto LAB_02c3b9d8;
  }
  local_140 = (undefined8 *)0x97555370c2e8ee94;
  pcStack_138 = "OnCancelSeqSuccess";
  local_130 = 0x12;
  local_128 = (long *)0x0;
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,plVar9 + 6);
  local_88 = (undefined8 *)0x0;
  pcStack_80 = (char *)0x0;
  plVar5 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    plVar5 = plVar9 + 5;
  }
  if (*(long **)(local_110 + 0x10) == plVar5) {
    FUN_015d2a6c(&local_88,&local_110);
  }
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar2 = local_110 + 0x18;
    do {
      sVar15 = *(short *)pcVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar8) {
        *(short *)pcVar2 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar13 = *(int *)pcVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar8) {
          *(int *)pcVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_120 = *(long **)pcVar12;
        FUN_00c44438(lVar16 + 0x8040,&local_120);
      }
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  puVar10 = local_88;
  if (local_88 == (undefined8 *)0x0) {
    plVar17 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_88 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_88 + 0x1a);
      sVar15 = *(short *)((long)local_88 + 0x1a);
      do {
        sVar6 = *psVar1;
        if (sVar6 == sVar15) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar15 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_02c3b890;
          bVar8 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02c3b890:
          bVar8 = false;
        }
        if (bVar8) {
          plVar17 = (long *)0x0;
          if (local_88[2] != 0) {
            plVar17 = (long *)(local_88[2] + -0x28);
          }
          goto LAB_02c3b950;
        }
        sVar15 = sVar6;
      } while (sVar6 != 0);
    }
    plVar17 = (long *)0x0;
LAB_02c3b950:
    psVar1 = (short *)(local_88 + 3);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      piVar3 = (int *)((long)local_88 + 0x1c);
      do {
        iVar13 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_110 = (code *)*puVar10;
        FUN_00c44438(lVar16 + 0x8040,&local_110);
      }
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  FUN_01050714(&local_120,&local_140);
  plVar11 = local_120;
  plVar4 = (long *)PTR_DAT_047d8b70;
  if (local_120 != (long *)0x0) {
    plVar4 = local_120 + 6;
  }
  local_88 = (undefined8 *)*plVar4;
  plVar4 = (long *)PTR_PTR_047d4508;
  if (local_120 != (long *)0x0) {
    plVar4 = local_120 + 7;
  }
  pcStack_80 = (char *)*plVar4;
  if (local_120 == (long *)0x0) {
    local_78 = 0;
  }
  else {
    local_78 = local_120[8];
  }
  local_70 = (long *)0x0;
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x18))(local_120);
  }
  local_70 = plVar11;
  local_68 = (long *)((ulong)local_68._4_4_ << 0x20);
  if (plVar17 == (long *)0x0) {
    local_f0 = (long *)0x0;
  }
  else {
    lVar16 = plVar17[6];
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_02c3b9d8;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar14;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar15 == -1) goto LAB_02c3b9d8;
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    lVar16 = plVar17[6];
    local_f0 = plVar17;
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_02c3b9d8;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar14;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar15 == -1) goto LAB_02c3b9d8;
  }
  local_d8 = "OnCancelSeqSuccess";
  uStack_d0 = 0x12;
  local_c8 = 0;
  local_110 = FUN_02c3c4f4;
  local_108 = FUN_02c3d21c;
  uStack_e0 = 0x97555370c2e8ee94;
  local_100 = FUN_02c3e508;
  local_f8 = FUN_02c3e644;
  local_e8 = lVar18;
  FUN_015d1ba8(&local_150,&local_88,&local_68,&local_110);
  pcVar12 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    (*pcVar12)(&local_f0);
  }
  if (plVar17 != (long *)0x0) {
    lVar18 = plVar17[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar17 + 0x50))(plVar17);
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
  plVar4 = local_150;
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,plVar9 + 6);
  local_120 = (long *)0x0;
  uStack_118 = 0;
  if (*(long **)(local_110 + 0x10) == plVar5) {
    FUN_015d2a6c(&local_120,&local_110);
  }
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar2 = local_110 + 0x18;
    do {
      sVar15 = *(short *)pcVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar8) {
        *(short *)pcVar2 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar13 = *(int *)pcVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar8) {
          *(int *)pcVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_68 = *(long **)pcVar12;
        FUN_00c44438(lVar18 + 0x8040,&local_68);
      }
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  FUN_0177de7c(&local_110,&local_120);
  if ((((char)plVar4[0x28] != '\0') && (local_110 != (code *)0x0)) &&
     (*(long *)(local_110 + 0x10) != 0)) {
    (**(code **)(*(long *)(*(long *)(local_110 + 0x10) + -0x28) + 0x78))();
  }
  FUN_0154631c(plVar4 + 0x26,&local_110);
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar2 = local_110 + 0x18;
    do {
      sVar15 = *(short *)pcVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar8) {
        *(short *)pcVar2 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar13 = *(int *)pcVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar8) {
          *(int *)pcVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_68 = *(long **)pcVar12;
        FUN_00c44438(lVar18 + 0x8040,&local_68);
      }
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  plVar9 = local_120;
  if (local_120 != (long *)0x0) {
    plVar5 = local_120 + 3;
    do {
      sVar15 = (short)*plVar5;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar8) {
        *(short *)plVar5 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      piVar3 = (int *)((long)local_120 + 0x1c);
      do {
        iVar13 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_68 = (long *)*plVar9;
        FUN_00c44438(lVar18 + 0x8040,&local_68);
      }
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  if (plVar17 != (long *)0x0) {
    lVar18 = plVar17[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar17 + 0x50))(plVar17);
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  plVar9 = local_150;
  lVar18 = *param_1;
  if (lVar18 != 0) {
    lVar16 = *(long *)(lVar18 + 0x30);
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_02c3b9d8;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar14;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar15 == -1) goto LAB_02c3b9d8;
  }
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,plVar9 + 6);
  local_88 = (undefined8 *)0x0;
  pcStack_80 = (char *)0x0;
  plVar5 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    plVar5 = plVar9 + 5;
  }
  if (*(long **)(local_110 + 0x10) == plVar5) {
    FUN_015d2a6c(&local_88,&local_110);
  }
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar2 = local_110 + 0x18;
    do {
      sVar15 = *(short *)pcVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar8) {
        *(short *)pcVar2 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar13 = *(int *)pcVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar8) {
          *(int *)pcVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_140 = *(undefined8 **)pcVar12;
        FUN_00c44438(lVar16 + 0x8040,&local_140);
      }
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  puVar10 = local_88;
  if (local_88 == (undefined8 *)0x0) {
    plVar17 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_88 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_88 + 0x1a);
      sVar15 = *(short *)((long)local_88 + 0x1a);
      do {
        sVar6 = *psVar1;
        if (sVar6 == sVar15) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar15 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_02c3b8dc;
          bVar8 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02c3b8dc:
          bVar8 = false;
        }
        if (bVar8) {
          plVar17 = (long *)0x0;
          if (local_88[2] != 0) {
            plVar17 = (long *)(local_88[2] + -0x28);
          }
          goto LAB_02c3b984;
        }
        sVar15 = sVar6;
      } while (sVar6 != 0);
    }
    plVar17 = (long *)0x0;
LAB_02c3b984:
    psVar1 = (short *)(local_88 + 3);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      piVar3 = (int *)((long)local_88 + 0x1c);
      do {
        iVar13 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_110 = (code *)*puVar10;
        FUN_00c44438(lVar16 + 0x8040,&local_110);
      }
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  local_140 = (undefined8 *)((ulong)local_140 & 0xffffffff00000000);
  local_88 = (undefined8 *)0xd75b89d663f4ff88;
  pcStack_80 = "OnCancelSeqCatch";
  local_78 = 0x10;
  local_70 = (long *)0x0;
  if (plVar17 == (long *)0x0) {
    local_f0 = (long *)0x0;
  }
  else {
    lVar16 = plVar17[6];
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_02c3b9d8;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar14;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar15 == -1) goto LAB_02c3b9d8;
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    lVar16 = plVar17[6];
    local_f0 = plVar17;
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_02c3b9d8;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar14;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar15 == -1) goto LAB_02c3b9d8;
  }
  local_110 = (code *)&LAB_02c3e714;
  local_108 = FUN_02c3f05c;
  local_100 = FUN_02c3f934;
  local_f8 = FUN_02c3fa34;
  local_e8 = lVar18;
  FUN_015d1ba8(&local_148,&local_88,&local_140,&local_110);
  pcVar12 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    (*pcVar12)(&local_f0);
  }
  if (plVar17 != (long *)0x0) {
    lVar18 = plVar17[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar17 + 0x50))(plVar17);
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  plVar4 = local_148;
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,plVar9 + 6);
  local_140 = (undefined8 *)0x0;
  pcStack_138 = (char *)0x0;
  if (*(long **)(local_110 + 0x10) == plVar5) {
    FUN_015d2a6c(&local_140,&local_110);
  }
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar2 = local_110 + 0x18;
    do {
      sVar15 = *(short *)pcVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar8) {
        *(short *)pcVar2 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar13 = *(int *)pcVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar8) {
          *(int *)pcVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_120 = *(long **)pcVar12;
        FUN_00c44438(lVar18 + 0x8040,&local_120);
      }
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  FUN_0177de7c(&local_110,&local_140);
  if ((((char)plVar4[0x28] != '\0') && (local_110 != (code *)0x0)) &&
     (*(long *)(local_110 + 0x10) != 0)) {
    (**(code **)(*(long *)(*(long *)(local_110 + 0x10) + -0x28) + 0x78))();
  }
  FUN_0154631c(plVar4 + 0x26,&local_110);
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar2 = local_110 + 0x18;
    do {
      sVar15 = *(short *)pcVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar8) {
        *(short *)pcVar2 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar13 = *(int *)pcVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar8) {
          *(int *)pcVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_120 = *(long **)pcVar12;
        FUN_00c44438(lVar18 + 0x8040,&local_120);
      }
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  puVar10 = local_140;
  if (local_140 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_140 + 3);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      piVar3 = (int *)((long)local_140 + 0x1c);
      do {
        iVar13 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_120 = (long *)*puVar10;
        FUN_00c44438(lVar18 + 0x8040,&local_120);
      }
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  if (plVar17 != (long *)0x0) {
    lVar18 = plVar17[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar17 + 0x50))(plVar17);
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  plVar9 = local_148;
  lVar18 = *param_1;
  if (lVar18 != 0) {
    lVar16 = *(long *)(lVar18 + 0x30);
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_02c3b9d8;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar14;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar15 == -1) goto LAB_02c3b9d8;
  }
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,plVar9 + 6);
  local_88 = (undefined8 *)0x0;
  pcStack_80 = (char *)0x0;
  plVar5 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    plVar5 = plVar9 + 5;
  }
  if (*(long **)(local_110 + 0x10) == plVar5) {
    FUN_015d2a6c(&local_88,&local_110);
  }
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar2 = local_110 + 0x18;
    do {
      sVar15 = *(short *)pcVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar8) {
        *(short *)pcVar2 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar13 = *(int *)pcVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar8) {
          *(int *)pcVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_140 = *(undefined8 **)pcVar12;
        FUN_00c44438(lVar16 + 0x8040,&local_140);
      }
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  puVar10 = local_88;
  if (local_88 == (undefined8 *)0x0) {
    plVar17 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_88 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_88 + 0x1a);
      sVar15 = *(short *)((long)local_88 + 0x1a);
      do {
        sVar6 = *psVar1;
        if (sVar6 == sVar15) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar15 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_02c3b928;
          bVar8 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02c3b928:
          bVar8 = false;
        }
        if (bVar8) {
          plVar17 = (long *)0x0;
          if (local_88[2] != 0) {
            plVar17 = (long *)(local_88[2] + -0x28);
          }
          goto LAB_02c3b9b8;
        }
        sVar15 = sVar6;
      } while (sVar6 != 0);
    }
    plVar17 = (long *)0x0;
LAB_02c3b9b8:
    psVar1 = (short *)(local_88 + 3);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      piVar3 = (int *)((long)local_88 + 0x1c);
      do {
        iVar13 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_110 = (code *)*puVar10;
        FUN_00c44438(lVar16 + 0x8040,&local_110);
      }
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  local_140 = (undefined8 *)((ulong)local_140 & 0xffffffff00000000);
  local_88 = (undefined8 *)0xe988642af1810e4e;
  pcStack_80 = "OnCancelSeqCanceled";
  local_78 = 0x13;
  local_70 = (long *)0x0;
  if (plVar17 == (long *)0x0) {
    local_f0 = (long *)0x0;
  }
  else {
    lVar16 = plVar17[6];
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_02c3b9d8;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar14;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar15 == -1) goto LAB_02c3b9d8;
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    lVar16 = plVar17[6];
    local_f0 = plVar17;
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_02c3b9d8;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar14;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar15 == -1) goto LAB_02c3b9d8;
  }
  local_110 = (code *)&LAB_02c3fae0;
  local_108 = FUN_02c4032c;
  local_100 = FUN_02c40ad0;
  local_f8 = FUN_02c40bd0;
  local_e8 = lVar18;
  FUN_015d1ba8(&local_68,&local_88,&local_140,&local_110);
  pcVar12 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    (*pcVar12)(&local_f0);
  }
  if (plVar17 != (long *)0x0) {
    lVar18 = plVar17[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar17 + 0x50))(plVar17);
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  plVar4 = local_68;
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,plVar9 + 6);
  local_140 = (undefined8 *)0x0;
  pcStack_138 = (char *)0x0;
  if (*(long **)(local_110 + 0x10) == plVar5) {
    FUN_015d2a6c(&local_140,&local_110);
  }
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar2 = local_110 + 0x18;
    do {
      sVar15 = *(short *)pcVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar8) {
        *(short *)pcVar2 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar13 = *(int *)pcVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar8) {
          *(int *)pcVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_120 = *(long **)pcVar12;
        FUN_00c44438(lVar18 + 0x8040,&local_120);
      }
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  FUN_0177de7c(&local_110,&local_140);
  if ((((char)plVar4[0x28] != '\0') && (local_110 != (code *)0x0)) &&
     (*(long *)(local_110 + 0x10) != 0)) {
    (**(code **)(*(long *)(*(long *)(local_110 + 0x10) + -0x28) + 0x78))();
  }
  FUN_0154631c(plVar4 + 0x26,&local_110);
  pcVar12 = local_110;
  if (local_110 != (code *)0x0) {
    pcVar2 = local_110 + 0x18;
    do {
      sVar15 = *(short *)pcVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar8) {
        *(short *)pcVar2 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      pcVar2 = local_110 + 0x1c;
      do {
        iVar13 = *(int *)pcVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar8) {
          *(int *)pcVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_120 = *(long **)pcVar12;
        FUN_00c44438(lVar18 + 0x8040,&local_120);
      }
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  puVar10 = local_140;
  if (local_140 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_140 + 3);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      piVar3 = (int *)((long)local_140 + 0x1c);
      do {
        iVar13 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_120 = (long *)*puVar10;
        FUN_00c44438(lVar18 + 0x8040,&local_120);
      }
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  if (plVar17 != (long *)0x0) {
    lVar18 = plVar17[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar17 + 0x50))(plVar17);
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  if (local_68 != (long *)0x0) {
    lVar18 = local_68[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*local_68 + 0x50))();
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  if (local_148 != (long *)0x0) {
    lVar18 = local_148[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*local_148 + 0x50))();
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  if (local_150 != (long *)0x0) {
    lVar18 = local_150[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*local_150 + 0x50))();
    }
    else if (sVar15 == 0) goto LAB_02c3b9d8;
  }
  if (local_158 != (long *)0x0) {
    lVar18 = local_158[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*local_158 + 0x50))();
    }
    else if (sVar15 == 0) {
LAB_02c3b9d8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  if (*(long *)(param_1[2] + 0x40) != 0) {
    FUN_01e83db8();
  }
  return;
}


