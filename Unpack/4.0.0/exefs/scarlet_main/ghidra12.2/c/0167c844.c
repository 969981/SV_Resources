/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0167c844; name: FUN_0167c844
 */


void FUN_0167c844(long param_1,ushort *param_2,long *param_3,long *param_4,int *param_5,
                 undefined4 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 *param_11)

{
  ushort uVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  
  param_11[2] = 0;
  param_11[3] = 0;
  *(undefined4 *)(param_11 + 4) = 0;
  *param_11 = 0;
  param_11[1] = 0;
  iVar4 = (**(code **)(*param_4 + 0x98))(param_4);
  piVar6 = param_5;
  if ((((((*param_5 == iVar4) || (piVar6 = param_5 + 2, *piVar6 == iVar4)) ||
        (piVar6 = param_5 + 4, *piVar6 == iVar4)) ||
       ((piVar6 = param_5 + 6, *piVar6 == iVar4 || (piVar6 = param_5 + 8, *piVar6 == iVar4)))) ||
      ((piVar6 = param_5 + 10, *piVar6 == iVar4 ||
       ((piVar6 = param_5 + 0xc, *piVar6 == iVar4 || (piVar6 = param_5 + 0xe, *piVar6 == iVar4))))))
     || ((piVar6 = param_5 + 0x10, *piVar6 == iVar4 || (piVar6 = param_5 + 0x12, *piVar6 == iVar4)))
     ) {
    uVar10 = (uint)*(byte *)(piVar6 + 1);
  }
  else {
    uVar10 = 0xe;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar7 + 0x38);
  uVar8 = *(uint *)(lVar11 + 0xc08);
  if (uVar8 < 0x60) {
    do {
      lVar14 = *(long *)(lVar11 + (ulong)uVar8 * 0x20 + 8);
      if (*(short *)(lVar14 + 8) == 0) {
        if (uVar8 < 0x5f) {
          *(undefined2 *)(lVar14 + 8) = 1;
          *(int *)(lVar11 + 0xc08) = *(int *)(lVar11 + 0xc08) + 1;
        }
        break;
      }
      uVar8 = uVar8 + 1;
      *(uint *)(lVar11 + 0xc08) = uVar8;
    } while (uVar8 != 0x60);
  }
  lVar11 = *(long *)(lVar7 + 0x58);
  uVar8 = *(uint *)(lVar11 + 0x408);
  if (uVar8 < 0x1f) {
    *(uint *)(lVar11 + 0x408) = uVar8 + 1;
    lVar11 = *(long *)(lVar7 + 0x58);
    uVar8 = *(uint *)(lVar11 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(lVar11 + (ulong)uVar8 * 0x20 + 8);
  lVar11 = *(long *)(param_1 + 0x10);
  uVar5 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar7 = *(long *)(lVar11 + 0x38);
  uVar8 = *(uint *)(lVar7 + 0xc08);
  uVar16 = (ulong)uVar8;
  if (uVar8 < 0x61) {
    uVar8 = 0x60;
  }
  plVar13 = (long *)(lVar7 + uVar16 * 0x20 + 8);
  do {
    uVar15 = uVar16;
    if (uVar8 == uVar15) goto LAB_0167c9d4;
    lVar14 = *plVar13;
    if (*(short *)(lVar14 + 8) == 0) goto LAB_0167c9a4;
    plVar13 = plVar13 + 4;
    uVar16 = uVar15 + 1;
  } while (*(short *)(lVar14 + 8) != 3);
  if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_0167c9a4:
    lVar7 = *(long *)(lVar7 + (uVar15 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 3;
      *(undefined4 *)(lVar7 + 0xc) = uVar5;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x20) = lVar7;
    }
  }
LAB_0167c9d4:
  lVar11 = *(long *)(param_1 + 0x10);
  uVar5 = (**(code **)(*param_4 + 0x98))(param_4);
  lVar7 = *(long *)(lVar11 + 0x38);
  uVar8 = *(uint *)(lVar7 + 0xc08);
  uVar16 = (ulong)uVar8;
  if (uVar8 < 0x61) {
    uVar8 = 0x60;
  }
  plVar13 = (long *)(lVar7 + uVar16 * 0x20 + 8);
  do {
    uVar15 = uVar16;
    if (uVar8 == uVar15) goto LAB_0167ca64;
    lVar14 = *plVar13;
    if (*(short *)(lVar14 + 8) == 0) goto LAB_0167ca38;
    plVar13 = plVar13 + 4;
    uVar16 = uVar15 + 1;
  } while (*(short *)(lVar14 + 8) != 4);
  if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_0167ca38:
    lVar7 = *(long *)(lVar7 + (uVar15 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 4;
      *(undefined4 *)(lVar7 + 0xc) = uVar5;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x28) = lVar7;
    }
  }
LAB_0167ca64:
  lVar7 = *(long *)(param_1 + 0x10);
  uVar1 = *param_2;
  lVar11 = *(long *)(lVar7 + 0x38);
  uVar9 = *(uint *)(lVar11 + 0xc08);
  uVar16 = (ulong)uVar9;
  uVar8 = uVar9;
  if (uVar9 < 0x61) {
    uVar8 = 0x60;
  }
  uVar15 = uVar16 << 5 | 8;
  lVar14 = -1;
  do {
    lVar12 = lVar14;
    if ((uVar16 - uVar8) + lVar12 == -1) goto LAB_0167cb08;
    sVar2 = *(short *)(*(long *)(lVar11 + uVar15) + 8);
    if (sVar2 == 0) goto LAB_0167cac8;
    uVar15 = uVar15 + 0x20;
    lVar14 = lVar12 + 1;
  } while (sVar2 != 0x12);
  if (uVar9 + (int)(lVar12 + 1) < 0x60) {
LAB_0167cac8:
    lVar14 = *(long *)(lVar11 + (ulong)(uVar9 + (int)lVar12 + 1) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x12;
      *(uint *)(lVar14 + 0xc) = (uint)uVar1;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x98) = lVar14;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar7 + 0x38);
      uVar16 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_0167cb08:
  uVar1 = param_2[4];
  uVar9 = (uint)uVar16;
  uVar8 = uVar9;
  if (uVar9 < 0x61) {
    uVar8 = 0x60;
  }
  uVar15 = uVar16 << 5 | 8;
  lVar14 = 0;
  do {
    lVar12 = lVar14;
    if ((uVar16 - uVar8) + lVar12 == 0) goto LAB_0167cb9c;
    sVar2 = *(short *)(*(long *)(lVar11 + uVar15) + 8);
    if (sVar2 == 0) goto LAB_0167cb60;
    uVar15 = uVar15 + 0x20;
    lVar14 = lVar12 + 1;
  } while (sVar2 != 0x16);
  if ((uVar9 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_0167cb60:
    lVar14 = *(long *)(lVar11 + (ulong)(uVar9 + (int)lVar12) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x16;
      *(uint *)(lVar14 + 0xc) = (uint)(byte)uVar1;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0xb8) = lVar14;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar7 + 0x38);
      uVar16 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_0167cb9c:
  uVar5 = *(undefined4 *)(param_2 + 6);
  uVar9 = (uint)uVar16;
  uVar8 = uVar9;
  if (uVar9 < 0x61) {
    uVar8 = 0x60;
  }
  uVar15 = uVar16 << 5 | 8;
  lVar14 = 0;
  do {
    lVar12 = lVar14;
    if ((uVar16 - uVar8) + lVar12 == 0) goto LAB_0167cc30;
    sVar2 = *(short *)(*(long *)(lVar11 + uVar15) + 8);
    if (sVar2 == 0) goto LAB_0167cbf4;
    uVar15 = uVar15 + 0x20;
    lVar14 = lVar12 + 1;
  } while (sVar2 != 0x19);
  if ((uVar9 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_0167cbf4:
    lVar14 = *(long *)(lVar11 + (ulong)(uVar9 + (int)lVar12) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x19;
      *(undefined4 *)(lVar14 + 0xc) = uVar5;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0xd0) = lVar14;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar7 + 0x38);
      uVar16 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_0167cc30:
  uVar1 = param_2[5];
  uVar9 = (uint)uVar16;
  uVar8 = uVar9;
  if (uVar9 < 0x61) {
    uVar8 = 0x60;
  }
  uVar15 = uVar16 << 5 | 8;
  lVar14 = 0;
  do {
    lVar12 = lVar14;
    if ((uVar16 - uVar8) + lVar12 == 0) goto LAB_0167ccc4;
    sVar2 = *(short *)(*(long *)(lVar11 + uVar15) + 8);
    if (sVar2 == 0) goto LAB_0167cc88;
    uVar15 = uVar15 + 0x20;
    lVar14 = lVar12 + 1;
  } while (sVar2 != 0x1c);
  if ((uVar9 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_0167cc88:
    lVar14 = *(long *)(lVar11 + (ulong)(uVar9 + (int)lVar12) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x1c;
      *(uint *)(lVar14 + 0xc) = (uint)(byte)uVar1;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0xe8) = lVar14;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar7 + 0x38);
      uVar16 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_0167ccc4:
  uVar1 = param_2[8];
  uVar9 = (uint)uVar16;
  uVar8 = uVar9;
  if (uVar9 < 0x61) {
    uVar8 = 0x60;
  }
  uVar15 = uVar16 << 5 | 8;
  lVar14 = 0;
  do {
    lVar12 = lVar14;
    if ((uVar16 - uVar8) + lVar12 == 0) goto LAB_0167cd58;
    sVar2 = *(short *)(*(long *)(lVar11 + uVar15) + 8);
    if (sVar2 == 0) goto LAB_0167cd1c;
    uVar15 = uVar15 + 0x20;
    lVar14 = lVar12 + 1;
  } while (sVar2 != 0x55);
  if ((uVar9 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_0167cd1c:
    lVar14 = *(long *)(lVar11 + (ulong)(uVar9 + (int)lVar12) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x55;
      *(uint *)(lVar14 + 0xc) = (uint)(byte)uVar1;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x2b0) = lVar14;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar7 + 0x38);
      uVar16 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_0167cd58:
  uVar9 = (uint)uVar16;
  uVar8 = uVar9;
  if (uVar9 < 0x61) {
    uVar8 = 0x60;
  }
  uVar15 = uVar16 << 5 | 8;
  lVar14 = 0;
  do {
    lVar12 = lVar14;
    if ((uVar16 - uVar8) + lVar12 == 0) goto LAB_0167cde8;
    sVar2 = *(short *)(*(long *)(lVar11 + uVar15) + 8);
    if (sVar2 == 0) goto LAB_0167cdac;
    uVar15 = uVar15 + 0x20;
    lVar14 = lVar12 + 1;
  } while (sVar2 != 0x44);
  if ((uVar9 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_0167cdac:
    lVar14 = *(long *)(lVar11 + (ulong)(uVar9 + (int)lVar12) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x44;
      *(undefined8 *)(lVar14 + 0xc) = 0;
      *(undefined4 *)(lVar14 + 0x14) = 0;
      *(undefined8 **)(lVar14 + 0x18) = param_11;
      *(undefined1 *)(lVar14 + 10) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x228) = lVar14;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar7 + 0x38);
      uVar16 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_0167cde8:
  uVar9 = (uint)uVar16;
  uVar8 = uVar9;
  if (uVar9 < 0x61) {
    uVar8 = 0x60;
  }
  uVar15 = uVar16 << 5 | 8;
  lVar14 = 0;
  do {
    lVar12 = lVar14;
    if ((uVar16 - uVar8) + lVar12 == 0) goto LAB_0167ce78;
    sVar2 = *(short *)(*(long *)(lVar11 + uVar15) + 8);
    if (sVar2 == 0) goto LAB_0167ce3c;
    uVar15 = uVar15 + 0x20;
    lVar14 = lVar12 + 1;
  } while (sVar2 != 0x3d);
  if ((uVar9 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_0167ce3c:
    lVar14 = *(long *)(lVar11 + (ulong)(uVar9 + (int)lVar12) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x3d;
      *(uint *)(lVar14 + 0xc) = uVar10;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x1f0) = lVar14;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar7 + 0x38);
      uVar16 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_0167ce78:
  uVar8 = (uint)uVar16;
  uVar10 = uVar8;
  if (uVar8 < 0x61) {
    uVar10 = 0x60;
  }
  uVar15 = uVar16 << 5 | 8;
  lVar14 = 0;
  do {
    lVar12 = lVar14;
    if ((uVar16 - uVar10) + lVar12 == 0) goto LAB_0167cf0c;
    sVar2 = *(short *)(*(long *)(lVar11 + uVar15) + 8);
    if (sVar2 == 0) goto LAB_0167cecc;
    uVar15 = uVar15 + 0x20;
    lVar14 = lVar12 + 1;
  } while (sVar2 != 0x47);
  if ((uVar8 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_0167cecc:
    lVar14 = *(long *)(lVar11 + (ulong)(uVar8 + (int)lVar12) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x47;
      *(undefined8 *)(lVar14 + 0xc) = 0;
      *(undefined8 *)(lVar14 + 0x14) = 0;
      *(undefined4 *)(lVar14 + 0x1c) = 0;
      *(undefined1 *)(lVar14 + 10) = 1;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x240) = lVar14;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar7 + 0x38);
      uVar16 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_0167cf0c:
  uVar8 = (uint)uVar16;
  uVar10 = uVar8;
  if (uVar8 < 0x61) {
    uVar10 = 0x60;
  }
  uVar15 = uVar16 << 5 | 8;
  lVar14 = 0;
  do {
    lVar12 = lVar14;
    if ((uVar16 - uVar10) + lVar12 == 0) goto LAB_0167cfa0;
    sVar2 = *(short *)(*(long *)(lVar11 + uVar15) + 8);
    if (sVar2 == 0) goto LAB_0167cf60;
    uVar15 = uVar15 + 0x20;
    lVar14 = lVar12 + 1;
  } while (sVar2 != 0x59);
  if ((uVar8 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_0167cf60:
    lVar14 = *(long *)(lVar11 + (ulong)(uVar8 + (int)lVar12) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x59;
      *(undefined8 *)(lVar14 + 0xc) = 0;
      *(undefined8 *)(lVar14 + 0x14) = 0;
      *(undefined4 *)(lVar14 + 0x1c) = 0;
      *(undefined1 *)(lVar14 + 10) = 1;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x2d0) = lVar14;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar7 + 0x38);
      uVar16 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_0167cfa0:
  uVar8 = (uint)uVar16;
  uVar10 = uVar8;
  if (uVar8 < 0x61) {
    uVar10 = 0x60;
  }
  uVar15 = uVar16 << 5 | 8;
  lVar14 = 0;
  do {
    lVar12 = lVar14;
    if ((uVar16 - uVar10) + lVar12 == 0) goto LAB_0167d034;
    sVar2 = *(short *)(*(long *)(lVar11 + uVar15) + 8);
    if (sVar2 == 0) goto LAB_0167cff4;
    uVar15 = uVar15 + 0x20;
    lVar14 = lVar12 + 1;
  } while (sVar2 != 0x75);
  if ((uVar8 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_0167cff4:
    lVar14 = *(long *)(lVar11 + (ulong)(uVar8 + (int)lVar12) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x75;
      *(undefined8 *)(lVar14 + 0xc) = 0;
      *(undefined8 *)(lVar14 + 0x14) = 0;
      *(undefined4 *)(lVar14 + 0x1c) = 0;
      *(undefined1 *)(lVar14 + 10) = 1;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x3b0) = lVar14;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar7 + 0x38);
      uVar16 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_0167d034:
  uVar10 = (uint)uVar16;
  if (uVar10 < 0x61) {
    uVar10 = 0x60;
  }
  plVar13 = (long *)(lVar11 + uVar16 * 0x20 + 8);
  do {
    uVar15 = uVar16;
    if (uVar10 == uVar15) goto LAB_0167d0b4;
    lVar14 = *plVar13;
    if (*(short *)(lVar14 + 8) == 0) goto LAB_0167d07c;
    plVar13 = plVar13 + 4;
    uVar16 = uVar15 + 1;
  } while (*(short *)(lVar14 + 8) != 0x76);
  if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_0167d07c:
    lVar11 = *(long *)(lVar11 + (uVar15 & 0xffffffff) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x76;
      *(undefined8 *)(lVar11 + 0xc) = 0;
      *(undefined8 *)(lVar11 + 0x14) = 0;
      *(undefined4 *)(lVar11 + 0x1c) = 0;
      *(undefined1 *)(lVar11 + 10) = 1;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x3b8) = lVar11;
      lVar7 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0167d0b4:
  FUN_0107b310(lVar7,param_6,8,1);
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x240);
  bVar3 = false;
  if (lVar7 != 0) {
    bVar3 = *(int *)(lVar7 + 0xc) != 0;
  }
  *(bool *)param_7 = bVar3;
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x2d0);
  bVar3 = false;
  if (lVar7 != 0) {
    bVar3 = *(int *)(lVar7 + 0xc) != 0;
  }
  *(bool *)param_8 = bVar3;
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x3b0);
  bVar3 = false;
  if (lVar7 != 0) {
    bVar3 = *(int *)(lVar7 + 0xc) != 0;
  }
  *(bool *)param_9 = bVar3;
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x3b8);
  bVar3 = false;
  if (lVar7 != 0) {
    bVar3 = *(int *)(lVar7 + 0xc) != 0;
  }
  *(bool *)param_10 = bVar3;
  lVar7 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar7 + 0x58);
  if (*(uint *)(lVar11 + 0x408) == 0) {
    uVar16 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar11 + (ulong)*(uint *)(lVar11 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar11 + 0x408) = *(int *)(lVar11 + 0x408) + -1;
    lVar11 = *(long *)(lVar7 + 0x58);
    uVar16 = (ulong)*(uint *)(lVar11 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(lVar11 + uVar16 * 0x20 + 8);
  lVar7 = *(long *)(lVar7 + 0x38);
  uVar10 = *(uint *)(lVar7 + 0xc08);
  if (uVar10 != 0) {
    if ((uVar10 & 0xffff) < 0x60) {
      uVar16 = (ulong)uVar10 & 0xffff;
      plVar13 = (long *)(lVar7 + uVar16 * 0x20 + 8);
      do {
        uVar16 = uVar16 + 1;
        if (*(short *)(*plVar13 + 8) == 0) break;
        *(undefined2 *)(*plVar13 + 8) = 0;
        plVar13 = plVar13 + 4;
      } while (((uint)uVar16 & 0xffff) != 0x60);
      uVar10 = *(uint *)(lVar7 + 0xc08);
    }
    *(uint *)(lVar7 + 0xc08) = uVar10 - 1;
    *(undefined2 *)(*(long *)(lVar7 + (ulong)(uVar10 - 1) * 0x20 + 8) + 8) = 0;
    uVar16 = (ulong)*(uint *)(lVar7 + 0xc08);
    do {
      if (uVar16 == 0) {
        return;
      }
      uVar16 = uVar16 - 1;
      *(int *)(lVar7 + 0xc08) = (int)uVar16;
    } while (*(short *)(*(long *)(lVar7 + (uVar16 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar7 + 0xc08) = (int)uVar16 + 1;
  }
  return;
}


