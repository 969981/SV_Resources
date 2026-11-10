/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017d9d10; name: FUN_017d9d10
 */


void FUN_017d9d10(long param_1,long *param_2,long *param_3,ushort *param_4,uint param_5,
                 undefined4 param_6,uint param_7,uint param_8)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  
  uVar4 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar6 + 0x38);
  uVar7 = *(uint *)(lVar9 + 0xc08);
  if (uVar7 < 0x60) {
    do {
      lVar13 = *(long *)(lVar9 + (ulong)uVar7 * 0x20 + 8);
      if (*(short *)(lVar13 + 8) == 0) {
        if (uVar7 < 0x5f) {
          *(undefined2 *)(lVar13 + 8) = 1;
          *(int *)(lVar9 + 0xc08) = *(int *)(lVar9 + 0xc08) + 1;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      *(uint *)(lVar9 + 0xc08) = uVar7;
    } while (uVar7 != 0x60);
  }
  lVar9 = *(long *)(lVar6 + 0x58);
  uVar7 = *(uint *)(lVar9 + 0x408);
  if (uVar7 < 0x1f) {
    *(uint *)(lVar9 + 0x408) = uVar7 + 1;
    lVar9 = *(long *)(lVar6 + 0x58);
    uVar7 = *(uint *)(lVar9 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar9 + (ulong)uVar7 * 0x20 + 8);
  lVar9 = *(long *)(param_1 + 0x10);
  uVar5 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar6 = *(long *)(lVar9 + 0x38);
  uVar7 = *(uint *)(lVar6 + 0xc08);
  uVar14 = (ulong)uVar7;
  if (uVar7 < 0x61) {
    uVar7 = 0x60;
  }
  plVar12 = (long *)(lVar6 + uVar14 * 0x20 + 8);
  do {
    uVar10 = uVar14;
    if (uVar7 == uVar10) goto LAB_017d9e78;
    lVar13 = *plVar12;
    if (*(short *)(lVar13 + 8) == 0) goto LAB_017d9e48;
    plVar12 = plVar12 + 4;
    uVar14 = uVar10 + 1;
  } while (*(short *)(lVar13 + 8) != 3);
  if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_017d9e48:
    lVar6 = *(long *)(lVar6 + (uVar10 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 3;
      *(undefined4 *)(lVar6 + 0xc) = uVar5;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x78) + 0x20) = lVar6;
    }
  }
LAB_017d9e78:
  lVar6 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar6 + 0x38);
  uVar8 = *(uint *)(lVar9 + 0xc08);
  uVar14 = (ulong)uVar8;
  uVar7 = uVar8;
  if (uVar8 < 0x61) {
    uVar7 = 0x60;
  }
  uVar10 = uVar14 << 5 | 8;
  lVar13 = -1;
  do {
    lVar11 = lVar13;
    if ((uVar14 - uVar7) + lVar11 == -1) goto LAB_017d9f14;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar10) + 8);
    if (sVar2 == 0) goto LAB_017d9ed8;
    uVar10 = uVar10 + 0x20;
    lVar13 = lVar11 + 1;
  } while (sVar2 != 4);
  if (uVar8 + (int)(lVar11 + 1) < 0x60) {
LAB_017d9ed8:
    lVar13 = *(long *)(lVar9 + (ulong)(uVar8 + (int)lVar11 + 1) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 4;
      *(undefined4 *)(lVar13 + 0xc) = uVar4;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x28) = lVar13;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar6 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_017d9f14:
  uVar3 = param_4[1];
  uVar8 = (uint)uVar14;
  uVar7 = uVar8;
  if (uVar8 < 0x61) {
    uVar7 = 0x60;
  }
  uVar10 = uVar14 << 5 | 8;
  lVar13 = 0;
  do {
    lVar11 = lVar13;
    if ((uVar14 - uVar7) + lVar11 == 0) goto LAB_017d9fa8;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar10) + 8);
    if (sVar2 == 0) goto LAB_017d9f6c;
    uVar10 = uVar10 + 0x20;
    lVar13 = lVar11 + 1;
  } while (sVar2 != 0x14);
  if ((uVar8 + (int)(lVar11 + 1)) - 1 < 0x60) {
LAB_017d9f6c:
    lVar13 = *(long *)(lVar9 + (ulong)(uVar8 + (int)lVar11) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x14;
      *(uint *)(lVar13 + 0xc) = (uint)uVar3;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0xa8) = lVar13;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar6 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_017d9fa8:
  uVar3 = *param_4;
  uVar8 = (uint)uVar14;
  uVar7 = uVar8;
  if (uVar8 < 0x61) {
    uVar7 = 0x60;
  }
  uVar10 = uVar14 << 5 | 8;
  lVar13 = 0;
  do {
    lVar11 = lVar13;
    if ((uVar14 - uVar7) + lVar11 == 0) goto LAB_017da03c;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar10) + 8);
    if (sVar2 == 0) goto LAB_017da000;
    uVar10 = uVar10 + 0x20;
    lVar13 = lVar11 + 1;
  } while (sVar2 != 0x12);
  if ((uVar8 + (int)(lVar11 + 1)) - 1 < 0x60) {
LAB_017da000:
    lVar13 = *(long *)(lVar9 + (ulong)(uVar8 + (int)lVar11) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x12;
      *(uint *)(lVar13 + 0xc) = (uint)uVar3;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x98) = lVar13;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar6 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_017da03c:
  uVar8 = (uint)uVar14;
  uVar7 = uVar8;
  if (uVar8 < 0x61) {
    uVar7 = 0x60;
  }
  uVar10 = uVar14 << 5 | 8;
  lVar13 = 0;
  do {
    lVar11 = lVar13;
    if ((uVar14 - uVar7) + lVar11 == 0) goto LAB_017da0d0;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar10) + 8);
    if (sVar2 == 0) goto LAB_017da094;
    uVar10 = uVar10 + 0x20;
    lVar13 = lVar11 + 1;
  } while (sVar2 != 0x3d);
  if ((uVar8 + (int)(lVar11 + 1)) - 1 < 0x60) {
LAB_017da094:
    lVar13 = *(long *)(lVar9 + (ulong)(uVar8 + (int)lVar11) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x3d;
      *(uint *)(lVar13 + 0xc) = param_5 & 0xff;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x1f0) = lVar13;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar6 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_017da0d0:
  uVar3 = param_4[4];
  uVar8 = (uint)uVar14;
  uVar7 = uVar8;
  if (uVar8 < 0x61) {
    uVar7 = 0x60;
  }
  uVar10 = uVar14 << 5 | 8;
  lVar13 = 0;
  do {
    lVar11 = lVar13;
    if ((uVar14 - uVar7) + lVar11 == 0) goto LAB_017da164;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar10) + 8);
    if (sVar2 == 0) goto LAB_017da128;
    uVar10 = uVar10 + 0x20;
    lVar13 = lVar11 + 1;
  } while (sVar2 != 0x16);
  if ((uVar8 + (int)(lVar11 + 1)) - 1 < 0x60) {
LAB_017da128:
    lVar13 = *(long *)(lVar9 + (ulong)(uVar8 + (int)lVar11) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x16;
      *(uint *)(lVar13 + 0xc) = (uint)(byte)uVar3;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0xb8) = lVar13;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar6 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_017da164:
  bVar1 = *(byte *)((long)param_4 + 9);
  uVar8 = (uint)uVar14;
  uVar7 = uVar8;
  if (uVar8 < 0x61) {
    uVar7 = 0x60;
  }
  uVar10 = uVar14 << 5 | 8;
  lVar13 = 0;
  do {
    lVar11 = lVar13;
    if ((uVar14 - uVar7) + lVar11 == 0) goto LAB_017da1f8;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar10) + 8);
    if (sVar2 == 0) goto LAB_017da1bc;
    uVar10 = uVar10 + 0x20;
    lVar13 = lVar11 + 1;
  } while (sVar2 != 0x1b);
  if ((uVar8 + (int)(lVar11 + 1)) - 1 < 0x60) {
LAB_017da1bc:
    lVar13 = *(long *)(lVar9 + (ulong)(uVar8 + (int)lVar11) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x1b;
      *(uint *)(lVar13 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0xe0) = lVar13;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar6 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_017da1f8:
  uVar8 = (uint)uVar14;
  uVar7 = uVar8;
  if (uVar8 < 0x61) {
    uVar7 = 0x60;
  }
  uVar10 = uVar14 << 5 | 8;
  lVar13 = 0;
  do {
    lVar11 = lVar13;
    if ((uVar14 - uVar7) + lVar11 == 0) goto LAB_017da288;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar10) + 8);
    if (sVar2 == 0) goto LAB_017da24c;
    uVar10 = uVar10 + 0x20;
    lVar13 = lVar11 + 1;
  } while (sVar2 != 0x35);
  if ((uVar8 + (int)(lVar11 + 1)) - 1 < 0x60) {
LAB_017da24c:
    lVar13 = *(long *)(lVar9 + (ulong)(uVar8 + (int)lVar11) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x35;
      *(undefined4 *)(lVar13 + 0xc) = param_6;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x1b0) = lVar13;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar6 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_017da288:
  uVar8 = (uint)uVar14;
  uVar7 = uVar8;
  if (uVar8 < 0x61) {
    uVar7 = 0x60;
  }
  uVar10 = uVar14 << 5 | 8;
  lVar13 = 0;
  do {
    lVar11 = lVar13;
    if ((uVar14 - uVar7) + lVar11 == 0) goto LAB_017da31c;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar10) + 8);
    if (sVar2 == 0) goto LAB_017da2e0;
    uVar10 = uVar10 + 0x20;
    lVar13 = lVar11 + 1;
  } while (sVar2 != 0x4c);
  if ((uVar8 + (int)(lVar11 + 1)) - 1 < 0x60) {
LAB_017da2e0:
    lVar13 = *(long *)(lVar9 + (ulong)(uVar8 + (int)lVar11) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x4c;
      *(uint *)(lVar13 + 0xc) = param_7 & 1;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x268) = lVar13;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar6 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_017da31c:
  uVar8 = (uint)uVar14;
  uVar7 = uVar8;
  if (uVar8 < 0x61) {
    uVar7 = 0x60;
  }
  uVar10 = uVar14 << 5 | 8;
  lVar13 = 0;
  do {
    lVar11 = lVar13;
    if ((uVar14 - uVar7) + lVar11 == 0) goto LAB_017da3b0;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar10) + 8);
    if (sVar2 == 0) goto LAB_017da374;
    uVar10 = uVar10 + 0x20;
    lVar13 = lVar11 + 1;
  } while (sVar2 != 0x4d);
  if ((uVar8 + (int)(lVar11 + 1)) - 1 < 0x60) {
LAB_017da374:
    lVar13 = *(long *)(lVar9 + (ulong)(uVar8 + (int)lVar11) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x4d;
      *(uint *)(lVar13 + 0xc) = param_8 & 1;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x270) = lVar13;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar6 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_017da3b0:
  bVar1 = *(byte *)((long)param_4 + 0xb);
  uVar8 = (uint)uVar14;
  uVar7 = uVar8;
  if (uVar8 < 0x61) {
    uVar7 = 0x60;
  }
  uVar10 = uVar14 << 5 | 8;
  lVar13 = 0;
  do {
    lVar11 = lVar13;
    if ((uVar14 - uVar7) + lVar11 == 0) goto LAB_017da444;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar10) + 8);
    if (sVar2 == 0) goto LAB_017da408;
    uVar10 = uVar10 + 0x20;
    lVar13 = lVar11 + 1;
  } while (sVar2 != 99);
  if ((uVar8 + (int)(lVar11 + 1)) - 1 < 0x60) {
LAB_017da408:
    lVar13 = *(long *)(lVar9 + (ulong)(uVar8 + (int)lVar11) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 99;
      *(uint *)(lVar13 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 800) = lVar13;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar6 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_017da444:
  uVar7 = (uint)uVar14;
  if (uVar7 < 0x61) {
    uVar7 = 0x60;
  }
  plVar12 = (long *)(lVar9 + uVar14 * 0x20 + 8);
  do {
    uVar10 = uVar14;
    if (uVar7 == uVar10) goto LAB_017da4c4;
    lVar13 = *plVar12;
    if (*(short *)(lVar13 + 8) == 0) goto LAB_017da48c;
    plVar12 = plVar12 + 4;
    uVar14 = uVar10 + 1;
  } while (*(short *)(lVar13 + 8) != 0x4e);
  if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_017da48c:
    lVar9 = *(long *)(lVar9 + (uVar10 & 0xffffffff) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x4e;
      *(undefined8 *)(lVar9 + 0xc) = 0;
      *(undefined8 *)(lVar9 + 0x14) = 0;
      *(undefined4 *)(lVar9 + 0x1c) = 0;
      *(undefined1 *)(lVar9 + 10) = 1;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x278) = lVar9;
      lVar6 = *(long *)(param_1 + 0x10);
    }
  }
LAB_017da4c4:
  FUN_0107b310(lVar6,0x62,8,1);
  FUN_0107b310(*(undefined8 *)(param_1 + 0x10),99,8,1);
  FUN_0107b310(*(undefined8 *)(param_1 + 0x10),100,8,1);
  FUN_0107b310(*(undefined8 *)(param_1 + 0x10),0x65,8,1);
  FUN_0107b310(*(undefined8 *)(param_1 + 0x10),0x66,8,1);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar6 + 0x58);
  if (*(uint *)(lVar9 + 0x408) == 0) {
    uVar14 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar9 + (ulong)*(uint *)(lVar9 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar9 + 0x408) = *(int *)(lVar9 + 0x408) + -1;
    lVar9 = *(long *)(lVar6 + 0x58);
    uVar14 = (ulong)*(uint *)(lVar9 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar9 + uVar14 * 0x20 + 8);
  lVar6 = *(long *)(lVar6 + 0x38);
  uVar7 = *(uint *)(lVar6 + 0xc08);
  if (uVar7 != 0) {
    if ((uVar7 & 0xffff) < 0x60) {
      uVar14 = (ulong)uVar7 & 0xffff;
      plVar12 = (long *)(lVar6 + uVar14 * 0x20 + 8);
      do {
        uVar14 = uVar14 + 1;
        if (*(short *)(*plVar12 + 8) == 0) break;
        *(undefined2 *)(*plVar12 + 8) = 0;
        plVar12 = plVar12 + 4;
      } while (((uint)uVar14 & 0xffff) != 0x60);
      uVar7 = *(uint *)(lVar6 + 0xc08);
    }
    *(uint *)(lVar6 + 0xc08) = uVar7 - 1;
    *(undefined2 *)(*(long *)(lVar6 + (ulong)(uVar7 - 1) * 0x20 + 8) + 8) = 0;
    uVar14 = (ulong)*(uint *)(lVar6 + 0xc08);
    do {
      if (uVar14 == 0) {
        return;
      }
      uVar14 = uVar14 - 1;
      *(int *)(lVar6 + 0xc08) = (int)uVar14;
    } while (*(short *)(*(long *)(lVar6 + (uVar14 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar6 + 0xc08) = (int)uVar14 + 1;
  }
  return;
}


