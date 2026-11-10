/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01483ad8; name: FUN_01483ad8
 */


undefined8 FUN_01483ad8(long param_1,ushort *param_2,long *param_3,long *param_4)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  
  uVar3 = FUN_01484028(*param_2,0);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(lVar5 + 0x38);
  uVar6 = *(uint *)(lVar10 + 0xc08);
  if (uVar6 < 0x60) {
    do {
      lVar16 = *(long *)(lVar10 + (ulong)uVar6 * 0x20 + 8);
      if (*(short *)(lVar16 + 8) == 0) {
        if (uVar6 < 0x5f) {
          *(undefined2 *)(lVar16 + 8) = 1;
          *(int *)(lVar10 + 0xc08) = *(int *)(lVar10 + 0xc08) + 1;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      *(uint *)(lVar10 + 0xc08) = uVar6;
    } while (uVar6 != 0x60);
  }
  lVar10 = *(long *)(lVar5 + 0x58);
  uVar6 = *(uint *)(lVar10 + 0x408);
  if (uVar6 < 0x1f) {
    *(uint *)(lVar10 + 0x408) = uVar6 + 1;
    lVar10 = *(long *)(lVar5 + 0x58);
    uVar6 = *(uint *)(lVar10 + 0x408);
  }
  *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar10 + (ulong)uVar6 * 0x20 + 8);
  lVar10 = *(long *)(param_1 + 0x10);
  uVar4 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar5 = *(long *)(lVar10 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar17 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar14 = (long *)(lVar5 + uVar17 * 0x20 + 8);
  do {
    uVar11 = uVar17;
    if (uVar6 == uVar11) goto LAB_01483c28;
    lVar16 = *plVar14;
    if (*(short *)(lVar16 + 8) == 0) goto LAB_01483bf8;
    plVar14 = plVar14 + 4;
    uVar17 = uVar11 + 1;
  } while (*(short *)(lVar16 + 8) != 3);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_01483bf8:
    lVar5 = *(long *)(lVar5 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 3;
      *(undefined4 *)(lVar5 + 0xc) = uVar4;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x78) + 0x20) = lVar5;
    }
  }
LAB_01483c28:
  lVar10 = *(long *)(param_1 + 0x10);
  uVar4 = (**(code **)(*param_4 + 0x98))(param_4);
  lVar5 = *(long *)(lVar10 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar17 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar14 = (long *)(lVar5 + uVar17 * 0x20 + 8);
  do {
    uVar11 = uVar17;
    if (uVar6 == uVar11) goto LAB_01483cb8;
    lVar16 = *plVar14;
    if (*(short *)(lVar16 + 8) == 0) goto LAB_01483c8c;
    plVar14 = plVar14 + 4;
    uVar17 = uVar11 + 1;
  } while (*(short *)(lVar16 + 8) != 4);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_01483c8c:
    lVar5 = *(long *)(lVar5 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 4;
      *(undefined4 *)(lVar5 + 0xc) = uVar4;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x78) + 0x28) = lVar5;
    }
  }
LAB_01483cb8:
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *param_2;
  lVar10 = *(long *)(lVar5 + 0x38);
  uVar7 = *(uint *)(lVar10 + 0xc08);
  uVar17 = (ulong)uVar7;
  uVar6 = uVar7;
  if (uVar7 < 0x61) {
    uVar6 = 0x60;
  }
  uVar11 = uVar17 << 5 | 8;
  lVar16 = -1;
  do {
    lVar13 = lVar16;
    if ((uVar17 - uVar6) + lVar13 == -1) goto LAB_01483d5c;
    sVar2 = *(short *)(*(long *)(lVar10 + uVar11) + 8);
    if (sVar2 == 0) goto LAB_01483d1c;
    uVar11 = uVar11 + 0x20;
    lVar16 = lVar13 + 1;
  } while (sVar2 != 0x12);
  if (uVar7 + (int)(lVar13 + 1) < 0x60) {
LAB_01483d1c:
    lVar16 = *(long *)(lVar10 + (ulong)(uVar7 + (int)lVar13 + 1) * 0x20 + 8);
    if (lVar16 != 0) {
      *(undefined2 *)(lVar16 + 8) = 0x12;
      *(uint *)(lVar16 + 0xc) = (uint)uVar1;
      *(undefined1 *)(lVar16 + 10) = 4;
      *(undefined8 *)(lVar16 + 0x10) = 0;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x98) = lVar16;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar10 = *(long *)(lVar5 + 0x38);
      uVar17 = (ulong)*(uint *)(lVar10 + 0xc08);
    }
  }
LAB_01483d5c:
  uVar7 = (uint)uVar17;
  uVar6 = uVar7;
  if (uVar7 < 0x61) {
    uVar6 = 0x60;
  }
  uVar11 = uVar17 << 5 | 8;
  lVar16 = 0;
  do {
    lVar13 = lVar16;
    if ((uVar17 - uVar6) + lVar13 == 0) goto LAB_01483df0;
    sVar2 = *(short *)(*(long *)(lVar10 + uVar11) + 8);
    if (sVar2 == 0) goto LAB_01483db0;
    uVar11 = uVar11 + 0x20;
    lVar16 = lVar13 + 1;
  } while (sVar2 != 0x48);
  if ((uVar7 + (int)(lVar13 + 1)) - 1 < 0x60) {
LAB_01483db0:
    lVar16 = *(long *)(lVar10 + (ulong)(uVar7 + (int)lVar13) * 0x20 + 8);
    if (lVar16 != 0) {
      *(undefined2 *)(lVar16 + 8) = 0x48;
      *(undefined8 *)(lVar16 + 0xc) = 0;
      *(undefined8 *)(lVar16 + 0x14) = 0;
      *(undefined4 *)(lVar16 + 0x1c) = 0;
      *(undefined1 *)(lVar16 + 10) = 1;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x248) = lVar16;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar10 = *(long *)(lVar5 + 0x38);
      uVar17 = (ulong)*(uint *)(lVar10 + 0xc08);
    }
  }
LAB_01483df0:
  uVar6 = (uint)uVar17;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar14 = (long *)(lVar10 + uVar17 * 0x20 + 8);
  do {
    uVar11 = uVar17;
    if (uVar6 == uVar11) goto LAB_01483e68;
    lVar16 = *plVar14;
    if (*(short *)(lVar16 + 8) == 0) goto LAB_01483e38;
    plVar14 = plVar14 + 4;
    uVar17 = uVar11 + 1;
  } while (*(short *)(lVar16 + 8) != 0x29);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_01483e38:
    lVar10 = *(long *)(lVar10 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x29;
      *(undefined4 *)(lVar10 + 0xc) = uVar3;
      *(undefined1 *)(lVar10 + 10) = 0;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x150) = lVar10;
      lVar5 = *(long *)(param_1 + 0x10);
    }
  }
LAB_01483e68:
  FUN_0107b310(lVar5,0x6c,8,1);
  lVar10 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(*(long *)(lVar10 + 0x78) + 0x248);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(lVar5 + 0xc);
  }
  lVar5 = *(long *)(*(long *)(lVar10 + 0x78) + 0x150);
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(lVar5 + 0xc);
  }
  lVar5 = *(long *)(lVar10 + 0x58);
  if (*(uint *)(lVar5 + 0x408) == 0) {
    uVar17 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar5 + 0x408) = *(int *)(lVar5 + 0x408) + -1;
    lVar5 = *(long *)(lVar10 + 0x58);
    uVar17 = (ulong)*(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(lVar5 + uVar17 * 0x20 + 8);
  lVar5 = *(long *)(lVar10 + 0x38);
  uVar8 = *(uint *)(lVar5 + 0xc08);
  if (uVar8 != 0) {
    if ((uVar8 & 0xffff) < 0x60) {
      uVar17 = (ulong)uVar8 & 0xffff;
      plVar14 = (long *)(lVar5 + uVar17 * 0x20 + 8);
      do {
        uVar17 = uVar17 + 1;
        if (*(short *)(*plVar14 + 8) == 0) break;
        *(undefined2 *)(*plVar14 + 8) = 0;
        plVar14 = plVar14 + 4;
      } while (((uint)uVar17 & 0xffff) != 0x60);
      uVar8 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar8 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar8 - 1) * 0x20 + 8) + 8) = 0;
    uVar17 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar17 == 0) goto LAB_01483f70;
      uVar17 = uVar17 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar17;
    } while (*(short *)(*(long *)(lVar5 + (uVar17 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar17 + 1;
  }
LAB_01483f70:
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49a) >> 5 & 1) == 0) &&
     ((uVar6 & 0xff) == 0)) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
    *(long *)(lVar5 + 0x20) = *(long *)(lVar5 + 0x20) + 1;
    uVar17 = *(ulong *)(lVar5 + 8);
    uVar15 = uVar17 ^ *(ulong *)(lVar5 + 0x10);
    uVar11 = uVar15 >> 0x1b | uVar15 << 0x25;
    uVar15 = uVar15 ^ (uVar17 >> 0x28 | uVar17 << 0x18) ^ uVar15 << 0x10;
    uVar6 = (int)uVar17 + (int)*(ulong *)(lVar5 + 0x10);
    while (99 < (uVar6 & 0x7f)) {
      uVar17 = uVar15 ^ uVar11;
      iVar9 = (int)uVar11;
      iVar12 = (int)uVar15;
      uVar11 = uVar17 >> 0x1b | uVar17 << 0x25;
      uVar15 = uVar17 ^ (uVar15 >> 0x28 | uVar15 << 0x18) ^ uVar17 << 0x10;
      uVar6 = iVar12 + iVar9;
    }
    *(ulong *)(lVar5 + 8) = uVar15;
    *(ulong *)(lVar5 + 0x10) = uVar11;
    if ((uVar6 & 0x7f) < uVar7) {
      return 1;
    }
  }
  return 0;
}


