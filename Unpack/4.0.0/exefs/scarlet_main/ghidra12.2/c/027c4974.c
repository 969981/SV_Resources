/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027c4974; name: FUN_027c4974
 */


void FUN_027c4974(undefined8 param_1,long param_2,undefined8 param_3)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  code *pcVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 uVar12;
  short sVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 local_218;
  char *pcStack_210;
  undefined8 local_208;
  long *local_200;
  byte local_1f8;
  undefined7 uStack_1f7;
  undefined8 local_1e8;
  long *plStack_1e0;
  undefined1 auStack_1d8 [16];
  byte local_1c8;
  undefined7 uStack_1c7;
  undefined8 local_1b8;
  long *plStack_1b0;
  undefined1 auStack_1a0 [40];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  char *pcStack_160;
  undefined8 local_158;
  long *local_150;
  undefined8 local_148;
  char *pcStack_140;
  undefined8 local_138;
  long *local_130;
  long *local_128;
  long *local_120;
  long *local_118;
  long *local_110;
  undefined8 uStack_108;
  long *local_100;
  code *local_f8;
  code *local_f0;
  code *local_e8;
  long *local_e0;
  long local_d8;
  undefined8 *local_78;
  char *pcStack_70;
  long local_68;
  long *local_60;
  undefined8 local_58;
  
  local_148 = 0x5f3a9f86b611a6e;
  pcStack_140 = "StartupSession";
  local_138 = 0xe;
  local_130 = (long *)0x0;
  FUN_027c20b8(&local_128,&local_148,*(undefined8 *)(param_2 + 0x70));
  plVar15 = local_128;
  local_168 = 0x4009dc70b1776ef1;
  pcStack_160 = "BrowseSession";
  local_158 = 0xd;
  local_150 = (long *)0x0;
  local_178 = 0;
  uStack_170 = 0;
  FUN_027c2138(&local_178,param_2 + 0x78);
  FUN_027c5768(&local_1f8,param_3);
  FUN_027c585c(&local_120,plVar15,&local_168,&local_178,&local_1f8);
  plVar14 = local_120;
  local_218 = 0x86ea4d83239ef7f8;
  pcStack_210 = "PickSessionInfo";
  plVar15 = local_120 + 6;
  local_208 = 0xf;
  local_200 = (long *)0x0;
  local_100 = (long *)0x0;
  local_f8 = (code *)0x0;
  FUN_00c43ef0(&local_100,plVar15);
  local_78 = (undefined8 *)0x0;
  pcStack_70 = (char *)0x0;
  plVar3 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    plVar3 = plVar14 + 5;
  }
  if ((long *)local_100[2] == plVar3) {
    FUN_015d2a6c(&local_78,&local_100);
  }
  plVar14 = local_100;
  if (local_100 != (long *)0x0) {
    plVar4 = local_100 + 3;
    do {
      sVar13 = (short)*plVar4;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar7) {
        *(short *)plVar4 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_100 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_110 = (long *)*plVar14;
        FUN_00c44438(lVar16 + 0x8040,&local_110);
      }
    }
    else if (sVar13 == 0) goto LAB_027c5010;
  }
  puVar10 = local_78;
  if (local_78 == (undefined8 *)0x0) {
    plVar14 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_78 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_78 + 0x1a);
      sVar13 = *(short *)((long)local_78 + 0x1a);
      do {
        sVar5 = *psVar1;
        if (sVar5 == sVar13) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar13 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_027c518c;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_027c518c:
          bVar7 = false;
        }
        if (bVar7) {
          plVar14 = (long *)0x0;
          if (local_78[2] != 0) {
            plVar14 = (long *)(local_78[2] + -0x28);
          }
          goto LAB_027c5200;
        }
        sVar13 = sVar5;
      } while (sVar5 != 0);
    }
    plVar14 = (long *)0x0;
LAB_027c5200:
    psVar1 = (short *)(local_78 + 3);
    do {
      sVar13 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_78 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_100 = (long *)*puVar10;
        FUN_00c44438(lVar16 + 0x8040,&local_100);
      }
    }
    else if (sVar13 == 0) goto LAB_027c5010;
  }
  FUN_01050714(&local_110,&local_218);
  plVar8 = local_110;
  plVar4 = (long *)PTR_DAT_047d8b70;
  if (local_110 != (long *)0x0) {
    plVar4 = local_110 + 6;
  }
  local_78 = (undefined8 *)*plVar4;
  plVar4 = (long *)PTR_PTR_047d4508;
  if (local_110 != (long *)0x0) {
    plVar4 = local_110 + 7;
  }
  pcStack_70 = (char *)*plVar4;
  if (local_110 == (long *)0x0) {
    local_68 = 0;
  }
  else {
    local_68 = local_110[8];
  }
  local_60 = (long *)0x0;
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x18))(local_110);
  }
  local_60 = plVar8;
  local_58 = (ulong)local_58._4_4_ << 0x20;
  if (plVar14 == (long *)0x0) {
    local_e0 = (long *)0x0;
  }
  else {
    lVar16 = plVar14[6];
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_027c5010;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar12;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar13 == -1) goto LAB_027c5010;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_100 = (long *)0x0;
    local_f8 = (code *)0x0;
    lVar16 = plVar14[6];
    local_e0 = plVar14;
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_027c5010;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar12;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar13 == -1) goto LAB_027c5010;
  }
  local_100 = (long *)&LAB_02c17bf0;
  local_f8 = FUN_02c18874;
  local_f0 = FUN_02c19b40;
  local_e8 = FUN_02c19be8;
  local_d8 = param_2;
  FUN_015d1ba8(&local_118,&local_78,&local_58,&local_100);
  pcVar9 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_100 = (long *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar9)(&local_e0);
  }
  if (plVar14 != (long *)0x0) {
    lVar16 = plVar14[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))(plVar14);
    }
    else if (sVar13 == 0) goto LAB_027c5010;
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x20))();
  }
  plVar4 = local_118;
  local_100 = (long *)0x0;
  local_f8 = (code *)0x0;
  FUN_00c43ef0(&local_100,plVar15);
  local_110 = (long *)0x0;
  uStack_108 = 0;
  if ((long *)local_100[2] == plVar3) {
    FUN_015d2a6c(&local_110,&local_100);
  }
  plVar15 = local_100;
  if (local_100 != (long *)0x0) {
    plVar3 = local_100 + 3;
    do {
      sVar13 = (short)*plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(short *)plVar3 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_100 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_58 = *plVar15;
        FUN_00c44438(lVar16 + 0x8040,&local_58);
      }
    }
    else if (sVar13 == 0) goto LAB_027c5010;
  }
  local_100 = (long *)0x0;
  local_f8 = (code *)0x0;
  FUN_0177de7c(&local_100,&local_110);
  if ((((char)plVar4[0x28] != '\0') && (local_100 != (long *)0x0)) && (local_100[2] != 0)) {
    (**(code **)(*(long *)(local_100[2] + -0x28) + 0x78))();
  }
  FUN_0154631c(plVar4 + 0x26,&local_100);
  plVar15 = local_100;
  if (local_100 != (long *)0x0) {
    plVar3 = local_100 + 3;
    do {
      sVar13 = (short)*plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(short *)plVar3 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_100 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_58 = *plVar15;
        FUN_00c44438(lVar16 + 0x8040,&local_58);
      }
    }
    else if (sVar13 == 0) goto LAB_027c5010;
  }
  plVar15 = local_110;
  if (local_110 != (long *)0x0) {
    plVar3 = local_110 + 3;
    do {
      sVar13 = (short)*plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(short *)plVar3 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_110 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_58 = *plVar15;
        FUN_00c44438(lVar16 + 0x8040,&local_58);
      }
    }
    else if (sVar13 == 0) goto LAB_027c5010;
  }
  if (plVar14 != (long *)0x0) {
    lVar16 = plVar14[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))(plVar14);
    }
    else if (sVar13 == 0) goto LAB_027c5010;
  }
  plVar3 = local_118;
  local_100 = (long *)0x0;
  local_f8 = (code *)0x0;
  FUN_00c43ef0(&local_100,local_118 + 6);
  local_78 = (undefined8 *)0x0;
  pcStack_70 = (char *)0x0;
  plVar15 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = plVar3 + 5;
  }
  if ((long *)local_100[2] == plVar15) {
    FUN_015d2a6c(&local_78,&local_100);
  }
  plVar15 = local_100;
  if (local_100 != (long *)0x0) {
    plVar3 = local_100 + 3;
    do {
      sVar13 = (short)*plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(short *)plVar3 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_100 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_110 = (long *)*plVar15;
        FUN_00c44438(lVar16 + 0x8040,&local_110);
      }
    }
    else if (sVar13 == 0) goto LAB_027c5010;
  }
  puVar10 = local_78;
  if (local_78 == (undefined8 *)0x0) {
    plVar15 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_78 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_78 + 0x1a);
      sVar13 = *(short *)((long)local_78 + 0x1a);
      do {
        sVar5 = *psVar1;
        if (sVar5 == sVar13) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar13 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_027c51d8;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_027c51d8:
          bVar7 = false;
        }
        if (bVar7) {
          plVar15 = (long *)0x0;
          if (local_78[2] != 0) {
            plVar15 = (long *)(local_78[2] + -0x28);
          }
          goto LAB_027c5234;
        }
        sVar13 = sVar5;
      } while (sVar5 != 0);
    }
    plVar15 = (long *)0x0;
LAB_027c5234:
    psVar1 = (short *)(local_78 + 3);
    do {
      sVar13 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_78 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_100 = (long *)*puVar10;
        FUN_00c44438(lVar16 + 0x8040,&local_100);
      }
    }
    else if (sVar13 == 0) goto LAB_027c5010;
  }
  local_110 = (long *)((ulong)local_110 & 0xffffffff00000000);
  local_78 = (undefined8 *)0xac19ec5dd305f32b;
  pcStack_70 = "RandomMatchingCancel";
  local_68 = 0x14;
  local_60 = (long *)0x0;
  if (plVar15 == (long *)0x0) {
    local_e0 = (long *)0x0;
  }
  else {
    lVar16 = plVar15[6];
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_027c5010;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar12;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar13 == -1) goto LAB_027c5010;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_100 = (long *)0x0;
    local_f8 = (code *)0x0;
    lVar16 = plVar15[6];
    local_e0 = plVar15;
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_027c5010;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar12;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar13 == -1) goto LAB_027c5010;
  }
  local_100 = (long *)&LAB_02c19c90;
  local_f8 = FUN_02c1b7f4;
  local_f0 = (code *)&LAB_02c26044;
  local_e8 = (code *)&LAB_02c260ec;
  local_d8 = param_2;
  FUN_015d1ba8(param_1,&local_78,&local_110,&local_100);
  pcVar9 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_100 = (long *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar9)(&local_e0);
  }
  if (plVar15 != (long *)0x0) {
    lVar16 = plVar15[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar15 + 0x50))(plVar15);
    }
    else if (sVar13 == 0) goto LAB_027c5010;
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (plVar15 != (long *)0x0) {
    lVar16 = plVar15[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar15 + 0x50))(plVar15);
    }
    else if (sVar13 == 0) goto LAB_027c5010;
  }
  if (local_118 != (long *)0x0) {
    lVar16 = local_118[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*local_118 + 0x50))();
    }
    else if (sVar13 == 0) goto LAB_027c5010;
  }
  if (local_200 != (long *)0x0) {
    (**(code **)(*local_200 + 0x20))();
  }
  if (local_120 != (long *)0x0) {
    lVar16 = local_120[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*local_120 + 0x50))();
    }
    else if (sVar13 == 0) goto LAB_027c5010;
  }
  FUN_01e75064(auStack_1a0);
  if ((local_1c8 & 1) != 0) {
    (**(code **)(*plStack_1b0 + 0x18))
              (plStack_1b0,local_1b8,CONCAT71(uStack_1c7,local_1c8) & 0xfffffffffffffffe,1);
  }
  FUN_01cfa410(auStack_1d8);
  if ((local_1f8 & 1) != 0) {
    (**(code **)(*plStack_1e0 + 0x18))
              (plStack_1e0,local_1e8,CONCAT71(uStack_1f7,local_1f8) & 0xfffffffffffffffe,1);
  }
  FUN_027bfe38(&local_178);
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x20))();
  }
  if (local_128 != (long *)0x0) {
    lVar16 = local_128[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*local_128 + 0x50))();
    }
    else if (sVar13 == 0) {
LAB_027c5010:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  return;
}


