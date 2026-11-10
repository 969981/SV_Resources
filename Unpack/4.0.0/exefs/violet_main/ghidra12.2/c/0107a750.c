/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0107a750; name: FUN_0107a750
 */


void FUN_0107a750(long param_1,uint param_2,undefined2 param_3,undefined4 param_4,long *param_5,
                 undefined2 *param_6)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined2 uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  int *piVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  uint local_88;
  uint local_84;
  ushort local_80;
  undefined1 local_70 [16];
  
  uVar10 = (**(code **)(*param_5 + 0x2f8))(param_5);
  puVar2 = PTR_DAT_047d7940;
  if (((*PTR_DAT_047d7940 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  puVar4 = PTR_DAT_047d7950;
  puVar3 = PTR_DAT_047d7948;
  uVar13 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar13;
  piVar14 = (int *)FUN_00cf60cc(uVar13,param_2);
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 9) ||
     (uVar15 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[4], uVar15 == 0)) {
    uVar20 = 0;
  }
  else {
    uVar20 = (uint)*(byte *)((long)piVar14 + uVar15);
  }
  if (((*puVar2 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  uVar13 = *(undefined8 *)puVar3;
  *(undefined8 *)puVar4 = uVar13;
  piVar14 = (int *)FUN_00cf60cc(uVar13,param_2);
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 0x27) ||
     (uVar15 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[0x13], uVar15 == 0)) {
    local_84 = 0;
  }
  else {
    local_84 = (uint)*(byte *)((long)piVar14 + uVar15);
  }
  if (((*puVar2 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  uVar13 = *(undefined8 *)puVar3;
  *(undefined8 *)puVar4 = uVar13;
  piVar14 = (int *)FUN_00cf60cc(uVar13,param_2);
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 0x2d) ||
     (uVar15 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[0x16], uVar15 == 0)) {
    local_88 = 0;
  }
  else {
    local_88 = (uint)(*(char *)((long)piVar14 + uVar15) != '\0');
  }
  if (((*puVar2 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  uVar13 = *(undefined8 *)puVar3;
  *(undefined8 *)puVar4 = uVar13;
  piVar14 = (int *)FUN_00cf60cc(uVar13,param_2);
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 0xd) ||
     (uVar15 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[6], uVar15 == 0)) {
    uVar25 = 0;
  }
  else {
    uVar25 = (uint)*(byte *)((long)piVar14 + uVar15);
  }
  if (((*puVar2 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  uVar13 = *(undefined8 *)puVar3;
  *(undefined8 *)puVar4 = uVar13;
  piVar14 = (int *)FUN_00cf60cc(uVar13,param_2);
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 0xf) ||
     (uVar15 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[7], uVar15 == 0)) {
    local_80 = 0;
  }
  else {
    local_80 = (ushort)*(byte *)((long)piVar14 + uVar15);
  }
  lVar16 = *(long *)(param_1 + 0x10);
  lVar18 = *(long *)(lVar16 + 0x38);
  uVar17 = *(uint *)(lVar18 + 0xc08);
  if (uVar17 < 0x60) {
    do {
      lVar22 = *(long *)(lVar18 + (ulong)uVar17 * 0x20 + 8);
      if (*(short *)(lVar22 + 8) == 0) {
        if (uVar17 < 0x5f) {
          *(undefined2 *)(lVar22 + 8) = 1;
          *(int *)(lVar18 + 0xc08) = *(int *)(lVar18 + 0xc08) + 1;
        }
        break;
      }
      uVar17 = uVar17 + 1;
      *(uint *)(lVar18 + 0xc08) = uVar17;
    } while (uVar17 != 0x60);
  }
  lVar18 = *(long *)(lVar16 + 0x58);
  uVar17 = *(uint *)(lVar18 + 0x408);
  if (uVar17 < 0x1f) {
    *(uint *)(lVar18 + 0x408) = uVar17 + 1;
    lVar18 = *(long *)(lVar16 + 0x58);
    uVar17 = *(uint *)(lVar18 + 0x408);
  }
  *(undefined8 *)(lVar16 + 0x78) = *(undefined8 *)(lVar18 + (ulong)uVar17 * 0x20 + 8);
  lVar18 = *(long *)(param_1 + 0x10);
  uVar11 = (**(code **)(*param_5 + 0x98))(param_5);
  lVar16 = *(long *)(lVar18 + 0x38);
  uVar17 = *(uint *)(lVar16 + 0xc08);
  uVar15 = (ulong)uVar17;
  if (uVar17 < 0x61) {
    uVar17 = 0x60;
  }
  plVar21 = (long *)(lVar16 + uVar15 * 0x20 + 8);
  do {
    uVar24 = uVar15;
    if (uVar17 == uVar24) goto LAB_0107a9fc;
    lVar22 = *plVar21;
    if (*(short *)(lVar22 + 8) == 0) goto LAB_0107a9cc;
    plVar21 = plVar21 + 4;
    uVar15 = uVar24 + 1;
  } while (*(short *)(lVar22 + 8) != 2);
  if ((int)(uVar24 + 1) - 1U < 0x60) {
LAB_0107a9cc:
    lVar16 = *(long *)(lVar16 + (uVar24 & 0xffffffff) * 0x20 + 8);
    if (lVar16 != 0) {
      *(undefined2 *)(lVar16 + 8) = 2;
      *(undefined4 *)(lVar16 + 0xc) = uVar11;
      *(undefined1 *)(lVar16 + 10) = 4;
      *(undefined8 *)(lVar16 + 0x10) = 0;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      *(long *)(*(long *)(lVar18 + 0x78) + 0x18) = lVar16;
    }
  }
LAB_0107a9fc:
  lVar16 = *(long *)(param_1 + 0x10);
  lVar18 = *(long *)(lVar16 + 0x38);
  uVar19 = *(uint *)(lVar18 + 0xc08);
  uVar15 = (ulong)uVar19;
  uVar17 = uVar19;
  if (uVar19 < 0x61) {
    uVar17 = 0x60;
  }
  uVar24 = uVar15 << 5 | 8;
  lVar22 = -1;
  do {
    lVar23 = lVar22;
    if ((uVar15 - uVar17) + lVar23 == -1) goto LAB_0107aaa4;
    sVar1 = *(short *)(*(long *)(lVar18 + uVar24) + 8);
    if (sVar1 == 0) goto LAB_0107aa64;
    uVar24 = uVar24 + 0x20;
    lVar22 = lVar23 + 1;
  } while (sVar1 != 0x12);
  if (uVar19 + (int)(lVar23 + 1) < 0x60) {
LAB_0107aa64:
    lVar22 = *(long *)(lVar18 + (ulong)(uVar19 + (int)lVar23 + 1) * 0x20 + 8);
    if (lVar22 != 0) {
      *(undefined2 *)(lVar22 + 8) = 0x12;
      *(uint *)(lVar22 + 0xc) = param_2 & 0xffff;
      *(undefined1 *)(lVar22 + 10) = 4;
      *(undefined8 *)(lVar22 + 0x10) = 0;
      *(undefined8 *)(lVar22 + 0x18) = 0;
      *(long *)(*(long *)(lVar16 + 0x78) + 0x98) = lVar22;
      lVar16 = *(long *)(param_1 + 0x10);
      lVar18 = *(long *)(lVar16 + 0x38);
      uVar15 = (ulong)*(uint *)(lVar18 + 0xc08);
    }
  }
LAB_0107aaa4:
  uVar19 = (uint)uVar15;
  uVar17 = uVar19;
  if (uVar19 < 0x61) {
    uVar17 = 0x60;
  }
  uVar24 = uVar15 << 5 | 8;
  lVar22 = 0;
  do {
    lVar23 = lVar22;
    if ((uVar15 - uVar17) + lVar23 == 0) goto LAB_0107ab34;
    sVar1 = *(short *)(*(long *)(lVar18 + uVar24) + 8);
    if (sVar1 == 0) goto LAB_0107aaf8;
    uVar24 = uVar24 + 0x20;
    lVar22 = lVar23 + 1;
  } while (sVar1 != 0x16);
  if ((uVar19 + (int)(lVar23 + 1)) - 1 < 0x60) {
LAB_0107aaf8:
    lVar22 = *(long *)(lVar18 + (ulong)(uVar19 + (int)lVar23) * 0x20 + 8);
    if (lVar22 != 0) {
      *(undefined2 *)(lVar22 + 8) = 0x16;
      *(uint *)(lVar22 + 0xc) = uVar20;
      *(undefined1 *)(lVar22 + 10) = 1;
      *(undefined8 *)(lVar22 + 0x10) = 0;
      *(undefined8 *)(lVar22 + 0x18) = 0;
      *(long *)(*(long *)(lVar16 + 0x78) + 0xb8) = lVar22;
      lVar16 = *(long *)(param_1 + 0x10);
      lVar18 = *(long *)(lVar16 + 0x38);
      uVar15 = (ulong)*(uint *)(lVar18 + 0xc08);
    }
  }
LAB_0107ab34:
  uVar17 = (uint)uVar15;
  uVar20 = uVar17;
  if (uVar17 < 0x61) {
    uVar20 = 0x60;
  }
  uVar24 = uVar15 << 5 | 8;
  lVar22 = 0;
  do {
    lVar23 = lVar22;
    if ((uVar15 - uVar20) + lVar23 == 0) goto LAB_0107abc4;
    sVar1 = *(short *)(*(long *)(lVar18 + uVar24) + 8);
    if (sVar1 == 0) goto LAB_0107ab8c;
    uVar24 = uVar24 + 0x20;
    lVar22 = lVar23 + 1;
  } while (sVar1 != 0x1d);
  if ((uVar17 + (int)(lVar23 + 1)) - 1 < 0x60) {
LAB_0107ab8c:
    lVar22 = *(long *)(lVar18 + (ulong)(uVar17 + (int)lVar23) * 0x20 + 8);
    if (lVar22 != 0) {
      *(undefined2 *)(lVar22 + 8) = 0x1d;
      *(uint *)(lVar22 + 0xc) = uVar10 & 0xffff;
      *(undefined1 *)(lVar22 + 10) = 0;
      *(undefined8 *)(lVar22 + 0x10) = 0;
      *(undefined8 *)(lVar22 + 0x18) = 0;
      *(long *)(*(long *)(lVar16 + 0x78) + 0xf0) = lVar22;
      lVar16 = *(long *)(param_1 + 0x10);
      lVar18 = *(long *)(lVar16 + 0x38);
      uVar15 = (ulong)*(uint *)(lVar18 + 0xc08);
    }
  }
LAB_0107abc4:
  uVar20 = (uint)uVar15;
  uVar10 = uVar20;
  if (uVar20 < 0x61) {
    uVar10 = 0x60;
  }
  uVar24 = uVar15 << 5 | 8;
  lVar22 = 0;
  do {
    lVar23 = lVar22;
    if ((uVar15 - uVar10) + lVar23 == 0) goto LAB_0107ac50;
    sVar1 = *(short *)(*(long *)(lVar18 + uVar24) + 8);
    if (sVar1 == 0) goto LAB_0107ac18;
    uVar24 = uVar24 + 0x20;
    lVar22 = lVar23 + 1;
  } while (sVar1 != 0x1b);
  if ((uVar20 + (int)(lVar23 + 1)) - 1 < 0x60) {
LAB_0107ac18:
    lVar22 = *(long *)(lVar18 + (ulong)(uVar20 + (int)lVar23) * 0x20 + 8);
    if (lVar22 != 0) {
      *(undefined2 *)(lVar22 + 8) = 0x1b;
      *(uint *)(lVar22 + 0xc) = uVar25;
      *(undefined1 *)(lVar22 + 10) = 0;
      *(undefined8 *)(lVar22 + 0x10) = 0;
      *(undefined8 *)(lVar22 + 0x18) = 0;
      *(long *)(*(long *)(lVar16 + 0x78) + 0xe0) = lVar22;
      lVar16 = *(long *)(param_1 + 0x10);
      lVar18 = *(long *)(lVar16 + 0x38);
      uVar15 = (ulong)*(uint *)(lVar18 + 0xc08);
    }
  }
LAB_0107ac50:
  uVar20 = (uint)uVar15;
  uVar10 = uVar20;
  if (uVar20 < 0x61) {
    uVar10 = 0x60;
  }
  uVar24 = uVar15 << 5 | 8;
  lVar22 = 0;
  do {
    lVar23 = lVar22;
    if ((uVar15 - uVar10) + lVar23 == 0) goto LAB_0107ace0;
    sVar1 = *(short *)(*(long *)(lVar18 + uVar24) + 8);
    if (sVar1 == 0) goto LAB_0107aca4;
    uVar24 = uVar24 + 0x20;
    lVar22 = lVar23 + 1;
  } while (sVar1 != 99);
  if ((uVar20 + (int)(lVar23 + 1)) - 1 < 0x60) {
LAB_0107aca4:
    lVar22 = *(long *)(lVar18 + (ulong)(uVar20 + (int)lVar23) * 0x20 + 8);
    if (lVar22 != 0) {
      *(undefined2 *)(lVar22 + 8) = 99;
      *(undefined8 *)(lVar22 + 0x10) = 0;
      *(undefined8 *)(lVar22 + 0x18) = 0;
      *(uint *)(lVar22 + 0xc) = local_88;
      *(undefined1 *)(lVar22 + 10) = 0;
      *(long *)(*(long *)(lVar16 + 0x78) + 800) = lVar22;
      lVar16 = *(long *)(param_1 + 0x10);
      lVar18 = *(long *)(lVar16 + 0x38);
      uVar15 = (ulong)*(uint *)(lVar18 + 0xc08);
    }
  }
LAB_0107ace0:
  uVar20 = (uint)uVar15;
  uVar10 = uVar20;
  if (uVar20 < 0x61) {
    uVar10 = 0x60;
  }
  uVar24 = uVar15 << 5 | 8;
  lVar22 = 0;
  do {
    lVar23 = lVar22;
    if ((uVar15 - uVar10) + lVar23 == 0) goto LAB_0107ad70;
    sVar1 = *(short *)(*(long *)(lVar18 + uVar24) + 8);
    if (sVar1 == 0) goto LAB_0107ad34;
    uVar24 = uVar24 + 0x20;
    lVar22 = lVar23 + 1;
  } while (sVar1 != 0x1c);
  if ((uVar20 + (int)(lVar23 + 1)) - 1 < 0x60) {
LAB_0107ad34:
    lVar22 = *(long *)(lVar18 + (ulong)(uVar20 + (int)lVar23) * 0x20 + 8);
    if (lVar22 != 0) {
      *(undefined2 *)(lVar22 + 8) = 0x1c;
      *(undefined8 *)(lVar22 + 0x10) = 0;
      *(undefined8 *)(lVar22 + 0x18) = 0;
      *(uint *)(lVar22 + 0xc) = local_84;
      *(undefined1 *)(lVar22 + 10) = 0;
      *(long *)(*(long *)(lVar16 + 0x78) + 0xe8) = lVar22;
      lVar16 = *(long *)(param_1 + 0x10);
      lVar18 = *(long *)(lVar16 + 0x38);
      uVar15 = (ulong)*(uint *)(lVar18 + 0xc08);
    }
  }
LAB_0107ad70:
  uVar20 = (uint)uVar15;
  uVar10 = uVar20;
  if (uVar20 < 0x61) {
    uVar10 = 0x60;
  }
  uVar24 = uVar15 << 5 | 8;
  lVar22 = 0;
  do {
    lVar23 = lVar22;
    if ((uVar15 - uVar10) + lVar23 == 0) goto LAB_0107ae00;
    sVar1 = *(short *)(*(long *)(lVar18 + uVar24) + 8);
    if (sVar1 == 0) goto LAB_0107adc4;
    uVar24 = uVar24 + 0x20;
    lVar22 = lVar23 + 1;
  } while (sVar1 != 0x6d);
  if ((uVar20 + (int)(lVar23 + 1)) - 1 < 0x60) {
LAB_0107adc4:
    lVar22 = *(long *)(lVar18 + (ulong)(uVar20 + (int)lVar23) * 0x20 + 8);
    if (lVar22 != 0) {
      *(undefined2 *)(lVar22 + 8) = 0x6d;
      *(undefined1 *)(lVar22 + 10) = 0;
      *(undefined8 *)(lVar22 + 0xc) = 0;
      *(undefined8 *)(lVar22 + 0x14) = 0;
      *(undefined4 *)(lVar22 + 0x1c) = 0;
      *(long *)(*(long *)(lVar16 + 0x78) + 0x370) = lVar22;
      lVar16 = *(long *)(param_1 + 0x10);
      lVar18 = *(long *)(lVar16 + 0x38);
      uVar15 = (ulong)*(uint *)(lVar18 + 0xc08);
    }
  }
LAB_0107ae00:
  uVar20 = (uint)uVar15;
  uVar10 = uVar20;
  if (uVar20 < 0x61) {
    uVar10 = 0x60;
  }
  uVar24 = uVar15 << 5 | 8;
  lVar22 = 0;
  do {
    lVar23 = lVar22;
    if ((uVar15 - uVar10) + lVar23 == 0) goto LAB_0107ae94;
    sVar1 = *(short *)(*(long *)(lVar18 + uVar24) + 8);
    if (sVar1 == 0) goto LAB_0107ae54;
    uVar24 = uVar24 + 0x20;
    lVar22 = lVar23 + 1;
  } while (sVar1 != 0x7a);
  if ((uVar20 + (int)(lVar23 + 1)) - 1 < 0x60) {
LAB_0107ae54:
    lVar22 = *(long *)(lVar18 + (ulong)(uVar20 + (int)lVar23) * 0x20 + 8);
    if (lVar22 != 0) {
      *(undefined2 *)(lVar22 + 8) = 0x7a;
      *(undefined8 *)(lVar22 + 0xc) = 0;
      *(undefined8 *)(lVar22 + 0x14) = 0;
      *(undefined4 *)(lVar22 + 0x1c) = 0;
      *(undefined1 *)(lVar22 + 10) = 1;
      *(long *)(*(long *)(lVar16 + 0x78) + 0x3d8) = lVar22;
      lVar16 = *(long *)(param_1 + 0x10);
      lVar18 = *(long *)(lVar16 + 0x38);
      uVar15 = (ulong)*(uint *)(lVar18 + 0xc08);
    }
  }
LAB_0107ae94:
  uVar10 = (uint)uVar15;
  if (uVar10 < 0x61) {
    uVar10 = 0x60;
  }
  plVar21 = (long *)(lVar18 + uVar15 * 0x20 + 8);
  do {
    uVar24 = uVar15;
    if (uVar10 == uVar24) goto LAB_0107af10;
    lVar22 = *plVar21;
    if (*(short *)(lVar22 + 8) == 0) goto LAB_0107aedc;
    plVar21 = plVar21 + 4;
    uVar15 = uVar24 + 1;
  } while (*(short *)(lVar22 + 8) != 0x52);
  if ((int)(uVar24 + 1) - 1U < 0x60) {
LAB_0107aedc:
    lVar18 = *(long *)(lVar18 + (uVar24 & 0xffffffff) * 0x20 + 8);
    if (lVar18 != 0) {
      *(undefined2 *)(lVar18 + 8) = 0x52;
      *(undefined8 *)(lVar18 + 0xc) = 0;
      *(undefined8 *)(lVar18 + 0x14) = 0;
      *(undefined4 *)(lVar18 + 0x1c) = 0;
      *(undefined1 *)(lVar18 + 10) = 1;
      *(long *)(*(long *)(lVar16 + 0x78) + 0x298) = lVar18;
    }
  }
LAB_0107af10:
  uVar15 = (**(code **)(*param_5 + 0x220))(param_5,0x25);
  if ((uVar15 & 1) != 0) {
    local_70 = (**(code **)(*param_5 + 0x240))(param_5,0x25);
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    uVar9 = FUN_0107ffe0(local_70);
    FUN_016fa4dc(uVar13,0x16,uVar9);
  }
  FUN_0107b310(*(undefined8 *)(param_1 + 0x10),0x2a,8,1);
  lVar16 = *(long *)(param_1 + 0x10);
  lVar18 = *(long *)(*(long *)(lVar16 + 0x78) + 0xb8);
  if (lVar18 != 0) {
    *(undefined1 *)(lVar18 + 10) = 1;
    lVar16 = *(long *)(param_1 + 0x10);
  }
  FUN_0107b310(lVar16,0x2b,8,1);
  lVar18 = *(long *)(param_1 + 0x10);
  lVar16 = *(long *)(lVar18 + 0x78);
  if (*(long *)(lVar16 + 0xb8) == 0) {
    local_84._0_1_ = 0;
  }
  else {
    local_84._0_1_ = (undefined1)*(undefined4 *)(*(long *)(lVar16 + 0xb8) + 0xc);
  }
  if (*(long *)(lVar16 + 0xf0) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (undefined2)*(undefined4 *)(*(long *)(lVar16 + 0xf0) + 0xc);
  }
  if (*(long *)(lVar16 + 0xe0) == 0) {
    uVar26 = 0;
  }
  else {
    uVar26 = (undefined1)*(undefined4 *)(*(long *)(lVar16 + 0xe0) + 0xc);
  }
  if (*(long *)(lVar16 + 0xe8) == 0) {
    uVar27 = 0;
  }
  else {
    uVar27 = (undefined1)*(undefined4 *)(*(long *)(lVar16 + 0xe8) + 0xc);
  }
  if (*(long *)(lVar16 + 800) == 0) {
    bVar5 = false;
  }
  else {
    bVar5 = *(int *)(*(long *)(lVar16 + 800) + 0xc) != 0;
  }
  if (*(long *)(lVar16 + 0x370) == 0) {
    bVar6 = false;
  }
  else {
    bVar6 = *(int *)(*(long *)(lVar16 + 0x370) + 0xc) != 0;
  }
  if (*(long *)(lVar16 + 0x3d8) == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(int *)(*(long *)(lVar16 + 0x3d8) + 0xc) != 0;
  }
  if (*(long *)(lVar16 + 0x298) == 0) {
    bVar8 = true;
  }
  else {
    bVar8 = *(int *)(*(long *)(lVar16 + 0x298) + 0xc) == 0;
  }
  lVar16 = *(long *)(lVar18 + 0x58);
  if (*(uint *)(lVar16 + 0x408) == 0) {
    uVar15 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar16 + (ulong)*(uint *)(lVar16 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar16 + 0x408) = *(int *)(lVar16 + 0x408) + -1;
    lVar16 = *(long *)(lVar18 + 0x58);
    uVar15 = (ulong)*(uint *)(lVar16 + 0x408);
  }
  *(undefined8 *)(lVar18 + 0x78) = *(undefined8 *)(lVar16 + uVar15 * 0x20 + 8);
  lVar16 = *(long *)(lVar18 + 0x38);
  uVar10 = *(uint *)(lVar16 + 0xc08);
  if (uVar10 != 0) {
    if ((uVar10 & 0xffff) < 0x60) {
      uVar15 = (ulong)uVar10 & 0xffff;
      plVar21 = (long *)(lVar16 + uVar15 * 0x20 + 8);
      do {
        uVar15 = uVar15 + 1;
        if (*(short *)(*plVar21 + 8) == 0) break;
        *(undefined2 *)(*plVar21 + 8) = 0;
        plVar21 = plVar21 + 4;
      } while (((uint)uVar15 & 0xffff) != 0x60);
      uVar10 = *(uint *)(lVar16 + 0xc08);
    }
    *(uint *)(lVar16 + 0xc08) = uVar10 - 1;
    *(undefined2 *)(*(long *)(lVar16 + (ulong)(uVar10 - 1) * 0x20 + 8) + 8) = 0;
    uVar15 = (ulong)*(uint *)(lVar16 + 0xc08);
    do {
      if (uVar15 == 0) goto LAB_0107b0cc;
      uVar15 = uVar15 - 1;
      *(int *)(lVar16 + 0xc08) = (int)uVar15;
    } while (*(short *)(*(long *)(lVar16 + (uVar15 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar16 + 0xc08) = (int)uVar15 + 1;
  }
LAB_0107b0cc:
  *param_6 = (short)param_2;
  param_6[1] = param_3;
  *(undefined1 *)(param_6 + 4) = (undefined1)local_84;
  *(undefined4 *)(param_6 + 6) = param_4;
  *(undefined4 *)(param_6 + 8) = 0;
  param_6[3] = uVar9;
  *(undefined1 *)((long)param_6 + 9) = uVar26;
  *(bool *)((long)param_6 + 0xb) = bVar5;
  *(undefined1 *)(param_6 + 5) = uVar27;
  *(bool *)(param_6 + 9) = bVar6;
  param_6[2] = local_80;
  *(bool *)((long)param_6 + 0x13) = bVar7;
  if (!bVar8) {
    *(undefined1 *)(param_6 + 4) = 0x12;
  }
  return;
}


