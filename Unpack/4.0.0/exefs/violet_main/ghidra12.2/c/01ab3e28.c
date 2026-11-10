/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ab3e28; name: FUN_01ab3e28
 */


bool FUN_01ab3e28(long param_1,ushort *param_2,long *param_3,long param_4,undefined8 param_5)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  
  lVar7 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar7 + 0x38);
  uVar8 = *(uint *)(lVar9 + 0xc08);
  if (uVar8 < 0x60) {
    do {
      lVar12 = *(long *)(lVar9 + (ulong)uVar8 * 0x20 + 8);
      if (*(short *)(lVar12 + 8) == 0) {
        if (uVar8 < 0x5f) {
          *(undefined2 *)(lVar12 + 8) = 1;
          *(int *)(lVar9 + 0xc08) = *(int *)(lVar9 + 0xc08) + 1;
        }
        break;
      }
      uVar8 = uVar8 + 1;
      *(uint *)(lVar9 + 0xc08) = uVar8;
    } while (uVar8 != 0x60);
  }
  lVar9 = *(long *)(lVar7 + 0x58);
  uVar8 = *(uint *)(lVar9 + 0x408);
  if (uVar8 < 0x1f) {
    *(uint *)(lVar9 + 0x408) = uVar8 + 1;
    lVar9 = *(long *)(lVar7 + 0x58);
    uVar8 = *(uint *)(lVar9 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(lVar9 + (ulong)uVar8 * 0x20 + 8);
  lVar9 = *(long *)(param_1 + 0x10);
  uVar6 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar7 = *(long *)(lVar9 + 0x38);
  uVar8 = *(uint *)(lVar7 + 0xc08);
  uVar14 = (ulong)uVar8;
  if (uVar8 < 0x61) {
    uVar8 = 0x60;
  }
  plVar11 = (long *)(lVar7 + uVar14 * 0x20 + 8);
  do {
    uVar15 = uVar14;
    if (uVar8 == uVar15) goto LAB_01ab3f74;
    lVar12 = *plVar11;
    if (*(short *)(lVar12 + 8) == 0) goto LAB_01ab3f44;
    plVar11 = plVar11 + 4;
    uVar14 = uVar15 + 1;
  } while (*(short *)(lVar12 + 8) != 3);
  if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_01ab3f44:
    lVar7 = *(long *)(lVar7 + (uVar15 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 3;
      *(undefined4 *)(lVar7 + 0xc) = uVar6;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x78) + 0x20) = lVar7;
    }
  }
LAB_01ab3f74:
  cVar5 = FUN_01ab445c(param_4);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar7 + 0x38);
  uVar10 = *(uint *)(lVar9 + 0xc08);
  uVar14 = (ulong)uVar10;
  bVar1 = *(byte *)(param_4 + 0xa6);
  uVar8 = uVar10;
  if (uVar10 < 0x61) {
    uVar8 = 0x60;
  }
  uVar15 = uVar14 << 5 | 8;
  lVar12 = -1;
  do {
    lVar13 = lVar12;
    if ((uVar14 - uVar8) + lVar13 == -1) goto LAB_01ab4024;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar15) + 8);
    if (sVar2 == 0) goto LAB_01ab3fe4;
    uVar15 = uVar15 + 0x20;
    lVar12 = lVar13 + 1;
  } while (sVar2 != 5);
  if (uVar10 + (int)(lVar13 + 1) < 0x60) {
LAB_01ab3fe4:
    lVar12 = *(long *)(lVar9 + (ulong)(uVar10 + (int)lVar13 + 1) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 5;
      *(uint *)(lVar12 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x30) = lVar12;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar7 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_01ab4024:
  uVar10 = (uint)uVar14;
  uVar8 = uVar10;
  if (uVar10 < 0x61) {
    uVar8 = 0x60;
  }
  uVar15 = uVar14 << 5 | 8;
  lVar12 = 0;
  do {
    lVar13 = lVar12;
    if ((uVar14 - uVar8) + lVar13 == 0) goto LAB_01ab40b4;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar15) + 8);
    if (sVar2 == 0) goto LAB_01ab4078;
    uVar15 = uVar15 + 0x20;
    lVar12 = lVar13 + 1;
  } while (sVar2 != 0x59);
  if ((uVar10 + (int)(lVar13 + 1)) - 1 < 0x60) {
LAB_01ab4078:
    lVar12 = *(long *)(lVar9 + (ulong)(uVar10 + (int)lVar13) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x59;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(undefined4 *)(lVar12 + 0xc) = 1;
      *(undefined1 *)(lVar12 + 10) = 1;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x2d0) = lVar12;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar7 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_01ab40b4:
  uVar10 = (uint)uVar14;
  uVar8 = uVar10;
  if (uVar10 < 0x61) {
    uVar8 = 0x60;
  }
  uVar15 = uVar14 << 5 | 8;
  lVar12 = 0;
  do {
    lVar13 = lVar12;
    if ((uVar14 - uVar8) + lVar13 == 0) goto LAB_01ab4144;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar15) + 8);
    if (sVar2 == 0) goto LAB_01ab4108;
    uVar15 = uVar15 + 0x20;
    lVar12 = lVar13 + 1;
  } while (sVar2 != 0x47);
  if ((uVar10 + (int)(lVar13 + 1)) - 1 < 0x60) {
LAB_01ab4108:
    lVar12 = *(long *)(lVar9 + (ulong)(uVar10 + (int)lVar13) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x47;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(undefined4 *)(lVar12 + 0xc) = 1;
      *(undefined1 *)(lVar12 + 10) = 1;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x240) = lVar12;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar7 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_01ab4144:
  uVar8 = (uint)uVar14;
  if (uVar8 < 0x61) {
    uVar8 = 0x60;
  }
  plVar11 = (long *)(lVar9 + uVar14 * 0x20 + 8);
  do {
    uVar15 = uVar14;
    if (uVar8 == uVar15) goto LAB_01ab41bc;
    lVar12 = *plVar11;
    if (*(short *)(lVar12 + 8) == 0) goto LAB_01ab418c;
    plVar11 = plVar11 + 4;
    uVar14 = uVar15 + 1;
  } while (*(short *)(lVar12 + 8) != 0x78);
  if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_01ab418c:
    lVar9 = *(long *)(lVar9 + (uVar15 & 0xffffffff) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x78;
      *(undefined1 *)(lVar9 + 10) = 0;
      *(undefined8 *)(lVar9 + 0xc) = 0;
      *(undefined8 *)(lVar9 + 0x14) = 0;
      *(undefined4 *)(lVar9 + 0x1c) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x3c8) = lVar9;
    }
  }
LAB_01ab41bc:
  if (bVar1 != 0) {
    uVar14 = 0;
    do {
      uVar8 = (int)uVar14 + 6;
      lVar9 = *(long *)(param_1 + 0x10);
      uVar6 = (**(code **)(**(long **)(param_4 + uVar14 * 8) + 0x98))();
      lVar7 = *(long *)(lVar9 + 0x38);
      uVar10 = *(uint *)(lVar7 + 0xc08);
      uVar15 = (ulong)uVar10;
      if (uVar10 < 0x61) {
        uVar10 = 0x60;
      }
      plVar11 = (long *)(lVar7 + uVar15 * 0x20 + 8);
      do {
        uVar16 = uVar15;
        if (uVar10 == uVar16) goto LAB_01ab4264;
        lVar12 = *plVar11;
        if (*(ushort *)(lVar12 + 8) == 0) goto LAB_01ab4230;
        plVar11 = plVar11 + 4;
        uVar15 = uVar16 + 1;
      } while ((uint)*(ushort *)(lVar12 + 8) != (uVar8 & 0xffff));
      if ((int)(uVar16 + 1) - 1U < 0x60) {
LAB_01ab4230:
        lVar7 = *(long *)(lVar7 + (uVar16 & 0xffffffff) * 0x20 + 8);
        if (lVar7 != 0) {
          uVar3 = (ushort)uVar8;
          *(ushort *)(lVar7 + 8) = uVar3;
          *(undefined4 *)(lVar7 + 0xc) = uVar6;
          *(undefined1 *)(lVar7 + 10) = 4;
          *(undefined8 *)(lVar7 + 0x10) = 0;
          *(undefined8 *)(lVar7 + 0x18) = 0;
          if (-1 < (char)uVar14) {
            *(long *)(*(long *)(lVar9 + 0x78) + (ulong)uVar3 * 8 + 8) = lVar7;
          }
        }
      }
LAB_01ab4264:
      uVar14 = uVar14 + 1;
    } while (uVar14 != bVar1);
  }
  lVar7 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar7 + 0x38);
  uVar8 = *(uint *)(lVar9 + 0xc08);
  uVar14 = (ulong)uVar8;
  if (uVar8 < 0x61) {
    uVar8 = 0x60;
  }
  plVar11 = (long *)(lVar9 + uVar14 * 0x20 + 8);
  do {
    uVar15 = uVar14;
    if (uVar8 == uVar15) goto LAB_01ab42fc;
    lVar12 = *plVar11;
    if (*(short *)(lVar12 + 8) == 0) goto LAB_01ab42c8;
    plVar11 = plVar11 + 4;
    uVar14 = uVar15 + 1;
  } while (*(short *)(lVar12 + 8) != 0x12);
  if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_01ab42c8:
    lVar9 = *(long *)(lVar9 + (uVar15 & 0xffffffff) * 0x20 + 8);
    if (lVar9 != 0) {
      *(uint *)(lVar9 + 0xc) = (uint)*param_2;
      *(undefined2 *)(lVar9 + 8) = 0x12;
      *(undefined1 *)(lVar9 + 10) = 4;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x98) = lVar9;
      lVar7 = *(long *)(param_1 + 0x10);
    }
  }
LAB_01ab42fc:
  uVar6 = 0xcc;
  if (cVar5 == '\0') {
    uVar6 = 0xcd;
  }
  FUN_0107b310(lVar7,uVar6,8,1);
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x2d0);
  bVar4 = false;
  if (lVar7 != 0) {
    bVar4 = *(int *)(lVar7 + 0xc) != 0;
  }
  *(bool *)param_5 = bVar4;
  lVar9 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(*(long *)(lVar9 + 0x78) + 0x3c8);
  if (lVar7 == 0) {
    iVar17 = 0;
  }
  else {
    iVar17 = *(int *)(lVar7 + 0xc);
  }
  lVar7 = *(long *)(lVar9 + 0x58);
  if (*(uint *)(lVar7 + 0x408) == 0) {
    uVar14 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar7 + (ulong)*(uint *)(lVar7 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar7 + 0x408) = *(int *)(lVar7 + 0x408) + -1;
    lVar7 = *(long *)(lVar9 + 0x58);
    uVar14 = (ulong)*(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar9 + 0x78) = *(undefined8 *)(lVar7 + uVar14 * 0x20 + 8);
  lVar7 = *(long *)(lVar9 + 0x38);
  uVar8 = *(uint *)(lVar7 + 0xc08);
  if (uVar8 != 0) {
    if ((uVar8 & 0xffff) < 0x60) {
      uVar14 = (ulong)uVar8 & 0xffff;
      plVar11 = (long *)(lVar7 + uVar14 * 0x20 + 8);
      do {
        uVar14 = uVar14 + 1;
        if (*(short *)(*plVar11 + 8) == 0) break;
        *(undefined2 *)(*plVar11 + 8) = 0;
        plVar11 = plVar11 + 4;
      } while (((uint)uVar14 & 0xffff) != 0x60);
      uVar8 = *(uint *)(lVar7 + 0xc08);
    }
    *(uint *)(lVar7 + 0xc08) = uVar8 - 1;
    *(undefined2 *)(*(long *)(lVar7 + (ulong)(uVar8 - 1) * 0x20 + 8) + 8) = 0;
    uVar14 = (ulong)*(uint *)(lVar7 + 0xc08);
    do {
      if (uVar14 == 0) goto LAB_01ab4424;
      uVar14 = uVar14 - 1;
      *(int *)(lVar7 + 0xc08) = (int)uVar14;
    } while (*(short *)(*(long *)(lVar7 + (uVar14 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar7 + 0xc08) = (int)uVar14 + 1;
  }
LAB_01ab4424:
  return iVar17 != 0;
}


