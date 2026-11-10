/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124f6fc; name: FUN_0124f6fc
 */


undefined4 FUN_0124f6fc(long param_1,undefined4 param_2,undefined2 *param_3)

{
  short sVar1;
  undefined2 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined4 uVar12;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar3 + 0x38);
  uVar5 = *(uint *)(lVar6 + 0xc08);
  if (uVar5 < 0x60) {
    do {
      lVar11 = *(long *)(lVar6 + (ulong)uVar5 * 0x20 + 8);
      if (*(short *)(lVar11 + 8) == 0) {
        if (uVar5 < 0x5f) {
          *(undefined2 *)(lVar11 + 8) = 1;
          *(int *)(lVar6 + 0xc08) = *(int *)(lVar6 + 0xc08) + 1;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(lVar6 + 0xc08) = uVar5;
    } while (uVar5 != 0x60);
  }
  lVar6 = *(long *)(lVar3 + 0x58);
  uVar5 = *(uint *)(lVar6 + 0x408);
  if (uVar5 < 0x1f) {
    *(uint *)(lVar6 + 0x408) = uVar5 + 1;
    lVar6 = *(long *)(lVar3 + 0x58);
    uVar5 = *(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(lVar6 + (ulong)uVar5 * 0x20 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar3 + 0x38);
  uVar4 = *(uint *)(lVar6 + 0xc08);
  uVar7 = (ulong)uVar4;
  uVar5 = uVar4;
  if (uVar4 < 0x61) {
    uVar5 = 0x60;
  }
  uVar8 = uVar7 << 5 | 8;
  lVar11 = -1;
  do {
    lVar9 = lVar11;
    if ((uVar7 - uVar5) + lVar9 == -1) goto LAB_0124f83c;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar8) + 8);
    if (sVar1 == 0) goto LAB_0124f7fc;
    uVar8 = uVar8 + 0x20;
    lVar11 = lVar9 + 1;
  } while (sVar1 != 2);
  if (uVar4 + (int)(lVar9 + 1) < 0x60) {
LAB_0124f7fc:
    lVar11 = *(long *)(lVar6 + (ulong)(uVar4 + (int)lVar9 + 1) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 2;
      *(undefined4 *)(lVar11 + 0xc) = param_2;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x18) = lVar11;
      lVar3 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar3 + 0x38);
      uVar7 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_0124f83c:
  uVar4 = (uint)uVar7;
  uVar5 = uVar4;
  if (uVar4 < 0x61) {
    uVar5 = 0x60;
  }
  uVar8 = uVar7 << 5 | 8;
  lVar11 = 0;
  do {
    lVar9 = lVar11;
    if ((uVar7 - uVar5) + lVar9 == 0) goto LAB_0124f8cc;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar8) + 8);
    if (sVar1 == 0) goto LAB_0124f890;
    uVar8 = uVar8 + 0x20;
    lVar11 = lVar9 + 1;
  } while (sVar1 != 0x7c);
  if ((uVar4 + (int)(lVar9 + 1)) - 1 < 0x60) {
LAB_0124f890:
    lVar11 = *(long *)(lVar6 + (ulong)(uVar4 + (int)lVar9) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x7c;
      *(undefined1 *)(lVar11 + 10) = 0;
      *(undefined8 *)(lVar11 + 0xc) = 0;
      *(undefined8 *)(lVar11 + 0x14) = 0;
      *(undefined4 *)(lVar11 + 0x1c) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 1000) = lVar11;
      lVar3 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar3 + 0x38);
      uVar7 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_0124f8cc:
  uVar4 = (uint)uVar7;
  uVar5 = uVar4;
  if (uVar4 < 0x61) {
    uVar5 = 0x60;
  }
  uVar8 = uVar7 << 5 | 8;
  lVar11 = 0;
  do {
    lVar9 = lVar11;
    if ((uVar7 - uVar5) + lVar9 == 0) goto LAB_0124f960;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar8) + 8);
    if (sVar1 == 0) goto LAB_0124f920;
    uVar8 = uVar8 + 0x20;
    lVar11 = lVar9 + 1;
  } while (sVar1 != 0x7d);
  if ((uVar4 + (int)(lVar9 + 1)) - 1 < 0x60) {
LAB_0124f920:
    lVar11 = *(long *)(lVar6 + (ulong)(uVar4 + (int)lVar9) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x7d;
      *(undefined8 *)(lVar11 + 0xc) = 0;
      *(undefined8 *)(lVar11 + 0x14) = 0;
      *(undefined4 *)(lVar11 + 0x1c) = 0;
      *(undefined1 *)(lVar11 + 10) = 1;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x3f0) = lVar11;
      lVar3 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar3 + 0x38);
      uVar7 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_0124f960:
  uVar5 = (uint)uVar7;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar10 = (long *)(lVar6 + uVar7 * 0x20 + 8);
  do {
    uVar8 = uVar7;
    if (uVar5 == uVar8) goto LAB_0124f9e0;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_0124f9a8;
    plVar10 = plVar10 + 4;
    uVar7 = uVar8 + 1;
  } while (*(short *)(lVar11 + 8) != 0x7e);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_0124f9a8:
    lVar6 = *(long *)(lVar6 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 0x7e;
      *(undefined8 *)(lVar6 + 0xc) = 0;
      *(undefined8 *)(lVar6 + 0x14) = 0;
      *(undefined4 *)(lVar6 + 0x1c) = 0;
      *(undefined1 *)(lVar6 + 10) = 1;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x3f8) = lVar6;
      lVar3 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0124f9e0:
  FUN_0107b310(lVar3,0xec,8,1);
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x78);
  lVar6 = *(long *)(lVar3 + 1000);
  if (lVar6 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined4 *)(lVar6 + 0xc);
  }
  lVar3 = *(long *)(lVar3 + 0x3f0);
  uVar2 = 0;
  if (lVar3 != 0) {
    uVar2 = (undefined2)*(undefined4 *)(lVar3 + 0xc);
  }
  *param_3 = uVar2;
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x3f8);
  uVar2 = 0;
  if (lVar3 != 0) {
    uVar2 = (undefined2)*(undefined4 *)(lVar3 + 0xc);
  }
  param_3[1] = uVar2;
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar3 + 0x58);
  if (*(uint *)(lVar6 + 0x408) == 0) {
    uVar7 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar6 + (ulong)*(uint *)(lVar6 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar6 + 0x408) = *(int *)(lVar6 + 0x408) + -1;
    lVar6 = *(long *)(lVar3 + 0x58);
    uVar7 = (ulong)*(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(lVar6 + uVar7 * 0x20 + 8);
  lVar3 = *(long *)(lVar3 + 0x38);
  uVar5 = *(uint *)(lVar3 + 0xc08);
  if (uVar5 != 0) {
    if ((uVar5 & 0xffff) < 0x60) {
      uVar7 = (ulong)uVar5 & 0xffff;
      plVar10 = (long *)(lVar3 + uVar7 * 0x20 + 8);
      do {
        uVar7 = uVar7 + 1;
        if (*(short *)(*plVar10 + 8) == 0) break;
        *(undefined2 *)(*plVar10 + 8) = 0;
        plVar10 = plVar10 + 4;
      } while (((uint)uVar7 & 0xffff) != 0x60);
      uVar5 = *(uint *)(lVar3 + 0xc08);
    }
    *(uint *)(lVar3 + 0xc08) = uVar5 - 1;
    *(undefined2 *)(*(long *)(lVar3 + (ulong)(uVar5 - 1) * 0x20 + 8) + 8) = 0;
    uVar7 = (ulong)*(uint *)(lVar3 + 0xc08);
    do {
      if (uVar7 == 0) {
        return uVar12;
      }
      uVar7 = uVar7 - 1;
      *(int *)(lVar3 + 0xc08) = (int)uVar7;
    } while (*(short *)(*(long *)(lVar3 + (uVar7 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar3 + 0xc08) = (int)uVar7 + 1;
  }
  return uVar12;
}


