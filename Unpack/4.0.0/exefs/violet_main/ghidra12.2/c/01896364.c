/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01896364; name: FUN_01896364
 */


bool FUN_01896364(long param_1,long *param_2,long *param_3,uint param_4,uint param_5,
                 undefined8 param_6)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar4 + 0x38);
  uVar5 = *(uint *)(lVar7 + 0xc08);
  if (uVar5 < 0x60) {
    do {
      lVar10 = *(long *)(lVar7 + (ulong)uVar5 * 0x20 + 8);
      if (*(short *)(lVar10 + 8) == 0) {
        if (uVar5 < 0x5f) {
          *(undefined2 *)(lVar10 + 8) = 1;
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
  lVar4 = *(long *)(param_1 + 0x10);
  if (param_2 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  }
  lVar7 = *(long *)(lVar4 + 0x38);
  uVar5 = *(uint *)(lVar7 + 0xc08);
  uVar12 = (ulong)uVar5;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar9 = (long *)(lVar7 + uVar12 * 0x20 + 8);
  do {
    uVar11 = uVar12;
    if (uVar5 == uVar11) goto LAB_018964b4;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_01896484;
    plVar9 = plVar9 + 4;
    uVar12 = uVar11 + 1;
  } while (*(short *)(lVar10 + 8) != 3);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_01896484:
    lVar7 = *(long *)(lVar7 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 3;
      *(undefined4 *)(lVar7 + 0xc) = uVar3;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x20) = lVar7;
    }
  }
LAB_018964b4:
  lVar7 = *(long *)(param_1 + 0x10);
  uVar3 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar4 = *(long *)(lVar7 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  uVar12 = (ulong)uVar5;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar9 = (long *)(lVar4 + uVar12 * 0x20 + 8);
  do {
    uVar11 = uVar12;
    if (uVar5 == uVar11) goto LAB_01896544;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_01896518;
    plVar9 = plVar9 + 4;
    uVar12 = uVar11 + 1;
  } while (*(short *)(lVar10 + 8) != 4);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_01896518:
    lVar4 = *(long *)(lVar4 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar4 != 0) {
      *(undefined2 *)(lVar4 + 8) = 4;
      *(undefined4 *)(lVar4 + 0xc) = uVar3;
      *(undefined1 *)(lVar4 + 10) = 4;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x28) = lVar4;
    }
  }
LAB_01896544:
  lVar4 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar4 + 0x38);
  uVar6 = *(uint *)(lVar7 + 0xc08);
  uVar12 = (ulong)uVar6;
  uVar5 = uVar6;
  if (uVar6 < 0x61) {
    uVar5 = 0x60;
  }
  uVar11 = uVar12 << 5 | 8;
  lVar10 = -1;
  do {
    lVar8 = lVar10;
    if ((uVar12 - uVar5) + lVar8 == -1) goto LAB_018965e8;
    sVar1 = *(short *)(*(long *)(lVar7 + uVar11) + 8);
    if (sVar1 == 0) goto LAB_018965a8;
    uVar11 = uVar11 + 0x20;
    lVar10 = lVar8 + 1;
  } while (sVar1 != 0x1e);
  if (uVar6 + (int)(lVar8 + 1) < 0x60) {
LAB_018965a8:
    lVar10 = *(long *)(lVar7 + (ulong)(uVar6 + (int)lVar8 + 1) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x1e;
      *(uint *)(lVar10 + 0xc) = param_4 & 0xffff;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0xf8) = lVar10;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar4 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_018965e8:
  uVar6 = (uint)uVar12;
  uVar5 = uVar6;
  if (uVar6 < 0x61) {
    uVar5 = 0x60;
  }
  uVar11 = uVar12 << 5 | 8;
  lVar10 = 0;
  do {
    lVar8 = lVar10;
    if ((uVar12 - uVar5) + lVar8 == 0) goto LAB_0189667c;
    sVar1 = *(short *)(*(long *)(lVar7 + uVar11) + 8);
    if (sVar1 == 0) goto LAB_01896640;
    uVar11 = uVar11 + 0x20;
    lVar10 = lVar8 + 1;
  } while (sVar1 != 0x6b);
  if ((uVar6 + (int)(lVar8 + 1)) - 1 < 0x60) {
LAB_01896640:
    lVar10 = *(long *)(lVar7 + (ulong)(uVar6 + (int)lVar8) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x6b;
      *(uint *)(lVar10 + 0xc) = param_5 & 0xff;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x360) = lVar10;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar4 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0189667c:
  uVar6 = (uint)uVar12;
  uVar5 = uVar6;
  if (uVar6 < 0x61) {
    uVar5 = 0x60;
  }
  uVar11 = uVar12 << 5 | 8;
  lVar10 = 0;
  do {
    lVar8 = lVar10;
    if ((uVar12 - uVar5) + lVar8 == 0) goto LAB_01896710;
    sVar1 = *(short *)(*(long *)(lVar7 + uVar11) + 8);
    if (sVar1 == 0) goto LAB_018966d0;
    uVar11 = uVar11 + 0x20;
    lVar10 = lVar8 + 1;
  } while (sVar1 != 0x48);
  if ((uVar6 + (int)(lVar8 + 1)) - 1 < 0x60) {
LAB_018966d0:
    lVar10 = *(long *)(lVar7 + (ulong)(uVar6 + (int)lVar8) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x48;
      *(undefined8 *)(lVar10 + 0xc) = 0;
      *(undefined8 *)(lVar10 + 0x14) = 0;
      *(undefined4 *)(lVar10 + 0x1c) = 0;
      *(undefined1 *)(lVar10 + 10) = 1;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x248) = lVar10;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar4 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_01896710:
  uVar5 = (uint)uVar12;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar9 = (long *)(lVar7 + uVar12 * 0x20 + 8);
  do {
    uVar11 = uVar12;
    if (uVar5 == uVar11) goto LAB_01896790;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_01896758;
    plVar9 = plVar9 + 4;
    uVar12 = uVar11 + 1;
  } while (*(short *)(lVar10 + 8) != 0x4a);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_01896758:
    lVar7 = *(long *)(lVar7 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 0x4a;
      *(undefined8 *)(lVar7 + 0xc) = 0;
      *(undefined8 *)(lVar7 + 0x14) = 0;
      *(undefined4 *)(lVar7 + 0x1c) = 0;
      *(undefined1 *)(lVar7 + 10) = 1;
      *(long *)(*(long *)(lVar4 + 0x78) + 600) = lVar7;
      lVar4 = *(long *)(param_1 + 0x10);
    }
  }
LAB_01896790:
  FUN_0107b310(lVar4,0x85,8,1);
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x78);
  lVar7 = *(long *)(lVar4 + 0x248);
  if (lVar7 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(lVar7 + 0xc);
  }
  lVar4 = *(long *)(lVar4 + 600);
  bVar2 = false;
  if (lVar4 != 0) {
    bVar2 = *(int *)(lVar4 + 0xc) != 0;
  }
  *(bool *)param_6 = bVar2;
  lVar4 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar4 + 0x58);
  if (*(uint *)(lVar7 + 0x408) == 0) {
    uVar12 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar7 + (ulong)*(uint *)(lVar7 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar7 + 0x408) = *(int *)(lVar7 + 0x408) + -1;
    lVar7 = *(long *)(lVar4 + 0x58);
    uVar12 = (ulong)*(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar7 + uVar12 * 0x20 + 8);
  lVar4 = *(long *)(lVar4 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  if (uVar5 != 0) {
    if ((uVar5 & 0xffff) < 0x60) {
      uVar12 = (ulong)uVar5 & 0xffff;
      plVar9 = (long *)(lVar4 + uVar12 * 0x20 + 8);
      do {
        uVar12 = uVar12 + 1;
        if (*(short *)(*plVar9 + 8) == 0) break;
        *(undefined2 *)(*plVar9 + 8) = 0;
        plVar9 = plVar9 + 4;
      } while (((uint)uVar12 & 0xffff) != 0x60);
      uVar5 = *(uint *)(lVar4 + 0xc08);
    }
    *(uint *)(lVar4 + 0xc08) = uVar5 - 1;
    *(undefined2 *)(*(long *)(lVar4 + (ulong)(uVar5 - 1) * 0x20 + 8) + 8) = 0;
    uVar12 = (ulong)*(uint *)(lVar4 + 0xc08);
    do {
      if (uVar12 == 0) goto LAB_018968a8;
      uVar12 = uVar12 - 1;
      *(int *)(lVar4 + 0xc08) = (int)uVar12;
    } while (*(short *)(*(long *)(lVar4 + (uVar12 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar4 + 0xc08) = (int)uVar12 + 1;
  }
LAB_018968a8:
  return iVar13 != 0;
}


