/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016fa084; name: FUN_016fa084
 */


bool FUN_016fa084(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  
  if ((param_3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x300))(param_2,2);
    uVar4 = uVar4 & 1;
  }
  lVar5 = *(long *)(param_1 + 0x10);
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
  uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar5 = *(long *)(lVar7 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar11 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar9 = (long *)(lVar5 + uVar11 * 0x20 + 8);
  do {
    uVar8 = uVar11;
    if (uVar6 == uVar8) goto LAB_016fa1c0;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_016fa190;
    plVar9 = plVar9 + 4;
    uVar11 = uVar8 + 1;
  } while (*(short *)(lVar10 + 8) != 2);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_016fa190:
    lVar5 = *(long *)(lVar5 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 2;
      *(undefined4 *)(lVar5 + 0xc) = uVar3;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x18) = lVar5;
    }
  }
LAB_016fa1c0:
  lVar5 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar5 + 0x38);
  uVar1 = *(uint *)(lVar7 + 0xc08);
  uVar11 = (ulong)uVar1;
  uVar6 = uVar1;
  if (uVar1 < 0x61) {
    uVar6 = 0x60;
  }
  uVar8 = uVar11 << 5 | 8;
  lVar10 = -1;
  do {
    lVar12 = lVar10;
    if ((uVar11 - uVar6) + lVar12 == -1) goto LAB_016fa260;
    sVar2 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar2 == 0) goto LAB_016fa220;
    uVar8 = uVar8 + 0x20;
    lVar10 = lVar12 + 1;
  } while (sVar2 != 0x59);
  if (uVar1 + (int)(lVar12 + 1) < 0x60) {
LAB_016fa220:
    lVar10 = *(long *)(lVar7 + (ulong)(uVar1 + (int)lVar12 + 1) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x59;
      *(uint *)(lVar10 + 0xc) = uVar4;
      *(undefined1 *)(lVar10 + 10) = 1;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x2d0) = lVar10;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar5 + 0x38);
      uVar11 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_016fa260:
  uVar4 = (uint)uVar11;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar9 = (long *)(lVar7 + uVar11 * 0x20 + 8);
  do {
    uVar8 = uVar11;
    if (uVar4 == uVar8) goto LAB_016fa2e0;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_016fa2a8;
    plVar9 = plVar9 + 4;
    uVar11 = uVar8 + 1;
  } while (*(short *)(lVar10 + 8) != 0x48);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_016fa2a8:
    lVar7 = *(long *)(lVar7 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 0x48;
      *(undefined8 *)(lVar7 + 0xc) = 0;
      *(undefined8 *)(lVar7 + 0x14) = 0;
      *(undefined4 *)(lVar7 + 0x1c) = 0;
      *(undefined1 *)(lVar7 + 10) = 1;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x248) = lVar7;
      lVar5 = *(long *)(param_1 + 0x10);
    }
  }
LAB_016fa2e0:
  FUN_0107b310(lVar5,0x12,8,1);
  uVar11 = (**(code **)(*param_2 + 0x220))(param_2,0x15);
  if ((uVar11 & 1) != 0) {
    FUN_016fa4dc(*(undefined8 *)(param_1 + 0x10),0x48,1);
  }
  uVar11 = (**(code **)(*param_2 + 0x220))(param_2,0x20);
  if ((uVar11 & 1) != 0) {
    FUN_016fa4dc(*(undefined8 *)(param_1 + 0x10),0x48,1);
  }
  uVar11 = (**(code **)(*param_2 + 0x220))(param_2,0x21);
  if (((uVar11 & 1) != 0) ||
     (uVar11 = (**(code **)(*param_2 + 0x220))(param_2,0x1f), (uVar11 & 1) != 0)) {
    FUN_016fa4dc(*(undefined8 *)(param_1 + 0x10),0x59,1);
  }
  lVar7 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(*(long *)(lVar7 + 0x78) + 0x2d0);
  if (lVar5 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(lVar5 + 0xc);
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x78) + 0x248);
  if (lVar5 == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = *(int *)(lVar5 + 0xc);
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
  uVar4 = *(uint *)(lVar5 + 0xc08);
  if (uVar4 != 0) {
    if ((uVar4 & 0xffff) < 0x60) {
      uVar11 = (ulong)uVar4 & 0xffff;
      plVar9 = (long *)(lVar5 + uVar11 * 0x20 + 8);
      do {
        uVar11 = uVar11 + 1;
        if (*(short *)(*plVar9 + 8) == 0) break;
        *(undefined2 *)(*plVar9 + 8) = 0;
        plVar9 = plVar9 + 4;
      } while (((uint)uVar11 & 0xffff) != 0x60);
      uVar4 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar4 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar4 - 1) * 0x20 + 8) + 8) = 0;
    uVar11 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar11 == 0) goto LAB_016fa448;
      uVar11 = uVar11 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar11;
    } while (*(short *)(*(long *)(lVar5 + (uVar11 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar11 + 1;
  }
LAB_016fa448:
  return iVar13 != 0 && iVar14 == 0;
}


