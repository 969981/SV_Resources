/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fcef78; name: FUN_00fcef78
 */


void FUN_00fcef78(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  short *psVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  short sVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  int iVar22;
  int local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *local_98;
  char *local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar7 = PTR_DAT_047d8c78;
  uVar18 = 0;
  plVar1 = (long *)(param_1 + 8);
  puVar2 = PTR_DAT_047d66f8 + 0x10;
  while( true ) {
    lVar14 = param_1 + uVar18 * 0x118;
    if (((*(long *)(lVar14 + 0x15a0) == 0) ||
        ((*(byte *)(*(long *)(lVar14 + 0x15a0) + 0x1e8) & 1) != 0)) &&
       ((lVar11 = *(long *)(param_1 + uVar18 * 0x118 + 0x1560), lVar11 == 0 ||
        ((*(byte *)(lVar11 + 0x1e8) & 1) != 0)))) {
      local_78 = *(undefined8 *)(lVar14 + 0x1540);
      local_70 = *(undefined8 *)(lVar14 + 0x1548);
      uStack_68 = *(undefined8 *)(lVar14 + 0x1550);
    }
    else {
      local_70 = 0;
      uStack_68 = 0;
      local_78 = 0;
    }
    local_80 = (long *)0x0;
    local_98 = (long *)&DAT_fbec41851566601b;
    local_90 = "values";
    uStack_88 = 6;
    piVar9 = (int *)FUN_00efa07c(&local_78,&local_98);
    if (piVar9 == (int *)0x0) {
      local_cc = 0;
    }
    else {
      local_cc = *piVar9;
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_cc != 0) break;
LAB_00fd7684:
    uVar18 = uVar18 + 1;
    if (uVar18 == 0x62) {
      return;
    }
  }
  iVar22 = 0;
LAB_00fcf078:
  local_80 = (long *)0x0;
  local_98 = (long *)&DAT_fbec41851566601b;
  local_90 = "values";
  uStack_88 = 6;
  FUN_00e90ee0(&local_b0,&local_78,&local_98,iVar22);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  plVar17 = (long *)*plVar1;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar14 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
  *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x48,8);
  if (plVar10 == (long *)0x0) goto LAB_00fd7754;
  plVar10[7] = 0;
  plVar10[8] = 0;
  plVar10[2] = 0;
  plVar10[5] = 0;
  plVar10[6] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 3) = 0;
  *plVar10 = (long)puVar2;
  plVar10[1] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar11 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
    }
  }
  plVar10[4] = (long)(puVar7 + 0x88);
  *plVar10 = (long)(puVar7 + 0x10);
  plVar10[1] = lVar15;
  plVar12 = plVar10 + 5;
  *plVar12 = (long)(puVar7 + 0xd8);
  plVar21 = plVar10 + 6;
  *plVar21 = 0;
  plVar10[7] = 0;
  FUN_00d1a3f4(plVar21,plVar12);
  *plVar10 = (long)&DAT_04547460;
  plVar10[1] = (long)plVar17;
  plVar10[4] = (long)&PTR_LAB_045474e0;
  *plVar12 = (long)&PTR_LAB_04547530;
  plVar10[8] = -1;
  plVar10[2] = (long)plVar10;
  *(undefined4 *)(plVar10 + 3) = 0x80048;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
  lVar14 = *plVar21;
  if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
  psVar3 = (short *)(lVar14 + 0x1a);
  do {
    sVar16 = *psVar3;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
    if (bVar5) {
      *psVar3 = sVar16 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar16 == 0) {
    uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
    *(undefined8 *)(lVar14 + 8) = uVar13;
    *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
  }
  else if (sVar16 == -1) goto LAB_00fd7700;
  plVar12 = plVar10;
  switch((int)uVar18) {
  case 1:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) {
LAB_00fd7750:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
    if (plVar12 == (long *)0x0) break;
    memset(plVar12 + 1,0,0x50);
    puVar6 = PTR_DAT_047d66f8;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    plVar12[4] = (long)(puVar7 + 0x88);
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = lVar15;
    plVar20 = plVar12 + 5;
    *plVar20 = (long)(puVar7 + 0xd8);
    plVar19 = plVar12 + 6;
    *plVar19 = 0;
    plVar12[7] = 0;
    FUN_00d1a3f4(plVar19,plVar20);
    plVar12[8] = -1;
    puVar6 = PTR_DAT_047d9c90;
    *plVar12 = (long)(PTR_DAT_047d9c90 + 0x10);
    plVar12[1] = (long)plVar17;
    plVar12[4] = (long)(puVar6 + 0x90);
    *plVar20 = (long)(puVar6 + 0xe0);
    *(undefined4 *)(plVar12 + 10) = 0xffffffff;
    *(undefined4 *)(plVar12 + 9) = 0;
    *(undefined1 *)((long)plVar12 + 0x4c) = 0;
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x80058;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar14 = *plVar19;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_00fd7700;
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar16 == 0) goto LAB_00fd7728;
    goto switchD_00fcf210_caseD_4;
  case 2:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x60,8);
    if (plVar12 == (long *)0x0) break;
    memset(plVar12 + 1,0,0x58);
    puVar6 = PTR_DAT_047d66f8;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    plVar12[4] = (long)(puVar7 + 0x88);
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = lVar15;
    plVar19 = plVar12 + 5;
    *plVar19 = (long)(puVar7 + 0xd8);
    plVar20 = plVar12 + 6;
    *plVar20 = 0;
    plVar12[7] = 0;
    FUN_00d1a3f4(plVar20,plVar19);
    plVar12[8] = -1;
    puVar6 = PTR_DAT_047d9d68;
    *plVar12 = (long)(PTR_DAT_047d9d68 + 0x10);
    plVar12[1] = (long)plVar17;
    plVar12[4] = (long)(puVar6 + 0x90);
    *plVar19 = (long)(puVar6 + 0xe0);
    plVar12[9] = 0;
    plVar12[10] = 0x3f80000000000000;
    *(undefined1 *)((long)plVar12 + 0x5c) = 1;
    *(undefined4 *)(plVar12 + 0xb) = 0;
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x80060;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar14 = *plVar20;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_00fd7700;
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00fd3d34:
    if (sVar16 != 1) goto joined_r0x00fd4238;
LAB_00fd46d0:
    *(undefined8 *)(lVar14 + 0x10) = 0;
    (**(code **)(*plVar10 + 0x50))(plVar10);
LAB_00fd423c:
    goto switchD_00fcf210_caseD_4;
  case 3:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x68,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x60);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      plVar12[8] = -1;
      puVar6 = PTR_DAT_047d9d40;
      *plVar12 = (long)(PTR_DAT_047d9d40 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      plVar12[9] = 0;
      plVar12[10] = 0x3f0000003f000000;
      plVar12[0xb] = 0x3f800000;
      *(undefined1 *)(plVar12 + 0xc) = 1;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80068;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd3d34;
    }
    break;
  default:
    goto switchD_00fcf210_caseD_4;
  case 6:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x50);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      plVar12[8] = -1;
      puVar6 = PTR_DAT_047d9d80;
      *plVar12 = (long)(PTR_DAT_047d9d80 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      plVar12[9] = 0x3f800000;
      *(undefined1 *)(plVar12 + 10) = 0;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80058;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd3d34;
    }
    break;
  case 9:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x68,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x60);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      plVar12[8] = -1;
      puVar6 = PTR_DAT_047d9d90;
      *plVar12 = (long)(PTR_DAT_047d9d90 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      plVar12[9] = 0;
      plVar12[10] = 0x3f00000000000000;
      plVar12[0xb] = 0x3f8000003f000000;
      *(undefined4 *)(plVar12 + 0xc) = 0;
      *(undefined1 *)((long)plVar12 + 100) = 0;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80068;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd3d34;
    }
    break;
  case 10:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x80,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x78);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      plVar12[8] = -1;
      puVar6 = PTR_DAT_047d9d48;
      *plVar12 = (long)(PTR_DAT_047d9d48 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      *(undefined8 *)((long)plVar12 + 0x54) = 0x3f0000003f000000;
      *(undefined8 *)((long)plVar12 + 0x5c) = 0x3f800000;
      plVar12[9] = 0;
      *(undefined4 *)(plVar12 + 10) = 0;
      *(undefined1 *)((long)plVar12 + 100) = 0;
      *(undefined8 *)((long)plVar12 + 0x74) = 0;
      plVar12[0xd] = 0;
      *(undefined2 *)(plVar12 + 0xe) = 0;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80080;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd3d34;
    }
    break;
  case 0xb:
    plVar12 = (long *)FUN_01e43060(*plVar1);
    if (plVar12 != (long *)0x0) {
      lVar14 = plVar12[6];
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
    }
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd457c;
  case 0xc:
    plVar12 = (long *)FUN_01e43060(*plVar1);
    if (plVar12 != (long *)0x0) {
      lVar14 = plVar12[6];
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
    }
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd457c;
  case 0xd:
    plVar12 = (long *)FUN_01e43060(*plVar1);
    if (plVar12 != (long *)0x0) {
      lVar14 = plVar12[6];
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
    }
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd457c;
  case 0xe:
    FUN_016a9b44(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0xf:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x68,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x60);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      plVar12[8] = -1;
      puVar6 = PTR_DAT_047d9d20;
      *plVar12 = (long)(PTR_DAT_047d9d20 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      *(undefined8 *)((long)plVar12 + 0x5c) = 0x3f800000;
      plVar12[9] = 0;
      plVar12[10] = 0;
      *(undefined1 *)((long)plVar12 + 100) = 1;
      *(undefined4 *)(plVar12 + 0xb) = 0;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80068;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd3d34;
    }
    break;
  case 0x10:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x68,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x60);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      plVar12[8] = -1;
      puVar6 = PTR_DAT_047d9d50;
      *plVar12 = (long)(PTR_DAT_047d9d50 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      plVar12[9] = 0x3f800000;
      *(undefined1 *)(plVar12 + 10) = 1;
      *(undefined4 *)((long)plVar12 + 0x54) = 0;
      *(undefined1 *)(plVar12 + 0xb) = 0;
      *(undefined8 *)((long)plVar12 + 0x5c) = 0;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80068;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd3d34;
    }
    break;
  case 0x11:
    FUN_017d6f58(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0x12:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x50,8);
    if (plVar12 == (long *)0x0) {
LAB_00fd7784:
      lVar14 = *plVar17;
      goto LAB_00fd775c;
    }
    memset(plVar12 + 1,0,0x48);
    puVar6 = PTR_DAT_047d66f8;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    plVar12[4] = (long)(puVar7 + 0x88);
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = lVar15;
    plVar19 = plVar12 + 5;
    *plVar19 = (long)(puVar7 + 0xd8);
    plVar20 = plVar12 + 6;
    *plVar20 = 0;
    plVar12[7] = 0;
    FUN_00d1a3f4(plVar20,plVar19);
    plVar12[8] = -1;
    puVar6 = PTR_DAT_047d9d00;
    *plVar12 = (long)(PTR_DAT_047d9d00 + 0x10);
    plVar12[1] = (long)plVar17;
    plVar12[4] = (long)(puVar6 + 0x90);
    *plVar19 = (long)(puVar6 + 0xe0);
    *(undefined4 *)(plVar12 + 9) = 0;
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x80050;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar14 = *plVar20;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_00fd7700;
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd457c;
  case 0x13:
    FUN_016a4db8(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0x14:
    FUN_016a60e8(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0x15:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x50,8);
    if (plVar12 == (long *)0x0) goto LAB_00fd7784;
    memset(plVar12 + 1,0,0x48);
    puVar6 = PTR_DAT_047d66f8;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    plVar12[4] = (long)(puVar7 + 0x88);
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = lVar15;
    plVar19 = plVar12 + 5;
    *plVar19 = (long)(puVar7 + 0xd8);
    plVar20 = plVar12 + 6;
    *plVar20 = 0;
    plVar12[7] = 0;
    FUN_00d1a3f4(plVar20,plVar19);
    plVar12[8] = -1;
    puVar6 = PTR_DAT_047d9db8;
    *plVar12 = (long)(PTR_DAT_047d9db8 + 0x10);
    plVar12[1] = (long)plVar17;
    plVar12[4] = (long)(puVar6 + 0x90);
    *plVar19 = (long)(puVar6 + 0xe0);
    *(undefined4 *)(plVar12 + 9) = 0;
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x80050;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar14 = *plVar20;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_00fd7700;
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd457c;
  case 0x16:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x50);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      plVar12[8] = -1;
      puVar6 = PTR_DAT_047d9da8;
      *plVar12 = (long)(PTR_DAT_047d9da8 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      *(undefined2 *)((long)plVar12 + 0x4c) = 0x100;
      *(undefined4 *)(plVar12 + 10) = 0xffffffff;
      *(undefined4 *)(plVar12 + 9) = 0;
      *(undefined1 *)((long)plVar12 + 0x4e) = 0;
      *(undefined1 *)((long)plVar12 + 0x54) = 0;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80058;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd3d34;
    }
    break;
  case 0x17:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x50,8);
    if (plVar12 == (long *)0x0) goto LAB_00fd7784;
    memset(plVar12 + 1,0,0x48);
    puVar6 = PTR_DAT_047d66f8;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    plVar12[4] = (long)(puVar7 + 0x88);
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = lVar15;
    plVar19 = plVar12 + 5;
    *plVar19 = (long)(puVar7 + 0xd8);
    plVar20 = plVar12 + 6;
    *plVar20 = 0;
    plVar12[7] = 0;
    FUN_00d1a3f4(plVar20,plVar19);
    plVar12[8] = -1;
    puVar6 = PTR_DAT_047d9cf0;
    *plVar12 = (long)(PTR_DAT_047d9cf0 + 0x10);
    plVar12[1] = (long)plVar17;
    plVar12[4] = (long)(puVar6 + 0x90);
    *plVar19 = (long)(puVar6 + 0xe0);
    *(undefined4 *)(plVar12 + 9) = 0;
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x80050;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar14 = *plVar20;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_00fd7700;
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd457c;
  case 0x18:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x50,8);
    if (plVar12 == (long *)0x0) goto LAB_00fd7784;
    memset(plVar12 + 1,0,0x48);
    puVar6 = PTR_DAT_047d66f8;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    plVar12[4] = (long)(puVar7 + 0x88);
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = lVar15;
    plVar19 = plVar12 + 5;
    *plVar19 = (long)(puVar7 + 0xd8);
    plVar20 = plVar12 + 6;
    *plVar20 = 0;
    plVar12[7] = 0;
    FUN_00d1a3f4(plVar20,plVar19);
    plVar12[8] = -1;
    puVar6 = PTR_DAT_047d9d38;
    *plVar12 = (long)(PTR_DAT_047d9d38 + 0x10);
    plVar12[1] = (long)plVar17;
    plVar12[4] = (long)(puVar6 + 0x90);
    *plVar19 = (long)(puVar6 + 0xe0);
    plVar12[9] = 0;
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x80050;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar14 = *plVar20;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_00fd7700;
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd457c;
  case 0x1a:
    FUN_017d7250(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0x1b:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x78,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x70);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      plVar12[8] = -1;
      puVar6 = PTR_DAT_047d9cf8;
      *plVar12 = (long)(PTR_DAT_047d9cf8 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      plVar12[0xd] = 0;
      plVar12[0xe] = 0;
      *(undefined1 *)(plVar12 + 10) = 1;
      plVar12[0xb] = (long)&DAT_cbf29ce484222645;
      plVar12[0xc] = (long)&DAT_03c886bc;
      plVar12[9] = 0;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80078;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd3d34;
    }
    break;
  case 0x1c:
    FUN_017eb500(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0x1d:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x50,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x48);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      plVar12[8] = -1;
      puVar6 = PTR_DAT_047d9d18;
      *plVar12 = (long)(PTR_DAT_047d9d18 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      *(undefined1 *)((long)plVar12 + 0x4c) = 1;
      *(undefined4 *)(plVar12 + 9) = 0;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80050;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd3d34;
    }
    break;
  case 0x1e:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x50,8);
    if (plVar12 == (long *)0x0) goto LAB_00fd7784;
    memset(plVar12 + 1,0,0x48);
    puVar6 = PTR_DAT_047d66f8;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    plVar12[4] = (long)(puVar7 + 0x88);
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = lVar15;
    plVar19 = plVar12 + 5;
    *plVar19 = (long)(puVar7 + 0xd8);
    plVar20 = plVar12 + 6;
    *plVar20 = 0;
    plVar12[7] = 0;
    FUN_00d1a3f4(plVar20,plVar19);
    plVar12[8] = -1;
    puVar6 = PTR_DAT_047d9d58;
    *plVar12 = (long)(PTR_DAT_047d9d58 + 0x10);
    plVar12[1] = (long)plVar17;
    plVar12[4] = (long)(puVar6 + 0x90);
    *plVar19 = (long)(puVar6 + 0xe0);
    plVar12[9] = 0;
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x80050;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar14 = *plVar20;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_00fd7700;
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd457c;
  case 0x1f:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x50);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      plVar12[8] = -1;
      puVar6 = PTR_DAT_047d9d08;
      *plVar12 = (long)(PTR_DAT_047d9d08 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      *(undefined2 *)(plVar12 + 10) = 1;
      *(undefined4 *)((long)plVar12 + 0x54) = 0xffffffff;
      plVar12[9] = 0;
      *(undefined1 *)((long)plVar12 + 0x52) = 0;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80058;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd3d34;
    }
    break;
  case 0x20:
    FUN_017d7548(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0x21:
    FUN_017d7840(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0x22:
    FUN_017d7b38(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0x23:
    FUN_017d7e30(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0x24:
    FUN_017d8128(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0x25:
    FUN_017d8420(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0x26:
    FUN_017d8718(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0x27:
    FUN_017d8a10(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0x29:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x78,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x70);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      plVar12[8] = -1;
      puVar6 = PTR_DAT_047d9db0;
      *plVar12 = (long)(PTR_DAT_047d9db0 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      *(undefined1 *)((long)plVar12 + 0x4c) = 1;
      *(undefined4 *)(plVar12 + 9) = 0;
      plVar12[0xc] = 0;
      plVar12[0xd] = 0;
      *(undefined1 *)(plVar12 + 0xe) = 0;
      plVar12[10] = (long)&DAT_cbf29ce484222645;
      plVar12[0xb] = (long)&DAT_03c886bc;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80078;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd3d34;
    }
    break;
  case 0x2a:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x60,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x58);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      plVar12[8] = -1;
      puVar6 = PTR_DAT_047d9e00;
      *plVar12 = (long)(PTR_DAT_047d9e00 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      *(undefined4 *)(plVar12 + 0xb) = 0;
      plVar12[2] = (long)plVar12;
      plVar12[9] = 0x3f00000000000000;
      plVar12[10] = 0x3f8000003f000000;
      *(undefined2 *)((long)plVar12 + 0x5c) = 0x101;
      *(undefined4 *)(plVar12 + 3) = 0x80060;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd3d34;
    }
    break;
  case 0x2c:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x60,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x58);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      plVar12[8] = -1;
      puVar6 = PTR_DAT_047d9ce8;
      *plVar12 = (long)(PTR_DAT_047d9ce8 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      plVar12[2] = (long)plVar12;
      plVar12[9] = 0x3f0000003f000000;
      plVar12[10] = 0x3f800000;
      *(undefined1 *)(plVar12 + 0xb) = 1;
      *(undefined4 *)(plVar12 + 3) = 0x80060;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd3d34;
    }
    break;
  case 0x2d:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x50,8);
    if (plVar12 == (long *)0x0) goto LAB_00fd7784;
    memset(plVar12 + 1,0,0x48);
    puVar6 = PTR_DAT_047d66f8;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    plVar12[4] = (long)(puVar7 + 0x88);
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = lVar15;
    plVar19 = plVar12 + 5;
    *plVar19 = (long)(puVar7 + 0xd8);
    plVar20 = plVar12 + 6;
    *plVar20 = 0;
    plVar12[7] = 0;
    FUN_00d1a3f4(plVar20,plVar19);
    plVar12[8] = -1;
    puVar6 = PTR_DAT_047d9d98;
    *plVar12 = (long)(PTR_DAT_047d9d98 + 0x10);
    plVar12[1] = (long)plVar17;
    plVar12[4] = (long)(puVar6 + 0x90);
    *plVar19 = (long)(puVar6 + 0xe0);
    plVar12[9] = 0;
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x80050;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar14 = *plVar20;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_00fd7700;
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd457c;
  case 0x2e:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x50,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x48);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      puVar6 = PTR_DAT_047d9ce0;
      plVar12[8] = -1;
      *plVar12 = (long)(puVar6 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      *(undefined4 *)(plVar12 + 9) = 0;
      *(undefined1 *)((long)plVar12 + 0x4c) = 0;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80050;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd3d34;
    }
    break;
  case 0x2f:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x50,8);
    if (plVar12 == (long *)0x0) goto LAB_00fd7784;
    memset(plVar12 + 1,0,0x48);
    puVar6 = PTR_DAT_047d66f8;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    plVar12[4] = (long)(puVar7 + 0x88);
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = lVar15;
    plVar19 = plVar12 + 5;
    *plVar19 = (long)(puVar7 + 0xd8);
    plVar20 = plVar12 + 6;
    *plVar20 = 0;
    plVar12[7] = 0;
    FUN_00d1a3f4(plVar20,plVar19);
    plVar12[8] = -1;
    puVar6 = PTR_DAT_047d9cd8;
    *plVar12 = (long)(PTR_DAT_047d9cd8 + 0x10);
    plVar12[1] = (long)plVar17;
    plVar12[4] = (long)(puVar6 + 0x90);
    *plVar19 = (long)(puVar6 + 0xe0);
    *(undefined4 *)(plVar12 + 9) = 0;
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x80050;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar14 = *plVar20;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_00fd7700;
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd457c;
  case 0x30:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x50,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x48);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      plVar12[8] = -1;
      puVar6 = PTR_DAT_047d9d30;
      *plVar12 = (long)(PTR_DAT_047d9d30 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      *(undefined2 *)((long)plVar12 + 0x4c) = 0x100;
      *(undefined4 *)(plVar12 + 9) = 0;
      *(undefined1 *)((long)plVar12 + 0x4e) = 0;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80050;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd3d34;
    }
    break;
  case 0x31:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x50,8);
    if (plVar12 == (long *)0x0) goto LAB_00fd7784;
    memset(plVar12 + 1,0,0x48);
    puVar6 = PTR_DAT_047d66f8;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    plVar12[4] = (long)(puVar7 + 0x88);
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = lVar15;
    plVar19 = plVar12 + 5;
    *plVar19 = (long)(puVar7 + 0xd8);
    plVar20 = plVar12 + 6;
    *plVar20 = 0;
    plVar12[7] = 0;
    FUN_00d1a3f4(plVar20,plVar19);
    plVar12[8] = -1;
    puVar6 = PTR_DAT_047d9d60;
    *plVar12 = (long)(PTR_DAT_047d9d60 + 0x10);
    plVar12[1] = (long)plVar17;
    plVar12[4] = (long)(puVar6 + 0x90);
    *plVar19 = (long)(puVar6 + 0xe0);
    *(undefined4 *)(plVar12 + 9) = 0;
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x80050;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar14 = *plVar20;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_00fd7700;
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd457c;
  case 0x33:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x50);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      puVar6 = PTR_DAT_047d9dc8;
      plVar12[8] = -1;
      plVar12[9] = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      *(undefined1 *)(plVar12 + 10) = 0;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80058;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_00fd4230:
      if (sVar16 == 1) goto LAB_00fd46d0;
joined_r0x00fd4238:
      if (sVar16 == 0) goto LAB_00fd7728;
      goto LAB_00fd423c;
    }
    break;
  case 0x34:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x78,8);
    if (plVar12 == (long *)0x0) goto LAB_00fd7784;
    memset(plVar12 + 1,0,0x70);
    puVar6 = PTR_DAT_047d66f8;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    plVar12[4] = (long)(puVar7 + 0x88);
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = lVar15;
    plVar19 = plVar12 + 5;
    *plVar19 = (long)(puVar7 + 0xd8);
    plVar12[6] = 0;
    plVar12[7] = 0;
    FUN_00d1a3f4(plVar12 + 6,plVar19);
    puVar6 = PTR_DAT_047d9cb0;
    *plVar12 = (long)(PTR_DAT_047d9cb0 + 0x10);
    plVar12[4] = (long)(puVar6 + 0x90);
    *plVar19 = (long)(puVar6 + 0xe0);
    plVar12[8] = -1;
    plVar12[9] = 0x41a0000000000000;
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar6 = PTR_DAT_047d3e30;
    lVar11 = *(long *)(PTR_DAT_047d3e30 + 8);
    plVar12[10] = *(long *)PTR_DAT_047d3e30;
    plVar12[0xb] = lVar11;
    plVar19 = *(long **)(puVar6 + 0x18);
    plVar12[0xc] = *(long *)(puVar6 + 0x10);
    plVar12[0xd] = (long)plVar19;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x18))();
    }
    *(undefined2 *)(plVar12 + 0xe) = 0;
    plVar12[1] = (long)plVar17;
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x80078;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar14 = plVar12[6];
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_00fd7700;
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar16 == 0) goto LAB_00fd7728;
    goto switchD_00fcf210_caseD_4;
  case 0x35:
    plVar12 = (long *)FUN_01e4329c(*plVar1);
    if (plVar12 != (long *)0x0) {
      lVar14 = plVar12[6];
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
    }
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd457c;
  case 0x36:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x70,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x68);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      puVar6 = PTR_DAT_047d9d70;
      plVar12[8] = -1;
      plVar12[9] = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      plVar12[0xc] = 0;
      plVar12[10] = 0;
      plVar12[0xb] = 0;
      *(undefined1 *)(plVar12 + 0xd) = 0;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80070;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd4230;
    }
    break;
  case 0x37:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x60,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x58);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      plVar12[8] = -1;
      puVar6 = PTR_DAT_047d9d88;
      *plVar12 = (long)(PTR_DAT_047d9d88 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      plVar12[2] = (long)plVar12;
      plVar12[9] = 0;
      plVar12[10] = 0;
      *(undefined4 *)((long)plVar12 + 0x57) = 0;
      *(undefined4 *)(plVar12 + 3) = 0x80060;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd4230;
    }
    break;
  case 0x39:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x50,8);
    if (plVar12 == (long *)0x0) goto LAB_00fd7784;
    memset(plVar12 + 1,0,0x48);
    puVar6 = PTR_DAT_047d66f8;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    plVar12[4] = (long)(puVar7 + 0x88);
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = lVar15;
    plVar19 = plVar12 + 5;
    *plVar19 = (long)(puVar7 + 0xd8);
    plVar20 = plVar12 + 6;
    *plVar20 = 0;
    plVar12[7] = 0;
    FUN_00d1a3f4(plVar20,plVar19);
    puVar6 = PTR_DAT_047d9e08;
    plVar12[8] = -1;
    *plVar12 = (long)(puVar6 + 0x10);
    plVar12[1] = (long)plVar17;
    plVar12[4] = (long)(puVar6 + 0x90);
    *plVar19 = (long)(puVar6 + 0xe0);
    *(undefined4 *)(plVar12 + 9) = 0x41200000;
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x80050;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar14 = *plVar20;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_00fd7700;
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd457c;
  case 0x3a:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x50);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      puVar6 = PTR_DAT_047d9d78;
      *plVar12 = (long)(PTR_DAT_047d9d78 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      *(undefined4 *)(plVar12 + 10) = 0;
      plVar12[8] = -1;
      plVar12[9] = 0x3f80000000000000;
      *(undefined1 *)((long)plVar12 + 0x54) = 1;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80058;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd4230;
    }
    break;
  case 0x3b:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x60,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x58);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      puVar6 = PTR_DAT_047d9cd0;
      plVar12[8] = -1;
      plVar12[9] = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      *(undefined2 *)(plVar12 + 0xb) = 1;
      plVar12[10] = 0;
      *(undefined1 *)((long)plVar12 + 0x5a) = 0;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80060;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd4230;
    }
    break;
  case 0x3c:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x60,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x58);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      puVar6 = PTR_DAT_047d9cb8;
      plVar12[8] = -1;
      plVar12[9] = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      *(undefined2 *)(plVar12 + 0xb) = 1;
      plVar12[10] = 0;
      *(undefined1 *)((long)plVar12 + 0x5a) = 0;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80060;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd4230;
    }
    break;
  case 0x3d:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x60,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x58);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      plVar12[8] = -1;
      puVar6 = PTR_DAT_047d9e18;
      *plVar12 = (long)(PTR_DAT_047d9e18 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      plVar12[2] = (long)plVar12;
      plVar12[9] = 0x3f0000003f000000;
      plVar12[10] = 0x3f800000;
      *(undefined1 *)(plVar12 + 0xb) = 1;
      *(undefined4 *)(plVar12 + 3) = 0x80060;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd4230;
    }
    break;
  case 0x41:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
    if (plVar12 == (long *)0x0) goto LAB_00fd7784;
    memset(plVar12 + 1,0,0x50);
    puVar6 = PTR_DAT_047d66f8;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    plVar12[4] = (long)(puVar7 + 0x88);
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = lVar15;
    plVar19 = plVar12 + 5;
    *plVar19 = (long)(puVar7 + 0xd8);
    plVar20 = plVar12 + 6;
    *plVar20 = 0;
    plVar12[7] = 0;
    FUN_00d1a3f4(plVar20,plVar19);
    puVar6 = PTR_DAT_047d9df8;
    plVar12[8] = -1;
    plVar12[9] = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    plVar12[1] = (long)plVar17;
    plVar12[4] = (long)(puVar6 + 0x90);
    *plVar19 = (long)(puVar6 + 0xe0);
    *(undefined4 *)(plVar12 + 10) = 0;
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x80058;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar14 = *plVar20;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_00fd7700;
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd457c;
  case 0x42:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x68,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x60);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      puVar6 = PTR_DAT_047d9cc0;
      plVar12[8] = -1;
      plVar12[9] = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      *(undefined4 *)(plVar12 + 0xc) = 0;
      plVar12[2] = (long)plVar12;
      plVar12[10] = 0x3f00000000000000;
      plVar12[0xb] = 0x3f8000003f000000;
      *(undefined1 *)((long)plVar12 + 100) = 1;
      *(undefined4 *)(plVar12 + 3) = 0x80068;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd4230;
    }
    break;
  case 0x43:
    FUN_016ab9c8(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0x45:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x68,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x60);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      plVar12[8] = -1;
      puVar6 = PTR_DAT_047d9dc0;
      *plVar12 = (long)(PTR_DAT_047d9dc0 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      plVar12[9] = 0;
      plVar12[10] = 0x3f80000000000000;
      *(undefined2 *)((long)plVar12 + 100) = 0x101;
      plVar12[0xb] = 0;
      *(undefined4 *)(plVar12 + 0xc) = 0;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80068;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd4230;
    }
    break;
  case 0x46:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x50,8);
    if (plVar12 == (long *)0x0) goto LAB_00fd7784;
    memset(plVar12 + 1,0,0x48);
    puVar6 = PTR_DAT_047d66f8;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    plVar12[4] = (long)(puVar7 + 0x88);
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = lVar15;
    plVar19 = plVar12 + 5;
    *plVar19 = (long)(puVar7 + 0xd8);
    plVar20 = plVar12 + 6;
    *plVar20 = 0;
    plVar12[7] = 0;
    FUN_00d1a3f4(plVar20,plVar19);
    plVar12[8] = -1;
    puVar6 = PTR_DAT_047d9cc8;
    *plVar12 = (long)(PTR_DAT_047d9cc8 + 0x10);
    plVar12[1] = (long)plVar17;
    plVar12[4] = (long)(puVar6 + 0x90);
    *plVar19 = (long)(puVar6 + 0xe0);
    *(undefined4 *)(plVar12 + 9) = 0;
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x80050;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar14 = *plVar20;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_00fd7700;
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd457c;
  case 0x47:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x60,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x58);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      plVar12[8] = -1;
      puVar6 = PTR_DAT_047d9de8;
      *plVar12 = (long)(PTR_DAT_047d9de8 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      *(undefined8 *)((long)plVar12 + 0x54) = 0;
      plVar12[9] = 0;
      *(undefined1 *)(plVar12 + 10) = 0;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80060;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd4230;
    }
    break;
  case 0x48:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x60,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x58);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      plVar12[8] = -1;
      puVar6 = PTR_DAT_047d9dd0;
      *plVar12 = (long)(PTR_DAT_047d9dd0 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      *(undefined8 *)((long)plVar12 + 0x54) = 0;
      plVar12[9] = 0;
      *(undefined1 *)(plVar12 + 10) = 0;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80060;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd4230;
    }
    break;
  case 0x49:
    FUN_016a42fc(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0x4a:
    FUN_016a640c(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0x4b:
    FUN_017f76f8(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0x4c:
    FUN_016a90f4(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0x4d:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x60,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x58);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      puVar6 = PTR_DAT_047d9dd8;
      *plVar12 = (long)(PTR_DAT_047d9dd8 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      plVar12[8] = -1;
      plVar12[9] = 0x3f00000000000000;
      plVar12[2] = (long)plVar12;
      plVar12[10] = 0x3f8000003f000000;
      plVar12[0xb] = 0;
      *(undefined4 *)(plVar12 + 3) = 0x80060;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd4230;
    }
    break;
  case 0x4e:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x50,8);
    if (plVar12 == (long *)0x0) goto LAB_00fd7784;
    memset(plVar12 + 1,0,0x48);
    puVar6 = PTR_DAT_047d66f8;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    plVar12[4] = (long)(puVar7 + 0x88);
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = lVar15;
    plVar19 = plVar12 + 5;
    *plVar19 = (long)(puVar7 + 0xd8);
    plVar20 = plVar12 + 6;
    *plVar20 = 0;
    plVar12[7] = 0;
    FUN_00d1a3f4(plVar20,plVar19);
    plVar12[8] = -1;
    puVar6 = PTR_DAT_047d9d10;
    *plVar12 = (long)(PTR_DAT_047d9d10 + 0x10);
    plVar12[1] = (long)plVar17;
    plVar12[4] = (long)(puVar6 + 0x90);
    *plVar19 = (long)(puVar6 + 0xe0);
    *(undefined4 *)(plVar12 + 9) = 0;
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x80050;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar14 = *plVar20;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_00fd7700;
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd457c;
  case 0x4f:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x50,8);
    if (plVar12 == (long *)0x0) goto LAB_00fd7784;
    memset(plVar12 + 1,0,0x48);
    puVar6 = PTR_DAT_047d66f8;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    plVar12[4] = (long)(puVar7 + 0x88);
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = lVar15;
    plVar19 = plVar12 + 5;
    *plVar19 = (long)(puVar7 + 0xd8);
    plVar20 = plVar12 + 6;
    *plVar20 = 0;
    plVar12[7] = 0;
    FUN_00d1a3f4(plVar20,plVar19);
    plVar12[8] = -1;
    puVar6 = PTR_DAT_047d9df0;
    *plVar12 = (long)(PTR_DAT_047d9df0 + 0x10);
    plVar12[1] = (long)plVar17;
    plVar12[4] = (long)(puVar6 + 0x90);
    *plVar19 = (long)(puVar6 + 0xe0);
    *(undefined4 *)(plVar12 + 9) = 0;
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x80050;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar14 = *plVar20;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_00fd7700;
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd457c;
  case 0x50:
    FUN_016a3fe0(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0x51:
    plVar12 = (long *)FUN_01e4329c(*plVar1);
    if (plVar12 != (long *)0x0) {
      lVar14 = plVar12[6];
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
    }
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd457c;
  case 0x53:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x50,8);
    if (plVar12 == (long *)0x0) goto LAB_00fd7784;
    memset(plVar12 + 1,0,0x48);
    puVar6 = PTR_DAT_047d66f8;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    plVar12[4] = (long)(puVar7 + 0x88);
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = lVar15;
    plVar19 = plVar12 + 5;
    *plVar19 = (long)(puVar7 + 0xd8);
    plVar20 = plVar12 + 6;
    *plVar20 = 0;
    plVar12[7] = 0;
    FUN_00d1a3f4(plVar20,plVar19);
    plVar12[8] = -1;
    puVar6 = PTR_DAT_047d9e10;
    *plVar12 = (long)(PTR_DAT_047d9e10 + 0x10);
    plVar12[1] = (long)plVar17;
    plVar12[4] = (long)(puVar6 + 0x90);
    *plVar19 = (long)(puVar6 + 0xe0);
    *(undefined4 *)(plVar12 + 9) = 0;
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x80050;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar14 = *plVar20;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_00fd7700;
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd457c;
  case 0x54:
    FUN_016a50d8(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0x55:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x50,8);
    if (plVar12 == (long *)0x0) goto LAB_00fd7784;
    memset(plVar12 + 1,0,0x48);
    puVar6 = PTR_DAT_047d66f8;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    plVar12[4] = (long)(puVar7 + 0x88);
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = lVar15;
    plVar19 = plVar12 + 5;
    *plVar19 = (long)(puVar7 + 0xd8);
    plVar20 = plVar12 + 6;
    *plVar20 = 0;
    plVar12[7] = 0;
    FUN_00d1a3f4(plVar20,plVar19);
    puVar6 = PTR_DAT_047d9e20;
    plVar12[8] = -1;
    *plVar12 = (long)(puVar6 + 0x10);
    plVar12[1] = (long)plVar17;
    plVar12[4] = (long)(puVar6 + 0x90);
    *plVar19 = (long)(puVar6 + 0xe0);
    *(undefined4 *)(plVar12 + 9) = 0;
    *(undefined1 *)((long)plVar12 + 0x4c) = 0;
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x80050;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar14 = *plVar20;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_00fd7700;
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd457c;
  case 0x57:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x68,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x60);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      puVar6 = PTR_DAT_047d9de0;
      plVar12[8] = -1;
      plVar12[9] = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      *(undefined4 *)(plVar12 + 0xc) = 0;
      plVar12[2] = (long)plVar12;
      plVar12[10] = 0x3f00000000000000;
      plVar12[0xb] = 0x3f8000003f000000;
      *(undefined1 *)((long)plVar12 + 100) = 1;
      *(undefined4 *)(plVar12 + 3) = 0x80068;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd4230;
    }
    break;
  case 0x58:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
    if (plVar12 == (long *)0x0) goto LAB_00fd7784;
    memset(plVar12 + 1,0,0x50);
    puVar6 = PTR_DAT_047d66f8;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    plVar12[4] = (long)(puVar7 + 0x88);
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = lVar15;
    plVar19 = plVar12 + 5;
    *plVar19 = (long)(puVar7 + 0xd8);
    plVar20 = plVar12 + 6;
    *plVar20 = 0;
    plVar12[7] = 0;
    FUN_00d1a3f4(plVar20,plVar19);
    puVar6 = PTR_DAT_047d9ca8;
    plVar12[8] = -1;
    *plVar12 = (long)(puVar6 + 0x10);
    plVar12[1] = (long)plVar17;
    plVar12[4] = (long)(puVar6 + 0x90);
    *plVar19 = (long)(puVar6 + 0xe0);
    *(undefined4 *)(plVar12 + 9) = 0;
    *(undefined8 *)((long)plVar12 + 0x4c) = 0;
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x80058;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar14 = *plVar20;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_00fd7700;
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd457c;
  case 0x59:
    FUN_017d8d08(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fd4404;
  case 0x5b:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x68,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x60);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      plVar12[8] = -1;
      puVar6 = PTR_DAT_047d9da0;
      *plVar12 = (long)(PTR_DAT_047d9da0 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      plVar12[9] = 0;
      plVar12[10] = 0x3f0000003f000000;
      plVar12[0xb] = 0x3f800000;
      *(undefined4 *)(plVar12 + 0xc) = 1;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80068;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd4230;
    }
    break;
  case 0x5c:
    FUN_017f4f78(&local_98,*plVar1);
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00fd4404:
    if (sVar16 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar16 == 0) goto LAB_00fd7728;
    plVar12 = local_98;
switchD_00fcf210_caseD_4:
    local_c8 = local_b0;
    uStack_c0 = uStack_a8;
    local_b8 = local_a0;
    (**(code **)(*plVar12 + 0x68))(plVar12,&local_c8,uVar18 & 0xffffffff);
    local_98 = (long *)CONCAT44(local_98._4_4_,*(undefined4 *)((long)plVar12 + 0x44));
    plVar17 = (long *)FUN_00f76b98(param_1 + 0x1458,&local_98);
    if (plVar12 != (long *)0x0) {
      lVar14 = plVar12[6];
      if (*(long *)(lVar14 + 0x10) == 0) {
LAB_00fd76e0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) {
LAB_00fd7700:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    plVar10 = (long *)*plVar17;
    *plVar17 = (long)plVar12;
    if (plVar10 != (long *)0x0) {
      lVar14 = plVar10[6];
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))();
      }
      else if (sVar16 == 0) goto LAB_00fd7728;
    }
    if (plVar12 != (long *)0x0) {
      lVar14 = plVar12[6];
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))(plVar12);
      }
      else if (sVar16 == 0) {
LAB_00fd7728:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    iVar22 = iVar22 + 1;
    if (iVar22 == local_cc) goto LAB_00fd7684;
    goto LAB_00fcf078;
  case 0x5d:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x60,0x10);
    if (plVar12 == (long *)0x0) goto LAB_00fd7784;
    memset(plVar12,0,0x60);
    puVar6 = PTR_DAT_047d66f8;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    plVar12[4] = (long)(puVar7 + 0x88);
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = lVar15;
    plVar19 = plVar12 + 5;
    *plVar19 = (long)(puVar7 + 0xd8);
    plVar20 = plVar12 + 6;
    *plVar20 = 0;
    plVar12[7] = 0;
    FUN_00d1a3f4(plVar20,plVar19);
    plVar12[8] = -1;
    puVar6 = PTR_DAT_047d9e28;
    *plVar12 = (long)(PTR_DAT_047d9e28 + 0x10);
    plVar12[1] = (long)plVar17;
    plVar12[4] = (long)(puVar6 + 0x90);
    *plVar19 = (long)(puVar6 + 0xe0);
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x100060;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar14 = *plVar20;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_00fd7700;
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00fd457c:
    if (sVar16 == 1) {
LAB_00fd4700:
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar16 == 0) goto LAB_00fd7728;
    goto switchD_00fcf210_caseD_4;
  case 0x5e:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x68,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x60);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      puVar6 = PTR_DAT_047d9ca0;
      plVar12[8] = -1;
      plVar12[9] = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      *(undefined4 *)(plVar12 + 0xc) = 0;
      plVar12[10] = 0x3f80000000000000;
      plVar12[0xb] = 0x3f800000;
      *(undefined1 *)((long)plVar12 + 100) = 1;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80068;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd4230;
    }
    break;
  case 0x5f:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x80,8);
    if (plVar12 != (long *)0x0) {
      memset(plVar12 + 1,0,0x78);
      puVar6 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar6 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar12[4] = (long)(puVar7 + 0x88);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = lVar15;
      plVar19 = plVar12 + 5;
      *plVar19 = (long)(puVar7 + 0xd8);
      plVar20 = plVar12 + 6;
      *plVar20 = 0;
      plVar12[7] = 0;
      FUN_00d1a3f4(plVar20,plVar19);
      plVar12[8] = -1;
      puVar6 = PTR_DAT_047d9d28;
      *plVar12 = (long)(PTR_DAT_047d9d28 + 0x10);
      plVar12[1] = (long)plVar17;
      plVar12[4] = (long)(puVar6 + 0x90);
      *plVar19 = (long)(puVar6 + 0xe0);
      *(undefined1 *)(plVar12 + 10) = 1;
      plVar12[9] = 0;
      plVar12[0xd] = 0;
      plVar12[0xe] = 0;
      *(undefined4 *)(plVar12 + 0xf) = 0;
      plVar12[0xb] = (long)&DAT_cbf29ce484222645;
      plVar12[0xc] = (long)&DAT_03c886bc;
      plVar12[2] = (long)plVar12;
      *(undefined4 *)(plVar12 + 3) = 0x80080;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      lVar14 = *plVar20;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar13;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_00fd7700;
      lVar14 = *plVar21;
      psVar3 = (short *)(lVar14 + 0x1a);
      do {
        sVar16 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00fd4230;
    }
    break;
  case 0x61:
    plVar17 = (long *)*plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00fd7750;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x50,8);
    if (plVar12 == (long *)0x0) goto LAB_00fd7784;
    memset(plVar12 + 1,0,0x48);
    puVar6 = PTR_DAT_047d66f8;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    plVar12[4] = (long)(puVar7 + 0x88);
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = lVar15;
    plVar19 = plVar12 + 5;
    *plVar19 = (long)(puVar7 + 0xd8);
    plVar20 = plVar12 + 6;
    *plVar20 = 0;
    plVar12[7] = 0;
    FUN_00d1a3f4(plVar20,plVar19);
    plVar12[8] = -1;
    puVar6 = PTR_DAT_047d9c98;
    *plVar12 = (long)(PTR_DAT_047d9c98 + 0x10);
    plVar12[1] = (long)plVar17;
    plVar12[4] = (long)(puVar6 + 0x90);
    *plVar19 = (long)(puVar6 + 0xe0);
    plVar12[9] = 0;
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x80050;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar14 = *plVar20;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fd76e0;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_00fd7700;
    lVar14 = *plVar21;
    psVar3 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar5) {
        *psVar3 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 != 1) {
      if (sVar16 == 0) goto LAB_00fd7728;
      goto switchD_00fcf210_caseD_4;
    }
    goto LAB_00fd4700;
  }
LAB_00fd7754:
  lVar14 = *plVar17;
LAB_00fd775c:
  (**(code **)(lVar14 + 0xe8))(plVar17);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("ptr","Create",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
             ,0x40);
}


