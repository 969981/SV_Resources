/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0167d2e4; name: FUN_0167d2e4
 */


bool FUN_0167d2e4(long param_1,long *param_2,long *param_3,ushort *param_4)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar5 + 0x38);
  uVar6 = *(uint *)(lVar7 + 0xc08);
  if (uVar6 < 0x60) {
    do {
      lVar9 = *(long *)(lVar7 + (ulong)uVar6 * 0x20 + 8);
      if (*(short *)(lVar9 + 8) == 0) {
        if (uVar6 < 0x5f) {
          *(undefined2 *)(lVar9 + 8) = 1;
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
  plVar8 = (long *)(lVar5 + uVar11 * 0x20 + 8);
  do {
    uVar10 = uVar11;
    if (uVar6 == uVar10) goto LAB_0167d41c;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_0167d3ec;
    plVar8 = plVar8 + 4;
    uVar11 = uVar10 + 1;
  } while (*(short *)(lVar9 + 8) != 3);
  if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_0167d3ec:
    lVar5 = *(long *)(lVar5 + (uVar10 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 3;
      *(undefined4 *)(lVar5 + 0xc) = uVar4;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x20) = lVar5;
    }
  }
LAB_0167d41c:
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar5 = *(long *)(lVar7 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar11 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar8 = (long *)(lVar5 + uVar11 * 0x20 + 8);
  do {
    uVar10 = uVar11;
    if (uVar6 == uVar10) goto LAB_0167d4ac;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_0167d480;
    plVar8 = plVar8 + 4;
    uVar11 = uVar10 + 1;
  } while (*(short *)(lVar9 + 8) != 4);
  if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_0167d480:
    lVar5 = *(long *)(lVar5 + (uVar10 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 4;
      *(undefined4 *)(lVar5 + 0xc) = uVar4;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x28) = lVar5;
    }
  }
LAB_0167d4ac:
  lVar5 = *(long *)(param_1 + 0x10);
  uVar2 = *param_4;
  lVar7 = *(long *)(lVar5 + 0x38);
  uVar1 = *(uint *)(lVar7 + 0xc08);
  uVar11 = (ulong)uVar1;
  uVar6 = uVar1;
  if (uVar1 < 0x61) {
    uVar6 = 0x60;
  }
  uVar10 = uVar11 << 5 | 8;
  lVar9 = -1;
  do {
    lVar12 = lVar9;
    if ((uVar11 - uVar6) + lVar12 == -1) goto LAB_0167d550;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar10) + 8);
    if (sVar3 == 0) goto LAB_0167d510;
    uVar10 = uVar10 + 0x20;
    lVar9 = lVar12 + 1;
  } while (sVar3 != 0x12);
  if (uVar1 + (int)(lVar12 + 1) < 0x60) {
LAB_0167d510:
    lVar9 = *(long *)(lVar7 + (ulong)(uVar1 + (int)lVar12 + 1) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x12;
      *(uint *)(lVar9 + 0xc) = (uint)uVar2;
      *(undefined1 *)(lVar9 + 10) = 4;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x98) = lVar9;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar5 + 0x38);
      uVar11 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0167d550:
  uVar6 = (uint)uVar11;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar8 = (long *)(lVar7 + uVar11 * 0x20 + 8);
  do {
    uVar10 = uVar11;
    if (uVar6 == uVar10) goto LAB_0167d5d0;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_0167d598;
    plVar8 = plVar8 + 4;
    uVar11 = uVar10 + 1;
  } while (*(short *)(lVar9 + 8) != 0x59);
  if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_0167d598:
    lVar7 = *(long *)(lVar7 + (uVar10 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 0x59;
      *(undefined8 *)(lVar7 + 0xc) = 0;
      *(undefined8 *)(lVar7 + 0x14) = 0;
      *(undefined4 *)(lVar7 + 0x1c) = 0;
      *(undefined1 *)(lVar7 + 10) = 1;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x2d0) = lVar7;
      lVar5 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0167d5d0:
  FUN_0107b310(lVar5,0x1e,8,1);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(*(long *)(lVar7 + 0x78) + 0x2d0);
  if (lVar5 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(lVar5 + 0xc);
  }
  lVar5 = *(long *)(lVar7 + 0x58);
  if (*(uint *)(lVar5 + 0x408) == 0) {
    uVar11 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar5 + 0x408) = *(int *)(lVar5 + 0x408) + -1;
    lVar5 = *(long *)(lVar7 + 0x58);
    uVar11 = (ulong)*(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(lVar5 + uVar11 * 0x20 + 8);
  lVar5 = *(long *)(lVar7 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  if (uVar6 != 0) {
    if ((uVar6 & 0xffff) < 0x60) {
      uVar11 = (ulong)uVar6 & 0xffff;
      plVar8 = (long *)(lVar5 + uVar11 * 0x20 + 8);
      do {
        uVar11 = uVar11 + 1;
        if (*(short *)(*plVar8 + 8) == 0) break;
        *(undefined2 *)(*plVar8 + 8) = 0;
        plVar8 = plVar8 + 4;
      } while (((uint)uVar11 & 0xffff) != 0x60);
      uVar6 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar6 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar6 - 1) * 0x20 + 8) + 8) = 0;
    uVar11 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar11 == 0) goto LAB_0167d6cc;
      uVar11 = uVar11 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar11;
    } while (*(short *)(*(long *)(lVar5 + (uVar11 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar11 + 1;
  }
LAB_0167d6cc:
  return iVar13 != 0;
}


