/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01240d7c; name: FUN_01240d7c
 */


void FUN_01240d7c(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  short sVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  if (param_2[1] == 1) {
    uVar3 = (uint)*(ushort *)(param_2 + 4);
  }
  else {
    uVar3 = 0;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar4 + 0x38);
  uVar6 = *(uint *)(lVar7 + 0xc08);
  if (uVar6 < 0x60) {
    do {
      lVar10 = *(long *)(lVar7 + (ulong)uVar6 * 0x20 + 8);
      if (*(short *)(lVar10 + 8) == 0) {
        if (uVar6 < 0x5f) {
          *(undefined2 *)(lVar10 + 8) = 1;
          *(int *)(lVar7 + 0xc08) = *(int *)(lVar7 + 0xc08) + 1;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      *(uint *)(lVar7 + 0xc08) = uVar6;
    } while (uVar6 != 0x60);
  }
  lVar7 = *(long *)(lVar4 + 0x58);
  uVar6 = *(uint *)(lVar7 + 0x408);
  if (uVar6 < 0x1f) {
    *(uint *)(lVar7 + 0x408) = uVar6 + 1;
    lVar7 = *(long *)(lVar4 + 0x58);
    uVar6 = *(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar7 + (ulong)uVar6 * 0x20 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar4 + 0x38);
  uVar5 = *(uint *)(lVar7 + 0xc08);
  uVar8 = (ulong)uVar5;
  uVar1 = *param_2;
  uVar6 = uVar5;
  if (uVar5 < 0x61) {
    uVar6 = 0x60;
  }
  uVar11 = uVar8 << 5 | 8;
  lVar10 = -1;
  do {
    lVar12 = lVar10;
    if ((uVar8 - uVar6) + lVar12 == -1) goto LAB_01240ec8;
    sVar2 = *(short *)(*(long *)(lVar7 + uVar11) + 8);
    if (sVar2 == 0) goto LAB_01240e88;
    uVar11 = uVar11 + 0x20;
    lVar10 = lVar12 + 1;
  } while (sVar2 != 2);
  if (uVar5 + (int)(lVar12 + 1) < 0x60) {
LAB_01240e88:
    lVar10 = *(long *)(lVar7 + (ulong)(uVar5 + (int)lVar12 + 1) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 2;
      *(undefined4 *)(lVar10 + 0xc) = uVar1;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x18) = lVar10;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar4 + 0x38);
      uVar8 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_01240ec8:
  uVar1 = param_2[1];
  uVar5 = (uint)uVar8;
  uVar6 = uVar5;
  if (uVar5 < 0x61) {
    uVar6 = 0x60;
  }
  uVar11 = uVar8 << 5 | 8;
  lVar10 = 0;
  do {
    lVar12 = lVar10;
    if ((uVar8 - uVar6) + lVar12 == 0) goto LAB_01240f5c;
    sVar2 = *(short *)(*(long *)(lVar7 + uVar11) + 8);
    if (sVar2 == 0) goto LAB_01240f20;
    uVar11 = uVar11 + 0x20;
    lVar10 = lVar12 + 1;
  } while (sVar2 != 0xc);
  if ((uVar5 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_01240f20:
    lVar10 = *(long *)(lVar7 + (ulong)(uVar5 + (int)lVar12) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0xc;
      *(undefined4 *)(lVar10 + 0xc) = uVar1;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x68) = lVar10;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar4 + 0x38);
      uVar8 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_01240f5c:
  uVar6 = (uint)uVar8;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar9 = (long *)(lVar7 + uVar8 * 0x20 + 8);
  do {
    uVar11 = uVar8;
    if (uVar6 == uVar11) goto LAB_01240fd8;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_01240fa4;
    plVar9 = plVar9 + 4;
    uVar8 = uVar11 + 1;
  } while (*(short *)(lVar10 + 8) != 0x12);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_01240fa4:
    lVar7 = *(long *)(lVar7 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(uint *)(lVar7 + 0xc) = uVar3;
      *(undefined2 *)(lVar7 + 8) = 0x12;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x98) = lVar7;
      lVar4 = *(long *)(param_1 + 0x10);
    }
  }
LAB_01240fd8:
  FUN_0107b310(lVar4,1,8,1);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar4 + 0x58);
  if (*(uint *)(lVar7 + 0x408) == 0) {
    uVar8 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar7 + (ulong)*(uint *)(lVar7 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar7 + 0x408) = *(int *)(lVar7 + 0x408) + -1;
    lVar7 = *(long *)(lVar4 + 0x58);
    uVar8 = (ulong)*(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar7 + uVar8 * 0x20 + 8);
  lVar4 = *(long *)(lVar4 + 0x38);
  uVar3 = *(uint *)(lVar4 + 0xc08);
  if (uVar3 != 0) {
    if ((uVar3 & 0xffff) < 0x60) {
      uVar8 = (ulong)uVar3 & 0xffff;
      plVar9 = (long *)(lVar4 + uVar8 * 0x20 + 8);
      do {
        uVar8 = uVar8 + 1;
        if (*(short *)(*plVar9 + 8) == 0) break;
        *(undefined2 *)(*plVar9 + 8) = 0;
        plVar9 = plVar9 + 4;
      } while (((uint)uVar8 & 0xffff) != 0x60);
      uVar3 = *(uint *)(lVar4 + 0xc08);
    }
    *(uint *)(lVar4 + 0xc08) = uVar3 - 1;
    *(undefined2 *)(*(long *)(lVar4 + (ulong)(uVar3 - 1) * 0x20 + 8) + 8) = 0;
    uVar8 = (ulong)*(uint *)(lVar4 + 0xc08);
    do {
      if (uVar8 == 0) {
        return;
      }
      uVar8 = uVar8 - 1;
      *(int *)(lVar4 + 0xc08) = (int)uVar8;
    } while (*(short *)(*(long *)(lVar4 + (uVar8 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar4 + 0xc08) = (int)uVar8 + 1;
  }
  return;
}


