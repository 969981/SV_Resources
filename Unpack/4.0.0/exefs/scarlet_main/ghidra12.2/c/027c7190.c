/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027c7190; name: FUN_027c7190
 */


void FUN_027c7190(undefined8 param_1,char *param_2,long param_3,char *param_4)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  bool bVar4;
  ulong *puVar5;
  long *plVar6;
  char cVar7;
  short sVar8;
  undefined8 *puVar9;
  code *pcVar10;
  int iVar11;
  undefined8 uVar12;
  short sVar13;
  long *plVar14;
  long lVar15;
  undefined1 auStack_1f8 [48];
  undefined1 *local_1c8;
  undefined1 *puStack_1c0;
  undefined8 local_1b8;
  long *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  char *pcStack_190;
  undefined8 local_188;
  long *local_180;
  undefined8 local_178;
  char *pcStack_170;
  undefined8 local_168;
  long *local_160;
  long *local_158;
  undefined8 local_150;
  long *local_148;
  undefined8 *local_140;
  char *local_138;
  undefined8 local_130;
  long *local_128;
  undefined4 local_fc;
  ulong local_f8;
  long lStack_f0;
  long local_e8;
  long *local_e0;
  undefined8 local_d8;
  ulong *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long *local_b0;
  char *local_a8;
  undefined1 local_a0;
  undefined1 auStack_9c [76];
  long *local_38;
  
  local_178 = 0x5f3a9f86b611a6e;
  pcStack_170 = "StartupSession";
  local_168 = 0xe;
  local_160 = (long *)0x0;
  FUN_027c20b8(&local_158,&local_178,*(undefined8 *)(param_2 + 0x70));
  plVar14 = local_158;
  local_198 = 0x640c7cc8e0648542;
  pcStack_190 = "GetGameSessionId";
  local_188 = 0x10;
  local_180 = (long *)0x0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  FUN_027c2138(&local_1a8,param_2 + 0x78);
  FUN_027c7aa0(&local_150,plVar14,&local_198,&local_1a8,*(undefined8 *)(param_3 + 8));
  local_1c8 = &DAT_cbf29ce484222645;
  puStack_1c0 = &DAT_03c886bc;
  local_1b8 = 0;
  local_1b0 = (long *)0x0;
  cVar7 = *param_4;
  if (cVar7 != '\0') {
    memcpy((void *)((ulong)auStack_1f8 | 3),param_4 + 4,0x28);
  }
  FUN_027c8218(&local_d0,local_150);
  if (local_d0 == (ulong *)0x0) {
    local_d8 = 0;
  }
  else {
    FUN_027c8368(&local_d8);
  }
  FUN_027c83f8(&local_d0);
  FUN_01050714(&local_38,&local_1c8);
  plVar14 = local_38;
  puVar5 = (ulong *)PTR_DAT_047d8b70;
  if (local_38 != (long *)0x0) {
    puVar5 = (ulong *)(local_38 + 6);
  }
  local_f8 = *puVar5;
  plVar6 = (long *)PTR_PTR_047d4508;
  if (local_38 != (long *)0x0) {
    plVar6 = local_38 + 7;
  }
  lStack_f0 = *plVar6;
  if (local_38 == (long *)0x0) {
    local_e8 = 0;
  }
  else {
    local_e8 = local_38[8];
  }
  local_e0 = (long *)0x0;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))(local_38);
  }
  local_e0 = plVar14;
  local_fc = 0;
  FUN_027c84f8(&local_140,&local_d8);
  local_130 = local_130 & 0xffffffffffffff00;
  local_138 = param_2;
  if (cVar7 != '\0') {
    memcpy((void *)((long)&local_130 + 4),(void *)((ulong)auStack_1f8 | 3),0x28);
    local_130 = CONCAT71(local_130._1_7_,1);
  }
  local_c0 = (undefined1 *)0x0;
  local_b8 = (undefined1 *)0x0;
  local_d0 = (ulong *)0x0;
  local_c8 = (code *)0x0;
  FUN_027c84f8(&local_b0,&local_140);
  local_a8 = local_138;
  local_a0 = 0;
  bVar4 = (char)local_130 != '\0';
  if (bVar4) {
    memcpy(auStack_9c,(void *)((long)&local_130 + 4),0x28);
  }
  local_d0 = (ulong *)&LAB_02c32d70;
  local_c8 = FUN_02c338a8;
  local_c0 = &LAB_02c34b00;
  local_b8 = &LAB_02c34b58;
  local_a0 = bVar4;
  FUN_015d1ba8(&local_148,&local_f8,&local_fc,&local_d0);
  pcVar10 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (ulong *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar10)(&local_b0);
  }
  if ((char)local_130 != '\0') {
    local_130 = local_130 & 0xffffffffffffff00;
  }
  FUN_027c8588(&local_140);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  plVar14 = local_148;
  FUN_027c8218(&local_140,local_150);
  local_d0 = (ulong *)0x0;
  local_c8 = (code *)0x0;
  FUN_027c85f0(&local_d0,&local_140);
  if ((((char)plVar14[0x28] != '\0') && (local_d0 != (ulong *)0x0)) && (local_d0[2] != 0)) {
    (**(code **)(*(long *)(local_d0[2] - 0x28) + 0x78))();
  }
  FUN_0154631c(plVar14 + 0x26,&local_d0);
  puVar5 = local_d0;
  if (local_d0 != (ulong *)0x0) {
    puVar2 = local_d0 + 3;
    do {
      sVar13 = (short)*puVar2;
      cVar7 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *(short *)puVar2 = sVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)local_d0 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar7 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar4) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_38 = (long *)*puVar5;
        FUN_00c44438(lVar15 + 0x8040,&local_38);
      }
    }
    else if (sVar13 == 0) goto LAB_027c76d4;
  }
  FUN_027c83f8(&local_140);
  FUN_027c8588(&local_d8);
  plVar6 = local_148;
  local_d0 = (ulong *)0x0;
  local_c8 = (code *)0x0;
  FUN_00c43ef0(&local_d0,local_148 + 6);
  local_140 = (undefined8 *)0x0;
  local_138 = (char *)0x0;
  plVar14 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar14 = plVar6 + 5;
  }
  if ((long *)local_d0[2] == plVar14) {
    FUN_015d2a6c(&local_140,&local_d0);
  }
  puVar5 = local_d0;
  if (local_d0 != (ulong *)0x0) {
    puVar2 = local_d0 + 3;
    do {
      sVar13 = (short)*puVar2;
      cVar7 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *(short *)puVar2 = sVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)local_d0 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar7 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar4) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_f8 = *puVar5;
        FUN_00c44438(lVar15 + 0x8040,&local_f8);
      }
    }
    else if (sVar13 == 0) goto LAB_027c76d4;
  }
  puVar9 = local_140;
  if (local_140 == (undefined8 *)0x0) {
    plVar14 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_140 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_140 + 0x1a);
      sVar13 = *(short *)((long)local_140 + 0x1a);
      do {
        sVar8 = *psVar1;
        if (sVar8 == sVar13) {
          cVar7 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar13 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_027c7810;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_027c7810:
          bVar4 = false;
        }
        if (bVar4) {
          plVar14 = (long *)0x0;
          if (local_140[2] != 0) {
            plVar14 = (long *)(local_140[2] + -0x28);
          }
          goto LAB_027c7838;
        }
        sVar13 = sVar8;
      } while (sVar8 != 0);
    }
    plVar14 = (long *)0x0;
LAB_027c7838:
    psVar1 = (short *)(local_140 + 3);
    do {
      sVar13 = *psVar1;
      cVar7 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)local_140 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar7 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar4) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_d0 = (ulong *)*puVar9;
        FUN_00c44438(lVar15 + 0x8040,&local_d0);
      }
    }
    else if (sVar13 == 0) goto LAB_027c76d4;
  }
  local_f8 = local_f8 & 0xffffffff00000000;
  local_140 = (undefined8 *)0xac19ec5dd305f32b;
  local_138 = "RandomMatchingCancel";
  local_130 = 0x14;
  local_128 = (long *)0x0;
  if (plVar14 == (long *)0x0) {
    local_b0 = (long *)0x0;
  }
  else {
    lVar15 = plVar14[6];
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_027c76d4;
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar7 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar13 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar13 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar12;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar13 == -1) goto LAB_027c76d4;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (ulong *)0x0;
    local_c8 = (code *)0x0;
    lVar15 = plVar14[6];
    local_b0 = plVar14;
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_027c76d4;
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar7 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar13 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar13 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar12;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar13 == -1) goto LAB_027c76d4;
  }
  local_d0 = (ulong *)&LAB_02c34bb0;
  local_c8 = FUN_02c36714;
  local_c0 = &LAB_02c40f64;
  local_b8 = &LAB_02c4100c;
  local_a8 = param_2;
  FUN_015d1ba8(param_1,&local_140,&local_f8,&local_d0);
  pcVar10 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (ulong *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar10)(&local_b0);
  }
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar7 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))(plVar14);
    }
    else if (sVar13 == 0) goto LAB_027c76d4;
  }
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar7 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))(plVar14);
    }
    else if (sVar13 == 0) goto LAB_027c76d4;
  }
  if (local_148 != (long *)0x0) {
    lVar15 = local_148[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar7 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*local_148 + 0x50))();
    }
    else if (sVar13 == 0) goto LAB_027c76d4;
  }
  if (local_1b0 != (long *)0x0) {
    (**(code **)(*local_1b0 + 0x20))();
  }
  FUN_027c8588(&local_150);
  FUN_027bfe38(&local_1a8);
  if (local_180 != (long *)0x0) {
    (**(code **)(*local_180 + 0x20))();
  }
  if (local_158 != (long *)0x0) {
    lVar15 = local_158[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar7 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*local_158 + 0x50))();
    }
    else if (sVar13 == 0) {
LAB_027c76d4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  if (local_160 != (long *)0x0) {
    (**(code **)(*local_160 + 0x20))();
  }
  return;
}


