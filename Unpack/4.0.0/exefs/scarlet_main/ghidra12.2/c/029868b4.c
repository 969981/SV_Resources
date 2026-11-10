/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029868b4; name: FUN_029868b4
 */


void FUN_029868b4(long param_1,long *param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  short sVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
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
  uVar2 = (**(code **)(*param_2 + 0x98))();
  lVar3 = *(long *)(lVar6 + 0x38);
  uVar4 = *(uint *)(lVar3 + 0xc08);
  uVar11 = (ulong)uVar4;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar8 = (long *)(lVar3 + uVar11 * 0x20 + 8);
  do {
    uVar7 = uVar11;
    if (uVar4 == uVar7) goto LAB_029869f0;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_029869c4;
    plVar8 = plVar8 + 4;
    uVar11 = uVar7 + 1;
  } while (*(short *)(lVar9 + 8) != 4);
  if ((int)(uVar7 + 1) - 1U < 0x60) {
LAB_029869c4:
    lVar3 = *(long *)(lVar3 + (uVar7 & 0xffffffff) * 0x20 + 8);
    if (lVar3 != 0) {
      *(undefined2 *)(lVar3 + 8) = 4;
      *(undefined4 *)(lVar3 + 0xc) = uVar2;
      *(undefined1 *)(lVar3 + 10) = 4;
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x28) = lVar3;
    }
  }
LAB_029869f0:
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar3 + 0x38);
  uVar5 = *(uint *)(lVar6 + 0xc08);
  uVar11 = (ulong)uVar5;
  uVar4 = uVar5;
  if (uVar5 < 0x61) {
    uVar4 = 0x60;
  }
  uVar7 = uVar11 << 5 | 8;
  lVar9 = -1;
  do {
    lVar10 = lVar9;
    if ((uVar11 - uVar4) + lVar10 == -1) goto LAB_02986a90;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar7) + 8);
    if (sVar1 == 0) goto LAB_02986a50;
    uVar7 = uVar7 + 0x20;
    lVar9 = lVar10 + 1;
  } while (sVar1 != 3);
  if (uVar5 + (int)(lVar10 + 1) < 0x60) {
LAB_02986a50:
    lVar9 = *(long *)(lVar6 + (ulong)(uVar5 + (int)lVar10 + 1) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 3;
      *(undefined4 *)(lVar9 + 0xc) = param_3;
      *(undefined1 *)(lVar9 + 10) = 4;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x20) = lVar9;
      lVar3 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar3 + 0x38);
      uVar11 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_02986a90:
  uVar5 = (uint)uVar11;
  uVar4 = uVar5;
  if (uVar5 < 0x61) {
    uVar4 = 0x60;
  }
  uVar7 = uVar11 << 5 | 8;
  lVar9 = 0;
  do {
    lVar10 = lVar9;
    if ((uVar11 - uVar4) + lVar10 == 0) goto LAB_02986b24;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar7) + 8);
    if (sVar1 == 0) goto LAB_02986ae8;
    uVar7 = uVar7 + 0x20;
    lVar9 = lVar10 + 1;
  } while (sVar1 != 0x22);
  if ((uVar5 + (int)(lVar10 + 1)) - 1 < 0x60) {
LAB_02986ae8:
    lVar9 = *(long *)(lVar6 + (ulong)(uVar5 + (int)lVar10) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x22;
      *(uint *)(lVar9 + 0xc) = param_4 & 0xff;
      *(undefined1 *)(lVar9 + 10) = 4;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x118) = lVar9;
      lVar3 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar3 + 0x38);
      uVar11 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_02986b24:
  uVar4 = (uint)uVar11;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar8 = (long *)(lVar6 + uVar11 * 0x20 + 8);
  do {
    uVar7 = uVar11;
    if (uVar4 == uVar7) goto LAB_02986ba0;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_02986b6c;
    plVar8 = plVar8 + 4;
    uVar11 = uVar7 + 1;
  } while (*(short *)(lVar9 + 8) != 0x23);
  if ((int)(uVar7 + 1) - 1U < 0x60) {
LAB_02986b6c:
    lVar6 = *(long *)(lVar6 + (uVar7 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 0x23;
      *(undefined4 *)(lVar6 + 0xc) = param_5;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x120) = lVar6;
      lVar3 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02986ba0:
  FUN_0107b310(lVar3,0x7e,8,1);
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar3 + 0x58);
  if (*(uint *)(lVar6 + 0x408) == 0) {
    uVar11 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar6 + (ulong)*(uint *)(lVar6 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar6 + 0x408) = *(int *)(lVar6 + 0x408) + -1;
    lVar6 = *(long *)(lVar3 + 0x58);
    uVar11 = (ulong)*(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(lVar6 + uVar11 * 0x20 + 8);
  lVar3 = *(long *)(lVar3 + 0x38);
  uVar4 = *(uint *)(lVar3 + 0xc08);
  if (uVar4 != 0) {
    if ((uVar4 & 0xffff) < 0x60) {
      uVar11 = (ulong)uVar4 & 0xffff;
      plVar8 = (long *)(lVar3 + uVar11 * 0x20 + 8);
      do {
        uVar11 = uVar11 + 1;
        if (*(short *)(*plVar8 + 8) == 0) break;
        *(undefined2 *)(*plVar8 + 8) = 0;
        plVar8 = plVar8 + 4;
      } while (((uint)uVar11 & 0xffff) != 0x60);
      uVar4 = *(uint *)(lVar3 + 0xc08);
    }
    *(uint *)(lVar3 + 0xc08) = uVar4 - 1;
    *(undefined2 *)(*(long *)(lVar3 + (ulong)(uVar4 - 1) * 0x20 + 8) + 8) = 0;
    uVar11 = (ulong)*(uint *)(lVar3 + 0xc08);
    do {
      if (uVar11 == 0) {
        return;
      }
      uVar11 = uVar11 - 1;
      *(int *)(lVar3 + 0xc08) = (int)uVar11;
    } while (*(short *)(*(long *)(lVar3 + (uVar11 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar3 + 0xc08) = (int)uVar11 + 1;
  }
  return;
}


