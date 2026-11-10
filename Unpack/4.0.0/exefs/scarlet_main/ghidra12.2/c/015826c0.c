/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015826c0; name: FUN_015826c0
 */


undefined4
FUN_015826c0(long param_1,long *param_2,uint param_3,undefined4 param_4,long param_5,long param_6)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  
  if (param_5 == 0) {
    uVar3 = 0;
    uVar8 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_5 + 0xc);
    uVar8 = (uint)*(byte *)(param_5 + 9);
  }
  if (param_6 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = (uint)*(byte *)(param_6 + 0xa6);
  }
  lVar4 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar4 + 0x38);
  uVar5 = *(uint *)(lVar6 + 0xc08);
  if (uVar5 < 0x60) {
    do {
      lVar10 = *(long *)(lVar6 + (ulong)uVar5 * 0x20 + 8);
      if (*(short *)(lVar10 + 8) == 0) {
        if (uVar5 < 0x5f) {
          *(undefined2 *)(lVar10 + 8) = 1;
          *(int *)(lVar6 + 0xc08) = *(int *)(lVar6 + 0xc08) + 1;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(lVar6 + 0xc08) = uVar5;
    } while (uVar5 != 0x60);
  }
  lVar6 = *(long *)(lVar4 + 0x58);
  uVar5 = *(uint *)(lVar6 + 0x408);
  if (uVar5 < 0x1f) {
    *(uint *)(lVar6 + 0x408) = uVar5 + 1;
    lVar6 = *(long *)(lVar4 + 0x58);
    uVar5 = *(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar6 + (ulong)uVar5 * 0x20 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar6 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  uVar12 = (ulong)uVar5;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar9 = (long *)(lVar4 + uVar12 * 0x20 + 8);
  do {
    uVar13 = uVar12;
    if (uVar5 == uVar13) goto LAB_01582814;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_015827e0;
    plVar9 = plVar9 + 4;
    uVar12 = uVar13 + 1;
  } while (*(short *)(lVar10 + 8) != 0x12);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_015827e0:
    lVar4 = *(long *)(lVar4 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar4 != 0) {
      *(uint *)(lVar4 + 0xc) = param_3 & 0xffff;
      *(undefined2 *)(lVar4 + 8) = 0x12;
      *(undefined1 *)(lVar4 + 10) = 4;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x98) = lVar4;
      lVar6 = *(long *)(param_1 + 0x10);
    }
  }
LAB_01582814:
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar4 = *(long *)(lVar6 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  uVar12 = (ulong)uVar5;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar9 = (long *)(lVar4 + uVar12 * 0x20 + 8);
  do {
    uVar13 = uVar12;
    if (uVar5 == uVar13) goto LAB_015828a4;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_01582874;
    plVar9 = plVar9 + 4;
    uVar12 = uVar13 + 1;
  } while (*(short *)(lVar10 + 8) != 2);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_01582874:
    lVar4 = *(long *)(lVar4 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar4 != 0) {
      *(undefined2 *)(lVar4 + 8) = 2;
      *(undefined4 *)(lVar4 + 0xc) = uVar2;
      *(undefined1 *)(lVar4 + 10) = 4;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x18) = lVar4;
    }
  }
LAB_015828a4:
  lVar4 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar4 + 0x38);
  uVar7 = *(uint *)(lVar6 + 0xc08);
  uVar12 = (ulong)uVar7;
  uVar5 = uVar7;
  if (uVar7 < 0x61) {
    uVar5 = 0x60;
  }
  uVar13 = uVar12 << 5 | 8;
  lVar10 = -1;
  do {
    lVar11 = lVar10;
    if ((uVar12 - uVar5) + lVar11 == -1) goto LAB_01582944;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar13) + 8);
    if (sVar1 == 0) goto LAB_01582904;
    uVar13 = uVar13 + 0x20;
    lVar10 = lVar11 + 1;
  } while (sVar1 != 0x19);
  if (uVar7 + (int)(lVar11 + 1) < 0x60) {
LAB_01582904:
    lVar10 = *(long *)(lVar6 + (ulong)(uVar7 + (int)lVar11 + 1) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x19;
      *(undefined4 *)(lVar10 + 0xc) = uVar3;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0xd0) = lVar10;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar4 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_01582944:
  uVar7 = (uint)uVar12;
  uVar5 = uVar7;
  if (uVar7 < 0x61) {
    uVar5 = 0x60;
  }
  uVar13 = uVar12 << 5 | 8;
  lVar10 = 0;
  do {
    lVar11 = lVar10;
    if ((uVar12 - uVar5) + lVar11 == 0) goto LAB_015829d4;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar13) + 8);
    if (sVar1 == 0) goto LAB_01582998;
    uVar13 = uVar13 + 0x20;
    lVar10 = lVar11 + 1;
  } while (sVar1 != 0x1b);
  if ((uVar7 + (int)(lVar11 + 1)) - 1 < 0x60) {
LAB_01582998:
    lVar10 = *(long *)(lVar6 + (ulong)(uVar7 + (int)lVar11) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x1b;
      *(uint *)(lVar10 + 0xc) = uVar8;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0xe0) = lVar10;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar4 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_015829d4:
  uVar5 = (uint)uVar12;
  uVar8 = uVar5;
  if (uVar5 < 0x61) {
    uVar8 = 0x60;
  }
  uVar13 = uVar12 << 5 | 8;
  lVar10 = 0;
  do {
    lVar11 = lVar10;
    if ((uVar12 - uVar8) + lVar11 == 0) goto LAB_01582a68;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar13) + 8);
    if (sVar1 == 0) goto LAB_01582a28;
    uVar13 = uVar13 + 0x20;
    lVar10 = lVar11 + 1;
  } while (sVar1 != 0x25);
  if ((uVar5 + (int)(lVar11 + 1)) - 1 < 0x60) {
LAB_01582a28:
    lVar10 = *(long *)(lVar6 + (ulong)(uVar5 + (int)lVar11) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x25;
      *(undefined8 *)(lVar10 + 0xc) = 0;
      *(undefined8 *)(lVar10 + 0x14) = 0;
      *(undefined4 *)(lVar10 + 0x1c) = 0;
      *(undefined1 *)(lVar10 + 10) = 1;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x130) = lVar10;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar4 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_01582a68:
  uVar8 = (uint)uVar12;
  if (uVar8 < 0x61) {
    uVar8 = 0x60;
  }
  plVar9 = (long *)(lVar6 + uVar12 * 0x20 + 8);
  do {
    uVar13 = uVar12;
    if (uVar8 == uVar13) goto LAB_01582ae0;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_01582ab0;
    plVar9 = plVar9 + 4;
    uVar12 = uVar13 + 1;
  } while (*(short *)(lVar10 + 8) != 5);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_01582ab0:
    lVar6 = *(long *)(lVar6 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 5;
      *(uint *)(lVar6 + 0xc) = uVar15;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x30) = lVar6;
    }
  }
LAB_01582ae0:
  if (uVar15 != 0) {
    uVar12 = 0;
    do {
      uVar8 = (int)uVar12 + 6;
      lVar6 = *(long *)(param_1 + 0x10);
      uVar3 = (**(code **)(**(long **)(param_6 + uVar12 * 8) + 0x98))();
      lVar4 = *(long *)(lVar6 + 0x38);
      uVar5 = *(uint *)(lVar4 + 0xc08);
      uVar13 = (ulong)uVar5;
      if (uVar5 < 0x61) {
        uVar5 = 0x60;
      }
      plVar9 = (long *)(lVar4 + uVar13 * 0x20 + 8);
      do {
        uVar14 = uVar13;
        if (uVar5 == uVar14) goto LAB_01582d38;
        lVar10 = *plVar9;
        if (*(ushort *)(lVar10 + 8) == 0) goto LAB_01582d04;
        plVar9 = plVar9 + 4;
        uVar13 = uVar14 + 1;
      } while (*(ushort *)(lVar10 + 8) != uVar8);
      if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_01582d04:
        lVar4 = *(long *)(lVar4 + (uVar14 & 0xffffffff) * 0x20 + 8);
        if (lVar4 != 0) {
          *(short *)(lVar4 + 8) = (short)uVar8;
          *(undefined4 *)(lVar4 + 0xc) = uVar3;
          *(undefined1 *)(lVar4 + 10) = 4;
          *(undefined8 *)(lVar4 + 0x10) = 0;
          *(undefined8 *)(lVar4 + 0x18) = 0;
          if (-1 < (char)uVar12) {
            *(long *)(*(long *)(lVar6 + 0x78) + (ulong)uVar8 * 8 + 8) = lVar4;
          }
        }
      }
LAB_01582d38:
      uVar8 = (int)uVar12 + 1;
      uVar12 = (ulong)(uVar8 & 0xff);
    } while ((uVar8 & 0xff) < uVar15);
  }
  if (param_5 != 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    lVar6 = *(long *)(lVar4 + 0x38);
    uVar8 = *(uint *)(lVar6 + 0xc08);
    uVar12 = (ulong)uVar8;
    if (uVar8 < 0x61) {
      uVar8 = 0x60;
    }
    plVar9 = (long *)(lVar6 + uVar12 * 0x20 + 8);
    do {
      uVar13 = uVar12;
      if (uVar8 == uVar13) goto LAB_01582b70;
      lVar10 = *plVar9;
      if (*(short *)(lVar10 + 8) == 0) goto LAB_01582b40;
      plVar9 = plVar9 + 4;
      uVar12 = uVar13 + 1;
    } while (*(short *)(lVar10 + 8) != 0x16);
    if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_01582b40:
      lVar6 = *(long *)(lVar6 + (uVar13 & 0xffffffff) * 0x20 + 8);
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 0xc) = (uint)*(byte *)(param_5 + 8);
        *(undefined2 *)(lVar6 + 8) = 0x16;
        *(undefined1 *)(lVar6 + 10) = 4;
        *(undefined8 *)(lVar6 + 0x10) = 0;
        *(undefined8 *)(lVar6 + 0x18) = 0;
        *(long *)(*(long *)(lVar4 + 0x78) + 0xb8) = lVar6;
      }
    }
  }
LAB_01582b70:
  FUN_0107b310(*(undefined8 *)(param_1 + 0x10),param_4,8,1);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(*(long *)(lVar6 + 0x78) + 0x130);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(lVar4 + 0xc);
  }
  lVar4 = *(long *)(lVar6 + 0x58);
  if (*(uint *)(lVar4 + 0x408) == 0) {
    uVar12 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar4 + (ulong)*(uint *)(lVar4 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar4 + 0x408) = *(int *)(lVar4 + 0x408) + -1;
    lVar4 = *(long *)(lVar6 + 0x58);
    uVar12 = (ulong)*(uint *)(lVar4 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar4 + uVar12 * 0x20 + 8);
  lVar4 = *(long *)(lVar6 + 0x38);
  uVar8 = *(uint *)(lVar4 + 0xc08);
  if (uVar8 != 0) {
    if ((uVar8 & 0xffff) < 0x60) {
      uVar12 = (ulong)uVar8 & 0xffff;
      plVar9 = (long *)(lVar4 + uVar12 * 0x20 + 8);
      do {
        uVar12 = uVar12 + 1;
        if (*(short *)(*plVar9 + 8) == 0) break;
        *(undefined2 *)(*plVar9 + 8) = 0;
        plVar9 = plVar9 + 4;
      } while (((uint)uVar12 & 0xffff) != 0x60);
      uVar8 = *(uint *)(lVar4 + 0xc08);
    }
    *(uint *)(lVar4 + 0xc08) = uVar8 - 1;
    *(undefined2 *)(*(long *)(lVar4 + (ulong)(uVar8 - 1) * 0x20 + 8) + 8) = 0;
    uVar12 = (ulong)*(uint *)(lVar4 + 0xc08);
    do {
      if (uVar12 == 0) {
        return uVar3;
      }
      uVar12 = uVar12 - 1;
      *(int *)(lVar4 + 0xc08) = (int)uVar12;
    } while (*(short *)(*(long *)(lVar4 + (uVar12 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar4 + 0xc08) = (int)uVar12 + 1;
  }
  return uVar3;
}


