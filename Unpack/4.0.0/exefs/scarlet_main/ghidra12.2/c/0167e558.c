/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0167e558; name: FUN_0167e558
 */


bool FUN_0167e558(long param_1,long *param_2,long *param_3,ushort *param_4)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar5 + 0x38);
  uVar6 = *(uint *)(lVar8 + 0xc08);
  if (uVar6 < 0x60) {
    do {
      lVar10 = *(long *)(lVar8 + (ulong)uVar6 * 0x20 + 8);
      if (*(short *)(lVar10 + 8) == 0) {
        if (uVar6 < 0x5f) {
          *(undefined2 *)(lVar10 + 8) = 1;
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
  plVar9 = (long *)(lVar5 + uVar13 * 0x20 + 8);
  do {
    uVar11 = uVar13;
    if (uVar6 == uVar11) goto LAB_0167e690;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_0167e660;
    plVar9 = plVar9 + 4;
    uVar13 = uVar11 + 1;
  } while (*(short *)(lVar10 + 8) != 3);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_0167e660:
    lVar5 = *(long *)(lVar5 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 3;
      *(undefined4 *)(lVar5 + 0xc) = uVar4;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x20) = lVar5;
    }
  }
LAB_0167e690:
  lVar8 = *(long *)(param_1 + 0x10);
  uVar4 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar5 = *(long *)(lVar8 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar13 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar9 = (long *)(lVar5 + uVar13 * 0x20 + 8);
  do {
    uVar11 = uVar13;
    if (uVar6 == uVar11) goto LAB_0167e720;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_0167e6f4;
    plVar9 = plVar9 + 4;
    uVar13 = uVar11 + 1;
  } while (*(short *)(lVar10 + 8) != 4);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_0167e6f4:
    lVar5 = *(long *)(lVar5 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 4;
      *(undefined4 *)(lVar5 + 0xc) = uVar4;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x28) = lVar5;
    }
  }
LAB_0167e720:
  lVar5 = *(long *)(param_1 + 0x10);
  uVar2 = *param_4;
  lVar8 = *(long *)(lVar5 + 0x38);
  uVar7 = *(uint *)(lVar8 + 0xc08);
  uVar13 = (ulong)uVar7;
  uVar6 = uVar7;
  if (uVar7 < 0x61) {
    uVar6 = 0x60;
  }
  uVar11 = uVar13 << 5 | 8;
  lVar10 = -1;
  do {
    lVar12 = lVar10;
    if ((uVar13 - uVar6) + lVar12 == -1) goto LAB_0167e7c4;
    sVar3 = *(short *)(*(long *)(lVar8 + uVar11) + 8);
    if (sVar3 == 0) goto LAB_0167e784;
    uVar11 = uVar11 + 0x20;
    lVar10 = lVar12 + 1;
  } while (sVar3 != 0x12);
  if (uVar7 + (int)(lVar12 + 1) < 0x60) {
LAB_0167e784:
    lVar10 = *(long *)(lVar8 + (ulong)(uVar7 + (int)lVar12 + 1) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x12;
      *(uint *)(lVar10 + 0xc) = (uint)uVar2;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x98) = lVar10;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar5 + 0x38);
      uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_0167e7c4:
  bVar1 = *(byte *)((long)param_4 + 0xb);
  uVar7 = (uint)uVar13;
  uVar6 = uVar7;
  if (uVar7 < 0x61) {
    uVar6 = 0x60;
  }
  uVar11 = uVar13 << 5 | 8;
  lVar10 = 0;
  do {
    lVar12 = lVar10;
    if ((uVar13 - uVar6) + lVar12 == 0) goto LAB_0167e858;
    sVar3 = *(short *)(*(long *)(lVar8 + uVar11) + 8);
    if (sVar3 == 0) goto LAB_0167e81c;
    uVar11 = uVar11 + 0x20;
    lVar10 = lVar12 + 1;
  } while (sVar3 != 99);
  if ((uVar7 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_0167e81c:
    lVar10 = *(long *)(lVar8 + (ulong)(uVar7 + (int)lVar12) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 99;
      *(uint *)(lVar10 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 800) = lVar10;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar5 + 0x38);
      uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_0167e858:
  uVar6 = (uint)uVar13;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar9 = (long *)(lVar8 + uVar13 * 0x20 + 8);
  do {
    uVar11 = uVar13;
    if (uVar6 == uVar11) goto LAB_0167e8d8;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_0167e8a0;
    plVar9 = plVar9 + 4;
    uVar13 = uVar11 + 1;
  } while (*(short *)(lVar10 + 8) != 0x59);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_0167e8a0:
    lVar8 = *(long *)(lVar8 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 0x59;
      *(undefined8 *)(lVar8 + 0xc) = 0;
      *(undefined8 *)(lVar8 + 0x14) = 0;
      *(undefined4 *)(lVar8 + 0x1c) = 0;
      *(undefined1 *)(lVar8 + 10) = 1;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x2d0) = lVar8;
      lVar5 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0167e8d8:
  FUN_0107b310(lVar5,0x3c,8,1);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(*(long *)(lVar8 + 0x78) + 0x2d0);
  if (lVar5 == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = *(int *)(lVar5 + 0xc);
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
      plVar9 = (long *)(lVar5 + uVar13 * 0x20 + 8);
      do {
        uVar13 = uVar13 + 1;
        if (*(short *)(*plVar9 + 8) == 0) break;
        *(undefined2 *)(*plVar9 + 8) = 0;
        plVar9 = plVar9 + 4;
      } while (((uint)uVar13 & 0xffff) != 0x60);
      uVar6 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar6 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar6 - 1) * 0x20 + 8) + 8) = 0;
    uVar13 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar13 == 0) goto LAB_0167e9d4;
      uVar13 = uVar13 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar13;
    } while (*(short *)(*(long *)(lVar5 + (uVar13 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar13 + 1;
  }
LAB_0167e9d4:
  return iVar14 != 0;
}


