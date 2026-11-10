/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293798c; name: FUN_0293798c
 */


void FUN_0293798c(long param_1,long *param_2,ushort *param_3)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ushort uVar14;
  
  lVar5 = *(long *)(param_1 + 0x10);
  uVar14 = *param_3;
  lVar8 = *(long *)(lVar5 + 0x38);
  uVar6 = *(uint *)(lVar8 + 0xc08);
  if (uVar6 < 0x60) {
    do {
      lVar12 = *(long *)(lVar8 + (ulong)uVar6 * 0x20 + 8);
      if (*(short *)(lVar12 + 8) == 0) {
        if (uVar6 < 0x5f) {
          *(undefined2 *)(lVar12 + 8) = 1;
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
  uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar5 = *(long *)(lVar8 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar13 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar11 = (long *)(lVar5 + uVar13 * 0x20 + 8);
  do {
    uVar9 = uVar13;
    if (uVar6 == uVar9) goto LAB_02937ac8;
    lVar12 = *plVar11;
    if (*(short *)(lVar12 + 8) == 0) goto LAB_02937a98;
    plVar11 = plVar11 + 4;
    uVar13 = uVar9 + 1;
  } while (*(short *)(lVar12 + 8) != 2);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_02937a98:
    lVar5 = *(long *)(lVar5 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 2;
      *(undefined4 *)(lVar5 + 0xc) = uVar4;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x18) = lVar5;
    }
  }
LAB_02937ac8:
  lVar5 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar5 + 0x38);
  uVar7 = *(uint *)(lVar8 + 0xc08);
  uVar13 = (ulong)uVar7;
  uVar6 = uVar7;
  if (uVar7 < 0x61) {
    uVar6 = 0x60;
  }
  uVar9 = uVar13 << 5 | 8;
  lVar12 = -1;
  do {
    lVar10 = lVar12;
    if ((uVar13 - uVar6) + lVar10 == -1) goto LAB_02937b64;
    sVar1 = *(short *)(*(long *)(lVar8 + uVar9) + 8);
    if (sVar1 == 0) goto LAB_02937b28;
    uVar9 = uVar9 + 0x20;
    lVar12 = lVar10 + 1;
  } while (sVar1 != 0x3a);
  if (uVar7 + (int)(lVar10 + 1) < 0x60) {
LAB_02937b28:
    lVar12 = *(long *)(lVar8 + (ulong)(uVar7 + (int)lVar10 + 1) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x3a;
      *(uint *)(lVar12 + 0xc) = (uint)uVar14;
      *(undefined1 *)(lVar12 + 10) = 0;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x1d8) = lVar12;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar5 + 0x38);
      uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_02937b64:
  uVar7 = (uint)uVar13;
  uVar6 = uVar7;
  if (uVar7 < 0x61) {
    uVar6 = 0x60;
  }
  uVar9 = uVar13 << 5 | 8;
  lVar12 = 0;
  do {
    lVar10 = lVar12;
    if ((uVar13 - uVar6) + lVar10 == 0) goto LAB_02937bf4;
    sVar1 = *(short *)(*(long *)(lVar8 + uVar9) + 8);
    if (sVar1 == 0) goto LAB_02937bb8;
    uVar9 = uVar9 + 0x20;
    lVar12 = lVar10 + 1;
  } while (sVar1 != 0x3b);
  if ((uVar7 + (int)(lVar10 + 1)) - 1 < 0x60) {
LAB_02937bb8:
    lVar12 = *(long *)(lVar8 + (ulong)(uVar7 + (int)lVar10) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x3b;
      *(undefined1 *)(lVar12 + 10) = 0;
      *(undefined8 *)(lVar12 + 0xc) = 0;
      *(undefined8 *)(lVar12 + 0x14) = 0;
      *(undefined4 *)(lVar12 + 0x1c) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x1e0) = lVar12;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar5 + 0x38);
      uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_02937bf4:
  uVar6 = (uint)uVar13;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar11 = (long *)(lVar8 + uVar13 * 0x20 + 8);
  do {
    uVar9 = uVar13;
    if (uVar6 == uVar9) goto LAB_02937c70;
    lVar12 = *plVar11;
    if (*(short *)(lVar12 + 8) == 0) goto LAB_02937c3c;
    plVar11 = plVar11 + 4;
    uVar13 = uVar9 + 1;
  } while (*(short *)(lVar12 + 8) != 0x3c);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_02937c3c:
    lVar8 = *(long *)(lVar8 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 0x3c;
      *(undefined1 *)(lVar8 + 10) = 0;
      *(undefined8 *)(lVar8 + 0xc) = 0;
      *(undefined8 *)(lVar8 + 0x14) = 0;
      *(undefined4 *)(lVar8 + 0x1c) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x1e8) = lVar8;
      lVar5 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02937c70:
  FUN_0107b310(lVar5,0x15,8,1);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar8 + 0x78);
  if (*(long *)(lVar5 + 0x1d8) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = (ushort)*(undefined4 *)(*(long *)(lVar5 + 0x1d8) + 0xc);
  }
  if (*(long *)(lVar5 + 0x1e0) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(*(long *)(lVar5 + 0x1e0) + 0xc) != 0;
  }
  if (*(long *)(lVar5 + 0x1e8) == 0) {
    bVar3 = true;
  }
  else {
    bVar3 = *(int *)(*(long *)(lVar5 + 0x1e8) + 0xc) == 0;
  }
  lVar5 = *(long *)(lVar8 + 0x58);
  if (*(uint *)(lVar5 + 0x408) == 0) {
    uVar13 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar5 + 0x408) = *(int *)(lVar5 + 0x408) + -1;
    lVar5 = *(long *)(lVar8 + 0x58);
    uVar13 = (ulong)*(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar8 + 0x78) = *(undefined8 *)(lVar5 + uVar13 * 0x20 + 8);
  lVar5 = *(long *)(lVar8 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  if (uVar6 != 0) {
    if ((uVar6 & 0xffff) < 0x60) {
      uVar13 = (ulong)uVar6 & 0xffff;
      plVar11 = (long *)(lVar5 + uVar13 * 0x20 + 8);
      do {
        uVar13 = uVar13 + 1;
        if (*(short *)(*plVar11 + 8) == 0) break;
        *(undefined2 *)(*plVar11 + 8) = 0;
        plVar11 = plVar11 + 4;
      } while (((uint)uVar13 & 0xffff) != 0x60);
      uVar6 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar6 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar6 - 1) * 0x20 + 8) + 8) = 0;
    uVar13 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar13 == 0) goto LAB_02937d94;
      uVar13 = uVar13 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar13;
    } while (*(short *)(*(long *)(lVar5 + (uVar13 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar13 + 1;
  }
LAB_02937d94:
  if ((bool)(bVar2 | bVar3 ^ 1U)) {
    if (!bVar3) {
      uVar14 = 0;
    }
    *param_3 = uVar14;
  }
  return;
}


