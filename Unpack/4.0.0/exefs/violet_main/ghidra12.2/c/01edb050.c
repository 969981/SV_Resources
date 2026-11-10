/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01edb050; name: FUN_01edb050
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_01edb050(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  uint7 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  byte bVar17;
  short sVar18;
  undefined2 uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  undefined8 uVar29;
  char cVar30;
  ushort uVar31;
  long lVar32;
  code *pcVar33;
  long lVar34;
  long lVar35;
  byte bVar36;
  undefined8 local_108;
  long *local_100;
  long *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulong local_d8;
  undefined1 local_d0 [8];
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  char local_84;
  undefined8 local_82;
  long *local_78;
  undefined4 local_6c [3];
  
  if (param_1 == 0) {
    return 3;
  }
  switch(*(undefined1 *)(param_2 + 0x11)) {
  case 1:
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar20 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar20 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar32 = *(long *)PTR_DAT_047d4ca0;
    *(long *)PTR_DAT_047d4ca8 = lVar32;
    puVar12 = PTR_DAT_047d4ce8;
    puVar23 = PTR_DAT_047d4ce0;
    plVar25 = *(long **)(lVar32 + 0x1c0);
    plVar1 = *(long **)(lVar32 + 0x1c8);
    while( true ) {
      if (plVar25 == plVar1) {
        return 3;
      }
      lVar32 = *plVar25;
      puVar22 = (undefined8 *)
                (*(code *)**(undefined8 **)(lVar32 + 0x28))((undefined8 *)(lVar32 + 0x28));
      if (((*puVar23 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar23), iVar20 != 0)) {
        uVar29 = FUN_01b3fb0c();
        *(undefined8 *)puVar12 = uVar29;
        __cxa_guard_release(puVar23);
      }
      if (puVar22 != (undefined8 *)0x0) break;
LAB_01edb11c:
      plVar25 = plVar25 + 1;
    }
LAB_01edb10c:
    if (puVar22 != (undefined8 *)puVar12) goto code_r0x01edb114;
    if (*(char *)(param_2 + 0x11) != '\x01') {
      return 3;
    }
    local_d8 = 0;
    local_c8 = 0xffffffffffffffff;
    local_c0 = 0x3ffffffff;
    local_d0[0] = 0;
    local_84 = '\0';
    local_98 = 0xffffffff;
    local_94 = 0;
    local_b8 = 0xffffffffffffffff;
    local_b0 = 0x1000000000000;
    local_82 = 0x10001000100;
    local_a8 = 0x1ffffffffff00ff;
    local_a0 = 0xffffffffffffffff;
    local_8c = 0xffff00000000;
    cVar16 = *(char *)(param_2 + 0x23d);
    if (cVar16 == '\x01') {
      uVar31 = 1;
    }
    else {
      uVar31 = (ushort)*(byte *)(param_2 + 0x23c);
      if (*(byte *)(param_2 + 0x23c) == 0) {
        local_e8 = 0;
        local_f8 = (long *)0xf4b17a579f18960;
        uStack_f0 = 0x82a2b175229d6a5b;
        FUN_00d1af18(&local_f8);
        local_100 = (long *)CONCAT44(local_100._4_4_,0x630000);
        sVar18 = FUN_01edc73c(&local_f8,&local_100);
        uVar31 = sVar18 + 1;
      }
    }
    local_b0 = CONCAT26(uVar31,(undefined6)local_b0);
    local_c8 = (ulong)*(uint *)(param_2 + 0x20);
    if (*(uint *)(param_2 + 0x20) == 0) {
      local_c8 = 0xffffffffffffffff;
    }
    uVar2 = *(uint *)(param_2 + 0x18);
    uVar24 = (ulong)uVar2;
    if ((uVar2 == 0) || (*(int *)(param_2 + 8) * -1000000 + uVar2 == 0)) {
      uVar24 = FUN_0192028c(lVar32);
    }
    local_b8 = uVar24 & 0xffffffff;
    if (3 < *(byte *)(param_2 + 0x240) - 1) {
      uVar24 = 0x1ffffffff;
      goto switchD_01edb264_caseD_4;
    }
    uVar24 = (ulong)*(uint *)(param_2 + 0x24);
    switch((uint)*(byte *)(param_2 + 0x240)) {
    case 1:
      uVar24 = 0x3ffffffff;
      break;
    case 2:
      uVar29 = 1;
      goto LAB_01edb2d0;
    case 3:
      uVar29 = 2;
LAB_01edb2d0:
      uVar24 = FUN_01edc7e8(local_b8,uVar24,uVar29);
      uVar24 = uVar24 & 0xffffffff;
    }
switchD_01edb264_caseD_4:
    uVar15 = local_82;
    uVar29 = local_a8;
    local_b0._0_4_ = (uint)*(uint3 *)(param_2 + 0x238);
    bVar17 = *(byte *)(param_2 + 0x23b);
    if (bVar17 == 3) {
      bVar17 = 0xff;
    }
    uVar31 = (ushort)*(byte *)(param_2 + 0x23e);
    if (*(byte *)(param_2 + 0x23e) == 0xff) {
      uVar31 = 0xffff;
    }
    local_a8._0_4_ = CONCAT22(uVar31,(ushort)bVar17);
    uVar14 = local_a8;
    bVar3 = *(byte *)(param_2 + 0x23f);
    bVar17 = (byte)(0xfeff020100 >> (((ulong)bVar3 & 7) << 3));
    if (4 < (ulong)bVar3) {
      bVar17 = bVar3;
    }
    local_a8._7_1_ = SUB81(uVar29,7);
    local_a8._0_7_ = CONCAT16(bVar17,(int6)uVar14);
    bVar17 = *(byte *)(param_2 + 0x268);
    bVar3 = *(byte *)(param_2 + 0x269);
    bVar4 = *(byte *)(param_2 + 0x26a);
    local_a0._0_4_ = (uint)CONCAT12(bVar3,(ushort)bVar17);
    bVar5 = *(byte *)(param_2 + 0x26c);
    local_a0._0_6_ = (uint6)CONCAT14(bVar4,(uint)local_a0);
    uVar11 = CONCAT16(bVar5,(uint6)local_a0);
    local_a0 = (ulong)uVar11;
    bVar6 = *(byte *)(param_2 + 0x26d);
    bVar7 = *(byte *)(param_2 + 0x26b);
    local_98 = (uint)CONCAT12(bVar7,(ushort)bVar6);
    bVar36 = bVar17;
    if (((((((ushort)(bVar17 - 0xfc) < 3) || (bVar36 = bVar3, (ushort)(bVar3 - 0xfc) < 3)) ||
          (bVar36 = bVar4, (ushort)(bVar4 - 0xfc) < 3)) ||
         ((bVar36 = bVar5, (ushort)(bVar5 - 0xfc) < 3 ||
          (bVar36 = bVar6, (ushort)(bVar6 - 0xfc) < 3)))) ||
        (bVar36 = bVar7, (ushort)(bVar7 - 0xfc) < 3)) && ((byte)(bVar36 + 5) != '\0')) {
      local_a0 = 0xffffffffffffffff;
      local_98 = 0xffffffff;
      local_84 = bVar36 + 5;
    }
    else {
      if (0x1f < bVar17) {
        local_a0 = CONCAT62((uint6)(uint5)(uVar11 >> 0x10),0xffff);
      }
      if (0x1f < bVar3) {
        local_a0._0_4_ = CONCAT22(0xffff,(undefined2)local_a0);
      }
      if (0x1f < bVar4) {
        local_a0._0_6_ = CONCAT24(0xffff,(uint)local_a0);
      }
      if (0x1f < bVar5) {
        local_a0 = CONCAT26(0xffff,(uint6)local_a0);
      }
      if (0x1f < bVar6) {
        local_98 = CONCAT22((ushort)bVar7,0xffff);
      }
      if (0x1f < bVar7) {
        local_98 = CONCAT22(0xffff,(undefined2)local_98);
      }
    }
    local_82 = CONCAT62(CONCAT42(local_82._4_4_,*(undefined2 *)(param_2 + 0x244)),
                        *(undefined2 *)(param_2 + 0x246));
    uVar29 = local_82;
    local_c0 = uVar24;
    if (*(short *)(param_2 + 0xc) == 0x100) {
      local_e8 = 0;
      local_f8 = (long *)0xf4b17a579f18960;
      uStack_f0 = 0x82a2b175229d6a5b;
      FUN_00d1af18(&local_f8);
      local_100 = (long *)CONCAT44(local_100._4_4_,0xff0000);
      uVar19 = FUN_01edc73c(&local_f8,&local_100);
      local_82._0_6_ = CONCAT24(uVar19,(undefined4)local_82);
    }
    else {
      local_82._6_2_ = SUB82(uVar15,6);
      local_82._0_4_ = (undefined4)uVar29;
      local_82._0_6_ = CONCAT24(*(short *)(param_2 + 0xc),(undefined4)local_82);
    }
    plVar25 = (long *)FUN_00eebe4c(&local_f8,param_1,&local_d8);
    if (plVar25 == (long *)0x0) {
      return 3;
    }
    plVar1 = plVar25 + 5;
    do {
      lVar34 = *plVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)lVar34 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((int)lVar34 == -1) goto LAB_01edc1b0;
    if (cVar16 == '\x01') {
      FUN_01edc83c(plVar25,param_1);
    }
    puVar23 = PTR_DAT_047d89f8;
    if (((*PTR_DAT_047d89f8 & 1) == 0) &&
       (iVar20 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar20 != 0)) {
      FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89f8);
    }
    puVar13 = PTR_DAT_047d8a08;
    puVar12 = PTR_DAT_047d8a00;
    lVar34 = *(long *)PTR_DAT_047d8a00;
    *(long *)PTR_DAT_047d8a08 = lVar34;
    uVar2 = *(byte *)(lVar34 + 0x2c) - 1;
    if (uVar2 < 10) {
      lVar34 = *(long *)(&DAT_03d5ba70 + (long)(char)uVar2 * 8);
    }
    else {
      lVar34 = 1;
    }
    lVar34 = param_2 + lVar34 * 0x1c;
    cVar8 = *(char *)(lVar34 + 0x42);
    cVar30 = cVar8;
    if (cVar8 == '\0') {
      if (((*puVar23 & 1) == 0) && (iVar20 = __cxa_guard_acquire(PTR_DAT_047d89f8,0), iVar20 != 0))
      {
        FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d89f8);
      }
      lVar35 = *(long *)puVar12;
      *(long *)puVar13 = lVar35;
      cVar30 = *(char *)(lVar35 + 0x2c);
    }
    FUN_01edca28(plVar25,cVar30);
    local_f8 = (long *)CONCAT44(local_f8._4_4_,0x20);
    plVar26 = (long *)FUN_0152bfac(&local_100,param_1,&local_f8);
    if (plVar26 != (long *)0x0) {
      plVar27 = plVar26 + 5;
      do {
        lVar35 = *plVar27;
        cVar30 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar9) {
          *(int *)plVar27 = (int)lVar35 + 1;
          cVar30 = ExclusiveMonitorsStatus();
        }
      } while (cVar30 != '\0');
      if ((int)lVar35 == -1) goto LAB_01edc1b0;
    }
    local_f8 = (long *)CONCAT44(local_f8._4_4_,0x20);
    plVar27 = (long *)FUN_0152bfac(&local_100,param_1,&local_f8);
    if (plVar27 != (long *)0x0) {
      plVar28 = plVar27 + 5;
      do {
        lVar35 = *plVar28;
        cVar30 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar9) {
          *(int *)plVar28 = (int)lVar35 + 1;
          cVar30 = ExclusiveMonitorsStatus();
        }
      } while (cVar30 != '\0');
      if ((int)lVar35 == -1) goto LAB_01edc1b0;
    }
    if (cVar16 == '\x01') {
      FUN_01d242b8(plVar27,0);
    }
    else if (*(short *)(lVar34 + 0x28) == 0) {
      if (cVar8 == '\0') {
        FUN_01d242b8(plVar27,local_b0 & 0xffff);
      }
      else {
        FUN_010549ec(plVar27,local_b0 & 0xffff,cVar8);
      }
    }
    else {
      FUN_019202d0(plVar27);
    }
    FUN_01dbf0f8(plVar25,plVar27);
    if (*(short *)(lVar34 + 0x124) == 0) {
      FUN_00e67bb8(lVar32,plVar26);
    }
    else {
      FUN_019202d0(plVar26,(short *)(lVar34 + 0x124));
    }
    FUN_00e677b0(plVar25,plVar26);
    if (plVar27 != (long *)0x0) {
      plVar28 = plVar27 + 5;
      do {
        lVar34 = *plVar28;
        iVar20 = (int)lVar34 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar9) {
          *(int *)plVar28 = iVar20;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar20 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
      }
      else if ((int)lVar34 == 0) goto LAB_01edbf80;
    }
    if (plVar26 != (long *)0x0) {
      plVar27 = plVar26 + 5;
      do {
        lVar34 = *plVar27;
        iVar20 = (int)lVar34 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar9) {
          *(int *)plVar27 = iVar20;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar20 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
      }
      else if ((int)lVar34 == 0) goto LAB_01edbf80;
    }
    bVar17 = *(byte *)(param_2 + 0x26e);
    if (1 < bVar17) {
      bVar17 = *(byte *)(lVar32 + 0x45);
    }
    FUN_00e677a8(plVar25,bVar17);
    sVar18 = 4;
    if (*(short *)(param_2 + 0x224) != 0) {
      sVar18 = *(short *)(param_2 + 0x224);
    }
    FUN_01892138(plVar25,sVar18);
    FUN_00e673a8(plVar25,9,*(undefined1 *)(param_2 + 0x241));
    FUN_01dc755c(plVar25,*(undefined2 *)(param_2 + 0x226));
    FUN_01d32964(plVar25,0,*(undefined2 *)(param_2 + 0x228));
    FUN_01edca30(plVar25,0,*(undefined2 *)(param_2 + 0x230));
    FUN_01d32964(plVar25,1,*(undefined2 *)(param_2 + 0x22a));
    FUN_01edca30(plVar25,1,*(undefined2 *)(param_2 + 0x232));
    FUN_01d32964(plVar25,2,*(undefined2 *)(param_2 + 0x22c));
    FUN_01edca30(plVar25,2,*(undefined2 *)(param_2 + 0x234));
    FUN_01d32964(plVar25,3,*(undefined2 *)(param_2 + 0x22e));
    FUN_01edca30(plVar25,3,*(undefined2 *)(param_2 + 0x236));
    iVar20 = *(int *)(param_2 + 0x1c);
    if (iVar20 == 0) {
      iVar20 = FUN_0168d1b0();
    }
    FUN_00e671b4(plVar25,iVar20);
    FUN_01edca48(plVar25);
    if (cVar16 != '\x01') {
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = (long *)0x0;
      uStack_f0 = 0;
      FUN_01dbd608(lVar32,&local_f8);
      FUN_01dbd74c(plVar25,&local_f8);
    }
    FUN_01edcaf0(plVar25,1);
    FUN_013f7408(plVar25,1,*(undefined1 *)(param_2 + 0x270));
    FUN_013f7408(plVar25,0,*(undefined1 *)(param_2 + 0x26f));
    FUN_013f7408(plVar25,2,*(undefined1 *)(param_2 + 0x271));
    FUN_013f7408(plVar25,5,*(undefined1 *)(param_2 + 0x272));
    FUN_013f7408(plVar25,3,*(undefined1 *)(param_2 + 0x273));
    FUN_013f7408(plVar25,4,*(undefined1 *)(param_2 + 0x274));
    if (*(char *)(param_2 + 0x248) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x249) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x24a) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x24b) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x24c) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x24d) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x24e) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x24f) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x250) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x251) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x252) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x253) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x254) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x255) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x256) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 599) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 600) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x259) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x25a) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x25b) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x25c) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x25d) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x25e) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x25f) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x260) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x261) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x262) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x263) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x264) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x265) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x266) != -1) {
      FUN_01edcafc(plVar25);
    }
    if (*(char *)(param_2 + 0x267) != -1) {
      FUN_01edcafc(plVar25);
    }
    FUN_00e673a8(plVar25,3,*(undefined2 *)(param_2 + 0x220));
    FUN_00e673a8(plVar25,7,*(undefined2 *)(param_2 + 0x222));
    do {
      lVar34 = *plVar1;
      cVar16 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)lVar34 + 1;
        cVar16 = ExclusiveMonitorsStatus();
      }
    } while (cVar16 != '\0');
    local_78 = plVar25;
    if ((int)lVar34 == -1) goto LAB_01edc1b0;
    uVar24 = FUN_0153a294(lVar32,&local_78);
    if (local_78 != (long *)0x0) {
      plVar26 = local_78 + 5;
      do {
        lVar32 = *plVar26;
        iVar20 = (int)lVar32 + -1;
        cVar16 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar9) {
          *(int *)plVar26 = iVar20;
          cVar16 = ExclusiveMonitorsStatus();
        }
      } while (cVar16 != '\0');
      if (iVar20 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
      else if ((int)lVar32 == 0) goto LAB_01edbf80;
    }
    if ((uVar24 & 1) == 0) {
      FUN_00e673a8(plVar25,10,*(undefined1 *)(param_2 + 0x275));
      FUN_00e673a8(plVar25,0xb,*(undefined1 *)(param_2 + 0x276));
      FUN_00e673a8(plVar25,0xd,*(undefined1 *)(param_2 + 0x277));
      FUN_00e673a8(plVar25,0xc,*(undefined2 *)(param_2 + 0x278));
    }
    FUN_00f89214(plVar25,*(undefined1 *)(param_2 + 0x242));
    FUN_01edcb20(plVar25);
    do {
      lVar32 = *plVar1;
      cVar16 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)lVar32 + 1;
        cVar16 = ExclusiveMonitorsStatus();
      }
    } while (cVar16 != '\0');
    if ((int)lVar32 == -1) goto LAB_01edc1b0;
    do {
      lVar32 = *plVar1;
      iVar20 = (int)lVar32 + -1;
      cVar16 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = iVar20;
        cVar16 = ExclusiveMonitorsStatus();
      }
    } while (cVar16 != '\0');
    if (iVar20 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
    }
    else if ((int)lVar32 == 0) goto LAB_01edbf80;
    uVar21 = FUN_01539fe0(plVar25,7);
    FUN_01ecce00(&local_d8);
    if ((char)local_d8 == '\0') {
      iVar20 = 3;
    }
    else {
      iVar20 = FUN_01edad60(local_d0);
      do {
        lVar32 = *plVar1;
        cVar16 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *(int *)plVar1 = (int)lVar32 + 1;
          cVar16 = ExclusiveMonitorsStatus();
        }
      } while (cVar16 != '\0');
      local_100 = plVar25;
      if ((int)lVar32 == -1) goto LAB_01edc1b0;
      FUN_01dbd0f4(&local_100,uVar21,(int)(short)iVar20,(iVar20 << 8) >> 0x18,iVar20 >> 0x18);
      if (local_100 != (long *)0x0) {
        plVar26 = local_100 + 5;
        do {
          lVar32 = *plVar26;
          iVar20 = (int)lVar32 + -1;
          cVar16 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar9) {
            *(int *)plVar26 = iVar20;
            cVar16 = ExclusiveMonitorsStatus();
          }
        } while (cVar16 != '\0');
        if (iVar20 == 0) {
          (**(code **)(*local_100 + 0x10))();
        }
        else if ((int)lVar32 == 0) goto LAB_01edbf80;
      }
      FUN_0174fbdc(&local_f8);
      uVar24 = (**(code **)(*local_f8 + 0x28))(local_f8,plVar25);
      if ((uVar24 & 1) == 0) {
        if (((*PTR_DAT_047d4c98 & 1) == 0) &&
           (iVar20 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar20 != 0)) {
          FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4c98);
        }
        lVar32 = *(long *)PTR_DAT_047d4ca0;
        *(long *)PTR_DAT_047d4ca8 = lVar32;
        puVar12 = PTR_DAT_047d8f00;
        puVar23 = PTR_DAT_047d8ef8;
        plVar27 = *(long **)(lVar32 + 0x1c8);
        for (plVar26 = *(long **)(lVar32 + 0x1c0); plVar26 != plVar27; plVar26 = plVar26 + 1) {
          lVar32 = *plVar26;
          plVar28 = (long *)(*(code *)**(undefined8 **)(lVar32 + 0x28))
                                      ((undefined8 *)(lVar32 + 0x28));
          if (((*puVar23 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar23), iVar20 != 0)) {
            uVar29 = FUN_01b3fb0c();
            *(undefined8 *)puVar12 = uVar29;
            __cxa_guard_release(puVar23);
          }
          for (; plVar28 != (long *)0x0; plVar28 = (long *)*plVar28) {
            if (plVar28 == (long *)puVar12) goto LAB_01edbd94;
          }
        }
        lVar32 = 0;
LAB_01edbd94:
        local_108 = (long *)((ulong)local_108._4_4_ << 0x20);
        local_6c[0] = 0;
        uVar24 = FUN_01edcba8(lVar32,&local_108,local_6c,param_1);
        if ((uVar24 & 1) != 0) {
          do {
            lVar34 = *plVar1;
            cVar16 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar9) {
              *(int *)plVar1 = (int)lVar34 + 1;
              cVar16 = ExclusiveMonitorsStatus();
            }
          } while (cVar16 != '\0');
          local_78 = plVar25;
          if ((int)lVar34 == -1) goto LAB_01edc1b0;
          uVar24 = FUN_0152ee44(lVar32,&local_78,(ulong)local_108 & 0xffffffff,local_6c[0]);
          if (local_78 != (long *)0x0) {
            plVar26 = local_78 + 5;
            do {
              lVar32 = *plVar26;
              iVar20 = (int)lVar32 + -1;
              cVar16 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar9) {
                *(int *)plVar26 = iVar20;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
            if (iVar20 == 0) {
              (**(code **)(*local_78 + 0x10))();
            }
            else if ((int)lVar32 == 0) goto LAB_01edbf80;
          }
          if ((uVar24 & 1) != 0) {
            DAT_04839f80._2_1_ = SUB81(local_108,0);
            iVar20 = 2;
            DAT_04839f80._3_1_ = (undefined1)local_6c[0];
            goto LAB_01edbc28;
          }
        }
        iVar20 = 3;
      }
      else {
        cVar16 = FUN_014c0588(local_f8);
        DAT_04839f80._1_1_ = cVar16 + -1;
        iVar20 = 1;
      }
LAB_01edbc28:
      if (local_f8 != (long *)0x0) {
        plVar26 = local_f8 + 5;
        do {
          lVar32 = *plVar26;
          iVar10 = (int)lVar32 + -1;
          cVar16 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar9) {
            *(int *)plVar26 = iVar10;
            cVar16 = ExclusiveMonitorsStatus();
          }
        } while (cVar16 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*local_f8 + 0x10))();
        }
        else if ((int)lVar32 == 0) goto LAB_01edbf80;
      }
      if (iVar20 != 3) {
        uVar24 = FUN_00cf4c90(plVar25,2);
        if ((uVar24 & 1) == 0) {
          FUN_01edcd00(&local_f8);
          do {
            lVar32 = *plVar1;
            cVar16 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar9) {
              *(int *)plVar1 = (int)lVar32 + 1;
              cVar16 = ExclusiveMonitorsStatus();
            }
          } while (cVar16 != '\0');
          local_78 = plVar25;
          if ((int)lVar32 == -1) {
LAB_01edc1b0:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
          bVar17 = FUN_01edcdd0(local_f8,&local_78,0);
          DAT_04839f80._0_1_ = ~bVar17 & 1;
          if (local_78 != (long *)0x0) {
            plVar26 = local_78 + 5;
            do {
              lVar32 = *plVar26;
              iVar10 = (int)lVar32 + -1;
              cVar16 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar9) {
                *(int *)plVar26 = iVar10;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
            if (iVar10 == 0) {
              (**(code **)(*local_78 + 0x10))();
            }
            else if ((int)lVar32 == 0) goto LAB_01edbf80;
          }
          if (local_f8 != (long *)0x0) {
            plVar26 = local_f8 + 5;
            do {
              lVar32 = *plVar26;
              iVar10 = (int)lVar32 + -1;
              cVar16 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar9) {
                *(int *)plVar26 = iVar10;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
            if (iVar10 == 0) {
              (**(code **)(*local_f8 + 0x10))();
            }
            else if ((int)lVar32 == 0) goto LAB_01edbf80;
          }
          FUN_01edcd00(&local_f8);
          do {
            lVar32 = *plVar1;
            cVar16 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar9) {
              *(int *)plVar1 = (int)lVar32 + 1;
              cVar16 = ExclusiveMonitorsStatus();
            }
          } while (cVar16 != '\0');
          local_108 = plVar25;
          if ((int)lVar32 == -1) goto LAB_01edc1b0;
          FUN_01edce74(local_f8,&local_108,0,1);
          if (local_108 != (long *)0x0) {
            plVar26 = local_108 + 5;
            do {
              lVar32 = *plVar26;
              iVar10 = (int)lVar32 + -1;
              cVar16 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar9) {
                *(int *)plVar26 = iVar10;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
            if (iVar10 == 0) {
              (**(code **)(*local_108 + 0x10))();
            }
            else if ((int)lVar32 == 0) goto LAB_01edbf80;
          }
          if (local_f8 != (long *)0x0) {
            plVar26 = local_f8 + 5;
            do {
              lVar32 = *plVar26;
              iVar10 = (int)lVar32 + -1;
              cVar16 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar9) {
                *(int *)plVar26 = iVar10;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
            if (iVar10 == 0) {
              (**(code **)(*local_f8 + 0x10))();
            }
            else if ((int)lVar32 == 0) goto LAB_01edbf80;
          }
        }
        else {
          DAT_04839f80._0_1_ = 0;
        }
      }
      if ((char)local_d8 != '\0') {
        local_d8 = local_d8 & 0xffffffffffffff00;
      }
    }
    do {
      lVar32 = *plVar1;
      iVar10 = (int)lVar32 + -1;
      cVar16 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = iVar10;
        cVar16 = ExclusiveMonitorsStatus();
      }
    } while (cVar16 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      return iVar20;
    }
    if ((int)lVar32 != 0) {
      return iVar20;
    }
LAB_01edbf80:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  case 2:
    FUN_01edd380(param_2);
    return 0;
  case 3:
    if (DAT_04839e80 == (code *)0x0) {
      return 0;
    }
    uVar21 = *(undefined4 *)(param_2 + 0x18);
    puVar23 = &DAT_04839ea0;
    pcVar33 = DAT_04839e80;
    break;
  case 4:
    FUN_01edd4f0(param_2);
    return 0;
  case 5:
    if (DAT_04839e00 == (code *)0x0) {
      return 0;
    }
    uVar21 = *(undefined4 *)(param_2 + 0x18);
    puVar23 = &DAT_04839e20;
    pcVar33 = DAT_04839e00;
    break;
  default:
    return 3;
  }
  local_d8 = CONCAT44(local_d8._4_4_,uVar21);
  (*pcVar33)(puVar23,&local_d8);
  return 0;
code_r0x01edb114:
  puVar22 = (undefined8 *)*puVar22;
  if (puVar22 == (undefined8 *)0x0) goto LAB_01edb11c;
  goto LAB_01edb10c;
}


