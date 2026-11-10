/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b6c1c0; name: FUN_00b6c1c0
 */


void FUN_00b6c1c0(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  string sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  void *pvVar21;
  string *psVar22;
  undefined8 local_11c8;
  undefined8 uStack_11c0;
  undefined *local_10c8;
  undefined8 uStack_10c0;
  undefined1 local_10b8;
  undefined **local_10b0;
  string *local_10a8;
  string *local_10a0;
  undefined4 local_1098;
  undefined *local_1090;
  undefined8 uStack_1088;
  undefined1 local_1080;
  ulong local_1078;
  string *local_1070;
  int local_1068;
  undefined8 local_1060;
  undefined8 local_1058;
  string local_1050;
  undefined7 uStack_104f;
  undefined1 local_1048;
  undefined1 uStack_1047;
  uint6 uStack_1046;
  undefined1 local_1040;
  undefined1 uStack_103f;
  undefined6 uStack_103e;
  
  do {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    switch(param_2) {
    case 0:
    case 0xc:
    case 0xf:
      goto switchD_00b6c208_caseD_0;
    case 1:
    case 3:
      *(undefined4 *)(param_1 + 0x8c8) = 1000;
      nn::os::GetSystemTick();
      uVar19 = nn::os::ConvertToTimeSpan();
      *(undefined8 *)(param_1 + 0x8b8) = uVar19;
      return;
    case 2:
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x8c8) = 10000;
      nn::os::GetSystemTick();
      uVar19 = nn::os::ConvertToTimeSpan();
      *(undefined8 *)(param_1 + 0x8b8) = uVar19;
      uVar11 = FUN_00b09890();
      goto joined_r0x00b6c6a0;
    case 4:
      *(undefined4 *)(param_1 + 0x8c8) = 5000;
      nn::os::GetSystemTick();
      uVar19 = nn::os::ConvertToTimeSpan();
      *(undefined8 *)(param_1 + 0x8b8) = uVar19;
      uVar11 = FUN_00b09a54(*(long *)(param_1 + 0x18) + -0x148);
      goto joined_r0x00b6c6a0;
    case 5:
      *(undefined4 *)(param_1 + 0x8c8) = 10000;
      nn::os::GetSystemTick();
      uVar19 = nn::os::ConvertToTimeSpan();
      *(undefined8 *)(param_1 + 0x8b8) = uVar19;
      puVar14 = &DAT_03d5c008;
      goto LAB_00b6c6c8;
    case 6:
      memset((void *)(param_1 + 0x594),0,0x304);
      puVar14 = &DAT_03d5c019;
      goto LAB_00b6c6c8;
    case 7:
      puVar14 = &DAT_03d5c02a;
LAB_00b6c6c8:
      uVar11 = FUN_00b09b40(puVar14);
joined_r0x00b6c6a0:
      if ((uVar11 & 1) != 0) {
        return;
      }
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x8b0) = 0;
      return;
    case 9:
      if (((*PTR_DAT_047d6e90 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar10 != 0)) {
        FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6e90);
      }
      lVar16 = *(long *)PTR_DAT_047d6e98;
      *(long *)PTR_DAT_047d6ea0 = lVar16;
      if (lVar16 != 0) {
        lVar15 = param_1 + 0x448;
        puVar14 = &DAT_03d5c03b;
        uVar8 = 0x45;
LAB_00b6c3e4:
        uVar11 = FUN_00b09cc4(lVar16,puVar14,lVar15,uVar8);
        goto joined_r0x00b6c6a0;
      }
      break;
    case 10:
      if (((*PTR_DAT_047d8cc8 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8cc8);
      }
      lVar16 = *(long *)PTR_DAT_047d8cd0;
      *(long *)PTR_DAT_047d8cd8 = lVar16;
      if (lVar16 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = *(undefined8 *)(lVar16 + 0x50);
      }
      lVar16 = tpidr_el0;
      if (*(long *)(lVar16 + 0x30) == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(long **)(lVar16 + 0x30) = DAT_04859430;
      }
      uVar1 = *(undefined8 *)(lVar16 + 0x30);
      uVar2 = *(undefined8 *)(lVar16 + 0x38);
      *(undefined8 *)(lVar16 + 0x30) = uVar19;
      local_1050 = SUB81(uVar1,0);
      uStack_104f = (undefined7)((ulong)uVar1 >> 8);
      local_1048 = (undefined1)uVar2;
      uStack_1047 = (undefined1)((ulong)uVar2 >> 8);
      uStack_1046 = (uint6)((ulong)uVar2 >> 0x10);
      *(undefined2 *)(lVar16 + 0x38) = 1;
      uVar11 = nn::os::GetSystemTick();
      iVar10 = snprintf((char *)(param_1 + 0x494),0x100,"%lx",
                        ((((((((uVar11 & 0xff ^ 0xcbf29ce484222645) * 0x100000001b3 ^
                              uVar11 >> 8 & 0xff) * 0x100000001b3 ^ uVar11 >> 0x10 & 0xff) *
                             0x100000001b3 ^ uVar11 >> 0x18 & 0xff) * 0x100000001b3 ^
                           uVar11 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar11 >> 0x28 & 0xff) *
                          0x100000001b3 ^ uVar11 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar11 >> 0x38) *
                        0x100000001b3);
      *(int *)(param_1 + 0x898) = iVar10;
      if (((*PTR_DAT_047d6e90 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar9 != 0)) {
        FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6e90);
      }
      lVar15 = *(long *)PTR_DAT_047d6e98;
      *(long *)PTR_DAT_047d6ea0 = lVar15;
      if ((lVar15 == 0) ||
         (uVar11 = FUN_00b09cc4(lVar15,&DAT_03d5c04c,(char *)(param_1 + 0x494),iVar10 + 1),
         (uVar11 & 1) == 0)) {
        FUN_00b6c1c0(param_1,0x11);
      }
      puVar18 = (undefined8 *)(lVar16 + 0x30);
      *puVar18 = CONCAT71(uStack_104f,local_1050);
      local_1058._0_2_ = CONCAT11(uStack_1047,local_1048);
      goto LAB_00b6cd90;
    case 0xb:
      if (((*PTR_DAT_047d6e90 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar10 != 0)) {
        FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6e90);
      }
      lVar16 = *(long *)PTR_DAT_047d6e98;
      *(long *)PTR_DAT_047d6ea0 = lVar16;
      if (lVar16 != 0) {
        puVar14 = &DAT_03d5c05d;
LAB_00b6c698:
        uVar11 = FUN_00b09eb0(lVar16,puVar14,1);
        goto joined_r0x00b6c6a0;
      }
      break;
    case 0xd:
      if (((*PTR_DAT_047d8cc8 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8cc8);
      }
      lVar16 = *(long *)PTR_DAT_047d8cd0;
      *(long *)PTR_DAT_047d8cd8 = lVar16;
      if (lVar16 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = *(undefined8 *)(lVar16 + 0x50);
      }
      lVar16 = tpidr_el0;
      if (*(long *)(lVar16 + 0x30) == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(long **)(lVar16 + 0x30) = DAT_04859430;
      }
      local_1060 = *(undefined8 *)(lVar16 + 0x30);
      local_1058 = *(undefined8 *)(lVar16 + 0x38);
      *(undefined8 *)(lVar16 + 0x30) = uVar19;
      local_1090 = PTR_DAT_047dab90;
      *(undefined2 *)(lVar16 + 0x38) = 1;
      puVar14 = PTR_DAT_047dab98;
      local_1090 = local_1090 + 0x10;
      uStack_1088 = 0;
      local_1080 = 0;
      if (*(long *)PTR_DAT_047dab98 == 2) goto LAB_00b6c710;
      local_1050 = SUB81(PTR_DAT_047daba0 + 0x10,0);
      uStack_104f = (undefined7)((ulong)(PTR_DAT_047daba0 + 0x10) >> 8);
      local_1048 = SUB81(PTR_LAB_047daba8,0);
      uStack_1047 = (undefined1)((ulong)PTR_LAB_047daba8 >> 8);
      uStack_1046 = (uint6)((ulong)PTR_LAB_047daba8 >> 0x10);
      local_1040 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) goto LAB_00b6c340;
      goto LAB_00b6c710;
    case 0xe:
      if (((*PTR_DAT_047d6e90 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar10 != 0)) {
        FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6e90);
      }
      lVar16 = *(long *)PTR_DAT_047d6e98;
      *(long *)PTR_DAT_047d6ea0 = lVar16;
      if (lVar16 != 0) {
        puVar14 = &DAT_03d5c07f;
        goto LAB_00b6c698;
      }
      break;
    case 0x10:
      uVar8 = *(undefined4 *)(param_1 + 0x898);
      if (((*PTR_DAT_047d6e90 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar10 != 0)) {
        FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6e90);
      }
      lVar16 = *(long *)PTR_DAT_047d6e98;
      *(long *)PTR_DAT_047d6ea0 = lVar16;
      if (lVar16 != 0) {
        lVar15 = param_1 + 0x494;
        puVar14 = &DAT_03d5c090;
        goto LAB_00b6c3e4;
      }
      break;
    default:
      if (((*PTR_DAT_047d6e90 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar10 != 0)) {
        FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6e90);
      }
      lVar16 = *(long *)PTR_DAT_047d6e98;
      *(long *)PTR_DAT_047d6ea0 = lVar16;
      if (lVar16 != 0) {
        *(undefined1 *)(lVar16 + 0xadf1) = 0;
        *(undefined1 *)(lVar16 + 0xae02) = 0;
        if (*(uint *)(lVar16 + 0xadf4) != 0xffffffff) {
          nn::bluetooth::DisconnectFromGattServer(*(uint *)(lVar16 + 0xadf4));
          return;
        }
      }
      goto switchD_00b6c208_caseD_0;
    }
    param_2 = 0x11;
  } while( true );
  while( true ) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar14,0x10);
    if (bVar6) {
      *(undefined8 *)puVar14 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') break;
LAB_00b6c340:
    lVar15 = *(long *)puVar14;
    if (lVar15 != 0) break;
  }
  puVar14 = PTR_DAT_047dab98;
  DataMemoryBarrier(2,3);
  if (lVar15 == 0) {
    FUN_00bb162c(&local_1050);
    *(undefined8 *)PTR_DAT_047dab98 = 2;
  }
  else {
    while (lVar15 == 1) {
      sched_yield();
      lVar15 = *(long *)puVar14;
    }
  }
LAB_00b6c710:
  puVar14 = PTR_DAT_047dabb0;
  local_1068 = 0;
  psVar22 = *(string **)PTR_DAT_047dabb0;
  local_1078 = *(ulong *)(param_1 + 0x8a0);
  uVar3 = *(uint *)(param_1 + 0x898);
  uVar11 = (ulong)uVar3;
  local_1070 = psVar22;
  if (uVar3 < 0x17) {
    local_1050 = SUB41(uVar3 << 1,0);
    pvVar21 = (void *)((ulong)&local_1050 | 1);
    if (uVar3 == 0) goto LAB_00b6c758;
  }
  else {
    uVar20 = uVar11 + 0x10 & 0x1fffffff0;
    plVar17 = *(long **)(lVar16 + 0x30);
    if (plVar17 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar17 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    pvVar21 = (void *)(**(code **)(*plVar17 + 0x10))(plVar17,uVar20,8);
    local_1050 = (string)((byte)uVar20 | 1);
    uStack_104f = (undefined7)(uVar20 >> 8);
    local_1048 = (undefined1)uVar3;
    uStack_1047 = (undefined1)(uVar3 >> 8);
    uStack_1046 = (uint6)(ushort)(uVar3 >> 0x10);
    local_1040 = SUB81(pvVar21,0);
    uStack_103f = (undefined1)((ulong)pvVar21 >> 8);
    uStack_103e = (undefined6)((ulong)pvVar21 >> 0x10);
  }
  memcpy(pvVar21,(void *)(param_1 + 0x494),uVar11);
LAB_00b6c758:
  *(undefined1 *)((long)pvVar21 + uVar11) = 0;
  if (local_1070 == psVar22) {
    FUN_00b6eb88(&local_1070,&local_1050);
  }
  else {
    std::string::operator=(local_1070,&local_1050);
  }
  if ((((byte)local_1050 & 1) != 0) &&
     (lVar15 = CONCAT62(uStack_103e,CONCAT11(uStack_103f,local_1040)), lVar15 != 0)) {
    plVar17 = *(long **)(lVar16 + 0x30);
    if (plVar17 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar17 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    uVar11 = (**(code **)(*plVar17 + 0xf8))(plVar17);
    if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar17 + 0x18))(plVar17,lVar15,0,8);
    }
    else {
      FUN_00c48fe8(plVar17,lVar15,0,8);
    }
  }
  lVar15 = param_1 + 0x48;
  iVar10 = (**(code **)(local_1090 + 0x60))(&local_1090);
  if (iVar10 < 0x401) {
    lVar12 = (**(code **)(local_1090 + 0x70))(&local_1090,lVar15);
    if (lVar12 - lVar15 != (long)iVar10) {
      uVar8 = (**(code **)(local_1090 + 0x60))(&local_1090);
      FUN_00c11a10(iVar10,uVar8,lVar12 - lVar15 & 0xffffffff,&local_1090);
    }
  }
  puVar7 = PTR_DAT_047dab98;
  local_10c8 = PTR_DAT_047dabb8 + 0x10;
  uStack_10c0 = 0;
  local_10b8 = 0;
  if (*(long *)PTR_DAT_047dab98 != 2) {
    local_1050 = SUB81(PTR_DAT_047daba0 + 0x10,0);
    uStack_104f = (undefined7)((ulong)(PTR_DAT_047daba0 + 0x10) >> 8);
    local_1048 = SUB81(PTR_LAB_047daba8,0);
    uStack_1047 = (undefined1)((ulong)PTR_LAB_047daba8 >> 8);
    uStack_1046 = (uint6)((ulong)PTR_LAB_047daba8 >> 0x10);
    local_1040 = 0;
    if (*(long *)PTR_DAT_047dab98 != 2) {
      do {
        lVar12 = *(long *)puVar7;
        if (lVar12 != 0) break;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar6) {
          *(undefined8 *)puVar7 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      puVar7 = PTR_DAT_047dab98;
      DataMemoryBarrier(2,3);
      if (lVar12 == 0) {
        FUN_00bb162c(&local_1050);
        *(undefined8 *)PTR_DAT_047dab98 = 2;
      }
      else {
        while (lVar12 == 1) {
          sched_yield();
          lVar12 = *(long *)puVar7;
        }
      }
    }
  }
  local_10a8 = *(string **)puVar14;
  local_10b0 = &local_1090;
  local_1098 = 0;
  local_10a0 = local_10a8;
  memset(&local_11c8,0,0x100);
  local_1068 = 0;
  if (local_1078 != 0) {
    if (local_1078 >> 0x23 == 0) {
      if (local_1078 < 0x80) {
        local_1068 = 1;
      }
      else if (local_1078 < 0x4000) {
        local_1068 = 2;
      }
      else if (local_1078 < 0x200000) {
        local_1068 = 3;
      }
      else {
        local_1068 = 4;
        if (local_1078 >> 0x1c != 0) {
          local_1068 = 5;
        }
      }
    }
    else if (local_1078 >> 0x2a == 0) {
      local_1068 = 6;
    }
    else if (local_1078 >> 0x31 == 0) {
      local_1068 = 7;
    }
    else if (local_1078 >> 0x38 == 0) {
      local_1068 = 8;
    }
    else {
      local_1068 = 9;
      if ((long)local_1078 < 0) {
        local_1068 = 10;
      }
    }
    local_1068 = local_1068 + 1;
  }
  sVar4 = *local_1070;
  if (((byte)sVar4 & 1) == 0) {
    uVar11 = (ulong)((byte)sVar4 >> 1);
  }
  else {
    uVar11 = *(ulong *)(local_1070 + 8);
  }
  if (uVar11 != 0) {
    uVar3 = (uint)((byte)sVar4 >> 1);
    if (((byte)sVar4 & 1) != 0) {
      uVar3 = *(uint *)(local_1070 + 8);
    }
    if (uVar3 < 0x80) {
      iVar10 = 1;
    }
    else if (uVar3 < 0x4000) {
      iVar10 = 2;
    }
    else if (uVar3 < 0x200000) {
      iVar10 = 3;
    }
    else {
      iVar10 = 4;
      if (uVar3 >> 0x1c != 0) {
        iVar10 = 5;
      }
    }
    local_1068 = local_1068 + uVar3 + iVar10 + 1;
  }
  lVar12 = (long)local_1068;
  memset(&local_1050,0,0x1000);
  memset(&local_11c8,0,0x100);
  FUN_00b6e9ec(&local_11c8,&DAT_03d5bc06,&DAT_03d5bd07,lVar15,lVar12,&local_1050);
  psVar22 = *(string **)puVar14;
  plVar17 = *(long **)(lVar16 + 0x30);
  if (plVar17 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar17 = DAT_04859430;
    *(long **)(lVar16 + 0x30) = DAT_04859430;
  }
  pvVar21 = (void *)(**(code **)(*plVar17 + 0x10))(plVar17,0x110,8);
  local_1050 = (string)0x11;
  uStack_104f = 1;
  local_1048 = 0;
  uStack_1047 = 1;
  uStack_1046 = 0;
  local_1040 = SUB81(pvVar21,0);
  uStack_103f = (undefined1)((ulong)pvVar21 >> 8);
  uStack_103e = (undefined6)((ulong)pvVar21 >> 0x10);
  memcpy(pvVar21,&local_11c8,0x100);
  *(undefined1 *)((long)pvVar21 + 0x100) = 0;
  if (local_10a8 == psVar22) {
    FUN_00b6eb88(&local_10a8,&local_1050);
  }
  else {
    std::string::operator=(local_10a8,&local_1050);
  }
  if ((((byte)local_1050 & 1) != 0) &&
     (lVar12 = CONCAT62(uStack_103e,CONCAT11(uStack_103f,local_1040)), lVar12 != 0)) {
    plVar17 = *(long **)(lVar16 + 0x30);
    if (plVar17 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar17 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    uVar11 = (**(code **)(*plVar17 + 0xf8))(plVar17);
    if (((uVar11 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar17 + 0x18))(plVar17,lVar12,0,8);
    }
    else {
      FUN_00c48fe8(plVar17,lVar12,0,8);
    }
  }
  local_1068 = 0;
  if (local_1078 != 0) {
    if (local_1078 >> 0x23 == 0) {
      if (local_1078 < 0x80) {
        local_1068 = 1;
      }
      else if (local_1078 < 0x4000) {
        local_1068 = 2;
      }
      else if (local_1078 < 0x200000) {
        local_1068 = 3;
      }
      else {
        local_1068 = 4;
        if (local_1078 >> 0x1c != 0) {
          local_1068 = 5;
        }
      }
    }
    else if (local_1078 >> 0x2a == 0) {
      local_1068 = 6;
    }
    else if (local_1078 >> 0x31 == 0) {
      local_1068 = 7;
    }
    else if (local_1078 >> 0x38 == 0) {
      local_1068 = 8;
    }
    else {
      local_1068 = 9;
      if ((long)local_1078 < 0) {
        local_1068 = 10;
      }
    }
    local_1068 = local_1068 + 1;
  }
  sVar4 = *local_1070;
  if (((byte)sVar4 & 1) == 0) {
    uVar11 = (ulong)((byte)sVar4 >> 1);
  }
  else {
    uVar11 = *(ulong *)(local_1070 + 8);
  }
  if (uVar11 != 0) {
    uVar3 = (uint)((byte)sVar4 >> 1);
    if (((byte)sVar4 & 1) != 0) {
      uVar3 = *(uint *)(local_1070 + 8);
    }
    if (uVar3 < 0x80) {
      iVar10 = 1;
    }
    else if (uVar3 < 0x4000) {
      iVar10 = 2;
    }
    else if (uVar3 < 0x200000) {
      iVar10 = 3;
    }
    else {
      iVar10 = 4;
      if (uVar3 >> 0x1c != 0) {
        iVar10 = 5;
      }
    }
    local_1068 = local_1068 + uVar3 + iVar10 + 1;
  }
  lVar12 = (long)local_1068;
  memset(&local_1050,0,0x1000);
  memset(&local_11c8,0,0x100);
  FUN_00b6e9ec(&local_11c8,&DAT_03d5be07,&DAT_03d5bf08,lVar15,lVar12,&local_1050);
  local_1050 = (string)0x20;
  uStack_104f = (undefined7)local_11c8;
  local_1048 = (undefined1)((ulong)local_11c8 >> 0x38);
  uStack_1047 = (undefined1)uStack_11c0;
  uStack_1046 = (uint6)((ulong)uStack_11c0 >> 8);
  local_1040 = (undefined1)((ulong)uStack_11c0 >> 0x38);
  uStack_103f = 0;
  if (local_10a0 == *(string **)puVar14) {
    FUN_00b6eb88(&local_10a0,&local_1050);
  }
  else {
    std::string::operator=(local_10a0,&local_1050);
  }
  if ((((byte)local_1050 & 1) != 0) &&
     (lVar12 = CONCAT62(uStack_103e,CONCAT11(uStack_103f,local_1040)), lVar12 != 0)) {
    plVar17 = *(long **)(lVar16 + 0x30);
    if (plVar17 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar17 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    uVar11 = (**(code **)(*plVar17 + 0xf8))(plVar17);
    if (((uVar11 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar17 + 0x18))(plVar17,lVar12,0,8);
    }
    else {
      FUN_00c48fe8(plVar17,lVar12,0,8);
    }
  }
  iVar10 = (**(code **)(local_10c8 + 0x60))(&local_10c8);
  if (iVar10 < 0x401) {
    lVar12 = (**(code **)(local_10c8 + 0x70))(&local_10c8,lVar15);
    if (lVar12 - lVar15 != (long)iVar10) {
      uVar8 = (**(code **)(local_10c8 + 0x60))(&local_10c8);
      FUN_00c11a10(iVar10,uVar8,lVar12 - lVar15 & 0xffffffff,&local_10c8);
    }
  }
  uVar8 = FUN_00b746a8(&local_10c8);
  if (((*PTR_DAT_047d6e90 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar10 != 0)) {
    FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6e90);
  }
  lVar12 = *(long *)PTR_DAT_047d6e98;
  *(long *)PTR_DAT_047d6ea0 = lVar12;
  if ((lVar12 == 0) || (uVar11 = FUN_00b09cc4(lVar12,&DAT_03d5c06e,lVar15,uVar8), (uVar11 & 1) == 0)
     ) {
    FUN_00b6c1c0(param_1,0x11);
  }
  local_10b0 = (undefined **)0x0;
  FUN_00b73678(&local_10c8);
  FUN_00b72598(&local_1090);
  puVar18 = (undefined8 *)(lVar16 + 0x30);
  *puVar18 = local_1060;
LAB_00b6cd90:
  *(undefined2 *)(puVar18 + 1) = (undefined2)local_1058;
switchD_00b6c208_caseD_0:
  return;
}


