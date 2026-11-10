/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ad40f4; name: FUN_01ad40f4
 */


void FUN_01ad40f4(long param_1,long *param_2,uint param_3,undefined1 *param_4,uint param_5)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined1 uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined1 uVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  undefined4 uVar23;
  uint local_68;
  undefined4 local_64;
  
  if (((*PTR_DAT_047d7940 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  uVar7 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar7;
  piVar8 = (int *)FUN_00cf60cc(uVar7,param_3);
  if ((0x16 < *(ushort *)((long)piVar8 - (long)*piVar8)) &&
     (uVar10 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0xb], uVar10 != 0)) {
    bVar1 = *(byte *)((long)piVar8 + uVar10);
    uVar15 = (uint)bVar1;
    if (1 < bVar1) {
      uVar5 = FUN_01ad4f2c(*(undefined8 *)(*(long *)(param_1 + 0x18) + 8),bVar1,
                           *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10));
      uVar5 = uVar5 & 0xff;
      goto LAB_01ad4188;
    }
  }
  uVar5 = 1;
  uVar15 = 1;
LAB_01ad4188:
  param_4[1] = 0;
  param_4[4] = 7;
  plVar22 = (long *)(param_1 + 0x10);
  lVar11 = *plVar22;
  lVar16 = *(long *)(lVar11 + 0x38);
  uVar13 = *(uint *)(lVar16 + 0xc08);
  if (uVar13 < 0x60) {
    do {
      lVar21 = *(long *)(lVar16 + (ulong)uVar13 * 0x20 + 8);
      if (*(short *)(lVar21 + 8) == 0) {
        if (uVar13 < 0x5f) {
          *(undefined2 *)(lVar21 + 8) = 1;
          *(int *)(lVar16 + 0xc08) = *(int *)(lVar16 + 0xc08) + 1;
        }
        break;
      }
      uVar13 = uVar13 + 1;
      *(uint *)(lVar16 + 0xc08) = uVar13;
    } while (uVar13 != 0x60);
  }
  lVar16 = *(long *)(lVar11 + 0x58);
  uVar13 = *(uint *)(lVar16 + 0x408);
  if (uVar13 < 0x1f) {
    *(uint *)(lVar16 + 0x408) = uVar13 + 1;
    lVar16 = *(long *)(lVar11 + 0x58);
    uVar13 = *(uint *)(lVar16 + 0x408);
  }
  *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)(lVar16 + (ulong)uVar13 * 0x20 + 8);
  lVar16 = *plVar22;
  uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar11 = *(long *)(lVar16 + 0x38);
  uVar13 = *(uint *)(lVar11 + 0xc08);
  uVar10 = (ulong)uVar13;
  if (uVar13 < 0x61) {
    uVar13 = 0x60;
  }
  plVar18 = (long *)(lVar11 + uVar10 * 0x20 + 8);
  do {
    uVar19 = uVar10;
    if (uVar13 == uVar19) goto LAB_01ad42b0;
    lVar21 = *plVar18;
    if (*(short *)(lVar21 + 8) == 0) goto LAB_01ad4280;
    plVar18 = plVar18 + 4;
    uVar10 = uVar19 + 1;
  } while (*(short *)(lVar21 + 8) != 3);
  if ((int)(uVar19 + 1) - 1U < 0x60) {
LAB_01ad4280:
    lVar11 = *(long *)(lVar11 + (uVar19 & 0xffffffff) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 3;
      *(undefined4 *)(lVar11 + 0xc) = uVar3;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar16 + 0x78) + 0x20) = lVar11;
    }
  }
LAB_01ad42b0:
  lVar11 = *plVar22;
  lVar16 = *(long *)(lVar11 + 0x38);
  uVar14 = *(uint *)(lVar16 + 0xc08);
  uVar10 = (ulong)uVar14;
  uVar13 = uVar14;
  if (uVar14 < 0x61) {
    uVar13 = 0x60;
  }
  uVar19 = uVar10 << 5 | 8;
  lVar21 = -1;
  do {
    lVar20 = lVar21;
    if ((uVar10 - uVar13) + lVar20 == -1) goto LAB_01ad4350;
    sVar2 = *(short *)(*(long *)(lVar16 + uVar19) + 8);
    if (sVar2 == 0) goto LAB_01ad4310;
    uVar19 = uVar19 + 0x20;
    lVar21 = lVar20 + 1;
  } while (sVar2 != 0x2c);
  if (uVar14 + (int)(lVar20 + 1) < 0x60) {
LAB_01ad4310:
    lVar21 = *(long *)(lVar16 + (ulong)(uVar14 + (int)lVar20 + 1) * 0x20 + 8);
    if (lVar21 != 0) {
      *(undefined2 *)(lVar21 + 8) = 0x2c;
      *(uint *)(lVar21 + 0xc) = uVar15;
      *(undefined1 *)(lVar21 + 10) = 4;
      *(undefined8 *)(lVar21 + 0x10) = 0;
      *(undefined8 *)(lVar21 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x168) = lVar21;
      lVar11 = *plVar22;
      lVar16 = *(long *)(lVar11 + 0x38);
      uVar10 = (ulong)*(uint *)(lVar16 + 0xc08);
    }
  }
LAB_01ad4350:
  uVar14 = (uint)uVar10;
  uVar13 = uVar14;
  if (uVar14 < 0x61) {
    uVar13 = 0x60;
  }
  uVar19 = uVar10 << 5 | 8;
  lVar21 = 0;
  do {
    lVar20 = lVar21;
    if ((uVar10 - uVar13) + lVar20 == 0) goto LAB_01ad43e4;
    sVar2 = *(short *)(*(long *)(lVar16 + uVar19) + 8);
    if (sVar2 == 0) goto LAB_01ad43a8;
    uVar19 = uVar19 + 0x20;
    lVar21 = lVar20 + 1;
  } while (sVar2 != 0x12);
  if ((uVar14 + (int)(lVar20 + 1)) - 1 < 0x60) {
LAB_01ad43a8:
    lVar21 = *(long *)(lVar16 + (ulong)(uVar14 + (int)lVar20) * 0x20 + 8);
    if (lVar21 != 0) {
      *(undefined2 *)(lVar21 + 8) = 0x12;
      *(uint *)(lVar21 + 0xc) = param_3 & 0xffff;
      *(undefined1 *)(lVar21 + 10) = 4;
      *(undefined8 *)(lVar21 + 0x10) = 0;
      *(undefined8 *)(lVar21 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x98) = lVar21;
      lVar11 = *plVar22;
      lVar16 = *(long *)(lVar11 + 0x38);
      uVar10 = (ulong)*(uint *)(lVar16 + 0xc08);
    }
  }
LAB_01ad43e4:
  uVar14 = (uint)uVar10;
  uVar13 = uVar14;
  if (uVar14 < 0x61) {
    uVar13 = 0x60;
  }
  uVar19 = uVar10 << 5 | 8;
  lVar21 = 0;
  do {
    lVar20 = lVar21;
    if ((uVar10 - uVar13) + lVar20 == 0) goto LAB_01ad4478;
    sVar2 = *(short *)(*(long *)(lVar16 + uVar19) + 8);
    if (sVar2 == 0) goto LAB_01ad443c;
    uVar19 = uVar19 + 0x20;
    lVar21 = lVar20 + 1;
  } while (sVar2 != 0x54);
  if ((uVar14 + (int)(lVar20 + 1)) - 1 < 0x60) {
LAB_01ad443c:
    lVar21 = *(long *)(lVar16 + (ulong)(uVar14 + (int)lVar20) * 0x20 + 8);
    if (lVar21 != 0) {
      *(undefined2 *)(lVar21 + 8) = 0x54;
      *(uint *)(lVar21 + 0xc) = param_5 & 1;
      *(undefined1 *)(lVar21 + 10) = 4;
      *(undefined8 *)(lVar21 + 0x10) = 0;
      *(undefined8 *)(lVar21 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x2a8) = lVar21;
      lVar11 = *plVar22;
      lVar16 = *(long *)(lVar11 + 0x38);
      uVar10 = (ulong)*(uint *)(lVar16 + 0xc08);
    }
  }
LAB_01ad4478:
  uVar14 = (uint)uVar10;
  uVar13 = uVar14;
  if (uVar14 < 0x61) {
    uVar13 = 0x60;
  }
  uVar19 = uVar10 << 5 | 8;
  lVar21 = 0;
  do {
    lVar20 = lVar21;
    if ((uVar10 - uVar13) + lVar20 == 0) goto LAB_01ad4504;
    sVar2 = *(short *)(*(long *)(lVar16 + uVar19) + 8);
    if (sVar2 == 0) goto LAB_01ad44cc;
    uVar19 = uVar19 + 0x20;
    lVar21 = lVar20 + 1;
  } while (sVar2 != 0x2d);
  if ((uVar14 + (int)(lVar20 + 1)) - 1 < 0x60) {
LAB_01ad44cc:
    lVar21 = *(long *)(lVar16 + (ulong)(uVar14 + (int)lVar20) * 0x20 + 8);
    if (lVar21 != 0) {
      *(undefined2 *)(lVar21 + 8) = 0x2d;
      *(uint *)(lVar21 + 0xc) = uVar5;
      *(undefined1 *)(lVar21 + 10) = 0;
      *(undefined8 *)(lVar21 + 0x10) = 0;
      *(undefined8 *)(lVar21 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x170) = lVar21;
      lVar11 = *plVar22;
      lVar16 = *(long *)(lVar11 + 0x38);
      uVar10 = (ulong)*(uint *)(lVar16 + 0xc08);
    }
  }
LAB_01ad4504:
  uVar13 = (uint)uVar10;
  uVar5 = uVar13;
  if (uVar13 < 0x61) {
    uVar5 = 0x60;
  }
  uVar19 = uVar10 << 5 | 8;
  lVar21 = 0;
  do {
    lVar20 = lVar21;
    if ((uVar10 - uVar5) + lVar20 == 0) goto LAB_01ad4598;
    sVar2 = *(short *)(*(long *)(lVar16 + uVar19) + 8);
    if (sVar2 == 0) goto LAB_01ad4558;
    uVar19 = uVar19 + 0x20;
    lVar21 = lVar20 + 1;
  } while (sVar2 != 0x59);
  if ((uVar13 + (int)(lVar20 + 1)) - 1 < 0x60) {
LAB_01ad4558:
    lVar21 = *(long *)(lVar16 + (ulong)(uVar13 + (int)lVar20) * 0x20 + 8);
    if (lVar21 != 0) {
      *(undefined2 *)(lVar21 + 8) = 0x59;
      *(undefined8 *)(lVar21 + 0xc) = 0;
      *(undefined8 *)(lVar21 + 0x14) = 0;
      *(undefined4 *)(lVar21 + 0x1c) = 0;
      *(undefined1 *)(lVar21 + 10) = 1;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x2d0) = lVar21;
      lVar11 = *plVar22;
      lVar16 = *(long *)(lVar11 + 0x38);
      uVar10 = (ulong)*(uint *)(lVar16 + 0xc08);
    }
  }
LAB_01ad4598:
  uVar13 = (uint)uVar10;
  uVar5 = uVar13;
  if (uVar13 < 0x61) {
    uVar5 = 0x60;
  }
  uVar19 = uVar10 << 5 | 8;
  lVar21 = 0;
  do {
    lVar20 = lVar21;
    if ((uVar10 - uVar5) + lVar20 == 0) goto LAB_01ad462c;
    sVar2 = *(short *)(*(long *)(lVar16 + uVar19) + 8);
    if (sVar2 == 0) goto LAB_01ad45ec;
    uVar19 = uVar19 + 0x20;
    lVar21 = lVar20 + 1;
  } while (sVar2 != 0x49);
  if ((uVar13 + (int)(lVar20 + 1)) - 1 < 0x60) {
LAB_01ad45ec:
    lVar21 = *(long *)(lVar16 + (ulong)(uVar13 + (int)lVar20) * 0x20 + 8);
    if (lVar21 != 0) {
      *(undefined2 *)(lVar21 + 8) = 0x49;
      *(undefined8 *)(lVar21 + 0xc) = 0;
      *(undefined8 *)(lVar21 + 0x14) = 0;
      *(undefined4 *)(lVar21 + 0x1c) = 0;
      *(undefined1 *)(lVar21 + 10) = 1;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x250) = lVar21;
      lVar11 = *plVar22;
      lVar16 = *(long *)(lVar11 + 0x38);
      uVar10 = (ulong)*(uint *)(lVar16 + 0xc08);
    }
  }
LAB_01ad462c:
  uVar5 = (uint)uVar10;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar18 = (long *)(lVar16 + uVar10 * 0x20 + 8);
  do {
    uVar19 = uVar10;
    if (uVar5 == uVar19) goto LAB_01ad46ac;
    lVar21 = *plVar18;
    if (*(short *)(lVar21 + 8) == 0) goto LAB_01ad4674;
    plVar18 = plVar18 + 4;
    uVar10 = uVar19 + 1;
  } while (*(short *)(lVar21 + 8) != 0x85);
  if ((int)(uVar19 + 1) - 1U < 0x60) {
LAB_01ad4674:
    lVar16 = *(long *)(lVar16 + (uVar19 & 0xffffffff) * 0x20 + 8);
    if (lVar16 != 0) {
      *(undefined2 *)(lVar16 + 8) = 0x85;
      *(undefined8 *)(lVar16 + 0xc) = 0;
      *(undefined8 *)(lVar16 + 0x14) = 0;
      *(undefined4 *)(lVar16 + 0x1c) = 0;
      *(undefined1 *)(lVar16 + 10) = 1;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x430) = lVar16;
      lVar11 = *plVar22;
    }
  }
LAB_01ad46ac:
  FUN_0107b310(lVar11,0x44,8,1);
  lVar16 = *plVar22;
  lVar11 = *(long *)(lVar16 + 0x78);
  if (*(long *)(lVar11 + 0x170) == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (uint)*(byte *)(*(long *)(lVar11 + 0x170) + 0xc);
  }
  if (*(long *)(lVar11 + 0x2d0) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(long *)(lVar11 + 0x2d0) + 0xc);
  }
  if (*(long *)(lVar11 + 0x250) == 0) {
    local_64 = 0;
  }
  else {
    local_64 = *(undefined4 *)(*(long *)(lVar11 + 0x250) + 0xc);
  }
  if (*(long *)(lVar11 + 0x430) == 0) {
    uVar23 = 0;
  }
  else {
    uVar23 = *(undefined4 *)(*(long *)(lVar11 + 0x430) + 0xc);
  }
  lVar11 = *(long *)(lVar16 + 0x58);
  if (*(uint *)(lVar11 + 0x408) == 0) {
    uVar10 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar11 + (ulong)*(uint *)(lVar11 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar11 + 0x408) = *(int *)(lVar11 + 0x408) + -1;
    lVar11 = *(long *)(lVar16 + 0x58);
    uVar10 = (ulong)*(uint *)(lVar11 + 0x408);
  }
  *(undefined8 *)(lVar16 + 0x78) = *(undefined8 *)(lVar11 + uVar10 * 0x20 + 8);
  lVar11 = *(long *)(lVar16 + 0x38);
  uVar5 = *(uint *)(lVar11 + 0xc08);
  if (uVar5 != 0) {
    if ((uVar5 & 0xffff) < 0x60) {
      uVar10 = (ulong)uVar5 & 0xffff;
      plVar18 = (long *)(lVar11 + uVar10 * 0x20 + 8);
      do {
        uVar10 = uVar10 + 1;
        if (*(short *)(*plVar18 + 8) == 0) break;
        *(undefined2 *)(*plVar18 + 8) = 0;
        plVar18 = plVar18 + 4;
      } while (((uint)uVar10 & 0xffff) != 0x60);
      uVar5 = *(uint *)(lVar11 + 0xc08);
    }
    *(uint *)(lVar11 + 0xc08) = uVar5 - 1;
    *(undefined2 *)(*(long *)(lVar11 + (ulong)(uVar5 - 1) * 0x20 + 8) + 8) = 0;
    uVar10 = (ulong)*(uint *)(lVar11 + 0xc08);
    do {
      if (uVar10 == 0) goto LAB_01ad47d4;
      uVar10 = uVar10 - 1;
      *(int *)(lVar11 + 0xc08) = (int)uVar10;
    } while (*(short *)(*(long *)(lVar11 + (uVar10 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar11 + 0xc08) = (int)uVar10 + 1;
  }
LAB_01ad47d4:
  lVar11 = *plVar22;
  lVar16 = *(long *)(lVar11 + 0x38);
  uVar5 = *(uint *)(lVar16 + 0xc08);
  if (uVar5 < 0x60) {
    do {
      lVar21 = *(long *)(lVar16 + (ulong)uVar5 * 0x20 + 8);
      if (*(short *)(lVar21 + 8) == 0) {
        if (uVar5 < 0x5f) {
          *(undefined2 *)(lVar21 + 8) = 1;
          *(int *)(lVar16 + 0xc08) = *(int *)(lVar16 + 0xc08) + 1;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(lVar16 + 0xc08) = uVar5;
    } while (uVar5 != 0x60);
  }
  lVar16 = *(long *)(lVar11 + 0x58);
  uVar5 = *(uint *)(lVar16 + 0x408);
  if (uVar5 < 0x1f) {
    *(uint *)(lVar16 + 0x408) = uVar5 + 1;
    lVar16 = *(long *)(lVar11 + 0x58);
    uVar5 = *(uint *)(lVar16 + 0x408);
  }
  *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)(lVar16 + (ulong)uVar5 * 0x20 + 8);
  lVar16 = *plVar22;
  uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar11 = *(long *)(lVar16 + 0x38);
  uVar5 = *(uint *)(lVar11 + 0xc08);
  uVar10 = (ulong)uVar5;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar18 = (long *)(lVar11 + uVar10 * 0x20 + 8);
  do {
    uVar19 = uVar10;
    if (uVar5 == uVar19) goto LAB_01ad48f0;
    lVar21 = *plVar18;
    if (*(short *)(lVar21 + 8) == 0) goto LAB_01ad48c0;
    plVar18 = plVar18 + 4;
    uVar10 = uVar19 + 1;
  } while (*(short *)(lVar21 + 8) != 3);
  if ((int)(uVar19 + 1) - 1U < 0x60) {
LAB_01ad48c0:
    lVar11 = *(long *)(lVar11 + (uVar19 & 0xffffffff) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 3;
      *(undefined4 *)(lVar11 + 0xc) = uVar4;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar16 + 0x78) + 0x20) = lVar11;
    }
  }
LAB_01ad48f0:
  lVar11 = *plVar22;
  lVar16 = *(long *)(lVar11 + 0x38);
  uVar13 = *(uint *)(lVar16 + 0xc08);
  uVar10 = (ulong)uVar13;
  uVar5 = uVar13;
  if (uVar13 < 0x61) {
    uVar5 = 0x60;
  }
  uVar19 = uVar10 << 5 | 8;
  lVar21 = -1;
  do {
    lVar20 = lVar21;
    if ((uVar10 - uVar5) + lVar20 == -1) goto LAB_01ad4990;
    sVar2 = *(short *)(*(long *)(lVar16 + uVar19) + 8);
    if (sVar2 == 0) goto LAB_01ad4950;
    uVar19 = uVar19 + 0x20;
    lVar21 = lVar20 + 1;
  } while (sVar2 != 0x2c);
  if (uVar13 + (int)(lVar20 + 1) < 0x60) {
LAB_01ad4950:
    lVar21 = *(long *)(lVar16 + (ulong)(uVar13 + (int)lVar20 + 1) * 0x20 + 8);
    if (lVar21 != 0) {
      *(undefined2 *)(lVar21 + 8) = 0x2c;
      *(uint *)(lVar21 + 0xc) = uVar15;
      *(undefined1 *)(lVar21 + 10) = 4;
      *(undefined8 *)(lVar21 + 0x10) = 0;
      *(undefined8 *)(lVar21 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x168) = lVar21;
      lVar11 = *plVar22;
      lVar16 = *(long *)(lVar11 + 0x38);
      uVar10 = (ulong)*(uint *)(lVar16 + 0xc08);
    }
  }
LAB_01ad4990:
  uVar13 = (uint)uVar10;
  uVar5 = uVar13;
  if (uVar13 < 0x61) {
    uVar5 = 0x60;
  }
  uVar19 = uVar10 << 5 | 8;
  lVar21 = 0;
  do {
    lVar20 = lVar21;
    if ((uVar10 - uVar5) + lVar20 == 0) goto LAB_01ad4a20;
    sVar2 = *(short *)(*(long *)(lVar16 + uVar19) + 8);
    if (sVar2 == 0) goto LAB_01ad49e4;
    uVar19 = uVar19 + 0x20;
    lVar21 = lVar20 + 1;
  } while (sVar2 != 0x12);
  if ((uVar13 + (int)(lVar20 + 1)) - 1 < 0x60) {
LAB_01ad49e4:
    lVar21 = *(long *)(lVar16 + (ulong)(uVar13 + (int)lVar20) * 0x20 + 8);
    if (lVar21 != 0) {
      *(undefined2 *)(lVar21 + 8) = 0x12;
      *(uint *)(lVar21 + 0xc) = param_3 & 0xffff;
      *(undefined1 *)(lVar21 + 10) = 4;
      *(undefined8 *)(lVar21 + 0x10) = 0;
      *(undefined8 *)(lVar21 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x98) = lVar21;
      lVar11 = *plVar22;
      lVar16 = *(long *)(lVar11 + 0x38);
      uVar10 = (ulong)*(uint *)(lVar16 + 0xc08);
    }
  }
LAB_01ad4a20:
  uVar13 = (uint)uVar10;
  uVar5 = uVar13;
  if (uVar13 < 0x61) {
    uVar5 = 0x60;
  }
  uVar19 = uVar10 << 5 | 8;
  lVar21 = 0;
  do {
    lVar20 = lVar21;
    if ((uVar10 - uVar5) + lVar20 == 0) goto LAB_01ad4ab0;
    sVar2 = *(short *)(*(long *)(lVar16 + uVar19) + 8);
    if (sVar2 == 0) goto LAB_01ad4a74;
    uVar19 = uVar19 + 0x20;
    lVar21 = lVar20 + 1;
  } while (sVar2 != 0x54);
  if ((uVar13 + (int)(lVar20 + 1)) - 1 < 0x60) {
LAB_01ad4a74:
    lVar21 = *(long *)(lVar16 + (ulong)(uVar13 + (int)lVar20) * 0x20 + 8);
    if (lVar21 != 0) {
      *(undefined2 *)(lVar21 + 8) = 0x54;
      *(uint *)(lVar21 + 0xc) = param_5 & 1;
      *(undefined1 *)(lVar21 + 10) = 4;
      *(undefined8 *)(lVar21 + 0x10) = 0;
      *(undefined8 *)(lVar21 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x2a8) = lVar21;
      lVar11 = *plVar22;
      lVar16 = *(long *)(lVar11 + 0x38);
      uVar10 = (ulong)*(uint *)(lVar16 + 0xc08);
    }
  }
LAB_01ad4ab0:
  uVar13 = (uint)uVar10;
  uVar5 = uVar13;
  if (uVar13 < 0x61) {
    uVar5 = 0x60;
  }
  uVar19 = uVar10 << 5 | 8;
  lVar21 = 0;
  do {
    lVar20 = lVar21;
    if ((uVar10 - uVar5) + lVar20 == 0) goto LAB_01ad4b40;
    sVar2 = *(short *)(*(long *)(lVar16 + uVar19) + 8);
    if (sVar2 == 0) goto LAB_01ad4b04;
    uVar19 = uVar19 + 0x20;
    lVar21 = lVar20 + 1;
  } while (sVar2 != 0x59);
  if ((uVar13 + (int)(lVar20 + 1)) - 1 < 0x60) {
LAB_01ad4b04:
    lVar21 = *(long *)(lVar16 + (ulong)(uVar13 + (int)lVar20) * 0x20 + 8);
    if (lVar21 != 0) {
      *(undefined2 *)(lVar21 + 8) = 0x59;
      *(undefined4 *)(lVar21 + 0xc) = uVar3;
      *(undefined1 *)(lVar21 + 10) = 4;
      *(undefined8 *)(lVar21 + 0x10) = 0;
      *(undefined8 *)(lVar21 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x2d0) = lVar21;
      lVar11 = *plVar22;
      lVar16 = *(long *)(lVar11 + 0x38);
      uVar10 = (ulong)*(uint *)(lVar16 + 0xc08);
    }
  }
LAB_01ad4b40:
  uVar13 = (uint)uVar10;
  uVar5 = uVar13;
  if (uVar13 < 0x61) {
    uVar5 = 0x60;
  }
  uVar19 = uVar10 << 5 | 8;
  lVar21 = 0;
  do {
    lVar20 = lVar21;
    if ((uVar10 - uVar5) + lVar20 == 0) goto LAB_01ad4bd0;
    sVar2 = *(short *)(*(long *)(lVar16 + uVar19) + 8);
    if (sVar2 == 0) goto LAB_01ad4b94;
    uVar19 = uVar19 + 0x20;
    lVar21 = lVar20 + 1;
  } while (sVar2 != 0x85);
  if ((uVar13 + (int)(lVar20 + 1)) - 1 < 0x60) {
LAB_01ad4b94:
    lVar21 = *(long *)(lVar16 + (ulong)(uVar13 + (int)lVar20) * 0x20 + 8);
    if (lVar21 != 0) {
      *(undefined2 *)(lVar21 + 8) = 0x85;
      *(undefined4 *)(lVar21 + 0xc) = uVar23;
      *(undefined1 *)(lVar21 + 10) = 4;
      *(undefined8 *)(lVar21 + 0x10) = 0;
      *(undefined8 *)(lVar21 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x430) = lVar21;
      lVar11 = *plVar22;
      lVar16 = *(long *)(lVar11 + 0x38);
      uVar10 = (ulong)*(uint *)(lVar16 + 0xc08);
    }
  }
LAB_01ad4bd0:
  uVar13 = (uint)uVar10;
  uVar5 = uVar13;
  if (uVar13 < 0x61) {
    uVar5 = 0x60;
  }
  uVar19 = uVar10 << 5 | 8;
  lVar21 = 0;
  do {
    lVar20 = lVar21;
    if ((uVar10 - uVar5) + lVar20 == 0) goto LAB_01ad4c60;
    sVar2 = *(short *)(*(long *)(lVar16 + uVar19) + 8);
    if (sVar2 == 0) goto LAB_01ad4c24;
    uVar19 = uVar19 + 0x20;
    lVar21 = lVar20 + 1;
  } while (sVar2 != 0x2d);
  if ((uVar13 + (int)(lVar20 + 1)) - 1 < 0x60) {
LAB_01ad4c24:
    lVar21 = *(long *)(lVar16 + (ulong)(uVar13 + (int)lVar20) * 0x20 + 8);
    if (lVar21 != 0) {
      *(undefined2 *)(lVar21 + 8) = 0x2d;
      *(undefined8 *)(lVar21 + 0x10) = 0;
      *(undefined8 *)(lVar21 + 0x18) = 0;
      *(uint *)(lVar21 + 0xc) = local_68;
      *(undefined1 *)(lVar21 + 10) = 0;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x170) = lVar21;
      lVar11 = *plVar22;
      lVar16 = *(long *)(lVar11 + 0x38);
      uVar10 = (ulong)*(uint *)(lVar16 + 0xc08);
    }
  }
LAB_01ad4c60:
  uVar5 = (uint)uVar10;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar18 = (long *)(lVar16 + uVar10 * 0x20 + 8);
  do {
    uVar19 = uVar10;
    if (uVar5 == uVar19) goto LAB_01ad4ce0;
    lVar21 = *plVar18;
    if (*(short *)(lVar21 + 8) == 0) goto LAB_01ad4ca8;
    plVar18 = plVar18 + 4;
    uVar10 = uVar19 + 1;
  } while (*(short *)(lVar21 + 8) != 0x49);
  if ((int)(uVar19 + 1) - 1U < 0x60) {
LAB_01ad4ca8:
    lVar16 = *(long *)(lVar16 + (uVar19 & 0xffffffff) * 0x20 + 8);
    if (lVar16 != 0) {
      *(undefined2 *)(lVar16 + 8) = 0x49;
      *(undefined8 *)(lVar16 + 0x10) = 0;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      *(undefined4 *)(lVar16 + 0xc) = local_64;
      *(undefined1 *)(lVar16 + 10) = 1;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x250) = lVar16;
      lVar11 = *plVar22;
    }
  }
LAB_01ad4ce0:
  FUN_0107b310(lVar11,0xf3,8,1);
  lVar11 = *(long *)(*plVar22 + 0x78);
  uVar5 = 0;
  if (*(long *)(lVar11 + 0x170) != 0) {
    uVar5 = *(uint *)(*(long *)(lVar11 + 0x170) + 0xc);
  }
  if (uVar15 < 2) {
    if ((uVar5 & 0xfe) == 0) {
      uVar12 = 0;
      uVar17 = 0;
      uVar9 = 1;
      *param_4 = 1;
    }
    else {
      *param_4 = (char)uVar5;
      lVar11 = *(long *)(*(long *)(*plVar22 + 0x78) + 0x250);
      uVar12 = 0;
      if (lVar11 != 0) {
        uVar12 = (undefined1)*(undefined4 *)(lVar11 + 0xc);
      }
      uVar17 = 0;
      uVar9 = 0;
    }
  }
  else {
    if ((((*(long *)(lVar11 + 0x430) == 0) || (*(int *)(*(long *)(lVar11 + 0x430) + 0xc) == 0)) &&
        (*(long *)(lVar11 + 0x2d0) != 0)) && (*(int *)(*(long *)(lVar11 + 0x2d0) + 0xc) != 0)) {
      uVar12 = 0;
      *param_4 = (char)uVar15;
    }
    else {
      *param_4 = (char)uVar5;
      lVar11 = *(long *)(*(long *)(*plVar22 + 0x78) + 0x250);
      uVar12 = 0;
      if (lVar11 != 0) {
        uVar12 = (undefined1)*(undefined4 *)(lVar11 + 0xc);
      }
    }
    uVar9 = 0;
    uVar17 = 1;
  }
  param_4[2] = uVar12;
  param_4[3] = uVar17;
  param_4[5] = uVar9;
  param_4[6] = uVar9;
  lVar11 = *plVar22;
  lVar16 = *(long *)(lVar11 + 0x58);
  if (*(uint *)(lVar16 + 0x408) == 0) {
    uVar10 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar16 + (ulong)*(uint *)(lVar16 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar16 + 0x408) = *(int *)(lVar16 + 0x408) + -1;
    lVar16 = *(long *)(lVar11 + 0x58);
    uVar10 = (ulong)*(uint *)(lVar16 + 0x408);
  }
  *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)(lVar16 + uVar10 * 0x20 + 8);
  lVar11 = *(long *)(lVar11 + 0x38);
  uVar15 = *(uint *)(lVar11 + 0xc08);
  if (uVar15 != 0) {
    if ((uVar15 & 0xffff) < 0x60) {
      uVar10 = (ulong)uVar15 & 0xffff;
      plVar22 = (long *)(lVar11 + uVar10 * 0x20 + 8);
      do {
        uVar10 = uVar10 + 1;
        if (*(short *)(*plVar22 + 8) == 0) break;
        *(undefined2 *)(*plVar22 + 8) = 0;
        plVar22 = plVar22 + 4;
      } while (((uint)uVar10 & 0xffff) != 0x60);
      uVar15 = *(uint *)(lVar11 + 0xc08);
    }
    *(uint *)(lVar11 + 0xc08) = uVar15 - 1;
    *(undefined2 *)(*(long *)(lVar11 + (ulong)(uVar15 - 1) * 0x20 + 8) + 8) = 0;
    uVar10 = (ulong)*(uint *)(lVar11 + 0xc08);
    do {
      if (uVar10 == 0) {
        return;
      }
      uVar10 = uVar10 - 1;
      *(int *)(lVar11 + 0xc08) = (int)uVar10;
    } while (*(short *)(*(long *)(lVar11 + (uVar10 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar11 + 0xc08) = (int)uVar10 + 1;
  }
  return;
}


