/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293bf20; name: FUN_0293bf20
 */


void FUN_0293bf20(long param_1,undefined2 *param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5,long *param_6,uint param_7)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar2 = (**(code **)(*param_6 + 0x110))(param_6);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar5 + 0x38);
  uVar6 = *(uint *)(lVar8 + 0xc08);
  if (uVar6 < 0x60) {
    do {
      lVar11 = *(long *)(lVar8 + (ulong)uVar6 * 0x20 + 8);
      if (*(short *)(lVar11 + 8) == 0) {
        if (uVar6 < 0x5f) {
          *(undefined2 *)(lVar11 + 8) = 1;
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
  uVar3 = (**(code **)(*param_5 + 0x98))(param_5);
  lVar5 = *(long *)(lVar8 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar13 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar10 = (long *)(lVar5 + uVar13 * 0x20 + 8);
  do {
    uVar12 = uVar13;
    if (uVar6 == uVar12) goto LAB_0293c088;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_0293c058;
    plVar10 = plVar10 + 4;
    uVar13 = uVar12 + 1;
  } while (*(short *)(lVar11 + 8) != 2);
  if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_0293c058:
    lVar5 = *(long *)(lVar5 + (uVar12 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 2;
      *(undefined4 *)(lVar5 + 0xc) = uVar3;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x18) = lVar5;
    }
  }
LAB_0293c088:
  lVar8 = *(long *)(param_1 + 0x10);
  uVar3 = (**(code **)(*param_6 + 0x98))(param_6);
  lVar5 = *(long *)(lVar8 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar13 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar10 = (long *)(lVar5 + uVar13 * 0x20 + 8);
  do {
    uVar12 = uVar13;
    if (uVar6 == uVar12) goto LAB_0293c11c;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_0293c0ec;
    plVar10 = plVar10 + 4;
    uVar13 = uVar12 + 1;
  } while (*(short *)(lVar11 + 8) != 0x80);
  if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_0293c0ec:
    lVar5 = *(long *)(lVar5 + (uVar12 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 0x80;
      *(undefined4 *)(lVar5 + 0xc) = uVar3;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x408) = lVar5;
    }
  }
LAB_0293c11c:
  lVar5 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar5 + 0x38);
  uVar7 = *(uint *)(lVar8 + 0xc08);
  uVar13 = (ulong)uVar7;
  uVar6 = uVar7;
  if (uVar7 < 0x61) {
    uVar6 = 0x60;
  }
  uVar12 = uVar13 << 5 | 8;
  lVar11 = -1;
  do {
    lVar9 = lVar11;
    if ((uVar13 - uVar6) + lVar9 == -1) goto LAB_0293c1c0;
    sVar1 = *(short *)(*(long *)(lVar8 + uVar12) + 8);
    if (sVar1 == 0) goto LAB_0293c180;
    uVar12 = uVar12 + 0x20;
    lVar11 = lVar9 + 1;
  } while (sVar1 != 0x82);
  if (uVar7 + (int)(lVar9 + 1) < 0x60) {
LAB_0293c180:
    lVar11 = *(long *)(lVar8 + (ulong)(uVar7 + (int)lVar9 + 1) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x82;
      *(uint *)(lVar11 + 0xc) = param_7 & 0xff;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x418) = lVar11;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar5 + 0x38);
      uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_0293c1c0:
  uVar7 = (uint)uVar13;
  uVar6 = uVar7;
  if (uVar7 < 0x61) {
    uVar6 = 0x60;
  }
  uVar12 = uVar13 << 5 | 8;
  lVar11 = 0;
  do {
    lVar9 = lVar11;
    if ((uVar13 - uVar6) + lVar9 == 0) goto LAB_0293c254;
    sVar1 = *(short *)(*(long *)(lVar8 + uVar12) + 8);
    if (sVar1 == 0) goto LAB_0293c218;
    uVar12 = uVar12 + 0x20;
    lVar11 = lVar9 + 1;
  } while (sVar1 != 0x81);
  if ((uVar7 + (int)(lVar9 + 1)) - 1 < 0x60) {
LAB_0293c218:
    lVar11 = *(long *)(lVar8 + (ulong)(uVar7 + (int)lVar9) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x81;
      *(uint *)(lVar11 + 0xc) = uVar2 & 0xffff;
      *(undefined1 *)(lVar11 + 10) = 1;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x410) = lVar11;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar5 + 0x38);
      uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_0293c254:
  uVar2 = (uint)uVar13;
  uVar6 = uVar2;
  if (uVar2 < 0x61) {
    uVar6 = 0x60;
  }
  uVar12 = uVar13 << 5 | 8;
  lVar11 = 0;
  do {
    lVar9 = lVar11;
    if ((uVar13 - uVar6) + lVar9 == 0) goto LAB_0293c2e4;
    sVar1 = *(short *)(*(long *)(lVar8 + uVar12) + 8);
    if (sVar1 == 0) goto LAB_0293c2a8;
    uVar12 = uVar12 + 0x20;
    lVar11 = lVar9 + 1;
  } while (sVar1 != 0x83);
  if ((uVar2 + (int)(lVar9 + 1)) - 1 < 0x60) {
LAB_0293c2a8:
    lVar11 = *(long *)(lVar8 + (ulong)(uVar2 + (int)lVar9) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x83;
      *(undefined8 *)(lVar11 + 0xc) = 0;
      *(undefined4 *)(lVar11 + 0x14) = 0;
      *(undefined8 *)(lVar11 + 0x18) = param_3;
      *(undefined1 *)(lVar11 + 10) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x420) = lVar11;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar5 + 0x38);
      uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_0293c2e4:
  uVar6 = (uint)uVar13;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar10 = (long *)(lVar8 + uVar13 * 0x20 + 8);
  do {
    uVar12 = uVar13;
    if (uVar6 == uVar12) goto LAB_0293c360;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_0293c32c;
    plVar10 = plVar10 + 4;
    uVar13 = uVar12 + 1;
  } while (*(short *)(lVar11 + 8) != 0x84);
  if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_0293c32c:
    lVar8 = *(long *)(lVar8 + (uVar12 & 0xffffffff) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 0x84;
      *(undefined8 *)(lVar8 + 0xc) = 0;
      *(undefined4 *)(lVar8 + 0x14) = 0;
      *(undefined8 *)(lVar8 + 0x18) = param_4;
      *(undefined1 *)(lVar8 + 10) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x428) = lVar8;
      lVar5 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0293c360:
  FUN_0107b310(lVar5,0xf0,8,1);
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x410);
  uVar4 = 0;
  if (lVar5 != 0) {
    uVar4 = (undefined2)*(undefined4 *)(lVar5 + 0xc);
  }
  *param_2 = uVar4;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar5 + 0x58);
  if (*(uint *)(lVar8 + 0x408) == 0) {
    uVar13 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar8 + (ulong)*(uint *)(lVar8 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar8 + 0x408) = *(int *)(lVar8 + 0x408) + -1;
    lVar8 = *(long *)(lVar5 + 0x58);
    uVar13 = (ulong)*(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar8 + uVar13 * 0x20 + 8);
  lVar5 = *(long *)(lVar5 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  if (uVar6 != 0) {
    if ((uVar6 & 0xffff) < 0x60) {
      uVar13 = (ulong)uVar6 & 0xffff;
      plVar10 = (long *)(lVar5 + uVar13 * 0x20 + 8);
      do {
        uVar13 = uVar13 + 1;
        if (*(short *)(*plVar10 + 8) == 0) break;
        *(undefined2 *)(*plVar10 + 8) = 0;
        plVar10 = plVar10 + 4;
      } while (((uint)uVar13 & 0xffff) != 0x60);
      uVar6 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar6 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar6 - 1) * 0x20 + 8) + 8) = 0;
    uVar13 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar13 == 0) {
        return;
      }
      uVar13 = uVar13 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar13;
    } while (*(short *)(*(long *)(lVar5 + (uVar13 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar13 + 1;
  }
  return;
}


