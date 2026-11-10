/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0167a070; name: FUN_0167a070
 */


undefined4
FUN_0167a070(long param_1,long param_2,long *param_3,ushort *param_4,long param_5,undefined8 param_6
            )

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  lVar5 = *(long *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_5 + 0xa6);
  lVar7 = *(long *)(lVar5 + 0x38);
  uVar6 = *(uint *)(lVar7 + 0xc08);
  if (uVar6 < 0x60) {
    do {
      lVar11 = *(long *)(lVar7 + (ulong)uVar6 * 0x20 + 8);
      if (*(short *)(lVar11 + 8) == 0) {
        if (uVar6 < 0x5f) {
          *(undefined2 *)(lVar11 + 8) = 1;
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
  uVar4 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar5 = *(long *)(lVar7 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar12 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar10 = (long *)(lVar5 + uVar12 * 0x20 + 8);
  do {
    uVar14 = uVar12;
    if (uVar6 == uVar14) goto LAB_0167a1c4;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_0167a194;
    plVar10 = plVar10 + 4;
    uVar12 = uVar14 + 1;
  } while (*(short *)(lVar11 + 8) != 3);
  if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_0167a194:
    lVar5 = *(long *)(lVar5 + (uVar14 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 3;
      *(undefined4 *)(lVar5 + 0xc) = uVar4;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x20) = lVar5;
    }
  }
LAB_0167a1c4:
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar5 = *(long *)(lVar7 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar12 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar10 = (long *)(lVar5 + uVar12 * 0x20 + 8);
  do {
    uVar14 = uVar12;
    if (uVar6 == uVar14) goto LAB_0167a258;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_0167a228;
    plVar10 = plVar10 + 4;
    uVar12 = uVar14 + 1;
  } while (*(short *)(lVar11 + 8) != 2);
  if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_0167a228:
    lVar5 = *(long *)(lVar5 + (uVar14 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 2;
      *(undefined4 *)(lVar5 + 0xc) = uVar4;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x18) = lVar5;
    }
  }
LAB_0167a258:
  lVar5 = *(long *)(param_1 + 0x10);
  uVar2 = *param_4;
  lVar7 = *(long *)(lVar5 + 0x38);
  uVar8 = *(uint *)(lVar7 + 0xc08);
  uVar12 = (ulong)uVar8;
  uVar6 = uVar8;
  if (uVar8 < 0x61) {
    uVar6 = 0x60;
  }
  uVar14 = uVar12 << 5 | 8;
  lVar11 = -1;
  do {
    lVar13 = lVar11;
    if ((uVar12 - uVar6) + lVar13 == -1) goto LAB_0167a2fc;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar14) + 8);
    if (sVar3 == 0) goto LAB_0167a2bc;
    uVar14 = uVar14 + 0x20;
    lVar11 = lVar13 + 1;
  } while (sVar3 != 0x12);
  if (uVar8 + (int)(lVar13 + 1) < 0x60) {
LAB_0167a2bc:
    lVar11 = *(long *)(lVar7 + (ulong)(uVar8 + (int)lVar13 + 1) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x12;
      *(uint *)(lVar11 + 0xc) = (uint)uVar2;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x98) = lVar11;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar5 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0167a2fc:
  uVar2 = param_4[4];
  uVar8 = (uint)uVar12;
  uVar6 = uVar8;
  if (uVar8 < 0x61) {
    uVar6 = 0x60;
  }
  uVar14 = uVar12 << 5 | 8;
  lVar11 = 0;
  do {
    lVar13 = lVar11;
    if ((uVar12 - uVar6) + lVar13 == 0) goto LAB_0167a390;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar14) + 8);
    if (sVar3 == 0) goto LAB_0167a354;
    uVar14 = uVar14 + 0x20;
    lVar11 = lVar13 + 1;
  } while (sVar3 != 0x16);
  if ((uVar8 + (int)(lVar13 + 1)) - 1 < 0x60) {
LAB_0167a354:
    lVar11 = *(long *)(lVar7 + (ulong)(uVar8 + (int)lVar13) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x16;
      *(uint *)(lVar11 + 0xc) = (uint)(byte)uVar2;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0xb8) = lVar11;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar5 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0167a390:
  uVar8 = *(uint *)(param_2 + 4);
  uVar9 = (uint)uVar12;
  uVar6 = uVar9;
  if (uVar9 < 0x61) {
    uVar6 = 0x60;
  }
  uVar14 = uVar12 << 5 | 8;
  lVar11 = 0;
  do {
    lVar13 = lVar11;
    if ((uVar12 - uVar6) + lVar13 == 0) goto LAB_0167a42c;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar14) + 8);
    if (sVar3 == 0) goto LAB_0167a3ec;
    uVar14 = uVar14 + 0x20;
    lVar11 = lVar13 + 1;
  } while (sVar3 != 0x6f);
  if ((uVar9 + (int)(lVar13 + 1)) - 1 < 0x60) {
LAB_0167a3ec:
    lVar11 = *(long *)(lVar7 + (ulong)(uVar9 + (int)lVar13) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x6f;
      *(uint *)(lVar11 + 0xc) = uVar8 >> 1 & 1;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x380) = lVar11;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar5 + 0x38);
      uVar8 = *(uint *)(param_2 + 4);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0167a42c:
  uVar9 = (uint)uVar12;
  uVar6 = uVar9;
  if (uVar9 < 0x61) {
    uVar6 = 0x60;
  }
  uVar14 = uVar12 << 5 | 8;
  lVar11 = 0;
  do {
    lVar13 = lVar11;
    if ((uVar12 - uVar6) + lVar13 == 0) goto LAB_0167a4c0;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar14) + 8);
    if (sVar3 == 0) goto LAB_0167a484;
    uVar14 = uVar14 + 0x20;
    lVar11 = lVar13 + 1;
  } while (sVar3 != 0x71);
  if ((uVar9 + (int)(lVar13 + 1)) - 1 < 0x60) {
LAB_0167a484:
    lVar11 = *(long *)(lVar7 + (ulong)(uVar9 + (int)lVar13) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x71;
      *(uint *)(lVar11 + 0xc) = uVar8 >> 3 & 1;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x390) = lVar11;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar5 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0167a4c0:
  uVar6 = (uint)uVar12;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar10 = (long *)(lVar7 + uVar12 * 0x20 + 8);
  do {
    uVar14 = uVar12;
    if (uVar6 == uVar14) goto LAB_0167a538;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_0167a508;
    plVar10 = plVar10 + 4;
    uVar12 = uVar14 + 1;
  } while (*(short *)(lVar11 + 8) != 5);
  if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_0167a508:
    lVar7 = *(long *)(lVar7 + (uVar14 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 5;
      *(uint *)(lVar7 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x30) = lVar7;
    }
  }
LAB_0167a538:
  if (bVar1 != 0) {
    uVar12 = 0;
    do {
      uVar6 = (int)uVar12 + 6;
      lVar7 = *(long *)(param_1 + 0x10);
      uVar4 = (**(code **)(**(long **)(param_5 + uVar12 * 8) + 0x98))();
      lVar5 = *(long *)(lVar7 + 0x38);
      uVar8 = *(uint *)(lVar5 + 0xc08);
      uVar14 = (ulong)uVar8;
      if (uVar8 < 0x61) {
        uVar8 = 0x60;
      }
      plVar10 = (long *)(lVar5 + uVar14 * 0x20 + 8);
      do {
        uVar15 = uVar14;
        if (uVar8 == uVar15) goto LAB_0167a5e4;
        lVar11 = *plVar10;
        if (*(ushort *)(lVar11 + 8) == 0) goto LAB_0167a5ac;
        plVar10 = plVar10 + 4;
        uVar14 = uVar15 + 1;
      } while ((uint)*(ushort *)(lVar11 + 8) != (uVar6 & 0xffff));
      if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_0167a5ac:
        lVar5 = *(long *)(lVar5 + (uVar15 & 0xffffffff) * 0x20 + 8);
        if (lVar5 != 0) {
          *(ushort *)(lVar5 + 8) = (ushort)uVar6;
          *(undefined4 *)(lVar5 + 0xc) = uVar4;
          *(undefined1 *)(lVar5 + 10) = 4;
          *(undefined8 *)(lVar5 + 0x10) = 0;
          *(undefined8 *)(lVar5 + 0x18) = 0;
          if ((uVar6 & 0xffff) < 0x86) {
            *(long *)(*(long *)(lVar7 + 0x78) + (ulong)(ushort)uVar6 * 8 + 8) = lVar5;
          }
        }
      }
LAB_0167a5e4:
      uVar12 = uVar12 + 1;
    } while (uVar12 != bVar1);
  }
  lVar5 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar5 + 0x38);
  uVar8 = *(uint *)(lVar7 + 0xc08);
  uVar12 = (ulong)uVar8;
  uVar6 = uVar8;
  if (uVar8 < 0x61) {
    uVar6 = 0x60;
  }
  uVar14 = uVar12 << 5 | 8;
  lVar11 = -1;
  do {
    lVar13 = lVar11;
    if ((uVar12 - uVar6) + lVar13 == -1) goto LAB_0167a694;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar14) + 8);
    if (sVar3 == 0) goto LAB_0167a650;
    uVar14 = uVar14 + 0x20;
    lVar11 = lVar13 + 1;
  } while (sVar3 != 0x43);
  if (uVar8 + (int)(lVar13 + 1) < 0x60) {
LAB_0167a650:
    lVar11 = *(long *)(lVar7 + (ulong)(uVar8 + (int)lVar13 + 1) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x43;
      *(undefined8 *)(lVar11 + 0xc) = 0;
      *(undefined8 *)(lVar11 + 0x14) = 0;
      *(undefined4 *)(lVar11 + 0x1c) = 0;
      *(undefined1 *)(lVar11 + 10) = 1;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x220) = lVar11;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar5 + 0x38);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0167a694:
  uVar6 = (uint)uVar12;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar10 = (long *)(lVar7 + uVar12 * 0x20 + 8);
  do {
    uVar14 = uVar12;
    if (uVar6 == uVar14) goto LAB_0167a714;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_0167a6dc;
    plVar10 = plVar10 + 4;
    uVar12 = uVar14 + 1;
  } while (*(short *)(lVar11 + 8) != 0x13);
  if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_0167a6dc:
    lVar7 = *(long *)(lVar7 + (uVar14 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 0x13;
      *(undefined8 *)(lVar7 + 0xc) = 0;
      *(undefined8 *)(lVar7 + 0x14) = 0;
      *(undefined4 *)(lVar7 + 0x1c) = 0;
      *(undefined1 *)(lVar7 + 10) = 1;
      *(long *)(*(long *)(lVar5 + 0x78) + 0xa0) = lVar7;
      lVar5 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0167a714:
  FUN_0107b310(lVar5,0x26,8,1);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(*(long *)(lVar7 + 0x78) + 0x220);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(lVar5 + 0xc);
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x78) + 0xa0);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(lVar5 + 0xc);
  }
  lVar5 = *(long *)(lVar7 + 0x58);
  if (*(uint *)(lVar5 + 0x408) == 0) {
    uVar12 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar5 + 0x408) = *(int *)(lVar5 + 0x408) + -1;
    lVar5 = *(long *)(lVar7 + 0x58);
    uVar12 = (ulong)*(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(lVar5 + uVar12 * 0x20 + 8);
  lVar5 = *(long *)(lVar7 + 0x38);
  uVar8 = *(uint *)(lVar5 + 0xc08);
  if (uVar8 != 0) {
    if ((uVar8 & 0xffff) < 0x60) {
      uVar12 = (ulong)uVar8 & 0xffff;
      plVar10 = (long *)(lVar5 + uVar12 * 0x20 + 8);
      do {
        uVar12 = uVar12 + 1;
        if (*(short *)(*plVar10 + 8) == 0) break;
        *(undefined2 *)(*plVar10 + 8) = 0;
        plVar10 = plVar10 + 4;
      } while (((uint)uVar12 & 0xffff) != 0x60);
      uVar8 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar8 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar8 - 1) * 0x20 + 8) + 8) = 0;
    uVar12 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar12 == 0) goto LAB_0167a81c;
      uVar12 = uVar12 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar12;
    } while (*(short *)(*(long *)(lVar5 + (uVar12 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar12 + 1;
  }
LAB_0167a81c:
  if ((uVar6 & 0xffff) != 0) {
    FUN_0167a86c(param_6,uVar6);
  }
  return uVar4;
}


