/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dddd44; name: FUN_01dddd44
 */


void FUN_01dddd44(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  byte bVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  bool bVar16;
  short sVar17;
  long *local_240;
  long local_238;
  long lStack_230;
  long local_228;
  long *local_220;
  long *local_218;
  long local_210;
  long lStack_208;
  long local_200;
  long *local_1f8;
  long *local_1f0;
  long local_1e8;
  long lStack_1e0;
  long local_1d8;
  long *local_1d0;
  long *local_1c8;
  long local_1c0;
  long lStack_1b8;
  long local_1b0;
  long *local_1a8;
  long *local_1a0;
  long local_198;
  long lStack_190;
  long local_188;
  long *local_180;
  long *local_178;
  long local_170;
  long lStack_168;
  long local_160;
  long *local_158;
  long *local_150;
  long local_148;
  long lStack_140;
  long local_138;
  long *local_130;
  long *local_128;
  long local_120;
  long lStack_118;
  long local_110;
  long *local_108;
  long *local_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long *local_e0;
  long *local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long *local_b8;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_70 [2];
  
  local_80 = 3;
  local_78 = (long *)0x0;
  local_b0 = 0xbc3d87418a07cff8;
  pcStack_a8 = "msg_ui_box_top_00";
  local_a0 = 0x11;
  local_98 = (long *)0x0;
  local_90 = (long *)&DAT_e6b50e272d8cd992;
  pcStack_88 = "box";
  FUN_00f11e84(local_70,&local_90,&local_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  puVar6 = PTR_DAT_047d4240;
  if (((*PTR_DAT_047d4240 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  puVar8 = PTR_DAT_047d4250;
  puVar7 = PTR_DAT_047d4248;
  uVar12 = *(undefined8 *)PTR_DAT_047d4248;
  *(undefined8 *)PTR_DAT_047d4250 = uVar12;
  FUN_00cf9884(&local_90,uVar12,"L_box_change_00/L_temochi_00/T_temochi_00");
  plVar4 = local_90;
  plVar5 = (long *)PTR_DAT_047d8b70;
  plVar15 = (long *)PTR_PTR_047d4508;
  plVar14 = (long *)PTR_DAT_047d8b70;
  if (local_90 != (long *)0x0) {
    plVar14 = local_90 + 6;
  }
  local_d0 = *plVar14;
  plVar14 = (long *)PTR_PTR_047d4508;
  if (local_90 != (long *)0x0) {
    plVar14 = local_90 + 7;
  }
  lStack_c8 = *plVar14;
  if (local_90 == (long *)0x0) {
    local_c0 = 0;
  }
  else {
    local_c0 = local_90[8];
  }
  local_b8 = (long *)0x0;
  plVar14 = (long *)0x0;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))(local_90);
    plVar14 = plVar4;
  }
  plVar9 = local_70[0];
  local_d8 = local_70[0];
  local_b8 = plVar14;
  if (local_70[0] == (long *)0x0) {
    FUN_014e4b9c(param_1,&local_d0,&local_d8);
  }
  else {
    plVar14 = local_70[0] + 5;
    do {
      lVar13 = *plVar14;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar16) {
        *(int *)plVar14 = (int)lVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar13 == -1) goto LAB_01ddf0b4;
    FUN_014e4b9c(param_1,&local_d0,&local_d8);
    if (plVar9 != (long *)0x0) {
      plVar14 = plVar9 + 5;
      do {
        lVar13 = *plVar14;
        iVar11 = (int)lVar13 + -1;
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar16) {
          *(int *)plVar14 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      else if ((int)lVar13 == 0) goto LAB_01dde7f8;
    }
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar12 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar12;
  FUN_00cf9884(&local_90,uVar12,"L_box_change_00/L_temochi_01/T_temochi_00");
  plVar9 = local_90;
  plVar14 = plVar15;
  plVar4 = plVar5;
  if (local_90 != (long *)0x0) {
    plVar14 = local_90 + 7;
    plVar4 = local_90 + 6;
  }
  local_f8 = *plVar4;
  lStack_f0 = *plVar14;
  if (local_90 == (long *)0x0) {
    local_e8 = 0;
  }
  else {
    local_e8 = local_90[8];
  }
  local_e0 = (long *)0x0;
  plVar14 = (long *)0x0;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))(local_90);
    plVar14 = plVar9;
  }
  plVar4 = local_70[0];
  local_100 = local_70[0];
  local_e0 = plVar14;
  if (local_70[0] == (long *)0x0) {
    FUN_014e4b9c(param_1,&local_f8,&local_100);
  }
  else {
    plVar14 = local_70[0] + 5;
    do {
      lVar13 = *plVar14;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar16) {
        *(int *)plVar14 = (int)lVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar13 == -1) goto LAB_01ddf0b4;
    FUN_014e4b9c(param_1,&local_f8,&local_100);
    if (plVar4 != (long *)0x0) {
      plVar14 = plVar4 + 5;
      do {
        lVar13 = *plVar14;
        iVar11 = (int)lVar13 + -1;
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar16) {
          *(int *)plVar14 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
      else if ((int)lVar13 == 0) goto LAB_01dde7f8;
    }
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar12 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar12;
  FUN_00cf9884(&local_90,uVar12,"L_box_change_00/L_temochi_02/T_temochi_00");
  plVar9 = local_90;
  plVar14 = plVar15;
  plVar4 = plVar5;
  if (local_90 != (long *)0x0) {
    plVar14 = local_90 + 7;
    plVar4 = local_90 + 6;
  }
  local_120 = *plVar4;
  lStack_118 = *plVar14;
  if (local_90 == (long *)0x0) {
    local_110 = 0;
  }
  else {
    local_110 = local_90[8];
  }
  local_108 = (long *)0x0;
  plVar14 = (long *)0x0;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))(local_90);
    plVar14 = plVar9;
  }
  plVar4 = local_70[0];
  local_128 = local_70[0];
  local_108 = plVar14;
  if (local_70[0] == (long *)0x0) {
    FUN_014e4b9c(param_1,&local_120,&local_128);
  }
  else {
    plVar14 = local_70[0] + 5;
    do {
      lVar13 = *plVar14;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar16) {
        *(int *)plVar14 = (int)lVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar13 == -1) goto LAB_01ddf0b4;
    FUN_014e4b9c(param_1,&local_120,&local_128);
    if (plVar4 != (long *)0x0) {
      plVar14 = plVar4 + 5;
      do {
        lVar13 = *plVar14;
        iVar11 = (int)lVar13 + -1;
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar16) {
          *(int *)plVar14 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
      else if ((int)lVar13 == 0) goto LAB_01dde7f8;
    }
  }
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar12 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar12;
  FUN_00cf9884(&local_90,uVar12,"T_temochi_01");
  plVar9 = local_90;
  plVar14 = plVar15;
  plVar4 = plVar5;
  if (local_90 != (long *)0x0) {
    plVar14 = local_90 + 7;
    plVar4 = local_90 + 6;
  }
  local_148 = *plVar4;
  lStack_140 = *plVar14;
  if (local_90 == (long *)0x0) {
    local_138 = 0;
  }
  else {
    local_138 = local_90[8];
  }
  local_130 = (long *)0x0;
  plVar14 = (long *)0x0;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))(local_90);
    plVar14 = plVar9;
  }
  plVar4 = local_70[0];
  local_150 = local_70[0];
  local_130 = plVar14;
  if (local_70[0] == (long *)0x0) {
    FUN_014e4b9c(param_1,&local_148,&local_150);
  }
  else {
    plVar14 = local_70[0] + 5;
    do {
      lVar13 = *plVar14;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar16) {
        *(int *)plVar14 = (int)lVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar13 == -1) goto LAB_01ddf0b4;
    FUN_014e4b9c(param_1,&local_148,&local_150);
    if (plVar4 != (long *)0x0) {
      plVar14 = plVar4 + 5;
      do {
        lVar13 = *plVar14;
        iVar11 = (int)lVar13 + -1;
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar16) {
          *(int *)plVar14 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
      else if ((int)lVar13 == 0) goto LAB_01dde7f8;
    }
  }
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (local_70[0] != (long *)0x0) {
    plVar14 = local_70[0] + 5;
    do {
      lVar13 = *plVar14;
      iVar11 = (int)lVar13 + -1;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar16) {
        *(int *)plVar14 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    else if ((int)lVar13 == 0) goto LAB_01dde7f8;
  }
  local_80 = 3;
  local_78 = (long *)0x0;
  local_b0 = 0xb4fcbd101d4d307a;
  pcStack_a8 = "msg_ui_box_top_box_00";
  local_a0 = 0x15;
  local_98 = (long *)0x0;
  local_90 = (long *)&DAT_e6b50e272d8cd992;
  pcStack_88 = "box";
  FUN_00f11e84(local_70,&local_90,&local_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar12 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar12;
  FUN_00cf9884(&local_90,uVar12,"L_box_change_00/L_btn_box_00/T_name_btn_00");
  plVar9 = local_90;
  plVar14 = plVar15;
  plVar4 = plVar5;
  if (local_90 != (long *)0x0) {
    plVar14 = local_90 + 7;
    plVar4 = local_90 + 6;
  }
  local_170 = *plVar4;
  lStack_168 = *plVar14;
  if (local_90 == (long *)0x0) {
    local_160 = 0;
  }
  else {
    local_160 = local_90[8];
  }
  local_158 = (long *)0x0;
  plVar14 = (long *)0x0;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))(local_90);
    plVar14 = plVar9;
  }
  plVar4 = local_70[0];
  local_178 = local_70[0];
  local_158 = plVar14;
  if (local_70[0] == (long *)0x0) {
    FUN_014e4b9c(param_1,&local_170,&local_178);
  }
  else {
    plVar14 = local_70[0] + 5;
    do {
      lVar13 = *plVar14;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar16) {
        *(int *)plVar14 = (int)lVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar13 == -1) goto LAB_01ddf0b4;
    FUN_014e4b9c(param_1,&local_170,&local_178);
    if (plVar4 != (long *)0x0) {
      plVar14 = plVar4 + 5;
      do {
        lVar13 = *plVar14;
        iVar11 = (int)lVar13 + -1;
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar16) {
          *(int *)plVar14 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
      else if ((int)lVar13 == 0) goto LAB_01dde7f8;
    }
  }
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar12 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar12;
  FUN_00cf9884(&local_90,uVar12,"L_box_change_00/L_btn_box_01/T_name_btn_00");
  plVar9 = local_90;
  plVar14 = plVar15;
  plVar4 = plVar5;
  if (local_90 != (long *)0x0) {
    plVar14 = local_90 + 7;
    plVar4 = local_90 + 6;
  }
  local_198 = *plVar4;
  lStack_190 = *plVar14;
  if (local_90 == (long *)0x0) {
    local_188 = 0;
  }
  else {
    local_188 = local_90[8];
  }
  local_180 = (long *)0x0;
  plVar14 = (long *)0x0;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))(local_90);
    plVar14 = plVar9;
  }
  plVar4 = local_70[0];
  local_1a0 = local_70[0];
  local_180 = plVar14;
  if (local_70[0] == (long *)0x0) {
    FUN_014e4b9c(param_1,&local_198,&local_1a0);
  }
  else {
    plVar14 = local_70[0] + 5;
    do {
      lVar13 = *plVar14;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar16) {
        *(int *)plVar14 = (int)lVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar13 == -1) goto LAB_01ddf0b4;
    FUN_014e4b9c(param_1,&local_198,&local_1a0);
    if (plVar4 != (long *)0x0) {
      plVar14 = plVar4 + 5;
      do {
        lVar13 = *plVar14;
        iVar11 = (int)lVar13 + -1;
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar16) {
          *(int *)plVar14 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
      else if ((int)lVar13 == 0) goto LAB_01dde7f8;
    }
  }
  if (local_180 != (long *)0x0) {
    (**(code **)(*local_180 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar12 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar12;
  FUN_00cf9884(&local_90,uVar12,"L_box_change_00/L_btn_box_02/T_name_btn_00");
  plVar9 = local_90;
  plVar14 = plVar15;
  plVar4 = plVar5;
  if (local_90 != (long *)0x0) {
    plVar14 = local_90 + 7;
    plVar4 = local_90 + 6;
  }
  local_1c0 = *plVar4;
  lStack_1b8 = *plVar14;
  if (local_90 == (long *)0x0) {
    local_1b0 = 0;
  }
  else {
    local_1b0 = local_90[8];
  }
  local_1a8 = (long *)0x0;
  plVar14 = (long *)0x0;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))(local_90);
    plVar14 = plVar9;
  }
  plVar4 = local_70[0];
  local_1c8 = local_70[0];
  local_1a8 = plVar14;
  if (local_70[0] == (long *)0x0) {
    FUN_014e4b9c(param_1,&local_1c0,&local_1c8);
  }
  else {
    plVar14 = local_70[0] + 5;
    do {
      lVar13 = *plVar14;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar16) {
        *(int *)plVar14 = (int)lVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar13 == -1) goto LAB_01ddf0b4;
    FUN_014e4b9c(param_1,&local_1c0,&local_1c8);
    if (plVar4 != (long *)0x0) {
      plVar14 = plVar4 + 5;
      do {
        lVar13 = *plVar14;
        iVar11 = (int)lVar13 + -1;
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar16) {
          *(int *)plVar14 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
      else if ((int)lVar13 == 0) goto LAB_01dde7f8;
    }
  }
  if (local_1a8 != (long *)0x0) {
    (**(code **)(*local_1a8 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (local_70[0] != (long *)0x0) {
    plVar14 = local_70[0] + 5;
    do {
      lVar13 = *plVar14;
      iVar11 = (int)lVar13 + -1;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar16) {
        *(int *)plVar14 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    else if ((int)lVar13 == 0) goto LAB_01dde7f8;
  }
  local_80 = 3;
  local_78 = (long *)0x0;
  local_b0 = 0x5d7c98c0cbde88d3;
  pcStack_a8 = "msg_ui_box_top_find";
  local_a0 = 0x13;
  local_98 = (long *)0x0;
  local_90 = (long *)&DAT_e6b50e272d8cd992;
  pcStack_88 = "box";
  FUN_00f11e84(local_70,&local_90,&local_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar12 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar12;
  FUN_00cf9884(&local_90,uVar12,"L_box_change_00/L_btn_search_01/T_name_btn_00");
  plVar9 = local_90;
  plVar14 = plVar15;
  plVar4 = plVar5;
  if (local_90 != (long *)0x0) {
    plVar14 = local_90 + 7;
    plVar4 = local_90 + 6;
  }
  local_1e8 = *plVar4;
  lStack_1e0 = *plVar14;
  if (local_90 == (long *)0x0) {
    local_1d8 = 0;
  }
  else {
    local_1d8 = local_90[8];
  }
  local_1d0 = (long *)0x0;
  plVar14 = (long *)0x0;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))(local_90);
    plVar14 = plVar9;
  }
  plVar4 = local_70[0];
  local_1f0 = local_70[0];
  local_1d0 = plVar14;
  if (local_70[0] == (long *)0x0) {
    FUN_014e4b9c(param_1,&local_1e8,&local_1f0);
  }
  else {
    plVar14 = local_70[0] + 5;
    do {
      lVar13 = *plVar14;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar16) {
        *(int *)plVar14 = (int)lVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar13 == -1) goto LAB_01ddf0b4;
    FUN_014e4b9c(param_1,&local_1e8,&local_1f0);
    if (plVar4 != (long *)0x0) {
      plVar14 = plVar4 + 5;
      do {
        lVar13 = *plVar14;
        iVar11 = (int)lVar13 + -1;
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar16) {
          *(int *)plVar14 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
      else if ((int)lVar13 == 0) goto LAB_01dde7f8;
    }
  }
  if (local_1d0 != (long *)0x0) {
    (**(code **)(*local_1d0 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar12 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar12;
  FUN_00cf9884(&local_90,uVar12,"L_box_change_00/L_btn_search_02/T_name_btn_00");
  plVar9 = local_90;
  plVar14 = plVar15;
  plVar4 = plVar5;
  if (local_90 != (long *)0x0) {
    plVar14 = local_90 + 7;
    plVar4 = local_90 + 6;
  }
  local_210 = *plVar4;
  lStack_208 = *plVar14;
  if (local_90 == (long *)0x0) {
    local_200 = 0;
  }
  else {
    local_200 = local_90[8];
  }
  local_1f8 = (long *)0x0;
  plVar14 = (long *)0x0;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))(local_90);
    plVar14 = plVar9;
  }
  plVar4 = local_70[0];
  local_218 = local_70[0];
  local_1f8 = plVar14;
  if (local_70[0] == (long *)0x0) {
    FUN_014e4b9c(param_1,&local_210,&local_218);
  }
  else {
    plVar14 = local_70[0] + 5;
    do {
      lVar13 = *plVar14;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar16) {
        *(int *)plVar14 = (int)lVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar13 == -1) goto LAB_01ddf0b4;
    FUN_014e4b9c(param_1,&local_210,&local_218);
    if (plVar4 != (long *)0x0) {
      plVar14 = plVar4 + 5;
      do {
        lVar13 = *plVar14;
        iVar11 = (int)lVar13 + -1;
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar16) {
          *(int *)plVar14 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
      else if ((int)lVar13 == 0) goto LAB_01dde7f8;
    }
  }
  if (local_1f8 != (long *)0x0) {
    (**(code **)(*local_1f8 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar12 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar12;
  FUN_00cf9884(&local_90,uVar12,"L_box_change_00/L_btn_search_03/T_name_btn_00");
  plVar14 = local_90;
  if (local_90 != (long *)0x0) {
    plVar15 = local_90 + 7;
    plVar5 = local_90 + 6;
  }
  local_238 = *plVar5;
  lStack_230 = *plVar15;
  if (local_90 == (long *)0x0) {
    local_228 = 0;
  }
  else {
    local_228 = local_90[8];
  }
  local_220 = (long *)0x0;
  plVar15 = (long *)0x0;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))(local_90);
    plVar15 = plVar14;
  }
  plVar5 = local_70[0];
  local_240 = local_70[0];
  local_220 = plVar15;
  if (local_70[0] == (long *)0x0) {
    FUN_014e4b9c(param_1,&local_238,&local_240);
  }
  else {
    plVar15 = local_70[0] + 5;
    do {
      lVar13 = *plVar15;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar16) {
        *(int *)plVar15 = (int)lVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar13 == -1) {
LAB_01ddf0b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_014e4b9c(param_1,&local_238,&local_240);
    if (plVar5 != (long *)0x0) {
      plVar15 = plVar5 + 5;
      do {
        lVar13 = *plVar15;
        iVar11 = (int)lVar13 + -1;
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar16) {
          *(int *)plVar15 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
      else if ((int)lVar13 == 0) goto LAB_01dde7f8;
    }
  }
  if (local_220 != (long *)0x0) {
    (**(code **)(*local_220 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (local_70[0] != (long *)0x0) {
    plVar14 = local_70[0] + 5;
    do {
      lVar13 = *plVar14;
      iVar11 = (int)lVar13 + -1;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar16) {
        *(int *)plVar14 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    else if ((int)lVar13 == 0) {
LAB_01dde7f8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  bVar10 = FUN_01dd66b8(param_1);
  local_90 = (long *)0x308b26b249cd9f86;
  pcStack_88 = "L_box_change_00/L_ride_box_00";
  local_80 = 0x1d;
  local_78 = (long *)0x0;
  bVar10 = bVar10 & 1;
  lVar13 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_90);
  if (lVar13 != 0) {
    *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe | bVar10;
  }
  local_90 = (long *)0x308b27b249cda139;
  pcStack_88 = "L_box_change_00/L_ride_box_01";
  local_80 = 0x1d;
  local_78 = (long *)0x0;
  lVar13 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_90);
  if (lVar13 != 0) {
    *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe | bVar10;
  }
  local_90 = (long *)0x308b24b249cd9c20;
  pcStack_88 = "L_box_change_00/L_ride_box_02";
  local_80 = 0x1d;
  local_78 = (long *)0x0;
  lVar13 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_90);
  if (lVar13 != 0) {
    *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe | bVar10;
  }
  lVar13 = *(long *)(param_1 + 0x68);
  if ((lVar13 != 0) && (*(short *)(lVar13 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar13 + 0x1a);
    sVar17 = *(short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar17) {
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01ddecec;
        bVar16 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01ddecec:
        bVar16 = false;
      }
      if (bVar16) {
        lVar13 = *(long *)(lVar13 + 0x10);
        plVar14 = (long *)(lVar13 + -0x28);
        if (lVar13 != 0) {
          local_90 = (long *)0xb3d1a876121fe6e9;
          pcStack_88 = "Button_ride_small_00";
          local_80 = 0x14;
          local_78 = (long *)0x0;
          FUN_0111e3d4(plVar14,&local_90,bVar10);
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          local_90 = (long *)0xb3d1a776121fe536;
          pcStack_88 = "Button_ride_small_01";
          local_80 = 0x14;
          local_78 = (long *)0x0;
          FUN_0111e3d4(plVar14,&local_90,bVar10);
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          local_90 = (long *)0xb3d1a676121fe383;
          pcStack_88 = "Button_ride_small_02";
          local_80 = 0x14;
          local_78 = (long *)0x0;
          FUN_0111e3d4(plVar14,&local_90,bVar10);
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          lVar13 = *(long *)(lVar13 + 8);
          psVar1 = (short *)(lVar13 + 0x1a);
          do {
            sVar17 = *psVar1;
            cVar3 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar16) {
              *psVar1 = sVar17 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar17 == 1) {
            *(undefined8 *)(lVar13 + 0x10) = 0;
            (**(code **)(*plVar14 + 0x50))(plVar14);
          }
          else if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        break;
      }
      sVar17 = sVar2;
    } while (sVar2 != 0);
  }
  iVar11 = FUN_01ddf0dc(param_1);
  FUN_01ddf18c(param_1,iVar11 == 1);
  FUN_01ddf434(param_1);
  FUN_01ddf48c(param_1);
  return;
}


