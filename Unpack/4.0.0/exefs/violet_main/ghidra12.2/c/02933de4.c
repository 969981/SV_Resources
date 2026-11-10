/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02933de4; name: FUN_02933de4
 */


void FUN_02933de4(long param_1,long *param_2,ushort *param_3,long param_4)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  lVar5 = *(long *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_4 + 0xa6);
  lVar7 = *(long *)(lVar5 + 0x38);
  uVar6 = *(uint *)(lVar7 + 0xc08);
  if (uVar6 < 0x60) {
    do {
      lVar10 = *(long *)(lVar7 + (ulong)uVar6 * 0x20 + 8);
      if (*(short *)(lVar10 + 8) == 0) {
        if (uVar6 < 0x5f) {
          *(undefined2 *)(lVar10 + 8) = 1;
          *(int *)(lVar7 + 0xc08) = *(int *)(lVar7 + 0xc08) + 1;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      *(uint *)(lVar7 + 0xc08) = uVar6;
    } while (uVar6 != 0x60);
  }
  lVar7 = *(long *)(lVar5 + 0x58);
  uVar6 = *(uint *)(lVar7 + 0x408);
  if (uVar6 < 0x1f) {
    *(uint *)(lVar7 + 0x408) = uVar6 + 1;
    lVar7 = *(long *)(lVar5 + 0x58);
    uVar6 = *(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar7 + (ulong)uVar6 * 0x20 + 8);
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar5 = *(long *)(lVar7 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar11 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar9 = (long *)(lVar5 + uVar11 * 0x20 + 8);
  do {
    uVar13 = uVar11;
    if (uVar6 == uVar13) goto LAB_02933f28;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_02933ef8;
    plVar9 = plVar9 + 4;
    uVar11 = uVar13 + 1;
  } while (*(short *)(lVar10 + 8) != 3);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_02933ef8:
    lVar5 = *(long *)(lVar5 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 3;
      *(undefined4 *)(lVar5 + 0xc) = uVar4;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x20) = lVar5;
    }
  }
LAB_02933f28:
  lVar5 = *(long *)(param_1 + 0x10);
  uVar2 = *param_3;
  lVar7 = *(long *)(lVar5 + 0x38);
  uVar8 = *(uint *)(lVar7 + 0xc08);
  uVar11 = (ulong)uVar8;
  uVar6 = uVar8;
  if (uVar8 < 0x61) {
    uVar6 = 0x60;
  }
  uVar13 = uVar11 << 5 | 8;
  lVar10 = -1;
  do {
    lVar12 = lVar10;
    if ((uVar11 - uVar6) + lVar12 == -1) goto LAB_02933fcc;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar13) + 8);
    if (sVar3 == 0) goto LAB_02933f8c;
    uVar13 = uVar13 + 0x20;
    lVar10 = lVar12 + 1;
  } while (sVar3 != 0x12);
  if (uVar8 + (int)(lVar12 + 1) < 0x60) {
LAB_02933f8c:
    lVar10 = *(long *)(lVar7 + (ulong)(uVar8 + (int)lVar12 + 1) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x12;
      *(uint *)(lVar10 + 0xc) = (uint)uVar2;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x98) = lVar10;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar5 + 0x38);
      uVar11 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_02933fcc:
  uVar2 = param_3[4];
  uVar8 = (uint)uVar11;
  uVar6 = uVar8;
  if (uVar8 < 0x61) {
    uVar6 = 0x60;
  }
  uVar13 = uVar11 << 5 | 8;
  lVar10 = 0;
  do {
    lVar12 = lVar10;
    if ((uVar11 - uVar6) + lVar12 == 0) goto LAB_02934060;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar13) + 8);
    if (sVar3 == 0) goto LAB_02934024;
    uVar13 = uVar13 + 0x20;
    lVar10 = lVar12 + 1;
  } while (sVar3 != 0x16);
  if ((uVar8 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_02934024:
    lVar10 = *(long *)(lVar7 + (ulong)(uVar8 + (int)lVar12) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x16;
      *(uint *)(lVar10 + 0xc) = (uint)(byte)uVar2;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0xb8) = lVar10;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar5 + 0x38);
      uVar11 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_02934060:
  uVar6 = (uint)uVar11;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar9 = (long *)(lVar7 + uVar11 * 0x20 + 8);
  do {
    uVar13 = uVar11;
    if (uVar6 == uVar13) goto LAB_029340d8;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_029340a8;
    plVar9 = plVar9 + 4;
    uVar11 = uVar13 + 1;
  } while (*(short *)(lVar10 + 8) != 5);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_029340a8:
    lVar7 = *(long *)(lVar7 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 5;
      *(uint *)(lVar7 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x30) = lVar7;
    }
  }
LAB_029340d8:
  if (bVar1 != 0) {
    uVar11 = 0;
    do {
      uVar6 = (int)uVar11 + 6;
      lVar7 = *(long *)(param_1 + 0x10);
      uVar4 = (**(code **)(**(long **)(param_4 + uVar11 * 8) + 0x98))();
      lVar5 = *(long *)(lVar7 + 0x38);
      uVar8 = *(uint *)(lVar5 + 0xc08);
      uVar13 = (ulong)uVar8;
      if (uVar8 < 0x61) {
        uVar8 = 0x60;
      }
      plVar9 = (long *)(lVar5 + uVar13 * 0x20 + 8);
      do {
        uVar14 = uVar13;
        if (uVar8 == uVar14) goto LAB_02934184;
        lVar10 = *plVar9;
        if (*(ushort *)(lVar10 + 8) == 0) goto LAB_0293414c;
        plVar9 = plVar9 + 4;
        uVar13 = uVar14 + 1;
      } while ((uint)*(ushort *)(lVar10 + 8) != (uVar6 & 0xffff));
      if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_0293414c:
        lVar5 = *(long *)(lVar5 + (uVar14 & 0xffffffff) * 0x20 + 8);
        if (lVar5 != 0) {
          *(ushort *)(lVar5 + 8) = (ushort)uVar6;
          *(undefined4 *)(lVar5 + 0xc) = uVar4;
          *(undefined1 *)(lVar5 + 10) = 4;
          *(undefined8 *)(lVar5 + 0x10) = 0;
          *(undefined8 *)(lVar5 + 0x18) = 0;
          if ((uVar6 & 0xffff) < 0x86) {
            *(long *)(*(long *)(lVar7 + 0x78) + (ulong)(ushort)uVar6 * 8 + 8) = lVar5;
          }
        }
      }
LAB_02934184:
      uVar11 = uVar11 + 1;
    } while (uVar11 != bVar1);
  }
  FUN_0107b310(*(undefined8 *)(param_1 + 0x10),0xa8,8,1);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar5 + 0x58);
  if (*(uint *)(lVar7 + 0x408) == 0) {
    uVar11 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar7 + (ulong)*(uint *)(lVar7 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar7 + 0x408) = *(int *)(lVar7 + 0x408) + -1;
    lVar7 = *(long *)(lVar5 + 0x58);
    uVar11 = (ulong)*(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar7 + uVar11 * 0x20 + 8);
  lVar5 = *(long *)(lVar5 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  if (uVar6 != 0) {
    if ((uVar6 & 0xffff) < 0x60) {
      uVar11 = (ulong)uVar6 & 0xffff;
      plVar9 = (long *)(lVar5 + uVar11 * 0x20 + 8);
      do {
        uVar11 = uVar11 + 1;
        if (*(short *)(*plVar9 + 8) == 0) break;
        *(undefined2 *)(*plVar9 + 8) = 0;
        plVar9 = plVar9 + 4;
      } while (((uint)uVar11 & 0xffff) != 0x60);
      uVar6 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar6 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar6 - 1) * 0x20 + 8) + 8) = 0;
    uVar11 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar11 == 0) {
        return;
      }
      uVar11 = uVar11 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar11;
    } while (*(short *)(*(long *)(lVar5 + (uVar11 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar11 + 1;
  }
  return;
}


