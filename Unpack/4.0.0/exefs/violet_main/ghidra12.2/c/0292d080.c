/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0292d080; name: FUN_0292d080
 */


void FUN_0292d080(long param_1,ushort param_2,ushort param_3,undefined4 param_4,long *param_5,
                 long param_6,ushort *param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 uVar22;
  ushort uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  
  bVar1 = *(byte *)((long)param_7 + 0x13);
  lVar12 = *(long *)(param_1 + 0x10);
  lVar14 = *(long *)(lVar12 + 0x38);
  uVar13 = *(uint *)(lVar14 + 0xc08);
  uVar23 = param_7[3];
  uVar5 = param_7[4];
  uVar6 = param_7[5];
  bVar2 = *(byte *)((long)param_7 + 9);
  bVar3 = *(byte *)((long)param_7 + 0xb);
  uVar7 = param_7[9];
  if (uVar13 < 0x60) {
    do {
      lVar17 = *(long *)(lVar14 + (ulong)uVar13 * 0x20 + 8);
      if (*(short *)(lVar17 + 8) == 0) {
        if (uVar13 < 0x5f) {
          *(undefined2 *)(lVar17 + 8) = 1;
          *(int *)(lVar14 + 0xc08) = *(int *)(lVar14 + 0xc08) + 1;
        }
        break;
      }
      uVar13 = uVar13 + 1;
      *(uint *)(lVar14 + 0xc08) = uVar13;
    } while (uVar13 != 0x60);
  }
  lVar14 = *(long *)(lVar12 + 0x58);
  uVar13 = *(uint *)(lVar14 + 0x408);
  if (uVar13 < 0x1f) {
    *(uint *)(lVar14 + 0x408) = uVar13 + 1;
    lVar14 = *(long *)(lVar12 + 0x58);
    uVar13 = *(uint *)(lVar14 + 0x408);
  }
  *(undefined8 *)(lVar12 + 0x78) = *(undefined8 *)(lVar14 + (ulong)uVar13 * 0x20 + 8);
  lVar14 = *(long *)(param_1 + 0x10);
  uVar11 = (**(code **)(*param_5 + 0x98))(param_5);
  lVar12 = *(long *)(lVar14 + 0x38);
  uVar13 = *(uint *)(lVar12 + 0xc08);
  uVar19 = (ulong)uVar13;
  if (uVar13 < 0x61) {
    uVar13 = 0x60;
  }
  plVar16 = (long *)(lVar12 + uVar19 * 0x20 + 8);
  do {
    uVar20 = uVar19;
    if (uVar13 == uVar20) goto LAB_0292d1f0;
    lVar17 = *plVar16;
    if (*(short *)(lVar17 + 8) == 0) goto LAB_0292d1c0;
    plVar16 = plVar16 + 4;
    uVar19 = uVar20 + 1;
  } while (*(short *)(lVar17 + 8) != 2);
  if ((int)(uVar20 + 1) - 1U < 0x60) {
LAB_0292d1c0:
    lVar12 = *(long *)(lVar12 + (uVar20 & 0xffffffff) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 2;
      *(undefined4 *)(lVar12 + 0xc) = uVar11;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar14 + 0x78) + 0x18) = lVar12;
    }
  }
LAB_0292d1f0:
  lVar12 = *(long *)(param_1 + 0x10);
  lVar14 = *(long *)(lVar12 + 0x38);
  uVar15 = *(uint *)(lVar14 + 0xc08);
  uVar19 = (ulong)uVar15;
  uVar13 = uVar15;
  if (uVar15 < 0x61) {
    uVar13 = 0x60;
  }
  uVar20 = uVar19 << 5 | 8;
  lVar17 = -1;
  do {
    lVar18 = lVar17;
    if ((uVar19 - uVar13) + lVar18 == -1) goto LAB_0292d298;
    sVar4 = *(short *)(*(long *)(lVar14 + uVar20) + 8);
    if (sVar4 == 0) goto LAB_0292d258;
    uVar20 = uVar20 + 0x20;
    lVar17 = lVar18 + 1;
  } while (sVar4 != 0x12);
  if (uVar15 + (int)(lVar18 + 1) < 0x60) {
LAB_0292d258:
    lVar17 = *(long *)(lVar14 + (ulong)(uVar15 + (int)lVar18 + 1) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 0x12;
      *(uint *)(lVar17 + 0xc) = (uint)param_2;
      *(undefined1 *)(lVar17 + 10) = 4;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(long *)(*(long *)(lVar12 + 0x78) + 0x98) = lVar17;
      lVar12 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar12 + 0x38);
      uVar19 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_0292d298:
  uVar15 = (uint)uVar19;
  uVar13 = uVar15;
  if (uVar15 < 0x61) {
    uVar13 = 0x60;
  }
  uVar20 = uVar19 << 5 | 8;
  lVar17 = 0;
  do {
    lVar18 = lVar17;
    if ((uVar19 - uVar13) + lVar18 == 0) goto LAB_0292d328;
    sVar4 = *(short *)(*(long *)(lVar14 + uVar20) + 8);
    if (sVar4 == 0) goto LAB_0292d2ec;
    uVar20 = uVar20 + 0x20;
    lVar17 = lVar18 + 1;
  } while (sVar4 != 0x16);
  if ((uVar15 + (int)(lVar18 + 1)) - 1 < 0x60) {
LAB_0292d2ec:
    lVar17 = *(long *)(lVar14 + (ulong)(uVar15 + (int)lVar18) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 0x16;
      *(uint *)(lVar17 + 0xc) = (uint)(byte)uVar5;
      *(undefined1 *)(lVar17 + 10) = 1;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(long *)(*(long *)(lVar12 + 0x78) + 0xb8) = lVar17;
      lVar12 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar12 + 0x38);
      uVar19 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_0292d328:
  uVar15 = (uint)uVar19;
  uVar13 = uVar15;
  if (uVar15 < 0x61) {
    uVar13 = 0x60;
  }
  uVar20 = uVar19 << 5 | 8;
  lVar17 = 0;
  do {
    lVar18 = lVar17;
    if ((uVar19 - uVar13) + lVar18 == 0) goto LAB_0292d3b4;
    sVar4 = *(short *)(*(long *)(lVar14 + uVar20) + 8);
    if (sVar4 == 0) goto LAB_0292d37c;
    uVar20 = uVar20 + 0x20;
    lVar17 = lVar18 + 1;
  } while (sVar4 != 0x1d);
  if ((uVar15 + (int)(lVar18 + 1)) - 1 < 0x60) {
LAB_0292d37c:
    lVar17 = *(long *)(lVar14 + (ulong)(uVar15 + (int)lVar18) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 0x1d;
      *(uint *)(lVar17 + 0xc) = (uint)uVar23;
      *(undefined1 *)(lVar17 + 10) = 0;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(long *)(*(long *)(lVar12 + 0x78) + 0xf0) = lVar17;
      lVar12 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar12 + 0x38);
      uVar19 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_0292d3b4:
  uVar15 = (uint)uVar19;
  uVar13 = uVar15;
  if (uVar15 < 0x61) {
    uVar13 = 0x60;
  }
  uVar20 = uVar19 << 5 | 8;
  lVar17 = 0;
  do {
    lVar18 = lVar17;
    if ((uVar19 - uVar13) + lVar18 == 0) goto LAB_0292d440;
    sVar4 = *(short *)(*(long *)(lVar14 + uVar20) + 8);
    if (sVar4 == 0) goto LAB_0292d408;
    uVar20 = uVar20 + 0x20;
    lVar17 = lVar18 + 1;
  } while (sVar4 != 0x1b);
  if ((uVar15 + (int)(lVar18 + 1)) - 1 < 0x60) {
LAB_0292d408:
    lVar17 = *(long *)(lVar14 + (ulong)(uVar15 + (int)lVar18) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 0x1b;
      *(uint *)(lVar17 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar17 + 10) = 0;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(long *)(*(long *)(lVar12 + 0x78) + 0xe0) = lVar17;
      lVar12 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar12 + 0x38);
      uVar19 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_0292d440:
  uVar15 = (uint)uVar19;
  uVar13 = uVar15;
  if (uVar15 < 0x61) {
    uVar13 = 0x60;
  }
  uVar20 = uVar19 << 5 | 8;
  lVar17 = 0;
  do {
    lVar18 = lVar17;
    if ((uVar19 - uVar13) + lVar18 == 0) goto LAB_0292d4cc;
    sVar4 = *(short *)(*(long *)(lVar14 + uVar20) + 8);
    if (sVar4 == 0) goto LAB_0292d494;
    uVar20 = uVar20 + 0x20;
    lVar17 = lVar18 + 1;
  } while (sVar4 != 99);
  if ((uVar15 + (int)(lVar18 + 1)) - 1 < 0x60) {
LAB_0292d494:
    lVar17 = *(long *)(lVar14 + (ulong)(uVar15 + (int)lVar18) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 99;
      *(uint *)(lVar17 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar17 + 10) = 0;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(long *)(*(long *)(lVar12 + 0x78) + 800) = lVar17;
      lVar12 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar12 + 0x38);
      uVar19 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_0292d4cc:
  uVar15 = (uint)uVar19;
  uVar13 = uVar15;
  if (uVar15 < 0x61) {
    uVar13 = 0x60;
  }
  uVar20 = uVar19 << 5 | 8;
  lVar17 = 0;
  do {
    lVar18 = lVar17;
    if ((uVar19 - uVar13) + lVar18 == 0) goto LAB_0292d558;
    sVar4 = *(short *)(*(long *)(lVar14 + uVar20) + 8);
    if (sVar4 == 0) goto LAB_0292d520;
    uVar20 = uVar20 + 0x20;
    lVar17 = lVar18 + 1;
  } while (sVar4 != 0x1c);
  if ((uVar15 + (int)(lVar18 + 1)) - 1 < 0x60) {
LAB_0292d520:
    lVar17 = *(long *)(lVar14 + (ulong)(uVar15 + (int)lVar18) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 0x1c;
      *(uint *)(lVar17 + 0xc) = (uint)(byte)uVar6;
      *(undefined1 *)(lVar17 + 10) = 0;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(long *)(*(long *)(lVar12 + 0x78) + 0xe8) = lVar17;
      lVar12 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar12 + 0x38);
      uVar19 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_0292d558:
  uVar15 = (uint)uVar19;
  uVar13 = uVar15;
  if (uVar15 < 0x61) {
    uVar13 = 0x60;
  }
  uVar20 = uVar19 << 5 | 8;
  lVar17 = 0;
  do {
    lVar18 = lVar17;
    if ((uVar19 - uVar13) + lVar18 == 0) goto LAB_0292d5e4;
    sVar4 = *(short *)(*(long *)(lVar14 + uVar20) + 8);
    if (sVar4 == 0) goto LAB_0292d5ac;
    uVar20 = uVar20 + 0x20;
    lVar17 = lVar18 + 1;
  } while (sVar4 != 0x6d);
  if ((uVar15 + (int)(lVar18 + 1)) - 1 < 0x60) {
LAB_0292d5ac:
    lVar17 = *(long *)(lVar14 + (ulong)(uVar15 + (int)lVar18) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 0x6d;
      *(uint *)(lVar17 + 0xc) = (uint)(byte)uVar7;
      *(undefined1 *)(lVar17 + 10) = 0;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(long *)(*(long *)(lVar12 + 0x78) + 0x370) = lVar17;
      lVar12 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar12 + 0x38);
      uVar19 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_0292d5e4:
  uVar15 = (uint)uVar19;
  uVar13 = uVar15;
  if (uVar15 < 0x61) {
    uVar13 = 0x60;
  }
  uVar20 = uVar19 << 5 | 8;
  lVar17 = 0;
  do {
    lVar18 = lVar17;
    if ((uVar19 - uVar13) + lVar18 == 0) goto LAB_0292d678;
    sVar4 = *(short *)(*(long *)(lVar14 + uVar20) + 8);
    if (sVar4 == 0) goto LAB_0292d638;
    uVar20 = uVar20 + 0x20;
    lVar17 = lVar18 + 1;
  } while (sVar4 != 0x7a);
  if ((uVar15 + (int)(lVar18 + 1)) - 1 < 0x60) {
LAB_0292d638:
    lVar17 = *(long *)(lVar14 + (ulong)(uVar15 + (int)lVar18) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 0x7a;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(uint *)(lVar17 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar17 + 10) = 1;
      *(long *)(*(long *)(lVar12 + 0x78) + 0x3d8) = lVar17;
      lVar12 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar12 + 0x38);
      uVar19 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_0292d678:
  bVar1 = *(byte *)(param_6 + 0xa6);
  uVar13 = (uint)uVar19;
  if (uVar13 < 0x61) {
    uVar13 = 0x60;
  }
  plVar16 = (long *)(lVar14 + uVar19 * 0x20 + 8);
  do {
    uVar20 = uVar19;
    if (uVar13 == uVar20) goto LAB_0292d6f4;
    lVar17 = *plVar16;
    if (*(short *)(lVar17 + 8) == 0) goto LAB_0292d6c4;
    plVar16 = plVar16 + 4;
    uVar19 = uVar20 + 1;
  } while (*(short *)(lVar17 + 8) != 5);
  if ((int)(uVar20 + 1) - 1U < 0x60) {
LAB_0292d6c4:
    lVar14 = *(long *)(lVar14 + (uVar20 & 0xffffffff) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 5;
      *(uint *)(lVar14 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar12 + 0x78) + 0x30) = lVar14;
    }
  }
LAB_0292d6f4:
  if (bVar1 != 0) {
    uVar19 = 0;
    do {
      uVar13 = (int)uVar19 + 6;
      lVar14 = *(long *)(param_1 + 0x10);
      uVar11 = (**(code **)(**(long **)(param_6 + uVar19 * 8) + 0x98))();
      lVar12 = *(long *)(lVar14 + 0x38);
      uVar15 = *(uint *)(lVar12 + 0xc08);
      uVar20 = (ulong)uVar15;
      if (uVar15 < 0x61) {
        uVar15 = 0x60;
      }
      plVar16 = (long *)(lVar12 + uVar20 * 0x20 + 8);
      do {
        uVar21 = uVar20;
        if (uVar15 == uVar21) goto LAB_0292d79c;
        lVar17 = *plVar16;
        if (*(ushort *)(lVar17 + 8) == 0) goto LAB_0292d768;
        plVar16 = plVar16 + 4;
        uVar20 = uVar21 + 1;
      } while ((uint)*(ushort *)(lVar17 + 8) != (uVar13 & 0xffff));
      if ((int)(uVar21 + 1) - 1U < 0x60) {
LAB_0292d768:
        lVar12 = *(long *)(lVar12 + (uVar21 & 0xffffffff) * 0x20 + 8);
        if (lVar12 != 0) {
          uVar23 = (ushort)uVar13;
          *(ushort *)(lVar12 + 8) = uVar23;
          *(undefined4 *)(lVar12 + 0xc) = uVar11;
          *(undefined1 *)(lVar12 + 10) = 4;
          *(undefined8 *)(lVar12 + 0x10) = 0;
          *(undefined8 *)(lVar12 + 0x18) = 0;
          if (-1 < (char)uVar19) {
            *(long *)(*(long *)(lVar14 + 0x78) + (ulong)uVar23 * 8 + 8) = lVar12;
          }
        }
      }
LAB_0292d79c:
      uVar19 = uVar19 + 1;
    } while (uVar19 != bVar1);
  }
  FUN_0107b310(*(undefined8 *)(param_1 + 0x10),0x2c,8,1);
  lVar14 = *(long *)(param_1 + 0x10);
  lVar12 = *(long *)(lVar14 + 0x78);
  if (*(long *)(lVar12 + 0xb8) == 0) {
    uVar22 = 0;
  }
  else {
    uVar22 = (undefined1)*(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0xc);
  }
  if (*(long *)(lVar12 + 0xf0) == 0) {
    uVar23 = 0;
  }
  else {
    uVar23 = (ushort)*(undefined4 *)(*(long *)(lVar12 + 0xf0) + 0xc);
  }
  if (*(long *)(lVar12 + 0xe0) == 0) {
    uVar24 = 0;
  }
  else {
    uVar24 = (undefined1)*(undefined4 *)(*(long *)(lVar12 + 0xe0) + 0xc);
  }
  if (*(long *)(lVar12 + 0xe8) == 0) {
    uVar25 = 0;
  }
  else {
    uVar25 = (undefined1)*(undefined4 *)(*(long *)(lVar12 + 0xe8) + 0xc);
  }
  if (*(long *)(lVar12 + 800) == 0) {
    bVar8 = false;
  }
  else {
    bVar8 = *(int *)(*(long *)(lVar12 + 800) + 0xc) != 0;
  }
  if (*(long *)(lVar12 + 0x370) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = *(int *)(*(long *)(lVar12 + 0x370) + 0xc) != 0;
  }
  if (*(long *)(lVar12 + 0x3d8) == 0) {
    bVar10 = false;
  }
  else {
    bVar10 = *(int *)(*(long *)(lVar12 + 0x3d8) + 0xc) != 0;
  }
  lVar12 = *(long *)(lVar14 + 0x58);
  if (*(uint *)(lVar12 + 0x408) == 0) {
    uVar19 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar12 + (ulong)*(uint *)(lVar12 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar12 + 0x408) = *(int *)(lVar12 + 0x408) + -1;
    lVar12 = *(long *)(lVar14 + 0x58);
    uVar19 = (ulong)*(uint *)(lVar12 + 0x408);
  }
  *(undefined8 *)(lVar14 + 0x78) = *(undefined8 *)(lVar12 + uVar19 * 0x20 + 8);
  lVar12 = *(long *)(lVar14 + 0x38);
  uVar13 = *(uint *)(lVar12 + 0xc08);
  if (uVar13 != 0) {
    if ((uVar13 & 0xffff) < 0x60) {
      uVar19 = (ulong)uVar13 & 0xffff;
      plVar16 = (long *)(lVar12 + uVar19 * 0x20 + 8);
      do {
        uVar19 = uVar19 + 1;
        if (*(short *)(*plVar16 + 8) == 0) break;
        *(undefined2 *)(*plVar16 + 8) = 0;
        plVar16 = plVar16 + 4;
      } while (((uint)uVar19 & 0xffff) != 0x60);
      uVar13 = *(uint *)(lVar12 + 0xc08);
    }
    *(uint *)(lVar12 + 0xc08) = uVar13 - 1;
    *(undefined2 *)(*(long *)(lVar12 + (ulong)(uVar13 - 1) * 0x20 + 8) + 8) = 0;
    uVar19 = (ulong)*(uint *)(lVar12 + 0xc08);
    do {
      if (uVar19 == 0) goto LAB_0292d908;
      uVar19 = uVar19 - 1;
      *(int *)(lVar12 + 0xc08) = (int)uVar19;
    } while (*(short *)(*(long *)(lVar12 + (uVar19 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar12 + 0xc08) = (int)uVar19 + 1;
  }
LAB_0292d908:
  *param_7 = param_2;
  param_7[1] = param_3;
  *(undefined1 *)(param_7 + 4) = uVar22;
  param_7[3] = uVar23;
  *(undefined1 *)((long)param_7 + 9) = uVar24;
  *(bool *)((long)param_7 + 0xb) = bVar8;
  *(undefined1 *)(param_7 + 5) = uVar25;
  *(bool *)(param_7 + 9) = bVar9;
  *(undefined4 *)(param_7 + 6) = param_4;
  *(bool *)((long)param_7 + 0x13) = bVar10;
  return;
}


