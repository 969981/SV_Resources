/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02935950; name: FUN_02935950
 */


void FUN_02935950(long param_1,byte *param_2,byte *param_3,undefined8 param_4,long *param_5)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  
  *param_2 = 0;
  *param_3 = 0;
  lVar6 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar6 + 0x38);
  uVar7 = *(uint *)(lVar8 + 0xc08);
  if (uVar7 < 0x60) {
    do {
      lVar11 = *(long *)(lVar8 + (ulong)uVar7 * 0x20 + 8);
      if (*(short *)(lVar11 + 8) == 0) {
        if (uVar7 < 0x5f) {
          *(undefined2 *)(lVar11 + 8) = 1;
          *(int *)(lVar8 + 0xc08) = *(int *)(lVar8 + 0xc08) + 1;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      *(uint *)(lVar8 + 0xc08) = uVar7;
    } while (uVar7 != 0x60);
  }
  lVar8 = *(long *)(lVar6 + 0x58);
  uVar7 = *(uint *)(lVar8 + 0x408);
  if (uVar7 < 0x1f) {
    *(uint *)(lVar8 + 0x408) = uVar7 + 1;
    lVar8 = *(long *)(lVar6 + 0x58);
    uVar7 = *(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar8 + (ulong)uVar7 * 0x20 + 8);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar8 + 0x38);
  uVar1 = *(uint *)(lVar6 + 0xc08);
  uVar9 = (ulong)uVar1;
  bVar2 = *param_2;
  uVar7 = uVar1;
  if (uVar1 < 0x61) {
    uVar7 = 0x60;
  }
  uVar12 = uVar9 << 5 | 8;
  lVar11 = -1;
  do {
    lVar13 = lVar11;
    if ((uVar9 - uVar7) + lVar13 == -1) goto LAB_02935aa0;
    sVar3 = *(short *)(*(long *)(lVar6 + uVar12) + 8);
    if (sVar3 == 0) goto LAB_02935a60;
    uVar12 = uVar12 + 0x20;
    lVar11 = lVar13 + 1;
  } while (sVar3 != 0x48);
  if (uVar1 + (int)(lVar13 + 1) < 0x60) {
LAB_02935a60:
    lVar11 = *(long *)(lVar6 + (ulong)(uVar1 + (int)lVar13 + 1) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x48;
      *(uint *)(lVar11 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar11 + 10) = 1;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x248) = lVar11;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar8 + 0x38);
      uVar9 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_02935aa0:
  bVar2 = *param_3;
  uVar7 = (uint)uVar9;
  if (uVar7 < 0x61) {
    uVar7 = 0x60;
  }
  plVar10 = (long *)(lVar6 + uVar9 * 0x20 + 8);
  do {
    uVar12 = uVar9;
    if (uVar7 == uVar12) goto LAB_02935b1c;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_02935aec;
    plVar10 = plVar10 + 4;
    uVar9 = uVar12 + 1;
  } while (*(short *)(lVar11 + 8) != 0x75);
  if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_02935aec:
    lVar6 = *(long *)(lVar6 + (uVar12 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 0x75;
      *(uint *)(lVar6 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar6 + 10) = 0;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x3b0) = lVar6;
      lVar8 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02935b1c:
  uVar5 = (**(code **)(*param_5 + 0x98))(param_5);
  lVar6 = *(long *)(lVar8 + 0x38);
  uVar7 = *(uint *)(lVar6 + 0xc08);
  uVar9 = (ulong)uVar7;
  if (uVar7 < 0x61) {
    uVar7 = 0x60;
  }
  plVar10 = (long *)(lVar6 + uVar9 * 0x20 + 8);
  do {
    uVar12 = uVar9;
    if (uVar7 == uVar12) goto LAB_02935ba8;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_02935b7c;
    plVar10 = plVar10 + 4;
    uVar9 = uVar12 + 1;
  } while (*(short *)(lVar11 + 8) != 4);
  if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_02935b7c:
    lVar6 = *(long *)(lVar6 + (uVar12 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 4;
      *(undefined4 *)(lVar6 + 0xc) = uVar5;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x28) = lVar6;
    }
  }
LAB_02935ba8:
  FUN_0107b310(*(undefined8 *)(param_1 + 0x10),0xb5,8,1);
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x248);
  bVar4 = false;
  if (lVar6 != 0) {
    bVar4 = *(int *)(lVar6 + 0xc) != 0;
  }
  *param_2 = bVar4;
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x3b0);
  bVar4 = false;
  if (lVar6 != 0) {
    bVar4 = *(int *)(lVar6 + 0xc) != 0;
  }
  *param_3 = bVar4;
  lVar6 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar6 + 0x58);
  if (*(uint *)(lVar8 + 0x408) == 0) {
    uVar9 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar8 + (ulong)*(uint *)(lVar8 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar8 + 0x408) = *(int *)(lVar8 + 0x408) + -1;
    lVar8 = *(long *)(lVar6 + 0x58);
    uVar9 = (ulong)*(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar8 + uVar9 * 0x20 + 8);
  lVar6 = *(long *)(lVar6 + 0x38);
  uVar7 = *(uint *)(lVar6 + 0xc08);
  if (uVar7 != 0) {
    if ((uVar7 & 0xffff) < 0x60) {
      uVar9 = (ulong)uVar7 & 0xffff;
      plVar10 = (long *)(lVar6 + uVar9 * 0x20 + 8);
      do {
        uVar9 = uVar9 + 1;
        if (*(short *)(*plVar10 + 8) == 0) break;
        *(undefined2 *)(*plVar10 + 8) = 0;
        plVar10 = plVar10 + 4;
      } while (((uint)uVar9 & 0xffff) != 0x60);
      uVar7 = *(uint *)(lVar6 + 0xc08);
    }
    *(uint *)(lVar6 + 0xc08) = uVar7 - 1;
    *(undefined2 *)(*(long *)(lVar6 + (ulong)(uVar7 - 1) * 0x20 + 8) + 8) = 0;
    uVar9 = (ulong)*(uint *)(lVar6 + 0xc08);
    do {
      if (uVar9 == 0) {
        return;
      }
      uVar9 = uVar9 - 1;
      *(int *)(lVar6 + 0xc08) = (int)uVar9;
    } while (*(short *)(*(long *)(lVar6 + (uVar9 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar6 + 0xc08) = (int)uVar9 + 1;
  }
  return;
}


