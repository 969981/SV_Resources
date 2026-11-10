/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293292c; name: FUN_0293292c
 */


bool FUN_0293292c(long param_1,long *param_2,uint param_3,long param_4,int *param_5,
                 undefined4 *param_6)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar5 + 0x38);
  uVar6 = *(uint *)(lVar7 + 0xc08);
  bVar1 = *(byte *)(param_4 + 0xa6);
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
  lVar5 = *(long *)(lVar7 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar10 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar8 = (long *)(lVar5 + uVar10 * 0x20 + 8);
  do {
    uVar11 = uVar10;
    if (uVar6 == uVar11) goto LAB_02932a74;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_02932a40;
    plVar8 = plVar8 + 4;
    uVar10 = uVar11 + 1;
  } while (*(short *)(lVar9 + 8) != 0x12);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_02932a40:
    lVar5 = *(long *)(lVar5 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(uint *)(lVar5 + 0xc) = param_3 & 0xffff;
      *(undefined2 *)(lVar5 + 8) = 0x12;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x98) = lVar5;
      lVar7 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02932a74:
  uVar3 = (**(code **)(*param_2 + 0x98))();
  lVar5 = *(long *)(lVar7 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar10 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar8 = (long *)(lVar5 + uVar10 * 0x20 + 8);
  do {
    uVar11 = uVar10;
    if (uVar6 == uVar11) goto LAB_02932b00;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_02932ad0;
    plVar8 = plVar8 + 4;
    uVar10 = uVar11 + 1;
  } while (*(short *)(lVar9 + 8) != 3);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_02932ad0:
    lVar5 = *(long *)(lVar5 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 3;
      *(undefined4 *)(lVar5 + 0xc) = uVar3;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x20) = lVar5;
    }
  }
LAB_02932b00:
  lVar5 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar5 + 0x38);
  uVar6 = *(uint *)(lVar7 + 0xc08);
  uVar10 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar8 = (long *)(lVar7 + uVar10 * 0x20 + 8);
  do {
    uVar11 = uVar10;
    if (uVar6 == uVar11) goto LAB_02932b84;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_02932b54;
    plVar8 = plVar8 + 4;
    uVar10 = uVar11 + 1;
  } while (*(short *)(lVar9 + 8) != 5);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_02932b54:
    lVar7 = *(long *)(lVar7 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 5;
      *(uint *)(lVar7 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x30) = lVar7;
    }
  }
LAB_02932b84:
  if (bVar1 != 0) {
    uVar10 = 0;
    do {
      uVar6 = (int)uVar10 + 6;
      lVar7 = *(long *)(param_1 + 0x10);
      uVar3 = (**(code **)(**(long **)(param_4 + uVar10 * 8) + 0x98))();
      lVar5 = *(long *)(lVar7 + 0x38);
      uVar14 = *(uint *)(lVar5 + 0xc08);
      uVar11 = (ulong)uVar14;
      if (uVar14 < 0x61) {
        uVar14 = 0x60;
      }
      plVar8 = (long *)(lVar5 + uVar11 * 0x20 + 8);
      do {
        uVar12 = uVar11;
        if (uVar14 == uVar12) goto LAB_02932c30;
        lVar9 = *plVar8;
        if (*(ushort *)(lVar9 + 8) == 0) goto LAB_02932bf8;
        plVar8 = plVar8 + 4;
        uVar11 = uVar12 + 1;
      } while ((uint)*(ushort *)(lVar9 + 8) != (uVar6 & 0xffff));
      if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_02932bf8:
        lVar5 = *(long *)(lVar5 + (uVar12 & 0xffffffff) * 0x20 + 8);
        if (lVar5 != 0) {
          *(ushort *)(lVar5 + 8) = (ushort)uVar6;
          *(undefined4 *)(lVar5 + 0xc) = uVar3;
          *(undefined1 *)(lVar5 + 10) = 4;
          *(undefined8 *)(lVar5 + 0x10) = 0;
          *(undefined8 *)(lVar5 + 0x18) = 0;
          if ((uVar6 & 0xffff) < 0x86) {
            *(long *)(*(long *)(lVar7 + 0x78) + (ulong)(ushort)uVar6 * 8 + 8) = lVar5;
          }
        }
      }
LAB_02932c30:
      uVar10 = uVar10 + 1;
    } while (uVar10 != bVar1);
  }
  lVar5 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar5 + 0x38);
  uVar14 = *(uint *)(lVar7 + 0xc08);
  uVar10 = (ulong)uVar14;
  uVar6 = uVar14;
  if (uVar14 < 0x61) {
    uVar6 = 0x60;
  }
  uVar11 = uVar10 << 5 | 8;
  lVar9 = -1;
  do {
    lVar13 = lVar9;
    if ((uVar10 - uVar6) + lVar13 == -1) goto LAB_02932ce0;
    sVar2 = *(short *)(*(long *)(lVar7 + uVar11) + 8);
    if (sVar2 == 0) goto LAB_02932c9c;
    uVar11 = uVar11 + 0x20;
    lVar9 = lVar13 + 1;
  } while (sVar2 != 2);
  if (uVar14 + (int)(lVar13 + 1) < 0x60) {
LAB_02932c9c:
    lVar9 = *(long *)(lVar7 + (ulong)(uVar14 + (int)lVar13 + 1) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 2;
      *(undefined8 *)(lVar9 + 0xc) = 0;
      *(undefined8 *)(lVar9 + 0x14) = 0;
      *(undefined4 *)(lVar9 + 0x1c) = 0;
      *(undefined1 *)(lVar9 + 10) = 1;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x18) = lVar9;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar5 + 0x38);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_02932ce0:
  uVar6 = (uint)uVar10;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar8 = (long *)(lVar7 + uVar10 * 0x20 + 8);
  do {
    uVar11 = uVar10;
    if (uVar6 == uVar11) goto LAB_02932d5c;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_02932d28;
    plVar8 = plVar8 + 4;
    uVar10 = uVar11 + 1;
  } while (*(short *)(lVar9 + 8) != 4);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_02932d28:
    lVar7 = *(long *)(lVar7 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 4;
      *(undefined1 *)(lVar7 + 10) = 0;
      *(undefined8 *)(lVar7 + 0xc) = 0;
      *(undefined8 *)(lVar7 + 0x14) = 0;
      *(undefined4 *)(lVar7 + 0x1c) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x28) = lVar7;
      lVar5 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02932d5c:
  FUN_0107b310(lVar5,0x1c,8,1);
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x18);
  iVar4 = 0;
  if (lVar5 != 0) {
    iVar4 = *(int *)(lVar5 + 0xc);
  }
  *param_5 = iVar4;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x28);
  uVar3 = 0;
  if (lVar5 != 0) {
    uVar3 = *(undefined4 *)(lVar5 + 0xc);
  }
  *param_6 = uVar3;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar5 + 0x58);
  if (*(uint *)(lVar7 + 0x408) == 0) {
    uVar10 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar7 + (ulong)*(uint *)(lVar7 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar7 + 0x408) = *(int *)(lVar7 + 0x408) + -1;
    lVar7 = *(long *)(lVar5 + 0x58);
    uVar10 = (ulong)*(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar7 + uVar10 * 0x20 + 8);
  lVar5 = *(long *)(lVar5 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  if (uVar6 != 0) {
    if ((uVar6 & 0xffff) < 0x60) {
      uVar10 = (ulong)uVar6 & 0xffff;
      plVar8 = (long *)(lVar5 + uVar10 * 0x20 + 8);
      do {
        uVar10 = uVar10 + 1;
        if (*(short *)(*plVar8 + 8) == 0) break;
        *(undefined2 *)(*plVar8 + 8) = 0;
        plVar8 = plVar8 + 4;
      } while (((uint)uVar10 & 0xffff) != 0x60);
      uVar6 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar6 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar6 - 1) * 0x20 + 8) + 8) = 0;
    uVar10 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar10 == 0) goto LAB_02932e78;
      uVar10 = uVar10 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar10;
    } while (*(short *)(*(long *)(lVar5 + (uVar10 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar10 + 1;
  }
LAB_02932e78:
  return *param_5 != 0;
}


