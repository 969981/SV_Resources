/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a8beac; name: FUN_01a8beac
 */


bool FUN_01a8beac(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  
  uVar2 = (**(code **)(*param_2 + 0x200))(param_2);
  if ((uVar2 & 1) != 0) {
    return false;
  }
  lVar3 = FUN_01246e90(param_1);
  lVar4 = *(long *)(lVar3 + 0x10);
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
  lVar6 = *(long *)(lVar3 + 0x10);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar4 = *(long *)(lVar6 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  uVar2 = (ulong)uVar5;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar7 = (long *)(lVar4 + uVar2 * 0x20 + 8);
  do {
    uVar9 = uVar2;
    if (uVar5 == uVar9) goto LAB_01a8c030;
    lVar8 = *plVar7;
    if (*(short *)(lVar8 + 8) == 0) goto LAB_01a8c000;
    plVar7 = plVar7 + 4;
    uVar2 = uVar9 + 1;
  } while (*(short *)(lVar8 + 8) != 2);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_01a8c000:
    lVar4 = *(long *)(lVar4 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar4 != 0) {
      *(undefined2 *)(lVar4 + 8) = 2;
      *(undefined4 *)(lVar4 + 0xc) = uVar1;
      *(undefined1 *)(lVar4 + 10) = 4;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x18) = lVar4;
    }
  }
LAB_01a8c030:
  lVar4 = *(long *)(lVar3 + 0x10);
  lVar6 = *(long *)(lVar4 + 0x38);
  uVar5 = *(uint *)(lVar6 + 0xc08);
  uVar2 = (ulong)uVar5;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar7 = (long *)(lVar6 + uVar2 * 0x20 + 8);
  do {
    uVar9 = uVar2;
    if (uVar5 == uVar9) goto LAB_01a8c0b8;
    lVar8 = *plVar7;
    if (*(short *)(lVar8 + 8) == 0) goto LAB_01a8c084;
    plVar7 = plVar7 + 4;
    uVar2 = uVar9 + 1;
  } while (*(short *)(lVar8 + 8) != 0x48);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_01a8c084:
    lVar6 = *(long *)(lVar6 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 0x48;
      *(undefined8 *)(lVar6 + 0xc) = 0;
      *(undefined8 *)(lVar6 + 0x14) = 0;
      *(undefined4 *)(lVar6 + 0x1c) = 0;
      *(undefined1 *)(lVar6 + 10) = 1;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x248) = lVar6;
    }
  }
LAB_01a8c0b8:
  uVar2 = (**(code **)(*param_2 + 0x220))(param_2,0x16);
  if (((uVar2 & 1) != 0) || (uVar2 = (**(code **)(*param_2 + 0x220))(param_2,8), (uVar2 & 1) != 0))
  {
    FUN_016fa4dc(*(undefined8 *)(lVar3 + 0x10),0x48,1);
  }
  FUN_0107b310(*(undefined8 *)(lVar3 + 0x10),0xc,8,1);
  lVar4 = *(long *)(lVar3 + 0x10);
  lVar3 = *(long *)(*(long *)(lVar4 + 0x78) + 0x248);
  if (lVar3 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(lVar3 + 0xc);
  }
  lVar3 = *(long *)(lVar4 + 0x58);
  if (*(uint *)(lVar3 + 0x408) == 0) {
    uVar2 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar3 + (ulong)*(uint *)(lVar3 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar3 + 0x408) = *(int *)(lVar3 + 0x408) + -1;
    lVar3 = *(long *)(lVar4 + 0x58);
    uVar2 = (ulong)*(uint *)(lVar3 + 0x408);
  }
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar3 + uVar2 * 0x20 + 8);
  lVar3 = *(long *)(lVar4 + 0x38);
  uVar5 = *(uint *)(lVar3 + 0xc08);
  if (uVar5 != 0) {
    if ((uVar5 & 0xffff) < 0x60) {
      uVar2 = (ulong)uVar5 & 0xffff;
      plVar7 = (long *)(lVar3 + uVar2 * 0x20 + 8);
      do {
        uVar2 = uVar2 + 1;
        if (*(short *)(*plVar7 + 8) == 0) break;
        *(undefined2 *)(*plVar7 + 8) = 0;
        plVar7 = plVar7 + 4;
      } while (((uint)uVar2 & 0xffff) != 0x60);
      uVar5 = *(uint *)(lVar3 + 0xc08);
    }
    *(uint *)(lVar3 + 0xc08) = uVar5 - 1;
    *(undefined2 *)(*(long *)(lVar3 + (ulong)(uVar5 - 1) * 0x20 + 8) + 8) = 0;
    uVar2 = (ulong)*(uint *)(lVar3 + 0xc08);
    do {
      if (uVar2 == 0) goto LAB_01a8c1f8;
      uVar2 = uVar2 - 1;
      *(int *)(lVar3 + 0xc08) = (int)uVar2;
    } while (*(short *)(*(long *)(lVar3 + (uVar2 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar3 + 0xc08) = (int)uVar2 + 1;
  }
LAB_01a8c1f8:
  return iVar10 != 0;
}


