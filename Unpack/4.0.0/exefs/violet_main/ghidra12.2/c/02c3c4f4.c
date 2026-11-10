/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02c3c4f4; name: FUN_02c3c4f4
 */


void FUN_02c3c4f4(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  code *pcVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *local_228;
  long local_220;
  long lStack_218;
  long local_210;
  long *plStack_208;
  long *local_200;
  long *local_1f8;
  undefined1 *local_1f0;
  code *local_1e8;
  code *local_1e0;
  code *local_1d8;
  long *local_1d0 [12];
  code *local_170;
  code *local_168;
  code *local_160;
  code *local_158;
  long *local_150 [12];
  code *local_f0;
  code *local_e8;
  code *local_e0;
  code *local_d8;
  long *local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long *plStack_b0;
  long *local_a8;
  long *local_a0;
  
  plVar12 = (long *)*param_2;
  *param_2 = 0;
  plVar14 = *(long **)(*param_1 + 8);
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_02c3d204;
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar11;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_02c3d204;
    lVar13 = plVar12[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_02c3d204;
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar11;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_02c3d204;
    lVar13 = plVar12[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_02c3d204;
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar11;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_02c3d204;
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_02c3d1f0;
  *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar14;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x1d0,0x10);
  if (plVar9 == (long *)0x0) {
LAB_02c3d1f4:
    (**(code **)(*plVar14 + 0xe8))(plVar14);
    goto LAB_02c3d204;
  }
  local_f0 = (code *)&LAB_02c3d3fc;
  local_e8 = FUN_02c3d558;
  local_e0 = FUN_02c3d5c0;
  local_d8 = FUN_02c3d650;
  local_170 = FUN_02c3d660;
  local_168 = FUN_02c3d7c8;
  local_160 = FUN_02c3d830;
  local_158 = FUN_02c3d8c0;
  local_1f0 = &LAB_02c3d8d0;
  local_1e8 = FUN_02c3d8e4;
  local_1e0 = FUN_02c3d94c;
  local_1d8 = FUN_02c3d9dc;
  local_1d0[0] = plVar12;
  local_150[0] = plVar12;
  local_d0 = plVar12;
  FUN_0191e33c();
  puVar6 = PTR_DAT_047e20d0;
  *(undefined4 *)(plVar9 + 8) = 0;
  plVar9[0xd] = 0;
  *plVar9 = (long)(puVar6 + 0x10);
  plVar9[4] = (long)(puVar6 + 0x88);
  plVar9[5] = (long)(puVar6 + 0xd8);
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  if (local_d8 != (code *)0x0) {
    (*local_d8)(&local_d0,plVar9 + 0xe);
    pcVar10 = local_e8;
    plVar9[0xd] = (long)local_d8;
    plVar9[10] = (long)local_f0;
    plVar9[0xb] = (long)local_e8;
    plVar9[0xc] = (long)local_e0;
    if (local_e8 != (code *)0x0) {
      local_e0 = (code *)0x0;
      local_d8 = (code *)0x0;
      local_f0 = (code *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar10)(&local_d0);
    }
  }
  plVar9[0x1a] = 0;
  plVar9[0x1c] = 0;
  plVar9[0x1d] = 0;
  plVar9[0x1b] = 0;
  if (local_158 != (code *)0x0) {
    (*local_158)(local_150,plVar9 + 0x1e);
    pcVar10 = local_168;
    plVar9[0x1d] = (long)local_158;
    plVar9[0x1a] = (long)local_170;
    plVar9[0x1b] = (long)local_168;
    plVar9[0x1c] = (long)local_160;
    if (local_168 != (code *)0x0) {
      local_160 = (code *)0x0;
      local_158 = (code *)0x0;
      local_170 = (code *)0x0;
      local_168 = (code *)0x0;
      (*pcVar10)(local_150);
    }
  }
  plVar9[0x2c] = 0;
  plVar9[0x2d] = 0;
  plVar9[0x2a] = 0;
  plVar9[0x2b] = 0;
  if (local_1d8 == (code *)0x0) {
LAB_02c3c7c4:
    pcVar10 = local_1e8;
    if (local_1e8 != (code *)0x0) {
      local_1e0 = (code *)0x0;
      local_1d8 = (code *)0x0;
      local_1f0 = (undefined1 *)0x0;
      local_1e8 = (code *)0x0;
      (*pcVar10)(local_1d0);
    }
  }
  else {
    (*local_1d8)(local_1d0,plVar9 + 0x2e);
    pcVar10 = local_1e8;
    plVar9[0x2d] = (long)local_1d8;
    plVar9[0x2a] = (long)local_1f0;
    plVar9[0x2b] = (long)local_1e8;
    plVar9[0x2c] = (long)local_1e0;
    if (local_1e8 != (code *)0x0) {
      local_1e0 = (code *)0x0;
      local_1d8 = (code *)0x0;
      local_1f0 = (undefined1 *)0x0;
      local_1e8 = (code *)0x0;
      (*pcVar10)(local_1d0);
      goto LAB_02c3c7c4;
    }
  }
  pcVar10 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (code *)0x0;
    local_158 = (code *)0x0;
    local_170 = (code *)0x0;
    local_168 = (code *)0x0;
    (*pcVar10)(local_150);
  }
  pcVar10 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(&local_d0);
  }
  *(undefined4 *)(plVar9 + 3) = 0x1001d0;
  plVar9[1] = (long)plVar14;
  plVar9[2] = (long)plVar9;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  lVar13 = plVar9[6];
  if (*(long *)(lVar13 + 0x10) == 0) goto LAB_02c3d204;
  psVar1 = (short *)(lVar13 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 0) {
    uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
    *(undefined8 *)(lVar13 + 8) = uVar11;
    *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) goto LAB_02c3d204;
  local_228 = (long *)param_1[1];
  if (local_228 != (long *)0x0) {
    lVar13 = local_228[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_02c3d204;
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar11;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_02c3d204;
  }
  local_220 = param_1[2];
  lStack_218 = param_1[3];
  local_210 = param_1[4];
  plStack_208 = (long *)param_1[5];
  if (plStack_208 != (long *)0x0) {
    (**(code **)(*plStack_208 + 0x18))();
  }
  lVar13 = plVar9[6];
  local_200 = plVar9;
  if (*(long *)(lVar13 + 0x10) == 0) goto LAB_02c3d204;
  psVar1 = (short *)(lVar13 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 0) {
    uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
    *(undefined8 *)(lVar13 + 8) = uVar11;
    *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) goto LAB_02c3d204;
  local_1f8 = plVar12;
  if (plVar12 == (long *)0x0) {
    bVar4 = true;
  }
  else {
    lVar13 = plVar12[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_02c3d204;
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar11;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_02c3d204;
    lVar13 = plVar12[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_02c3d204;
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar11;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_02c3d204;
    lVar13 = plVar12[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_02c3d204;
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      bVar4 = false;
      *(undefined8 *)(lVar13 + 8) = uVar11;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else {
      if (sVar2 == -1) goto LAB_02c3d204;
      bVar4 = false;
    }
  }
  plVar14 = *(long **)(*param_1 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_02c3d1f0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar14;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
  pcVar10 = (code *)(**(code **)(*plVar14 + 0x10))(plVar14,0x1d0,0x10);
  if (pcVar10 == (code *)0x0) goto LAB_02c3d1f4;
  local_d0 = local_228;
  local_e0 = (code *)0x0;
  local_d8 = (code *)0x0;
  local_f0 = (code *)0x0;
  local_e8 = (code *)0x0;
  if (local_228 != (long *)0x0) {
    lVar15 = local_228[6];
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_02c3d204;
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar11;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_02c3d204;
  }
  local_c8 = local_220;
  lStack_c0 = lStack_218;
  local_b8 = local_210;
  plStack_b0 = plStack_208;
  if (plStack_208 != (long *)0x0) {
    (**(code **)(*plStack_208 + 0x18))();
  }
  local_a8 = local_200;
  if (local_200 != (long *)0x0) {
    lVar15 = local_200[6];
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_02c3d204;
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar11;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_02c3d204;
  }
  local_a0 = local_1f8;
  if (local_1f8 != (long *)0x0) {
    lVar15 = local_1f8[6];
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_02c3d204;
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar11;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_02c3d204;
  }
  local_f0 = FUN_02c3d9ec;
  local_e8 = thunk_FUN_02c3d2ec;
  local_e0 = FUN_02c3df10;
  local_d8 = FUN_02c3e0a0;
  local_160 = (code *)0x0;
  local_158 = (code *)0x0;
  local_170 = (code *)0x0;
  local_168 = (code *)0x0;
  local_150[0] = plVar12;
  if (!bVar4) {
    lVar15 = plVar12[6];
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_02c3d204;
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar11;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_02c3d204;
  }
  local_170 = (code *)&LAB_02c3e17c;
  local_168 = FUN_02c3e2e4;
  local_160 = FUN_02c3e34c;
  local_158 = FUN_02c3e3dc;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1f0 = (undefined1 *)0x0;
  local_1e8 = (code *)0x0;
  local_1d0[0] = plVar12;
  if (!bVar4) {
    lVar15 = plVar12[6];
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_02c3d204;
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar11;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_02c3d204;
  }
  local_1f0 = &LAB_02c3e3ec;
  local_1e8 = FUN_02c3e400;
  local_1e0 = FUN_02c3e468;
  local_1d8 = FUN_02c3e4f8;
  FUN_0191e33c(pcVar10);
  *(undefined **)pcVar10 = puVar6 + 0x10;
  *(long *)(pcVar10 + 0x68) = 0;
  *(undefined **)(pcVar10 + 0x20) = puVar6 + 0x88;
  *(undefined **)(pcVar10 + 0x28) = puVar6 + 0xd8;
  *(undefined4 *)(pcVar10 + 0x40) = 1;
  *(long *)(pcVar10 + 0x50) = 0;
  *(long *)(pcVar10 + 0x58) = 0;
  *(long *)(pcVar10 + 0x60) = 0;
  if (local_d8 != (code *)0x0) {
    (*local_d8)(&local_d0,pcVar10 + 0x70);
    pcVar7 = local_e8;
    *(code **)(pcVar10 + 0x68) = local_d8;
    *(code **)(pcVar10 + 0x50) = local_f0;
    *(code **)(pcVar10 + 0x58) = local_e8;
    *(code **)(pcVar10 + 0x60) = local_e0;
    if (local_e8 != (code *)0x0) {
      local_e0 = (code *)0x0;
      local_d8 = (code *)0x0;
      local_f0 = (code *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar7)(&local_d0);
    }
  }
  *(long *)(pcVar10 + 0xd0) = 0;
  *(long *)(pcVar10 + 0xe0) = 0;
  *(long *)(pcVar10 + 0xe8) = 0;
  *(long *)(pcVar10 + 0xd8) = 0;
  if (local_158 != (code *)0x0) {
    (*local_158)(local_150,pcVar10 + 0xf0);
    pcVar7 = local_168;
    *(code **)(pcVar10 + 0xe8) = local_158;
    *(code **)(pcVar10 + 0xd0) = local_170;
    *(code **)(pcVar10 + 0xd8) = local_168;
    *(code **)(pcVar10 + 0xe0) = local_160;
    if (local_168 != (code *)0x0) {
      local_160 = (code *)0x0;
      local_158 = (code *)0x0;
      local_170 = (code *)0x0;
      local_168 = (code *)0x0;
      (*pcVar7)(local_150);
    }
  }
  *(long *)(pcVar10 + 0x160) = 0;
  *(long *)(pcVar10 + 0x168) = 0;
  *(long *)(pcVar10 + 0x150) = 0;
  *(long *)(pcVar10 + 0x158) = 0;
  if (local_1d8 == (code *)0x0) {
LAB_02c3ccf4:
    pcVar7 = local_1e8;
    if (local_1e8 != (code *)0x0) {
      local_1e0 = (code *)0x0;
      local_1d8 = (code *)0x0;
      local_1f0 = (undefined1 *)0x0;
      local_1e8 = (code *)0x0;
      (*pcVar7)(local_1d0);
    }
  }
  else {
    (*local_1d8)(local_1d0,pcVar10 + 0x170);
    pcVar7 = local_1e8;
    *(code **)(pcVar10 + 0x168) = local_1d8;
    *(undefined1 **)(pcVar10 + 0x150) = local_1f0;
    *(code **)(pcVar10 + 0x158) = local_1e8;
    *(code **)(pcVar10 + 0x160) = local_1e0;
    if (local_1e8 != (code *)0x0) {
      local_1e0 = (code *)0x0;
      local_1d8 = (code *)0x0;
      local_1f0 = (undefined1 *)0x0;
      local_1e8 = (code *)0x0;
      (*pcVar7)(local_1d0);
      goto LAB_02c3ccf4;
    }
  }
  pcVar7 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (code *)0x0;
    local_158 = (code *)0x0;
    local_170 = (code *)0x0;
    local_168 = (code *)0x0;
    (*pcVar7)(local_150);
  }
  pcVar7 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar7)(&local_d0);
  }
  *(undefined4 *)(pcVar10 + 0x18) = 0x1001d0;
  *(long **)(pcVar10 + 8) = plVar14;
  *(code **)(pcVar10 + 0x10) = pcVar10;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  lVar13 = *(long *)(pcVar10 + 0x30);
  local_f0 = pcVar10;
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_02c3d204:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  psVar1 = (short *)(lVar13 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 0) {
    uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
    *(undefined8 *)(lVar13 + 8) = uVar11;
    *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) goto LAB_02c3d204;
  lVar13 = *param_1;
  FUN_0191d764(lVar13 + 0xf0,&local_f0);
  if (*(int *)(lVar13 + 0x48) - 1U < 3) {
    FUN_0174a3b8(lVar13);
  }
  if (local_f0 != (code *)0x0) {
    lVar13 = *(long *)(local_f0 + 0x30);
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*(long *)local_f0 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_02c3d204;
  }
  if (!bVar4) {
    lVar13 = plVar12[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar2 == 0) goto LAB_02c3d204;
    lVar13 = plVar12[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar2 == 0) goto LAB_02c3d204;
  }
  FUN_02c3d2ec(&local_228);
  lVar13 = plVar9[6];
  psVar1 = (short *)(lVar13 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 1) {
    *(undefined8 *)(lVar13 + 0x10) = 0;
    (**(code **)(*plVar9 + 0x50))(plVar9);
  }
  else if (sVar2 == 0) goto LAB_02c3d204;
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar2 == 0) goto LAB_02c3d204;
  }
  return;
}


