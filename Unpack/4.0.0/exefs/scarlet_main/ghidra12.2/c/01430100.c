/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01430100; name: FUN_01430100
 */


undefined4
FUN_01430100(long param_1,long *param_2,long *param_3,byte param_4,byte param_5,uint param_6)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  undefined1 local_60 [16];
  
  uVar6 = 0x50;
  if ((param_6 & 1) != 0) {
    uVar6 = 0x51;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar7 + 0x38);
  uVar9 = *(uint *)(lVar11 + 0xc08);
  if (uVar9 < 0x60) {
    do {
      lVar13 = *(long *)(lVar11 + (ulong)uVar9 * 0x20 + 8);
      if (*(short *)(lVar13 + 8) == 0) {
        if (uVar9 < 0x5f) {
          *(undefined2 *)(lVar13 + 8) = 1;
          *(int *)(lVar11 + 0xc08) = *(int *)(lVar11 + 0xc08) + 1;
        }
        break;
      }
      uVar9 = uVar9 + 1;
      *(uint *)(lVar11 + 0xc08) = uVar9;
    } while (uVar9 != 0x60);
  }
  lVar11 = *(long *)(lVar7 + 0x58);
  uVar9 = *(uint *)(lVar11 + 0x408);
  if (uVar9 < 0x1f) {
    *(uint *)(lVar11 + 0x408) = uVar9 + 1;
    lVar11 = *(long *)(lVar7 + 0x58);
    uVar9 = *(uint *)(lVar11 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(lVar11 + (ulong)uVar9 * 0x20 + 8);
  lVar11 = *(long *)(param_1 + 0x10);
  uVar4 = (**(code **)(*param_2 + 0x98))();
  lVar7 = *(long *)(lVar11 + 0x38);
  uVar9 = *(uint *)(lVar7 + 0xc08);
  uVar15 = (ulong)uVar9;
  if (uVar9 < 0x61) {
    uVar9 = 0x60;
  }
  plVar12 = (long *)(lVar7 + uVar15 * 0x20 + 8);
  do {
    uVar8 = uVar15;
    if (uVar9 == uVar8) goto LAB_01430254;
    lVar13 = *plVar12;
    if (*(short *)(lVar13 + 8) == 0) goto LAB_01430224;
    plVar12 = plVar12 + 4;
    uVar15 = uVar8 + 1;
  } while (*(short *)(lVar13 + 8) != 3);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_01430224:
    lVar7 = *(long *)(lVar7 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 3;
      *(undefined4 *)(lVar7 + 0xc) = uVar4;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x20) = lVar7;
    }
  }
LAB_01430254:
  lVar11 = *(long *)(param_1 + 0x10);
  uVar4 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar7 = *(long *)(lVar11 + 0x38);
  uVar9 = *(uint *)(lVar7 + 0xc08);
  uVar15 = (ulong)uVar9;
  if (uVar9 < 0x61) {
    uVar9 = 0x60;
  }
  plVar12 = (long *)(lVar7 + uVar15 * 0x20 + 8);
  do {
    uVar8 = uVar15;
    if (uVar9 == uVar8) goto LAB_014302e4;
    lVar13 = *plVar12;
    if (*(short *)(lVar13 + 8) == 0) goto LAB_014302b8;
    plVar12 = plVar12 + 4;
    uVar15 = uVar8 + 1;
  } while (*(short *)(lVar13 + 8) != 4);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_014302b8:
    lVar7 = *(long *)(lVar7 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 4;
      *(undefined4 *)(lVar7 + 0xc) = uVar4;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x28) = lVar7;
    }
  }
LAB_014302e4:
  lVar7 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar7 + 0x38);
  uVar5 = *(uint *)(lVar11 + 0xc08);
  uVar15 = (ulong)uVar5;
  uVar9 = uVar5;
  if (uVar5 < 0x61) {
    uVar9 = 0x60;
  }
  uVar8 = uVar15 << 5 | 8;
  lVar13 = -1;
  do {
    lVar14 = lVar13;
    if ((uVar15 - uVar9) + lVar14 == -1) goto LAB_01430388;
    sVar3 = *(short *)(*(long *)(lVar11 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_01430348;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar3 != 0x15);
  if (uVar5 + (int)(lVar14 + 1) < 0x60) {
LAB_01430348:
    lVar13 = *(long *)(lVar11 + (ulong)(uVar5 + (int)lVar14 + 1) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x15;
      *(uint *)(lVar13 + 0xc) = (uint)param_5;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0xb0) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar7 + 0x38);
      uVar15 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_01430388:
  uVar5 = (uint)uVar15;
  uVar9 = uVar5;
  if (uVar5 < 0x61) {
    uVar9 = 0x60;
  }
  uVar8 = uVar15 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if ((uVar15 - uVar9) + lVar14 == 0) goto LAB_0143041c;
    sVar3 = *(short *)(*(long *)(lVar11 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_014303e0;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar3 != 0x16);
  if ((uVar5 + (int)(lVar14 + 1)) - 1 < 0x60) {
LAB_014303e0:
    lVar13 = *(long *)(lVar11 + (ulong)(uVar5 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x16;
      *(uint *)(lVar13 + 0xc) = (uint)param_4;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0xb8) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar7 + 0x38);
      uVar15 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_0143041c:
  uVar5 = (uint)uVar15;
  uVar9 = uVar5;
  if (uVar5 < 0x61) {
    uVar9 = 0x60;
  }
  uVar8 = uVar15 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if ((uVar15 - uVar9) + lVar14 == 0) goto LAB_014304b0;
    sVar3 = *(short *)(*(long *)(lVar11 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_01430470;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar3 != 0x52);
  if ((uVar5 + (int)(lVar14 + 1)) - 1 < 0x60) {
LAB_01430470:
    lVar13 = *(long *)(lVar11 + (ulong)(uVar5 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x52;
      *(undefined8 *)(lVar13 + 0xc) = 0;
      *(undefined8 *)(lVar13 + 0x14) = 0;
      *(undefined4 *)(lVar13 + 0x1c) = 0;
      *(undefined1 *)(lVar13 + 10) = 1;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x298) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar7 + 0x38);
      uVar15 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_014304b0:
  uVar5 = (uint)uVar15;
  uVar9 = uVar5;
  if (uVar5 < 0x61) {
    uVar9 = 0x60;
  }
  uVar8 = uVar15 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if ((uVar15 - uVar9) + lVar14 == 0) goto LAB_01430544;
    sVar3 = *(short *)(*(long *)(lVar11 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_01430504;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar3 != 0x53);
  if ((uVar5 + (int)(lVar14 + 1)) - 1 < 0x60) {
LAB_01430504:
    lVar13 = *(long *)(lVar11 + (ulong)(uVar5 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x53;
      *(undefined8 *)(lVar13 + 0xc) = 0;
      *(undefined8 *)(lVar13 + 0x14) = 0;
      *(undefined4 *)(lVar13 + 0x1c) = 0;
      *(undefined1 *)(lVar13 + 10) = 1;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x2a0) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar7 + 0x38);
      uVar15 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_01430544:
  uVar5 = (uint)uVar15;
  uVar9 = uVar5;
  if (uVar5 < 0x61) {
    uVar9 = 0x60;
  }
  uVar8 = uVar15 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if ((uVar15 - uVar9) + lVar14 == 0) goto LAB_014305d8;
    sVar3 = *(short *)(*(long *)(lVar11 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_01430598;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar3 != 0x3d);
  if ((uVar5 + (int)(lVar14 + 1)) - 1 < 0x60) {
LAB_01430598:
    lVar13 = *(long *)(lVar11 + (ulong)(uVar5 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x3d;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(undefined4 *)(lVar13 + 0xc) = 0xe;
      *(undefined1 *)(lVar13 + 10) = 1;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x1f0) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar7 + 0x38);
      uVar15 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_014305d8:
  uVar9 = (uint)uVar15;
  if (uVar9 < 0x61) {
    uVar9 = 0x60;
  }
  plVar12 = (long *)(lVar11 + uVar15 * 0x20 + 8);
  do {
    uVar8 = uVar15;
    if (uVar9 == uVar8) goto LAB_01430654;
    lVar13 = *plVar12;
    if (*(short *)(lVar13 + 8) == 0) goto LAB_01430620;
    plVar12 = plVar12 + 4;
    uVar15 = uVar8 + 1;
  } while (*(short *)(lVar13 + 8) != 0x17);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_01430620:
    lVar11 = *(long *)(lVar11 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x17;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(undefined4 *)(lVar11 + 0xc) = 0x12;
      *(undefined1 *)(lVar11 + 10) = 1;
      *(long *)(*(long *)(lVar7 + 0x78) + 0xc0) = lVar11;
    }
  }
LAB_01430654:
  uVar15 = (**(code **)(*param_3 + 0x220))(param_3,0x11);
  if ((uVar15 & 1) != 0) {
    local_60 = (**(code **)(*param_3 + 0x240))(param_3,0x11);
    uVar5 = FUN_0107ffe0(local_60);
    lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0xb0);
    uVar9 = 0;
    if (lVar7 != 0) {
      uVar9 = *(uint *)(lVar7 + 0xc);
    }
    if ((uVar5 & 0xff) == (uVar9 & 0xff)) {
      uVar15 = FUN_0124bd20(local_60);
      uVar4 = 0x52;
      if ((uVar15 & 1) != 0) {
        uVar4 = 0x53;
      }
      FUN_016fa4dc(*(undefined8 *)(param_1 + 0x10),uVar4,1);
    }
  }
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0xb8);
  uVar9 = 0;
  if (lVar7 != 0) {
    uVar9 = *(uint *)(lVar7 + 0xc);
  }
  uVar15 = (**(code **)(*param_3 + 0x220))(param_3,0x15);
  if (((uVar9 & 0xff) == 4) && ((uVar15 & 1) != 0)) {
    FUN_016fa4dc(*(undefined8 *)(param_1 + 0x10),0x52,1);
  }
  uVar15 = (**(code **)(*param_3 + 0x220))(param_3,0x20);
  if (((uVar9 & 0xff) == 4) && ((uVar15 & 1) != 0)) {
    FUN_016fa4dc(*(undefined8 *)(param_1 + 0x10),0x52,1);
  }
  FUN_0107b310(*(undefined8 *)(param_1 + 0x10),uVar6,8,1);
  lVar11 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar11 + 0x78);
  if (*(long *)(lVar7 + 0x298) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(*(long *)(lVar7 + 0x298) + 0xc);
  }
  if (*(long *)(lVar7 + 0x2a0) == 0) {
    iVar17 = 0;
  }
  else {
    iVar17 = *(int *)(*(long *)(lVar7 + 0x2a0) + 0xc);
  }
  if (*(long *)(lVar7 + 0xc0) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (uint)*(byte *)(*(long *)(lVar7 + 0xc0) + 0xc);
  }
  if (*(long *)(lVar7 + 0x1f0) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(*(long *)(lVar7 + 0x1f0) + 0xc);
  }
  uVar15 = (ulong)uVar5;
  lVar7 = *(long *)(lVar11 + 0x58);
  if (*(uint *)(lVar7 + 0x408) == 0) {
    uVar8 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar7 + (ulong)*(uint *)(lVar7 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar7 + 0x408) = *(int *)(lVar7 + 0x408) + -1;
    lVar7 = *(long *)(lVar11 + 0x58);
    uVar8 = (ulong)*(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)(lVar7 + uVar8 * 0x20 + 8);
  lVar7 = *(long *)(lVar11 + 0x38);
  uVar10 = *(uint *)(lVar7 + 0xc08);
  if (uVar10 != 0) {
    if ((uVar10 & 0xffff) < 0x60) {
      uVar8 = (ulong)uVar10 & 0xffff;
      plVar12 = (long *)(lVar7 + uVar8 * 0x20 + 8);
      do {
        uVar8 = uVar8 + 1;
        if (*(short *)(*plVar12 + 8) == 0) break;
        *(undefined2 *)(*plVar12 + 8) = 0;
        plVar12 = plVar12 + 4;
      } while (((uint)uVar8 & 0xffff) != 0x60);
      uVar10 = *(uint *)(lVar7 + 0xc08);
    }
    *(uint *)(lVar7 + 0xc08) = uVar10 - 1;
    *(undefined2 *)(*(long *)(lVar7 + (ulong)(uVar10 - 1) * 0x20 + 8) + 8) = 0;
    uVar8 = (ulong)*(uint *)(lVar7 + 0xc08);
    do {
      if (uVar8 == 0) goto LAB_014307e8;
      uVar8 = uVar8 - 1;
      *(int *)(lVar7 + 0xc08) = (int)uVar8;
    } while (*(short *)(*(long *)(lVar7 + (uVar8 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar7 + 0xc08) = (int)uVar8 + 1;
  }
LAB_014307e8:
  if (iVar17 == 0) {
    if ((((uVar5 & 0xff) == 0xe) && (uVar15 = 7, param_4 != 0x12)) && (param_5 != 0x12)) {
      bVar1 = (&DAT_03d6286c)[(ulong)param_5 + (ulong)param_4 * 0x12];
      uVar15 = (ulong)bVar1;
      if (bVar1 == 4) {
        uVar15 = 7;
      }
      else if (bVar1 == 2) {
        uVar15 = 6;
      }
      else if ((bVar1 != 8) && (bVar1 != 0)) {
        uVar15 = 0;
      }
    }
    if (uVar9 != 0x12) {
      if ((param_5 == 0x12) ||
         (cVar2 = (&DAT_03d6286c)[(ulong)param_5 + (ulong)uVar9 * 0x12], cVar2 == '\x04')) {
        bVar1 = 1;
        lVar7 = 7;
      }
      else if (cVar2 == '\x02') {
        bVar1 = 1;
        lVar7 = 6;
      }
      else if (cVar2 == '\b') {
        bVar1 = 1;
        lVar7 = 8;
      }
      else {
        bVar1 = 0;
        lVar7 = 0;
      }
      uVar9 = (uint)((&DAT_03d629b0)[lVar7] * (&DAT_03d629b0)[uVar15 & 0xff]) >> 6;
      if (0xfff < uVar9) {
        uVar9 = 0x1000;
      }
      uVar5 = 0xffffffff;
      if ((bool)(bVar1 & ((uVar15 & 0xff) != 0 && uVar9 == 0))) {
        uVar9 = 1;
      }
      do {
        uVar10 = uVar5;
        if (uVar10 == 0x1f) {
          uVar15 = 0;
          goto LAB_01430844;
        }
        uVar5 = uVar10 + 1;
      } while ((uVar9 >> (ulong)(uVar5 & 0x1f) & 1) == 0);
      if (uVar5 < 0xc) {
        uVar15 = (ulong)(uVar10 + 2);
      }
      else {
        uVar15 = 0xd;
      }
    }
LAB_01430844:
    uVar6 = (undefined4)uVar15;
    if ((uVar15 & 0xff) == 0 && iVar16 != 0) {
      uVar6 = 7;
    }
  }
  else {
    uVar6 = 7;
  }
  return uVar6;
}


