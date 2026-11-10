/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0183db88; name: FUN_0183db88
 */


void FUN_0183db88(long param_1,long *param_2,uint param_3,ushort *param_4,uint param_5)

{
  short sVar1;
  ushort uVar2;
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
  uVar3 = (**(code **)(*param_2 + 0x98))();
  lVar4 = *(long *)(lVar7 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  uVar12 = (ulong)uVar5;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar8 = (long *)(lVar4 + uVar12 * 0x20 + 8);
  do {
    uVar10 = uVar12;
    if (uVar5 == uVar10) goto LAB_0183dcc8;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_0183dc98;
    plVar8 = plVar8 + 4;
    uVar12 = uVar10 + 1;
  } while (*(short *)(lVar9 + 8) != 3);
  if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_0183dc98:
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
LAB_0183dcc8:
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
    if ((uVar12 - uVar5) + lVar11 == -1) goto LAB_0183dd68;
    sVar1 = *(short *)(*(long *)(lVar7 + uVar10) + 8);
    if (sVar1 == 0) goto LAB_0183dd2c;
    uVar10 = uVar10 + 0x20;
    lVar9 = lVar11 + 1;
  } while (sVar1 != 4);
  if (uVar6 + (int)(lVar11 + 1) < 0x60) {
LAB_0183dd2c:
    lVar9 = *(long *)(lVar7 + (ulong)(uVar6 + (int)lVar11 + 1) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 4;
      *(uint *)(lVar9 + 0xc) = param_3 & 0xffff;
      *(undefined1 *)(lVar9 + 10) = 4;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x28) = lVar9;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar4 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0183dd68:
  uVar2 = param_4[4];
  uVar6 = (uint)uVar12;
  uVar5 = uVar6;
  if (uVar6 < 0x61) {
    uVar5 = 0x60;
  }
  uVar10 = uVar12 << 5 | 8;
  lVar9 = 0;
  do {
    lVar11 = lVar9;
    if ((uVar12 - uVar5) + lVar11 == 0) goto LAB_0183ddfc;
    sVar1 = *(short *)(*(long *)(lVar7 + uVar10) + 8);
    if (sVar1 == 0) goto LAB_0183ddc0;
    uVar10 = uVar10 + 0x20;
    lVar9 = lVar11 + 1;
  } while (sVar1 != 0x16);
  if ((uVar6 + (int)(lVar11 + 1)) - 1 < 0x60) {
LAB_0183ddc0:
    lVar9 = *(long *)(lVar7 + (ulong)(uVar6 + (int)lVar11) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x16;
      *(uint *)(lVar9 + 0xc) = (uint)(byte)uVar2;
      *(undefined1 *)(lVar9 + 10) = 4;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0xb8) = lVar9;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar4 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0183ddfc:
  uVar2 = *param_4;
  uVar6 = (uint)uVar12;
  uVar5 = uVar6;
  if (uVar6 < 0x61) {
    uVar5 = 0x60;
  }
  uVar10 = uVar12 << 5 | 8;
  lVar9 = 0;
  do {
    lVar11 = lVar9;
    if ((uVar12 - uVar5) + lVar11 == 0) goto LAB_0183de90;
    sVar1 = *(short *)(*(long *)(lVar7 + uVar10) + 8);
    if (sVar1 == 0) goto LAB_0183de54;
    uVar10 = uVar10 + 0x20;
    lVar9 = lVar11 + 1;
  } while (sVar1 != 0x12);
  if ((uVar6 + (int)(lVar11 + 1)) - 1 < 0x60) {
LAB_0183de54:
    lVar9 = *(long *)(lVar7 + (ulong)(uVar6 + (int)lVar11) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x12;
      *(uint *)(lVar9 + 0xc) = (uint)uVar2;
      *(undefined1 *)(lVar9 + 10) = 4;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x98) = lVar9;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar4 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0183de90:
  uVar5 = (uint)uVar12;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar8 = (long *)(lVar7 + uVar12 * 0x20 + 8);
  do {
    uVar10 = uVar12;
    if (uVar5 == uVar10) goto LAB_0183df10;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_0183dedc;
    plVar8 = plVar8 + 4;
    uVar12 = uVar10 + 1;
  } while (*(short *)(lVar9 + 8) != 0x62);
  if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_0183dedc:
    lVar7 = *(long *)(lVar7 + (uVar10 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 0x62;
      *(uint *)(lVar7 + 0xc) = param_5 & 0xff;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x318) = lVar7;
      lVar4 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0183df10:
  FUN_0107b310(lVar4,0x31,8,1);
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
        return;
      }
      uVar12 = uVar12 - 1;
      *(int *)(lVar4 + 0xc08) = (int)uVar12;
    } while (*(short *)(*(long *)(lVar4 + (uVar12 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar4 + 0xc08) = (int)uVar12 + 1;
  }
  return;
}


