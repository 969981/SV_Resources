/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02931c94; name: FUN_02931c94
 */


bool FUN_02931c94(long param_1,long *param_2,ushort *param_3,uint param_4,long param_5)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar4 + 0x38);
  uVar5 = *(uint *)(lVar8 + 0xc08);
  if (uVar5 < 0x60) {
    do {
      lVar10 = *(long *)(lVar8 + (ulong)uVar5 * 0x20 + 8);
      if (*(short *)(lVar10 + 8) == 0) {
        if (uVar5 < 0x5f) {
          *(undefined2 *)(lVar10 + 8) = 1;
          *(int *)(lVar8 + 0xc08) = *(int *)(lVar8 + 0xc08) + 1;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(lVar8 + 0xc08) = uVar5;
    } while (uVar5 != 0x60);
  }
  lVar8 = *(long *)(lVar4 + 0x58);
  uVar5 = *(uint *)(lVar8 + 0x408);
  if (uVar5 < 0x1f) {
    *(uint *)(lVar8 + 0x408) = uVar5 + 1;
    lVar8 = *(long *)(lVar4 + 0x58);
    uVar5 = *(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar8 + (ulong)uVar5 * 0x20 + 8);
  lVar8 = *(long *)(param_1 + 0x10);
  uVar3 = (**(code **)(*param_2 + 0x98))();
  lVar4 = *(long *)(lVar8 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  uVar13 = (ulong)uVar5;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar9 = (long *)(lVar4 + uVar13 * 0x20 + 8);
  do {
    uVar11 = uVar13;
    if (uVar5 == uVar11) goto LAB_02931dd4;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_02931da4;
    plVar9 = plVar9 + 4;
    uVar13 = uVar11 + 1;
  } while (*(short *)(lVar10 + 8) != 2);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_02931da4:
    lVar4 = *(long *)(lVar4 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar4 != 0) {
      *(undefined2 *)(lVar4 + 8) = 2;
      *(undefined4 *)(lVar4 + 0xc) = uVar3;
      *(undefined1 *)(lVar4 + 10) = 4;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x18) = lVar4;
    }
  }
LAB_02931dd4:
  lVar4 = *(long *)(param_1 + 0x10);
  uVar1 = *param_3;
  lVar8 = *(long *)(lVar4 + 0x38);
  uVar6 = *(uint *)(lVar8 + 0xc08);
  uVar13 = (ulong)uVar6;
  uVar5 = uVar6;
  if (uVar6 < 0x61) {
    uVar5 = 0x60;
  }
  uVar11 = uVar13 << 5 | 8;
  lVar10 = -1;
  do {
    lVar12 = lVar10;
    if ((uVar13 - uVar5) + lVar12 == -1) goto LAB_02931e78;
    sVar2 = *(short *)(*(long *)(lVar8 + uVar11) + 8);
    if (sVar2 == 0) goto LAB_02931e38;
    uVar11 = uVar11 + 0x20;
    lVar10 = lVar12 + 1;
  } while (sVar2 != 0x12);
  if (uVar6 + (int)(lVar12 + 1) < 0x60) {
LAB_02931e38:
    lVar10 = *(long *)(lVar8 + (ulong)(uVar6 + (int)lVar12 + 1) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x12;
      *(uint *)(lVar10 + 0xc) = (uint)uVar1;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x98) = lVar10;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar4 + 0x38);
      uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_02931e78:
  uVar1 = param_3[4];
  uVar6 = (uint)uVar13;
  uVar5 = uVar6;
  if (uVar6 < 0x61) {
    uVar5 = 0x60;
  }
  uVar11 = uVar13 << 5 | 8;
  lVar10 = 0;
  do {
    lVar12 = lVar10;
    if ((uVar13 - uVar5) + lVar12 == 0) goto LAB_02931f0c;
    sVar2 = *(short *)(*(long *)(lVar8 + uVar11) + 8);
    if (sVar2 == 0) goto LAB_02931ed0;
    uVar11 = uVar11 + 0x20;
    lVar10 = lVar12 + 1;
  } while (sVar2 != 0x16);
  if ((uVar6 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_02931ed0:
    lVar10 = *(long *)(lVar8 + (ulong)(uVar6 + (int)lVar12) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x16;
      *(uint *)(lVar10 + 0xc) = (uint)(byte)uVar1;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0xb8) = lVar10;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar4 + 0x38);
      uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_02931f0c:
  uVar6 = (uint)uVar13;
  uVar5 = uVar6;
  if (uVar6 < 0x61) {
    uVar5 = 0x60;
  }
  uVar11 = uVar13 << 5 | 8;
  lVar10 = 0;
  do {
    lVar12 = lVar10;
    if ((uVar13 - uVar5) + lVar12 == 0) goto LAB_02931fa0;
    sVar2 = *(short *)(*(long *)(lVar8 + uVar11) + 8);
    if (sVar2 == 0) goto LAB_02931f64;
    uVar11 = uVar11 + 0x20;
    lVar10 = lVar12 + 1;
  } while (sVar2 != 0x59);
  if ((uVar6 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_02931f64:
    lVar10 = *(long *)(lVar8 + (ulong)(uVar6 + (int)lVar12) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x59;
      *(uint *)(lVar10 + 0xc) = param_4 & 1;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x2d0) = lVar10;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar4 + 0x38);
      uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_02931fa0:
  uVar6 = *(uint *)(param_5 + 4);
  uVar7 = (uint)uVar13;
  uVar5 = uVar7;
  if (uVar7 < 0x61) {
    uVar5 = 0x60;
  }
  uVar11 = uVar13 << 5 | 8;
  lVar10 = 0;
  do {
    lVar12 = lVar10;
    if ((uVar13 - uVar5) + lVar12 == 0) goto LAB_02932038;
    sVar2 = *(short *)(*(long *)(lVar8 + uVar11) + 8);
    if (sVar2 == 0) goto LAB_02931ffc;
    uVar11 = uVar11 + 0x20;
    lVar10 = lVar12 + 1;
  } while (sVar2 != 0x71);
  if ((uVar7 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_02931ffc:
    lVar10 = *(long *)(lVar8 + (ulong)(uVar7 + (int)lVar12) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x71;
      *(uint *)(lVar10 + 0xc) = uVar6 >> 3 & 1;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x390) = lVar10;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar4 + 0x38);
      uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_02932038:
  uVar5 = (uint)uVar13;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar9 = (long *)(lVar8 + uVar13 * 0x20 + 8);
  do {
    uVar11 = uVar13;
    if (uVar5 == uVar11) goto LAB_029320b4;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_02932080;
    plVar9 = plVar9 + 4;
    uVar13 = uVar11 + 1;
  } while (*(short *)(lVar10 + 8) != 0x73);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_02932080:
    lVar8 = *(long *)(lVar8 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 0x73;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(undefined4 *)(lVar8 + 0xc) = 1;
      *(undefined1 *)(lVar8 + 10) = 1;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x3a0) = lVar8;
      lVar4 = *(long *)(param_1 + 0x10);
    }
  }
LAB_029320b4:
  FUN_0107b310(lVar4,0xf1,8,1);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(*(long *)(lVar8 + 0x78) + 0x3a0);
  if (lVar4 == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = *(int *)(lVar4 + 0xc);
  }
  lVar4 = *(long *)(lVar8 + 0x58);
  if (*(uint *)(lVar4 + 0x408) == 0) {
    uVar13 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar4 + (ulong)*(uint *)(lVar4 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar4 + 0x408) = *(int *)(lVar4 + 0x408) + -1;
    lVar4 = *(long *)(lVar8 + 0x58);
    uVar13 = (ulong)*(uint *)(lVar4 + 0x408);
  }
  *(undefined8 *)(lVar8 + 0x78) = *(undefined8 *)(lVar4 + uVar13 * 0x20 + 8);
  lVar4 = *(long *)(lVar8 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  if (uVar5 != 0) {
    if ((uVar5 & 0xffff) < 0x60) {
      uVar13 = (ulong)uVar5 & 0xffff;
      plVar9 = (long *)(lVar4 + uVar13 * 0x20 + 8);
      do {
        uVar13 = uVar13 + 1;
        if (*(short *)(*plVar9 + 8) == 0) break;
        *(undefined2 *)(*plVar9 + 8) = 0;
        plVar9 = plVar9 + 4;
      } while (((uint)uVar13 & 0xffff) != 0x60);
      uVar5 = *(uint *)(lVar4 + 0xc08);
    }
    *(uint *)(lVar4 + 0xc08) = uVar5 - 1;
    *(undefined2 *)(*(long *)(lVar4 + (ulong)(uVar5 - 1) * 0x20 + 8) + 8) = 0;
    uVar13 = (ulong)*(uint *)(lVar4 + 0xc08);
    do {
      if (uVar13 == 0) goto LAB_029321b0;
      uVar13 = uVar13 - 1;
      *(int *)(lVar4 + 0xc08) = (int)uVar13;
    } while (*(short *)(*(long *)(lVar4 + (uVar13 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar4 + 0xc08) = (int)uVar13 + 1;
  }
LAB_029321b0:
  return iVar14 != 0;
}


