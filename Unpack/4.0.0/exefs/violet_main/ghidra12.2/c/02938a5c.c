/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02938a5c; name: FUN_02938a5c
 */


bool FUN_02938a5c(long param_1,long *param_2,undefined4 param_3,undefined8 param_4)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  
  uVar2 = FUN_01abe184(param_1,param_2,param_4);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar4 + 0x38);
  uVar5 = *(uint *)(lVar7 + 0xc08);
  if (uVar5 < 0x60) {
    do {
      lVar11 = *(long *)(lVar7 + (ulong)uVar5 * 0x20 + 8);
      if (*(short *)(lVar11 + 8) == 0) {
        if (uVar5 < 0x5f) {
          *(undefined2 *)(lVar11 + 8) = 1;
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
  uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar4 = *(long *)(lVar7 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  uVar12 = (ulong)uVar5;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar10 = (long *)(lVar4 + uVar12 * 0x20 + 8);
  do {
    uVar8 = uVar12;
    if (uVar5 == uVar8) goto LAB_02938ba0;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_02938b74;
    plVar10 = plVar10 + 4;
    uVar12 = uVar8 + 1;
  } while (*(short *)(lVar11 + 8) != 2);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_02938b74:
    lVar4 = *(long *)(lVar4 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar4 != 0) {
      *(undefined2 *)(lVar4 + 8) = 2;
      *(undefined4 *)(lVar4 + 0xc) = uVar3;
      *(undefined1 *)(lVar4 + 10) = 0;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x18) = lVar4;
    }
  }
LAB_02938ba0:
  lVar4 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar4 + 0x38);
  uVar6 = *(uint *)(lVar7 + 0xc08);
  uVar12 = (ulong)uVar6;
  uVar5 = uVar6;
  if (uVar6 < 0x61) {
    uVar5 = 0x60;
  }
  uVar8 = uVar12 << 5 | 8;
  lVar11 = -1;
  do {
    lVar9 = lVar11;
    if ((uVar12 - uVar5) + lVar9 == -1) goto LAB_02938c3c;
    sVar1 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar1 == 0) goto LAB_02938c00;
    uVar8 = uVar8 + 0x20;
    lVar11 = lVar9 + 1;
  } while (sVar1 != 3);
  if (uVar6 + (int)(lVar9 + 1) < 0x60) {
LAB_02938c00:
    lVar11 = *(long *)(lVar7 + (ulong)(uVar6 + (int)lVar9 + 1) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 3;
      *(undefined4 *)(lVar11 + 0xc) = param_3;
      *(undefined1 *)(lVar11 + 10) = 0;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x20) = lVar11;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar4 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_02938c3c:
  uVar6 = (uint)uVar12;
  uVar5 = uVar6;
  if (uVar6 < 0x61) {
    uVar5 = 0x60;
  }
  uVar8 = uVar12 << 5 | 8;
  lVar11 = 0;
  do {
    lVar9 = lVar11;
    if ((uVar12 - uVar5) + lVar9 == 0) goto LAB_02938ccc;
    sVar1 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar1 == 0) goto LAB_02938c94;
    uVar8 = uVar8 + 0x20;
    lVar11 = lVar9 + 1;
  } while (sVar1 != 0x60);
  if ((uVar6 + (int)(lVar9 + 1)) - 1 < 0x60) {
LAB_02938c94:
    lVar11 = *(long *)(lVar7 + (ulong)(uVar6 + (int)lVar9) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x60;
      *(uint *)(lVar11 + 0xc) = uVar2 & 1;
      *(undefined1 *)(lVar11 + 10) = 0;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x308) = lVar11;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar4 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_02938ccc:
  uVar2 = (uint)uVar12;
  uVar5 = uVar2;
  if (uVar2 < 0x61) {
    uVar5 = 0x60;
  }
  uVar8 = uVar12 << 5 | 8;
  lVar11 = 0;
  do {
    lVar9 = lVar11;
    if ((uVar12 - uVar5) + lVar9 == 0) goto LAB_02938d60;
    sVar1 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar1 == 0) goto LAB_02938d20;
    uVar8 = uVar8 + 0x20;
    lVar11 = lVar9 + 1;
  } while (sVar1 != 0x50);
  if ((uVar2 + (int)(lVar9 + 1)) - 1 < 0x60) {
LAB_02938d20:
    lVar11 = *(long *)(lVar7 + (ulong)(uVar2 + (int)lVar9) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x50;
      *(undefined8 *)(lVar11 + 0xc) = 0;
      *(undefined8 *)(lVar11 + 0x14) = 0;
      *(undefined4 *)(lVar11 + 0x1c) = 0;
      *(undefined1 *)(lVar11 + 10) = 1;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x288) = lVar11;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar4 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_02938d60:
  uVar5 = (uint)uVar12;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar10 = (long *)(lVar7 + uVar12 * 0x20 + 8);
  do {
    uVar8 = uVar12;
    if (uVar5 == uVar8) goto LAB_02938de0;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_02938da8;
    plVar10 = plVar10 + 4;
    uVar12 = uVar8 + 1;
  } while (*(short *)(lVar11 + 8) != 0x7b);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_02938da8:
    lVar7 = *(long *)(lVar7 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 0x7b;
      *(undefined8 *)(lVar7 + 0xc) = 0;
      *(undefined8 *)(lVar7 + 0x14) = 0;
      *(undefined4 *)(lVar7 + 0x1c) = 0;
      *(undefined1 *)(lVar7 + 10) = 1;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x3e0) = lVar7;
      lVar4 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02938de0:
  FUN_01247308(lVar4,0x95);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(*(long *)(lVar7 + 0x78) + 0x288);
  if (lVar4 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(lVar4 + 0xc);
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
      plVar10 = (long *)(lVar4 + uVar12 * 0x20 + 8);
      do {
        uVar12 = uVar12 + 1;
        if (*(short *)(*plVar10 + 8) == 0) break;
        *(undefined2 *)(*plVar10 + 8) = 0;
        plVar10 = plVar10 + 4;
      } while (((uint)uVar12 & 0xffff) != 0x60);
      uVar5 = *(uint *)(lVar4 + 0xc08);
    }
    *(uint *)(lVar4 + 0xc08) = uVar5 - 1;
    *(undefined2 *)(*(long *)(lVar4 + (ulong)(uVar5 - 1) * 0x20 + 8) + 8) = 0;
    uVar12 = (ulong)*(uint *)(lVar4 + 0xc08);
    do {
      if (uVar12 == 0) goto LAB_02938ed4;
      uVar12 = uVar12 - 1;
      *(int *)(lVar4 + 0xc08) = (int)uVar12;
    } while (*(short *)(*(long *)(lVar4 + (uVar12 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar4 + 0xc08) = (int)uVar12 + 1;
  }
LAB_02938ed4:
  return iVar13 != 0;
}


