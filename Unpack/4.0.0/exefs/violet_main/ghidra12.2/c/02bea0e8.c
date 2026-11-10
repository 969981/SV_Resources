/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02bea0e8; name: FUN_02bea0e8
 */


void FUN_02bea0e8(undefined2 *param_1)

{
  short *psVar1;
  long *plVar2;
  code *pcVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  short sVar8;
  char cVar9;
  bool bVar10;
  code *pcVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  short sVar16;
  long *plVar17;
  long *local_150;
  long *local_148;
  char *pcStack_140;
  undefined8 local_138;
  long *local_130;
  long *local_128;
  char *pcStack_120;
  undefined8 local_118;
  long *local_110;
  undefined1 auStack_108 [8];
  long *local_100;
  long *local_f8;
  long lStack_f0;
  long local_e8;
  long *local_e0;
  long *local_d8;
  code *local_d0;
  code *local_c8;
  code *local_c0;
  code *local_b8;
  long *local_b0;
  char *local_a8;
  undefined8 local_a0;
  long *plStack_98;
  undefined1 auStack_90 [64];
  undefined4 local_38;
  undefined2 local_34 [2];
  
  local_34[0] = *param_1;
  local_148 = (long *)0x7ffa5533b9781f92;
  pcStack_140 = "WaitMember";
  local_138 = 10;
  local_130 = (long *)0x0;
  local_38 = 1;
  if (((*PTR_DAT_047da868 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047da868), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047daa50,PTR_DAT_047da870,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da868);
  }
  lVar14 = *(long *)PTR_DAT_047da870;
  *(long *)PTR_DAT_047da878 = lVar14;
  FUN_027cde00(&local_d8,*(undefined8 *)(lVar14 + 0x28),local_34);
  FUN_01050714(&local_100,&local_148);
  plVar6 = local_100;
  local_f8 = (long *)PTR_DAT_047d8b70;
  if (local_100 != (long *)0x0) {
    local_f8 = local_100 + 6;
  }
  local_f8 = (long *)*local_f8;
  plVar5 = (long *)PTR_PTR_047d4508;
  if (local_100 != (long *)0x0) {
    plVar5 = local_100 + 7;
  }
  lStack_f0 = *plVar5;
  if (local_100 == (long *)0x0) {
    local_e8 = 0;
  }
  else {
    local_e8 = local_100[8];
  }
  local_e0 = (long *)0x0;
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x18))(local_100);
  }
  local_e0 = plVar6;
  local_128 = local_148;
  pcStack_120 = pcStack_140;
  local_118 = local_138;
  local_110 = local_130;
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x18))();
  }
  FUN_028561b4(auStack_108,&local_d8);
  plStack_98 = local_110;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_d0 = (code *)0x0;
  local_c8 = (code *)0x0;
  local_b0 = local_128;
  local_a8 = pcStack_120;
  local_110 = (long *)0x0;
  local_a0 = local_118;
  FUN_028561b4(auStack_90,auStack_108);
  local_d0 = FUN_02beaf54;
  local_c8 = FUN_02beb090;
  local_c0 = FUN_02beb0d0;
  local_b8 = (code *)&LAB_02beb128;
  FUN_015d1ba8(&local_150,&local_f8,&local_38,&local_d0);
  pcVar11 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar11)(&local_b0);
  }
  FUN_02856354(auStack_108);
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  FUN_02856354(&local_d8);
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  plVar7 = local_150;
  plVar6 = local_150 + 6;
  local_d0 = (code *)0x0;
  local_c8 = (code *)0x0;
  FUN_00c43ef0(&local_d0,plVar6);
  local_128 = (long *)0x0;
  pcStack_120 = (char *)0x0;
  plVar5 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 5;
  }
  if (*(long **)(local_d0 + 0x10) == plVar5) {
    FUN_015d2a6c(&local_128,&local_d0);
  }
  pcVar11 = local_d0;
  if (local_d0 != (code *)0x0) {
    pcVar3 = local_d0 + 0x18;
    do {
      sVar16 = *(short *)pcVar3;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
      if (bVar10) {
        *(short *)pcVar3 = sVar16 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar16 == 1) {
      pcVar3 = local_d0 + 0x1c;
      do {
        iVar12 = *(int *)pcVar3;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
        if (bVar10) {
          *(int *)pcVar3 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_f8 = *(long **)pcVar11;
        FUN_00c44438(lVar14 + 0x8040,&local_f8);
      }
    }
    else if (sVar16 == 0) goto LAB_02bea8bc;
  }
  plVar7 = local_128;
  if (local_128 == (long *)0x0) {
    plVar17 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_128 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_128 + 0x1a);
      sVar16 = *(short *)((long)local_128 + 0x1a);
      do {
        sVar8 = *psVar1;
        if (sVar8 == sVar16) {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar16 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 != '\0') goto LAB_02bea874;
          bVar10 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02bea874:
          bVar10 = false;
        }
        if (bVar10) {
          plVar17 = (long *)0x0;
          if (local_128[2] != 0) {
            plVar17 = (long *)(local_128[2] + -0x28);
          }
          goto LAB_02bea89c;
        }
        sVar16 = sVar8;
      } while (sVar8 != 0);
    }
    plVar17 = (long *)0x0;
LAB_02bea89c:
    plVar2 = local_128 + 3;
    do {
      sVar16 = (short)*plVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar10) {
        *(short *)plVar2 = sVar16 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar16 == 1) {
      piVar4 = (int *)((long)local_128 + 0x1c);
      do {
        iVar12 = *piVar4;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar10) {
          *piVar4 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_d0 = (code *)*plVar7;
        FUN_00c44438(lVar14 + 0x8040,&local_d0);
      }
    }
    else if (sVar16 == 0) goto LAB_02bea8bc;
  }
  local_f8 = (long *)((ulong)local_f8 & 0xffffffff00000000);
  local_128 = (long *)0x105187d27664fdc8;
  pcStack_120 = "Timeout";
  local_118 = 7;
  local_110 = (long *)0x0;
  if (plVar17 == (long *)0x0) {
    local_b0 = (long *)0x0;
  }
  else {
    lVar14 = plVar17[6];
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_02bea8bc;
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar16 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_02bea8bc;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    lVar14 = plVar17[6];
    local_b0 = plVar17;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_02bea8bc;
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar16 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_02bea8bc;
  }
  local_a8 = (char *)CONCAT62(local_a8._2_6_,25000);
  local_d0 = (code *)&LAB_02beb15c;
  local_c8 = FUN_02bebcb0;
  local_c0 = FUN_02becaac;
  local_b8 = FUN_02becb54;
  FUN_015d1ba8(&local_d8,&local_128,&local_f8,&local_d0);
  pcVar11 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar11)(&local_b0);
  }
  if (plVar17 != (long *)0x0) {
    lVar14 = plVar17[6];
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar16 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar16 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar17 + 0x50))(plVar17);
    }
    else if (sVar16 == 0) goto LAB_02bea8bc;
  }
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x20))();
  }
  plVar7 = local_d8;
  local_d0 = (code *)0x0;
  local_c8 = (code *)0x0;
  FUN_00c43ef0(&local_d0,plVar6);
  local_f8 = (long *)0x0;
  lStack_f0 = 0;
  if (*(long **)(local_d0 + 0x10) == plVar5) {
    FUN_015d2a6c(&local_f8,&local_d0);
  }
  pcVar11 = local_d0;
  if (local_d0 != (code *)0x0) {
    pcVar3 = local_d0 + 0x18;
    do {
      sVar16 = *(short *)pcVar3;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
      if (bVar10) {
        *(short *)pcVar3 = sVar16 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar16 == 1) {
      pcVar3 = local_d0 + 0x1c;
      do {
        iVar12 = *(int *)pcVar3;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
        if (bVar10) {
          *(int *)pcVar3 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_148 = *(long **)pcVar11;
        FUN_00c44438(lVar14 + 0x8040,&local_148);
      }
    }
    else if (sVar16 == 0) goto LAB_02bea8bc;
  }
  local_d0 = (code *)0x0;
  local_c8 = (code *)0x0;
  FUN_0177de7c(&local_d0,&local_f8);
  if ((((char)plVar7[0x28] != '\0') && (local_d0 != (code *)0x0)) &&
     (*(long *)(local_d0 + 0x10) != 0)) {
    (**(code **)(*(long *)(*(long *)(local_d0 + 0x10) + -0x28) + 0x78))();
  }
  FUN_0154631c(plVar7 + 0x26,&local_d0);
  pcVar11 = local_d0;
  if (local_d0 != (code *)0x0) {
    pcVar3 = local_d0 + 0x18;
    do {
      sVar16 = *(short *)pcVar3;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
      if (bVar10) {
        *(short *)pcVar3 = sVar16 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar16 == 1) {
      pcVar3 = local_d0 + 0x1c;
      do {
        iVar12 = *(int *)pcVar3;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
        if (bVar10) {
          *(int *)pcVar3 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_148 = *(long **)pcVar11;
        FUN_00c44438(lVar14 + 0x8040,&local_148);
      }
    }
    else if (sVar16 == 0) goto LAB_02bea8bc;
  }
  plVar6 = local_f8;
  if (local_f8 != (long *)0x0) {
    plVar5 = local_f8 + 3;
    do {
      sVar16 = (short)*plVar5;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar10) {
        *(short *)plVar5 = sVar16 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar16 == 1) {
      piVar4 = (int *)((long)local_f8 + 0x1c);
      do {
        iVar12 = *piVar4;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar10) {
          *piVar4 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_148 = (long *)*plVar6;
        FUN_00c44438(lVar14 + 0x8040,&local_148);
      }
    }
    else if (sVar16 == 0) goto LAB_02bea8bc;
  }
  if (plVar17 != (long *)0x0) {
    lVar14 = plVar17[6];
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar16 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar16 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar17 + 0x50))(plVar17);
    }
    else if (sVar16 == 0) goto LAB_02bea8bc;
  }
  if (local_150 != (long *)0x0) {
    lVar14 = local_150[6];
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar16 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar16 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*local_150 + 0x50))();
    }
    else if (sVar16 == 0) goto LAB_02bea8bc;
  }
  FUN_0177dc44(&local_d0,*(undefined8 *)(param_1 + 8));
  pcVar11 = local_d0;
  if (local_d0 != (code *)0x0) {
    lVar14 = *(long *)(local_d0 + 0x10);
    plVar6 = (long *)0x0;
    if (lVar14 != 0) {
      plVar6 = (long *)(lVar14 + -0x28);
    }
    pcVar3 = local_d0 + 0x18;
    do {
      sVar16 = *(short *)pcVar3;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
      if (bVar10) {
        *(short *)pcVar3 = sVar16 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar16 == 1) {
      pcVar3 = local_d0 + 0x1c;
      do {
        iVar12 = *(int *)pcVar3;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
        if (bVar10) {
          *(int *)pcVar3 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_128 = *(long **)pcVar11;
        FUN_00c44438(lVar15 + 0x8040,&local_128);
      }
    }
    else if (sVar16 == 0) goto LAB_02bea8bc;
    plVar5 = local_d8;
    if (lVar14 != 0) {
      local_d0 = (code *)0x0;
      local_c8 = (code *)0x0;
      FUN_00c43ef0(&local_d0,local_d8 + 6);
      local_128 = (long *)0x0;
      pcStack_120 = (char *)0x0;
      plVar7 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        plVar7 = plVar5 + 5;
      }
      if (*(long **)(local_d0 + 0x10) == plVar7) {
        FUN_015d2a6c(&local_128,&local_d0);
      }
      pcVar11 = local_d0;
      if (local_d0 != (code *)0x0) {
        pcVar3 = local_d0 + 0x18;
        do {
          sVar16 = *(short *)pcVar3;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar10) {
            *(short *)pcVar3 = sVar16 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar16 == 1) {
          pcVar3 = local_d0 + 0x1c;
          do {
            iVar12 = *(int *)pcVar3;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
            if (bVar10) {
              *(int *)pcVar3 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar14 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar14;
            local_f8 = *(long **)pcVar11;
            FUN_00c44438(lVar14 + 0x8040,&local_f8);
          }
        }
        else if (sVar16 == 0) goto LAB_02bea8bc;
      }
      local_d0 = (code *)0x0;
      local_c8 = (code *)0x0;
      FUN_0177de7c(&local_d0,&local_128);
      (**(code **)(*plVar6 + 0x90))(plVar6,&local_d0);
      pcVar11 = local_d0;
      if (local_d0 != (code *)0x0) {
        pcVar3 = local_d0 + 0x18;
        do {
          sVar16 = *(short *)pcVar3;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar10) {
            *(short *)pcVar3 = sVar16 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar16 == 1) {
          pcVar3 = local_d0 + 0x1c;
          do {
            iVar12 = *(int *)pcVar3;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
            if (bVar10) {
              *(int *)pcVar3 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar14 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar14;
            local_f8 = *(long **)pcVar11;
            FUN_00c44438(lVar14 + 0x8040,&local_f8);
          }
        }
        else if (sVar16 == 0) goto LAB_02bea8bc;
      }
      plVar6 = local_128;
      if (local_128 != (long *)0x0) {
        plVar5 = local_128 + 3;
        do {
          sVar16 = (short)*plVar5;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar10) {
            *(short *)plVar5 = sVar16 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar16 == 1) {
          piVar4 = (int *)((long)local_128 + 0x1c);
          do {
            iVar12 = *piVar4;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar10) {
              *piVar4 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar14 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar14;
            local_f8 = (long *)*plVar6;
            FUN_00c44438(lVar14 + 0x8040,&local_f8);
          }
        }
        else if (sVar16 == 0) goto LAB_02bea8bc;
      }
    }
  }
  plVar6 = local_d8;
  FUN_0191d764(local_d8 + 0x1e,param_1 + 4);
  if ((int)plVar6[9] - 1U < 3) {
    FUN_0174a3b8(plVar6);
  }
  if (local_d8 != (long *)0x0) {
    lVar14 = local_d8[6];
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar16 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar16 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*local_d8 + 0x50))();
    }
    else if (sVar16 == 0) {
LAB_02bea8bc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


