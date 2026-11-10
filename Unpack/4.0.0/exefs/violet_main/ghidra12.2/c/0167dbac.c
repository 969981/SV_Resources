/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0167dbac; name: FUN_0167dbac
 */


void FUN_0167dbac(long param_1,ushort *param_2,long *param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar6 + 0x38);
  uVar7 = *(uint *)(lVar8 + 0xc08);
  if (uVar7 < 0x60) {
    do {
      lVar11 = *(long *)(lVar8 + (ulong)uVar7 * 0x20 + 8);
      if (*(short *)(lVar11 + 8) == 0) {
        if (uVar7 < 0x5f) {
          *(undefined2 *)(lVar11 + 8) = 1;
          *(int *)(lVar8 + 0xc08) = *(int *)(lVar8 + 0xc08) + 1;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      *(uint *)(lVar8 + 0xc08) = uVar7;
    } while (uVar7 != 0x60);
  }
  lVar8 = *(long *)(lVar6 + 0x58);
  uVar7 = *(uint *)(lVar8 + 0x408);
  if (uVar7 < 0x1f) {
    *(uint *)(lVar8 + 0x408) = uVar7 + 1;
    lVar8 = *(long *)(lVar6 + 0x58);
    uVar7 = *(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar8 + (ulong)uVar7 * 0x20 + 8);
  bVar1 = *(byte *)(param_4 + 0xa6);
  lVar8 = *(long *)(param_1 + 0x10);
  uVar5 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar6 = *(long *)(lVar8 + 0x38);
  uVar7 = *(uint *)(lVar6 + 0xc08);
  uVar12 = (ulong)uVar7;
  if (uVar7 < 0x61) {
    uVar7 = 0x60;
  }
  plVar10 = (long *)(lVar6 + uVar12 * 0x20 + 8);
  do {
    uVar14 = uVar12;
    if (uVar7 == uVar14) goto LAB_0167dcf0;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_0167dcc0;
    plVar10 = plVar10 + 4;
    uVar12 = uVar14 + 1;
  } while (*(short *)(lVar11 + 8) != 3);
  if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_0167dcc0:
    lVar6 = *(long *)(lVar6 + (uVar14 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 3;
      *(undefined4 *)(lVar6 + 0xc) = uVar5;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x20) = lVar6;
    }
  }
LAB_0167dcf0:
  lVar6 = *(long *)(param_1 + 0x10);
  uVar3 = *param_2;
  lVar8 = *(long *)(lVar6 + 0x38);
  uVar9 = *(uint *)(lVar8 + 0xc08);
  uVar12 = (ulong)uVar9;
  uVar7 = uVar9;
  if (uVar9 < 0x61) {
    uVar7 = 0x60;
  }
  uVar14 = uVar12 << 5 | 8;
  lVar11 = -1;
  do {
    lVar13 = lVar11;
    if ((uVar12 - uVar7) + lVar13 == -1) goto LAB_0167dd94;
    sVar4 = *(short *)(*(long *)(lVar8 + uVar14) + 8);
    if (sVar4 == 0) goto LAB_0167dd54;
    uVar14 = uVar14 + 0x20;
    lVar11 = lVar13 + 1;
  } while (sVar4 != 0x12);
  if (uVar9 + (int)(lVar13 + 1) < 0x60) {
LAB_0167dd54:
    lVar11 = *(long *)(lVar8 + (ulong)(uVar9 + (int)lVar13 + 1) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x12;
      *(uint *)(lVar11 + 0xc) = (uint)uVar3;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x98) = lVar11;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar6 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_0167dd94:
  bVar2 = *(byte *)((long)param_2 + 0xb);
  uVar9 = (uint)uVar12;
  uVar7 = uVar9;
  if (uVar9 < 0x61) {
    uVar7 = 0x60;
  }
  uVar14 = uVar12 << 5 | 8;
  lVar11 = 0;
  do {
    lVar13 = lVar11;
    if ((uVar12 - uVar7) + lVar13 == 0) goto LAB_0167de28;
    sVar4 = *(short *)(*(long *)(lVar8 + uVar14) + 8);
    if (sVar4 == 0) goto LAB_0167ddec;
    uVar14 = uVar14 + 0x20;
    lVar11 = lVar13 + 1;
  } while (sVar4 != 99);
  if ((uVar9 + (int)(lVar13 + 1)) - 1 < 0x60) {
LAB_0167ddec:
    lVar11 = *(long *)(lVar8 + (ulong)(uVar9 + (int)lVar13) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 99;
      *(uint *)(lVar11 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 800) = lVar11;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar6 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_0167de28:
  uVar7 = (uint)uVar12;
  if (uVar7 < 0x61) {
    uVar7 = 0x60;
  }
  plVar10 = (long *)(lVar8 + uVar12 * 0x20 + 8);
  do {
    uVar14 = uVar12;
    if (uVar7 == uVar14) goto LAB_0167dea0;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_0167de70;
    plVar10 = plVar10 + 4;
    uVar12 = uVar14 + 1;
  } while (*(short *)(lVar11 + 8) != 5);
  if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_0167de70:
    lVar8 = *(long *)(lVar8 + (uVar14 & 0xffffffff) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 5;
      *(uint *)(lVar8 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar8 + 10) = 4;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x30) = lVar8;
    }
  }
LAB_0167dea0:
  if (bVar1 != 0) {
    uVar12 = 0;
    do {
      uVar7 = (int)uVar12 + 6;
      lVar8 = *(long *)(param_1 + 0x10);
      uVar5 = (**(code **)(**(long **)(param_4 + uVar12 * 8) + 0x98))();
      lVar6 = *(long *)(lVar8 + 0x38);
      uVar9 = *(uint *)(lVar6 + 0xc08);
      uVar14 = (ulong)uVar9;
      if (uVar9 < 0x61) {
        uVar9 = 0x60;
      }
      plVar10 = (long *)(lVar6 + uVar14 * 0x20 + 8);
      do {
        uVar15 = uVar14;
        if (uVar9 == uVar15) goto LAB_0167df48;
        lVar11 = *plVar10;
        if (*(ushort *)(lVar11 + 8) == 0) goto LAB_0167df14;
        plVar10 = plVar10 + 4;
        uVar14 = uVar15 + 1;
      } while ((uint)*(ushort *)(lVar11 + 8) != (uVar7 & 0xffff));
      if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_0167df14:
        lVar6 = *(long *)(lVar6 + (uVar15 & 0xffffffff) * 0x20 + 8);
        if (lVar6 != 0) {
          uVar3 = (ushort)uVar7;
          *(ushort *)(lVar6 + 8) = uVar3;
          *(undefined4 *)(lVar6 + 0xc) = uVar5;
          *(undefined1 *)(lVar6 + 10) = 4;
          *(undefined8 *)(lVar6 + 0x10) = 0;
          *(undefined8 *)(lVar6 + 0x18) = 0;
          if (-1 < (char)uVar12) {
            *(long *)(*(long *)(lVar8 + 0x78) + (ulong)uVar3 * 8 + 8) = lVar6;
          }
        }
      }
LAB_0167df48:
      uVar12 = uVar12 + 1;
    } while (uVar12 != bVar1);
  }
  FUN_0107b310(*(undefined8 *)(param_1 + 0x10),0x35,8,1);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar6 + 0x58);
  if (*(uint *)(lVar8 + 0x408) == 0) {
    uVar12 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar8 + (ulong)*(uint *)(lVar8 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar8 + 0x408) = *(int *)(lVar8 + 0x408) + -1;
    lVar8 = *(long *)(lVar6 + 0x58);
    uVar12 = (ulong)*(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar8 + uVar12 * 0x20 + 8);
  lVar6 = *(long *)(lVar6 + 0x38);
  uVar7 = *(uint *)(lVar6 + 0xc08);
  if (uVar7 != 0) {
    if ((uVar7 & 0xffff) < 0x60) {
      uVar12 = (ulong)uVar7 & 0xffff;
      plVar10 = (long *)(lVar6 + uVar12 * 0x20 + 8);
      do {
        uVar12 = uVar12 + 1;
        if (*(short *)(*plVar10 + 8) == 0) break;
        *(undefined2 *)(*plVar10 + 8) = 0;
        plVar10 = plVar10 + 4;
      } while (((uint)uVar12 & 0xffff) != 0x60);
      uVar7 = *(uint *)(lVar6 + 0xc08);
    }
    *(uint *)(lVar6 + 0xc08) = uVar7 - 1;
    *(undefined2 *)(*(long *)(lVar6 + (ulong)(uVar7 - 1) * 0x20 + 8) + 8) = 0;
    uVar12 = (ulong)*(uint *)(lVar6 + 0xc08);
    do {
      if (uVar12 == 0) {
        return;
      }
      uVar12 = uVar12 - 1;
      *(int *)(lVar6 + 0xc08) = (int)uVar12;
    } while (*(short *)(*(long *)(lVar6 + (uVar12 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar6 + 0xc08) = (int)uVar12 + 1;
  }
  return;
}


