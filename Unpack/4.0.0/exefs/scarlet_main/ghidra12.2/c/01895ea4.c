/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01895ea4; name: FUN_01895ea4
 */


bool FUN_01895ea4(long param_1,long *param_2,long *param_3,uint param_4,uint param_5)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  if (param_3 == (long *)0x0) {
    bVar2 = false;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)(lVar4 + 0x38);
    uVar5 = *(uint *)(lVar7 + 0xc08);
    if (uVar5 < 0x60) {
      do {
        lVar9 = *(long *)(lVar7 + (ulong)uVar5 * 0x20 + 8);
        if (*(short *)(lVar9 + 8) == 0) {
          if (uVar5 < 0x5f) {
            *(undefined2 *)(lVar9 + 8) = 1;
            *(int *)(lVar7 + 0xc08) = *(int *)(lVar7 + 0xc08) + 1;
          }
          break;
        }
        uVar5 = uVar5 + 1;
        *(uint *)(lVar7 + 0xc08) = uVar5;
      } while (uVar5 != 0x60);
    }
    lVar7 = *(long *)(lVar4 + 0x58);
    uVar5 = *(uint *)(lVar7 + 0x408);
    if (uVar5 < 0x1f) {
      *(uint *)(lVar7 + 0x408) = uVar5 + 1;
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar5 = *(uint *)(lVar7 + 0x408);
    }
    *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar7 + (ulong)uVar5 * 0x20 + 8);
    lVar7 = *(long *)(param_1 + 0x10);
    uVar3 = (**(code **)(*param_3 + 0x98))(param_3);
    lVar4 = *(long *)(lVar7 + 0x38);
    uVar5 = *(uint *)(lVar4 + 0xc08);
    uVar12 = (ulong)uVar5;
    if (uVar5 < 0x61) {
      uVar5 = 0x60;
    }
    plVar8 = (long *)(lVar4 + uVar12 * 0x20 + 8);
    do {
      uVar10 = uVar12;
      if (uVar5 == uVar10) goto LAB_01895fe8;
      lVar9 = *plVar8;
      if (*(short *)(lVar9 + 8) == 0) goto LAB_01895fb8;
      plVar8 = plVar8 + 4;
      uVar12 = uVar10 + 1;
    } while (*(short *)(lVar9 + 8) != 3);
    if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_01895fb8:
      lVar4 = *(long *)(lVar4 + (uVar10 & 0xffffffff) * 0x20 + 8);
      if (lVar4 != 0) {
        *(undefined2 *)(lVar4 + 8) = 3;
        *(undefined4 *)(lVar4 + 0xc) = uVar3;
        *(undefined1 *)(lVar4 + 10) = 4;
        *(undefined8 *)(lVar4 + 0x10) = 0;
        *(undefined8 *)(lVar4 + 0x18) = 0;
        *(long *)(*(long *)(lVar7 + 0x78) + 0x20) = lVar4;
      }
    }
LAB_01895fe8:
    lVar7 = *(long *)(param_1 + 0x10);
    uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
    lVar4 = *(long *)(lVar7 + 0x38);
    uVar5 = *(uint *)(lVar4 + 0xc08);
    uVar12 = (ulong)uVar5;
    if (uVar5 < 0x61) {
      uVar5 = 0x60;
    }
    plVar8 = (long *)(lVar4 + uVar12 * 0x20 + 8);
    do {
      uVar10 = uVar12;
      if (uVar5 == uVar10) goto LAB_01896078;
      lVar9 = *plVar8;
      if (*(short *)(lVar9 + 8) == 0) goto LAB_0189604c;
      plVar8 = plVar8 + 4;
      uVar12 = uVar10 + 1;
    } while (*(short *)(lVar9 + 8) != 4);
    if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_0189604c:
      lVar4 = *(long *)(lVar4 + (uVar10 & 0xffffffff) * 0x20 + 8);
      if (lVar4 != 0) {
        *(undefined2 *)(lVar4 + 8) = 4;
        *(undefined4 *)(lVar4 + 0xc) = uVar3;
        *(undefined1 *)(lVar4 + 10) = 4;
        *(undefined8 *)(lVar4 + 0x10) = 0;
        *(undefined8 *)(lVar4 + 0x18) = 0;
        *(long *)(*(long *)(lVar7 + 0x78) + 0x28) = lVar4;
      }
    }
LAB_01896078:
    lVar4 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)(lVar4 + 0x38);
    uVar6 = *(uint *)(lVar7 + 0xc08);
    uVar12 = (ulong)uVar6;
    uVar5 = uVar6;
    if (uVar6 < 0x61) {
      uVar5 = 0x60;
    }
    uVar10 = uVar12 << 5 | 8;
    lVar9 = -1;
    do {
      lVar11 = lVar9;
      if ((uVar12 - uVar5) + lVar11 == -1) goto LAB_0189611c;
      sVar1 = *(short *)(*(long *)(lVar7 + uVar10) + 8);
      if (sVar1 == 0) goto LAB_018960dc;
      uVar10 = uVar10 + 0x20;
      lVar9 = lVar11 + 1;
    } while (sVar1 != 0x1e);
    if (uVar6 + (int)(lVar11 + 1) < 0x60) {
LAB_018960dc:
      lVar9 = *(long *)(lVar7 + (ulong)(uVar6 + (int)lVar11 + 1) * 0x20 + 8);
      if (lVar9 != 0) {
        *(undefined2 *)(lVar9 + 8) = 0x1e;
        *(uint *)(lVar9 + 0xc) = param_4 & 0xffff;
        *(undefined1 *)(lVar9 + 10) = 4;
        *(undefined8 *)(lVar9 + 0x10) = 0;
        *(undefined8 *)(lVar9 + 0x18) = 0;
        *(long *)(*(long *)(lVar4 + 0x78) + 0xf8) = lVar9;
        lVar4 = *(long *)(param_1 + 0x10);
        lVar7 = *(long *)(lVar4 + 0x38);
        uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
      }
    }
LAB_0189611c:
    uVar6 = (uint)uVar12;
    uVar5 = uVar6;
    if (uVar6 < 0x61) {
      uVar5 = 0x60;
    }
    uVar10 = uVar12 << 5 | 8;
    lVar9 = 0;
    do {
      lVar11 = lVar9;
      if ((uVar12 - uVar5) + lVar11 == 0) goto LAB_018961b0;
      sVar1 = *(short *)(*(long *)(lVar7 + uVar10) + 8);
      if (sVar1 == 0) goto LAB_01896174;
      uVar10 = uVar10 + 0x20;
      lVar9 = lVar11 + 1;
    } while (sVar1 != 0x6b);
    if ((uVar6 + (int)(lVar11 + 1)) - 1 < 0x60) {
LAB_01896174:
      lVar9 = *(long *)(lVar7 + (ulong)(uVar6 + (int)lVar11) * 0x20 + 8);
      if (lVar9 != 0) {
        *(undefined2 *)(lVar9 + 8) = 0x6b;
        *(uint *)(lVar9 + 0xc) = param_5 & 0xff;
        *(undefined1 *)(lVar9 + 10) = 4;
        *(undefined8 *)(lVar9 + 0x10) = 0;
        *(undefined8 *)(lVar9 + 0x18) = 0;
        *(long *)(*(long *)(lVar4 + 0x78) + 0x360) = lVar9;
        lVar4 = *(long *)(param_1 + 0x10);
        lVar7 = *(long *)(lVar4 + 0x38);
        uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
      }
    }
LAB_018961b0:
    uVar5 = (uint)uVar12;
    if (uVar5 < 0x61) {
      uVar5 = 0x60;
    }
    plVar8 = (long *)(lVar7 + uVar12 * 0x20 + 8);
    do {
      uVar10 = uVar12;
      if (uVar5 == uVar10) goto LAB_01896230;
      lVar9 = *plVar8;
      if (*(short *)(lVar9 + 8) == 0) goto LAB_018961f8;
      plVar8 = plVar8 + 4;
      uVar12 = uVar10 + 1;
    } while (*(short *)(lVar9 + 8) != 0x59);
    if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_018961f8:
      lVar7 = *(long *)(lVar7 + (uVar10 & 0xffffffff) * 0x20 + 8);
      if (lVar7 != 0) {
        *(undefined2 *)(lVar7 + 8) = 0x59;
        *(undefined8 *)(lVar7 + 0xc) = 0;
        *(undefined8 *)(lVar7 + 0x14) = 0;
        *(undefined4 *)(lVar7 + 0x1c) = 0;
        *(undefined1 *)(lVar7 + 10) = 1;
        *(long *)(*(long *)(lVar4 + 0x78) + 0x2d0) = lVar7;
        lVar4 = *(long *)(param_1 + 0x10);
      }
    }
LAB_01896230:
    FUN_0107b310(lVar4,0xe0,8,1);
    lVar7 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(*(long *)(lVar7 + 0x78) + 0x2d0);
    if (lVar4 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(int *)(lVar4 + 0xc) != 0;
    }
    lVar4 = *(long *)(lVar7 + 0x58);
    if (*(uint *)(lVar4 + 0x408) == 0) {
      uVar12 = 0;
    }
    else {
      memset((void *)(*(long *)(lVar4 + (ulong)*(uint *)(lVar4 + 0x408) * 0x20 + 8) + 8),0,0x430);
      *(int *)(lVar4 + 0x408) = *(int *)(lVar4 + 0x408) + -1;
      lVar4 = *(long *)(lVar7 + 0x58);
      uVar12 = (ulong)*(uint *)(lVar4 + 0x408);
    }
    *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(lVar4 + uVar12 * 0x20 + 8);
    lVar4 = *(long *)(lVar7 + 0x38);
    uVar5 = *(uint *)(lVar4 + 0xc08);
    if (uVar5 != 0) {
      if ((uVar5 & 0xffff) < 0x60) {
        uVar12 = (ulong)uVar5 & 0xffff;
        plVar8 = (long *)(lVar4 + uVar12 * 0x20 + 8);
        do {
          uVar12 = uVar12 + 1;
          if (*(short *)(*plVar8 + 8) == 0) break;
          *(undefined2 *)(*plVar8 + 8) = 0;
          plVar8 = plVar8 + 4;
        } while (((uint)uVar12 & 0xffff) != 0x60);
        uVar5 = *(uint *)(lVar4 + 0xc08);
      }
      *(uint *)(lVar4 + 0xc08) = uVar5 - 1;
      *(undefined2 *)(*(long *)(lVar4 + (ulong)(uVar5 - 1) * 0x20 + 8) + 8) = 0;
      uVar12 = (ulong)*(uint *)(lVar4 + 0xc08);
      do {
        if (uVar12 == 0) {
          return bVar2;
        }
        uVar12 = uVar12 - 1;
        *(int *)(lVar4 + 0xc08) = (int)uVar12;
      } while (*(short *)(*(long *)(lVar4 + (uVar12 & 0xffffffff) * 0x20 + 8) + 8) != 1);
      *(int *)(lVar4 + 0xc08) = (int)uVar12 + 1;
    }
  }
  return bVar2;
}


