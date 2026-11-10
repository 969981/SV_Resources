/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012f4ecc; name: FUN_012f4ecc
 */


void FUN_012f4ecc(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 local_d8 [4];
  undefined4 local_d4;
  long *local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  
  puVar5 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  puVar5 = PTR_DAT_047d8c78;
  if (lVar9 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar11 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar11;
  param_1[4] = (long)(puVar5 + 0x88);
  plVar14 = param_1 + 5;
  *plVar14 = (long)(puVar5 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar14);
  *param_1 = (long)&PTR_FUN_045eb6e8;
  param_1[4] = (long)&PTR_LAB_045eb760;
  *plVar14 = (long)&DAT_045eb7b0;
  param_1[0xd] = 0;
  plVar14 = param_1 + 8;
  *plVar14 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  lVar9 = tpidr_el0;
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
     (lVar11 = *(long *)(lVar9 + 0x30), lVar11 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar11 = DAT_04859430;
    *(long *)(lVar9 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xe] = lVar11;
  param_1[0xf] = 0x1fffffffffffffff;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_012f6de0(param_1 + 0x14);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
     (lVar11 = *(long *)(lVar9 + 0x30), lVar11 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar11 = DAT_04859430;
    *(long *)(lVar9 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1c] = lVar11;
  param_1[0x22] = 0;
  param_1[0x1d] = 0x1fffffffffffffff;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
     (lVar11 = *(long *)(lVar9 + 0x30), lVar11 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar11 = DAT_04859430;
    *(long *)(lVar9 + 0x30) = DAT_04859430;
  }
  param_1[0x23] = lVar11;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0x1fffffffffffffff;
  param_1[0x25] = 0;
  *(undefined4 *)((long)param_1 + 0x14c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x28,0,1);
  lVar11 = param_1[1];
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  local_c0 = 0;
  local_b8 = (long *)0x0;
  local_d0 = (long *)0x0;
  pcStack_c8 = (char *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_a8 = 0x3fffffffffffffff;
  local_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0x3fffffffffffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  local_b0 = lVar11;
  local_80 = lVar11;
  memcpy(param_1 + 0x2f,&local_b8,0x28);
  local_d0 = (long *)0x0;
  pcStack_c8 = (char *)0x0;
  local_c0 = 0;
  local_b8 = (long *)0x0;
  param_1[0x34] = 0;
  memcpy(param_1 + 0x35,&uStack_88,0x28);
  local_90 = 0;
  uStack_88 = 0;
  FUN_012f7638(&local_d0);
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)((long)param_1 + 0x23c) = 1;
  param_1[0x3d] = 0;
  param_1[0x3e] = lVar11;
  param_1[0x3f] = 0x1fffffffffffffff;
  param_1[0x40] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x46,0,1);
  param_1[0x4d] = 0x1ffffffffffffff;
  param_1[0x53] = 0x1ffffffffffffff;
  param_1[0x52] = param_1[1];
  param_1[0x4c] = param_1[1];
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  *(undefined4 *)((long)param_1 + 0x2c4) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x57,0,1);
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
     (lVar11 = *(long *)(lVar9 + 0x30), lVar11 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar11 = DAT_04859430;
    *(long *)(lVar9 + 0x30) = DAT_04859430;
  }
  param_1[0x5d] = lVar11;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x5e] = 0x1fffffffffffffff;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
     (lVar11 = *(long *)(lVar9 + 0x30), lVar11 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar11 = DAT_04859430;
    *(long *)(lVar9 + 0x30) = DAT_04859430;
  }
  param_1[100] = lVar11;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x65] = 0xfffffffffffffff;
  param_1[0x68] = 0;
  *(undefined4 *)((long)param_1 + 0x354) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x69,0,1);
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  FUN_012f65b0(param_1 + 0x6d);
  param_1[0x72] = 0;
  *(undefined4 *)((long)param_1 + 0x3a4) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x73,0,1);
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  FUN_012f65b0(param_1 + 0x77);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)((long)param_1 + 0x3e4) = 0;
  local_d4 = 0x18;
  local_d8[0] = 1;
  local_d0 = param_1;
  lVar9 = FUN_012f71b0(param_1[1],&local_d0,local_d8,&local_d4);
  if (lVar9 != 0) {
    lVar11 = *(long *)(lVar9 + 0x30);
    *(ulong *)(lVar9 + 0x1b8) = *(ulong *)(lVar9 + 0x1b8) | 8;
    if (*(long *)(lVar11 + 0x10) == 0) goto LAB_012f63a8;
    psVar1 = (short *)(lVar11 + 0x1a);
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
      uVar16 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar16;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_012f63c8;
  }
  plVar10 = (long *)*plVar14;
  *plVar14 = 0;
  if (plVar10 != (long *)0x0) {
    lVar11 = plVar10[6];
    psVar1 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_012f5e00;
  }
  *plVar14 = lVar9;
  local_d0 = (long *)0x7e0722d48802239b;
  pcStack_c8 = "GameObjectManager";
  local_c0 = 0x11;
  local_b8 = (long *)0x0;
  plVar10 = *(long **)(lVar9 + 0x400);
  plVar13 = *(long **)(lVar9 + 0x408);
  if (plVar10 != plVar13) {
    do {
      puVar19 = *(undefined8 **)(*plVar10 + 0x380);
      for (puVar18 = *(undefined8 **)(*plVar10 + 0x378); puVar18 != puVar19; puVar18 = puVar18 + 1)
      {
        (**(code **)(*(long *)*puVar18 + 0x78))((long *)*puVar18,&local_d0);
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar13);
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
  }
  lVar9 = *plVar14;
  plVar10 = *(long **)(lVar9 + 0x400);
  plVar13 = *(long **)(lVar9 + 0x408);
  if (plVar10 != plVar13) {
    *(undefined8 *)(*plVar10 + 0x3f0) = 6;
    if (plVar10 + 1 != plVar13) {
      *(undefined8 *)(plVar10[1] + 0x3f0) = 6;
      for (plVar10 = plVar10 + 2; plVar10 != plVar13; plVar10 = plVar10 + 1) {
        *(undefined8 *)(*plVar10 + 0x3f0) = 6;
      }
    }
    lVar9 = *plVar14;
  }
  pcVar12 = *(code **)(lVar9 + 0x388);
  if (pcVar12 != (code *)0x0) {
    *(undefined8 *)(lVar9 + 0x390) = 0;
    *(undefined8 *)(lVar9 + 0x398) = 0;
    *(undefined8 *)(lVar9 + 0x380) = 0;
    *(undefined8 *)(lVar9 + 0x388) = 0;
    (*pcVar12)(lVar9 + 0x3a0);
  }
  *(undefined1 **)(lVar9 + 0x380) = &LAB_00c4343c;
  *(undefined1 **)(lVar9 + 0x388) = &LAB_02dfdb44;
  *(long **)(lVar9 + 0x3a0) = param_1;
  *(undefined1 **)(lVar9 + 0x390) = &LAB_02dfdb48;
  *(undefined1 **)(lVar9 + 0x398) = &LAB_02dfdb54;
  local_d8[0] = 1;
  local_d0 = param_1;
  lVar9 = FUN_012f71b0(param_1[1],&local_d0,local_d8,&local_d4);
  if (lVar9 != 0) {
    lVar11 = *(long *)(lVar9 + 0x30);
    *(ulong *)(lVar9 + 0x1b8) = *(ulong *)(lVar9 + 0x1b8) | 8;
    if (*(long *)(lVar11 + 0x10) == 0) goto LAB_012f63a8;
    psVar1 = (short *)(lVar11 + 0x1a);
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
      uVar16 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar16;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_012f63c8;
  }
  plVar10 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar10 != (long *)0x0) {
    lVar11 = plVar10[6];
    psVar1 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_012f5e00;
  }
  param_1[9] = lVar9;
  local_d0 = (long *)0x7e0722d48802239b;
  pcStack_c8 = "GameObjectManager";
  local_c0 = 0x11;
  local_b8 = (long *)0x0;
  plVar10 = *(long **)(lVar9 + 0x400);
  plVar13 = *(long **)(lVar9 + 0x408);
  if (plVar10 != plVar13) {
    do {
      puVar19 = *(undefined8 **)(*plVar10 + 0x380);
      for (puVar18 = *(undefined8 **)(*plVar10 + 0x378); puVar18 != puVar19; puVar18 = puVar18 + 1)
      {
        (**(code **)(*(long *)*puVar18 + 0x78))((long *)*puVar18,&local_d0);
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar13);
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
  }
  lVar9 = param_1[9];
  plVar10 = *(long **)(lVar9 + 0x400);
  plVar13 = *(long **)(lVar9 + 0x408);
  if (plVar10 != plVar13) {
    *(undefined8 *)(*plVar10 + 0x3f0) = 6;
    if (plVar10 + 1 != plVar13) {
      *(undefined8 *)(plVar10[1] + 0x3f0) = 6;
      for (plVar10 = plVar10 + 2; plVar10 != plVar13; plVar10 = plVar10 + 1) {
        *(undefined8 *)(*plVar10 + 0x3f0) = 6;
      }
    }
    lVar9 = param_1[9];
  }
  pcVar12 = *(code **)(lVar9 + 0x388);
  if (pcVar12 != (code *)0x0) {
    *(undefined8 *)(lVar9 + 0x390) = 0;
    *(undefined8 *)(lVar9 + 0x398) = 0;
    *(undefined8 *)(lVar9 + 0x380) = 0;
    *(undefined8 *)(lVar9 + 0x388) = 0;
    (*pcVar12)(lVar9 + 0x3a0);
  }
  *(undefined1 **)(lVar9 + 0x380) = &LAB_028f4ec0;
  *(undefined1 **)(lVar9 + 0x388) = &LAB_02dfdb60;
  *(undefined1 **)(lVar9 + 0x390) = &LAB_02dfdb64;
  *(long **)(lVar9 + 0x3a0) = param_1;
  *(undefined1 **)(lVar9 + 0x398) = &LAB_02dfdb70;
  plVar10 = (long *)param_1[1];
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_012f63f0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar10;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  plVar13 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x400,0x10);
  if (plVar13 == (long *)0x0) {
    (**(code **)(*plVar10 + 0xe8))(plVar10);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_00da2ea0(plVar13,*(undefined8 *)PTR_DAT_047d8d98,param_1 + 4,1);
  puVar5 = PTR_DAT_047d8da0;
  plVar13[0x70] = 0;
  plVar13[0x71] = 0;
  plVar13[4] = (long)(puVar5 + 0xc0);
  plVar13[5] = (long)(puVar5 + 0x110);
  plVar13[0x72] = 0;
  plVar13[0x73] = 0;
  *plVar13 = (long)(puVar5 + 0x10);
  plVar13[1] = (long)plVar10;
  plVar13[2] = (long)plVar13;
  *(undefined4 *)(plVar13 + 3) = 0x100400;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  lVar9 = plVar13[6];
  plVar13[0x37] = plVar13[0x37] | 8;
  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_012f63a8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar9 + 0x1a);
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
    uVar16 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
    *(undefined8 *)(lVar9 + 8) = uVar16;
    *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) {
LAB_012f63c8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar10 = (long *)param_1[10];
  param_1[10] = 0;
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[6];
    psVar1 = (short *)(lVar9 + 0x1a);
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
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_012f5e00:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  param_1[10] = (long)plVar13;
  pcVar12 = (code *)plVar13[0x71];
  if (pcVar12 != (code *)0x0) {
    plVar13[0x72] = 0;
    plVar13[0x73] = 0;
    plVar13[0x70] = 0;
    plVar13[0x71] = 0;
    (*pcVar12)(plVar13 + 0x74);
  }
  plVar13[0x70] = (long)&LAB_028f4ed0;
  plVar13[0x71] = (long)&LAB_02dfdb7c;
  plVar13[0x72] = (long)&LAB_02dfdb80;
  plVar13[0x74] = (long)param_1;
  plVar13[0x73] = (long)&LAB_02dfdb8c;
  local_d0 = param_1;
  FUN_012f6f18(param_1[8],&local_d0);
  local_d0 = param_1;
  FUN_012f66e8(param_1[8],&local_d0);
  local_d0 = param_1;
  FUN_012f7064(param_1[9],&local_d0);
  local_d0 = param_1;
  FUN_012f6834(param_1[9],&local_d0);
  puVar5 = PTR_DAT_047d91d0;
  if (((*PTR_DAT_047d91d0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d91d0), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047dcf90,PTR_DAT_047d91d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d91d0);
  }
  puVar7 = PTR_DAT_047d91e0;
  puVar6 = PTR_DAT_047d91d8;
  lVar9 = *(long *)PTR_DAT_047d91d8;
  *(long *)PTR_DAT_047d91e0 = lVar9;
  lVar11 = *plVar14;
  uVar16 = *(undefined8 *)(lVar9 + 0x28);
  plVar10 = (long *)(lVar11 + 0x1d0);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_012f5720;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x1d8));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x1d8));
        while (*plVar10 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_012f5720;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_012f5720:
  FUN_00e220f4(lVar11,uVar16,0);
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d91d0), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047dcf90,PTR_DAT_047d91d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d91d0);
  }
  lVar9 = *(long *)puVar6;
  *(long *)puVar7 = lVar9;
  lVar17 = *(long *)(lVar9 + 0x30);
  FUN_00e220f4(lVar11,0,lVar17);
  plVar10 = (long *)(lVar17 + 0x1d0);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_012f5770;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
        while (*plVar10 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_012f5770;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_012f5770:
  *(undefined8 *)(lVar17 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x1d8));
  *(undefined8 *)(lVar11 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x1d8));
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d91d0), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047dcf90,PTR_DAT_047d91d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d91d0);
  }
  lVar9 = *(long *)puVar6;
  *(long *)puVar7 = lVar9;
  lVar11 = param_1[9];
  uVar16 = *(undefined8 *)(lVar9 + 0x38);
  plVar10 = (long *)(lVar11 + 0x1d0);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_012f57c4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x1d8));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x1d8));
        while (*plVar10 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_012f57c4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_012f57c4:
  FUN_00e220f4(lVar11,uVar16,0);
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d91d0), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047dcf90,PTR_DAT_047d91d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d91d0);
  }
  lVar9 = *(long *)puVar6;
  *(long *)puVar7 = lVar9;
  lVar17 = *(long *)(lVar9 + 0x40);
  FUN_00e220f4(lVar11,0,lVar17);
  plVar10 = (long *)(lVar17 + 0x1d0);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_012f5814;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
        while (*plVar10 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_012f5814;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_012f5814:
  *(undefined8 *)(lVar17 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x1d8));
  *(undefined8 *)(lVar11 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x1d8));
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d91d0), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047dcf90,PTR_DAT_047d91d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d91d0);
  }
  lVar9 = *(long *)puVar6;
  *(long *)puVar7 = lVar9;
  lVar11 = param_1[10];
  uVar16 = *(undefined8 *)(lVar9 + 0x40);
  plVar10 = (long *)(lVar11 + 0x1d0);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_012f5874;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x1d8));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x1d8));
        while (*plVar10 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_012f5874;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_012f5874:
  FUN_00e220f4(lVar11,uVar16,0);
  *(undefined8 *)(lVar11 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x1d8));
  plVar14 = (long *)*plVar14;
  (**(code **)(*plVar14 + 0x88))(plVar14,0);
  puVar19 = (undefined8 *)plVar14[0x81];
  for (puVar18 = (undefined8 *)plVar14[0x80]; puVar18 != puVar19; puVar18 = puVar18 + 1) {
    plVar14 = (long *)*puVar18;
    (**(code **)(*plVar14 + 0x88))(plVar14,0);
    puVar15 = (undefined8 *)plVar14[0x70];
    for (puVar20 = (undefined8 *)plVar14[0x6f]; puVar20 != puVar15; puVar20 = puVar20 + 1) {
      (**(code **)(*(long *)*puVar20 + 0x80))();
    }
  }
  plVar14 = (long *)param_1[9];
  (**(code **)(*plVar14 + 0x88))(plVar14,0);
  puVar19 = (undefined8 *)plVar14[0x81];
  for (puVar18 = (undefined8 *)plVar14[0x80]; puVar18 != puVar19; puVar18 = puVar18 + 1) {
    plVar14 = (long *)*puVar18;
    (**(code **)(*plVar14 + 0x88))(plVar14,0);
    puVar15 = (undefined8 *)plVar14[0x70];
    for (puVar20 = (undefined8 *)plVar14[0x6f]; puVar20 != puVar15; puVar20 = puVar20 + 1) {
      (**(code **)(*(long *)*puVar20 + 0x80))();
    }
  }
  (**(code **)(*(long *)param_1[10] + 0x88))((long *)param_1[10],0);
  if (((*PTR_DAT_047e2410 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047e2410), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047e2508,PTR_DAT_047e2418,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e2410);
  }
  lVar11 = *(long *)PTR_DAT_047e2418;
  plVar14 = (long *)(lVar11 + 0x98);
  DAT_04866020 = lVar11;
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar14 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar4) {
      *plVar14 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_012f5a70;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xa0));
  do {
    if (*plVar14 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xa0));
        while (*plVar14 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_012f5a70;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar4) {
      *plVar14 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_012f5a70:
  plVar14 = (long *)(lVar11 + 0x30);
  plVar10 = (long *)*plVar14;
  if (plVar10 == (long *)0x0) {
    plVar10 = plVar14;
  }
  else {
    plVar14 = (long *)(lVar11 + 0x30);
    while( true ) {
      if ((long *)plVar10[4] <= param_1) {
        if ((long *)plVar10[4] < param_1) {
          plVar14 = plVar10 + 1;
          plVar13 = (long *)*plVar14;
          if (plVar13 != (long *)0x0) goto LAB_012f5a98;
        }
        goto LAB_012f5c58;
      }
      plVar13 = (long *)*plVar10;
      plVar14 = plVar10;
      if (plVar13 == (long *)0x0) break;
LAB_012f5a98:
      plVar10 = plVar13;
    }
  }
LAB_012f5c58:
  if (*plVar14 == 0) {
    puVar18 = (undefined8 *)
              (**(code **)(**(long **)(lVar11 + 0x38) + 0x10))(*(long **)(lVar11 + 0x38),0x28,8);
    if (puVar18 == (undefined8 *)0x0) {
      (**(code **)(**(long **)(lVar11 + 0x38) + 0xe8))();
    }
    uVar16 = *(undefined8 *)(lVar11 + 0x38);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 == 0) {
      puVar18[4] = param_1;
    }
    else {
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_012f63f0;
      *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar16;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      puVar18[4] = param_1;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    }
    *puVar18 = 0;
    puVar18[1] = 0;
    puVar18[2] = plVar10;
    *plVar14 = (long)puVar18;
    if (**(long **)(lVar11 + 0x28) != 0) {
      *(long *)(lVar11 + 0x28) = **(long **)(lVar11 + 0x28);
      puVar18 = (undefined8 *)*plVar14;
    }
    FUN_010108e0(*(undefined8 *)(lVar11 + 0x30),puVar18);
    *(long *)(lVar11 + 0x58) = *(long *)(lVar11 + 0x58) + 1;
  }
  *(undefined8 *)(lVar11 + 0x98) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0xa0));
  return;
}


