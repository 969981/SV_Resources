/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01481bf4; name: FUN_01481bf4
 */


void FUN_01481bf4(long param_1,undefined4 param_2,long *param_3,uint param_4,undefined4 param_5,
                 uint param_6)

{
  short sVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar3 + 0x38);
  uVar4 = *(uint *)(lVar6 + 0xc08);
  if (uVar4 < 0x60) {
    do {
      lVar9 = *(long *)(lVar6 + (ulong)uVar4 * 0x20 + 8);
      if (*(short *)(lVar9 + 8) == 0) {
        if (uVar4 < 0x5f) {
          *(undefined2 *)(lVar9 + 8) = 1;
          *(int *)(lVar6 + 0xc08) = *(int *)(lVar6 + 0xc08) + 1;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(lVar6 + 0xc08) = uVar4;
    } while (uVar4 != 0x60);
  }
  lVar6 = *(long *)(lVar3 + 0x58);
  uVar4 = *(uint *)(lVar6 + 0x408);
  if (uVar4 < 0x1f) {
    *(uint *)(lVar6 + 0x408) = uVar4 + 1;
    lVar6 = *(long *)(lVar3 + 0x58);
    uVar4 = *(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(lVar6 + (ulong)uVar4 * 0x20 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(lVar6 + 0x38);
  uVar4 = *(uint *)(lVar3 + 0xc08);
  uVar10 = (ulong)uVar4;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar8 = (long *)(lVar3 + uVar10 * 0x20 + 8);
  do {
    uVar11 = uVar10;
    if (uVar4 == uVar11) goto LAB_01481d2c;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_01481cf8;
    plVar8 = plVar8 + 4;
    uVar10 = uVar11 + 1;
  } while (*(short *)(lVar9 + 8) != 3);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_01481cf8:
    lVar3 = *(long *)(lVar3 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar3 != 0) {
      *(undefined2 *)(lVar3 + 8) = 3;
      *(undefined4 *)(lVar3 + 0xc) = param_2;
      *(undefined1 *)(lVar3 + 10) = 4;
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x20) = lVar3;
      lVar6 = *(long *)(param_1 + 0x10);
    }
  }
LAB_01481d2c:
  uVar2 = (**(code **)(*param_3 + 0x98))();
  lVar3 = *(long *)(lVar6 + 0x38);
  uVar4 = *(uint *)(lVar3 + 0xc08);
  uVar10 = (ulong)uVar4;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar8 = (long *)(lVar3 + uVar10 * 0x20 + 8);
  do {
    uVar11 = uVar10;
    if (uVar4 == uVar11) goto LAB_01481db8;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_01481d88;
    plVar8 = plVar8 + 4;
    uVar10 = uVar11 + 1;
  } while (*(short *)(lVar9 + 8) != 2);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_01481d88:
    lVar3 = *(long *)(lVar3 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar3 != 0) {
      *(undefined2 *)(lVar3 + 8) = 2;
      *(undefined4 *)(lVar3 + 0xc) = uVar2;
      *(undefined1 *)(lVar3 + 10) = 4;
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x18) = lVar3;
    }
  }
LAB_01481db8:
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar3 + 0x38);
  uVar5 = *(uint *)(lVar6 + 0xc08);
  uVar10 = (ulong)uVar5;
  uVar4 = uVar5;
  if (uVar5 < 0x61) {
    uVar4 = 0x60;
  }
  uVar11 = uVar10 << 5 | 8;
  lVar9 = -1;
  do {
    lVar7 = lVar9;
    if ((uVar10 - uVar4) + lVar7 == -1) goto LAB_01481e5c;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar11) + 8);
    if (sVar1 == 0) goto LAB_01481e1c;
    uVar11 = uVar11 + 0x20;
    lVar9 = lVar7 + 1;
  } while (sVar1 != 0x22);
  if (uVar5 + (int)(lVar7 + 1) < 0x60) {
LAB_01481e1c:
    lVar9 = *(long *)(lVar6 + (ulong)(uVar5 + (int)lVar7 + 1) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x22;
      *(uint *)(lVar9 + 0xc) = param_4 & 0xff;
      *(undefined1 *)(lVar9 + 10) = 4;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x118) = lVar9;
      lVar3 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar3 + 0x38);
      uVar10 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_01481e5c:
  uVar5 = (uint)uVar10;
  uVar4 = uVar5;
  if (uVar5 < 0x61) {
    uVar4 = 0x60;
  }
  uVar11 = uVar10 << 5 | 8;
  lVar9 = 0;
  do {
    lVar7 = lVar9;
    if ((uVar10 - uVar4) + lVar7 == 0) goto LAB_01481eec;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar11) + 8);
    if (sVar1 == 0) goto LAB_01481eb0;
    uVar11 = uVar11 + 0x20;
    lVar9 = lVar7 + 1;
  } while (sVar1 != 0x23);
  if ((uVar5 + (int)(lVar7 + 1)) - 1 < 0x60) {
LAB_01481eb0:
    lVar9 = *(long *)(lVar6 + (ulong)(uVar5 + (int)lVar7) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x23;
      *(undefined4 *)(lVar9 + 0xc) = param_5;
      *(undefined1 *)(lVar9 + 10) = 4;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x120) = lVar9;
      lVar3 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar3 + 0x38);
      uVar10 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_01481eec:
  uVar4 = (uint)uVar10;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar8 = (long *)(lVar6 + uVar10 * 0x20 + 8);
  do {
    uVar11 = uVar10;
    if (uVar4 == uVar11) goto LAB_01481f6c;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_01481f38;
    plVar8 = plVar8 + 4;
    uVar10 = uVar11 + 1;
  } while (*(short *)(lVar9 + 8) != 0x68);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_01481f38:
    lVar6 = *(long *)(lVar6 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 0x68;
      *(uint *)(lVar6 + 0xc) = param_6 & 0xff;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x348) = lVar6;
      lVar3 = *(long *)(param_1 + 0x10);
    }
  }
LAB_01481f6c:
  FUN_0107b310(lVar3,0x7c,8,1);
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar3 + 0x58);
  if (*(uint *)(lVar6 + 0x408) == 0) {
    uVar10 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar6 + (ulong)*(uint *)(lVar6 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar6 + 0x408) = *(int *)(lVar6 + 0x408) + -1;
    lVar6 = *(long *)(lVar3 + 0x58);
    uVar10 = (ulong)*(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(lVar6 + uVar10 * 0x20 + 8);
  lVar3 = *(long *)(lVar3 + 0x38);
  uVar4 = *(uint *)(lVar3 + 0xc08);
  if (uVar4 != 0) {
    if ((uVar4 & 0xffff) < 0x60) {
      uVar10 = (ulong)uVar4 & 0xffff;
      plVar8 = (long *)(lVar3 + uVar10 * 0x20 + 8);
      do {
        uVar10 = uVar10 + 1;
        if (*(short *)(*plVar8 + 8) == 0) break;
        *(undefined2 *)(*plVar8 + 8) = 0;
        plVar8 = plVar8 + 4;
      } while (((uint)uVar10 & 0xffff) != 0x60);
      uVar4 = *(uint *)(lVar3 + 0xc08);
    }
    *(uint *)(lVar3 + 0xc08) = uVar4 - 1;
    *(undefined2 *)(*(long *)(lVar3 + (ulong)(uVar4 - 1) * 0x20 + 8) + 8) = 0;
    uVar10 = (ulong)*(uint *)(lVar3 + 0xc08);
    do {
      if (uVar10 == 0) {
        return;
      }
      uVar10 = uVar10 - 1;
      *(int *)(lVar3 + 0xc08) = (int)uVar10;
    } while (*(short *)(*(long *)(lVar3 + (uVar10 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar3 + 0xc08) = (int)uVar10 + 1;
  }
  return;
}


