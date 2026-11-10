/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01893740; name: FUN_01893740
 */


uint FUN_01893740(long param_1,uint param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 local_60;
  undefined8 uStack_58;
  
  FUN_0189372c(&local_60);
  uVar3 = FUN_01893e2c(param_2);
  uVar2 = FUN_01893e94(param_2);
  uVar4 = FUN_01893e60(param_2);
  FUN_01893efc(*(undefined8 *)(*(long *)(param_1 + 0x18) + 8),uVar2,param_3,&local_60,
               *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10));
  lVar6 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar6 + 0x38);
  uVar7 = *(uint *)(lVar11 + 0xc08);
  if (uVar7 < 0x60) {
    do {
      lVar17 = *(long *)(lVar11 + (ulong)uVar7 * 0x20 + 8);
      if (*(short *)(lVar17 + 8) == 0) {
        if (uVar7 < 0x5f) {
          *(undefined2 *)(lVar17 + 8) = 1;
          *(int *)(lVar11 + 0xc08) = *(int *)(lVar11 + 0xc08) + 1;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      *(uint *)(lVar11 + 0xc08) = uVar7;
    } while (uVar7 != 0x60);
  }
  lVar11 = *(long *)(lVar6 + 0x58);
  uVar7 = *(uint *)(lVar11 + 0x408);
  if (uVar7 < 0x1f) {
    *(uint *)(lVar11 + 0x408) = uVar7 + 1;
    lVar11 = *(long *)(lVar6 + 0x58);
    uVar7 = *(uint *)(lVar11 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar11 + (ulong)uVar7 * 0x20 + 8);
  lVar11 = *(long *)(param_1 + 0x10);
  uVar5 = (**(code **)(*param_4 + 0x98))(param_4);
  lVar6 = *(long *)(lVar11 + 0x38);
  uVar7 = *(uint *)(lVar6 + 0xc08);
  uVar18 = (ulong)uVar7;
  if (uVar7 < 0x61) {
    uVar7 = 0x60;
  }
  plVar15 = (long *)(lVar6 + uVar18 * 0x20 + 8);
  do {
    uVar12 = uVar18;
    if (uVar7 == uVar12) goto LAB_018938cc;
    lVar17 = *plVar15;
    if (*(short *)(lVar17 + 8) == 0) goto LAB_018938a0;
    plVar15 = plVar15 + 4;
    uVar18 = uVar12 + 1;
  } while (*(short *)(lVar17 + 8) != 4);
  if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_018938a0:
    lVar6 = *(long *)(lVar6 + (uVar12 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 4;
      *(undefined4 *)(lVar6 + 0xc) = uVar5;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x28) = lVar6;
    }
  }
LAB_018938cc:
  lVar11 = *(long *)(param_1 + 0x10);
  uVar5 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar6 = *(long *)(lVar11 + 0x38);
  uVar7 = *(uint *)(lVar6 + 0xc08);
  uVar18 = (ulong)uVar7;
  if (uVar7 < 0x61) {
    uVar7 = 0x60;
  }
  plVar15 = (long *)(lVar6 + uVar18 * 0x20 + 8);
  do {
    uVar12 = uVar18;
    if (uVar7 == uVar12) goto LAB_01893960;
    lVar17 = *plVar15;
    if (*(short *)(lVar17 + 8) == 0) goto LAB_01893930;
    plVar15 = plVar15 + 4;
    uVar18 = uVar12 + 1;
  } while (*(short *)(lVar17 + 8) != 3);
  if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_01893930:
    lVar6 = *(long *)(lVar6 + (uVar12 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 3;
      *(undefined4 *)(lVar6 + 0xc) = uVar5;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x20) = lVar6;
    }
  }
LAB_01893960:
  lVar6 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar6 + 0x38);
  uVar8 = *(uint *)(lVar11 + 0xc08);
  uVar18 = (ulong)uVar8;
  uVar7 = uVar8;
  if (uVar8 < 0x61) {
    uVar7 = 0x60;
  }
  uVar12 = uVar18 << 5 | 8;
  lVar17 = -1;
  do {
    lVar14 = lVar17;
    if ((uVar18 - uVar7) + lVar14 == -1) goto LAB_01893a04;
    sVar1 = *(short *)(*(long *)(lVar11 + uVar12) + 8);
    if (sVar1 == 0) goto LAB_018939c4;
    uVar12 = uVar12 + 0x20;
    lVar17 = lVar14 + 1;
  } while (sVar1 != 0x12);
  if (uVar8 + (int)(lVar14 + 1) < 0x60) {
LAB_018939c4:
    lVar17 = *(long *)(lVar11 + (ulong)(uVar8 + (int)lVar14 + 1) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 0x12;
      *(uint *)(lVar17 + 0xc) = param_2 & 0xffff;
      *(undefined1 *)(lVar17 + 10) = 4;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x98) = lVar17;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar6 + 0x38);
      uVar18 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_01893a04:
  uVar8 = (uint)uVar18;
  uVar7 = uVar8;
  if (uVar8 < 0x61) {
    uVar7 = 0x60;
  }
  uVar12 = uVar18 << 5 | 8;
  lVar17 = 0;
  do {
    lVar14 = lVar17;
    if ((uVar18 - uVar7) + lVar14 == 0) goto LAB_01893a98;
    sVar1 = *(short *)(*(long *)(lVar11 + uVar12) + 8);
    if (sVar1 == 0) goto LAB_01893a58;
    uVar12 = uVar12 + 0x20;
    lVar17 = lVar14 + 1;
  } while (sVar1 != 0x1f);
  if ((uVar8 + (int)(lVar14 + 1)) - 1 < 0x60) {
LAB_01893a58:
    lVar17 = *(long *)(lVar11 + (ulong)(uVar8 + (int)lVar14) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 0x1f;
      *(undefined8 *)(lVar17 + 0xc) = 0;
      *(undefined4 *)(lVar17 + 0x14) = 0;
      *(undefined8 **)(lVar17 + 0x18) = &local_60;
      *(undefined1 *)(lVar17 + 10) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x100) = lVar17;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar6 + 0x38);
      uVar18 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_01893a98:
  uVar8 = (uint)uVar18;
  uVar7 = uVar8;
  if (uVar8 < 0x61) {
    uVar7 = 0x60;
  }
  uVar12 = uVar18 << 5 | 8;
  lVar17 = 0;
  do {
    lVar14 = lVar17;
    if ((uVar18 - uVar7) + lVar14 == 0) goto LAB_01893b28;
    sVar1 = *(short *)(*(long *)(lVar11 + uVar12) + 8);
    if (sVar1 == 0) goto LAB_01893af0;
    uVar12 = uVar12 + 0x20;
    lVar17 = lVar14 + 1;
  } while (sVar1 != 0x1e);
  if ((uVar8 + (int)(lVar14 + 1)) - 1 < 0x60) {
LAB_01893af0:
    lVar17 = *(long *)(lVar11 + (ulong)(uVar8 + (int)lVar14) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 0x1e;
      *(uint *)(lVar17 + 0xc) = uVar3 & 0xffff;
      *(undefined1 *)(lVar17 + 10) = 0;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0xf8) = lVar17;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar6 + 0x38);
      uVar18 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_01893b28:
  uVar3 = (uint)uVar18;
  uVar7 = uVar3;
  if (uVar3 < 0x61) {
    uVar7 = 0x60;
  }
  uVar12 = uVar18 << 5 | 8;
  lVar17 = 0;
  do {
    lVar14 = lVar17;
    if ((uVar18 - uVar7) + lVar14 == 0) goto LAB_01893bbc;
    sVar1 = *(short *)(*(long *)(lVar11 + uVar12) + 8);
    if (sVar1 == 0) goto LAB_01893b7c;
    uVar12 = uVar12 + 0x20;
    lVar17 = lVar14 + 1;
  } while (sVar1 != 0x48);
  if ((uVar3 + (int)(lVar14 + 1)) - 1 < 0x60) {
LAB_01893b7c:
    lVar17 = *(long *)(lVar11 + (ulong)(uVar3 + (int)lVar14) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 0x48;
      *(undefined8 *)(lVar17 + 0xc) = 0;
      *(undefined8 *)(lVar17 + 0x14) = 0;
      *(undefined4 *)(lVar17 + 0x1c) = 0;
      *(undefined1 *)(lVar17 + 10) = 1;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x248) = lVar17;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar6 + 0x38);
      uVar18 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_01893bbc:
  uVar7 = (uint)uVar18;
  if (uVar7 < 0x61) {
    uVar7 = 0x60;
  }
  plVar15 = (long *)(lVar11 + uVar18 * 0x20 + 8);
  do {
    uVar12 = uVar18;
    if (uVar7 == uVar12) goto LAB_01893c34;
    lVar17 = *plVar15;
    if (*(short *)(lVar17 + 8) == 0) goto LAB_01893c04;
    plVar15 = plVar15 + 4;
    uVar18 = uVar12 + 1;
  } while (*(short *)(lVar17 + 8) != 0x29);
  if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_01893c04:
    lVar11 = *(long *)(lVar11 + (uVar12 & 0xffffffff) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x29;
      *(undefined4 *)(lVar11 + 0xc) = uVar4;
      *(undefined1 *)(lVar11 + 10) = 0;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x150) = lVar11;
      lVar6 = *(long *)(param_1 + 0x10);
    }
  }
LAB_01893c34:
  FUN_0107b310(lVar6,0x84,8,1);
  lVar11 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar11 + 0x78);
  if (*(long *)(lVar6 + 0xf8) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(*(long *)(lVar6 + 0xf8) + 0xc);
  }
  if (*(long *)(lVar6 + 0x150) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(*(long *)(lVar6 + 0x150) + 0xc);
  }
  if (*(long *)(lVar6 + 0x248) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(*(long *)(lVar6 + 0x248) + 0xc);
  }
  lVar6 = *(long *)(lVar11 + 0x58);
  if (*(uint *)(lVar6 + 0x408) == 0) {
    uVar18 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar6 + (ulong)*(uint *)(lVar6 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar6 + 0x408) = *(int *)(lVar6 + 0x408) + -1;
    lVar6 = *(long *)(lVar11 + 0x58);
    uVar18 = (ulong)*(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)(lVar6 + uVar18 * 0x20 + 8);
  lVar6 = *(long *)(lVar11 + 0x38);
  uVar9 = *(uint *)(lVar6 + 0xc08);
  if (uVar9 != 0) {
    if ((uVar9 & 0xffff) < 0x60) {
      uVar18 = (ulong)uVar9 & 0xffff;
      plVar15 = (long *)(lVar6 + uVar18 * 0x20 + 8);
      do {
        uVar18 = uVar18 + 1;
        if (*(short *)(*plVar15 + 8) == 0) break;
        *(undefined2 *)(*plVar15 + 8) = 0;
        plVar15 = plVar15 + 4;
      } while (((uint)uVar18 & 0xffff) != 0x60);
      uVar9 = *(uint *)(lVar6 + 0xc08);
    }
    *(uint *)(lVar6 + 0xc08) = uVar9 - 1;
    *(undefined2 *)(*(long *)(lVar6 + (ulong)(uVar9 - 1) * 0x20 + 8) + 8) = 0;
    uVar18 = (ulong)*(uint *)(lVar6 + 0xc08);
    do {
      if (uVar18 == 0) goto LAB_01893d48;
      uVar18 = uVar18 - 1;
      *(int *)(lVar6 + 0xc08) = (int)uVar18;
    } while (*(short *)(*(long *)(lVar6 + (uVar18 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar6 + 0xc08) = (int)uVar18 + 1;
  }
LAB_01893d48:
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49a) >> 5 & 1) == 0) {
    if ((uVar7 & 0xffff) == 0) {
      return 0;
    }
    if ((int)uVar3 < 1) {
      return 0;
    }
    if ((uVar8 & 0xff) != 0) {
      return 0;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
    *(long *)(lVar6 + 0x20) = *(long *)(lVar6 + 0x20) + 1;
    uVar18 = *(ulong *)(lVar6 + 8);
    uVar16 = uVar18 ^ *(ulong *)(lVar6 + 0x10);
    uVar12 = uVar16 >> 0x1b | uVar16 << 0x25;
    uVar16 = uVar16 ^ (uVar18 >> 0x28 | uVar18 << 0x18) ^ uVar16 << 0x10;
    uVar8 = (int)uVar18 + (int)*(ulong *)(lVar6 + 0x10);
    while (99 < (uVar8 & 0x7f)) {
      uVar18 = uVar16 ^ uVar12;
      iVar10 = (int)uVar12;
      iVar13 = (int)uVar16;
      uVar12 = uVar18 >> 0x1b | uVar18 << 0x25;
      uVar16 = uVar18 ^ (uVar16 >> 0x28 | uVar16 << 0x18) ^ uVar18 << 0x10;
      uVar8 = iVar13 + iVar10;
    }
    *(ulong *)(lVar6 + 8) = uVar16;
    *(ulong *)(lVar6 + 0x10) = uVar12;
    if ((uVar8 & 0x7f) < uVar3) {
      *param_5 = local_60;
      param_5[1] = uStack_58;
      return uVar7;
    }
  }
  return 0;
}


