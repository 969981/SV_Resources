/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01678f08; name: FUN_01678f08
 */


void FUN_01678f08(long param_1,undefined4 param_2,uint param_3,long param_4,undefined4 param_5)

{
  short sVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar2 + 0x38);
  uVar5 = *(uint *)(lVar6 + 0xc08);
  if (uVar5 < 0x60) {
    do {
      lVar10 = *(long *)(lVar6 + (ulong)uVar5 * 0x20 + 8);
      if (*(short *)(lVar10 + 8) == 0) {
        if (uVar5 < 0x5f) {
          *(undefined2 *)(lVar10 + 8) = 1;
          *(int *)(lVar6 + 0xc08) = *(int *)(lVar6 + 0xc08) + 1;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(lVar6 + 0xc08) = uVar5;
    } while (uVar5 != 0x60);
  }
  lVar6 = *(long *)(lVar2 + 0x58);
  uVar5 = *(uint *)(lVar6 + 0x408);
  if (uVar5 < 0x1f) {
    *(uint *)(lVar6 + 0x408) = uVar5 + 1;
    lVar6 = *(long *)(lVar2 + 0x58);
    uVar5 = *(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(lVar6 + (ulong)uVar5 * 0x20 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar2 + 0x38);
  uVar3 = *(uint *)(lVar6 + 0xc08);
  uVar7 = (ulong)uVar3;
  uVar5 = uVar3;
  if (uVar3 < 0x61) {
    uVar5 = 0x60;
  }
  uVar8 = uVar7 << 5 | 8;
  lVar10 = -1;
  do {
    lVar11 = lVar10;
    if ((uVar7 - uVar5) + lVar11 == -1) goto LAB_01679040;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar8) + 8);
    if (sVar1 == 0) goto LAB_01679000;
    uVar8 = uVar8 + 0x20;
    lVar10 = lVar11 + 1;
  } while (sVar1 != 2);
  if (uVar3 + (int)(lVar11 + 1) < 0x60) {
LAB_01679000:
    lVar10 = *(long *)(lVar6 + (ulong)(uVar3 + (int)lVar11 + 1) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 2;
      *(undefined4 *)(lVar10 + 0xc) = param_2;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar2 + 0x78) + 0x18) = lVar10;
      lVar2 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar2 + 0x38);
      uVar7 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_01679040:
  uVar3 = (uint)uVar7;
  uVar5 = uVar3;
  if (uVar3 < 0x61) {
    uVar5 = 0x60;
  }
  uVar8 = uVar7 << 5 | 8;
  lVar10 = 0;
  do {
    lVar11 = lVar10;
    if ((uVar7 - uVar5) + lVar11 == 0) goto LAB_016790d4;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar8) + 8);
    if (sVar1 == 0) goto LAB_01679098;
    uVar8 = uVar8 + 0x20;
    lVar10 = lVar11 + 1;
  } while (sVar1 != 0x12);
  if ((uVar3 + (int)(lVar11 + 1)) - 1 < 0x60) {
LAB_01679098:
    lVar10 = *(long *)(lVar6 + (ulong)(uVar3 + (int)lVar11) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x12;
      *(uint *)(lVar10 + 0xc) = param_3 & 0xffff;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar2 + 0x78) + 0x98) = lVar10;
      lVar2 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar2 + 0x38);
      uVar7 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_016790d4:
  uVar3 = *(uint *)(param_4 + 4);
  uVar4 = (uint)uVar7;
  uVar5 = uVar4;
  if (uVar4 < 0x61) {
    uVar5 = 0x60;
  }
  uVar8 = uVar7 << 5 | 8;
  lVar10 = 0;
  do {
    lVar11 = lVar10;
    if ((uVar7 - uVar5) + lVar11 == 0) goto LAB_01679170;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar8) + 8);
    if (sVar1 == 0) goto LAB_01679130;
    uVar8 = uVar8 + 0x20;
    lVar10 = lVar11 + 1;
  } while (sVar1 != 0x6f);
  if ((uVar4 + (int)(lVar11 + 1)) - 1 < 0x60) {
LAB_01679130:
    lVar10 = *(long *)(lVar6 + (ulong)(uVar4 + (int)lVar11) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x6f;
      *(uint *)(lVar10 + 0xc) = uVar3 >> 1 & 1;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar2 + 0x78) + 0x380) = lVar10;
      lVar2 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar2 + 0x38);
      uVar3 = *(uint *)(param_4 + 4);
      uVar7 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_01679170:
  uVar4 = (uint)uVar7;
  uVar5 = uVar4;
  if (uVar4 < 0x61) {
    uVar5 = 0x60;
  }
  uVar8 = uVar7 << 5 | 8;
  lVar10 = 0;
  do {
    lVar11 = lVar10;
    if ((uVar7 - uVar5) + lVar11 == 0) goto LAB_01679208;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar8) + 8);
    if (sVar1 == 0) goto LAB_016791c8;
    uVar8 = uVar8 + 0x20;
    lVar10 = lVar11 + 1;
  } while (sVar1 != 0x70);
  if ((uVar4 + (int)(lVar11 + 1)) - 1 < 0x60) {
LAB_016791c8:
    lVar10 = *(long *)(lVar6 + (ulong)(uVar4 + (int)lVar11) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x70;
      *(uint *)(lVar10 + 0xc) = uVar3 >> 2 & 1;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar2 + 0x78) + 0x388) = lVar10;
      lVar2 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar2 + 0x38);
      uVar3 = *(uint *)(param_4 + 4);
      uVar7 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_01679208:
  uVar4 = (uint)uVar7;
  uVar5 = uVar4;
  if (uVar4 < 0x61) {
    uVar5 = 0x60;
  }
  uVar8 = uVar7 << 5 | 8;
  lVar10 = 0;
  do {
    lVar11 = lVar10;
    if ((uVar7 - uVar5) + lVar11 == 0) goto LAB_016792a0;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar8) + 8);
    if (sVar1 == 0) goto LAB_01679260;
    uVar8 = uVar8 + 0x20;
    lVar10 = lVar11 + 1;
  } while (sVar1 != 0x71);
  if ((uVar4 + (int)(lVar11 + 1)) - 1 < 0x60) {
LAB_01679260:
    lVar10 = *(long *)(lVar6 + (ulong)(uVar4 + (int)lVar11) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x71;
      *(uint *)(lVar10 + 0xc) = uVar3 >> 3 & 1;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar2 + 0x78) + 0x390) = lVar10;
      lVar2 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar2 + 0x38);
      uVar3 = *(uint *)(param_4 + 4);
      uVar7 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_016792a0:
  uVar5 = (uint)uVar7;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar9 = (long *)(lVar6 + uVar7 * 0x20 + 8);
  do {
    uVar8 = uVar7;
    if (uVar5 == uVar8) goto LAB_01679320;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_016792ec;
    plVar9 = plVar9 + 4;
    uVar7 = uVar8 + 1;
  } while (*(short *)(lVar10 + 8) != 0x72);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_016792ec:
    lVar6 = *(long *)(lVar6 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 0x72;
      *(uint *)(lVar6 + 0xc) = uVar3 & 1;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar2 + 0x78) + 0x398) = lVar6;
      lVar2 = *(long *)(param_1 + 0x10);
    }
  }
LAB_01679320:
  FUN_0107b310(lVar2,param_5,8,1);
  lVar2 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar2 + 0x58);
  if (*(uint *)(lVar6 + 0x408) == 0) {
    uVar7 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar6 + (ulong)*(uint *)(lVar6 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar6 + 0x408) = *(int *)(lVar6 + 0x408) + -1;
    lVar6 = *(long *)(lVar2 + 0x58);
    uVar7 = (ulong)*(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(lVar6 + uVar7 * 0x20 + 8);
  lVar2 = *(long *)(lVar2 + 0x38);
  uVar5 = *(uint *)(lVar2 + 0xc08);
  if (uVar5 != 0) {
    if ((uVar5 & 0xffff) < 0x60) {
      uVar7 = (ulong)uVar5 & 0xffff;
      plVar9 = (long *)(lVar2 + uVar7 * 0x20 + 8);
      do {
        uVar7 = uVar7 + 1;
        if (*(short *)(*plVar9 + 8) == 0) break;
        *(undefined2 *)(*plVar9 + 8) = 0;
        plVar9 = plVar9 + 4;
      } while (((uint)uVar7 & 0xffff) != 0x60);
      uVar5 = *(uint *)(lVar2 + 0xc08);
    }
    *(uint *)(lVar2 + 0xc08) = uVar5 - 1;
    *(undefined2 *)(*(long *)(lVar2 + (ulong)(uVar5 - 1) * 0x20 + 8) + 8) = 0;
    uVar7 = (ulong)*(uint *)(lVar2 + 0xc08);
    do {
      if (uVar7 == 0) {
        return;
      }
      uVar7 = uVar7 - 1;
      *(int *)(lVar2 + 0xc08) = (int)uVar7;
    } while (*(short *)(*(long *)(lVar2 + (uVar7 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar2 + 0xc08) = (int)uVar7 + 1;
  }
  return;
}


