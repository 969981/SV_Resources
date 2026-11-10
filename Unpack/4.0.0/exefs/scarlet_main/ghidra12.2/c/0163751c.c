/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0163751c; name: FUN_0163751c
 */


undefined4 FUN_0163751c(long param_1,long *param_2,long *param_3,uint param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  
  if (param_3 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
  }
  lVar5 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar5 + 0x38);
  uVar6 = *(uint *)(lVar8 + 0xc08);
  if (uVar6 < 0x60) {
    do {
      lVar12 = *(long *)(lVar8 + (ulong)uVar6 * 0x20 + 8);
      if (*(short *)(lVar12 + 8) == 0) {
        if (uVar6 < 0x5f) {
          *(undefined2 *)(lVar12 + 8) = 1;
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
  uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar5 = *(long *)(lVar8 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar13 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar11 = (long *)(lVar5 + uVar13 * 0x20 + 8);
  do {
    uVar9 = uVar13;
    if (uVar6 == uVar9) goto LAB_01637670;
    lVar12 = *plVar11;
    if (*(short *)(lVar12 + 8) == 0) goto LAB_01637640;
    plVar11 = plVar11 + 4;
    uVar13 = uVar9 + 1;
  } while (*(short *)(lVar12 + 8) != 3);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_01637640:
    lVar5 = *(long *)(lVar5 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 3;
      *(undefined4 *)(lVar5 + 0xc) = uVar3;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x20) = lVar5;
    }
  }
LAB_01637670:
  lVar5 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar5 + 0x38);
  uVar7 = *(uint *)(lVar8 + 0xc08);
  uVar13 = (ulong)uVar7;
  uVar6 = uVar7;
  if (uVar7 < 0x61) {
    uVar6 = 0x60;
  }
  uVar9 = uVar13 << 5 | 8;
  lVar12 = -1;
  do {
    lVar10 = lVar12;
    if ((uVar13 - uVar6) + lVar10 == -1) goto LAB_0163770c;
    sVar4 = *(short *)(*(long *)(lVar8 + uVar9) + 8);
    if (sVar4 == 0) goto LAB_016376d0;
    uVar9 = uVar9 + 0x20;
    lVar12 = lVar10 + 1;
  } while (sVar4 != 4);
  if (uVar7 + (int)(lVar10 + 1) < 0x60) {
LAB_016376d0:
    lVar12 = *(long *)(lVar8 + (ulong)(uVar7 + (int)lVar10 + 1) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 4;
      *(undefined4 *)(lVar12 + 0xc) = uVar2;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x28) = lVar12;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar5 + 0x38);
      uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_0163770c:
  uVar7 = (uint)uVar13;
  uVar6 = uVar7;
  if (uVar7 < 0x61) {
    uVar6 = 0x60;
  }
  uVar9 = uVar13 << 5 | 8;
  lVar12 = 0;
  do {
    lVar10 = lVar12;
    if ((uVar13 - uVar6) + lVar10 == 0) goto LAB_016377ac;
    sVar4 = *(short *)(*(long *)(lVar8 + uVar9) + 8);
    if (sVar4 == 0) goto LAB_01637760;
    uVar9 = uVar9 + 0x20;
    lVar12 = lVar10 + 1;
  } while (sVar4 != 0x38);
  if ((uVar7 + (int)(lVar10 + 1)) - 1 < 0x60) {
LAB_01637760:
    lVar12 = *(long *)(lVar8 + (ulong)(uVar7 + (int)lVar10) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x38;
      *(undefined8 *)(lVar12 + 0xc) = 0x19a00001000;
      *(undefined4 *)(lVar12 + 0x14) = 0x20000;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(undefined1 *)(lVar12 + 10) = 3;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x1c8) = lVar12;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar5 + 0x38);
      uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_016377ac:
  uVar6 = (uint)uVar13;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar11 = (long *)(lVar8 + uVar13 * 0x20 + 8);
  do {
    uVar9 = uVar13;
    if (uVar6 == uVar9) goto LAB_01637828;
    lVar12 = *plVar11;
    if (*(short *)(lVar12 + 8) == 0) goto LAB_016377f8;
    plVar11 = plVar11 + 4;
    uVar13 = uVar9 + 1;
  } while (*(short *)(lVar12 + 8) != 0x23);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_016377f8:
    lVar8 = *(long *)(lVar8 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 0x23;
      *(uint *)(lVar8 + 0xc) = param_4 & 0xffff;
      *(undefined1 *)(lVar8 + 10) = 0;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x120) = lVar8;
      lVar5 = *(long *)(param_1 + 0x10);
    }
  }
LAB_01637828:
  FUN_0107b310(lVar5,0xb6,8,1);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(*(long *)(lVar5 + 0x78) + 0x120);
  sVar4 = 0;
  if (lVar8 != 0) {
    sVar4 = *(short *)(lVar8 + 0xc);
  }
  lVar8 = *(long *)(*(long *)(lVar5 + 0x78) + 0x1c8);
  if (lVar8 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar8 + 0xc);
  }
  if (sVar4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_016379c0(sVar4,uVar2);
    lVar5 = *(long *)(param_1 + 0x10);
  }
  FUN_016fa4dc(lVar5,0x23,uVar1);
  FUN_0107b310(*(undefined8 *)(param_1 + 0x10),0xb7,8,1);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(*(long *)(lVar8 + 0x78) + 0x120);
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar5 + 0xc);
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
      plVar11 = (long *)(lVar5 + uVar13 * 0x20 + 8);
      do {
        uVar13 = uVar13 + 1;
        if (*(short *)(*plVar11 + 8) == 0) break;
        *(undefined2 *)(*plVar11 + 8) = 0;
        plVar11 = plVar11 + 4;
      } while (((uint)uVar13 & 0xffff) != 0x60);
      uVar6 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar6 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar6 - 1) * 0x20 + 8) + 8) = 0;
    uVar13 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar13 == 0) {
        return uVar2;
      }
      uVar13 = uVar13 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar13;
    } while (*(short *)(*(long *)(lVar5 + (uVar13 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar13 + 1;
  }
  return uVar2;
}


