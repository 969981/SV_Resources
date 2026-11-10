/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02932ea8; name: FUN_02932ea8
 */


void FUN_02932ea8(long param_1,long *param_2,long *param_3,ushort *param_4)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar6 + 0x38);
  uVar7 = *(uint *)(lVar8 + 0xc08);
  if (uVar7 < 0x60) {
    do {
      lVar10 = *(long *)(lVar8 + (ulong)uVar7 * 0x20 + 8);
      if (*(short *)(lVar10 + 8) == 0) {
        if (uVar7 < 0x5f) {
          *(undefined2 *)(lVar10 + 8) = 1;
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
  lVar8 = *(long *)(param_1 + 0x10);
  uVar5 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar6 = *(long *)(lVar8 + 0x38);
  uVar7 = *(uint *)(lVar6 + 0xc08);
  uVar12 = (ulong)uVar7;
  if (uVar7 < 0x61) {
    uVar7 = 0x60;
  }
  plVar9 = (long *)(lVar6 + uVar12 * 0x20 + 8);
  do {
    uVar11 = uVar12;
    if (uVar7 == uVar11) goto LAB_02932fe0;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_02932fb0;
    plVar9 = plVar9 + 4;
    uVar12 = uVar11 + 1;
  } while (*(short *)(lVar10 + 8) != 3);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_02932fb0:
    lVar6 = *(long *)(lVar6 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 3;
      *(undefined4 *)(lVar6 + 0xc) = uVar5;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x20) = lVar6;
    }
  }
LAB_02932fe0:
  lVar8 = *(long *)(param_1 + 0x10);
  uVar5 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar6 = *(long *)(lVar8 + 0x38);
  uVar7 = *(uint *)(lVar6 + 0xc08);
  uVar12 = (ulong)uVar7;
  if (uVar7 < 0x61) {
    uVar7 = 0x60;
  }
  plVar9 = (long *)(lVar6 + uVar12 * 0x20 + 8);
  do {
    uVar11 = uVar12;
    if (uVar7 == uVar11) goto LAB_02933070;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_02933044;
    plVar9 = plVar9 + 4;
    uVar12 = uVar11 + 1;
  } while (*(short *)(lVar10 + 8) != 4);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_02933044:
    lVar6 = *(long *)(lVar6 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 4;
      *(undefined4 *)(lVar6 + 0xc) = uVar5;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x28) = lVar6;
    }
  }
LAB_02933070:
  lVar6 = *(long *)(param_1 + 0x10);
  uVar3 = *param_4;
  lVar8 = *(long *)(lVar6 + 0x38);
  uVar1 = *(uint *)(lVar8 + 0xc08);
  uVar12 = (ulong)uVar1;
  uVar7 = uVar1;
  if (uVar1 < 0x61) {
    uVar7 = 0x60;
  }
  uVar11 = uVar12 << 5 | 8;
  lVar10 = -1;
  do {
    lVar13 = lVar10;
    if ((uVar12 - uVar7) + lVar13 == -1) goto LAB_02933114;
    sVar4 = *(short *)(*(long *)(lVar8 + uVar11) + 8);
    if (sVar4 == 0) goto LAB_029330d4;
    uVar11 = uVar11 + 0x20;
    lVar10 = lVar13 + 1;
  } while (sVar4 != 0x12);
  if (uVar1 + (int)(lVar13 + 1) < 0x60) {
LAB_029330d4:
    lVar10 = *(long *)(lVar8 + (ulong)(uVar1 + (int)lVar13 + 1) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x12;
      *(uint *)(lVar10 + 0xc) = (uint)uVar3;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x98) = lVar10;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar6 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_02933114:
  bVar2 = *(byte *)((long)param_4 + 0xb);
  uVar7 = (uint)uVar12;
  if (uVar7 < 0x61) {
    uVar7 = 0x60;
  }
  plVar9 = (long *)(lVar8 + uVar12 * 0x20 + 8);
  do {
    uVar11 = uVar12;
    if (uVar7 == uVar11) goto LAB_02933194;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_02933160;
    plVar9 = plVar9 + 4;
    uVar12 = uVar11 + 1;
  } while (*(short *)(lVar10 + 8) != 99);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_02933160:
    lVar8 = *(long *)(lVar8 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 99;
      *(uint *)(lVar8 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar8 + 10) = 4;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 800) = lVar8;
      lVar6 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02933194:
  FUN_0107b310(lVar6,0xd1,8,1);
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
      plVar9 = (long *)(lVar6 + uVar12 * 0x20 + 8);
      do {
        uVar12 = uVar12 + 1;
        if (*(short *)(*plVar9 + 8) == 0) break;
        *(undefined2 *)(*plVar9 + 8) = 0;
        plVar9 = plVar9 + 4;
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


