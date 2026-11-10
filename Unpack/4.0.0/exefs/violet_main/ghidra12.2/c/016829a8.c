/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016829a8; name: FUN_016829a8
 */


bool FUN_016829a8(long param_1,long *param_2,long param_3,undefined8 param_4,undefined4 *param_5,
                 undefined8 param_6)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar5 + 0x38);
  uVar6 = *(uint *)(lVar8 + 0xc08);
  bVar1 = *(byte *)(param_3 + 0xa6);
  if (uVar6 < 0x60) {
    do {
      lVar11 = *(long *)(lVar8 + (ulong)uVar6 * 0x20 + 8);
      if (*(short *)(lVar11 + 8) == 0) {
        if (uVar6 < 0x5f) {
          *(undefined2 *)(lVar11 + 8) = 1;
          *(int *)(lVar8 + 0xc08) = *(int *)(lVar8 + 0xc08) + 1;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      *(uint *)(lVar8 + 0xc08) = uVar6;
    } while (uVar6 != 0x60);
  }
  lVar8 = *(long *)(lVar5 + 0x58);
  uVar6 = *(uint *)(lVar8 + 0x408);
  if (uVar6 < 0x1f) {
    *(uint *)(lVar8 + 0x408) = uVar6 + 1;
    lVar8 = *(long *)(lVar5 + 0x58);
    uVar6 = *(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar8 + (ulong)uVar6 * 0x20 + 8);
  lVar8 = *(long *)(param_1 + 0x10);
  uVar4 = (**(code **)(*param_2 + 0x98))();
  lVar5 = *(long *)(lVar8 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar12 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar10 = (long *)(lVar5 + uVar12 * 0x20 + 8);
  do {
    uVar13 = uVar12;
    if (uVar6 == uVar13) goto LAB_01682afc;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_01682acc;
    plVar10 = plVar10 + 4;
    uVar12 = uVar13 + 1;
  } while (*(short *)(lVar11 + 8) != 3);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_01682acc:
    lVar5 = *(long *)(lVar5 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 3;
      *(undefined4 *)(lVar5 + 0xc) = uVar4;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x20) = lVar5;
    }
  }
LAB_01682afc:
  lVar5 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar5 + 0x38);
  uVar6 = *(uint *)(lVar8 + 0xc08);
  uVar12 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar10 = (long *)(lVar8 + uVar12 * 0x20 + 8);
  do {
    uVar13 = uVar12;
    if (uVar6 == uVar13) goto LAB_01682b80;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_01682b50;
    plVar10 = plVar10 + 4;
    uVar12 = uVar13 + 1;
  } while (*(short *)(lVar11 + 8) != 5);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_01682b50:
    lVar8 = *(long *)(lVar8 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 5;
      *(uint *)(lVar8 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar8 + 10) = 4;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x30) = lVar8;
    }
  }
LAB_01682b80:
  if (bVar1 == 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    lVar8 = *(long *)(lVar5 + 0x38);
    uVar6 = *(uint *)(lVar8 + 0xc08);
    uVar12 = (ulong)uVar6;
    if (uVar6 < 0x61) {
      uVar6 = 0x60;
    }
    plVar10 = (long *)(lVar8 + uVar12 * 0x20 + 8);
    do {
      uVar13 = uVar12;
      if (uVar6 == uVar13) goto LAB_01682c38;
      lVar11 = *plVar10;
      if (*(short *)(lVar11 + 8) == 0) goto LAB_0168303c;
      plVar10 = plVar10 + 4;
      uVar12 = uVar13 + 1;
    } while (*(short *)(lVar11 + 8) != 6);
    if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_0168303c:
      lVar8 = *(long *)(lVar8 + (uVar13 & 0xffffffff) * 0x20 + 8);
      if (lVar8 != 0) {
        *(undefined2 *)(lVar8 + 8) = 6;
        *(undefined8 *)(lVar8 + 0xc) = 0;
        *(undefined8 *)(lVar8 + 0x14) = 0;
        *(undefined4 *)(lVar8 + 0x1c) = 0;
        *(undefined1 *)(lVar8 + 10) = 4;
        *(long *)(*(long *)(lVar5 + 0x78) + 0x38) = lVar8;
      }
    }
  }
  else {
    uVar12 = 0;
    do {
      uVar6 = (int)uVar12 + 6;
      lVar8 = *(long *)(param_1 + 0x10);
      uVar4 = (**(code **)(**(long **)(param_3 + uVar12 * 8) + 0x98))();
      lVar5 = *(long *)(lVar8 + 0x38);
      uVar7 = *(uint *)(lVar5 + 0xc08);
      uVar13 = (ulong)uVar7;
      if (uVar7 < 0x61) {
        uVar7 = 0x60;
      }
      plVar10 = (long *)(lVar5 + uVar13 * 0x20 + 8);
      do {
        uVar14 = uVar13;
        if (uVar7 == uVar14) goto LAB_01682c2c;
        lVar11 = *plVar10;
        if (*(ushort *)(lVar11 + 8) == 0) goto LAB_01682bf4;
        plVar10 = plVar10 + 4;
        uVar13 = uVar14 + 1;
      } while ((uint)*(ushort *)(lVar11 + 8) != (uVar6 & 0xffff));
      if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_01682bf4:
        lVar5 = *(long *)(lVar5 + (uVar14 & 0xffffffff) * 0x20 + 8);
        if (lVar5 != 0) {
          *(ushort *)(lVar5 + 8) = (ushort)uVar6;
          *(undefined4 *)(lVar5 + 0xc) = uVar4;
          *(undefined1 *)(lVar5 + 10) = 4;
          *(undefined8 *)(lVar5 + 0x10) = 0;
          *(undefined8 *)(lVar5 + 0x18) = 0;
          if ((uVar6 & 0xffff) < 0x86) {
            *(long *)(*(long *)(lVar8 + 0x78) + (ulong)(ushort)uVar6 * 8 + 8) = lVar5;
          }
        }
      }
LAB_01682c2c:
      uVar12 = uVar12 + 1;
    } while (uVar12 != bVar1);
  }
LAB_01682c38:
  lVar5 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar5 + 0x38);
  uVar7 = *(uint *)(lVar8 + 0xc08);
  uVar12 = (ulong)uVar7;
  uVar6 = uVar7;
  if (uVar7 < 0x61) {
    uVar6 = 0x60;
  }
  uVar13 = uVar12 << 5 | 8;
  lVar11 = -1;
  do {
    lVar9 = lVar11;
    if ((uVar12 - uVar6) + lVar9 == -1) goto LAB_01682cdc;
    sVar2 = *(short *)(*(long *)(lVar8 + uVar13) + 8);
    if (sVar2 == 0) goto LAB_01682c98;
    uVar13 = uVar13 + 0x20;
    lVar11 = lVar9 + 1;
  } while (sVar2 != 0x48);
  if (uVar7 + (int)(lVar9 + 1) < 0x60) {
LAB_01682c98:
    lVar11 = *(long *)(lVar8 + (ulong)(uVar7 + (int)lVar9 + 1) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x48;
      *(undefined8 *)(lVar11 + 0xc) = 0;
      *(undefined8 *)(lVar11 + 0x14) = 0;
      *(undefined4 *)(lVar11 + 0x1c) = 0;
      *(undefined1 *)(lVar11 + 10) = 1;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x248) = lVar11;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar5 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_01682cdc:
  uVar7 = (uint)uVar12;
  uVar6 = uVar7;
  if (uVar7 < 0x61) {
    uVar6 = 0x60;
  }
  uVar13 = uVar12 << 5 | 8;
  lVar11 = 0;
  do {
    lVar9 = lVar11;
    if ((uVar12 - uVar6) + lVar9 == 0) goto LAB_01682d70;
    sVar2 = *(short *)(*(long *)(lVar8 + uVar13) + 8);
    if (sVar2 == 0) goto LAB_01682d30;
    uVar13 = uVar13 + 0x20;
    lVar11 = lVar9 + 1;
  } while (sVar2 != 0x59);
  if ((uVar7 + (int)(lVar9 + 1)) - 1 < 0x60) {
LAB_01682d30:
    lVar11 = *(long *)(lVar8 + (ulong)(uVar7 + (int)lVar9) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x59;
      *(undefined8 *)(lVar11 + 0xc) = 0;
      *(undefined8 *)(lVar11 + 0x14) = 0;
      *(undefined4 *)(lVar11 + 0x1c) = 0;
      *(undefined1 *)(lVar11 + 10) = 1;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x2d0) = lVar11;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar5 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_01682d70:
  uVar7 = (uint)uVar12;
  uVar6 = uVar7;
  if (uVar7 < 0x61) {
    uVar6 = 0x60;
  }
  uVar13 = uVar12 << 5 | 8;
  lVar11 = 0;
  do {
    lVar9 = lVar11;
    if ((uVar12 - uVar6) + lVar9 == 0) goto LAB_01682e04;
    sVar2 = *(short *)(*(long *)(lVar8 + uVar13) + 8);
    if (sVar2 == 0) goto LAB_01682dc4;
    uVar13 = uVar13 + 0x20;
    lVar11 = lVar9 + 1;
  } while (sVar2 != 0x56);
  if ((uVar7 + (int)(lVar9 + 1)) - 1 < 0x60) {
LAB_01682dc4:
    lVar11 = *(long *)(lVar8 + (ulong)(uVar7 + (int)lVar9) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x56;
      *(undefined8 *)(lVar11 + 0xc) = 0;
      *(undefined8 *)(lVar11 + 0x14) = 0;
      *(undefined4 *)(lVar11 + 0x1c) = 0;
      *(undefined1 *)(lVar11 + 10) = 1;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x2b8) = lVar11;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar5 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_01682e04:
  uVar6 = (uint)uVar12;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar10 = (long *)(lVar8 + uVar12 * 0x20 + 8);
  do {
    uVar13 = uVar12;
    if (uVar6 == uVar13) goto LAB_01682e84;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_01682e4c;
    plVar10 = plVar10 + 4;
    uVar12 = uVar13 + 1;
  } while (*(short *)(lVar11 + 8) != 0x44);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_01682e4c:
    lVar8 = *(long *)(lVar8 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 0x44;
      *(undefined8 *)(lVar8 + 0xc) = 0;
      *(undefined4 *)(lVar8 + 0x14) = 0;
      *(undefined8 *)(lVar8 + 0x18) = param_4;
      *(undefined1 *)(lVar8 + 10) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x228) = lVar8;
      lVar5 = *(long *)(param_1 + 0x10);
    }
  }
LAB_01682e84:
  FUN_0107b310(lVar5,0xc0,8,1);
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x78);
  lVar8 = *(long *)(lVar5 + 0x2d0);
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0xc) == 0)) {
    uVar4 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x38);
    uVar4 = 0;
    if (lVar5 != 0) {
      uVar4 = *(undefined4 *)(lVar5 + 0xc);
    }
  }
  *param_5 = uVar4;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x2b8);
  bVar3 = false;
  if (lVar5 != 0) {
    bVar3 = *(int *)(lVar5 + 0xc) != 0;
  }
  *(bool *)param_6 = bVar3;
  lVar8 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(*(long *)(lVar8 + 0x78) + 0x248);
  if (lVar5 == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = *(int *)(lVar5 + 0xc);
  }
  lVar5 = *(long *)(lVar8 + 0x58);
  if (*(uint *)(lVar5 + 0x408) == 0) {
    uVar12 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar5 + 0x408) = *(int *)(lVar5 + 0x408) + -1;
    lVar5 = *(long *)(lVar8 + 0x58);
    uVar12 = (ulong)*(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar8 + 0x78) = *(undefined8 *)(lVar5 + uVar12 * 0x20 + 8);
  lVar5 = *(long *)(lVar8 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  if (uVar6 != 0) {
    if ((uVar6 & 0xffff) < 0x60) {
      uVar12 = (ulong)uVar6 & 0xffff;
      plVar10 = (long *)(lVar5 + uVar12 * 0x20 + 8);
      do {
        uVar12 = uVar12 + 1;
        if (*(short *)(*plVar10 + 8) == 0) break;
        *(undefined2 *)(*plVar10 + 8) = 0;
        plVar10 = plVar10 + 4;
      } while (((uint)uVar12 & 0xffff) != 0x60);
      uVar6 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar6 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar6 - 1) * 0x20 + 8) + 8) = 0;
    uVar12 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar12 == 0) goto LAB_01682fc0;
      uVar12 = uVar12 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar12;
    } while (*(short *)(*(long *)(lVar5 + (uVar12 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar12 + 1;
  }
LAB_01682fc0:
  return iVar15 == 0;
}


