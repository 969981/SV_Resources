/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293a468; name: FUN_0293a468
 */


void FUN_0293a468(long param_1,undefined4 param_2,uint param_3,uint param_4)

{
  short sVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar2 + 0x38);
  uVar4 = *(uint *)(lVar5 + 0xc08);
  if (uVar4 < 0x60) {
    do {
      lVar10 = *(long *)(lVar5 + (ulong)uVar4 * 0x20 + 8);
      if (*(short *)(lVar10 + 8) == 0) {
        if (uVar4 < 0x5f) {
          *(undefined2 *)(lVar10 + 8) = 1;
          *(int *)(lVar5 + 0xc08) = *(int *)(lVar5 + 0xc08) + 1;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(lVar5 + 0xc08) = uVar4;
    } while (uVar4 != 0x60);
  }
  lVar5 = *(long *)(lVar2 + 0x58);
  uVar4 = *(uint *)(lVar5 + 0x408);
  if (uVar4 < 0x1f) {
    *(uint *)(lVar5 + 0x408) = uVar4 + 1;
    lVar5 = *(long *)(lVar2 + 0x58);
    uVar4 = *(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(lVar5 + (ulong)uVar4 * 0x20 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar2 + 0x38);
  uVar3 = *(uint *)(lVar5 + 0xc08);
  uVar6 = (ulong)uVar3;
  uVar4 = uVar3;
  if (uVar3 < 0x61) {
    uVar4 = 0x60;
  }
  uVar7 = uVar6 << 5 | 8;
  lVar10 = -1;
  do {
    lVar8 = lVar10;
    if ((uVar6 - uVar4) + lVar8 == -1) goto LAB_0293a5ac;
    sVar1 = *(short *)(*(long *)(lVar5 + uVar7) + 8);
    if (sVar1 == 0) goto LAB_0293a56c;
    uVar7 = uVar7 + 0x20;
    lVar10 = lVar8 + 1;
  } while (sVar1 != 2);
  if (uVar3 + (int)(lVar8 + 1) < 0x60) {
LAB_0293a56c:
    lVar10 = *(long *)(lVar5 + (ulong)(uVar3 + (int)lVar8 + 1) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 2;
      *(undefined4 *)(lVar10 + 0xc) = param_2;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar2 + 0x78) + 0x18) = lVar10;
      lVar2 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar2 + 0x38);
      uVar6 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_0293a5ac:
  uVar3 = (uint)uVar6;
  uVar4 = uVar3;
  if (uVar3 < 0x61) {
    uVar4 = 0x60;
  }
  uVar7 = uVar6 << 5 | 8;
  lVar10 = 0;
  do {
    lVar8 = lVar10;
    if ((uVar6 - uVar4) + lVar8 == 0) goto LAB_0293a640;
    sVar1 = *(short *)(*(long *)(lVar5 + uVar7) + 8);
    if (sVar1 == 0) goto LAB_0293a604;
    uVar7 = uVar7 + 0x20;
    lVar10 = lVar8 + 1;
  } while (sVar1 != 0xf);
  if ((uVar3 + (int)(lVar8 + 1)) - 1 < 0x60) {
LAB_0293a604:
    lVar10 = *(long *)(lVar5 + (ulong)(uVar3 + (int)lVar8) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0xf;
      *(uint *)(lVar10 + 0xc) = param_3 & 0xffff;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar2 + 0x78) + 0x80) = lVar10;
      lVar2 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar2 + 0x38);
      uVar6 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_0293a640:
  uVar4 = (uint)uVar6;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar9 = (long *)(lVar5 + uVar6 * 0x20 + 8);
  do {
    uVar7 = uVar6;
    if (uVar4 == uVar7) goto LAB_0293a6c0;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_0293a68c;
    plVar9 = plVar9 + 4;
    uVar6 = uVar7 + 1;
  } while (*(short *)(lVar10 + 8) != 0x10);
  if ((int)(uVar7 + 1) - 1U < 0x60) {
LAB_0293a68c:
    lVar5 = *(long *)(lVar5 + (uVar7 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 0x10;
      *(uint *)(lVar5 + 0xc) = param_4 & 0xffff;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar2 + 0x78) + 0x88) = lVar5;
      lVar2 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0293a6c0:
  FUN_01247308(lVar2,0xb3);
  lVar2 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar2 + 0x58);
  if (*(uint *)(lVar5 + 0x408) == 0) {
    uVar6 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar5 + 0x408) = *(int *)(lVar5 + 0x408) + -1;
    lVar5 = *(long *)(lVar2 + 0x58);
    uVar6 = (ulong)*(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(lVar5 + uVar6 * 0x20 + 8);
  lVar2 = *(long *)(lVar2 + 0x38);
  uVar4 = *(uint *)(lVar2 + 0xc08);
  if (uVar4 != 0) {
    if ((uVar4 & 0xffff) < 0x60) {
      uVar6 = (ulong)uVar4 & 0xffff;
      plVar9 = (long *)(lVar2 + uVar6 * 0x20 + 8);
      do {
        uVar6 = uVar6 + 1;
        if (*(short *)(*plVar9 + 8) == 0) break;
        *(undefined2 *)(*plVar9 + 8) = 0;
        plVar9 = plVar9 + 4;
      } while (((uint)uVar6 & 0xffff) != 0x60);
      uVar4 = *(uint *)(lVar2 + 0xc08);
    }
    *(uint *)(lVar2 + 0xc08) = uVar4 - 1;
    *(undefined2 *)(*(long *)(lVar2 + (ulong)(uVar4 - 1) * 0x20 + 8) + 8) = 0;
    uVar6 = (ulong)*(uint *)(lVar2 + 0xc08);
    do {
      if (uVar6 == 0) goto LAB_0293a7a4;
      uVar6 = uVar6 - 1;
      *(int *)(lVar2 + 0xc08) = (int)uVar6;
    } while (*(short *)(*(long *)(lVar2 + (uVar6 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar2 + 0xc08) = (int)uVar6 + 1;
  }
LAB_0293a7a4:
  lVar2 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar2 + 0x38);
  uVar4 = *(uint *)(lVar5 + 0xc08);
  if (uVar4 < 0x60) {
    do {
      lVar10 = *(long *)(lVar5 + (ulong)uVar4 * 0x20 + 8);
      if (*(short *)(lVar10 + 8) == 0) {
        if (uVar4 < 0x5f) {
          *(undefined2 *)(lVar10 + 8) = 1;
          *(int *)(lVar5 + 0xc08) = *(int *)(lVar5 + 0xc08) + 1;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(lVar5 + 0xc08) = uVar4;
    } while (uVar4 != 0x60);
  }
  lVar5 = *(long *)(lVar2 + 0x58);
  uVar4 = *(uint *)(lVar5 + 0x408);
  if (uVar4 < 0x1f) {
    *(uint *)(lVar5 + 0x408) = uVar4 + 1;
    lVar5 = *(long *)(lVar2 + 0x58);
    uVar4 = *(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(lVar5 + (ulong)uVar4 * 0x20 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar2 + 0x38);
  uVar3 = *(uint *)(lVar5 + 0xc08);
  uVar6 = (ulong)uVar3;
  uVar4 = uVar3;
  if (uVar3 < 0x61) {
    uVar4 = 0x60;
  }
  uVar7 = uVar6 << 5 | 8;
  lVar10 = -1;
  do {
    lVar8 = lVar10;
    if ((uVar6 - uVar4) + lVar8 == -1) goto LAB_0293a8cc;
    sVar1 = *(short *)(*(long *)(lVar5 + uVar7) + 8);
    if (sVar1 == 0) goto LAB_0293a88c;
    uVar7 = uVar7 + 0x20;
    lVar10 = lVar8 + 1;
  } while (sVar1 != 2);
  if (uVar3 + (int)(lVar8 + 1) < 0x60) {
LAB_0293a88c:
    lVar10 = *(long *)(lVar5 + (ulong)(uVar3 + (int)lVar8 + 1) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 2;
      *(undefined4 *)(lVar10 + 0xc) = param_2;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar2 + 0x78) + 0x18) = lVar10;
      lVar2 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar2 + 0x38);
      uVar6 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_0293a8cc:
  uVar3 = (uint)uVar6;
  uVar4 = uVar3;
  if (uVar3 < 0x61) {
    uVar4 = 0x60;
  }
  uVar7 = uVar6 << 5 | 8;
  lVar10 = 0;
  do {
    lVar8 = lVar10;
    if ((uVar6 - uVar4) + lVar8 == 0) goto LAB_0293a95c;
    sVar1 = *(short *)(*(long *)(lVar5 + uVar7) + 8);
    if (sVar1 == 0) goto LAB_0293a920;
    uVar7 = uVar7 + 0x20;
    lVar10 = lVar8 + 1;
  } while (sVar1 != 0xf);
  if ((uVar3 + (int)(lVar8 + 1)) - 1 < 0x60) {
LAB_0293a920:
    lVar10 = *(long *)(lVar5 + (ulong)(uVar3 + (int)lVar8) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0xf;
      *(uint *)(lVar10 + 0xc) = param_3 & 0xffff;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar2 + 0x78) + 0x80) = lVar10;
      lVar2 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar2 + 0x38);
      uVar6 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_0293a95c:
  uVar4 = (uint)uVar6;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar9 = (long *)(lVar5 + uVar6 * 0x20 + 8);
  do {
    uVar7 = uVar6;
    if (uVar4 == uVar7) goto LAB_0293a9d8;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_0293a9a4;
    plVar9 = plVar9 + 4;
    uVar6 = uVar7 + 1;
  } while (*(short *)(lVar10 + 8) != 0x10);
  if ((int)(uVar7 + 1) - 1U < 0x60) {
LAB_0293a9a4:
    lVar5 = *(long *)(lVar5 + (uVar7 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 0x10;
      *(uint *)(lVar5 + 0xc) = param_4 & 0xffff;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar2 + 0x78) + 0x88) = lVar5;
      lVar2 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0293a9d8:
  FUN_0107b310(lVar2,0xb2,8,1);
  lVar2 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar2 + 0x58);
  if (*(uint *)(lVar5 + 0x408) == 0) {
    uVar6 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar5 + 0x408) = *(int *)(lVar5 + 0x408) + -1;
    lVar5 = *(long *)(lVar2 + 0x58);
    uVar6 = (ulong)*(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(lVar5 + uVar6 * 0x20 + 8);
  lVar2 = *(long *)(lVar2 + 0x38);
  uVar4 = *(uint *)(lVar2 + 0xc08);
  if (uVar4 != 0) {
    if ((uVar4 & 0xffff) < 0x60) {
      uVar6 = (ulong)uVar4 & 0xffff;
      plVar9 = (long *)(lVar2 + uVar6 * 0x20 + 8);
      do {
        uVar6 = uVar6 + 1;
        if (*(short *)(*plVar9 + 8) == 0) break;
        *(undefined2 *)(*plVar9 + 8) = 0;
        plVar9 = plVar9 + 4;
      } while (((uint)uVar6 & 0xffff) != 0x60);
      uVar4 = *(uint *)(lVar2 + 0xc08);
    }
    *(uint *)(lVar2 + 0xc08) = uVar4 - 1;
    *(undefined2 *)(*(long *)(lVar2 + (ulong)(uVar4 - 1) * 0x20 + 8) + 8) = 0;
    uVar6 = (ulong)*(uint *)(lVar2 + 0xc08);
    do {
      if (uVar6 == 0) {
        return;
      }
      uVar6 = uVar6 - 1;
      *(int *)(lVar2 + 0xc08) = (int)uVar6;
    } while (*(short *)(*(long *)(lVar2 + (uVar6 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar2 + 0xc08) = (int)uVar6 + 1;
  }
  return;
}


