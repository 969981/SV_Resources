/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029380b0; name: FUN_029380b0
 */


bool FUN_029380b0(long param_1,long *param_2,undefined8 param_3,uint param_4,undefined8 *param_5)

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
  int iVar12;
  
  *(undefined4 *)(param_5 + 4) = 0;
  param_5[2] = 0;
  param_5[3] = 0;
  *param_5 = 0;
  param_5[1] = 0;
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
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar3 = *(long *)(lVar6 + 0x38);
  uVar4 = *(uint *)(lVar3 + 0xc08);
  uVar11 = (ulong)uVar4;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar8 = (long *)(lVar3 + uVar11 * 0x20 + 8);
  do {
    uVar10 = uVar11;
    if (uVar4 == uVar10) goto LAB_029381f4;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_029381c4;
    plVar8 = plVar8 + 4;
    uVar11 = uVar10 + 1;
  } while (*(short *)(lVar9 + 8) != 2);
  if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_029381c4:
    lVar3 = *(long *)(lVar3 + (uVar10 & 0xffffffff) * 0x20 + 8);
    if (lVar3 != 0) {
      *(undefined2 *)(lVar3 + 8) = 2;
      *(undefined4 *)(lVar3 + 0xc) = uVar2;
      *(undefined1 *)(lVar3 + 10) = 4;
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x18) = lVar3;
    }
  }
LAB_029381f4:
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar3 + 0x38);
  uVar5 = *(uint *)(lVar6 + 0xc08);
  uVar11 = (ulong)uVar5;
  uVar4 = uVar5;
  if (uVar5 < 0x61) {
    uVar4 = 0x60;
  }
  uVar10 = uVar11 << 5 | 8;
  lVar9 = -1;
  do {
    lVar7 = lVar9;
    if ((uVar11 - uVar4) + lVar7 == -1) goto LAB_02938298;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar10) + 8);
    if (sVar1 == 0) goto LAB_02938258;
    uVar10 = uVar10 + 0x20;
    lVar9 = lVar7 + 1;
  } while (sVar1 != 0x12);
  if (uVar5 + (int)(lVar7 + 1) < 0x60) {
LAB_02938258:
    lVar9 = *(long *)(lVar6 + (ulong)(uVar5 + (int)lVar7 + 1) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x12;
      *(uint *)(lVar9 + 0xc) = param_4 & 0xffff;
      *(undefined1 *)(lVar9 + 10) = 4;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x98) = lVar9;
      lVar3 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar3 + 0x38);
      uVar11 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_02938298:
  uVar5 = (uint)uVar11;
  uVar4 = uVar5;
  if (uVar5 < 0x61) {
    uVar4 = 0x60;
  }
  uVar10 = uVar11 << 5 | 8;
  lVar9 = 0;
  do {
    lVar7 = lVar9;
    if ((uVar11 - uVar4) + lVar7 == 0) goto LAB_02938328;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar10) + 8);
    if (sVar1 == 0) goto LAB_029382ec;
    uVar10 = uVar10 + 0x20;
    lVar9 = lVar7 + 1;
  } while (sVar1 != 0x44);
  if ((uVar5 + (int)(lVar7 + 1)) - 1 < 0x60) {
LAB_029382ec:
    lVar9 = *(long *)(lVar6 + (ulong)(uVar5 + (int)lVar7) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x44;
      *(undefined8 *)(lVar9 + 0xc) = 0;
      *(undefined4 *)(lVar9 + 0x14) = 0;
      *(undefined8 **)(lVar9 + 0x18) = param_5;
      *(undefined1 *)(lVar9 + 10) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x228) = lVar9;
      lVar3 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar3 + 0x38);
      uVar11 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_02938328:
  uVar4 = (uint)uVar11;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar8 = (long *)(lVar6 + uVar11 * 0x20 + 8);
  do {
    uVar10 = uVar11;
    if (uVar4 == uVar10) goto LAB_029383a8;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_02938370;
    plVar8 = plVar8 + 4;
    uVar11 = uVar10 + 1;
  } while (*(short *)(lVar9 + 8) != 0x59);
  if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_02938370:
    lVar6 = *(long *)(lVar6 + (uVar10 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 0x59;
      *(undefined8 *)(lVar6 + 0xc) = 0;
      *(undefined8 *)(lVar6 + 0x14) = 0;
      *(undefined4 *)(lVar6 + 0x1c) = 0;
      *(undefined1 *)(lVar6 + 10) = 1;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x2d0) = lVar6;
      lVar3 = *(long *)(param_1 + 0x10);
    }
  }
LAB_029383a8:
  FUN_0107b310(lVar3,0x1b,8,1);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(*(long *)(lVar6 + 0x78) + 0x2d0);
  if (lVar3 == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(lVar3 + 0xc);
  }
  lVar3 = *(long *)(lVar6 + 0x58);
  if (*(uint *)(lVar3 + 0x408) == 0) {
    uVar11 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar3 + (ulong)*(uint *)(lVar3 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar3 + 0x408) = *(int *)(lVar3 + 0x408) + -1;
    lVar3 = *(long *)(lVar6 + 0x58);
    uVar11 = (ulong)*(uint *)(lVar3 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar3 + uVar11 * 0x20 + 8);
  lVar3 = *(long *)(lVar6 + 0x38);
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
      if (uVar11 == 0) goto LAB_029384a4;
      uVar11 = uVar11 - 1;
      *(int *)(lVar3 + 0xc08) = (int)uVar11;
    } while (*(short *)(*(long *)(lVar3 + (uVar11 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar3 + 0xc08) = (int)uVar11 + 1;
  }
LAB_029384a4:
  return iVar12 != 0;
}


