/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0107c344; name: FUN_0107c344
 */


bool FUN_0107c344(long param_1,long *param_2,long *param_3,ushort *param_4,byte param_5,int param_6,
                 uint param_7,uint param_8,byte param_9,byte param_10,undefined2 *param_11)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  char cVar9;
  short sVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  long *plVar17;
  int *piVar18;
  undefined8 uVar19;
  undefined *puVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  code *pcVar24;
  long lVar25;
  ulong uVar26;
  uint uVar27;
  long lVar28;
  long *plVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  long *plVar35;
  int iVar36;
  int iVar37;
  ulong uVar38;
  float fVar39;
  uint local_a8;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  
  plVar35 = (long *)(param_1 + 0x10);
  lVar23 = *plVar35;
  lVar28 = *(long *)(lVar23 + 0x38);
  uVar21 = *(uint *)(lVar28 + 0xc08);
  if (uVar21 < 0x60) {
    do {
      lVar31 = *(long *)(lVar28 + (ulong)uVar21 * 0x20 + 8);
      if (*(short *)(lVar31 + 8) == 0) {
        if (uVar21 < 0x5f) {
          *(undefined2 *)(lVar31 + 8) = 1;
          *(int *)(lVar28 + 0xc08) = *(int *)(lVar28 + 0xc08) + 1;
        }
        break;
      }
      uVar21 = uVar21 + 1;
      *(uint *)(lVar28 + 0xc08) = uVar21;
    } while (uVar21 != 0x60);
  }
  lVar28 = *(long *)(lVar23 + 0x58);
  uVar21 = *(uint *)(lVar28 + 0x408);
  if (uVar21 < 0x1f) {
    *(uint *)(lVar28 + 0x408) = uVar21 + 1;
    lVar28 = *(long *)(lVar23 + 0x58);
    uVar21 = *(uint *)(lVar28 + 0x408);
  }
  *(undefined8 *)(lVar23 + 0x78) = *(undefined8 *)(lVar28 + (ulong)uVar21 * 0x20 + 8);
  lVar28 = *plVar35;
  uVar11 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar21 = *(uint *)(lVar23 + 0xc08);
  uVar32 = (ulong)uVar21;
  if (uVar21 < 0x61) {
    uVar21 = 0x60;
  }
  plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar21 == uVar38) goto LAB_0107c4b4;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107c484;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 2);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107c484:
    lVar23 = *(long *)(lVar23 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 2;
      *(undefined4 *)(lVar23 + 0xc) = uVar11;
      *(undefined1 *)(lVar23 + 10) = 4;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(long *)(*(long *)(lVar28 + 0x78) + 0x18) = lVar23;
    }
  }
LAB_0107c4b4:
  lVar23 = *plVar35;
  lVar28 = *(long *)(lVar23 + 0x38);
  uVar14 = *(uint *)(lVar28 + 0xc08);
  uVar32 = (ulong)uVar14;
  uVar21 = uVar14;
  if (uVar14 < 0x61) {
    uVar21 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = -1;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar21) + lVar25 == -1) goto LAB_0107c558;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107c514;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x60);
  if (uVar14 + (int)(lVar25 + 1) < 0x60) {
LAB_0107c514:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar14 + (int)lVar25 + 1) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x60;
      *(undefined8 *)(lVar31 + 0xc) = 0;
      *(undefined8 *)(lVar31 + 0x14) = 0;
      *(undefined4 *)(lVar31 + 0x1c) = 0;
      *(undefined1 *)(lVar31 + 10) = 1;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x308) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107c558:
  uVar21 = (uint)uVar32;
  if (uVar21 < 0x61) {
    uVar21 = 0x60;
  }
  plVar17 = (long *)(lVar28 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar21 == uVar38) goto LAB_0107c5dc;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107c5a4;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 0x76);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107c5a4:
    lVar28 = *(long *)(lVar28 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar28 != 0) {
      *(undefined2 *)(lVar28 + 8) = 0x76;
      *(undefined8 *)(lVar28 + 0xc) = 0;
      *(undefined8 *)(lVar28 + 0x14) = 0;
      *(undefined4 *)(lVar28 + 0x1c) = 0;
      *(undefined1 *)(lVar28 + 10) = 1;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x3b8) = lVar28;
      lVar23 = *plVar35;
    }
  }
LAB_0107c5dc:
  FUN_0107b310(lVar23,0x93,8,1);
  lVar28 = *plVar35;
  uVar21 = (uint)param_10;
  lVar23 = *(long *)(*(long *)(lVar28 + 0x78) + 0x308);
  if (lVar23 == 0) {
    iVar36 = 0;
  }
  else {
    iVar36 = *(int *)(lVar23 + 0xc);
  }
  lVar23 = *(long *)(lVar28 + 0x58);
  if (*(uint *)(lVar23 + 0x408) == 0) {
    uVar32 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar23 + (ulong)*(uint *)(lVar23 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar23 + 0x408) = *(int *)(lVar23 + 0x408) + -1;
    lVar23 = *(long *)(lVar28 + 0x58);
    uVar32 = (ulong)*(uint *)(lVar23 + 0x408);
  }
  *(undefined8 *)(lVar28 + 0x78) = *(undefined8 *)(lVar23 + uVar32 * 0x20 + 8);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar14 = *(uint *)(lVar23 + 0xc08);
  if (uVar14 != 0) {
    if ((uVar14 & 0xffff) < 0x60) {
      uVar32 = (ulong)uVar14 & 0xffff;
      plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
      do {
        uVar32 = uVar32 + 1;
        if (*(short *)(*plVar17 + 8) == 0) break;
        *(undefined2 *)(*plVar17 + 8) = 0;
        plVar17 = plVar17 + 4;
      } while (((uint)uVar32 & 0xffff) != 0x60);
      uVar14 = *(uint *)(lVar23 + 0xc08);
    }
    *(uint *)(lVar23 + 0xc08) = uVar14 - 1;
    *(undefined2 *)(*(long *)(lVar23 + (ulong)(uVar14 - 1) * 0x20 + 8) + 8) = 0;
    uVar32 = (ulong)*(uint *)(lVar23 + 0xc08);
    do {
      if (uVar32 == 0) goto LAB_0107c6dc;
      uVar32 = uVar32 - 1;
      *(int *)(lVar23 + 0xc08) = (int)uVar32;
    } while (*(short *)(*(long *)(lVar23 + (uVar32 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar23 + 0xc08) = (int)uVar32 + 1;
  }
LAB_0107c6dc:
  lVar23 = *plVar35;
  lVar28 = *(long *)(lVar23 + 0x38);
  uVar14 = *(uint *)(lVar28 + 0xc08);
  if (uVar14 < 0x60) {
    do {
      lVar31 = *(long *)(lVar28 + (ulong)uVar14 * 0x20 + 8);
      if (*(short *)(lVar31 + 8) == 0) {
        if (uVar14 < 0x5f) {
          *(undefined2 *)(lVar31 + 8) = 1;
          *(int *)(lVar28 + 0xc08) = *(int *)(lVar28 + 0xc08) + 1;
        }
        break;
      }
      uVar14 = uVar14 + 1;
      *(uint *)(lVar28 + 0xc08) = uVar14;
    } while (uVar14 != 0x60);
  }
  lVar28 = *(long *)(lVar23 + 0x58);
  uVar14 = *(uint *)(lVar28 + 0x408);
  if (uVar14 < 0x1f) {
    *(uint *)(lVar28 + 0x408) = uVar14 + 1;
    lVar28 = *(long *)(lVar23 + 0x58);
    uVar14 = *(uint *)(lVar28 + 0x408);
  }
  *(undefined8 *)(lVar23 + 0x78) = *(undefined8 *)(lVar28 + (ulong)uVar14 * 0x20 + 8);
  lVar28 = *plVar35;
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar14 = *(uint *)(lVar23 + 0xc08);
  uVar32 = (ulong)uVar14;
  if (uVar14 < 0x61) {
    uVar14 = 0x60;
  }
  plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar14 == uVar38) goto LAB_0107c7f0;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107c7bc;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 0x3d);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107c7bc:
    lVar23 = *(long *)(lVar23 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar23 != 0) {
      *(uint *)(lVar23 + 0xc) = (uint)param_5;
      *(undefined2 *)(lVar23 + 8) = 0x3d;
      *(undefined1 *)(lVar23 + 10) = 4;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(long *)(*(long *)(lVar28 + 0x78) + 0x1f0) = lVar23;
      lVar28 = *plVar35;
    }
  }
LAB_0107c7f0:
  uVar11 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar14 = *(uint *)(lVar23 + 0xc08);
  uVar32 = (ulong)uVar14;
  if (uVar14 < 0x61) {
    uVar14 = 0x60;
  }
  plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar14 == uVar38) goto LAB_0107c880;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107c850;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 3);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107c850:
    lVar23 = *(long *)(lVar23 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 3;
      *(undefined4 *)(lVar23 + 0xc) = uVar11;
      *(undefined1 *)(lVar23 + 10) = 4;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(long *)(*(long *)(lVar28 + 0x78) + 0x20) = lVar23;
    }
  }
LAB_0107c880:
  lVar28 = *plVar35;
  uVar11 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar14 = *(uint *)(lVar23 + 0xc08);
  uVar32 = (ulong)uVar14;
  if (uVar14 < 0x61) {
    uVar14 = 0x60;
  }
  plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar14 == uVar38) goto LAB_0107c910;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107c8e4;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 4);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107c8e4:
    lVar23 = *(long *)(lVar23 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 4;
      *(undefined4 *)(lVar23 + 0xc) = uVar11;
      *(undefined1 *)(lVar23 + 10) = 4;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(long *)(*(long *)(lVar28 + 0x78) + 0x28) = lVar23;
    }
  }
LAB_0107c910:
  lVar23 = *plVar35;
  lVar28 = *(long *)(lVar23 + 0x38);
  uVar27 = *(uint *)(lVar28 + 0xc08);
  uVar32 = (ulong)uVar27;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = -1;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == -1) goto LAB_0107c9b8;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107c978;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x4c);
  if (uVar27 + (int)(lVar25 + 1) < 0x60) {
LAB_0107c978:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25 + 1) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x4c;
      *(uint *)(lVar31 + 0xc) = param_7 & 1;
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x268) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107c9b8:
  uVar5 = param_4[4];
  uVar27 = (uint)uVar32;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == 0) goto LAB_0107ca4c;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107ca10;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x16);
  if ((uVar27 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107ca10:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x16;
      *(uint *)(lVar31 + 0xc) = (uint)(byte)uVar5;
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0xb8) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107ca4c:
  uVar5 = *param_4;
  uVar27 = (uint)uVar32;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == 0) goto LAB_0107cae0;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107caa4;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x12);
  if ((uVar27 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107caa4:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x12;
      *(uint *)(lVar31 + 0xc) = (uint)uVar5;
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x98) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107cae0:
  bVar3 = *(byte *)((long)param_4 + 0xb);
  uVar27 = (uint)uVar32;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == 0) goto LAB_0107cb74;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107cb38;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 99);
  if ((uVar27 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107cb38:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 99;
      *(uint *)(lVar31 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 800) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107cb74:
  bVar3 = *(byte *)((long)param_4 + 9);
  uVar27 = (uint)uVar32;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == 0) goto LAB_0107cc08;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107cbcc;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x1b);
  if ((uVar27 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107cbcc:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x1b;
      *(uint *)(lVar31 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0xe0) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107cc08:
  uVar11 = *(undefined4 *)(param_4 + 6);
  uVar27 = (uint)uVar32;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == 0) goto LAB_0107cc9c;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107cc60;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x19);
  if ((uVar27 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107cc60:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x19;
      *(undefined4 *)(lVar31 + 0xc) = uVar11;
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0xd0) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107cc9c:
  uVar27 = (uint)uVar32;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == 0) goto LAB_0107cd30;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107ccf4;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x4d);
  if ((uVar27 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107ccf4:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x4d;
      *(uint *)(lVar31 + 0xc) = param_9 & 1;
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x270) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107cd30:
  uVar27 = (uint)uVar32;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == 0) goto LAB_0107cdc8;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107cd8c;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x60);
  if ((uVar27 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107cd8c:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x60;
      *(uint *)(lVar31 + 0xc) = (uint)(iVar36 != 0);
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x308) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107cdc8:
  uVar27 = (uint)uVar32;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == 0) goto LAB_0107ce58;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107ce1c;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x3a);
  if ((uVar27 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107ce1c:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x3a;
      *(undefined1 *)(lVar31 + 10) = 0;
      *(undefined8 *)(lVar31 + 0xc) = 0;
      *(undefined8 *)(lVar31 + 0x14) = 0;
      *(undefined4 *)(lVar31 + 0x1c) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x1d8) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107ce58:
  uVar27 = (uint)uVar32;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == 0) goto LAB_0107cee8;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107ceac;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x3b);
  if ((uVar27 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107ceac:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x3b;
      *(undefined1 *)(lVar31 + 10) = 0;
      *(undefined8 *)(lVar31 + 0xc) = 0;
      *(undefined8 *)(lVar31 + 0x14) = 0;
      *(undefined4 *)(lVar31 + 0x1c) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x1e0) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107cee8:
  uVar14 = (uint)uVar32;
  if (uVar14 < 0x61) {
    uVar14 = 0x60;
  }
  plVar17 = (long *)(lVar28 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar14 == uVar38) goto LAB_0107cf68;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107cf34;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 0x3c);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107cf34:
    lVar28 = *(long *)(lVar28 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar28 != 0) {
      *(undefined2 *)(lVar28 + 8) = 0x3c;
      *(undefined1 *)(lVar28 + 10) = 0;
      *(undefined8 *)(lVar28 + 0xc) = 0;
      *(undefined8 *)(lVar28 + 0x14) = 0;
      *(undefined4 *)(lVar28 + 0x1c) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x1e8) = lVar28;
      lVar23 = *plVar35;
    }
  }
LAB_0107cf68:
  FUN_0107b310(lVar23,0x5d,8,1);
  FUN_0107b310(*plVar35,0x5e,8,1);
  lVar23 = *plVar35;
  lVar28 = *(long *)(lVar23 + 0x78);
  uVar14 = 0;
  if (*(long *)(lVar28 + 0x1d8) != 0) {
    uVar14 = *(uint *)(*(long *)(lVar28 + 0x1d8) + 0xc);
  }
  iVar36 = 0;
  if (*(long *)(lVar28 + 0x1e0) != 0) {
    iVar36 = *(int *)(*(long *)(lVar28 + 0x1e0) + 0xc);
  }
  if (*(long *)(lVar28 + 0x1e8) == 0) {
    iVar37 = 0;
  }
  else {
    iVar37 = *(int *)(*(long *)(lVar28 + 0x1e8) + 0xc);
  }
  if (iVar37 != 0) {
    uVar14 = 0;
  }
  if (iVar36 != 0 || iVar37 != 0) goto LAB_0107fa64;
  lVar28 = *(long *)(lVar23 + 0x38);
  uVar5 = param_4[2];
  uVar14 = *(uint *)(lVar28 + 0xc08);
  if (uVar14 < 0x60) {
    do {
      lVar31 = *(long *)(lVar28 + (ulong)uVar14 * 0x20 + 8);
      if (*(short *)(lVar31 + 8) == 0) {
        if (uVar14 < 0x5f) {
          *(undefined2 *)(lVar31 + 8) = 1;
          *(int *)(lVar28 + 0xc08) = *(int *)(lVar28 + 0xc08) + 1;
        }
        break;
      }
      uVar14 = uVar14 + 1;
      *(uint *)(lVar28 + 0xc08) = uVar14;
    } while (uVar14 != 0x60);
  }
  lVar28 = *(long *)(lVar23 + 0x58);
  uVar14 = *(uint *)(lVar28 + 0x408);
  if (uVar14 < 0x1f) {
    *(uint *)(lVar28 + 0x408) = uVar14 + 1;
    lVar28 = *(long *)(lVar23 + 0x58);
    uVar14 = *(uint *)(lVar28 + 0x408);
  }
  *(undefined8 *)(lVar23 + 0x78) = *(undefined8 *)(lVar28 + (ulong)uVar14 * 0x20 + 8);
  lVar28 = *plVar35;
  uVar11 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar14 = *(uint *)(lVar23 + 0xc08);
  uVar32 = (ulong)uVar14;
  if (uVar14 < 0x61) {
    uVar14 = 0x60;
  }
  plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar14 == uVar38) goto LAB_0107d0f8;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107d0c8;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 3);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107d0c8:
    lVar23 = *(long *)(lVar23 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 3;
      *(undefined4 *)(lVar23 + 0xc) = uVar11;
      *(undefined1 *)(lVar23 + 10) = 4;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(long *)(*(long *)(lVar28 + 0x78) + 0x20) = lVar23;
    }
  }
LAB_0107d0f8:
  lVar28 = *plVar35;
  uVar11 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar14 = *(uint *)(lVar23 + 0xc08);
  uVar32 = (ulong)uVar14;
  if (uVar14 < 0x61) {
    uVar14 = 0x60;
  }
  plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar14 == uVar38) goto LAB_0107d188;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107d15c;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 4);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107d15c:
    lVar23 = *(long *)(lVar23 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 4;
      *(undefined4 *)(lVar23 + 0xc) = uVar11;
      *(undefined1 *)(lVar23 + 10) = 4;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(long *)(*(long *)(lVar28 + 0x78) + 0x28) = lVar23;
    }
  }
LAB_0107d188:
  lVar23 = *plVar35;
  uVar4 = *param_4;
  lVar28 = *(long *)(lVar23 + 0x38);
  uVar27 = *(uint *)(lVar28 + 0xc08);
  uVar32 = (ulong)uVar27;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = -1;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == -1) goto LAB_0107d22c;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107d1ec;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x12);
  if (uVar27 + (int)(lVar25 + 1) < 0x60) {
LAB_0107d1ec:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25 + 1) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x12;
      *(uint *)(lVar31 + 0xc) = (uint)uVar4;
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x98) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107d22c:
  uVar4 = param_4[4];
  uVar27 = (uint)uVar32;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == 0) goto LAB_0107d2c0;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107d284;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x16);
  if ((uVar27 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107d284:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x16;
      *(uint *)(lVar31 + 0xc) = (uint)(byte)uVar4;
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0xb8) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107d2c0:
  bVar3 = *(byte *)((long)param_4 + 9);
  uVar27 = (uint)uVar32;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == 0) goto LAB_0107d354;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107d318;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x1b);
  if ((uVar27 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107d318:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x1b;
      *(uint *)(lVar31 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0xe0) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107d354:
  bVar3 = *(byte *)((long)param_4 + 0xb);
  uVar27 = (uint)uVar32;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == 0) goto LAB_0107d3e8;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107d3ac;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 99);
  if ((uVar27 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107d3ac:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 99;
      *(uint *)(lVar31 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 800) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107d3e8:
  uVar27 = (uint)uVar32;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == 0) goto LAB_0107d478;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107d43c;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x5d);
  if ((uVar27 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107d43c:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x5d;
      *(undefined8 *)(lVar31 + 0xc) = 0;
      *(undefined8 *)(lVar31 + 0x14) = 0;
      *(undefined4 *)(lVar31 + 0x1c) = 0;
      *(undefined1 *)(lVar31 + 10) = 1;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x2f0) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107d478:
  uVar27 = (uint)uVar32;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == 0) goto LAB_0107d508;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107d4cc;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x5e);
  if ((uVar27 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107d4cc:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x5e;
      *(undefined8 *)(lVar31 + 0xc) = 0;
      *(undefined8 *)(lVar31 + 0x14) = 0;
      *(undefined4 *)(lVar31 + 0x1c) = 0;
      *(undefined1 *)(lVar31 + 10) = 1;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x2f8) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107d508:
  uVar14 = (uint)uVar32;
  if (uVar14 < 0x61) {
    uVar14 = 0x60;
  }
  plVar17 = (long *)(lVar28 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar14 == uVar38) goto LAB_0107d584;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107d550;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 0x33);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107d550:
    lVar28 = *(long *)(lVar28 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar28 != 0) {
      *(undefined2 *)(lVar28 + 8) = 0x33;
      *(uint *)(lVar28 + 0xc) = (uint)uVar5;
      *(undefined1 *)(lVar28 + 10) = 1;
      *(undefined8 *)(lVar28 + 0x10) = 0;
      *(undefined8 *)(lVar28 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x1a0) = lVar28;
      lVar23 = *plVar35;
    }
  }
LAB_0107d584:
  FUN_0107b310(lVar23,0x47,8,1);
  lVar23 = *plVar35;
  lVar28 = *(long *)(lVar23 + 0x38);
  uVar14 = *(uint *)(lVar28 + 0xc08);
  uVar32 = (ulong)uVar14;
  if (uVar14 < 0x61) {
    uVar14 = 0x60;
  }
  plVar17 = (long *)(lVar28 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar14 == uVar38) goto LAB_0107d630;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107d5ec;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 0x34);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107d5ec:
    lVar28 = *(long *)(lVar28 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar28 != 0) {
      *(undefined2 *)(lVar28 + 8) = 0x34;
      *(undefined8 *)(lVar28 + 0xc) = 0x2900001000;
      *(undefined4 *)(lVar28 + 0x14) = 0x200000;
      *(undefined8 *)(lVar28 + 0x18) = 0;
      *(undefined1 *)(lVar28 + 10) = 3;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x1a8) = lVar28;
      lVar23 = *plVar35;
    }
  }
LAB_0107d630:
  FUN_0107b310(lVar23,0x48,8,1);
  lVar28 = *plVar35;
  lVar23 = *(long *)(*(long *)(lVar28 + 0x78) + 0x1a0);
  if (lVar23 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = (uint)*(ushort *)(lVar23 + 0xc);
  }
  lVar23 = *(long *)(*(long *)(lVar28 + 0x78) + 0x1a8);
  if (lVar23 == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = *(int *)(lVar23 + 0xc);
  }
  lVar23 = *(long *)(lVar28 + 0x58);
  if (*(uint *)(lVar23 + 0x408) == 0) {
    uVar32 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar23 + (ulong)*(uint *)(lVar23 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar23 + 0x408) = *(int *)(lVar23 + 0x408) + -1;
    lVar23 = *(long *)(lVar28 + 0x58);
    uVar32 = (ulong)*(uint *)(lVar23 + 0x408);
  }
  *(undefined8 *)(lVar28 + 0x78) = *(undefined8 *)(lVar23 + uVar32 * 0x20 + 8);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar27 = *(uint *)(lVar23 + 0xc08);
  if (uVar27 != 0) {
    if ((uVar27 & 0xffff) < 0x60) {
      uVar32 = (ulong)uVar27 & 0xffff;
      plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
      do {
        uVar32 = uVar32 + 1;
        if (*(short *)(*plVar17 + 8) == 0) break;
        *(undefined2 *)(*plVar17 + 8) = 0;
        plVar17 = plVar17 + 4;
      } while (((uint)uVar32 & 0xffff) != 0x60);
      uVar27 = *(uint *)(lVar23 + 0xc08);
    }
    *(uint *)(lVar23 + 0xc08) = uVar27 - 1;
    *(undefined2 *)(*(long *)(lVar23 + (ulong)(uVar27 - 1) * 0x20 + 8) + 8) = 0;
    uVar32 = (ulong)*(uint *)(lVar23 + 0xc08);
    do {
      if (uVar32 == 0) goto LAB_0107d738;
      uVar32 = uVar32 - 1;
      *(int *)(lVar23 + 0xc08) = (int)uVar32;
    } while (*(short *)(*(long *)(lVar23 + (uVar32 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar23 + 0xc08) = (int)uVar32 + 1;
  }
LAB_0107d738:
  uVar32 = (**(code **)(*param_2 + 0x4d0))(param_2,0x14);
  if ((uVar32 & 1) != 0) {
    iVar15 = iVar15 << ((char)param_4[4] == '\f');
  }
  local_a8 = iVar15 * uVar14 >> 0xc;
  if (0x800 < (iVar15 * uVar14 & 0xfff)) {
    local_a8 = local_a8 + 1;
  }
  plVar17 = (long *)(**(code **)param_2[5])(param_2 + 5);
  if (((*PTR_DAT_047d3f00 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar15 != 0)) {
    uVar19 = FUN_01b07aa4();
    *(undefined8 *)PTR_DAT_047d3f08 = uVar19;
    __cxa_guard_release(PTR_DAT_047d3f00);
  }
  while( true ) {
    puVar20 = PTR_DAT_047d7940;
    if (plVar17 == (long *)0x0) break;
    if (plVar17 == (long *)PTR_DAT_047d3f08) {
      bVar3 = (byte)param_4[4];
      uVar14 = (uint)bVar3;
      uVar5 = *param_4;
      if (((*PTR_DAT_047d7940 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar15 != 0)) {
        FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7940);
      }
      puVar7 = PTR_DAT_047d7950;
      puVar6 = PTR_DAT_047d7948;
      uVar19 = *(undefined8 *)PTR_DAT_047d7948;
      *(undefined8 *)PTR_DAT_047d7950 = uVar19;
      piVar18 = (int *)FUN_00cf60cc(uVar19,uVar5);
      if ((((0x16 < *(ushort *)((long)piVar18 - (long)*piVar18)) &&
           (uVar32 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[0xb], uVar32 != 0)) &&
          (1 < *(byte *)((long)piVar18 + uVar32))) || (*(char *)((long)param_2 + 0x714) == '\0'))
      break;
      uVar32 = (**(code **)(*param_2 + 0x300))(param_2,bVar3);
      if ((*(char *)((long)param_2 + 0x714) == '\0') || (*(char *)((long)param_2 + 0x715) != 'c')) {
        if ((uVar32 & 1) == 0) break;
      }
      else {
        if (bVar3 == 0x12) break;
        if (bVar3 == 99) {
          uVar14 = 0x1f;
        }
        if ((*(uint *)((long)param_2 + 0x71c) >> (ulong)(uVar14 & 0x1f) & 1) != 0) break;
      }
      uVar5 = *param_4;
      if (((*puVar20 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar15 != 0)) {
        FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7940);
      }
      uVar19 = *(undefined8 *)puVar6;
      *(undefined8 *)puVar7 = uVar19;
      piVar18 = (int *)FUN_00cf60cc(uVar19,uVar5);
      if (((0x14 < *(ushort *)((long)piVar18 - (long)*piVar18)) &&
          (uVar32 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[10], uVar32 != 0)) &&
         ('\0' < *(char *)((long)piVar18 + uVar32))) break;
      uVar5 = *param_4;
      uVar14 = (uint)uVar5;
      if (uVar5 < 0x1bf) {
        if (uVar5 < 0x11c) {
          if (((uVar5 == 0x43) || (uVar5 == 0xaf)) || (uVar14 == 0xb3)) break;
        }
        else if (((uVar14 - 0x143 < 0x34) &&
                 ((1L << ((ulong)(uVar14 - 0x143) & 0x3f) & 0x8002000000001U) != 0)) ||
                (uVar14 == 0x11c)) break;
      }
      else if (uVar14 == 0x216 || uVar5 < 0x216) {
        if ((uVar14 - 0x1bf < 0x28) &&
           ((1L << ((ulong)(uVar14 - 0x1bf) & 0x3f) & 0xa000008001U) != 0)) break;
      }
      else if ((uVar14 == 0x217) || ((uVar14 == 0x334 || (uVar14 == 0x390)))) break;
      plVar17 = (long *)FUN_012521a0(param_1);
      uVar14 = (**(code **)(*plVar17 + 0x68))(plVar17,&DAT_03d69ec8);
      if ((int)uVar14 <= (int)(local_a8 & 0xffff)) {
        uVar14 = local_a8;
      }
      local_a8 = uVar14;
      break;
    }
    plVar17 = (long *)*plVar17;
  }
  lVar23 = *plVar35;
  lVar28 = *(long *)(lVar23 + 0x38);
  uVar14 = *(uint *)(lVar28 + 0xc08);
  if (uVar14 < 0x60) {
    do {
      lVar31 = *(long *)(lVar28 + (ulong)uVar14 * 0x20 + 8);
      if (*(short *)(lVar31 + 8) == 0) {
        if (uVar14 < 0x5f) {
          *(undefined2 *)(lVar31 + 8) = 1;
          *(int *)(lVar28 + 0xc08) = *(int *)(lVar28 + 0xc08) + 1;
        }
        break;
      }
      uVar14 = uVar14 + 1;
      *(uint *)(lVar28 + 0xc08) = uVar14;
    } while (uVar14 != 0x60);
  }
  lVar28 = *(long *)(lVar23 + 0x58);
  uVar14 = *(uint *)(lVar28 + 0x408);
  if (uVar14 < 0x1f) {
    *(uint *)(lVar28 + 0x408) = uVar14 + 1;
    lVar28 = *(long *)(lVar23 + 0x58);
    uVar14 = *(uint *)(lVar28 + 0x408);
  }
  *(undefined8 *)(lVar23 + 0x78) = *(undefined8 *)(lVar28 + (ulong)uVar14 * 0x20 + 8);
  lVar28 = *plVar35;
  uVar11 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar14 = *(uint *)(lVar23 + 0xc08);
  uVar32 = (ulong)uVar14;
  if (uVar14 < 0x61) {
    uVar14 = 0x60;
  }
  plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar14 == uVar38) goto LAB_0107d9e0;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107d9b0;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 3);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107d9b0:
    lVar23 = *(long *)(lVar23 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 3;
      *(undefined4 *)(lVar23 + 0xc) = uVar11;
      *(undefined1 *)(lVar23 + 10) = 4;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(long *)(*(long *)(lVar28 + 0x78) + 0x20) = lVar23;
    }
  }
LAB_0107d9e0:
  lVar28 = *plVar35;
  uVar11 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar14 = *(uint *)(lVar23 + 0xc08);
  uVar32 = (ulong)uVar14;
  if (uVar14 < 0x61) {
    uVar14 = 0x60;
  }
  plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar14 == uVar38) goto LAB_0107da70;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107da44;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 4);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107da44:
    lVar23 = *(long *)(lVar23 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 4;
      *(undefined4 *)(lVar23 + 0xc) = uVar11;
      *(undefined1 *)(lVar23 + 10) = 4;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(long *)(*(long *)(lVar28 + 0x78) + 0x28) = lVar23;
    }
  }
LAB_0107da70:
  lVar23 = *plVar35;
  lVar28 = *(long *)(lVar23 + 0x38);
  uVar27 = *(uint *)(lVar28 + 0xc08);
  uVar32 = (ulong)uVar27;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = -1;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == -1) goto LAB_0107db10;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107dad0;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x40);
  if (uVar27 + (int)(lVar25 + 1) < 0x60) {
LAB_0107dad0:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25 + 1) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x40;
      *(undefined1 *)(lVar31 + 10) = 0;
      *(undefined8 *)(lVar31 + 0xc) = 0;
      *(undefined8 *)(lVar31 + 0x14) = 0;
      *(undefined4 *)(lVar31 + 0x1c) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x208) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107db10:
  uVar14 = (uint)uVar32;
  if (uVar14 < 0x61) {
    uVar14 = 0x60;
  }
  plVar17 = (long *)(lVar28 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar14 == uVar38) goto LAB_0107db8c;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107db58;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 0x59);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107db58:
    lVar28 = *(long *)(lVar28 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar28 != 0) {
      *(undefined2 *)(lVar28 + 8) = 0x59;
      *(undefined1 *)(lVar28 + 10) = 0;
      *(undefined8 *)(lVar28 + 0xc) = 0;
      *(undefined8 *)(lVar28 + 0x14) = 0;
      *(undefined4 *)(lVar28 + 0x1c) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x2d0) = lVar28;
      lVar23 = *plVar35;
    }
  }
LAB_0107db8c:
  FUN_0107b310(lVar23,0x49,8,1);
  lVar23 = *plVar35;
  lVar28 = *(long *)(*(long *)(lVar23 + 0x78) + 0x2d0);
  if (lVar28 == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = *(int *)(lVar28 + 0xc);
  }
  lVar28 = *(long *)(*(long *)(lVar23 + 0x78) + 0x208);
  plVar17 = param_2;
  if ((lVar28 != 0) && (iVar16 = *(int *)(lVar28 + 0xc), iVar16 != 0)) {
    uVar19 = FUN_00f7e284(*(undefined8 *)(param_1 + 0x18));
    plVar17 = (long *)FUN_01021c94(uVar19,iVar16);
    lVar23 = *(long *)(param_1 + 0x10);
  }
  uVar11 = 10;
  if (*(char *)((long)param_4 + 9) != '\x02') {
    uVar11 = 8;
  }
  lVar28 = *(long *)(lVar23 + 0x38);
  uVar14 = *(uint *)(lVar28 + 0xc08);
  if (uVar14 < 0x60) {
    do {
      lVar31 = *(long *)(lVar28 + (ulong)uVar14 * 0x20 + 8);
      if (*(short *)(lVar31 + 8) == 0) {
        if (uVar14 < 0x5f) {
          *(undefined2 *)(lVar31 + 8) = 1;
          *(int *)(lVar28 + 0xc08) = *(int *)(lVar28 + 0xc08) + 1;
        }
        break;
      }
      uVar14 = uVar14 + 1;
      *(uint *)(lVar28 + 0xc08) = uVar14;
    } while (uVar14 != 0x60);
  }
  lVar28 = *(long *)(lVar23 + 0x58);
  uVar14 = *(uint *)(lVar28 + 0x408);
  if (uVar14 < 0x1f) {
    *(uint *)(lVar28 + 0x408) = uVar14 + 1;
    lVar28 = *(long *)(lVar23 + 0x58);
    uVar14 = *(uint *)(lVar28 + 0x408);
  }
  *(undefined8 *)(lVar23 + 0x78) = *(undefined8 *)(lVar28 + (ulong)uVar14 * 0x20 + 8);
  lVar28 = *plVar35;
  uVar12 = (**(code **)(*plVar17 + 0x98))(plVar17);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar14 = *(uint *)(lVar23 + 0xc08);
  uVar32 = (ulong)uVar14;
  if (uVar14 < 0x61) {
    uVar14 = 0x60;
  }
  plVar29 = (long *)(lVar23 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar14 == uVar38) goto LAB_0107dcf0;
    lVar31 = *plVar29;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107dcc0;
    plVar29 = plVar29 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 3);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107dcc0:
    lVar23 = *(long *)(lVar23 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 3;
      *(undefined4 *)(lVar23 + 0xc) = uVar12;
      *(undefined1 *)(lVar23 + 10) = 4;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(long *)(*(long *)(lVar28 + 0x78) + 0x20) = lVar23;
    }
  }
LAB_0107dcf0:
  lVar23 = *plVar35;
  uVar5 = *param_4;
  lVar28 = *(long *)(lVar23 + 0x38);
  uVar27 = *(uint *)(lVar28 + 0xc08);
  uVar32 = (ulong)uVar27;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = -1;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == -1) goto LAB_0107dd94;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107dd54;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x12);
  if (uVar27 + (int)(lVar25 + 1) < 0x60) {
LAB_0107dd54:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25 + 1) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x12;
      *(uint *)(lVar31 + 0xc) = (uint)uVar5;
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x98) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107dd94:
  uVar14 = (uint)uVar32;
  if (uVar14 < 0x61) {
    uVar14 = 0x60;
  }
  plVar29 = (long *)(lVar28 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar14 == uVar38) goto LAB_0107de10;
    lVar31 = *plVar29;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107dddc;
    plVar29 = plVar29 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 0x41);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107dddc:
    lVar28 = *(long *)(lVar28 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar28 != 0) {
      *(undefined2 *)(lVar28 + 8) = 0x41;
      *(undefined4 *)(lVar28 + 0xc) = uVar11;
      *(undefined1 *)(lVar28 + 10) = 1;
      *(undefined8 *)(lVar28 + 0x10) = 0;
      *(undefined8 *)(lVar28 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x210) = lVar28;
      lVar23 = *plVar35;
    }
  }
LAB_0107de10:
  FUN_0107b310(lVar23,0x4b,8,1);
  lVar28 = *plVar35;
  lVar23 = *(long *)(*(long *)(lVar28 + 0x78) + 0x210);
  if (lVar23 == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(lVar23 + 0xc);
  }
  lVar23 = *(long *)(lVar28 + 0x58);
  if (*(uint *)(lVar23 + 0x408) == 0) {
    uVar32 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar23 + (ulong)*(uint *)(lVar23 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar23 + 0x408) = *(int *)(lVar23 + 0x408) + -1;
    lVar23 = *(long *)(lVar28 + 0x58);
    uVar32 = (ulong)*(uint *)(lVar23 + 0x408);
  }
  *(undefined8 *)(lVar28 + 0x78) = *(undefined8 *)(lVar23 + uVar32 * 0x20 + 8);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar14 = *(uint *)(lVar23 + 0xc08);
  if (uVar14 != 0) {
    if ((uVar14 & 0xffff) < 0x60) {
      uVar32 = (ulong)uVar14 & 0xffff;
      plVar29 = (long *)(lVar23 + uVar32 * 0x20 + 8);
      do {
        uVar32 = uVar32 + 1;
        if (*(short *)(*plVar29 + 8) == 0) break;
        *(undefined2 *)(*plVar29 + 8) = 0;
        plVar29 = plVar29 + 4;
      } while (((uint)uVar32 & 0xffff) != 0x60);
      uVar14 = *(uint *)(lVar23 + 0xc08);
    }
    *(uint *)(lVar23 + 0xc08) = uVar14 - 1;
    *(undefined2 *)(*(long *)(lVar23 + (ulong)(uVar14 - 1) * 0x20 + 8) + 8) = 0;
    uVar32 = (ulong)*(uint *)(lVar23 + 0xc08);
    do {
      if (uVar32 == 0) goto LAB_0107df0c;
      uVar32 = uVar32 - 1;
      *(int *)(lVar23 + 0xc08) = (int)uVar32;
    } while (*(short *)(*(long *)(lVar23 + (uVar32 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar23 + 0xc08) = (int)uVar32 + 1;
  }
LAB_0107df0c:
  if (iVar15 == 0) {
    if ((param_7 & 1) != 0) {
      if (iVar16 == 8) {
        lVar23 = *plVar17;
        uVar19 = 1;
LAB_0107fc38:
        iVar15 = (**(code **)(lVar23 + 0xb0))(plVar17,uVar19);
      }
      else {
        if (iVar16 == 9) {
          lVar23 = *plVar17;
          uVar19 = 2;
          goto LAB_0107fc38;
        }
        if (iVar16 == 10) {
          lVar23 = *plVar17;
          uVar19 = 3;
          goto LAB_0107fc38;
        }
        if (iVar16 != 0xb) goto LAB_0107df18;
        iVar15 = (**(code **)(*plVar17 + 0xb0))(plVar17,4);
      }
      if (iVar15 < 6) goto LAB_0107fc48;
    }
LAB_0107df18:
    pcVar24 = *(code **)(*plVar17 + 0xb0);
  }
  else {
LAB_0107fc48:
    pcVar24 = *(code **)(*plVar17 + 0xb8);
  }
  uVar13 = (*pcVar24)(plVar17,iVar16);
  lVar23 = *plVar35;
  lVar28 = *(long *)(lVar23 + 0x38);
  uVar27 = *(uint *)(lVar28 + 0xc08);
  uVar32 = (ulong)uVar27;
  uVar5 = *param_4;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = -1;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == -1) goto LAB_0107dfd4;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107df94;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x12);
  if (uVar27 + (int)(lVar25 + 1) < 0x60) {
LAB_0107df94:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25 + 1) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x12;
      *(uint *)(lVar31 + 0xc) = (uint)uVar5;
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x98) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107dfd4:
  uVar5 = param_4[4];
  uVar27 = (uint)uVar32;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == 0) goto LAB_0107e068;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107e02c;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x16);
  if ((uVar27 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107e02c:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x16;
      *(uint *)(lVar31 + 0xc) = (uint)(byte)uVar5;
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0xb8) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107e068:
  bVar3 = *(byte *)((long)param_4 + 9);
  uVar27 = (uint)uVar32;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == 0) goto LAB_0107e0fc;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107e0c0;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x1b);
  if ((uVar27 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107e0c0:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x1b;
      *(uint *)(lVar31 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0xe0) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107e0fc:
  uVar27 = (uint)uVar32;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == 0) goto LAB_0107e18c;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107e154;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x36);
  if ((uVar27 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107e154:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x36;
      *(uint *)(lVar31 + 0xc) = uVar13 & 0xffff;
      *(undefined1 *)(lVar31 + 10) = 0;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x1b8) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107e18c:
  uVar27 = (uint)uVar32;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == 0) goto LAB_0107e22c;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107e1e0;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x38);
  if ((uVar27 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107e1e0:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x38;
      *(undefined8 *)(lVar31 + 0xc) = 0x19a00001000;
      *(undefined4 *)(lVar31 + 0x14) = 0x20000;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(undefined1 *)(lVar31 + 10) = 3;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x1c8) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107e22c:
  uVar14 = (uint)uVar32;
  if (uVar14 < 0x61) {
    uVar14 = 0x60;
  }
  plVar17 = (long *)(lVar28 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar14 == uVar38) goto LAB_0107e2ac;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107e274;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 0x5a);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107e274:
    lVar28 = *(long *)(lVar28 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar28 != 0) {
      *(undefined2 *)(lVar28 + 8) = 0x5a;
      *(undefined8 *)(lVar28 + 0xc) = 0;
      *(undefined8 *)(lVar28 + 0x14) = 0;
      *(undefined4 *)(lVar28 + 0x1c) = 0;
      *(undefined1 *)(lVar28 + 10) = 1;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x2d8) = lVar28;
      lVar23 = *plVar35;
    }
  }
LAB_0107e2ac:
  FUN_0107b310(lVar23,0x4c,8,1);
  lVar28 = *plVar35;
  lVar23 = *(long *)(lVar28 + 0x78);
  if (*(long *)(lVar23 + 0x1b8) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = (uint)*(ushort *)(*(long *)(lVar23 + 0x1b8) + 0xc);
  }
  if (*(long *)(lVar23 + 0x1c8) == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = *(int *)(*(long *)(lVar23 + 0x1c8) + 0xc);
  }
  if (*(long *)(lVar23 + 0x2d8) == 0) {
    bVar8 = false;
  }
  else {
    bVar8 = *(int *)(*(long *)(lVar23 + 0x2d8) + 0xc) != 0;
  }
  lVar23 = *(long *)(lVar28 + 0x58);
  if (*(uint *)(lVar23 + 0x408) == 0) {
    uVar32 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar23 + (ulong)*(uint *)(lVar23 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar23 + 0x408) = *(int *)(lVar23 + 0x408) + -1;
    lVar23 = *(long *)(lVar28 + 0x58);
    uVar32 = (ulong)*(uint *)(lVar23 + 0x408);
  }
  *(undefined8 *)(lVar28 + 0x78) = *(undefined8 *)(lVar23 + uVar32 * 0x20 + 8);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar27 = *(uint *)(lVar23 + 0xc08);
  if (uVar27 != 0) {
    if ((uVar27 & 0xffff) < 0x60) {
      uVar32 = (ulong)uVar27 & 0xffff;
      plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
      do {
        uVar32 = uVar32 + 1;
        if (*(short *)(*plVar17 + 8) == 0) break;
        *(undefined2 *)(*plVar17 + 8) = 0;
        plVar17 = plVar17 + 4;
      } while (((uint)uVar32 & 0xffff) != 0x60);
      uVar27 = *(uint *)(lVar23 + 0xc08);
    }
    *(uint *)(lVar23 + 0xc08) = uVar27 - 1;
    *(undefined2 *)(*(long *)(lVar23 + (ulong)(uVar27 - 1) * 0x20 + 8) + 8) = 0;
    uVar32 = (ulong)*(uint *)(lVar23 + 0xc08);
    do {
      if (uVar32 == 0) goto LAB_0107e3c8;
      uVar32 = uVar32 - 1;
      *(int *)(lVar23 + 0xc08) = (int)uVar32;
    } while (*(short *)(*(long *)(lVar23 + (uVar32 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar23 + 0xc08) = (int)uVar32 + 1;
  }
LAB_0107e3c8:
  bVar3 = *(byte *)((long)param_4 + 9);
  uVar27 = iVar15 * uVar14 >> 0xc;
  if (0x800 < (iVar15 * uVar14 & 0xfff)) {
    uVar27 = uVar27 + 1;
  }
  iVar15 = 0xb;
  if (bVar3 != 2) {
    iVar15 = 9;
  }
  lVar23 = *plVar35;
  lVar28 = *(long *)(lVar23 + 0x38);
  uVar14 = *(uint *)(lVar28 + 0xc08);
  if (uVar14 < 0x60) {
    do {
      lVar31 = *(long *)(lVar28 + (ulong)uVar14 * 0x20 + 8);
      if (*(short *)(lVar31 + 8) == 0) {
        if (uVar14 < 0x5f) {
          *(undefined2 *)(lVar31 + 8) = 1;
          *(int *)(lVar28 + 0xc08) = *(int *)(lVar28 + 0xc08) + 1;
        }
        break;
      }
      uVar14 = uVar14 + 1;
      *(uint *)(lVar28 + 0xc08) = uVar14;
    } while (uVar14 != 0x60);
  }
  lVar28 = *(long *)(lVar23 + 0x58);
  uVar14 = *(uint *)(lVar28 + 0x408);
  if (uVar14 < 0x1f) {
    *(uint *)(lVar28 + 0x408) = uVar14 + 1;
    lVar28 = *(long *)(lVar23 + 0x58);
    uVar14 = *(uint *)(lVar28 + 0x408);
  }
  *(undefined8 *)(lVar23 + 0x78) = *(undefined8 *)(lVar28 + (ulong)uVar14 * 0x20 + 8);
  lVar28 = *plVar35;
  uVar11 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar14 = *(uint *)(lVar23 + 0xc08);
  uVar32 = (ulong)uVar14;
  if (uVar14 < 0x61) {
    uVar14 = 0x60;
  }
  plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar14 == uVar38) goto LAB_0107e50c;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107e4dc;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 3);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107e4dc:
    lVar23 = *(long *)(lVar23 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 3;
      *(undefined4 *)(lVar23 + 0xc) = uVar11;
      *(undefined1 *)(lVar23 + 10) = 4;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(long *)(*(long *)(lVar28 + 0x78) + 0x20) = lVar23;
    }
  }
LAB_0107e50c:
  lVar28 = *plVar35;
  uVar11 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar14 = *(uint *)(lVar23 + 0xc08);
  uVar32 = (ulong)uVar14;
  if (uVar14 < 0x61) {
    uVar14 = 0x60;
  }
  plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar14 == uVar38) goto LAB_0107e59c;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107e570;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 4);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107e570:
    lVar23 = *(long *)(lVar23 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 4;
      *(undefined4 *)(lVar23 + 0xc) = uVar11;
      *(undefined1 *)(lVar23 + 10) = 4;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(long *)(*(long *)(lVar28 + 0x78) + 0x28) = lVar23;
    }
  }
LAB_0107e59c:
  lVar23 = *plVar35;
  lVar28 = *(long *)(lVar23 + 0x38);
  uVar13 = *(uint *)(lVar28 + 0xc08);
  uVar32 = (ulong)uVar13;
  uVar14 = uVar13;
  if (uVar13 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = -1;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == -1) goto LAB_0107e63c;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107e5fc;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x41);
  if (uVar13 + (int)(lVar25 + 1) < 0x60) {
LAB_0107e5fc:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar13 + (int)lVar25 + 1) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x41;
      *(int *)(lVar31 + 0xc) = iVar15;
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x210) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107e63c:
  uVar13 = (uint)uVar32;
  uVar14 = uVar13;
  if (uVar13 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == 0) goto LAB_0107e6cc;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107e690;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x42);
  if ((uVar13 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107e690:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar13 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x42;
      *(undefined1 *)(lVar31 + 10) = 0;
      *(undefined8 *)(lVar31 + 0xc) = 0;
      *(undefined8 *)(lVar31 + 0x14) = 0;
      *(undefined4 *)(lVar31 + 0x1c) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x218) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107e6cc:
  uVar14 = (uint)uVar32;
  if (uVar14 < 0x61) {
    uVar14 = 0x60;
  }
  plVar17 = (long *)(lVar28 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar14 == uVar38) goto LAB_0107e75c;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107e71c;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 0x59);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107e71c:
    lVar28 = *(long *)(lVar28 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar28 != 0) {
      *(undefined2 *)(lVar28 + 8) = 0x59;
      *(undefined8 *)(lVar28 + 0xc) = 0;
      *(undefined8 *)(lVar28 + 0x14) = 0;
      *(undefined4 *)(lVar28 + 0x1c) = 0;
      *(undefined1 *)(lVar28 + 10) = 1;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x2d0) = lVar28;
      lVar23 = *plVar35;
    }
  }
LAB_0107e75c:
  iVar16 = 9;
  FUN_0107b310(lVar23,0x4a,8,1);
  lVar28 = *plVar35;
  lVar23 = *(long *)(*(long *)(lVar28 + 0x78) + 0x2d0);
  if (lVar23 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(uint *)(lVar23 + 0xc);
  }
  lVar23 = *(long *)(*(long *)(lVar28 + 0x78) + 0x218);
  if (lVar23 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(uint *)(lVar23 + 0xc);
  }
  lVar23 = *(long *)(lVar28 + 0x58);
  if (*(uint *)(lVar23 + 0x408) == 0) {
    uVar32 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar23 + (ulong)*(uint *)(lVar23 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar23 + 0x408) = *(int *)(lVar23 + 0x408) + -1;
    lVar23 = *(long *)(lVar28 + 0x58);
    uVar32 = (ulong)*(uint *)(lVar23 + 0x408);
  }
  *(undefined8 *)(lVar28 + 0x78) = *(undefined8 *)(lVar23 + uVar32 * 0x20 + 8);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar22 = *(uint *)(lVar23 + 0xc08);
  if (uVar22 != 0) {
    if ((uVar22 & 0xffff) < 0x60) {
      uVar32 = (ulong)uVar22 & 0xffff;
      plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
      do {
        uVar32 = uVar32 + 1;
        if (*(short *)(*plVar17 + 8) == 0) break;
        *(undefined2 *)(*plVar17 + 8) = 0;
        plVar17 = plVar17 + 4;
      } while (((uint)uVar32 & 0xffff) != 0x60);
      uVar22 = *(uint *)(lVar23 + 0xc08);
    }
    *(uint *)(lVar23 + 0xc08) = uVar22 - 1;
    *(undefined2 *)(*(long *)(lVar23 + (ulong)(uVar22 - 1) * 0x20 + 8) + 8) = 0;
    uVar32 = (ulong)*(uint *)(lVar23 + 0xc08);
    do {
      if (uVar32 == 0) goto LAB_0107e864;
      uVar32 = uVar32 - 1;
      *(int *)(lVar23 + 0xc08) = (int)uVar32;
    } while (*(short *)(*(long *)(lVar23 + (uVar32 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar23 + 0xc08) = (int)uVar32 + 1;
  }
LAB_0107e864:
  if (bVar3 != 2) {
    iVar16 = 0xb;
  }
  if ((uVar13 & 1) != 0) {
    iVar15 = iVar16;
  }
  lVar23 = *param_3;
  if ((uVar14 & 0xff) == 0) {
    if ((param_7 & 1) == 0) {
      pcVar24 = *(code **)(lVar23 + 0xb0);
    }
    else {
      pcVar24 = *(code **)(lVar23 + 0xe8);
    }
  }
  else {
    pcVar24 = *(code **)(lVar23 + 0xb8);
  }
  uVar14 = (*pcVar24)(param_3,iVar15);
  cVar9 = FUN_0126ec0c(param_1);
  if (((cVar9 == '\x04') && (uVar32 = (**(code **)(*param_3 + 0x300))(param_3,5), iVar15 == 0xb)) &&
     ((uVar32 & 1) != 0)) {
    plVar17 = (long *)FUN_012521a0(param_1);
    iVar16 = (**(code **)(*plVar17 + 0x68))(plVar17,&DAT_03d69ed0);
    fVar39 = 0.5;
    if ((float)iVar16 / 100.0 <= 0.0) {
      fVar39 = -0.5;
    }
    uVar22 = (uVar14 & 0xffff) * (int)(((float)iVar16 / 100.0) * 4096.0 + fVar39);
    uVar14 = uVar22 >> 0xc;
    if (0x800 < (uVar22 & 0xfff)) {
      uVar14 = uVar14 + 1;
    }
  }
  cVar9 = FUN_0126ec0c(param_1);
  if (((cVar9 == '\x03') && (uVar32 = (**(code **)(*param_3 + 0x300))(param_3,0xe), iVar15 == 9)) &&
     ((uVar32 & 1) != 0)) {
    plVar17 = (long *)FUN_012521a0(param_1);
    iVar15 = (**(code **)(*plVar17 + 0x68))(plVar17,&DAT_03d69ed8);
    fVar39 = 0.5;
    if ((float)iVar15 / 100.0 <= 0.0) {
      fVar39 = -0.5;
    }
    uVar22 = (int)(((float)iVar15 / 100.0) * 4096.0 + fVar39) * (uVar14 & 0xffff);
    uVar14 = uVar22 >> 0xc;
    if (0x800 < (uVar22 & 0xfff)) {
      uVar14 = uVar14 + 1;
    }
  }
  uVar22 = 1;
  if (bVar3 != 2) {
    uVar22 = 2;
  }
  uVar1 = (uint)bVar3;
  if ((uVar13 & 1) != 0) {
    uVar1 = uVar22;
  }
  lVar23 = *plVar35;
  lVar28 = *(long *)(lVar23 + 0x38);
  uVar13 = *(uint *)(lVar28 + 0xc08);
  if (uVar13 < 0x60) {
    do {
      lVar31 = *(long *)(lVar28 + (ulong)uVar13 * 0x20 + 8);
      if (*(short *)(lVar31 + 8) == 0) {
        if (uVar13 < 0x5f) {
          *(undefined2 *)(lVar31 + 8) = 1;
          *(int *)(lVar28 + 0xc08) = *(int *)(lVar28 + 0xc08) + 1;
        }
        break;
      }
      uVar13 = uVar13 + 1;
      *(uint *)(lVar28 + 0xc08) = uVar13;
    } while (uVar13 != 0x60);
  }
  lVar28 = *(long *)(lVar23 + 0x58);
  uVar13 = *(uint *)(lVar28 + 0x408);
  if (uVar13 < 0x1f) {
    *(uint *)(lVar28 + 0x408) = uVar13 + 1;
    lVar28 = *(long *)(lVar23 + 0x58);
    uVar13 = *(uint *)(lVar28 + 0x408);
  }
  *(undefined8 *)(lVar23 + 0x78) = *(undefined8 *)(lVar28 + (ulong)uVar13 * 0x20 + 8);
  lVar28 = *plVar35;
  uVar11 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar13 = *(uint *)(lVar23 + 0xc08);
  uVar32 = (ulong)uVar13;
  if (uVar13 < 0x61) {
    uVar13 = 0x60;
  }
  plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar13 == uVar38) goto LAB_0107ea0c;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107e9dc;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 3);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107e9dc:
    lVar23 = *(long *)(lVar23 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 3;
      *(undefined4 *)(lVar23 + 0xc) = uVar11;
      *(undefined1 *)(lVar23 + 10) = 4;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(long *)(*(long *)(lVar28 + 0x78) + 0x20) = lVar23;
    }
  }
LAB_0107ea0c:
  lVar28 = *plVar35;
  uVar11 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar13 = *(uint *)(lVar23 + 0xc08);
  uVar32 = (ulong)uVar13;
  if (uVar13 < 0x61) {
    uVar13 = 0x60;
  }
  plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar13 == uVar38) goto LAB_0107ea9c;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107ea70;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 4);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107ea70:
    lVar23 = *(long *)(lVar23 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 4;
      *(undefined4 *)(lVar23 + 0xc) = uVar11;
      *(undefined1 *)(lVar23 + 10) = 4;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(long *)(*(long *)(lVar28 + 0x78) + 0x28) = lVar23;
    }
  }
LAB_0107ea9c:
  lVar23 = *plVar35;
  uVar5 = *param_4;
  lVar28 = *(long *)(lVar23 + 0x38);
  uVar22 = *(uint *)(lVar28 + 0xc08);
  uVar32 = (ulong)uVar22;
  uVar13 = uVar22;
  if (uVar22 < 0x61) {
    uVar13 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = -1;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar13) + lVar25 == -1) goto LAB_0107eb40;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107eb00;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x12);
  if (uVar22 + (int)(lVar25 + 1) < 0x60) {
LAB_0107eb00:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar22 + (int)lVar25 + 1) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x12;
      *(uint *)(lVar31 + 0xc) = (uint)uVar5;
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x98) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107eb40:
  uVar5 = param_4[4];
  uVar22 = (uint)uVar32;
  uVar13 = uVar22;
  if (uVar22 < 0x61) {
    uVar13 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar13) + lVar25 == 0) goto LAB_0107ebd4;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107eb98;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x16);
  if ((uVar22 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107eb98:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar22 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x16;
      *(uint *)(lVar31 + 0xc) = (uint)(byte)uVar5;
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0xb8) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107ebd4:
  uVar22 = (uint)uVar32;
  uVar13 = uVar22;
  if (uVar22 < 0x61) {
    uVar13 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar13) + lVar25 == 0) goto LAB_0107ec68;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107ec2c;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x1b);
  if ((uVar22 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107ec2c:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar22 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x1b;
      *(uint *)(lVar31 + 0xc) = uVar1;
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0xe0) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107ec68:
  uVar22 = (uint)uVar32;
  uVar13 = uVar22;
  if (uVar22 < 0x61) {
    uVar13 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar13) + lVar25 == 0) goto LAB_0107ecf8;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107ecc0;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x37);
  if ((uVar22 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107ecc0:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar22 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x37;
      *(uint *)(lVar31 + 0xc) = uVar14 & 0xffff;
      *(undefined1 *)(lVar31 + 10) = 0;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x1c0) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107ecf8:
  uVar14 = (uint)uVar32;
  if (uVar14 < 0x61) {
    uVar14 = 0x60;
  }
  plVar17 = (long *)(lVar28 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar14 == uVar38) goto LAB_0107ed84;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107ed40;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 0x38);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107ed40:
    lVar28 = *(long *)(lVar28 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar28 != 0) {
      *(undefined2 *)(lVar28 + 8) = 0x38;
      *(undefined8 *)(lVar28 + 0xc) = 0x19a00001000;
      *(undefined4 *)(lVar28 + 0x14) = 0x20000;
      *(undefined8 *)(lVar28 + 0x18) = 0;
      *(undefined1 *)(lVar28 + 10) = 3;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x1c8) = lVar28;
      lVar23 = *plVar35;
    }
  }
LAB_0107ed84:
  FUN_0107b310(lVar23,0x4d,8,1);
  lVar28 = *plVar35;
  lVar23 = *(long *)(*(long *)(lVar28 + 0x78) + 0x1c0);
  if (lVar23 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = (uint)*(ushort *)(lVar23 + 0xc);
  }
  lVar23 = *(long *)(*(long *)(lVar28 + 0x78) + 0x1c8);
  if (lVar23 == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = *(int *)(lVar23 + 0xc);
  }
  lVar23 = *(long *)(lVar28 + 0x58);
  if (*(uint *)(lVar23 + 0x408) == 0) {
    uVar32 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar23 + (ulong)*(uint *)(lVar23 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar23 + 0x408) = *(int *)(lVar23 + 0x408) + -1;
    lVar23 = *(long *)(lVar28 + 0x58);
    uVar32 = (ulong)*(uint *)(lVar23 + 0x408);
  }
  *(undefined8 *)(lVar28 + 0x78) = *(undefined8 *)(lVar23 + uVar32 * 0x20 + 8);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar13 = *(uint *)(lVar23 + 0xc08);
  if (uVar13 != 0) {
    if ((uVar13 & 0xffff) < 0x60) {
      uVar32 = (ulong)uVar13 & 0xffff;
      plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
      do {
        uVar32 = uVar32 + 1;
        if (*(short *)(*plVar17 + 8) == 0) break;
        *(undefined2 *)(*plVar17 + 8) = 0;
        plVar17 = plVar17 + 4;
      } while (((uint)uVar32 & 0xffff) != 0x60);
      uVar13 = *(uint *)(lVar23 + 0xc08);
    }
    *(uint *)(lVar23 + 0xc08) = uVar13 - 1;
    *(undefined2 *)(*(long *)(lVar23 + (ulong)(uVar13 - 1) * 0x20 + 8) + 8) = 0;
    uVar32 = (ulong)*(uint *)(lVar23 + 0xc08);
    do {
      if (uVar32 == 0) goto LAB_0107ee90;
      uVar32 = uVar32 - 1;
      *(int *)(lVar23 + 0xc08) = (int)uVar32;
    } while (*(short *)(*(long *)(lVar23 + (uVar32 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar23 + 0xc08) = (int)uVar32 + 1;
  }
LAB_0107ee90:
  uVar13 = iVar15 * uVar14 >> 0xc;
  if (0x800 < (iVar15 * uVar14 & 0xfff)) {
    uVar13 = uVar13 + 1;
  }
  uStack_7c = (**(code **)(*param_2 + 0x118))(param_2);
  local_80 = local_a8 & 0xffff;
  uStack_7c = uStack_7c & 0xff;
  local_78 = uVar27 & 0xffff;
  uStack_74 = uVar13 & 0xffff;
  uVar14 = FUN_029764e0(*(undefined8 *)(param_1 + 8),&local_80);
  if ((param_6 != 0x1000) &&
     (uVar27 = uVar14 * param_6, uVar14 = uVar27 >> 0xc, 0x800 < (uVar27 & 0xfff))) {
    uVar14 = uVar14 + 1;
  }
  plVar17 = (long *)FUN_012521a0(param_1);
  if (uVar21 - 1 < 6) {
    cVar9 = (char)param_4[4];
    iVar15 = 100;
    switch(uVar21) {
    default:
      if (cVar9 == '\t') {
LAB_0107fdc0:
        pcVar24 = *(code **)(*plVar17 + 0x68);
        puVar20 = PTR_DAT_047e26d8;
        goto LAB_0107fdd0;
      }
      if (cVar9 == '\n') goto LAB_0107fc64;
LAB_0107ef50:
      iVar15 = 100;
      break;
    case 2:
    case 5:
      if (cVar9 != '\t') {
        if (cVar9 != '\n') goto LAB_0107ef50;
        goto LAB_0107fdc0;
      }
LAB_0107fc64:
      pcVar24 = *(code **)(*plVar17 + 0x68);
      puVar20 = PTR_DAT_047e26d0;
LAB_0107fdd0:
      iVar15 = (*pcVar24)(plVar17,puVar20);
      break;
    case 3:
    case 4:
      break;
    }
  }
  else {
    iVar15 = 100;
  }
  lVar23 = *plVar35;
  lVar28 = *(long *)(lVar23 + 0x38);
  uVar27 = *(uint *)(lVar28 + 0xc08);
  fVar39 = 0.5;
  if ((float)iVar15 / 100.0 <= 0.0) {
    fVar39 = -0.5;
  }
  if (uVar27 < 0x60) {
    do {
      lVar31 = *(long *)(lVar28 + (ulong)uVar27 * 0x20 + 8);
      if (*(short *)(lVar31 + 8) == 0) {
        if (uVar27 < 0x5f) {
          *(undefined2 *)(lVar31 + 8) = 1;
          *(int *)(lVar28 + 0xc08) = *(int *)(lVar28 + 0xc08) + 1;
        }
        break;
      }
      uVar27 = uVar27 + 1;
      *(uint *)(lVar28 + 0xc08) = uVar27;
    } while (uVar27 != 0x60);
  }
  lVar28 = *(long *)(lVar23 + 0x58);
  uVar27 = *(uint *)(lVar28 + 0x408);
  if (uVar27 < 0x1f) {
    *(uint *)(lVar28 + 0x408) = uVar27 + 1;
    lVar28 = *(long *)(lVar23 + 0x58);
    uVar27 = *(uint *)(lVar28 + 0x408);
  }
  *(undefined8 *)(lVar23 + 0x78) = *(undefined8 *)(lVar28 + (ulong)uVar27 * 0x20 + 8);
  lVar28 = *plVar35;
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar27 = *(uint *)(lVar23 + 0xc08);
  uVar32 = (ulong)uVar27;
  if (uVar27 < 0x61) {
    uVar27 = 0x60;
  }
  plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar27 == uVar38) goto LAB_0107f09c;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107f068;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 0x3e);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107f068:
    lVar23 = *(long *)(lVar23 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar23 != 0) {
      *(uint *)(lVar23 + 0xc) = uVar21;
      *(undefined2 *)(lVar23 + 8) = 0x3e;
      *(undefined1 *)(lVar23 + 10) = 4;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(long *)(*(long *)(lVar28 + 0x78) + 0x1f8) = lVar23;
      lVar28 = *plVar35;
    }
  }
LAB_0107f09c:
  uVar11 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar21 = *(uint *)(lVar23 + 0xc08);
  uVar32 = (ulong)uVar21;
  if (uVar21 < 0x61) {
    uVar21 = 0x60;
  }
  plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar21 == uVar38) goto LAB_0107f12c;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107f0fc;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 2);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107f0fc:
    lVar23 = *(long *)(lVar23 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 2;
      *(undefined4 *)(lVar23 + 0xc) = uVar11;
      *(undefined1 *)(lVar23 + 10) = 4;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(long *)(*(long *)(lVar28 + 0x78) + 0x18) = lVar23;
    }
  }
LAB_0107f12c:
  lVar28 = *plVar35;
  uVar11 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar21 = *(uint *)(lVar23 + 0xc08);
  uVar32 = (ulong)uVar21;
  if (uVar21 < 0x61) {
    uVar21 = 0x60;
  }
  plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar21 == uVar38) goto LAB_0107f1c0;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107f190;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 3);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107f190:
    lVar23 = *(long *)(lVar23 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 3;
      *(undefined4 *)(lVar23 + 0xc) = uVar11;
      *(undefined1 *)(lVar23 + 10) = 4;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(long *)(*(long *)(lVar28 + 0x78) + 0x20) = lVar23;
    }
  }
LAB_0107f1c0:
  lVar28 = *plVar35;
  uVar11 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar21 = *(uint *)(lVar23 + 0xc08);
  uVar32 = (ulong)uVar21;
  if (uVar21 < 0x61) {
    uVar21 = 0x60;
  }
  plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar21 == uVar38) goto LAB_0107f250;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107f224;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 4);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107f224:
    lVar23 = *(long *)(lVar23 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 4;
      *(undefined4 *)(lVar23 + 0xc) = uVar11;
      *(undefined1 *)(lVar23 + 10) = 4;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(long *)(*(long *)(lVar28 + 0x78) + 0x28) = lVar23;
    }
  }
LAB_0107f250:
  lVar23 = *plVar35;
  uVar5 = *param_4;
  lVar28 = *(long *)(lVar23 + 0x38);
  uVar27 = *(uint *)(lVar28 + 0xc08);
  uVar32 = (ulong)uVar27;
  uVar21 = uVar27;
  if (uVar27 < 0x61) {
    uVar21 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = -1;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar21) + lVar25 == -1) goto LAB_0107f2f8;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107f2b8;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x12);
  if (uVar27 + (int)(lVar25 + 1) < 0x60) {
LAB_0107f2b8:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25 + 1) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x12;
      *(uint *)(lVar31 + 0xc) = (uint)uVar5;
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x98) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107f2f8:
  uVar5 = param_4[4];
  uVar27 = (uint)uVar32;
  uVar21 = uVar27;
  if (uVar27 < 0x61) {
    uVar21 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar21) + lVar25 == 0) goto LAB_0107f38c;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107f350;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x16);
  if ((uVar27 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107f350:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x16;
      *(uint *)(lVar31 + 0xc) = (uint)(byte)uVar5;
      *(undefined1 *)(lVar31 + 10) = 4;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0xb8) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107f38c:
  uVar21 = (uint)uVar32;
  if (uVar21 < 0x61) {
    uVar21 = 0x60;
  }
  plVar17 = (long *)(lVar28 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar21 == uVar38) goto LAB_0107f404;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107f3d4;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 0x38);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107f3d4:
    lVar28 = *(long *)(lVar28 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar28 != 0) {
      *(undefined2 *)(lVar28 + 8) = 0x38;
      *(int *)(lVar28 + 0xc) = (int)(((float)iVar15 / 100.0) * 4096.0 + fVar39);
      *(undefined1 *)(lVar28 + 10) = 0;
      *(undefined8 *)(lVar28 + 0x10) = 0;
      *(undefined8 *)(lVar28 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x1c8) = lVar28;
      lVar23 = *plVar35;
    }
  }
LAB_0107f404:
  FUN_0107b310(lVar23,0x56,8,1);
  lVar28 = *plVar35;
  lVar23 = *(long *)(*(long *)(lVar28 + 0x78) + 0x1c8);
  if (lVar23 == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = *(int *)(lVar23 + 0xc);
  }
  lVar23 = *(long *)(lVar28 + 0x58);
  if (*(uint *)(lVar23 + 0x408) == 0) {
    uVar32 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar23 + (ulong)*(uint *)(lVar23 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar23 + 0x408) = *(int *)(lVar23 + 0x408) + -1;
    lVar23 = *(long *)(lVar28 + 0x58);
    uVar32 = (ulong)*(uint *)(lVar23 + 0x408);
  }
  *(undefined8 *)(lVar28 + 0x78) = *(undefined8 *)(lVar23 + uVar32 * 0x20 + 8);
  lVar23 = *(long *)(lVar28 + 0x38);
  uVar21 = *(uint *)(lVar23 + 0xc08);
  if (uVar21 != 0) {
    if ((uVar21 & 0xffff) < 0x60) {
      uVar32 = (ulong)uVar21 & 0xffff;
      plVar17 = (long *)(lVar23 + uVar32 * 0x20 + 8);
      do {
        uVar32 = uVar32 + 1;
        if (*(short *)(*plVar17 + 8) == 0) break;
        *(undefined2 *)(*plVar17 + 8) = 0;
        plVar17 = plVar17 + 4;
      } while (((uint)uVar32 & 0xffff) != 0x60);
      uVar21 = *(uint *)(lVar23 + 0xc08);
    }
    *(uint *)(lVar23 + 0xc08) = uVar21 - 1;
    *(undefined2 *)(*(long *)(lVar23 + (ulong)(uVar21 - 1) * 0x20 + 8) + 8) = 0;
    uVar32 = (ulong)*(uint *)(lVar23 + 0xc08);
    do {
      if (uVar32 == 0) goto LAB_0107f504;
      uVar32 = uVar32 - 1;
      *(int *)(lVar23 + 0xc08) = (int)uVar32;
    } while (*(short *)(*(long *)(lVar23 + (uVar32 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar23 + 0xc08) = (int)uVar32 + 1;
  }
LAB_0107f504:
  if ((iVar15 != 0x1000) &&
     (uVar21 = iVar15 * uVar14, uVar14 = uVar21 >> 0xc, 0x800 < (uVar21 & 0xfff))) {
    uVar14 = uVar14 + 1;
  }
  uVar38 = (ulong)uVar14;
  uVar32 = (**(code **)(*param_3 + 0x220))(param_3,0x2d);
  if ((uVar32 & 1) != 0) {
    plVar17 = (long *)FUN_012521a0(param_1);
    iVar15 = (**(code **)(*plVar17 + 0x68))(plVar17,&DAT_03d69ea8);
    uVar38 = (ulong)(iVar15 * uVar14) / 100;
  }
  if ((param_7 & 1) != 0) {
    plVar17 = (long *)FUN_012521a0(param_1);
    iVar15 = (**(code **)(*plVar17 + 0x68))(plVar17,&DAT_03d69eb0);
    uVar38 = (ulong)(uint)(iVar15 * (int)uVar38) / 100;
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49a) >> 4 & 1) == 0) {
    plVar17 = (long *)FUN_012521a0(param_1);
    uVar32 = (**(code **)(*plVar17 + 0x68))(plVar17,PTR_DAT_047e26c8);
    if ((param_8 & 1) == 0) {
      uVar21 = (int)uVar32 + 1;
      uVar26 = (ulong)uVar21;
      if (uVar21 < 2) {
        uVar32 = 0;
      }
      else {
        lVar28 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
        *(long *)(lVar28 + 0x20) = *(long *)(lVar28 + 0x20) + 1;
        lVar23 = 0x3f;
        if ((uVar26 << (LZCOUNT(uVar26) & 0x3fU) & 0x7fffffffffffffff) != 0) {
          lVar23 = 0x40;
        }
        uVar30 = lVar23 - LZCOUNT(uVar26);
        uVar32 = uVar30 >> 6;
        if ((uVar30 & 0x3f) != 0) {
          uVar32 = uVar32 + 1;
        }
        uVar33 = 0;
        if (uVar32 != 0) {
          uVar33 = uVar30 / uVar32;
        }
        uVar2 = 0;
        if (uVar32 <= uVar30) {
          uVar2 = 0xffffffffffffffff >> (-uVar33 & 0x3f);
        }
        uVar30 = *(ulong *)(lVar28 + 8);
        uVar33 = *(ulong *)(lVar28 + 0x10);
        do {
          uVar34 = uVar30 ^ uVar33;
          uVar32 = uVar30 + uVar33;
          uVar33 = uVar34 >> 0x1b | uVar34 << 0x25;
          uVar32 = uVar32 & uVar2;
          uVar30 = uVar34 ^ (uVar30 >> 0x28 | uVar30 << 0x18) ^ uVar34 << 0x10;
        } while (uVar26 <= uVar32);
        *(ulong *)(lVar28 + 8) = uVar30;
        *(ulong *)(lVar28 + 0x10) = uVar33;
      }
    }
    uVar38 = (ulong)((100U - (int)uVar32 & 0xffff) * (int)uVar38) / 100;
  }
  uVar21 = (uint)(byte)param_4[4];
  if (((byte)param_4[4] != 0x12) ||
     (uVar21 = FUN_02e2219c(param_2,0x12,*param_4), (uVar21 & 0xff) != 0x12)) {
    iVar15 = FUN_02e0c404(param_1,param_2,uVar21);
    uVar14 = iVar15 * (int)uVar38;
    uVar21 = uVar14 >> 0xc;
    if (0x800 < (uVar14 & 0xfff)) {
      uVar21 = uVar21 + 1;
    }
    uVar38 = (ulong)uVar21;
  }
  uVar14 = (uint)uVar38;
  uVar21 = 0;
  switch(param_5) {
  case 0:
    break;
  case 1:
    uVar21 = (uint)(uVar38 >> 6);
    break;
  case 2:
    uVar21 = uVar14 >> 5;
    break;
  case 3:
    uVar21 = uVar14 >> 4;
    break;
  case 4:
    uVar21 = uVar14 >> 3;
    break;
  case 5:
    uVar21 = uVar14 >> 2;
    break;
  case 6:
    uVar21 = (uint)(uVar38 >> 1);
    break;
  default:
    uVar21 = uVar14;
    break;
  case 8:
    uVar21 = uVar14 << 1;
    break;
  case 9:
    uVar21 = uVar14 << 2;
    break;
  case 10:
    uVar21 = uVar14 << 3;
    break;
  case 0xb:
    uVar21 = uVar14 << 4;
    break;
  case 0xc:
    uVar21 = uVar14 << 5;
    break;
  case 0xd:
    uVar21 = uVar14 << 6;
  }
  if (((*(char *)((long)param_4 + 9) == '\x01') &&
      (sVar10 = (**(code **)(*param_2 + 0x230))(param_2), sVar10 == 4)) && (!bVar8)) {
    plVar17 = (long *)FUN_012521a0(param_1);
    iVar15 = (**(code **)(*plVar17 + 0x68))(plVar17,&DAT_03d69ec0);
    uVar21 = (iVar15 * uVar21) / 100;
  }
  lVar23 = *plVar35;
  lVar28 = *(long *)(lVar23 + 0x38);
  uVar27 = *(uint *)(lVar28 + 0xc08);
  uVar32 = (ulong)uVar27;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = -1;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == -1) goto LAB_0107f884;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107f834;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x38);
  if (uVar27 + (int)(lVar25 + 1) < 0x60) {
LAB_0107f834:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25 + 1) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x38;
      *(undefined8 *)(lVar31 + 0xc) = 0x2900001000;
      *(undefined4 *)(lVar31 + 0x14) = 0x20000;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(undefined1 *)(lVar31 + 10) = 3;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x1c8) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107f884:
  uVar27 = (uint)uVar32;
  uVar14 = uVar27;
  if (uVar27 < 0x61) {
    uVar14 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar14) + lVar25 == 0) goto LAB_0107f910;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107f8d8;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 0x35);
  if ((uVar27 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107f8d8:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar27 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 0x35;
      *(uint *)(lVar31 + 0xc) = uVar21;
      *(undefined1 *)(lVar31 + 10) = 0;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x1b0) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107f910:
  uVar14 = (uint)uVar32;
  uVar21 = uVar14;
  if (uVar14 < 0x61) {
    uVar21 = 0x60;
  }
  uVar38 = uVar32 << 5 | 8;
  lVar31 = 0;
  do {
    lVar25 = lVar31;
    if ((uVar32 - uVar21) + lVar25 == 0) goto LAB_0107f9a0;
    sVar10 = *(short *)(*(long *)(lVar28 + uVar38) + 8);
    if (sVar10 == 0) goto LAB_0107f964;
    uVar38 = uVar38 + 0x20;
    lVar31 = lVar25 + 1;
  } while (sVar10 != 100);
  if ((uVar14 + (int)(lVar25 + 1)) - 1 < 0x60) {
LAB_0107f964:
    lVar31 = *(long *)(lVar28 + (ulong)(uVar14 + (int)lVar25) * 0x20 + 8);
    if (lVar31 != 0) {
      *(undefined2 *)(lVar31 + 8) = 100;
      *(undefined8 *)(lVar31 + 0xc) = 0;
      *(undefined8 *)(lVar31 + 0x14) = 0;
      *(undefined4 *)(lVar31 + 0x1c) = 0;
      *(undefined1 *)(lVar31 + 10) = 1;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x328) = lVar31;
      lVar23 = *plVar35;
      lVar28 = *(long *)(lVar23 + 0x38);
      uVar32 = (ulong)*(uint *)(lVar28 + 0xc08);
    }
  }
LAB_0107f9a0:
  uVar21 = (uint)uVar32;
  if (uVar21 < 0x61) {
    uVar21 = 0x60;
  }
  plVar17 = (long *)(lVar28 + uVar32 * 0x20 + 8);
  do {
    uVar38 = uVar32;
    if (uVar21 == uVar38) goto LAB_0107fa20;
    lVar31 = *plVar17;
    if (*(short *)(lVar31 + 8) == 0) goto LAB_0107f9e8;
    plVar17 = plVar17 + 4;
    uVar32 = uVar38 + 1;
  } while (*(short *)(lVar31 + 8) != 0x65);
  if ((int)(uVar38 + 1) - 1U < 0x60) {
LAB_0107f9e8:
    lVar28 = *(long *)(lVar28 + (uVar38 & 0xffffffff) * 0x20 + 8);
    if (lVar28 != 0) {
      *(undefined2 *)(lVar28 + 8) = 0x65;
      *(undefined8 *)(lVar28 + 0xc) = 0;
      *(undefined8 *)(lVar28 + 0x14) = 0;
      *(undefined4 *)(lVar28 + 0x1c) = 0;
      *(undefined1 *)(lVar28 + 10) = 1;
      *(long *)(*(long *)(lVar23 + 0x78) + 0x330) = lVar28;
      lVar23 = *plVar35;
    }
  }
LAB_0107fa20:
  FUN_0107b310(lVar23,0x5f,8,1);
  lVar23 = *plVar35;
  lVar28 = *(long *)(*(long *)(lVar23 + 0x78) + 0x1c8);
  iVar15 = 0;
  if (lVar28 != 0) {
    iVar15 = *(int *)(lVar28 + 0xc);
  }
  lVar28 = *(long *)(*(long *)(lVar23 + 0x78) + 0x1b0);
  iVar16 = 0;
  if (lVar28 != 0) {
    iVar16 = *(int *)(lVar28 + 0xc);
  }
  uVar14 = (uint)(iVar16 * iVar15) >> 0xc;
  if (0x800 < (iVar16 * iVar15 & 0xfffU)) {
    uVar14 = uVar14 + 1;
  }
LAB_0107fa64:
  FUN_0107b310(lVar23,0x60,8,1);
  lVar23 = *plVar35;
  lVar28 = *(long *)(lVar23 + 0x58);
  if (*(uint *)(lVar28 + 0x408) == 0) {
    uVar32 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar28 + (ulong)*(uint *)(lVar28 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar28 + 0x408) = *(int *)(lVar28 + 0x408) + -1;
    lVar28 = *(long *)(lVar23 + 0x58);
    uVar32 = (ulong)*(uint *)(lVar28 + 0x408);
  }
  *(undefined8 *)(lVar23 + 0x78) = *(undefined8 *)(lVar28 + uVar32 * 0x20 + 8);
  lVar23 = *(long *)(lVar23 + 0x38);
  uVar21 = *(uint *)(lVar23 + 0xc08);
  if (uVar21 != 0) {
    if ((uVar21 & 0xffff) < 0x60) {
      uVar32 = (ulong)uVar21 & 0xffff;
      plVar35 = (long *)(lVar23 + uVar32 * 0x20 + 8);
      do {
        uVar32 = uVar32 + 1;
        if (*(short *)(*plVar35 + 8) == 0) break;
        *(undefined2 *)(*plVar35 + 8) = 0;
        plVar35 = plVar35 + 4;
      } while (((uint)uVar32 & 0xffff) != 0x60);
      uVar21 = *(uint *)(lVar23 + 0xc08);
    }
    *(uint *)(lVar23 + 0xc08) = uVar21 - 1;
    *(undefined2 *)(*(long *)(lVar23 + (ulong)(uVar21 - 1) * 0x20 + 8) + 8) = 0;
    uVar32 = (ulong)*(uint *)(lVar23 + 0xc08);
    do {
      if (uVar32 == 0) goto LAB_0107fb50;
      uVar32 = uVar32 - 1;
      *(int *)(lVar23 + 0xc08) = (int)uVar32;
    } while (*(short *)(*(long *)(lVar23 + (uVar32 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar23 + 0xc08) = (int)uVar32 + 1;
  }
LAB_0107fb50:
  if (uVar14 == 0 && iVar37 == 0) {
    uVar14 = 1;
  }
  *param_11 = (short)uVar14;
  return iVar36 != 0 || iVar37 != 0;
}


