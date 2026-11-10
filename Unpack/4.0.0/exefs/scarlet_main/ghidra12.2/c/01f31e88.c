/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f31e88; name: FUN_01f31e88
 */


void FUN_01f31e88(undefined8 *param_1,long param_2,void *param_3)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  short sVar10;
  bool bVar11;
  long *plVar12;
  undefined1 *puVar13;
  code *pcVar14;
  undefined8 *puVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  short sVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  long *local_198;
  undefined2 local_18c [2];
  long *local_188;
  undefined1 *puStack_180;
  undefined8 local_178;
  long *local_170;
  long *local_168;
  long *local_160;
  undefined1 *local_158;
  undefined1 *puStack_150;
  undefined8 local_148;
  long *local_140;
  undefined4 local_138;
  undefined2 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  long *local_120;
  code *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  long *local_100;
  long local_f8;
  long lStack_f0;
  undefined2 local_e8;
  undefined4 local_e6;
  undefined2 local_e2;
  undefined8 *local_98;
  long lStack_90;
  long local_88;
  long *local_80;
  undefined8 local_78;
  
  local_18c[0] = 6;
  lVar17 = FUN_01981264();
  if ((lVar17 == 0) || (*(long *)(param_2 + 0x48) == 0)) goto LAB_01f326b0;
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
  lVar22 = 0;
  do {
    lVar4 = param_2 + lVar22;
    cVar9 = *(char *)((long)param_3 + lVar22 + 0x80);
    if (*(char *)(lVar4 + 0xd0) == '\0') {
      if (cVar9 != '\0') {
        memcpy((void *)(lVar4 + 0xd8),(void *)((long)param_3 + lVar22 + 0x88),0x28);
        *(undefined1 *)(lVar4 + 0xd0) = 1;
      }
    }
    else if (cVar9 == '\0') {
      *(undefined1 *)(lVar4 + 0xd0) = 0;
    }
    else {
      uVar20 = *(undefined8 *)((long)param_3 + lVar22 + 0x88);
      uVar7 = *(undefined8 *)((long)param_3 + lVar22 + 0x90);
      uVar8 = *(undefined8 *)((long)param_3 + lVar22 + 0xa0);
      *(undefined8 *)(lVar4 + 0xe8) = *(undefined8 *)((long)param_3 + lVar22 + 0x98);
      *(undefined8 *)(lVar4 + 0xf0) = uVar8;
      *(undefined8 *)(lVar4 + 0xd8) = uVar20;
      *(undefined8 *)(lVar4 + 0xe0) = uVar7;
      *(undefined8 *)(lVar4 + 0xf8) = *(undefined8 *)((long)param_3 + lVar22 + 0xa8);
    }
    lVar22 = lVar22 + 0x30;
  } while (lVar22 != 0x480);
  if ((((DAT_04839fc0 == 1) || (DAT_0485e950 != '\x01')) ||
      (uVar18 = nn::nifm::IsNetworkAvailable(), (uVar18 & 1) == 0)) || (DAT_04839fc0 != 4)) {
    FUN_019870e4(&local_168);
    plVar21 = local_168;
    plVar1 = local_168 + 6;
    local_158 = &DAT_cbf29ce484222645;
    puStack_150 = &DAT_03c886bc;
    local_148 = 0;
    local_140 = (long *)0x0;
    local_120 = (long *)0x0;
    local_118 = (code *)0x0;
    FUN_00c43ef0(&local_120,plVar1);
    local_98 = (undefined8 *)0x0;
    lStack_90 = 0;
    plVar5 = (long *)0x0;
    if (plVar21 != (long *)0x0) {
      plVar5 = plVar21 + 5;
    }
    if ((long *)local_120[2] == plVar5) {
      FUN_015d2a6c(&local_98,&local_120);
    }
    plVar21 = local_120;
    if (local_120 != (long *)0x0) {
      plVar6 = local_120 + 3;
      do {
        sVar19 = (short)*plVar6;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar11) {
          *(short *)plVar6 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        piVar3 = (int *)((long)local_120 + 0x1c);
        do {
          iVar16 = *piVar3;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_188 = (long *)*plVar21;
          FUN_00c44438(lVar22 + 0x8040,&local_188);
        }
      }
      else if (sVar19 == 0) goto LAB_01f32950;
    }
    puVar15 = local_98;
    if (local_98 == (undefined8 *)0x0) {
      plVar21 = (long *)0x0;
    }
    else {
      if (*(short *)((long)local_98 + 0x1a) != 0) {
        psVar2 = (short *)((long)local_98 + 0x1a);
        sVar19 = *(short *)((long)local_98 + 0x1a);
        do {
          sVar10 = *psVar2;
          if (sVar10 == sVar19) {
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar11) {
              *psVar2 = sVar19 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 != '\0') goto LAB_01f32888;
            bVar11 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01f32888:
            bVar11 = false;
          }
          if (bVar11) {
            plVar21 = (long *)0x0;
            if (local_98[2] != 0) {
              plVar21 = (long *)(local_98[2] + -0x28);
            }
            goto LAB_01f328fc;
          }
          sVar19 = sVar10;
        } while (sVar10 != 0);
      }
      plVar21 = (long *)0x0;
LAB_01f328fc:
      psVar2 = (short *)(local_98 + 3);
      do {
        sVar19 = *psVar2;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        piVar3 = (int *)((long)local_98 + 0x1c);
        do {
          iVar16 = *piVar3;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_120 = (long *)*puVar15;
          FUN_00c44438(lVar22 + 0x8040,&local_120);
        }
      }
      else if (sVar19 == 0) goto LAB_01f32950;
    }
    FUN_01050714(&local_188,&local_158);
    plVar12 = local_188;
    plVar6 = (long *)PTR_DAT_047d8b70;
    if (local_188 != (long *)0x0) {
      plVar6 = local_188 + 6;
    }
    local_98 = (undefined8 *)*plVar6;
    plVar6 = (long *)PTR_PTR_047d4508;
    if (local_188 != (long *)0x0) {
      plVar6 = local_188 + 7;
    }
    lStack_90 = *plVar6;
    if (local_188 == (long *)0x0) {
      local_88 = 0;
    }
    else {
      local_88 = local_188[8];
    }
    local_80 = (long *)0x0;
    if (local_188 != (long *)0x0) {
      (**(code **)(*local_188 + 0x18))(local_188);
    }
    local_80 = plVar12;
    local_130 = (long *)((ulong)local_130._4_4_ << 0x20);
    if (plVar21 == (long *)0x0) {
      local_100 = (long *)0x0;
    }
    else {
      lVar22 = plVar21[6];
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01f334f0;
      psVar2 = (short *)(lVar22 + 0x1a);
      do {
        sVar19 = *psVar2;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar19 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 0) {
        uVar20 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        *(undefined8 *)(lVar22 + 8) = uVar20;
        *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
      }
      else if (sVar19 == -1) goto LAB_01f33510;
      local_110 = (undefined1 *)0x0;
      local_108 = (undefined1 *)0x0;
      local_120 = (long *)0x0;
      local_118 = (code *)0x0;
      lVar22 = plVar21[6];
      local_100 = plVar21;
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01f334f0;
      psVar2 = (short *)(lVar22 + 0x1a);
      do {
        sVar19 = *psVar2;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar19 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 0) {
        uVar20 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        *(undefined8 *)(lVar22 + 8) = uVar20;
        *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
      }
      else if (sVar19 == -1) goto LAB_01f33510;
    }
    local_120 = (long *)&LAB_00b4d084;
    local_118 = FUN_00b4db28;
    local_110 = &LAB_00b4edfc;
    local_108 = &LAB_00b4eed4;
    local_f8 = lVar17;
    FUN_015d1ba8(&local_160,&local_98,&local_130,&local_120);
    pcVar14 = local_118;
    if (local_118 != (code *)0x0) {
      local_110 = (undefined1 *)0x0;
      local_108 = (undefined1 *)0x0;
      local_120 = (long *)0x0;
      local_118 = (code *)0x0;
      (*pcVar14)(&local_100);
    }
    if (plVar21 != (long *)0x0) {
      lVar22 = plVar21[6];
      psVar2 = (short *)(lVar22 + 0x1a);
      do {
        sVar19 = *psVar2;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*plVar21 + 0x50))(plVar21);
      }
      else if (sVar19 == 0) goto LAB_01f334c8;
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_188 != (long *)0x0) {
      (**(code **)(*local_188 + 0x20))();
    }
    plVar6 = local_160;
    local_120 = (long *)0x0;
    local_118 = (code *)0x0;
    FUN_00c43ef0(&local_120,plVar1);
    local_188 = (long *)0x0;
    puStack_180 = (undefined1 *)0x0;
    if ((long *)local_120[2] == plVar5) {
      FUN_015d2a6c(&local_188,&local_120);
    }
    plVar1 = local_120;
    if (local_120 != (long *)0x0) {
      plVar5 = local_120 + 3;
      do {
        sVar19 = (short)*plVar5;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar11) {
          *(short *)plVar5 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        piVar3 = (int *)((long)local_120 + 0x1c);
        do {
          iVar16 = *piVar3;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_130 = (long *)*plVar1;
          FUN_00c44438(lVar22 + 0x8040,&local_130);
        }
      }
      else if (sVar19 == 0) goto LAB_01f32950;
    }
    local_120 = (long *)0x0;
    local_118 = (code *)0x0;
    FUN_0177de7c(&local_120,&local_188);
    if ((((char)plVar6[0x28] != '\0') && (local_120 != (long *)0x0)) && (local_120[2] != 0)) {
      (**(code **)(*(long *)(local_120[2] + -0x28) + 0x78))();
    }
    FUN_0154631c(plVar6 + 0x26,&local_120);
    plVar1 = local_120;
    if (local_120 != (long *)0x0) {
      plVar5 = local_120 + 3;
      do {
        sVar19 = (short)*plVar5;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar11) {
          *(short *)plVar5 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        piVar3 = (int *)((long)local_120 + 0x1c);
        do {
          iVar16 = *piVar3;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_130 = (long *)*plVar1;
          FUN_00c44438(lVar22 + 0x8040,&local_130);
        }
      }
      else if (sVar19 == 0) goto LAB_01f32950;
    }
    plVar1 = local_188;
    if (local_188 != (long *)0x0) {
      plVar5 = local_188 + 3;
      do {
        sVar19 = (short)*plVar5;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar11) {
          *(short *)plVar5 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        piVar3 = (int *)((long)local_188 + 0x1c);
        do {
          iVar16 = *piVar3;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_130 = (long *)*plVar1;
          FUN_00c44438(lVar22 + 0x8040,&local_130);
        }
      }
      else if (sVar19 == 0) goto LAB_01f32950;
    }
    if (plVar21 != (long *)0x0) {
      lVar22 = plVar21[6];
      psVar2 = (short *)(lVar22 + 0x1a);
      do {
        sVar19 = *psVar2;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*plVar21 + 0x50))(plVar21);
      }
      else if (sVar19 == 0) goto LAB_01f334c8;
    }
    plVar21 = local_160;
    plVar1 = local_160 + 6;
    local_188 = (long *)&DAT_cbf29ce484222645;
    puStack_180 = &DAT_03c886bc;
    local_178 = 0;
    local_170 = (long *)0x0;
    local_120 = (long *)0x0;
    local_118 = (code *)0x0;
    FUN_00c43ef0(&local_120,plVar1);
    local_98 = (undefined8 *)0x0;
    lStack_90 = 0;
    plVar5 = (long *)0x0;
    if (plVar21 != (long *)0x0) {
      plVar5 = plVar21 + 5;
    }
    if ((long *)local_120[2] == plVar5) {
      FUN_015d2a6c(&local_98,&local_120);
    }
    plVar21 = local_120;
    if (local_120 != (long *)0x0) {
      plVar6 = local_120 + 3;
      do {
        sVar19 = (short)*plVar6;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar11) {
          *(short *)plVar6 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        piVar3 = (int *)((long)local_120 + 0x1c);
        do {
          iVar16 = *piVar3;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_130 = (long *)*plVar21;
          FUN_00c44438(lVar22 + 0x8040,&local_130);
        }
      }
      else if (sVar19 == 0) goto LAB_01f32950;
    }
    puVar15 = local_98;
    if (local_98 == (undefined8 *)0x0) {
      plVar21 = (long *)0x0;
    }
    else {
      if (*(short *)((long)local_98 + 0x1a) != 0) {
        psVar2 = (short *)((long)local_98 + 0x1a);
        sVar19 = *(short *)((long)local_98 + 0x1a);
        do {
          sVar10 = *psVar2;
          if (sVar10 == sVar19) {
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar11) {
              *psVar2 = sVar19 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 != '\0') goto LAB_01f328d4;
            bVar11 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01f328d4:
            bVar11 = false;
          }
          if (bVar11) {
            plVar21 = (long *)0x0;
            if (local_98[2] != 0) {
              plVar21 = (long *)(local_98[2] + -0x28);
            }
            goto LAB_01f32930;
          }
          sVar19 = sVar10;
        } while (sVar10 != 0);
      }
      plVar21 = (long *)0x0;
LAB_01f32930:
      psVar2 = (short *)(local_98 + 3);
      do {
        sVar19 = *psVar2;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        piVar3 = (int *)((long)local_98 + 0x1c);
        do {
          iVar16 = *piVar3;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_120 = (long *)*puVar15;
          FUN_00c44438(lVar22 + 0x8040,&local_120);
        }
      }
      else if (sVar19 == 0) goto LAB_01f32950;
    }
    FUN_01050714(&local_130,&local_188);
    plVar12 = local_130;
    plVar6 = (long *)PTR_DAT_047d8b70;
    if (local_130 != (long *)0x0) {
      plVar6 = local_130 + 6;
    }
    local_98 = (undefined8 *)*plVar6;
    plVar6 = (long *)PTR_PTR_047d4508;
    if (local_130 != (long *)0x0) {
      plVar6 = local_130 + 7;
    }
    lStack_90 = *plVar6;
    if (local_130 == (long *)0x0) {
      local_88 = 0;
    }
    else {
      local_88 = local_130[8];
    }
    local_80 = (long *)0x0;
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x18))(local_130);
    }
    local_80 = plVar12;
    local_78 = (long *)((ulong)local_78._4_4_ << 0x20);
    if (plVar21 == (long *)0x0) {
      local_100 = (long *)0x0;
    }
    else {
      lVar22 = plVar21[6];
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01f334f0;
      psVar2 = (short *)(lVar22 + 0x1a);
      do {
        sVar19 = *psVar2;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar19 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 0) {
        uVar20 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        *(undefined8 *)(lVar22 + 8) = uVar20;
        *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
      }
      else if (sVar19 == -1) goto LAB_01f33510;
      local_110 = (undefined1 *)0x0;
      local_108 = (undefined1 *)0x0;
      local_120 = (long *)0x0;
      local_118 = (code *)0x0;
      lVar22 = plVar21[6];
      local_100 = plVar21;
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01f334f0;
      psVar2 = (short *)(lVar22 + 0x1a);
      do {
        sVar19 = *psVar2;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar19 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 0) {
        uVar20 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        *(undefined8 *)(lVar22 + 8) = uVar20;
        *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
      }
      else if (sVar19 == -1) {
LAB_01f33510:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    local_e8 = 2;
    local_e6 = local_138;
    local_e2 = local_134;
    local_120 = (long *)&LAB_00b4efac;
    local_118 = FUN_00b4fa5c;
    local_110 = &LAB_00b50d50;
    local_108 = &LAB_00b50e30;
    local_f8 = param_2;
    lStack_f0 = lVar17;
    FUN_015d1ba8(&local_198,&local_98,&local_78,&local_120);
    pcVar14 = local_118;
    if (local_118 != (code *)0x0) {
      local_110 = (undefined1 *)0x0;
      local_108 = (undefined1 *)0x0;
      local_120 = (long *)0x0;
      local_118 = (code *)0x0;
      (*pcVar14)(&local_100);
    }
    if (plVar21 != (long *)0x0) {
      lVar17 = plVar21[6];
      psVar2 = (short *)(lVar17 + 0x1a);
      do {
        sVar19 = *psVar2;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*plVar21 + 0x50))(plVar21);
      }
      else if (sVar19 == 0) goto LAB_01f334c8;
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x20))();
    }
    plVar6 = local_198;
    local_120 = (long *)0x0;
    local_118 = (code *)0x0;
    FUN_00c43ef0(&local_120,plVar1);
    local_130 = (long *)0x0;
    uStack_128 = 0;
    if ((long *)local_120[2] == plVar5) {
      FUN_015d2a6c(&local_130,&local_120);
    }
    plVar1 = local_120;
    if (local_120 != (long *)0x0) {
      plVar5 = local_120 + 3;
      do {
        sVar19 = (short)*plVar5;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar11) {
          *(short *)plVar5 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        piVar3 = (int *)((long)local_120 + 0x1c);
        do {
          iVar16 = *piVar3;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_78 = (long *)*plVar1;
          FUN_00c44438(lVar17 + 0x8040,&local_78);
        }
      }
      else if (sVar19 == 0) goto LAB_01f32950;
    }
    local_120 = (long *)0x0;
    local_118 = (code *)0x0;
    FUN_0177de7c(&local_120,&local_130);
    if ((((char)plVar6[0x28] != '\0') && (local_120 != (long *)0x0)) && (local_120[2] != 0)) {
      (**(code **)(*(long *)(local_120[2] + -0x28) + 0x78))();
    }
    FUN_0154631c(plVar6 + 0x26,&local_120);
    plVar1 = local_120;
    if (local_120 != (long *)0x0) {
      plVar5 = local_120 + 3;
      do {
        sVar19 = (short)*plVar5;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar11) {
          *(short *)plVar5 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        piVar3 = (int *)((long)local_120 + 0x1c);
        do {
          iVar16 = *piVar3;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_78 = (long *)*plVar1;
          FUN_00c44438(lVar17 + 0x8040,&local_78);
        }
      }
      else if (sVar19 == 0) goto LAB_01f32950;
    }
    plVar1 = local_130;
    if (local_130 != (long *)0x0) {
      plVar5 = local_130 + 3;
      do {
        sVar19 = (short)*plVar5;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar11) {
          *(short *)plVar5 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        piVar3 = (int *)((long)local_130 + 0x1c);
        do {
          iVar16 = *piVar3;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_78 = (long *)*plVar1;
          FUN_00c44438(lVar17 + 0x8040,&local_78);
        }
      }
      else if (sVar19 == 0) goto LAB_01f32950;
    }
    if (plVar21 != (long *)0x0) {
      lVar17 = plVar21[6];
      psVar2 = (short *)(lVar17 + 0x1a);
      do {
        sVar19 = *psVar2;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*plVar21 + 0x50))(plVar21);
      }
      else if (sVar19 == 0) goto LAB_01f334c8;
    }
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x20))();
    }
    if (local_160 != (long *)0x0) {
      lVar17 = local_160[6];
      psVar2 = (short *)(lVar17 + 0x1a);
      do {
        sVar19 = *psVar2;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*local_160 + 0x50))();
      }
      else if (sVar19 == 0) goto LAB_01f334c8;
    }
    if (local_140 != (long *)0x0) {
      (**(code **)(*local_140 + 0x20))();
    }
    if (local_168 != (long *)0x0) {
      lVar17 = local_168[6];
      psVar2 = (short *)(lVar17 + 0x1a);
      do {
        sVar19 = *psVar2;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      goto LAB_01f32628;
    }
  }
  else {
    if (*(long **)(lVar17 + 0x48) == (long *)0x0) {
      local_78 = (long *)0x0;
    }
    else {
      (**(code **)(**(long **)(lVar17 + 0x48) + 0x90))(&local_78);
    }
    plVar21 = local_78;
    plVar1 = local_78 + 6;
    local_158 = &DAT_cbf29ce484222645;
    puStack_150 = &DAT_03c886bc;
    local_148 = 0;
    local_140 = (long *)0x0;
    local_120 = (long *)0x0;
    local_118 = (code *)0x0;
    FUN_00c43ef0(&local_120,plVar1);
    local_98 = (undefined8 *)0x0;
    lStack_90 = 0;
    plVar5 = (long *)0x0;
    if (plVar21 != (long *)0x0) {
      plVar5 = plVar21 + 5;
    }
    if ((long *)local_120[2] == plVar5) {
      FUN_015d2a6c(&local_98,&local_120);
    }
    plVar21 = local_120;
    if (local_120 != (long *)0x0) {
      plVar6 = local_120 + 3;
      do {
        sVar19 = (short)*plVar6;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar11) {
          *(short *)plVar6 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        piVar3 = (int *)((long)local_120 + 0x1c);
        do {
          iVar16 = *piVar3;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_188 = (long *)*plVar21;
          FUN_00c44438(lVar22 + 0x8040,&local_188);
        }
      }
      else if (sVar19 == 0) goto LAB_01f32950;
    }
    puVar15 = local_98;
    if (local_98 == (undefined8 *)0x0) {
      plVar21 = (long *)0x0;
    }
    else {
      if (*(short *)((long)local_98 + 0x1a) != 0) {
        psVar2 = (short *)((long)local_98 + 0x1a);
        sVar19 = *(short *)((long)local_98 + 0x1a);
        do {
          sVar10 = *psVar2;
          if (sVar10 == sVar19) {
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar11) {
              *psVar2 = sVar19 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 != '\0') goto LAB_01f33254;
            bVar11 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01f33254:
            bVar11 = false;
          }
          if (bVar11) {
            plVar21 = (long *)0x0;
            if (local_98[2] != 0) {
              plVar21 = (long *)(local_98[2] + -0x28);
            }
            goto LAB_01f3327c;
          }
          sVar19 = sVar10;
        } while (sVar10 != 0);
      }
      plVar21 = (long *)0x0;
LAB_01f3327c:
      psVar2 = (short *)(local_98 + 3);
      do {
        sVar19 = *psVar2;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        piVar3 = (int *)((long)local_98 + 0x1c);
        do {
          iVar16 = *piVar3;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_120 = (long *)*puVar15;
          FUN_00c44438(lVar22 + 0x8040,&local_120);
        }
      }
      else if (sVar19 == 0) goto LAB_01f32950;
    }
    FUN_01050714(&local_188,&local_158);
    plVar12 = local_188;
    plVar6 = (long *)PTR_DAT_047d8b70;
    if (local_188 != (long *)0x0) {
      plVar6 = local_188 + 6;
    }
    local_98 = (undefined8 *)*plVar6;
    plVar6 = (long *)PTR_PTR_047d4508;
    if (local_188 != (long *)0x0) {
      plVar6 = local_188 + 7;
    }
    lStack_90 = *plVar6;
    if (local_188 == (long *)0x0) {
      local_88 = 0;
    }
    else {
      local_88 = local_188[8];
    }
    local_80 = (long *)0x0;
    if (local_188 != (long *)0x0) {
      (**(code **)(*local_188 + 0x18))(local_188);
    }
    local_80 = plVar12;
    local_130 = (long *)((ulong)local_130._4_4_ << 0x20);
    if (plVar21 == (long *)0x0) {
      local_100 = (long *)0x0;
    }
    else {
      lVar22 = plVar21[6];
      if (*(long *)(lVar22 + 0x10) == 0) {
LAB_01f334f0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar2 = (short *)(lVar22 + 0x1a);
      do {
        sVar19 = *psVar2;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar19 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 0) {
        uVar20 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        *(undefined8 *)(lVar22 + 8) = uVar20;
        *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
      }
      else if (sVar19 == -1) goto LAB_01f33510;
      local_110 = (undefined1 *)0x0;
      local_108 = (undefined1 *)0x0;
      local_120 = (long *)0x0;
      local_118 = (code *)0x0;
      lVar22 = plVar21[6];
      local_100 = plVar21;
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01f334f0;
      psVar2 = (short *)(lVar22 + 0x1a);
      do {
        sVar19 = *psVar2;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar19 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 0) {
        uVar20 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        *(undefined8 *)(lVar22 + 8) = uVar20;
        *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
      }
      else if (sVar19 == -1) goto LAB_01f33510;
    }
    local_e8 = 2;
    local_e6 = local_138;
    local_e2 = local_134;
    local_120 = (long *)&LAB_00b4b120;
    local_118 = FUN_00b4bbd0;
    local_110 = &LAB_00b4cec4;
    local_108 = &LAB_00b4cfa4;
    local_f8 = param_2;
    lStack_f0 = lVar17;
    FUN_015d1ba8(&local_198,&local_98,&local_130,&local_120);
    pcVar14 = local_118;
    if (local_118 != (code *)0x0) {
      local_110 = (undefined1 *)0x0;
      local_108 = (undefined1 *)0x0;
      local_120 = (long *)0x0;
      local_118 = (code *)0x0;
      (*pcVar14)(&local_100);
    }
    if (plVar21 != (long *)0x0) {
      lVar17 = plVar21[6];
      psVar2 = (short *)(lVar17 + 0x1a);
      do {
        sVar19 = *psVar2;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*plVar21 + 0x50))(plVar21);
      }
      else if (sVar19 == 0) goto LAB_01f334c8;
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_188 != (long *)0x0) {
      (**(code **)(*local_188 + 0x20))();
    }
    plVar6 = local_198;
    local_120 = (long *)0x0;
    local_118 = (code *)0x0;
    FUN_00c43ef0(&local_120,plVar1);
    local_188 = (long *)0x0;
    puStack_180 = (undefined1 *)0x0;
    if ((long *)local_120[2] == plVar5) {
      FUN_015d2a6c(&local_188,&local_120);
    }
    plVar1 = local_120;
    if (local_120 != (long *)0x0) {
      plVar5 = local_120 + 3;
      do {
        sVar19 = (short)*plVar5;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar11) {
          *(short *)plVar5 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        piVar3 = (int *)((long)local_120 + 0x1c);
        do {
          iVar16 = *piVar3;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_130 = (long *)*plVar1;
          FUN_00c44438(lVar17 + 0x8040,&local_130);
        }
      }
      else if (sVar19 == 0) goto LAB_01f32950;
    }
    local_120 = (long *)0x0;
    local_118 = (code *)0x0;
    FUN_0177de7c(&local_120,&local_188);
    if ((((char)plVar6[0x28] != '\0') && (local_120 != (long *)0x0)) && (local_120[2] != 0)) {
      (**(code **)(*(long *)(local_120[2] + -0x28) + 0x78))();
    }
    FUN_0154631c(plVar6 + 0x26,&local_120);
    plVar1 = local_120;
    if (local_120 != (long *)0x0) {
      plVar5 = local_120 + 3;
      do {
        sVar19 = (short)*plVar5;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar11) {
          *(short *)plVar5 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        piVar3 = (int *)((long)local_120 + 0x1c);
        do {
          iVar16 = *piVar3;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_130 = (long *)*plVar1;
          FUN_00c44438(lVar17 + 0x8040,&local_130);
        }
      }
      else if (sVar19 == 0) goto LAB_01f32950;
    }
    plVar1 = local_188;
    if (local_188 != (long *)0x0) {
      plVar5 = local_188 + 3;
      do {
        sVar19 = (short)*plVar5;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar11) {
          *(short *)plVar5 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        piVar3 = (int *)((long)local_188 + 0x1c);
        do {
          iVar16 = *piVar3;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_130 = (long *)*plVar1;
          FUN_00c44438(lVar17 + 0x8040,&local_130);
        }
      }
      else if (sVar19 == 0) {
LAB_01f32950:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (plVar21 != (long *)0x0) {
      lVar17 = plVar21[6];
      psVar2 = (short *)(lVar17 + 0x1a);
      do {
        sVar19 = *psVar2;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*plVar21 + 0x50))(plVar21);
      }
      else if (sVar19 == 0) goto LAB_01f334c8;
    }
    if (local_140 != (long *)0x0) {
      (**(code **)(*local_140 + 0x20))();
    }
    if (local_78 != (long *)0x0) {
      lVar17 = local_78[6];
      psVar2 = (short *)(lVar17 + 0x1a);
      do {
        sVar19 = *psVar2;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
        local_168 = local_78;
      } while (cVar9 != '\0');
LAB_01f32628:
      if (sVar19 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*local_168 + 0x50))();
      }
      else if (sVar19 == 0) goto LAB_01f334c8;
    }
  }
  if (local_198 == (long *)0x0) {
LAB_01f326b0:
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  uVar20 = *(undefined8 *)(param_2 + 8);
  FUN_017944b8(&local_120,*(undefined8 *)(param_2 + 0x48));
  uVar20 = FUN_01f48e5c(uVar20,&local_198,local_18c,&local_120);
  FUN_01f49f40(&local_158,uVar20);
  local_98 = *(undefined8 **)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  FUN_018b3450(&local_98);
  puVar13 = local_158;
  local_158 = (undefined1 *)0x0;
  *(undefined1 **)(param_2 + 0x40) = puVar13;
  FUN_01f49ffc(&local_158);
  FUN_017943a8(&local_120);
  if (*(long *)(param_2 + 0x40) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_019812f8(param_1);
  }
  if (local_198 == (long *)0x0) {
    return;
  }
  lVar17 = local_198[6];
  psVar2 = (short *)(lVar17 + 0x1a);
  do {
    sVar19 = *psVar2;
    cVar9 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar11) {
      *psVar2 = sVar19 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar19 == 1) {
    *(undefined8 *)(lVar17 + 0x10) = 0;
    (**(code **)(*local_198 + 0x50))();
    return;
  }
  if (sVar19 != 0) {
    return;
  }
LAB_01f334c8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


