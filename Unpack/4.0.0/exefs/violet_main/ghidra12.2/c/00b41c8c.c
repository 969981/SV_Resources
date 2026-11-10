/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b41c8c; name: FUN_00b41c8c
 */


void FUN_00b41c8c(undefined8 *param_1,long param_2,void *param_3,undefined2 param_4)

{
  long *plVar1;
  short *psVar2;
  code *pcVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  short sVar11;
  bool bVar12;
  long *plVar13;
  code *pcVar14;
  undefined8 *puVar15;
  int iVar16;
  long lVar17;
  short sVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined8 local_180;
  long *local_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined8 local_160;
  long *local_158;
  long *local_150;
  long *local_148;
  long *local_140;
  undefined2 local_138 [2];
  undefined2 local_134 [2];
  long *local_130;
  undefined8 uStack_128;
  code *local_120;
  code *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  long *local_100;
  long local_f8;
  long lStack_f0;
  undefined2 local_e8;
  undefined4 local_e6;
  undefined2 local_e2;
  undefined4 local_94;
  undefined8 *local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  undefined8 local_70;
  
  local_138[0] = 2;
  local_134[0] = param_4;
  lVar17 = FUN_01981264();
  if ((lVar17 != 0) && (*(long *)(param_2 + 0x48) != 0)) {
    memcpy((void *)(param_2 + 0x50),param_3,0x50);
    if (*(char *)(param_2 + 0xa0) == '\0') {
      if (*(char *)((long)param_3 + 0x50) != '\0') {
        memcpy((void *)(param_2 + 0xa4),(void *)((long)param_3 + 0x54),0x28);
        *(undefined1 *)(param_2 + 0xa0) = 1;
      }
    }
    else if (*(char *)((long)param_3 + 0x50) == '\0') {
      *(undefined1 *)(param_2 + 0xa0) = 0;
    }
    else {
      memcpy((void *)(param_2 + 0xa4),(void *)((long)param_3 + 0x54),0x28);
    }
    lVar21 = 0;
    do {
      lVar5 = param_2 + lVar21;
      cVar10 = *(char *)((long)param_3 + lVar21 + 0x80);
      if (*(char *)(lVar5 + 0xd0) == '\0') {
        if (cVar10 != '\0') {
          memcpy((void *)(lVar5 + 0xd8),(void *)((long)param_3 + lVar21 + 0x88),0x28);
          *(undefined1 *)(lVar5 + 0xd0) = 1;
        }
      }
      else if (cVar10 == '\0') {
        *(undefined1 *)(lVar5 + 0xd0) = 0;
      }
      else {
        uVar19 = *(undefined8 *)((long)param_3 + lVar21 + 0x88);
        uVar8 = *(undefined8 *)((long)param_3 + lVar21 + 0x90);
        uVar9 = *(undefined8 *)((long)param_3 + lVar21 + 0xa0);
        *(undefined8 *)(lVar5 + 0xe8) = *(undefined8 *)((long)param_3 + lVar21 + 0x98);
        *(undefined8 *)(lVar5 + 0xf0) = uVar9;
        *(undefined8 *)(lVar5 + 0xd8) = uVar19;
        *(undefined8 *)(lVar5 + 0xe0) = uVar8;
        *(undefined8 *)(lVar5 + 0xf8) = *(undefined8 *)((long)param_3 + lVar21 + 0xa8);
      }
      lVar21 = lVar21 + 0x30;
    } while (lVar21 != 0x480);
    FUN_01ee653c(&local_150);
    plVar20 = local_150;
    plVar1 = local_150 + 6;
    local_170 = &DAT_cbf29ce484222645;
    puStack_168 = &DAT_03c886bc;
    local_160 = 0;
    local_158 = (long *)0x0;
    local_120 = (code *)0x0;
    local_118 = (code *)0x0;
    FUN_00c43ef0(&local_120,plVar1);
    local_90 = (undefined8 *)0x0;
    lStack_88 = 0;
    plVar7 = (long *)0x0;
    if (plVar20 != (long *)0x0) {
      plVar7 = plVar20 + 5;
    }
    if (*(long **)(local_120 + 0x10) == plVar7) {
      FUN_015d2a6c(&local_90,&local_120);
    }
    pcVar14 = local_120;
    if (local_120 != (code *)0x0) {
      pcVar3 = local_120 + 0x18;
      do {
        sVar18 = *(short *)pcVar3;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
        if (bVar12) {
          *(short *)pcVar3 = sVar18 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar18 == 1) {
        pcVar3 = local_120 + 0x1c;
        do {
          iVar16 = *(int *)pcVar3;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar12) {
            *(int *)pcVar3 = -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar21 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar21;
          local_130 = *(long **)pcVar14;
          FUN_00c44438(lVar21 + 0x8040,&local_130);
        }
      }
      else if (sVar18 == 0) goto LAB_00b42748;
    }
    puVar15 = local_90;
    if (local_90 == (undefined8 *)0x0) {
      plVar20 = (long *)0x0;
    }
    else {
      if (*(short *)((long)local_90 + 0x1a) != 0) {
        psVar2 = (short *)((long)local_90 + 0x1a);
        sVar18 = *(short *)((long)local_90 + 0x1a);
        do {
          sVar11 = *psVar2;
          if (sVar11 == sVar18) {
            cVar10 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar12) {
              *psVar2 = sVar18 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
            if (cVar10 != '\0') goto LAB_00b42680;
            bVar12 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00b42680:
            bVar12 = false;
          }
          if (bVar12) {
            plVar20 = (long *)0x0;
            if (local_90[2] != 0) {
              plVar20 = (long *)(local_90[2] + -0x28);
            }
            goto LAB_00b426f4;
          }
          sVar18 = sVar11;
        } while (sVar11 != 0);
      }
      plVar20 = (long *)0x0;
LAB_00b426f4:
      psVar2 = (short *)(local_90 + 3);
      do {
        sVar18 = *psVar2;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar18 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar18 == 1) {
        piVar4 = (int *)((long)local_90 + 0x1c);
        do {
          iVar16 = *piVar4;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar12) {
            *piVar4 = -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar21 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar21;
          local_120 = (code *)*puVar15;
          FUN_00c44438(lVar21 + 0x8040,&local_120);
        }
      }
      else if (sVar18 == 0) goto LAB_00b42748;
    }
    FUN_01050714(&local_130,&local_170);
    plVar13 = local_130;
    plVar22 = (long *)PTR_DAT_047d8b70;
    plVar6 = (long *)PTR_DAT_047d8b70;
    if (local_130 != (long *)0x0) {
      plVar6 = local_130 + 6;
    }
    local_90 = (undefined8 *)*plVar6;
    plVar6 = (long *)PTR_PTR_047d4508;
    if (local_130 != (long *)0x0) {
      plVar6 = local_130 + 7;
    }
    lStack_88 = *plVar6;
    if (local_130 == (long *)0x0) {
      local_80 = 0;
    }
    else {
      local_80 = local_130[8];
    }
    local_78 = (long *)0x0;
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x18))(local_130);
    }
    local_78 = plVar13;
    local_70 = (ulong)local_70._4_4_ << 0x20;
    if (plVar20 == (long *)0x0) {
      local_100 = (long *)0x0;
    }
    else {
      lVar21 = plVar20[6];
      if (*(long *)(lVar21 + 0x10) == 0) goto LAB_00b42c24;
      psVar2 = (short *)(lVar21 + 0x1a);
      do {
        sVar18 = *psVar2;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar18 == 0) {
        uVar19 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
        *(undefined8 *)(lVar21 + 8) = uVar19;
        *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
      }
      else if (sVar18 == -1) goto LAB_00b42c44;
      local_110 = (undefined1 *)0x0;
      local_108 = (undefined1 *)0x0;
      local_120 = (code *)0x0;
      local_118 = (code *)0x0;
      lVar21 = plVar20[6];
      local_100 = plVar20;
      if (*(long *)(lVar21 + 0x10) == 0) goto LAB_00b42c24;
      psVar2 = (short *)(lVar21 + 0x1a);
      do {
        sVar18 = *psVar2;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar18 == 0) {
        uVar19 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
        *(undefined8 *)(lVar21 + 8) = uVar19;
        *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
        plVar22 = (long *)PTR_DAT_047d8b70;
      }
      else {
        plVar22 = (long *)PTR_DAT_047d8b70;
        if (sVar18 == -1) goto LAB_00b42c44;
      }
    }
    local_120 = FUN_00b42ec4;
    local_118 = FUN_00b43968;
    local_110 = &LAB_00b44c3c;
    local_108 = &LAB_00b44d14;
    local_f8 = lVar17;
    FUN_015d1ba8(&local_148,&local_90,&local_70,&local_120);
    pcVar14 = local_118;
    if (local_118 != (code *)0x0) {
      local_110 = (undefined1 *)0x0;
      local_108 = (undefined1 *)0x0;
      local_120 = (code *)0x0;
      local_118 = (code *)0x0;
      (*pcVar14)(&local_100);
    }
    if (plVar20 != (long *)0x0) {
      lVar21 = plVar20[6];
      psVar2 = (short *)(lVar21 + 0x1a);
      do {
        sVar18 = *psVar2;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar18 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar21 + 0x10) = 0;
        (**(code **)(*plVar20 + 0x50))(plVar20);
      }
      else if (sVar18 == 0) goto LAB_00b42bfc;
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x20))();
    }
    plVar6 = local_148;
    local_120 = (code *)0x0;
    local_118 = (code *)0x0;
    FUN_00c43ef0(&local_120,plVar1);
    local_130 = (long *)0x0;
    uStack_128 = 0;
    if (*(long **)(local_120 + 0x10) == plVar7) {
      FUN_015d2a6c(&local_130,&local_120);
    }
    pcVar14 = local_120;
    if (local_120 != (code *)0x0) {
      pcVar3 = local_120 + 0x18;
      do {
        sVar18 = *(short *)pcVar3;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
        if (bVar12) {
          *(short *)pcVar3 = sVar18 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar18 == 1) {
        pcVar3 = local_120 + 0x1c;
        do {
          iVar16 = *(int *)pcVar3;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar12) {
            *(int *)pcVar3 = -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar21 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar21;
          local_70 = *(long *)pcVar14;
          FUN_00c44438(lVar21 + 0x8040,&local_70);
        }
      }
      else if (sVar18 == 0) goto LAB_00b42748;
    }
    local_120 = (code *)0x0;
    local_118 = (code *)0x0;
    FUN_0177de7c(&local_120,&local_130);
    if ((((char)plVar6[0x28] != '\0') && (local_120 != (code *)0x0)) &&
       (*(long *)(local_120 + 0x10) != 0)) {
      (**(code **)(*(long *)(*(long *)(local_120 + 0x10) + -0x28) + 0x78))();
    }
    FUN_0154631c(plVar6 + 0x26,&local_120);
    pcVar14 = local_120;
    if (local_120 != (code *)0x0) {
      pcVar3 = local_120 + 0x18;
      do {
        sVar18 = *(short *)pcVar3;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
        if (bVar12) {
          *(short *)pcVar3 = sVar18 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar18 == 1) {
        pcVar3 = local_120 + 0x1c;
        do {
          iVar16 = *(int *)pcVar3;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar12) {
            *(int *)pcVar3 = -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar21 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar21;
          local_70 = *(long *)pcVar14;
          FUN_00c44438(lVar21 + 0x8040,&local_70);
        }
      }
      else if (sVar18 == 0) goto LAB_00b42748;
    }
    plVar1 = local_130;
    if (local_130 != (long *)0x0) {
      plVar7 = local_130 + 3;
      do {
        sVar18 = (short)*plVar7;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar12) {
          *(short *)plVar7 = sVar18 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar18 == 1) {
        piVar4 = (int *)((long)local_130 + 0x1c);
        do {
          iVar16 = *piVar4;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar12) {
            *piVar4 = -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar21 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar21;
          local_70 = *plVar1;
          FUN_00c44438(lVar21 + 0x8040,&local_70);
        }
      }
      else if (sVar18 == 0) goto LAB_00b42748;
    }
    if (plVar20 != (long *)0x0) {
      lVar21 = plVar20[6];
      psVar2 = (short *)(lVar21 + 0x1a);
      do {
        sVar18 = *psVar2;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar18 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar21 + 0x10) = 0;
        (**(code **)(*plVar20 + 0x50))(plVar20);
      }
      else if (sVar18 == 0) goto LAB_00b42bfc;
    }
    plVar20 = local_148;
    plVar1 = local_148 + 6;
    local_190 = &DAT_cbf29ce484222645;
    puStack_188 = &DAT_03c886bc;
    local_180 = 0;
    local_178 = (long *)0x0;
    local_120 = (code *)0x0;
    local_118 = (code *)0x0;
    FUN_00c43ef0(&local_120,plVar1);
    local_90 = (undefined8 *)0x0;
    lStack_88 = 0;
    plVar7 = (long *)0x0;
    if (plVar20 != (long *)0x0) {
      plVar7 = plVar20 + 5;
    }
    if (*(long **)(local_120 + 0x10) == plVar7) {
      FUN_015d2a6c(&local_90,&local_120);
    }
    pcVar14 = local_120;
    if (local_120 != (code *)0x0) {
      pcVar3 = local_120 + 0x18;
      do {
        sVar18 = *(short *)pcVar3;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
        if (bVar12) {
          *(short *)pcVar3 = sVar18 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar18 == 1) {
        pcVar3 = local_120 + 0x1c;
        do {
          iVar16 = *(int *)pcVar3;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar12) {
            *(int *)pcVar3 = -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar21 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar21;
          local_130 = *(long **)pcVar14;
          FUN_00c44438(lVar21 + 0x8040,&local_130);
        }
      }
      else if (sVar18 == 0) goto LAB_00b42748;
    }
    puVar15 = local_90;
    if (local_90 == (undefined8 *)0x0) {
      plVar20 = (long *)0x0;
    }
    else {
      if (*(short *)((long)local_90 + 0x1a) != 0) {
        psVar2 = (short *)((long)local_90 + 0x1a);
        sVar18 = *(short *)((long)local_90 + 0x1a);
        do {
          sVar11 = *psVar2;
          if (sVar11 == sVar18) {
            cVar10 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar12) {
              *psVar2 = sVar18 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
            if (cVar10 != '\0') goto LAB_00b426cc;
            bVar12 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00b426cc:
            bVar12 = false;
          }
          if (bVar12) {
            plVar20 = (long *)0x0;
            if (local_90[2] != 0) {
              plVar20 = (long *)(local_90[2] + -0x28);
            }
            goto LAB_00b42728;
          }
          sVar18 = sVar11;
        } while (sVar11 != 0);
      }
      plVar20 = (long *)0x0;
LAB_00b42728:
      psVar2 = (short *)(local_90 + 3);
      do {
        sVar18 = *psVar2;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar18 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar18 == 1) {
        piVar4 = (int *)((long)local_90 + 0x1c);
        do {
          iVar16 = *piVar4;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar12) {
            *piVar4 = -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar21 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar21;
          local_120 = (code *)*puVar15;
          FUN_00c44438(lVar21 + 0x8040,&local_120);
        }
      }
      else if (sVar18 == 0) goto LAB_00b42748;
    }
    FUN_01050714(&local_130,&local_190);
    plVar6 = local_130;
    if (local_130 != (long *)0x0) {
      plVar22 = local_130 + 6;
    }
    local_90 = (undefined8 *)*plVar22;
    plVar22 = (long *)PTR_PTR_047d4508;
    if (local_130 != (long *)0x0) {
      plVar22 = local_130 + 7;
    }
    lStack_88 = *plVar22;
    if (local_130 == (long *)0x0) {
      local_80 = 0;
    }
    else {
      local_80 = local_130[8];
    }
    local_78 = (long *)0x0;
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x18))(local_130);
    }
    local_78 = plVar6;
    local_94 = 0;
    if (plVar20 == (long *)0x0) {
      local_100 = (long *)0x0;
    }
    else {
      lVar21 = plVar20[6];
      if (*(long *)(lVar21 + 0x10) == 0) {
LAB_00b42c24:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar2 = (short *)(lVar21 + 0x1a);
      do {
        sVar18 = *psVar2;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar18 == 0) {
        uVar19 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
        *(undefined8 *)(lVar21 + 8) = uVar19;
        *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
      }
      else if (sVar18 == -1) goto LAB_00b42c44;
      local_110 = (undefined1 *)0x0;
      local_108 = (undefined1 *)0x0;
      local_120 = (code *)0x0;
      local_118 = (code *)0x0;
      lVar21 = plVar20[6];
      local_100 = plVar20;
      if (*(long *)(lVar21 + 0x10) == 0) goto LAB_00b42c24;
      psVar2 = (short *)(lVar21 + 0x1a);
      do {
        sVar18 = *psVar2;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar18 == 0) {
        uVar19 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
        *(undefined8 *)(lVar21 + 8) = uVar19;
        *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
      }
      else if (sVar18 == -1) {
LAB_00b42c44:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    local_e8 = 2;
    local_120 = (code *)&LAB_00b44dec;
    local_118 = FUN_00b4589c;
    local_e6 = (undefined4)local_70;
    local_e2 = local_70._4_2_;
    local_110 = &LAB_00b46b90;
    local_108 = &LAB_00b46c70;
    local_f8 = param_2;
    lStack_f0 = lVar17;
    FUN_015d1ba8(&local_140,&local_90,&local_94,&local_120);
    pcVar14 = local_118;
    if (local_118 != (code *)0x0) {
      local_110 = (undefined1 *)0x0;
      local_108 = (undefined1 *)0x0;
      local_120 = (code *)0x0;
      local_118 = (code *)0x0;
      (*pcVar14)(&local_100);
    }
    if (plVar20 != (long *)0x0) {
      lVar17 = plVar20[6];
      psVar2 = (short *)(lVar17 + 0x1a);
      do {
        sVar18 = *psVar2;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar18 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*plVar20 + 0x50))(plVar20);
      }
      else if (sVar18 == 0) goto LAB_00b42bfc;
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x20))();
    }
    plVar6 = local_140;
    local_120 = (code *)0x0;
    local_118 = (code *)0x0;
    FUN_00c43ef0(&local_120,plVar1);
    local_130 = (long *)0x0;
    uStack_128 = 0;
    if (*(long **)(local_120 + 0x10) == plVar7) {
      FUN_015d2a6c(&local_130,&local_120);
    }
    pcVar14 = local_120;
    if (local_120 != (code *)0x0) {
      pcVar3 = local_120 + 0x18;
      do {
        sVar18 = *(short *)pcVar3;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
        if (bVar12) {
          *(short *)pcVar3 = sVar18 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar18 == 1) {
        pcVar3 = local_120 + 0x1c;
        do {
          iVar16 = *(int *)pcVar3;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar12) {
            *(int *)pcVar3 = -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_70 = *(long *)pcVar14;
          FUN_00c44438(lVar17 + 0x8040,&local_70);
        }
      }
      else if (sVar18 == 0) goto LAB_00b42748;
    }
    local_120 = (code *)0x0;
    local_118 = (code *)0x0;
    FUN_0177de7c(&local_120,&local_130);
    if ((((char)plVar6[0x28] != '\0') && (local_120 != (code *)0x0)) &&
       (*(long *)(local_120 + 0x10) != 0)) {
      (**(code **)(*(long *)(*(long *)(local_120 + 0x10) + -0x28) + 0x78))();
    }
    FUN_0154631c(plVar6 + 0x26,&local_120);
    pcVar14 = local_120;
    if (local_120 != (code *)0x0) {
      pcVar3 = local_120 + 0x18;
      do {
        sVar18 = *(short *)pcVar3;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
        if (bVar12) {
          *(short *)pcVar3 = sVar18 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar18 == 1) {
        pcVar3 = local_120 + 0x1c;
        do {
          iVar16 = *(int *)pcVar3;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar12) {
            *(int *)pcVar3 = -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_70 = *(long *)pcVar14;
          FUN_00c44438(lVar17 + 0x8040,&local_70);
        }
      }
      else if (sVar18 == 0) goto LAB_00b42748;
    }
    plVar1 = local_130;
    if (local_130 != (long *)0x0) {
      plVar7 = local_130 + 3;
      do {
        sVar18 = (short)*plVar7;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar12) {
          *(short *)plVar7 = sVar18 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar18 == 1) {
        piVar4 = (int *)((long)local_130 + 0x1c);
        do {
          iVar16 = *piVar4;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar12) {
            *piVar4 = -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_70 = *plVar1;
          FUN_00c44438(lVar17 + 0x8040,&local_70);
        }
      }
      else if (sVar18 == 0) {
LAB_00b42748:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (plVar20 != (long *)0x0) {
      lVar17 = plVar20[6];
      psVar2 = (short *)(lVar17 + 0x1a);
      do {
        sVar18 = *psVar2;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar18 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*plVar20 + 0x50))(plVar20);
      }
      else if (sVar18 == 0) goto LAB_00b42bfc;
    }
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 0x20))();
    }
    if (local_148 != (long *)0x0) {
      lVar17 = local_148[6];
      psVar2 = (short *)(lVar17 + 0x1a);
      do {
        sVar18 = *psVar2;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar18 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*local_148 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_00b42bfc;
    }
    if (local_158 != (long *)0x0) {
      (**(code **)(*local_158 + 0x20))();
    }
    if (local_150 != (long *)0x0) {
      lVar17 = local_150[6];
      psVar2 = (short *)(lVar17 + 0x1a);
      do {
        sVar18 = *psVar2;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar18 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*local_150 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_00b42bfc;
    }
    if (local_140 != (long *)0x0) {
      uVar19 = *(undefined8 *)(param_2 + 8);
      FUN_017944b8(&local_120,*(undefined8 *)(param_2 + 0x48));
      FUN_01f34dc8(&local_130,uVar19,&local_140,local_134,local_138,&local_120);
      local_90 = *(undefined8 **)(param_2 + 0x40);
      *(undefined8 *)(param_2 + 0x40) = 0;
      FUN_018b3450(&local_90);
      plVar1 = local_130;
      local_130 = (long *)0x0;
      *(long **)(param_2 + 0x40) = plVar1;
      FUN_01f34e8c(&local_130);
      FUN_017943a8(&local_120);
      if (*(long *)(param_2 + 0x40) == 0) {
        *param_1 = 0;
        param_1[1] = 0;
      }
      else {
        FUN_019812f8(param_1);
      }
      if (local_140 == (long *)0x0) {
        return;
      }
      lVar17 = local_140[6];
      psVar2 = (short *)(lVar17 + 0x1a);
      do {
        sVar18 = *psVar2;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar18 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*local_140 + 0x50))();
        return;
      }
      if (sVar18 != 0) {
        return;
      }
LAB_00b42bfc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


