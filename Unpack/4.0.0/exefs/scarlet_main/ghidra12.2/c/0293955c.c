/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293955c; name: FUN_0293955c
 */


uint FUN_0293955c(long param_1,long *param_2,long *param_3,uint param_4)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  
  uVar2 = FUN_021fb1a8(param_4);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar6 + 0x38);
  uVar4 = *(uint *)(lVar7 + 0xc08);
  if (uVar4 < 0x60) {
    do {
      lVar9 = *(long *)(lVar7 + (ulong)uVar4 * 0x20 + 8);
      if (*(short *)(lVar9 + 8) == 0) {
        if (uVar4 < 0x5f) {
          *(undefined2 *)(lVar9 + 8) = 1;
          *(int *)(lVar7 + 0xc08) = *(int *)(lVar7 + 0xc08) + 1;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(lVar7 + 0xc08) = uVar4;
    } while (uVar4 != 0x60);
  }
  lVar7 = *(long *)(lVar6 + 0x58);
  uVar4 = *(uint *)(lVar7 + 0x408);
  if (uVar4 < 0x1f) {
    *(uint *)(lVar7 + 0x408) = uVar4 + 1;
    lVar7 = *(long *)(lVar6 + 0x58);
    uVar4 = *(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar7 + (ulong)uVar4 * 0x20 + 8);
  lVar7 = *(long *)(param_1 + 0x10);
  uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar6 = *(long *)(lVar7 + 0x38);
  uVar4 = *(uint *)(lVar6 + 0xc08);
  uVar11 = (ulong)uVar4;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar8 = (long *)(lVar6 + uVar11 * 0x20 + 8);
  do {
    uVar10 = uVar11;
    if (uVar4 == uVar10) goto LAB_029396a8;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_02939678;
    plVar8 = plVar8 + 4;
    uVar11 = uVar10 + 1;
  } while (*(short *)(lVar9 + 8) != 3);
  if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_02939678:
    lVar6 = *(long *)(lVar6 + (uVar10 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 3;
      *(undefined4 *)(lVar6 + 0xc) = uVar3;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x20) = lVar6;
    }
  }
LAB_029396a8:
  lVar7 = *(long *)(param_1 + 0x10);
  uVar3 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar6 = *(long *)(lVar7 + 0x38);
  uVar4 = *(uint *)(lVar6 + 0xc08);
  uVar11 = (ulong)uVar4;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar8 = (long *)(lVar6 + uVar11 * 0x20 + 8);
  do {
    uVar10 = uVar11;
    if (uVar4 == uVar10) goto LAB_02939738;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_0293970c;
    plVar8 = plVar8 + 4;
    uVar11 = uVar10 + 1;
  } while (*(short *)(lVar9 + 8) != 4);
  if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_0293970c:
    lVar6 = *(long *)(lVar6 + (uVar10 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 4;
      *(undefined4 *)(lVar6 + 0xc) = uVar3;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x28) = lVar6;
    }
  }
LAB_02939738:
  lVar6 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar6 + 0x38);
  uVar5 = *(uint *)(lVar7 + 0xc08);
  uVar11 = (ulong)uVar5;
  uVar4 = uVar5;
  if (uVar5 < 0x61) {
    uVar4 = 0x60;
  }
  uVar10 = uVar11 << 5 | 8;
  lVar9 = -1;
  do {
    lVar12 = lVar9;
    if ((uVar11 - uVar4) + lVar12 == -1) goto LAB_029397dc;
    sVar1 = *(short *)(*(long *)(lVar7 + uVar10) + 8);
    if (sVar1 == 0) goto LAB_0293979c;
    uVar10 = uVar10 + 0x20;
    lVar9 = lVar12 + 1;
  } while (sVar1 != 0x12);
  if (uVar5 + (int)(lVar12 + 1) < 0x60) {
LAB_0293979c:
    lVar9 = *(long *)(lVar7 + (ulong)(uVar5 + (int)lVar12 + 1) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x12;
      *(uint *)(lVar9 + 0xc) = param_4 & 0xffff;
      *(undefined1 *)(lVar9 + 10) = 4;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x98) = lVar9;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar6 + 0x38);
      uVar11 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_029397dc:
  uVar4 = (uint)uVar11;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar8 = (long *)(lVar7 + uVar11 * 0x20 + 8);
  do {
    uVar10 = uVar11;
    if (uVar4 == uVar10) goto LAB_02939858;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_02939824;
    plVar8 = plVar8 + 4;
    uVar11 = uVar10 + 1;
  } while (*(short *)(lVar9 + 8) != 0x38);
  if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_02939824:
    lVar7 = *(long *)(lVar7 + (uVar10 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 0x38;
      *(undefined1 *)(lVar7 + 10) = 0;
      *(undefined8 *)(lVar7 + 0xc) = 0;
      *(undefined8 *)(lVar7 + 0x14) = 0;
      *(undefined4 *)(lVar7 + 0x1c) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x1c8) = lVar7;
      lVar6 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02939858:
  FUN_0107b310(lVar6,0xb9,8,1);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(*(long *)(lVar7 + 0x78) + 0x1c8);
  if (lVar6 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(lVar6 + 0xc);
  }
  lVar6 = *(long *)(lVar7 + 0x58);
  if (*(uint *)(lVar6 + 0x408) == 0) {
    uVar11 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar6 + (ulong)*(uint *)(lVar6 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar6 + 0x408) = *(int *)(lVar6 + 0x408) + -1;
    lVar6 = *(long *)(lVar7 + 0x58);
    uVar11 = (ulong)*(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(lVar6 + uVar11 * 0x20 + 8);
  lVar6 = *(long *)(lVar7 + 0x38);
  uVar4 = *(uint *)(lVar6 + 0xc08);
  if (uVar4 != 0) {
    if ((uVar4 & 0xffff) < 0x60) {
      uVar11 = (ulong)uVar4 & 0xffff;
      plVar8 = (long *)(lVar6 + uVar11 * 0x20 + 8);
      do {
        uVar11 = uVar11 + 1;
        if (*(short *)(*plVar8 + 8) == 0) break;
        *(undefined2 *)(*plVar8 + 8) = 0;
        plVar8 = plVar8 + 4;
      } while (((uint)uVar11 & 0xffff) != 0x60);
      uVar4 = *(uint *)(lVar6 + 0xc08);
    }
    *(uint *)(lVar6 + 0xc08) = uVar4 - 1;
    *(undefined2 *)(*(long *)(lVar6 + (ulong)(uVar4 - 1) * 0x20 + 8) + 8) = 0;
    uVar11 = (ulong)*(uint *)(lVar6 + 0xc08);
    do {
      if (uVar11 == 0) goto LAB_02939954;
      uVar11 = uVar11 - 1;
      *(int *)(lVar6 + 0xc08) = (int)uVar11;
    } while (*(short *)(*(long *)(lVar6 + (uVar11 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar6 + 0xc08) = (int)uVar11 + 1;
  }
LAB_02939954:
  uVar4 = (**(code **)(*param_3 + 0x140))(param_3);
  uVar4 = uVar4 & 0xffff;
  if (iVar13 == 0) {
    uVar5 = FUN_01633ca0(uVar4,uVar2);
  }
  else {
    uVar5 = iVar13 * uVar4 >> 0xc;
    if (0x800 < (iVar13 * uVar4 & 0xfff)) {
      uVar5 = uVar5 + 1;
    }
  }
  if (uVar5 == 0) {
    uVar4 = 1;
  }
  else if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  return uVar4;
}


