/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016b8f98; name: FUN_016b8f98
 */


/* WARNING: Removing unreachable block (ram,0x016ba384) */
/* WARNING: Removing unreachable block (ram,0x016ba388) */
/* WARNING: Removing unreachable block (ram,0x016ba390) */
/* WARNING: Removing unreachable block (ram,0x016ba398) */
/* WARNING: Removing unreachable block (ram,0x016baa90) */
/* WARNING: Removing unreachable block (ram,0x016baa98) */
/* WARNING: Removing unreachable block (ram,0x016baa9c) */
/* WARNING: Removing unreachable block (ram,0x016baaa4) */
/* WARNING: Removing unreachable block (ram,0x016baaac) */
/* WARNING: Removing unreachable block (ram,0x016baf18) */
/* WARNING: Removing unreachable block (ram,0x016baf28) */
/* WARNING: Removing unreachable block (ram,0x016baab4) */
/* WARNING: Removing unreachable block (ram,0x016ba3a0) */
/* WARNING: Removing unreachable block (ram,0x016ba3a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016b8f98(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long *plVar2;
  ulong *puVar3;
  long *plVar4;
  short sVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined4 uVar20;
  int iVar21;
  long lVar22;
  long *plVar23;
  undefined8 uVar24;
  long *plVar25;
  long *plVar26;
  ulong uVar27;
  undefined1 auVar28 [8];
  long lVar29;
  long lVar30;
  undefined1 *puVar31;
  int *piVar32;
  byte *pbVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  long *plVar36;
  long *plVar37;
  char *pcVar38;
  long *plVar39;
  long *plVar40;
  long *local_138;
  undefined4 local_130;
  long *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 *local_100;
  char *pcStack_f8;
  undefined8 local_f0;
  long *local_e8;
  byte *local_e0;
  undefined8 local_d8;
  long *local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  byte *local_b8;
  long local_b0;
  long *local_a8;
  undefined1 local_a0 [8];
  ulong uStack_98;
  ulong local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70 [2];
  
  param_1[2] = 0;
  puVar1 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_04865a38), iVar21 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar22 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar22 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = 0;
    if (*(long *)(lVar22 + 0x80) != 0) {
      lVar29 = *(long *)(lVar22 + *(long *)(lVar22 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)&PTR_LAB_045d69c8;
  param_1[1] = lVar29;
  param_1[4] = (long)&PTR_LAB_045d6a40;
  plVar36 = param_1 + 5;
  *plVar36 = (long)&PTR_LAB_045d6b20;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar36);
  *param_1 = (long)&DAT_045d6788;
  plVar26 = param_1 + 8;
  param_1[4] = (long)&PTR_LAB_045d6890;
  *plVar36 = (long)&PTR_LAB_045d6970;
  memset(plVar26,0,0x48);
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  param_1[0x11] = 1;
  param_1[0x12] = 2;
  lVar13 = DAT_03cab628;
  lVar30 = DAT_03cab620;
  *(undefined4 *)(param_1 + 0x15) = 5;
  lVar17 = _UNK_03cabe68;
  lVar16 = _DAT_03cabe60;
  lVar15 = _UNK_03cabe58;
  lVar14 = _DAT_03cabe50;
  lVar29 = _UNK_03caa5b8;
  lVar22 = _DAT_03caa5b0;
  param_1[0x13] = 0x200000025;
  param_1[0x14] = 0x400000003;
  param_1[0x19] = lVar13;
  param_1[0x18] = lVar30;
  param_1[0x1b] = lVar17;
  param_1[0x1a] = lVar16;
  param_1[0x1d] = lVar29;
  param_1[0x1c] = lVar22;
  param_1[0x1f] = lVar15;
  param_1[0x1e] = lVar14;
  *(undefined8 *)((long)param_1 + 0xb1) = 0;
  param_1[0x28] = 0;
  *(undefined1 *)((long)param_1 + 0x154) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x21] = lVar13;
  param_1[0x20] = lVar30;
  param_1[0x23] = lVar17;
  param_1[0x22] = lVar16;
  param_1[0x25] = lVar29;
  param_1[0x24] = lVar22;
  param_1[0x27] = lVar15;
  param_1[0x26] = lVar14;
  puVar1 = PTR_DAT_047ddd98 + 0x10;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x2b] = (long)puVar1;
  param_1[0x2c] = 0;
  *(undefined4 *)((long)param_1 + 0x1c4) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x37,0,1);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x39] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_04865a38), iVar21 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar29 = nn::os::GetTlsValue(DAT_04865a30);
  lVar22 = tpidr_el0;
  if ((((lVar29 == 0) || (*(long *)(lVar29 + 0x80) == 0)) ||
      (lVar29 = *(long *)(lVar29 + *(long *)(lVar29 + 0x80) * 8 + -8), lVar29 == 0)) &&
     (lVar29 = *(long *)(lVar22 + 0x30), lVar29 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_04859438), iVar21 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar29 = DAT_04859430;
    *(long *)(lVar22 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x3c] = lVar29;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x3d] = 0x1fffffffffffffff;
  param_1[0x3e] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_04865a38), iVar21 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar29 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar29 == 0) || (*(long *)(lVar29 + 0x80) == 0)) ||
      (lVar29 = *(long *)(lVar29 + *(long *)(lVar29 + 0x80) * 8 + -8), lVar29 == 0)) &&
     (lVar29 = *(long *)(lVar22 + 0x30), lVar29 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_04859438), iVar21 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar29 = DAT_04859430;
    *(long *)(lVar22 + 0x30) = DAT_04859430;
  }
  param_1[0x43] = lVar29;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x44] = 0x1fffffffffffffff;
  FUN_016bb26c(param_1 + 0x47);
  FUN_016bb26c(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  uVar20 = FUN_00d1a7a0(DAT_0485a0f8 + 0x140);
  *(undefined4 *)(param_1 + 0x2a) = uVar20;
  puVar19 = PTR_DAT_047d4250;
  puVar18 = PTR_DAT_047d4248;
  puVar1 = PTR_DAT_047d4240;
  local_100 = &DAT_84ec145abd8cfa3e;
  pcStack_f8 = "Default";
  local_f0 = 7;
  if ((undefined1 *)*param_2 == &DAT_84ec145abd8cfa3e) {
    pcVar38 = (char *)param_2[1];
    if ((pcVar38 == (char *)0x0) || (*pcVar38 == '\0')) {
      auVar28 = (undefined1  [8])FUN_00d44228();
      if (auVar28 != (undefined1  [8])0x0) {
        (**(code **)(*(long *)auVar28 + 0x18))(auVar28);
      }
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar21 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar21 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar24 = *(undefined8 *)puVar18;
      *(undefined8 *)puVar19 = uVar24;
      FUN_00cf9884(local_a0,uVar24,pcVar38);
      auVar28 = local_a0;
    }
    plVar23 = (long *)param_1[0x28];
    param_1[0x28] = 0;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))();
    }
  }
  else {
    FUN_01096e28(local_a0,&local_100);
    plVar23 = (long *)param_1[0x28];
    param_1[0x28] = 0;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))();
    }
    auVar28 = local_a0;
  }
  param_1[0x28] = (long)auVar28;
  lVar22 = DAT_0485a0f8;
  plVar10 = (long *)PTR_DAT_047d8b70;
  plVar4 = (long *)PTR_PTR_047d4508;
  plVar23 = (long *)PTR_DAT_047d8b70;
  if (auVar28 != (undefined1  [8])0x0) {
    plVar23 = (long *)((long)auVar28 + 0x30);
  }
  local_a0 = (undefined1  [8])*plVar23;
  puVar3 = (ulong *)PTR_PTR_047d4508;
  if (auVar28 != (undefined1  [8])0x0) {
    puVar3 = (ulong *)((long)auVar28 + 0x38);
  }
  uStack_98 = *puVar3;
  if (auVar28 == (undefined1  [8])0x0) {
    local_90 = 0;
  }
  else {
    local_90 = *(ulong *)((long)auVar28 + 0x40);
  }
  local_88 = (long *)0x0;
  plVar23 = (long *)0x0;
  if (auVar28 != (undefined1  [8])0x0) {
    (**(code **)(*(long *)auVar28 + 0x18))(auVar28);
    plVar23 = (long *)auVar28;
  }
  local_88 = plVar23;
  lVar22 = FUN_016bd200(lVar22,local_a0);
  param_1[0x29] = lVar22;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  param_1[0x11] = 1;
  param_1[0x12] = 2;
  param_1[0x13] = 0x200000025;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = 0x400000003;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x15] = 5;
  param_1[0x16] = 0;
  param_1[0xd] = param_2[4];
  param_1[0xe] = param_2[5];
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 6);
  param_1[0x16] = 0x200000008;
  pcVar38 = (char *)param_2[8];
  if ((pcVar38 == (char *)0x0) || (*pcVar38 == '\0')) {
    auVar28 = (undefined1  [8])FUN_00d44228();
    if (auVar28 != (undefined1  [8])0x0) {
      (**(code **)(*(long *)auVar28 + 0x18))(auVar28);
    }
  }
  else {
    if (((*puVar1 & 1) == 0) && (iVar21 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar21 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar24 = *(undefined8 *)puVar18;
    *(undefined8 *)puVar19 = uVar24;
    FUN_00cf9884(local_a0,uVar24,pcVar38);
    auVar28 = local_a0;
  }
  plVar23 = (long *)param_1[99];
  param_1[99] = 0;
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x20))();
  }
  param_1[99] = (long)auVar28;
  if ((auVar28 != (undefined1  [8])0x0) && (**(char **)((long)auVar28 + 0x38) != '\0')) {
    FUN_016beb18(local_a0,DAT_0485a0f8,param_2 + 7);
    FUN_016bba94(param_1 + 0x62);
    auVar28 = local_a0;
    param_1[0x62] = (long)local_a0;
    local_a0 = (undefined1  [8])param_1;
    FUN_016bf3f8(auVar28,local_a0);
    FUN_016bc2a8(&local_c0,param_1[0x62]);
    FUN_016be838(local_a0,local_c0,0);
    auVar11._8_8_ = uStack_98;
    auVar11._0_8_ = local_a0;
    plVar23 = (long *)param_1[0xc];
    param_1[0xc] = 0;
    if (plVar23 != (long *)0x0) {
      plVar37 = plVar23 + 5;
      do {
        lVar22 = *plVar37;
        iVar21 = (int)lVar22 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar37,0x10);
        if (bVar8) {
          *(int *)plVar37 = iVar21;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar21 == 0) {
        (**(code **)(*plVar23 + 0x10))();
      }
      else if ((int)lVar22 == 0) goto LAB_016b98ac;
    }
    auVar28 = local_a0;
    local_a0 = (undefined1  [8])0x0;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uStack_98;
    auVar11 = auVar12 << 0x40;
    param_1[0xc] = (long)auVar28;
    if (local_c0 != (long *)0x0) {
      plVar23 = local_c0 + 5;
      do {
        lVar22 = *plVar23;
        iVar21 = (int)lVar22 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar8) {
          *(int *)plVar23 = iVar21;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar21 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
      else if ((int)lVar22 == 0) goto LAB_016b98ac;
    }
  }
  if (param_1[0xc] == 0) {
    (*DAT_04859f60)(&local_e8,&DAT_04859f80);
    local_c0 = local_e8;
    lVar22 = FUN_00cf3764(local_a0,local_e8[1],&local_c0);
    if (lVar22 == 0) {
      lVar29 = 0;
    }
    else {
      piVar32 = (int *)(lVar22 + 0x28);
      do {
        iVar21 = *piVar32;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar32,0x10);
        if (bVar8) {
          *piVar32 = iVar21 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      plVar23 = local_c0;
      auVar28 = local_a0;
      if (iVar21 == -1) goto LAB_016bae18;
      lVar29 = lVar22;
    }
    lVar30 = *(long *)(*(long *)(lVar29 + 0x70) + 0x30);
    local_a0 = *(undefined1 (*) [8])(lVar30 + 8);
    uStack_98 = *(undefined8 *)(lVar30 + 0x6098);
    local_90 = lVar30 + 0x10;
    _local_a0 = FUN_0117e498(*(undefined8 *)(lVar30 + 0x6140),local_a0,param_1 + 0xd,1,0);
    local_90 = local_90 & 0xffffffffffffff00;
    FUN_00d56380(lVar29 + 0x30,local_a0);
    uVar20 = FUN_00d56320(lVar29 + 0x30);
    *(undefined4 *)(lVar29 + 0x78) = uVar20;
    plVar23 = (long *)param_1[0xc];
    param_1[0xc] = 0;
    if (plVar23 != (long *)0x0) {
      plVar37 = plVar23 + 5;
      do {
        lVar29 = *plVar37;
        iVar21 = (int)lVar29 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar37,0x10);
        if (bVar8) {
          *(int *)plVar37 = iVar21;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar21 == 0) {
        (**(code **)(*plVar23 + 0x10))();
      }
      else {
        auVar11 = _local_a0;
        if ((int)lVar29 == 0) goto LAB_016b98ac;
      }
    }
    param_1[0xc] = lVar22;
    if (local_e8 != (long *)0x0) {
      plVar23 = local_e8 + 5;
      do {
        lVar22 = *plVar23;
        iVar21 = (int)lVar22 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar8) {
          *(int *)plVar23 = iVar21;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar21 == 0) {
        (**(code **)(*local_e8 + 0x10))();
      }
      else {
        auVar11 = _local_a0;
        if ((int)lVar22 == 0) goto LAB_016b98ac;
      }
    }
  }
  else {
    FUN_016bbe2c(param_1[0xc],param_1 + 0xd);
  }
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  snprintf((char *)&local_120,0x20,"%zd",param_1[0x29]);
  local_a0 = (undefined1  [8])0xcaeb9f790c0aa59a;
  uStack_98 = 0x3c0c4ce;
  local_90 = 0xb;
  local_88 = (long *)0x0;
  plVar37 = (long *)param_1[0x28];
  plVar23 = plVar4;
  local_c0 = plVar10;
  if (plVar37 != (long *)0x0) {
    plVar23 = plVar37 + 7;
    local_c0 = plVar37 + 6;
  }
  local_c0 = (long *)*local_c0;
  local_b8 = (byte *)*plVar23;
  if (plVar37 == (long *)0x0) {
    local_b0 = 0;
  }
  else {
    local_b0 = plVar37[8];
  }
  local_a8 = (long *)0x0;
  if (plVar37 != (long *)0x0) {
    (**(code **)(*plVar37 + 0x18))(plVar37);
  }
  local_e8 = (long *)&DAT_cbf29ce484222645;
  if ((byte)local_120 != 0) {
    pbVar33 = (byte *)((ulong)&local_120 | 1);
    bVar6 = (byte)local_120;
    do {
      local_e8 = (long *)(((ulong)local_e8 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar33;
      pbVar33 = pbVar33 + 1;
    } while (bVar6 != 0);
  }
  local_e0 = (byte *)&local_120;
  local_d8 = 0x1f;
  local_d0 = (long *)0x0;
  local_a8 = plVar37;
  FUN_00d1ea9c(&local_128,local_a0,&local_c0,&local_e8);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  plVar40 = local_128;
  plVar23 = plVar4;
  plVar37 = plVar10;
  if (local_128 != (long *)0x0) {
    plVar23 = local_128 + 7;
    plVar37 = local_128 + 6;
  }
  local_a0 = (undefined1  [8])*plVar37;
  uStack_98 = *plVar23;
  if (local_128 == (long *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = local_128[8];
  }
  local_88 = (long *)0x0;
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x18))(local_128);
  }
  local_88 = plVar40;
  local_e8 = (long *)0x0;
  FUN_016bc308(&local_c0,param_1,local_a0,&local_e8,0);
  auVar11._8_8_ = uStack_98;
  auVar11._0_8_ = local_a0;
  plVar23 = (long *)param_1[8];
  param_1[8] = 0;
  if (plVar23 != (long *)0x0) {
    plVar37 = plVar23 + 5;
    do {
      lVar22 = *plVar37;
      iVar21 = (int)lVar22 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar8) {
        *(int *)plVar37 = iVar21;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar21 == 0) {
      (**(code **)(*plVar23 + 0x10))();
    }
    else if ((int)lVar22 == 0) goto LAB_016b98ac;
  }
  plVar23 = local_c0;
  auVar11._8_8_ = uStack_98;
  auVar11._0_8_ = local_a0;
  local_c0 = (long *)0x0;
  *plVar26 = (long)plVar23;
  if (local_e8 != (long *)0x0) {
    plVar23 = local_e8 + 5;
    do {
      lVar22 = *plVar23;
      iVar21 = (int)lVar22 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar8) {
        *(int *)plVar23 = iVar21;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar21 == 0) {
      (**(code **)(*local_e8 + 0x10))();
    }
    else if ((int)lVar22 == 0) goto LAB_016b98ac;
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  FUN_016bb090(&local_e8,&local_128);
  plVar40 = local_e8;
  plVar23 = plVar4;
  plVar37 = plVar10;
  if (local_e8 != (long *)0x0) {
    plVar23 = local_e8 + 7;
    plVar37 = local_e8 + 6;
  }
  local_a0 = (undefined1  [8])*plVar37;
  uStack_98 = *plVar23;
  if (local_e8 == (long *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = local_e8[8];
  }
  local_88 = (long *)0x0;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x18))(local_e8);
  }
  local_88 = plVar40;
  FUN_016bc308(&local_c0,param_1,local_a0,plVar26,1);
  auVar11._8_8_ = uStack_98;
  auVar11._0_8_ = local_a0;
  plVar23 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar23 != (long *)0x0) {
    plVar37 = plVar23 + 5;
    do {
      lVar22 = *plVar37;
      iVar21 = (int)lVar22 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar8) {
        *(int *)plVar37 = iVar21;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar21 == 0) {
      (**(code **)(*plVar23 + 0x10))();
    }
    else if ((int)lVar22 == 0) goto LAB_016b98ac;
  }
  plVar23 = local_c0;
  local_c0 = (long *)0x0;
  param_1[9] = (long)plVar23;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  FUN_016bb1c8(&local_e8,&local_128);
  plVar40 = local_e8;
  plVar23 = plVar4;
  plVar37 = plVar10;
  if (local_e8 != (long *)0x0) {
    plVar23 = local_e8 + 7;
    plVar37 = local_e8 + 6;
  }
  local_a0 = (undefined1  [8])*plVar37;
  uStack_98 = *plVar23;
  if (local_e8 == (long *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = local_e8[8];
  }
  local_88 = (long *)0x0;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x18))(local_e8);
  }
  local_88 = plVar40;
  FUN_016bc308(&local_c0,param_1,local_a0,plVar26,0);
  auVar11._8_8_ = uStack_98;
  auVar11._0_8_ = local_a0;
  plVar23 = (long *)param_1[10];
  param_1[10] = 0;
  if (plVar23 != (long *)0x0) {
    plVar37 = plVar23 + 5;
    do {
      lVar22 = *plVar37;
      iVar21 = (int)lVar22 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar8) {
        *(int *)plVar37 = iVar21;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar21 == 0) {
      (**(code **)(*plVar23 + 0x10))();
    }
    else if ((int)lVar22 == 0) goto LAB_016b98ac;
  }
  plVar23 = local_c0;
  plVar37 = param_1 + 10;
  local_c0 = (long *)0x0;
  *plVar37 = (long)plVar23;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  FUN_016bb12c(&local_e8,&local_128);
  plVar40 = local_e8;
  puVar3 = (ulong *)plVar4;
  plVar23 = plVar10;
  if (local_e8 != (long *)0x0) {
    puVar3 = (ulong *)(local_e8 + 7);
    plVar23 = local_e8 + 6;
  }
  local_a0 = (undefined1  [8])*plVar23;
  uStack_98 = *puVar3;
  if (local_e8 == (long *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = local_e8[8];
  }
  local_88 = (long *)0x0;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x18))(local_e8);
  }
  local_88 = plVar40;
  FUN_016bc308(&local_c0,param_1,local_a0,plVar26,1);
  auVar11._8_8_ = uStack_98;
  auVar11._0_8_ = local_a0;
  plVar23 = (long *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar23 != (long *)0x0) {
    plVar40 = plVar23 + 5;
    do {
      lVar22 = *plVar40;
      iVar21 = (int)lVar22 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar8) {
        *(int *)plVar40 = iVar21;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar21 == 0) {
      (**(code **)(*plVar23 + 0x10))();
    }
    else if ((int)lVar22 == 0) goto LAB_016b98ac;
  }
  plVar23 = local_c0;
  plVar40 = param_1 + 0xb;
  local_c0 = (long *)0x0;
  *plVar40 = (long)plVar23;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  plVar39 = *(long **)(*plVar26 + 0x58);
  if (plVar39 == (long *)0x0) {
    FUN_00d819c8(0,0,1);
  }
  else {
    plVar25 = plVar39 + 5;
    do {
      lVar22 = *plVar25;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar8) {
        *(int *)plVar25 = (int)lVar22 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    plVar23 = local_c0;
    auVar28 = local_a0;
    if ((int)lVar22 == -1) {
LAB_016bae18:
      local_a0 = auVar28;
      local_c0 = plVar23;
      pcVar38 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_016bae38:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",pcVar38,0x53,
                 "Reference counter overflows.");
    }
    FUN_00d819c8(0,plVar39,1);
    auVar11._8_8_ = uStack_98;
    auVar11._0_8_ = local_a0;
    do {
      lVar22 = *plVar25;
      iVar21 = (int)lVar22 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar8) {
        *(int *)plVar25 = iVar21;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar21 == 0) {
      (**(code **)(*plVar39 + 0x10))(plVar39);
    }
    else if ((int)lVar22 == 0) {
LAB_016b98ac:
      pcVar38 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_016b98cc:
      _local_a0 = auVar11;
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 pcVar38,0x58,"Reference counter underflows.");
    }
  }
  *(undefined4 *)(*plVar37 + 0x1e0) = 2;
  *(undefined4 *)(*plVar40 + 0x1e0) = 2;
  lVar22 = *plVar40;
  if (*(char *)(lVar22 + 0x248) == '\0') {
    *(undefined4 *)(lVar22 + 0x24c) = 0x12;
    *(undefined1 *)(lVar22 + 0x248) = 1;
  }
  else {
    *(undefined4 *)(lVar22 + 0x24c) = 0x12;
  }
  plVar23 = (long *)param_1[0x40];
  plVar39 = (long *)param_1[0x41];
LAB_016b9880:
  while (auVar11._8_8_ = uStack_98, auVar11._0_8_ = local_a0, plVar39 != plVar23) {
    plVar39 = plVar39 + -1;
    plVar25 = (long *)*plVar39;
    if (plVar25 != (long *)0x0) {
      plVar2 = plVar25 + 5;
      do {
        lVar22 = *plVar2;
        iVar21 = (int)lVar22 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *(int *)plVar2 = iVar21;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar21 != 0) goto code_r0x016b98a8;
      (**(code **)(*plVar25 + 0x10))();
    }
  }
  plVar39 = param_1 + 0x40;
  param_1[0x41] = (long)plVar23;
  FUN_016bb3b8(plVar39,plVar26);
  FUN_016bb3b8(plVar39,param_1 + 9);
  FUN_016bb3b8(plVar39,plVar37);
  FUN_016bb3b8(plVar39,plVar40);
  if (param_1[0x62] == 0) {
    FUN_016bb900(0,0,0,0,param_1);
  }
  else {
    FUN_016be75c(param_1,0);
  }
  local_138 = (long *)0x0;
  local_130 = 0;
  plVar26 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
  if (plVar26 != (long *)0x0) {
    local_90 = 0;
    local_88 = (long *)0x0;
    local_a0 = (undefined1  [8])0x0;
    uStack_98 = 0;
    snprintf(local_a0,0x20,"%s%d",PTR_s_CB_Screen_047e11d8,0);
    FUN_014217b4(&local_e8,local_a0);
    plVar37 = local_e8;
    plVar23 = plVar4;
    local_c0 = plVar10;
    if (local_e8 != (long *)0x0) {
      plVar23 = local_e8 + 7;
      local_c0 = local_e8 + 6;
    }
    local_c0 = (long *)*local_c0;
    local_b8 = (byte *)*plVar23;
    if (local_e8 == (long *)0x0) {
      local_b0 = 0;
    }
    else {
      local_b0 = local_e8[8];
    }
    local_a8 = (long *)0x0;
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x18))(local_e8);
    }
    local_a8 = plVar37;
    uVar27 = (**(code **)(*plVar26 + 0x88))(plVar26,&local_c0,&local_138);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    if ((uVar27 & 1) != 0) {
      *(undefined4 *)((long)param_1 + 0x19c) = local_130;
      *(undefined1 *)(param_1 + 0x33) = 1;
    }
  }
  lVar22 = (**(code **)(*DAT_0485a020 + 0x80))(DAT_0485a020,*(undefined4 *)PTR_DAT_047e11e0);
  param_1[0x35] = lVar22;
  lVar22 = (**(code **)(*DAT_0485a020 + 0x80))(DAT_0485a020,*(undefined4 *)PTR_DAT_047e11e8);
  param_1[0x34] = lVar22;
  plVar26 = *(long **)(*(long *)(DAT_0485a0d8 + 0x38) + 0x40);
  if (plVar26 != (long *)0x0) {
    plVar23 = plVar26 + 5;
    do {
      lVar22 = *plVar23;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar8) {
        *(int *)plVar23 = (int)lVar22 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    plVar23 = local_c0;
    auVar28 = local_a0;
    if ((int)lVar22 == -1) goto LAB_016bae18;
  }
  puVar31 = (undefined1 *)plVar26[0x22];
  if (puVar31 != (undefined1 *)0x0) {
    uVar27 = (long)puVar31 - ((ulong)puVar31 >> 1 & 0x5555555555555555);
    uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333);
    uVar27 = (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar27 < 2) {
      puVar34 = (undefined1 *)((ulong)(puVar31 + -1) & 0x5df8a77c4b1003f0);
    }
    else if (&DAT_5df8a77c4b1003f0 < puVar31) {
      puVar34 = &DAT_5df8a77c4b1003f0;
    }
    else {
      uVar9 = 0;
      if (puVar31 != (undefined1 *)0x0) {
        uVar9 = 0x5df8a77c4b1003f0 / (ulong)puVar31;
      }
      puVar34 = &DAT_5df8a77c4b1003f0 + -(uVar9 * (long)puVar31);
    }
    plVar23 = *(long **)(plVar26[0x21] + (long)puVar34 * 8);
    if ((plVar23 == (long *)0x0) || (plVar23 = (long *)*plVar23, plVar23 == (long *)0x0))
    goto LAB_016b9b28;
    if (uVar27 < 2) {
      do {
        if ((undefined1 *)plVar23[1] == &DAT_5df8a77c4b1003f0) {
          if ((undefined1 *)plVar23[2] == &DAT_5df8a77c4b1003f0) goto LAB_016b9c50;
        }
        else if ((undefined1 *)((ulong)plVar23[1] & (ulong)(puVar31 + -1)) != puVar34) break;
        plVar23 = (long *)*plVar23;
      } while (plVar23 != (long *)0x0);
      goto LAB_016b9b28;
    }
    while( true ) {
      puVar35 = (undefined1 *)plVar23[1];
      if (puVar35 != &DAT_5df8a77c4b1003f0) {
        if (puVar31 <= puVar35) {
          uVar27 = 0;
          if (puVar31 != (undefined1 *)0x0) {
            uVar27 = (ulong)puVar35 / (ulong)puVar31;
          }
          puVar35 = puVar35 + -(uVar27 * (long)puVar31);
        }
        if (puVar35 == puVar34) goto LAB_016b9b20;
        goto LAB_016b9b28;
      }
      if ((undefined1 *)plVar23[2] == &DAT_5df8a77c4b1003f0) break;
LAB_016b9b20:
      plVar23 = (long *)*plVar23;
      if (plVar23 == (long *)0x0) goto LAB_016b9b28;
    }
LAB_016b9c50:
    local_70[0] = (long *)plVar23[6];
    if (local_70[0] == (long *)0x0) goto LAB_016b9c7c;
    plVar23 = local_70[0] + 5;
    do {
      lVar22 = *plVar23;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar8) {
        *(int *)plVar23 = (int)lVar22 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((int)lVar22 != -1) {
      puVar31 = (undefined1 *)plVar26[0x22];
      goto LAB_016b9c7c;
    }
LAB_016bafcc:
    pcVar38 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
    ;
    goto LAB_016bae38;
  }
LAB_016b9b28:
  local_70[0] = (long *)0x0;
LAB_016b9c7c:
  if (puVar31 == (undefined1 *)0x0) {
LAB_016b9d30:
    local_78 = (long *)0x0;
  }
  else {
    uVar27 = (long)puVar31 - ((ulong)puVar31 >> 1 & 0x5555555555555555);
    uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333);
    uVar27 = (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar27 < 2) {
      puVar34 = (undefined1 *)((ulong)(puVar31 + -1) & 0x805357d99b3be92e);
    }
    else if (&DAT_805357d99b3be92e < puVar31) {
      puVar34 = &DAT_805357d99b3be92e;
    }
    else {
      uVar9 = 0;
      if (puVar31 != (undefined1 *)0x0) {
        uVar9 = 0x805357d99b3be92e / (ulong)puVar31;
      }
      puVar34 = &DAT_805357d99b3be92e + -(uVar9 * (long)puVar31);
    }
    plVar23 = *(long **)(plVar26[0x21] + (long)puVar34 * 8);
    if ((plVar23 == (long *)0x0) || (plVar23 = (long *)*plVar23, plVar23 == (long *)0x0))
    goto LAB_016b9d30;
    if (uVar27 < 2) {
      do {
        if ((undefined1 *)plVar23[1] == &DAT_805357d99b3be92e) {
          if ((undefined1 *)plVar23[2] == &DAT_805357d99b3be92e) goto LAB_016b9d7c;
        }
        else if ((undefined1 *)((ulong)plVar23[1] & (ulong)(puVar31 + -1)) != puVar34) break;
        plVar23 = (long *)*plVar23;
      } while (plVar23 != (long *)0x0);
      goto LAB_016b9d30;
    }
    while( true ) {
      puVar35 = (undefined1 *)plVar23[1];
      if (puVar35 != &DAT_805357d99b3be92e) {
        if (puVar31 <= puVar35) {
          uVar27 = 0;
          if (puVar31 != (undefined1 *)0x0) {
            uVar27 = (ulong)puVar35 / (ulong)puVar31;
          }
          puVar35 = puVar35 + -(uVar27 * (long)puVar31);
        }
        if (puVar35 == puVar34) goto LAB_016b9d28;
        goto LAB_016b9d30;
      }
      if ((undefined1 *)plVar23[2] == &DAT_805357d99b3be92e) break;
LAB_016b9d28:
      plVar23 = (long *)*plVar23;
      if (plVar23 == (long *)0x0) goto LAB_016b9d30;
    }
LAB_016b9d7c:
    local_78 = (long *)plVar23[6];
    if (local_78 != (long *)0x0) {
      plVar23 = local_78 + 5;
      do {
        lVar22 = *plVar23;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar8) {
          *(int *)plVar23 = (int)lVar22 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((int)lVar22 == -1) goto LAB_016bafcc;
    }
  }
  local_e8 = (long *)0x0;
  local_e0 = (byte *)((ulong)local_e0 & 0xffffffff00000000);
  local_80 = (long *)0x0;
  plVar23 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
  if (plVar23 != (long *)0x0) {
    local_90 = 0;
    local_88 = (long *)0x0;
    local_a0 = (undefined1  [8])0x0;
    uStack_98 = 0;
    snprintf(local_a0,0x20,"%s%d",PTR_s_CB_Screen_047e11d8,0);
    FUN_014217b4(&local_c8,local_a0);
    plVar40 = (long *)CONCAT44(uStack_c4,local_c8);
    plVar37 = plVar4;
    local_c0 = plVar10;
    if (plVar40 != (long *)0x0) {
      plVar37 = plVar40 + 7;
      local_c0 = plVar40 + 6;
    }
    local_c0 = (long *)*local_c0;
    local_b8 = (byte *)*plVar37;
    if (plVar40 == (long *)0x0) {
      local_b0 = 0;
    }
    else {
      local_b0 = plVar40[8];
    }
    local_a8 = (long *)0x0;
    if (plVar40 != (long *)0x0) {
      (**(code **)(*plVar40 + 0x18))(plVar40);
    }
    local_a8 = plVar40;
    uVar27 = (**(code **)(*plVar23 + 0x88))(plVar23,&local_c0,&local_e8);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if ((long *)CONCAT44(uStack_c4,local_c8) != (long *)0x0) {
      (**(code **)(*(long *)CONCAT44(uStack_c4,local_c8) + 0x20))();
    }
    plVar37 = local_80;
    auVar11._8_8_ = uStack_98;
    auVar11._0_8_ = local_a0;
    if ((uVar27 & 1) != 0) {
      if (local_e8 != (long *)0x0) {
        plVar23 = local_e8 + 5;
        do {
          lVar22 = *plVar23;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar8) {
            *(int *)plVar23 = (int)lVar22 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        plVar23 = local_c0;
        auVar28 = local_a0;
        if ((int)lVar22 == -1) goto LAB_016bae18;
      }
      local_80 = local_e8;
      if (plVar37 != (long *)0x0) {
        plVar23 = plVar37 + 5;
        do {
          lVar22 = *plVar23;
          iVar21 = (int)lVar22 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar8) {
            *(int *)plVar23 = iVar21;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar21 == 0) {
          (**(code **)(*plVar37 + 0x10))();
        }
        else if ((int)lVar22 == 0) goto LAB_016b98ac;
      }
    }
  }
  plVar37 = (long *)param_1[0x40];
  plVar40 = (long *)param_1[0x41];
  plVar23 = local_c0;
  auVar28 = local_a0;
  do {
    local_c0 = plVar23;
    local_a0 = auVar28;
    if (plVar37 == plVar40) {
      auVar11._8_8_ = uStack_98;
      auVar11._0_8_ = auVar28;
      if (local_80 != (long *)0x0) {
        plVar23 = local_80 + 5;
        do {
          lVar22 = *plVar23;
          iVar21 = (int)lVar22 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar8) {
            *(int *)plVar23 = iVar21;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar21 == 0) {
          (**(code **)(*local_80 + 0x10))();
        }
        else if ((int)lVar22 == 0) goto LAB_016b98ac;
      }
      auVar11._8_8_ = uStack_98;
      auVar11._0_8_ = local_a0;
      if (local_e8 != (long *)0x0) {
        plVar23 = local_e8 + 5;
        do {
          lVar22 = *plVar23;
          iVar21 = (int)lVar22 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar8) {
            *(int *)plVar23 = iVar21;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar21 == 0) {
          (**(code **)(*local_e8 + 0x10))();
        }
        else if ((int)lVar22 == 0) goto LAB_016b98ac;
      }
      auVar11._8_8_ = uStack_98;
      auVar11._0_8_ = local_a0;
      if (local_78 != (long *)0x0) {
        plVar23 = local_78 + 5;
        do {
          lVar22 = *plVar23;
          iVar21 = (int)lVar22 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar8) {
            *(int *)plVar23 = iVar21;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar21 == 0) {
          (**(code **)(*local_78 + 0x10))();
        }
        else if ((int)lVar22 == 0) goto LAB_016b98ac;
      }
      auVar11._8_8_ = uStack_98;
      auVar11._0_8_ = local_a0;
      if (local_70[0] != (long *)0x0) {
        plVar23 = local_70[0] + 5;
        do {
          lVar22 = *plVar23;
          iVar21 = (int)lVar22 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar8) {
            *(int *)plVar23 = iVar21;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar21 == 0) {
          (**(code **)(*local_70[0] + 0x10))();
        }
        else if ((int)lVar22 == 0) goto LAB_016b98ac;
      }
      auVar11._8_8_ = uStack_98;
      auVar11._0_8_ = local_a0;
      if (plVar26 != (long *)0x0) {
        plVar23 = plVar26 + 5;
        do {
          lVar22 = *plVar23;
          iVar21 = (int)lVar22 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar8) {
            *(int *)plVar23 = iVar21;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar21 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
        }
        else if ((int)lVar22 == 0) goto LAB_016b98ac;
      }
      lVar22 = DAT_0485a0f8;
      plVar26 = (long *)param_1[0x28];
      if (plVar26 != (long *)0x0) {
        plVar4 = plVar26 + 7;
        plVar10 = plVar26 + 6;
      }
      local_a0 = (undefined1  [8])*plVar10;
      uStack_98 = *plVar4;
      if (plVar26 == (long *)0x0) {
        local_90 = 0;
      }
      else {
        local_90 = plVar26[8];
      }
      local_88 = (long *)0x0;
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x18))(plVar26);
      }
      lVar29 = param_1[0x29];
      local_88 = plVar26;
      (**(code **)(*param_1 + 0x18))(&local_c0,param_1);
      local_e8 = (long *)0x0;
      local_e0 = (byte *)0x0;
      if ((long *)local_c0[2] == plVar36) {
        FUN_016bbb08(&local_e8,&local_c0);
      }
      plVar26 = local_c0;
      puVar19 = PTR_DAT_047d3918;
      puVar18 = PTR_DAT_047d3910;
      puVar1 = PTR_DAT_047d3908;
      if (local_c0 != (long *)0x0) {
        plVar36 = local_c0 + 3;
        do {
          sVar5 = (short)*plVar36;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar8) {
            *(short *)plVar36 = sVar5 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar5 == 1) {
          piVar32 = (int *)((long)local_c0 + 0x1c);
          do {
            iVar21 = *piVar32;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar32,0x10);
            if (bVar8) {
              *piVar32 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar21 != -1) {
            if (((*puVar1 & 1) == 0) &&
               (iVar21 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar21 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar30 = *(long *)puVar18;
            *(long *)puVar19 = lVar30;
            local_70[0] = (long *)*plVar26;
            FUN_00c44438(lVar30 + 0x8040,local_70);
          }
        }
        else if (sVar5 == 0) goto LAB_016ba3ec;
      }
      local_c0 = (long *)0x0;
      local_b8 = (byte *)0x0;
      do {
        pbVar33 = local_e0;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(&local_e0,0x10);
        if (bVar8) {
          local_e0 = (byte *)0x0;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (((*puVar1 & 1) == 0) && (iVar21 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar21 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      uVar24 = *(undefined8 *)puVar18;
      *(undefined8 *)puVar19 = uVar24;
      FUN_00c44204(&local_78,uVar24,pbVar33);
      plVar26 = local_e8;
      local_e8 = (long *)0x0;
      if (plVar26 != (long *)0x0) {
        plVar36 = plVar26 + 3;
        do {
          sVar5 = (short)*plVar36;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar8) {
            *(short *)plVar36 = sVar5 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar5 == 1) {
          piVar32 = (int *)((long)plVar26 + 0x1c);
          do {
            iVar21 = *piVar32;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar32,0x10);
            if (bVar8) {
              *piVar32 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar21 != -1) {
            if (((*puVar1 & 1) == 0) &&
               (iVar21 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar21 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar30 = *(long *)puVar18;
            *(long *)puVar19 = lVar30;
            local_70[0] = (long *)*plVar26;
            FUN_00c44438(lVar30 + 0x8040,local_70);
          }
        }
        else if (sVar5 == 0) goto LAB_016ba3ec;
      }
      plVar26 = local_c0;
      if (local_78 == (long *)0x0) {
        FUN_016befbc(&local_c0);
      }
      else {
        local_c0 = (long *)0x0;
        if (plVar26 != (long *)0x0) {
          plVar36 = plVar26 + 3;
          do {
            sVar5 = (short)*plVar36;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar36,0x10);
            if (bVar8) {
              *(short *)plVar36 = sVar5 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar5 == 1) {
            piVar32 = (int *)((long)plVar26 + 0x1c);
            do {
              iVar21 = *piVar32;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar32,0x10);
              if (bVar8) {
                *piVar32 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar21 != -1) {
              if (((*puVar1 & 1) == 0) &&
                 (iVar21 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar21 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar30 = *(long *)puVar18;
              *(long *)puVar19 = lVar30;
              local_70[0] = (long *)*plVar26;
              FUN_00c44438(lVar30 + 0x8040,local_70);
            }
          }
          else if (sVar5 == 0) goto LAB_016ba3ec;
        }
        local_c0 = local_78;
        local_78 = (long *)0x0;
        local_b8 = pbVar33;
      }
      FUN_016bbea4(lVar22,local_a0,lVar29,&local_c0);
      plVar26 = local_c0;
      if (local_c0 != (long *)0x0) {
        plVar36 = local_c0 + 3;
        do {
          sVar5 = (short)*plVar36;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar8) {
            *(short *)plVar36 = sVar5 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar5 == 1) {
          piVar32 = (int *)((long)local_c0 + 0x1c);
          do {
            iVar21 = *piVar32;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar32,0x10);
            if (bVar8) {
              *piVar32 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar21 != -1) {
            if (((*puVar1 & 1) == 0) &&
               (iVar21 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar21 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)puVar18;
            *(long *)puVar19 = lVar22;
            local_70[0] = (long *)*plVar26;
            FUN_00c44438(lVar22 + 0x8040,local_70);
          }
        }
        else if (sVar5 == 0) goto LAB_016ba3ec;
      }
      plVar26 = local_e8;
      if (local_e8 != (long *)0x0) {
        plVar36 = local_e8 + 3;
        do {
          sVar5 = (short)*plVar36;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar8) {
            *(short *)plVar36 = sVar5 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar5 == 1) {
          piVar32 = (int *)((long)local_e8 + 0x1c);
          do {
            iVar21 = *piVar32;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar32,0x10);
            if (bVar8) {
              *piVar32 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar21 != -1) {
            if (((*puVar1 & 1) == 0) &&
               (iVar21 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar21 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)puVar18;
            *(long *)puVar19 = lVar22;
            local_70[0] = (long *)*plVar26;
            FUN_00c44438(lVar22 + 0x8040,local_70);
          }
        }
        else if (sVar5 == 0) {
LAB_016ba3ec:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      auVar11._8_8_ = uStack_98;
      auVar11._0_8_ = local_a0;
      if (local_138 == (long *)0x0) {
LAB_016ba2f0:
        if (local_128 != (long *)0x0) {
          (**(code **)(*local_128 + 0x20))();
        }
        return;
      }
      plVar26 = local_138 + 5;
      do {
        lVar22 = *plVar26;
        iVar21 = (int)lVar22 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar8) {
          *(int *)plVar26 = iVar21;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar21 == 0) {
        (**(code **)(*local_138 + 0x10))();
        goto LAB_016ba2f0;
      }
      if ((int)lVar22 != 0) goto LAB_016ba2f0;
      goto LAB_016b98ac;
    }
    if ((char)param_1[0x34] != '\0') {
      plVar39 = *(long **)(*plVar37 + 0x58);
      local_c0._4_4_ = (undefined4)((ulong)plVar23 >> 0x20);
      local_a0._1_7_ = SUB87((ulong)auVar28 >> 8,0);
      if (plVar39 == (long *)0x0) {
        local_c8 = *(int *)((long)param_1 + 0x1a4);
        local_c0 = (long *)CONCAT44(local_c0._4_4_,2);
        local_a0 = (undefined1  [8])((ulong)(uint7)local_a0._1_7_ << 8);
        piVar32 = _DAT_00000110;
        if (_DAT_00000110 != _DAT_00000118) {
LAB_016ba7cc:
          if ((*piVar32 != 2) || (piVar32[1] != local_c8)) goto LAB_016ba7e4;
          if (local_78 != (long *)0x0) {
            plVar23 = local_78 + 5;
            do {
              lVar22 = *plVar23;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar8) {
                *(int *)plVar23 = (int)lVar22 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if ((int)lVar22 == -1) goto LAB_016bae40;
          }
          plVar39 = *(long **)(piVar32 + 2);
          *(long **)(piVar32 + 2) = local_78;
          if (plVar39 == (long *)0x0) goto LAB_016b9fa0;
          plVar23 = plVar39 + 5;
          do {
            lVar22 = *plVar23;
            iVar21 = (int)lVar22 + -1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar8) {
              *(int *)plVar23 = iVar21;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar21 == 0) {
            lVar22 = *plVar39;
            goto LAB_016ba684;
          }
          if ((int)lVar22 != 0) goto LAB_016b9fa0;
          goto LAB_016ba924;
        }
LAB_016ba7f0:
        FUN_00d11148(0x110,&local_c0,&local_c8,&local_78,local_a0);
      }
      else {
        plVar25 = plVar39 + 5;
        do {
          lVar22 = *plVar25;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar8) {
            *(int *)plVar25 = (int)lVar22 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((int)lVar22 == -1) goto LAB_016bae18;
        local_c8 = *(int *)((long)param_1 + 0x1a4);
        local_c0 = (long *)CONCAT44(local_c0._4_4_,2);
        local_a0 = (undefined1  [8])((ulong)(uint7)local_a0._1_7_ << 8);
        piVar32 = (int *)plVar39[0x22];
        if (piVar32 != (int *)plVar39[0x23]) {
LAB_016b9f14:
          if ((*piVar32 != 2) || (piVar32[1] != local_c8)) goto LAB_016b9f2c;
          if (local_78 != (long *)0x0) {
            plVar23 = local_78 + 5;
            do {
              lVar22 = *plVar23;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar8) {
                *(int *)plVar23 = (int)lVar22 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if ((int)lVar22 == -1) goto LAB_016bae40;
          }
          plVar23 = *(long **)(piVar32 + 2);
          *(long **)(piVar32 + 2) = local_78;
          if (plVar23 == (long *)0x0) goto LAB_016b9f88;
          plVar2 = plVar23 + 5;
          do {
            lVar22 = *plVar2;
            iVar21 = (int)lVar22 + -1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *(int *)plVar2 = iVar21;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar21 == 0) {
            (**(code **)(*plVar23 + 0x10))();
            goto LAB_016b9f88;
          }
          if ((int)lVar22 != 0) goto LAB_016b9f88;
          goto LAB_016ba924;
        }
LAB_016bab68:
        FUN_00d11148(plVar39 + 0x22,&local_c0,&local_c8,&local_78,local_a0);
LAB_016b9f88:
        do {
          auVar11._8_8_ = uStack_98;
          auVar11._0_8_ = local_a0;
          lVar22 = *plVar25;
          iVar21 = (int)lVar22 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar8) {
            *(int *)plVar25 = iVar21;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar21 == 0) {
          lVar22 = *plVar39;
LAB_016ba684:
          (**(code **)(lVar22 + 0x10))(plVar39);
        }
        else if ((int)lVar22 == 0) goto LAB_016b98ac;
      }
    }
LAB_016b9fa0:
    if ((char)param_1[0x35] != '\0') {
      plVar39 = *(long **)(*plVar37 + 0x58);
      if (plVar39 == (long *)0x0) {
        local_c8 = *(int *)((long)param_1 + 0x1ac);
        local_c0 = (long *)CONCAT44(local_c0._4_4_,2);
        local_a0 = (undefined1  [8])((ulong)(uint7)local_a0._1_7_ << 8);
        piVar32 = _DAT_00000110;
        if (_DAT_00000110 != _DAT_00000118) {
LAB_016ba830:
          if ((*piVar32 != 2) || (piVar32[1] != local_c8)) goto LAB_016ba848;
          if (local_70[0] != (long *)0x0) {
            plVar23 = local_70[0] + 5;
            do {
              lVar22 = *plVar23;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar8) {
                *(int *)plVar23 = (int)lVar22 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if ((int)lVar22 == -1) goto LAB_016bae40;
          }
          plVar39 = *(long **)(piVar32 + 2);
          *(long **)(piVar32 + 2) = local_70[0];
          if (plVar39 != (long *)0x0) {
            plVar23 = plVar39 + 5;
            do {
              lVar22 = *plVar23;
              iVar21 = (int)lVar22 + -1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar8) {
                *(int *)plVar23 = iVar21;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar21 != 0) {
              if ((int)lVar22 != 0) goto LAB_016ba078;
              goto LAB_016ba924;
            }
            lVar22 = *plVar39;
            goto LAB_016ba698;
          }
          goto LAB_016ba078;
        }
LAB_016ba854:
        FUN_00d11148(0x110,&local_c0,&local_c8,local_70,local_a0);
      }
      else {
        plVar25 = plVar39 + 5;
        do {
          lVar22 = *plVar25;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar8) {
            *(int *)plVar25 = (int)lVar22 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        plVar23 = local_c0;
        auVar28 = local_a0;
        if ((int)lVar22 == -1) goto LAB_016bae18;
        local_c8 = *(int *)((long)param_1 + 0x1ac);
        local_c0 = (long *)CONCAT44(local_c0._4_4_,2);
        local_a0 = (undefined1  [8])((ulong)(uint7)local_a0._1_7_ << 8);
        piVar32 = (int *)plVar39[0x22];
        if (piVar32 != (int *)plVar39[0x23]) {
LAB_016b9fec:
          if ((*piVar32 != 2) || (piVar32[1] != local_c8)) goto LAB_016ba004;
          if (local_70[0] != (long *)0x0) {
            plVar23 = local_70[0] + 5;
            do {
              lVar22 = *plVar23;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar8) {
                *(int *)plVar23 = (int)lVar22 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if ((int)lVar22 == -1) {
LAB_016bae40:
              pcVar38 = 
              "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
              ;
              goto LAB_016bae38;
            }
          }
          plVar23 = *(long **)(piVar32 + 2);
          *(long **)(piVar32 + 2) = local_70[0];
          if (plVar23 != (long *)0x0) {
            plVar2 = plVar23 + 5;
            do {
              lVar22 = *plVar2;
              iVar21 = (int)lVar22 + -1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *(int *)plVar2 = iVar21;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar21 == 0) {
              (**(code **)(*plVar23 + 0x10))();
            }
            else if ((int)lVar22 == 0) {
LAB_016ba924:
              auVar11._8_8_ = uStack_98;
              auVar11._0_8_ = local_a0;
              pcVar38 = 
              "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
              ;
              goto LAB_016b98cc;
            }
          }
          goto LAB_016ba060;
        }
LAB_016bab84:
        FUN_00d11148(plVar39 + 0x22,&local_c0,&local_c8,local_70,local_a0);
LAB_016ba060:
        do {
          auVar11._8_8_ = uStack_98;
          auVar11._0_8_ = local_a0;
          lVar22 = *plVar25;
          iVar21 = (int)lVar22 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar8) {
            *(int *)plVar25 = iVar21;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar21 == 0) {
          lVar22 = *plVar39;
LAB_016ba698:
          (**(code **)(lVar22 + 0x10))(plVar39);
        }
        else if ((int)lVar22 == 0) goto LAB_016b98ac;
      }
    }
LAB_016ba078:
    if ((char)param_1[0x33] != '\0') {
      plVar39 = *(long **)(*plVar37 + 0x58);
      if (plVar39 == (long *)0x0) {
        FUN_00c4b998(0,0x1f,*(undefined4 *)((long)param_1 + 0x19c),&local_80);
      }
      else {
        plVar25 = plVar39 + 5;
        do {
          lVar22 = *plVar25;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar8) {
            *(int *)plVar25 = (int)lVar22 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        plVar23 = local_c0;
        auVar28 = local_a0;
        if ((int)lVar22 == -1) goto LAB_016bae18;
        FUN_00c4b998(plVar39,0x1f,*(undefined4 *)((long)param_1 + 0x19c),&local_80);
        auVar11._8_8_ = uStack_98;
        auVar11._0_8_ = local_a0;
        do {
          lVar22 = *plVar25;
          iVar21 = (int)lVar22 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar8) {
            *(int *)plVar25 = iVar21;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar21 == 0) {
          (**(code **)(*plVar39 + 0x10))(plVar39);
        }
        else if ((int)lVar22 == 0) goto LAB_016b98ac;
      }
    }
    plVar37 = plVar37 + 1;
    plVar23 = local_c0;
    auVar28 = local_a0;
  } while( true );
code_r0x016b98a8:
  if ((int)lVar22 == 0) goto LAB_016b98ac;
  goto LAB_016b9880;
LAB_016ba7e4:
  piVar32 = piVar32 + 8;
  if (_DAT_00000118 == piVar32) goto LAB_016ba7f0;
  goto LAB_016ba7cc;
LAB_016b9f2c:
  piVar32 = piVar32 + 8;
  if ((int *)plVar39[0x23] == piVar32) goto LAB_016bab68;
  goto LAB_016b9f14;
LAB_016ba848:
  piVar32 = piVar32 + 8;
  if (_DAT_00000118 == piVar32) goto LAB_016ba854;
  goto LAB_016ba830;
LAB_016ba004:
  piVar32 = piVar32 + 8;
  if ((int *)plVar39[0x23] == piVar32) goto LAB_016bab84;
  goto LAB_016b9fec;
}


