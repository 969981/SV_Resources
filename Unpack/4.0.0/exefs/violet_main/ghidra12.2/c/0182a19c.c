/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0182a19c; name: FUN_0182a19c
 */


void FUN_0182a19c(long param_1,long *param_2,byte *param_3,undefined8 param_4,undefined8 param_5)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar5 + 0x38);
  uVar6 = *(uint *)(lVar8 + 0xc08);
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
  uVar3 = (**(code **)(*param_2 + 0x98))();
  lVar5 = *(long *)(lVar8 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar13 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar10 = (long *)(lVar5 + uVar13 * 0x20 + 8);
  do {
    uVar12 = uVar13;
    if (uVar6 == uVar12) goto LAB_0182a2dc;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_0182a2ac;
    plVar10 = plVar10 + 4;
    uVar13 = uVar12 + 1;
  } while (*(short *)(lVar11 + 8) != 3);
  if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_0182a2ac:
    lVar5 = *(long *)(lVar5 + (uVar12 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 3;
      *(undefined4 *)(lVar5 + 0xc) = uVar3;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x20) = lVar5;
    }
  }
LAB_0182a2dc:
  lVar5 = *(long *)(param_1 + 0x10);
  bVar4 = *param_3;
  lVar8 = *(long *)(lVar5 + 0x38);
  uVar7 = *(uint *)(lVar8 + 0xc08);
  uVar13 = (ulong)uVar7;
  uVar6 = uVar7;
  if (uVar7 < 0x61) {
    uVar6 = 0x60;
  }
  uVar12 = uVar13 << 5 | 8;
  lVar11 = -1;
  do {
    lVar9 = lVar11;
    if ((uVar13 - uVar6) + lVar9 == -1) goto LAB_0182a380;
    sVar1 = *(short *)(*(long *)(lVar8 + uVar12) + 8);
    if (sVar1 == 0) goto LAB_0182a340;
    uVar12 = uVar12 + 0x20;
    lVar11 = lVar9 + 1;
  } while (sVar1 != 0xd);
  if (uVar7 + (int)(lVar9 + 1) < 0x60) {
LAB_0182a340:
    lVar11 = *(long *)(lVar8 + (ulong)(uVar7 + (int)lVar9 + 1) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0xd;
      *(uint *)(lVar11 + 0xc) = (uint)bVar4;
      *(undefined1 *)(lVar11 + 10) = 1;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x70) = lVar11;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar5 + 0x38);
      uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_0182a380:
  uVar7 = (uint)uVar13;
  uVar6 = uVar7;
  if (uVar7 < 0x61) {
    uVar6 = 0x60;
  }
  uVar12 = uVar13 << 5 | 8;
  lVar11 = 0;
  do {
    lVar9 = lVar11;
    if ((uVar13 - uVar6) + lVar9 == 0) goto LAB_0182a414;
    sVar1 = *(short *)(*(long *)(lVar8 + uVar12) + 8);
    if (sVar1 == 0) goto LAB_0182a3d4;
    uVar12 = uVar12 + 0x20;
    lVar11 = lVar9 + 1;
  } while (sVar1 != 0x59);
  if ((uVar7 + (int)(lVar9 + 1)) - 1 < 0x60) {
LAB_0182a3d4:
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
      uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_0182a414:
  uVar6 = (uint)uVar13;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar10 = (long *)(lVar8 + uVar13 * 0x20 + 8);
  do {
    uVar12 = uVar13;
    if (uVar6 == uVar12) goto LAB_0182a490;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_0182a45c;
    plVar10 = plVar10 + 4;
    uVar13 = uVar12 + 1;
  } while (*(short *)(lVar11 + 8) != 0x78);
  if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_0182a45c:
    lVar8 = *(long *)(lVar8 + (uVar12 & 0xffffffff) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 0x78;
      *(undefined1 *)(lVar8 + 10) = 0;
      *(undefined8 *)(lVar8 + 0xc) = 0;
      *(undefined8 *)(lVar8 + 0x14) = 0;
      *(undefined4 *)(lVar8 + 0x1c) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x3c8) = lVar8;
      lVar5 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0182a490:
  FUN_0107b310(lVar5,6,8,1);
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x2d0);
  bVar2 = false;
  if (lVar5 != 0) {
    bVar2 = *(int *)(lVar5 + 0xc) != 0;
  }
  *(bool *)param_4 = bVar2;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x3c8);
  bVar2 = false;
  if (lVar5 != 0) {
    bVar2 = *(int *)(lVar5 + 0xc) != 0;
  }
  *(bool *)param_5 = bVar2;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x70);
  bVar4 = 0;
  if (lVar5 != 0) {
    bVar4 = (byte)*(undefined4 *)(lVar5 + 0xc);
  }
  *param_3 = bVar4;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar5 + 0x58);
  if (*(uint *)(lVar8 + 0x408) == 0) {
    uVar13 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar8 + (ulong)*(uint *)(lVar8 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar8 + 0x408) = *(int *)(lVar8 + 0x408) + -1;
    lVar8 = *(long *)(lVar5 + 0x58);
    uVar13 = (ulong)*(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar8 + uVar13 * 0x20 + 8);
  lVar5 = *(long *)(lVar5 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  if (uVar6 != 0) {
    if ((uVar6 & 0xffff) < 0x60) {
      uVar13 = (ulong)uVar6 & 0xffff;
      plVar10 = (long *)(lVar5 + uVar13 * 0x20 + 8);
      do {
        uVar13 = uVar13 + 1;
        if (*(short *)(*plVar10 + 8) == 0) break;
        *(undefined2 *)(*plVar10 + 8) = 0;
        plVar10 = plVar10 + 4;
      } while (((uint)uVar13 & 0xffff) != 0x60);
      uVar6 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar6 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar6 - 1) * 0x20 + 8) + 8) = 0;
    uVar13 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar13 == 0) {
        return;
      }
      uVar13 = uVar13 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar13;
    } while (*(short *)(*(long *)(lVar5 + (uVar13 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar13 + 1;
  }
  return;
}


