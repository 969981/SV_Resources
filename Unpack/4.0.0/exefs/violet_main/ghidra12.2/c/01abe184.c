/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01abe184; name: FUN_01abe184
 */


bool FUN_01abe184(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  short sVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar5 + 0x38);
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
  lVar7 = *(long *)(lVar5 + 0x58);
  uVar6 = *(uint *)(lVar7 + 0x408);
  if (uVar6 < 0x1f) {
    *(uint *)(lVar7 + 0x408) = uVar6 + 1;
    lVar7 = *(long *)(lVar5 + 0x58);
    uVar6 = *(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar7 + (ulong)uVar6 * 0x20 + 8);
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar5 = *(long *)(lVar7 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar11 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar9 = (long *)(lVar5 + uVar11 * 0x20 + 8);
  do {
    uVar8 = uVar11;
    if (uVar6 == uVar8) goto LAB_01abe2b8;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_01abe288;
    plVar9 = plVar9 + 4;
    uVar11 = uVar8 + 1;
  } while (*(short *)(lVar10 + 8) != 2);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_01abe288:
    lVar5 = *(long *)(lVar5 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 2;
      *(undefined4 *)(lVar5 + 0xc) = uVar4;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x18) = lVar5;
    }
  }
LAB_01abe2b8:
  lVar5 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar5 + 0x38);
  uVar1 = *(uint *)(lVar7 + 0xc08);
  uVar11 = (ulong)uVar1;
  uVar6 = uVar1;
  if (uVar1 < 0x61) {
    uVar6 = 0x60;
  }
  uVar8 = uVar11 << 5 | 8;
  lVar10 = -1;
  do {
    lVar12 = lVar10;
    if ((uVar11 - uVar6) + lVar12 == -1) goto LAB_01abe35c;
    sVar2 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar2 == 0) goto LAB_01abe318;
    uVar8 = uVar8 + 0x20;
    lVar10 = lVar12 + 1;
  } while (sVar2 != 0x60);
  if (uVar1 + (int)(lVar12 + 1) < 0x60) {
LAB_01abe318:
    lVar10 = *(long *)(lVar7 + (ulong)(uVar1 + (int)lVar12 + 1) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x60;
      *(undefined8 *)(lVar10 + 0xc) = 0;
      *(undefined8 *)(lVar10 + 0x14) = 0;
      *(undefined4 *)(lVar10 + 0x1c) = 0;
      *(undefined1 *)(lVar10 + 10) = 1;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x308) = lVar10;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar5 + 0x38);
      uVar11 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_01abe35c:
  uVar6 = (uint)uVar11;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar9 = (long *)(lVar7 + uVar11 * 0x20 + 8);
  do {
    uVar8 = uVar11;
    if (uVar6 == uVar8) goto LAB_01abe3dc;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_01abe3a4;
    plVar9 = plVar9 + 4;
    uVar11 = uVar8 + 1;
  } while (*(short *)(lVar10 + 8) != 0x76);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_01abe3a4:
    lVar7 = *(long *)(lVar7 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 0x76;
      *(undefined8 *)(lVar7 + 0xc) = 0;
      *(undefined8 *)(lVar7 + 0x14) = 0;
      *(undefined4 *)(lVar7 + 0x1c) = 0;
      *(undefined1 *)(lVar7 + 10) = 1;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x3b8) = lVar7;
      lVar5 = *(long *)(param_1 + 0x10);
    }
  }
LAB_01abe3dc:
  FUN_0107b310(lVar5,0x93,8,1);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(*(long *)(lVar7 + 0x78) + 0x308);
  if (lVar5 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(lVar5 + 0xc);
  }
  if (param_3 != 0) {
    lVar5 = *(long *)(*(long *)(lVar7 + 0x78) + 0x3b8);
    bVar3 = false;
    if (lVar5 != 0) {
      bVar3 = *(int *)(lVar5 + 0xc) != 0;
    }
    *(bool *)param_3 = bVar3;
    lVar7 = *(long *)(param_1 + 0x10);
  }
  lVar5 = *(long *)(lVar7 + 0x58);
  if (*(uint *)(lVar5 + 0x408) == 0) {
    uVar11 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar5 + 0x408) = *(int *)(lVar5 + 0x408) + -1;
    lVar5 = *(long *)(lVar7 + 0x58);
    uVar11 = (ulong)*(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(lVar5 + uVar11 * 0x20 + 8);
  lVar5 = *(long *)(lVar7 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  if (uVar6 != 0) {
    if ((uVar6 & 0xffff) < 0x60) {
      uVar11 = (ulong)uVar6 & 0xffff;
      plVar9 = (long *)(lVar5 + uVar11 * 0x20 + 8);
      do {
        uVar11 = uVar11 + 1;
        if (*(short *)(*plVar9 + 8) == 0) break;
        *(undefined2 *)(*plVar9 + 8) = 0;
        plVar9 = plVar9 + 4;
      } while (((uint)uVar11 & 0xffff) != 0x60);
      uVar6 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar6 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar6 - 1) * 0x20 + 8) + 8) = 0;
    uVar11 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar11 == 0) goto LAB_01abe4dc;
      uVar11 = uVar11 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar11;
    } while (*(short *)(*(long *)(lVar5 + (uVar11 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar11 + 1;
  }
LAB_01abe4dc:
  return iVar13 != 0;
}


