/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01683930; name: FUN_01683930
 */


void FUN_01683930(long param_1,long *param_2,long param_3,long param_4,ushort *param_5,uint param_6,
                 uint param_7,undefined4 param_8)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  
  lVar7 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(lVar7 + 0x38);
  uVar8 = *(uint *)(lVar10 + 0xc08);
  bVar1 = *(byte *)(param_3 + 0xa6);
  if (uVar8 < 0x60) {
    do {
      lVar13 = *(long *)(lVar10 + (ulong)uVar8 * 0x20 + 8);
      if (*(short *)(lVar13 + 8) == 0) {
        if (uVar8 < 0x5f) {
          *(undefined2 *)(lVar13 + 8) = 1;
          *(int *)(lVar10 + 0xc08) = *(int *)(lVar10 + 0xc08) + 1;
        }
        break;
      }
      uVar8 = uVar8 + 1;
      *(uint *)(lVar10 + 0xc08) = uVar8;
    } while (uVar8 != 0x60);
  }
  lVar10 = *(long *)(lVar7 + 0x58);
  uVar8 = *(uint *)(lVar10 + 0x408);
  if (uVar8 < 0x1f) {
    *(uint *)(lVar10 + 0x408) = uVar8 + 1;
    lVar10 = *(long *)(lVar7 + 0x58);
    uVar8 = *(uint *)(lVar10 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(lVar10 + (ulong)uVar8 * 0x20 + 8);
  lVar10 = *(long *)(param_1 + 0x10);
  uVar5 = (**(code **)(*param_2 + 0x98))();
  lVar7 = *(long *)(lVar10 + 0x38);
  uVar8 = *(uint *)(lVar7 + 0xc08);
  uVar14 = (ulong)uVar8;
  if (uVar8 < 0x61) {
    uVar8 = 0x60;
  }
  plVar6 = (long *)(lVar7 + uVar14 * 0x20 + 8);
  do {
    uVar11 = uVar14;
    if (uVar8 == uVar11) goto LAB_01683a88;
    lVar13 = *plVar6;
    if (*(short *)(lVar13 + 8) == 0) goto LAB_01683a58;
    plVar6 = plVar6 + 4;
    uVar14 = uVar11 + 1;
  } while (*(short *)(lVar13 + 8) != 3);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_01683a58:
    lVar7 = *(long *)(lVar7 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 3;
      *(undefined4 *)(lVar7 + 0xc) = uVar5;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x78) + 0x20) = lVar7;
    }
  }
LAB_01683a88:
  lVar7 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(lVar7 + 0x38);
  uVar9 = *(uint *)(lVar10 + 0xc08);
  uVar14 = (ulong)uVar9;
  uVar8 = uVar9;
  if (uVar9 < 0x61) {
    uVar8 = 0x60;
  }
  uVar11 = uVar14 << 5 | 8;
  lVar13 = -1;
  do {
    lVar12 = lVar13;
    if ((uVar14 - uVar8) + lVar12 == -1) goto LAB_01683b2c;
    sVar3 = *(short *)(*(long *)(lVar10 + uVar11) + 8);
    if (sVar3 == 0) goto LAB_01683aec;
    uVar11 = uVar11 + 0x20;
    lVar13 = lVar12 + 1;
  } while (sVar3 != 0x54);
  if (uVar9 + (int)(lVar12 + 1) < 0x60) {
LAB_01683aec:
    lVar13 = *(long *)(lVar10 + (ulong)(uVar9 + (int)lVar12 + 1) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x54;
      *(uint *)(lVar13 + 0xc) = param_6 & 1;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x2a8) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar10 = *(long *)(lVar7 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar10 + 0xc08);
    }
  }
LAB_01683b2c:
  uVar4 = *param_5;
  uVar9 = (uint)uVar14;
  uVar8 = uVar9;
  if (uVar9 < 0x61) {
    uVar8 = 0x60;
  }
  uVar11 = uVar14 << 5 | 8;
  lVar13 = 0;
  do {
    lVar12 = lVar13;
    if ((uVar14 - uVar8) + lVar12 == 0) goto LAB_01683bc0;
    sVar3 = *(short *)(*(long *)(lVar10 + uVar11) + 8);
    if (sVar3 == 0) goto LAB_01683b84;
    uVar11 = uVar11 + 0x20;
    lVar13 = lVar12 + 1;
  } while (sVar3 != 0x12);
  if ((uVar9 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_01683b84:
    lVar13 = *(long *)(lVar10 + (ulong)(uVar9 + (int)lVar12) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x12;
      *(uint *)(lVar13 + 0xc) = (uint)uVar4;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x98) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar10 = *(long *)(lVar7 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar10 + 0xc08);
    }
  }
LAB_01683bc0:
  uVar4 = param_5[4];
  uVar9 = (uint)uVar14;
  uVar8 = uVar9;
  if (uVar9 < 0x61) {
    uVar8 = 0x60;
  }
  uVar11 = uVar14 << 5 | 8;
  lVar13 = 0;
  do {
    lVar12 = lVar13;
    if ((uVar14 - uVar8) + lVar12 == 0) goto LAB_01683c54;
    sVar3 = *(short *)(*(long *)(lVar10 + uVar11) + 8);
    if (sVar3 == 0) goto LAB_01683c18;
    uVar11 = uVar11 + 0x20;
    lVar13 = lVar12 + 1;
  } while (sVar3 != 0x16);
  if ((uVar9 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_01683c18:
    lVar13 = *(long *)(lVar10 + (ulong)(uVar9 + (int)lVar12) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x16;
      *(uint *)(lVar13 + 0xc) = (uint)(byte)uVar4;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0xb8) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar10 = *(long *)(lVar7 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar10 + 0xc08);
    }
  }
LAB_01683c54:
  bVar2 = *(byte *)((long)param_5 + 9);
  uVar9 = (uint)uVar14;
  uVar8 = uVar9;
  if (uVar9 < 0x61) {
    uVar8 = 0x60;
  }
  uVar11 = uVar14 << 5 | 8;
  lVar13 = 0;
  do {
    lVar12 = lVar13;
    if ((uVar14 - uVar8) + lVar12 == 0) goto LAB_01683ce8;
    sVar3 = *(short *)(*(long *)(lVar10 + uVar11) + 8);
    if (sVar3 == 0) goto LAB_01683cac;
    uVar11 = uVar11 + 0x20;
    lVar13 = lVar12 + 1;
  } while (sVar3 != 0x1b);
  if ((uVar9 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_01683cac:
    lVar13 = *(long *)(lVar10 + (ulong)(uVar9 + (int)lVar12) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x1b;
      *(uint *)(lVar13 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0xe0) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar10 = *(long *)(lVar7 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar10 + 0xc08);
    }
  }
LAB_01683ce8:
  bVar2 = *(byte *)((long)param_5 + 0xb);
  uVar9 = (uint)uVar14;
  uVar8 = uVar9;
  if (uVar9 < 0x61) {
    uVar8 = 0x60;
  }
  uVar11 = uVar14 << 5 | 8;
  lVar13 = 0;
  do {
    lVar12 = lVar13;
    if ((uVar14 - uVar8) + lVar12 == 0) goto LAB_01683d7c;
    sVar3 = *(short *)(*(long *)(lVar10 + uVar11) + 8);
    if (sVar3 == 0) goto LAB_01683d40;
    uVar11 = uVar11 + 0x20;
    lVar13 = lVar12 + 1;
  } while (sVar3 != 99);
  if ((uVar9 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_01683d40:
    lVar13 = *(long *)(lVar10 + (ulong)(uVar9 + (int)lVar12) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 99;
      *(uint *)(lVar13 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 800) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar10 = *(long *)(lVar7 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar10 + 0xc08);
    }
  }
LAB_01683d7c:
  uVar9 = *(uint *)(param_4 + 4);
  uVar8 = (uint)uVar14;
  if (uVar8 < 0x61) {
    uVar8 = 0x60;
  }
  plVar6 = (long *)(lVar10 + uVar14 * 0x20 + 8);
  do {
    uVar11 = uVar14;
    if (uVar8 == uVar11) goto LAB_01683dfc;
    lVar13 = *plVar6;
    if (*(short *)(lVar13 + 8) == 0) goto LAB_01683dcc;
    plVar6 = plVar6 + 4;
    uVar14 = uVar11 + 1;
  } while (*(short *)(lVar13 + 8) != 0x6e);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_01683dcc:
    lVar10 = *(long *)(lVar10 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x6e;
      *(uint *)(lVar10 + 0xc) = uVar9 & 1;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x378) = lVar10;
    }
  }
LAB_01683dfc:
  if (bVar1 != 0) {
    uVar14 = 0;
    if ((param_7 & 1) != 0) {
      iVar16 = 0;
      iVar17 = 0;
LAB_01684288:
      bVar2 = *(byte *)(param_3 + 0xa6);
      if (uVar14 < bVar2) {
        plVar6 = *(long **)(param_3 + uVar14 * 8);
      }
      else {
        plVar6 = (long *)0x0;
      }
      if (bVar2 != 0) {
        uVar11 = 0;
        do {
          if ((*(long **)(param_3 + uVar11 * 8) == plVar6) &&
             (*(char *)(param_3 + uVar11 + 0x84) == '\x01')) {
            iVar16 = iVar16 + (uint)*(ushort *)(param_3 + uVar11 * 2 + 0x58);
            lVar10 = *(long *)(param_1 + 0x10);
            uVar8 = iVar17 + 6;
            uVar5 = (**(code **)(*plVar6 + 0x98))();
            lVar7 = *(long *)(lVar10 + 0x38);
            uVar9 = *(uint *)(lVar7 + 0xc08);
            uVar11 = (ulong)uVar9;
            if (uVar9 < 0x61) {
              uVar9 = 0x60;
            }
            plVar6 = (long *)(lVar7 + uVar11 * 0x20 + 8);
            goto LAB_016842f4;
          }
          uVar11 = uVar11 + 1;
        } while (bVar2 != uVar11);
      }
      goto LAB_01684368;
    }
    iVar16 = 0;
    iVar17 = 0;
LAB_01683e14:
    bVar2 = *(byte *)(param_3 + 0xa6);
    if (uVar14 < bVar2) {
      plVar6 = *(long **)(param_3 + uVar14 * 8);
    }
    else {
      plVar6 = (long *)0x0;
    }
    if (bVar2 != 0) {
      uVar11 = 0;
      do {
        if ((*(long **)(param_3 + uVar11 * 8) == plVar6) &&
           (*(char *)(param_3 + uVar11 + 0x84) != '\0')) {
          lVar7 = param_3 + uVar11 * 2;
          iVar16 = (uint)*(ushort *)(lVar7 + 0x6e) + (uint)*(ushort *)(lVar7 + 0x58) + iVar16;
          lVar10 = *(long *)(param_1 + 0x10);
          uVar8 = iVar17 + 6;
          uVar5 = (**(code **)(*plVar6 + 0x98))();
          lVar7 = *(long *)(lVar10 + 0x38);
          uVar9 = *(uint *)(lVar7 + 0xc08);
          uVar11 = (ulong)uVar9;
          if (uVar9 < 0x61) {
            uVar9 = 0x60;
          }
          plVar6 = (long *)(lVar7 + uVar11 * 0x20 + 8);
          goto LAB_01683e84;
        }
        uVar11 = uVar11 + 1;
      } while (bVar2 != uVar11);
    }
    goto LAB_01683ef8;
  }
  goto LAB_01684184;
  while( true ) {
    lVar13 = *plVar6;
    if (*(ushort *)(lVar13 + 8) == 0) goto LAB_01684328;
    plVar6 = plVar6 + 4;
    uVar11 = uVar15 + 1;
    if ((uint)*(ushort *)(lVar13 + 8) == (uVar8 & 0xffff)) break;
LAB_016842f4:
    uVar15 = uVar11;
    if (uVar9 == uVar15) goto LAB_01684364;
  }
  if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_01684328:
    lVar7 = *(long *)(lVar7 + (uVar15 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(ushort *)(lVar7 + 8) = (ushort)uVar8;
      *(undefined4 *)(lVar7 + 0xc) = uVar5;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      if ((uVar8 & 0xffff) < 0x86) {
        *(long *)(*(long *)(lVar10 + 0x78) + (ulong)(ushort)uVar8 * 8 + 8) = lVar7;
      }
    }
  }
LAB_01684364:
  iVar17 = iVar17 + 1;
LAB_01684368:
  uVar14 = uVar14 + 1;
  if (uVar14 == bVar1) goto LAB_01683f04;
  goto LAB_01684288;
  while( true ) {
    lVar13 = *plVar6;
    if (*(ushort *)(lVar13 + 8) == 0) goto LAB_01683eb8;
    plVar6 = plVar6 + 4;
    uVar11 = uVar15 + 1;
    if ((uint)*(ushort *)(lVar13 + 8) == (uVar8 & 0xffff)) break;
LAB_01683e84:
    uVar15 = uVar11;
    if (uVar9 == uVar15) goto LAB_01683ef4;
  }
  if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_01683eb8:
    lVar7 = *(long *)(lVar7 + (uVar15 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(ushort *)(lVar7 + 8) = (ushort)uVar8;
      *(undefined4 *)(lVar7 + 0xc) = uVar5;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      if ((uVar8 & 0xffff) < 0x86) {
        *(long *)(*(long *)(lVar10 + 0x78) + (ulong)(ushort)uVar8 * 8 + 8) = lVar7;
      }
    }
  }
LAB_01683ef4:
  iVar17 = iVar17 + 1;
LAB_01683ef8:
  uVar14 = uVar14 + 1;
  if (uVar14 == bVar1) goto LAB_01683f04;
  goto LAB_01683e14;
LAB_01683f04:
  if (iVar17 != 0) {
    lVar7 = *(long *)(param_1 + 0x10);
    lVar10 = *(long *)(lVar7 + 0x38);
    uVar9 = *(uint *)(lVar10 + 0xc08);
    uVar14 = (ulong)uVar9;
    uVar8 = uVar9;
    if (uVar9 < 0x61) {
      uVar8 = 0x60;
    }
    uVar11 = uVar14 << 5 | 8;
    lVar13 = -1;
    do {
      lVar12 = lVar13;
      if ((uVar14 - uVar8) + lVar12 == -1) goto LAB_01683fa8;
      sVar3 = *(short *)(*(long *)(lVar10 + uVar11) + 8);
      if (sVar3 == 0) goto LAB_01683f68;
      uVar11 = uVar11 + 0x20;
      lVar13 = lVar12 + 1;
    } while (sVar3 != 5);
    if (uVar9 + (int)(lVar12 + 1) < 0x60) {
LAB_01683f68:
      lVar13 = *(long *)(lVar10 + (ulong)(uVar9 + (int)lVar12 + 1) * 0x20 + 8);
      if (lVar13 != 0) {
        *(undefined2 *)(lVar13 + 8) = 5;
        *(int *)(lVar13 + 0xc) = iVar17;
        *(undefined1 *)(lVar13 + 10) = 4;
        *(undefined8 *)(lVar13 + 0x10) = 0;
        *(undefined8 *)(lVar13 + 0x18) = 0;
        *(long *)(*(long *)(lVar7 + 0x78) + 0x30) = lVar13;
        lVar7 = *(long *)(param_1 + 0x10);
        lVar10 = *(long *)(lVar7 + 0x38);
        uVar14 = (ulong)*(uint *)(lVar10 + 0xc08);
      }
    }
LAB_01683fa8:
    uVar9 = (uint)uVar14;
    uVar8 = uVar9;
    if (uVar9 < 0x61) {
      uVar8 = 0x60;
    }
    uVar11 = uVar14 << 5 | 8;
    lVar13 = 0;
    do {
      lVar12 = lVar13;
      if ((uVar14 - uVar8) + lVar12 == 0) goto LAB_0168403c;
      sVar3 = *(short *)(*(long *)(lVar10 + uVar11) + 8);
      if (sVar3 == 0) goto LAB_01683ffc;
      uVar11 = uVar11 + 0x20;
      lVar13 = lVar12 + 1;
    } while (sVar3 != 0x4e);
    if ((uVar9 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_01683ffc:
      lVar13 = *(long *)(lVar10 + (ulong)(uVar9 + (int)lVar12) * 0x20 + 8);
      if (lVar13 != 0) {
        *(undefined2 *)(lVar13 + 8) = 0x4e;
        *(undefined8 *)(lVar13 + 0xc) = 0;
        *(undefined8 *)(lVar13 + 0x14) = 0;
        *(undefined4 *)(lVar13 + 0x1c) = 0;
        *(undefined1 *)(lVar13 + 10) = 1;
        *(long *)(*(long *)(lVar7 + 0x78) + 0x278) = lVar13;
        lVar7 = *(long *)(param_1 + 0x10);
        lVar10 = *(long *)(lVar7 + 0x38);
        uVar14 = (ulong)*(uint *)(lVar10 + 0xc08);
      }
    }
LAB_0168403c:
    uVar9 = (uint)uVar14;
    uVar8 = uVar9;
    if (uVar9 < 0x61) {
      uVar8 = 0x60;
    }
    uVar11 = uVar14 << 5 | 8;
    lVar13 = 0;
    do {
      lVar12 = lVar13;
      if ((uVar14 - uVar8) + lVar12 == 0) goto LAB_016840d0;
      sVar3 = *(short *)(*(long *)(lVar10 + uVar11) + 8);
      if (sVar3 == 0) goto LAB_01684090;
      uVar11 = uVar11 + 0x20;
      lVar13 = lVar12 + 1;
    } while (sVar3 != 0x4f);
    if ((uVar9 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_01684090:
      lVar13 = *(long *)(lVar10 + (ulong)(uVar9 + (int)lVar12) * 0x20 + 8);
      if (lVar13 != 0) {
        *(undefined2 *)(lVar13 + 8) = 0x4f;
        *(undefined8 *)(lVar13 + 0xc) = 0;
        *(undefined8 *)(lVar13 + 0x14) = 0;
        *(undefined4 *)(lVar13 + 0x1c) = 0;
        *(undefined1 *)(lVar13 + 10) = 1;
        *(long *)(*(long *)(lVar7 + 0x78) + 0x280) = lVar13;
        lVar7 = *(long *)(param_1 + 0x10);
        lVar10 = *(long *)(lVar7 + 0x38);
        uVar14 = (ulong)*(uint *)(lVar10 + 0xc08);
      }
    }
LAB_016840d0:
    uVar8 = (uint)uVar14;
    if (uVar8 < 0x61) {
      uVar8 = 0x60;
    }
    plVar6 = (long *)(lVar10 + uVar14 * 0x20 + 8);
    do {
      uVar11 = uVar14;
      if (uVar8 == uVar11) goto LAB_0168414c;
      lVar13 = *plVar6;
      if (*(short *)(lVar13 + 8) == 0) goto LAB_01684118;
      plVar6 = plVar6 + 4;
      uVar14 = uVar11 + 1;
    } while (*(short *)(lVar13 + 8) != 0x35);
    if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_01684118:
      lVar10 = *(long *)(lVar10 + (uVar11 & 0xffffffff) * 0x20 + 8);
      if (lVar10 != 0) {
        *(undefined2 *)(lVar10 + 8) = 0x35;
        *(int *)(lVar10 + 0xc) = iVar16;
        *(undefined1 *)(lVar10 + 10) = 4;
        *(undefined8 *)(lVar10 + 0x10) = 0;
        *(undefined8 *)(lVar10 + 0x18) = 0;
        *(long *)(*(long *)(lVar7 + 0x78) + 0x1b0) = lVar10;
        lVar7 = *(long *)(param_1 + 0x10);
      }
    }
LAB_0168414c:
    FUN_0107b310(lVar7,0xa9,8,1);
    lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x280);
    if ((lVar7 == 0) || (*(int *)(lVar7 + 0xc) == 0)) {
      FUN_0107b310(*(long *)(param_1 + 0x10),param_8,8,1);
    }
  }
LAB_01684184:
  lVar7 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(lVar7 + 0x58);
  if (*(uint *)(lVar10 + 0x408) == 0) {
    uVar14 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar10 + (ulong)*(uint *)(lVar10 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar10 + 0x408) = *(int *)(lVar10 + 0x408) + -1;
    lVar10 = *(long *)(lVar7 + 0x58);
    uVar14 = (ulong)*(uint *)(lVar10 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(lVar10 + uVar14 * 0x20 + 8);
  lVar7 = *(long *)(lVar7 + 0x38);
  uVar8 = *(uint *)(lVar7 + 0xc08);
  if (uVar8 != 0) {
    if ((uVar8 & 0xffff) < 0x60) {
      uVar14 = (ulong)uVar8 & 0xffff;
      plVar6 = (long *)(lVar7 + uVar14 * 0x20 + 8);
      do {
        uVar14 = uVar14 + 1;
        if (*(short *)(*plVar6 + 8) == 0) break;
        *(undefined2 *)(*plVar6 + 8) = 0;
        plVar6 = plVar6 + 4;
      } while (((uint)uVar14 & 0xffff) != 0x60);
      uVar8 = *(uint *)(lVar7 + 0xc08);
    }
    *(uint *)(lVar7 + 0xc08) = uVar8 - 1;
    *(undefined2 *)(*(long *)(lVar7 + (ulong)(uVar8 - 1) * 0x20 + 8) + 8) = 0;
    uVar14 = (ulong)*(uint *)(lVar7 + 0xc08);
    do {
      if (uVar14 == 0) {
        return;
      }
      uVar14 = uVar14 - 1;
      *(int *)(lVar7 + 0xc08) = (int)uVar14;
    } while (*(short *)(*(long *)(lVar7 + (uVar14 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar7 + 0xc08) = (int)uVar14 + 1;
  }
  return;
}


