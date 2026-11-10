/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02930b98; name: FUN_02930b98
 */


void FUN_02930b98(long param_1,long *param_2,ushort *param_3)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined1 uVar5;
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
  uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar6 = *(long *)(lVar8 + 0x38);
  uVar7 = *(uint *)(lVar6 + 0xc08);
  uVar12 = (ulong)uVar7;
  if (uVar7 < 0x61) {
    uVar7 = 0x60;
  }
  plVar9 = (long *)(lVar6 + uVar12 * 0x20 + 8);
  do {
    uVar11 = uVar12;
    if (uVar7 == uVar11) goto LAB_02930ccc;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_02930c9c;
    plVar9 = plVar9 + 4;
    uVar12 = uVar11 + 1;
  } while (*(short *)(lVar10 + 8) != 3);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_02930c9c:
    lVar6 = *(long *)(lVar6 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 3;
      *(undefined4 *)(lVar6 + 0xc) = uVar4;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x20) = lVar6;
    }
  }
LAB_02930ccc:
  lVar6 = *(long *)(param_1 + 0x10);
  uVar2 = *param_3;
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
    if ((uVar12 - uVar7) + lVar13 == -1) goto LAB_02930d70;
    sVar3 = *(short *)(*(long *)(lVar8 + uVar11) + 8);
    if (sVar3 == 0) goto LAB_02930d30;
    uVar11 = uVar11 + 0x20;
    lVar10 = lVar13 + 1;
  } while (sVar3 != 0x12);
  if (uVar1 + (int)(lVar13 + 1) < 0x60) {
LAB_02930d30:
    lVar10 = *(long *)(lVar8 + (ulong)(uVar1 + (int)lVar13 + 1) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x12;
      *(uint *)(lVar10 + 0xc) = (uint)uVar2;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x98) = lVar10;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar6 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_02930d70:
  uVar2 = param_3[4];
  uVar7 = (uint)uVar12;
  if (uVar7 < 0x61) {
    uVar7 = 0x60;
  }
  plVar9 = (long *)(lVar8 + uVar12 * 0x20 + 8);
  do {
    uVar11 = uVar12;
    if (uVar7 == uVar11) goto LAB_02930df0;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_02930dbc;
    plVar9 = plVar9 + 4;
    uVar12 = uVar11 + 1;
  } while (*(short *)(lVar10 + 8) != 0x16);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_02930dbc:
    lVar8 = *(long *)(lVar8 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 0x16;
      *(uint *)(lVar8 + 0xc) = (uint)(byte)uVar2;
      *(undefined1 *)(lVar8 + 10) = 1;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0xb8) = lVar8;
      lVar6 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02930df0:
  FUN_0107b310(lVar6,0xce,8,1);
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0xb8);
  uVar5 = 0;
  if (lVar6 != 0) {
    uVar5 = (undefined1)*(undefined4 *)(lVar6 + 0xc);
  }
  *(undefined1 *)(param_3 + 4) = uVar5;
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


