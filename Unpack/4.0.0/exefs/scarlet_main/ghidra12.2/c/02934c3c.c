/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02934c3c; name: FUN_02934c3c
 */


void FUN_02934c3c(long param_1,undefined8 param_2,long *param_3,long *param_4,uint param_5)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  lVar4 = *(long *)(param_1 + 0x10);
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
  uVar3 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar4 = *(long *)(lVar6 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  uVar10 = (ulong)uVar5;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar7 = (long *)(lVar4 + uVar10 * 0x20 + 8);
  do {
    uVar9 = uVar10;
    if (uVar5 == uVar9) goto LAB_02934d7c;
    lVar8 = *plVar7;
    if (*(short *)(lVar8 + 8) == 0) goto LAB_02934d4c;
    plVar7 = plVar7 + 4;
    uVar10 = uVar9 + 1;
  } while (*(short *)(lVar8 + 8) != 3);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_02934d4c:
    lVar4 = *(long *)(lVar4 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar4 != 0) {
      *(undefined2 *)(lVar4 + 8) = 3;
      *(undefined4 *)(lVar4 + 0xc) = uVar3;
      *(undefined1 *)(lVar4 + 10) = 4;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x20) = lVar4;
    }
  }
LAB_02934d7c:
  lVar6 = *(long *)(param_1 + 0x10);
  uVar3 = (**(code **)(*param_4 + 0x98))(param_4);
  lVar4 = *(long *)(lVar6 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  uVar10 = (ulong)uVar5;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar7 = (long *)(lVar4 + uVar10 * 0x20 + 8);
  do {
    uVar9 = uVar10;
    if (uVar5 == uVar9) goto LAB_02934e0c;
    lVar8 = *plVar7;
    if (*(short *)(lVar8 + 8) == 0) goto LAB_02934de0;
    plVar7 = plVar7 + 4;
    uVar10 = uVar9 + 1;
  } while (*(short *)(lVar8 + 8) != 4);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_02934de0:
    lVar4 = *(long *)(lVar4 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar4 != 0) {
      *(undefined2 *)(lVar4 + 8) = 4;
      *(undefined4 *)(lVar4 + 0xc) = uVar3;
      *(undefined1 *)(lVar4 + 10) = 4;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x28) = lVar4;
    }
  }
LAB_02934e0c:
  lVar4 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar4 + 0x38);
  uVar1 = *(uint *)(lVar6 + 0xc08);
  uVar10 = (ulong)uVar1;
  uVar5 = uVar1;
  if (uVar1 < 0x61) {
    uVar5 = 0x60;
  }
  uVar9 = uVar10 << 5 | 8;
  lVar8 = -1;
  do {
    lVar11 = lVar8;
    if ((uVar10 - uVar5) + lVar11 == -1) goto LAB_02934eb0;
    sVar2 = *(short *)(*(long *)(lVar6 + uVar9) + 8);
    if (sVar2 == 0) goto LAB_02934e70;
    uVar9 = uVar9 + 0x20;
    lVar8 = lVar11 + 1;
  } while (sVar2 != 0x12);
  if (uVar1 + (int)(lVar11 + 1) < 0x60) {
LAB_02934e70:
    lVar8 = *(long *)(lVar6 + (ulong)(uVar1 + (int)lVar11 + 1) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 0x12;
      *(uint *)(lVar8 + 0xc) = param_5 & 0xffff;
      *(undefined1 *)(lVar8 + 10) = 4;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x98) = lVar8;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar4 + 0x38);
      uVar10 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_02934eb0:
  uVar5 = (uint)uVar10;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar7 = (long *)(lVar6 + uVar10 * 0x20 + 8);
  do {
    uVar9 = uVar10;
    if (uVar5 == uVar9) goto LAB_02934f2c;
    lVar8 = *plVar7;
    if (*(short *)(lVar8 + 8) == 0) goto LAB_02934ef8;
    plVar7 = plVar7 + 4;
    uVar10 = uVar9 + 1;
  } while (*(short *)(lVar8 + 8) != 0x44);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_02934ef8:
    lVar6 = *(long *)(lVar6 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 0x44;
      *(undefined8 *)(lVar6 + 0xc) = 0;
      *(undefined4 *)(lVar6 + 0x14) = 0;
      *(undefined8 *)(lVar6 + 0x18) = param_2;
      *(undefined1 *)(lVar6 + 10) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x228) = lVar6;
      lVar4 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02934f2c:
  FUN_0107b310(lVar4,0xeb,8,1);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar4 + 0x58);
  if (*(uint *)(lVar6 + 0x408) == 0) {
    uVar10 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar6 + (ulong)*(uint *)(lVar6 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar6 + 0x408) = *(int *)(lVar6 + 0x408) + -1;
    lVar6 = *(long *)(lVar4 + 0x58);
    uVar10 = (ulong)*(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar6 + uVar10 * 0x20 + 8);
  lVar4 = *(long *)(lVar4 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  if (uVar5 != 0) {
    if ((uVar5 & 0xffff) < 0x60) {
      uVar10 = (ulong)uVar5 & 0xffff;
      plVar7 = (long *)(lVar4 + uVar10 * 0x20 + 8);
      do {
        uVar10 = uVar10 + 1;
        if (*(short *)(*plVar7 + 8) == 0) break;
        *(undefined2 *)(*plVar7 + 8) = 0;
        plVar7 = plVar7 + 4;
      } while (((uint)uVar10 & 0xffff) != 0x60);
      uVar5 = *(uint *)(lVar4 + 0xc08);
    }
    *(uint *)(lVar4 + 0xc08) = uVar5 - 1;
    *(undefined2 *)(*(long *)(lVar4 + (ulong)(uVar5 - 1) * 0x20 + 8) + 8) = 0;
    uVar10 = (ulong)*(uint *)(lVar4 + 0xc08);
    do {
      if (uVar10 == 0) {
        return;
      }
      uVar10 = uVar10 - 1;
      *(int *)(lVar4 + 0xc08) = (int)uVar10;
    } while (*(short *)(*(long *)(lVar4 + (uVar10 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar4 + 0xc08) = (int)uVar10 + 1;
  }
  return;
}


