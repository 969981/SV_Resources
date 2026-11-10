/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0183d2dc; name: FUN_0183d2dc
 */


undefined4 FUN_0183d2dc(long param_1,long *param_2,ushort *param_3)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar4 + 0x38);
  uVar5 = *(uint *)(lVar7 + 0xc08);
  if (uVar5 < 0x60) {
    do {
      lVar10 = *(long *)(lVar7 + (ulong)uVar5 * 0x20 + 8);
      if (*(short *)(lVar10 + 8) == 0) {
        if (uVar5 < 0x5f) {
          *(undefined2 *)(lVar10 + 8) = 1;
          *(int *)(lVar7 + 0xc08) = *(int *)(lVar7 + 0xc08) + 1;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(lVar7 + 0xc08) = uVar5;
    } while (uVar5 != 0x60);
  }
  lVar7 = *(long *)(lVar4 + 0x58);
  uVar5 = *(uint *)(lVar7 + 0x408);
  if (uVar5 < 0x1f) {
    *(uint *)(lVar7 + 0x408) = uVar5 + 1;
    lVar7 = *(long *)(lVar4 + 0x58);
    uVar5 = *(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar7 + (ulong)uVar5 * 0x20 + 8);
  lVar7 = *(long *)(param_1 + 0x10);
  uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar4 = *(long *)(lVar7 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  uVar12 = (ulong)uVar5;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar9 = (long *)(lVar4 + uVar12 * 0x20 + 8);
  do {
    uVar11 = uVar12;
    if (uVar5 == uVar11) goto LAB_0183d410;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_0183d3e0;
    plVar9 = plVar9 + 4;
    uVar12 = uVar11 + 1;
  } while (*(short *)(lVar10 + 8) != 3);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_0183d3e0:
    lVar4 = *(long *)(lVar4 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar4 != 0) {
      *(undefined2 *)(lVar4 + 8) = 3;
      *(undefined4 *)(lVar4 + 0xc) = uVar3;
      *(undefined1 *)(lVar4 + 10) = 4;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x20) = lVar4;
    }
  }
LAB_0183d410:
  lVar4 = *(long *)(param_1 + 0x10);
  uVar2 = param_3[4];
  lVar7 = *(long *)(lVar4 + 0x38);
  uVar6 = *(uint *)(lVar7 + 0xc08);
  uVar12 = (ulong)uVar6;
  uVar5 = uVar6;
  if (uVar6 < 0x61) {
    uVar5 = 0x60;
  }
  uVar11 = uVar12 << 5 | 8;
  lVar10 = -1;
  do {
    lVar8 = lVar10;
    if ((uVar12 - uVar5) + lVar8 == -1) goto LAB_0183d4b4;
    sVar1 = *(short *)(*(long *)(lVar7 + uVar11) + 8);
    if (sVar1 == 0) goto LAB_0183d474;
    uVar11 = uVar11 + 0x20;
    lVar10 = lVar8 + 1;
  } while (sVar1 != 0x16);
  if (uVar6 + (int)(lVar8 + 1) < 0x60) {
LAB_0183d474:
    lVar10 = *(long *)(lVar7 + (ulong)(uVar6 + (int)lVar8 + 1) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x16;
      *(uint *)(lVar10 + 0xc) = (uint)(byte)uVar2;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0xb8) = lVar10;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar4 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0183d4b4:
  uVar2 = *param_3;
  uVar6 = (uint)uVar12;
  uVar5 = uVar6;
  if (uVar6 < 0x61) {
    uVar5 = 0x60;
  }
  uVar11 = uVar12 << 5 | 8;
  lVar10 = 0;
  do {
    lVar8 = lVar10;
    if ((uVar12 - uVar5) + lVar8 == 0) goto LAB_0183d548;
    sVar1 = *(short *)(*(long *)(lVar7 + uVar11) + 8);
    if (sVar1 == 0) goto LAB_0183d50c;
    uVar11 = uVar11 + 0x20;
    lVar10 = lVar8 + 1;
  } while (sVar1 != 0x12);
  if ((uVar6 + (int)(lVar8 + 1)) - 1 < 0x60) {
LAB_0183d50c:
    lVar10 = *(long *)(lVar7 + (ulong)(uVar6 + (int)lVar8) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x12;
      *(uint *)(lVar10 + 0xc) = (uint)uVar2;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x98) = lVar10;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar4 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0183d548:
  uVar6 = (uint)uVar12;
  uVar5 = uVar6;
  if (uVar6 < 0x61) {
    uVar5 = 0x60;
  }
  uVar11 = uVar12 << 5 | 8;
  lVar10 = 0;
  do {
    lVar8 = lVar10;
    if ((uVar12 - uVar5) + lVar8 == 0) goto LAB_0183d5dc;
    sVar1 = *(short *)(*(long *)(lVar7 + uVar11) + 8);
    if (sVar1 == 0) goto LAB_0183d59c;
    uVar11 = uVar11 + 0x20;
    lVar10 = lVar8 + 1;
  } while (sVar1 != 4);
  if ((uVar6 + (int)(lVar8 + 1)) - 1 < 0x60) {
LAB_0183d59c:
    lVar10 = *(long *)(lVar7 + (ulong)(uVar6 + (int)lVar8) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 4;
      *(undefined8 *)(lVar10 + 0xc) = 0;
      *(undefined8 *)(lVar10 + 0x14) = 0;
      *(undefined4 *)(lVar10 + 0x1c) = 0;
      *(undefined1 *)(lVar10 + 10) = 1;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x28) = lVar10;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar4 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0183d5dc:
  uVar5 = (uint)uVar12;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar9 = (long *)(lVar7 + uVar12 * 0x20 + 8);
  do {
    uVar11 = uVar12;
    if (uVar5 == uVar11) goto LAB_0183d65c;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_0183d624;
    plVar9 = plVar9 + 4;
    uVar12 = uVar11 + 1;
  } while (*(short *)(lVar10 + 8) != 0x57);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_0183d624:
    lVar7 = *(long *)(lVar7 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 0x57;
      *(undefined8 *)(lVar7 + 0xc) = 0;
      *(undefined8 *)(lVar7 + 0x14) = 0;
      *(undefined4 *)(lVar7 + 0x1c) = 0;
      *(undefined1 *)(lVar7 + 10) = 1;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x2c0) = lVar7;
      lVar4 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0183d65c:
  FUN_0107b310(lVar4,0x2e,8,1);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(*(long *)(lVar7 + 0x78) + 0x28);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(lVar4 + 0xc);
  }
  lVar4 = *(long *)(lVar7 + 0x58);
  if (*(uint *)(lVar4 + 0x408) == 0) {
    uVar12 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar4 + (ulong)*(uint *)(lVar4 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar4 + 0x408) = *(int *)(lVar4 + 0x408) + -1;
    lVar4 = *(long *)(lVar7 + 0x58);
    uVar12 = (ulong)*(uint *)(lVar4 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(lVar4 + uVar12 * 0x20 + 8);
  lVar4 = *(long *)(lVar7 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  if (uVar5 != 0) {
    if ((uVar5 & 0xffff) < 0x60) {
      uVar12 = (ulong)uVar5 & 0xffff;
      plVar9 = (long *)(lVar4 + uVar12 * 0x20 + 8);
      do {
        uVar12 = uVar12 + 1;
        if (*(short *)(*plVar9 + 8) == 0) break;
        *(undefined2 *)(*plVar9 + 8) = 0;
        plVar9 = plVar9 + 4;
      } while (((uint)uVar12 & 0xffff) != 0x60);
      uVar5 = *(uint *)(lVar4 + 0xc08);
    }
    *(uint *)(lVar4 + 0xc08) = uVar5 - 1;
    *(undefined2 *)(*(long *)(lVar4 + (ulong)(uVar5 - 1) * 0x20 + 8) + 8) = 0;
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


