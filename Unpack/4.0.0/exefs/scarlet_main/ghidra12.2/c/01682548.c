/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01682548; name: FUN_01682548
 */


undefined8 FUN_01682548(long param_1,long *param_2,long param_3)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  
  lVar4 = *(long *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_3 + 0xa6);
  lVar6 = *(long *)(lVar4 + 0x38);
  uVar5 = *(uint *)(lVar6 + 0xc08);
  if (uVar5 < 0x60) {
    do {
      lVar8 = *(long *)(lVar6 + (ulong)uVar5 * 0x20 + 8);
      if (*(short *)(lVar8 + 8) == 0) {
        if (uVar5 < 0x5f) {
          *(undefined2 *)(lVar8 + 8) = 1;
          *(int *)(lVar6 + 0xc08) = *(int *)(lVar6 + 0xc08) + 1;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(lVar6 + 0xc08) = uVar5;
    } while (uVar5 != 0x60);
  }
  lVar6 = *(long *)(lVar4 + 0x58);
  uVar5 = *(uint *)(lVar6 + 0x408);
  if (uVar5 < 0x1f) {
    *(uint *)(lVar6 + 0x408) = uVar5 + 1;
    lVar6 = *(long *)(lVar4 + 0x58);
    uVar5 = *(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar6 + (ulong)uVar5 * 0x20 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar4 = *(long *)(lVar6 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  uVar9 = (ulong)uVar5;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar7 = (long *)(lVar4 + uVar9 * 0x20 + 8);
  do {
    uVar10 = uVar9;
    if (uVar5 == uVar10) goto LAB_01682688;
    lVar8 = *plVar7;
    if (*(short *)(lVar8 + 8) == 0) goto LAB_01682658;
    plVar7 = plVar7 + 4;
    uVar9 = uVar10 + 1;
  } while (*(short *)(lVar8 + 8) != 3);
  if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_01682658:
    lVar4 = *(long *)(lVar4 + (uVar10 & 0xffffffff) * 0x20 + 8);
    if (lVar4 != 0) {
      *(undefined2 *)(lVar4 + 8) = 3;
      *(undefined4 *)(lVar4 + 0xc) = uVar3;
      *(undefined1 *)(lVar4 + 10) = 4;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x20) = lVar4;
    }
  }
LAB_01682688:
  lVar4 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar4 + 0x38);
  uVar14 = *(uint *)(lVar6 + 0xc08);
  uVar9 = (ulong)uVar14;
  uVar5 = uVar14;
  if (uVar14 < 0x61) {
    uVar5 = 0x60;
  }
  uVar10 = uVar9 << 5 | 8;
  lVar8 = -1;
  do {
    lVar12 = lVar8;
    if ((uVar9 - uVar5) + lVar12 == -1) goto LAB_0168272c;
    sVar2 = *(short *)(*(long *)(lVar6 + uVar10) + 8);
    if (sVar2 == 0) goto LAB_016826e8;
    uVar10 = uVar10 + 0x20;
    lVar8 = lVar12 + 1;
  } while (sVar2 != 0x48);
  if (uVar14 + (int)(lVar12 + 1) < 0x60) {
LAB_016826e8:
    lVar8 = *(long *)(lVar6 + (ulong)(uVar14 + (int)lVar12 + 1) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 0x48;
      *(undefined8 *)(lVar8 + 0xc) = 0;
      *(undefined8 *)(lVar8 + 0x14) = 0;
      *(undefined4 *)(lVar8 + 0x1c) = 0;
      *(undefined1 *)(lVar8 + 10) = 1;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x248) = lVar8;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar4 + 0x38);
      uVar9 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_0168272c:
  uVar5 = (uint)uVar9;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar7 = (long *)(lVar6 + uVar9 * 0x20 + 8);
  do {
    uVar10 = uVar9;
    if (uVar5 == uVar10) goto LAB_016827a4;
    lVar8 = *plVar7;
    if (*(short *)(lVar8 + 8) == 0) goto LAB_01682774;
    plVar7 = plVar7 + 4;
    uVar9 = uVar10 + 1;
  } while (*(short *)(lVar8 + 8) != 5);
  if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_01682774:
    lVar6 = *(long *)(lVar6 + (uVar10 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 5;
      *(uint *)(lVar6 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x30) = lVar6;
    }
  }
LAB_016827a4:
  if (bVar1 != 0) {
    uVar9 = 0;
    do {
      uVar5 = (int)uVar9 + 6;
      lVar6 = *(long *)(param_1 + 0x10);
      uVar3 = (**(code **)(**(long **)(param_3 + uVar9 * 8) + 0x98))();
      lVar4 = *(long *)(lVar6 + 0x38);
      uVar14 = *(uint *)(lVar4 + 0xc08);
      uVar10 = (ulong)uVar14;
      if (uVar14 < 0x61) {
        uVar14 = 0x60;
      }
      plVar7 = (long *)(lVar4 + uVar10 * 0x20 + 8);
      do {
        uVar11 = uVar10;
        if (uVar14 == uVar11) goto LAB_01682850;
        lVar8 = *plVar7;
        if (*(ushort *)(lVar8 + 8) == 0) goto LAB_01682818;
        plVar7 = plVar7 + 4;
        uVar10 = uVar11 + 1;
      } while ((uint)*(ushort *)(lVar8 + 8) != (uVar5 & 0xffff));
      if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_01682818:
        lVar4 = *(long *)(lVar4 + (uVar11 & 0xffffffff) * 0x20 + 8);
        if (lVar4 != 0) {
          *(ushort *)(lVar4 + 8) = (ushort)uVar5;
          *(undefined4 *)(lVar4 + 0xc) = uVar3;
          *(undefined1 *)(lVar4 + 10) = 4;
          *(undefined8 *)(lVar4 + 0x10) = 0;
          *(undefined8 *)(lVar4 + 0x18) = 0;
          if ((uVar5 & 0xffff) < 0x86) {
            *(long *)(*(long *)(lVar6 + 0x78) + (ulong)(ushort)uVar5 * 8 + 8) = lVar4;
          }
        }
      }
LAB_01682850:
      uVar9 = uVar9 + 1;
    } while (uVar9 != bVar1);
  }
  FUN_0107b310(*(undefined8 *)(param_1 + 0x10),0xc3,8,1);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(*(long *)(lVar6 + 0x78) + 0x248);
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0xc) == '\0')) {
    uVar13 = 1;
    FUN_0107b310(lVar6,0xc4,8,1);
    lVar6 = *(long *)(param_1 + 0x10);
  }
  else {
    uVar13 = 0;
  }
  lVar4 = *(long *)(lVar6 + 0x58);
  if (*(uint *)(lVar4 + 0x408) == 0) {
    uVar9 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar4 + (ulong)*(uint *)(lVar4 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar4 + 0x408) = *(int *)(lVar4 + 0x408) + -1;
    lVar4 = *(long *)(lVar6 + 0x58);
    uVar9 = (ulong)*(uint *)(lVar4 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar4 + uVar9 * 0x20 + 8);
  lVar4 = *(long *)(lVar6 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  if (uVar5 != 0) {
    if ((uVar5 & 0xffff) < 0x60) {
      uVar9 = (ulong)uVar5 & 0xffff;
      plVar7 = (long *)(lVar4 + uVar9 * 0x20 + 8);
      do {
        uVar9 = uVar9 + 1;
        if (*(short *)(*plVar7 + 8) == 0) break;
        *(undefined2 *)(*plVar7 + 8) = 0;
        plVar7 = plVar7 + 4;
      } while (((uint)uVar9 & 0xffff) != 0x60);
      uVar5 = *(uint *)(lVar4 + 0xc08);
    }
    *(uint *)(lVar4 + 0xc08) = uVar5 - 1;
    *(undefined2 *)(*(long *)(lVar4 + (ulong)(uVar5 - 1) * 0x20 + 8) + 8) = 0;
    uVar9 = (ulong)*(uint *)(lVar4 + 0xc08);
    do {
      if (uVar9 == 0) {
        return uVar13;
      }
      uVar9 = uVar9 - 1;
      *(int *)(lVar4 + 0xc08) = (int)uVar9;
    } while (*(short *)(*(long *)(lVar4 + (uVar9 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar4 + 0xc08) = (int)uVar9 + 1;
  }
  return uVar13;
}


