/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01894b18; name: FUN_01894b18
 */


void FUN_01894b18(long param_1,uint param_2,long *param_3,long *param_4,undefined8 param_5)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar4 + 0x38);
  uVar5 = *(uint *)(lVar6 + 0xc08);
  if (uVar5 < 0x60) {
    do {
      lVar9 = *(long *)(lVar6 + (ulong)uVar5 * 0x20 + 8);
      if (*(short *)(lVar9 + 8) == 0) {
        if (uVar5 < 0x5f) {
          *(undefined2 *)(lVar9 + 8) = 1;
          *(int *)(lVar6 + 0xc08) = *(int *)(lVar6 + 0xc08) + 1;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(lVar6 + 0xc08) = uVar5;
    } while (uVar5 != 0x60);
  }
  lVar6 = *(long *)(lVar4 + 0x58);
  uVar5 = *(uint *)(lVar6 + 0x408);
  if (uVar5 < 0x1f) {
    *(uint *)(lVar6 + 0x408) = uVar5 + 1;
    lVar6 = *(long *)(lVar4 + 0x58);
    uVar5 = *(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar6 + (ulong)uVar5 * 0x20 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  uVar3 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar4 = *(long *)(lVar6 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  uVar10 = (ulong)uVar5;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar8 = (long *)(lVar4 + uVar10 * 0x20 + 8);
  do {
    uVar7 = uVar10;
    if (uVar5 == uVar7) goto LAB_01894c58;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_01894c28;
    plVar8 = plVar8 + 4;
    uVar10 = uVar7 + 1;
  } while (*(short *)(lVar9 + 8) != 3);
  if ((int)(uVar7 + 1) - 1U < 0x60) {
LAB_01894c28:
    lVar4 = *(long *)(lVar4 + (uVar7 & 0xffffffff) * 0x20 + 8);
    if (lVar4 != 0) {
      *(undefined2 *)(lVar4 + 8) = 3;
      *(undefined4 *)(lVar4 + 0xc) = uVar3;
      *(undefined1 *)(lVar4 + 10) = 4;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x20) = lVar4;
    }
  }
LAB_01894c58:
  lVar6 = *(long *)(param_1 + 0x10);
  uVar3 = (**(code **)(*param_4 + 0x98))(param_4);
  lVar4 = *(long *)(lVar6 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  uVar10 = (ulong)uVar5;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar8 = (long *)(lVar4 + uVar10 * 0x20 + 8);
  do {
    uVar7 = uVar10;
    if (uVar5 == uVar7) goto LAB_01894ce8;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_01894cbc;
    plVar8 = plVar8 + 4;
    uVar10 = uVar7 + 1;
  } while (*(short *)(lVar9 + 8) != 4);
  if ((int)(uVar7 + 1) - 1U < 0x60) {
LAB_01894cbc:
    lVar4 = *(long *)(lVar4 + (uVar7 & 0xffffffff) * 0x20 + 8);
    if (lVar4 != 0) {
      *(undefined2 *)(lVar4 + 8) = 4;
      *(undefined4 *)(lVar4 + 0xc) = uVar3;
      *(undefined1 *)(lVar4 + 10) = 4;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x28) = lVar4;
    }
  }
LAB_01894ce8:
  lVar4 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar4 + 0x38);
  uVar1 = *(uint *)(lVar6 + 0xc08);
  uVar10 = (ulong)uVar1;
  uVar5 = uVar1;
  if (uVar1 < 0x61) {
    uVar5 = 0x60;
  }
  uVar7 = uVar10 << 5 | 8;
  lVar9 = -1;
  do {
    lVar11 = lVar9;
    if ((uVar10 - uVar5) + lVar11 == -1) goto LAB_01894d88;
    sVar2 = *(short *)(*(long *)(lVar6 + uVar7) + 8);
    if (sVar2 == 0) goto LAB_01894d48;
    uVar7 = uVar7 + 0x20;
    lVar9 = lVar11 + 1;
  } while (sVar2 != 0x44);
  if (uVar1 + (int)(lVar11 + 1) < 0x60) {
LAB_01894d48:
    lVar9 = *(long *)(lVar6 + (ulong)(uVar1 + (int)lVar11 + 1) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x44;
      *(undefined8 *)(lVar9 + 0xc) = 0;
      *(undefined4 *)(lVar9 + 0x14) = 0;
      *(undefined8 *)(lVar9 + 0x18) = param_5;
      *(undefined1 *)(lVar9 + 10) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x228) = lVar9;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar4 + 0x38);
      uVar10 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_01894d88:
  uVar5 = (uint)uVar10;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar8 = (long *)(lVar6 + uVar10 * 0x20 + 8);
  do {
    uVar7 = uVar10;
    if (uVar5 == uVar7) goto LAB_01894e08;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_01894dd4;
    plVar8 = plVar8 + 4;
    uVar10 = uVar7 + 1;
  } while (*(short *)(lVar9 + 8) != 0x1e);
  if ((int)(uVar7 + 1) - 1U < 0x60) {
LAB_01894dd4:
    lVar6 = *(long *)(lVar6 + (uVar7 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 0x1e;
      *(uint *)(lVar6 + 0xc) = param_2 & 0xffff;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0xf8) = lVar6;
      lVar4 = *(long *)(param_1 + 0x10);
    }
  }
LAB_01894e08:
  FUN_0107b310(lVar4,0x81,8,1);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar4 + 0x58);
  if (*(uint *)(lVar6 + 0x408) == 0) {
    uVar10 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar6 + (ulong)*(uint *)(lVar6 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar6 + 0x408) = *(int *)(lVar6 + 0x408) + -1;
    lVar6 = *(long *)(lVar4 + 0x58);
    uVar10 = (ulong)*(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar6 + uVar10 * 0x20 + 8);
  lVar4 = *(long *)(lVar4 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  if (uVar5 != 0) {
    if ((uVar5 & 0xffff) < 0x60) {
      uVar10 = (ulong)uVar5 & 0xffff;
      plVar8 = (long *)(lVar4 + uVar10 * 0x20 + 8);
      do {
        uVar10 = uVar10 + 1;
        if (*(short *)(*plVar8 + 8) == 0) break;
        *(undefined2 *)(*plVar8 + 8) = 0;
        plVar8 = plVar8 + 4;
      } while (((uint)uVar10 & 0xffff) != 0x60);
      uVar5 = *(uint *)(lVar4 + 0xc08);
    }
    *(uint *)(lVar4 + 0xc08) = uVar5 - 1;
    *(undefined2 *)(*(long *)(lVar4 + (ulong)(uVar5 - 1) * 0x20 + 8) + 8) = 0;
    uVar10 = (ulong)*(uint *)(lVar4 + 0xc08);
    do {
      if (uVar10 == 0) {
        return;
      }
      uVar10 = uVar10 - 1;
      *(int *)(lVar4 + 0xc08) = (int)uVar10;
    } while (*(short *)(*(long *)(lVar4 + (uVar10 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar4 + 0xc08) = (int)uVar10 + 1;
  }
  return;
}


