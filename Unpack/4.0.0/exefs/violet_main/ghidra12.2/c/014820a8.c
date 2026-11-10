/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014820a8; name: FUN_014820a8
 */


bool FUN_014820a8(long param_1,long *param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6,undefined4 param_7)

{
  short sVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar3 + 0x38);
  uVar4 = *(uint *)(lVar6 + 0xc08);
  if (uVar4 < 0x60) {
    do {
      lVar10 = *(long *)(lVar6 + (ulong)uVar4 * 0x20 + 8);
      if (*(short *)(lVar10 + 8) == 0) {
        if (uVar4 < 0x5f) {
          *(undefined2 *)(lVar10 + 8) = 1;
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
  plVar9 = (long *)(lVar3 + uVar11 * 0x20 + 8);
  do {
    uVar7 = uVar11;
    if (uVar4 == uVar7) goto LAB_014821f4;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_014821c4;
    plVar9 = plVar9 + 4;
    uVar11 = uVar7 + 1;
  } while (*(short *)(lVar10 + 8) != 2);
  if ((int)(uVar7 + 1) - 1U < 0x60) {
LAB_014821c4:
    lVar3 = *(long *)(lVar3 + (uVar7 & 0xffffffff) * 0x20 + 8);
    if (lVar3 != 0) {
      *(undefined2 *)(lVar3 + 8) = 2;
      *(undefined4 *)(lVar3 + 0xc) = uVar2;
      *(undefined1 *)(lVar3 + 10) = 4;
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x18) = lVar3;
    }
  }
LAB_014821f4:
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar3 + 0x38);
  uVar5 = *(uint *)(lVar6 + 0xc08);
  uVar11 = (ulong)uVar5;
  uVar4 = uVar5;
  if (uVar5 < 0x61) {
    uVar4 = 0x60;
  }
  uVar7 = uVar11 << 5 | 8;
  lVar10 = -1;
  do {
    lVar8 = lVar10;
    if ((uVar11 - uVar4) + lVar8 == -1) goto LAB_01482294;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar7) + 8);
    if (sVar1 == 0) goto LAB_01482254;
    uVar7 = uVar7 + 0x20;
    lVar10 = lVar8 + 1;
  } while (sVar1 != 3);
  if (uVar5 + (int)(lVar8 + 1) < 0x60) {
LAB_01482254:
    lVar10 = *(long *)(lVar6 + (ulong)(uVar5 + (int)lVar8 + 1) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 3;
      *(undefined4 *)(lVar10 + 0xc) = param_4;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x20) = lVar10;
      lVar3 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar3 + 0x38);
      uVar11 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_01482294:
  uVar5 = (uint)uVar11;
  uVar4 = uVar5;
  if (uVar5 < 0x61) {
    uVar4 = 0x60;
  }
  uVar7 = uVar11 << 5 | 8;
  lVar10 = 0;
  do {
    lVar8 = lVar10;
    if ((uVar11 - uVar4) + lVar8 == 0) goto LAB_01482328;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar7) + 8);
    if (sVar1 == 0) goto LAB_014822ec;
    uVar7 = uVar7 + 0x20;
    lVar10 = lVar8 + 1;
  } while (sVar1 != 0x22);
  if ((uVar5 + (int)(lVar8 + 1)) - 1 < 0x60) {
LAB_014822ec:
    lVar10 = *(long *)(lVar6 + (ulong)(uVar5 + (int)lVar8) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x22;
      *(uint *)(lVar10 + 0xc) = param_3 & 0xff;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x118) = lVar10;
      lVar3 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar3 + 0x38);
      uVar11 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_01482328:
  uVar5 = (uint)uVar11;
  uVar4 = uVar5;
  if (uVar5 < 0x61) {
    uVar4 = 0x60;
  }
  uVar7 = uVar11 << 5 | 8;
  lVar10 = 0;
  do {
    lVar8 = lVar10;
    if ((uVar11 - uVar4) + lVar8 == 0) goto LAB_014823b8;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar7) + 8);
    if (sVar1 == 0) goto LAB_0148237c;
    uVar7 = uVar7 + 0x20;
    lVar10 = lVar8 + 1;
  } while (sVar1 != 0x23);
  if ((uVar5 + (int)(lVar8 + 1)) - 1 < 0x60) {
LAB_0148237c:
    lVar10 = *(long *)(lVar6 + (ulong)(uVar5 + (int)lVar8) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x23;
      *(undefined4 *)(lVar10 + 0xc) = param_5;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x120) = lVar10;
      lVar3 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar3 + 0x38);
      uVar11 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_014823b8:
  uVar5 = (uint)uVar11;
  uVar4 = uVar5;
  if (uVar5 < 0x61) {
    uVar4 = 0x60;
  }
  uVar7 = uVar11 << 5 | 8;
  lVar10 = 0;
  do {
    lVar8 = lVar10;
    if ((uVar11 - uVar4) + lVar8 == 0) goto LAB_0148244c;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar7) + 8);
    if (sVar1 == 0) goto LAB_01482410;
    uVar7 = uVar7 + 0x20;
    lVar10 = lVar8 + 1;
  } while (sVar1 != 0x68);
  if ((uVar5 + (int)(lVar8 + 1)) - 1 < 0x60) {
LAB_01482410:
    lVar10 = *(long *)(lVar6 + (ulong)(uVar5 + (int)lVar8) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x68;
      *(uint *)(lVar10 + 0xc) = param_6 & 0xff;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x348) = lVar10;
      lVar3 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar3 + 0x38);
      uVar11 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_0148244c:
  uVar5 = (uint)uVar11;
  uVar4 = uVar5;
  if (uVar5 < 0x61) {
    uVar4 = 0x60;
  }
  uVar7 = uVar11 << 5 | 8;
  lVar10 = 0;
  do {
    lVar8 = lVar10;
    if ((uVar11 - uVar4) + lVar8 == 0) goto LAB_014824dc;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar7) + 8);
    if (sVar1 == 0) goto LAB_014824a0;
    uVar7 = uVar7 + 0x20;
    lVar10 = lVar8 + 1;
  } while (sVar1 != 0x1a);
  if ((uVar5 + (int)(lVar8 + 1)) - 1 < 0x60) {
LAB_014824a0:
    lVar10 = *(long *)(lVar6 + (ulong)(uVar5 + (int)lVar8) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x1a;
      *(undefined4 *)(lVar10 + 0xc) = param_7;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0xd8) = lVar10;
      lVar3 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar3 + 0x38);
      uVar11 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_014824dc:
  uVar4 = (uint)uVar11;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar9 = (long *)(lVar6 + uVar11 * 0x20 + 8);
  do {
    uVar7 = uVar11;
    if (uVar4 == uVar7) goto LAB_0148255c;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_01482524;
    plVar9 = plVar9 + 4;
    uVar11 = uVar7 + 1;
  } while (*(short *)(lVar10 + 8) != 0x48);
  if ((int)(uVar7 + 1) - 1U < 0x60) {
LAB_01482524:
    lVar6 = *(long *)(lVar6 + (uVar7 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 0x48;
      *(undefined8 *)(lVar6 + 0xc) = 0;
      *(undefined8 *)(lVar6 + 0x14) = 0;
      *(undefined4 *)(lVar6 + 0x1c) = 0;
      *(undefined1 *)(lVar6 + 10) = 1;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x248) = lVar6;
      lVar3 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0148255c:
  FUN_0107b310(lVar3,0x7a,8,1);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(*(long *)(lVar6 + 0x78) + 0x248);
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
      plVar9 = (long *)(lVar3 + uVar11 * 0x20 + 8);
      do {
        uVar11 = uVar11 + 1;
        if (*(short *)(*plVar9 + 8) == 0) break;
        *(undefined2 *)(*plVar9 + 8) = 0;
        plVar9 = plVar9 + 4;
      } while (((uint)uVar11 & 0xffff) != 0x60);
      uVar4 = *(uint *)(lVar3 + 0xc08);
    }
    *(uint *)(lVar3 + 0xc08) = uVar4 - 1;
    *(undefined2 *)(*(long *)(lVar3 + (ulong)(uVar4 - 1) * 0x20 + 8) + 8) = 0;
    uVar11 = (ulong)*(uint *)(lVar3 + 0xc08);
    do {
      if (uVar11 == 0) goto LAB_01482658;
      uVar11 = uVar11 - 1;
      *(int *)(lVar3 + 0xc08) = (int)uVar11;
    } while (*(short *)(*(long *)(lVar3 + (uVar11 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar3 + 0xc08) = (int)uVar11 + 1;
  }
LAB_01482658:
  return iVar12 == 0;
}


