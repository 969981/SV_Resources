/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0183e018; name: FUN_0183e018
 */


int FUN_0183e018(long param_1,long *param_2,ushort *param_3,int param_4,undefined1 *param_5)

{
  int iVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar6 + 0x38);
  uVar7 = *(uint *)(lVar9 + 0xc08);
  if (uVar7 < 0x60) {
    do {
      lVar12 = *(long *)(lVar9 + (ulong)uVar7 * 0x20 + 8);
      if (*(short *)(lVar12 + 8) == 0) {
        if (uVar7 < 0x5f) {
          *(undefined2 *)(lVar12 + 8) = 1;
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
  uVar4 = (**(code **)(*param_2 + 0x98))();
  lVar6 = *(long *)(lVar9 + 0x38);
  uVar7 = *(uint *)(lVar6 + 0xc08);
  uVar14 = (ulong)uVar7;
  if (uVar7 < 0x61) {
    uVar7 = 0x60;
  }
  plVar11 = (long *)(lVar6 + uVar14 * 0x20 + 8);
  do {
    uVar13 = uVar14;
    if (uVar7 == uVar13) goto LAB_0183e158;
    lVar12 = *plVar11;
    if (*(short *)(lVar12 + 8) == 0) goto LAB_0183e128;
    plVar11 = plVar11 + 4;
    uVar14 = uVar13 + 1;
  } while (*(short *)(lVar12 + 8) != 3);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_0183e128:
    lVar6 = *(long *)(lVar6 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 3;
      *(undefined4 *)(lVar6 + 0xc) = uVar4;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x78) + 0x20) = lVar6;
    }
  }
LAB_0183e158:
  lVar6 = *(long *)(param_1 + 0x10);
  uVar3 = param_3[4];
  lVar9 = *(long *)(lVar6 + 0x38);
  uVar8 = *(uint *)(lVar9 + 0xc08);
  uVar14 = (ulong)uVar8;
  uVar7 = uVar8;
  if (uVar8 < 0x61) {
    uVar7 = 0x60;
  }
  uVar13 = uVar14 << 5 | 8;
  lVar12 = -1;
  do {
    lVar10 = lVar12;
    if ((uVar14 - uVar7) + lVar10 == -1) goto LAB_0183e1fc;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar13) + 8);
    if (sVar2 == 0) goto LAB_0183e1bc;
    uVar13 = uVar13 + 0x20;
    lVar12 = lVar10 + 1;
  } while (sVar2 != 0x16);
  if (uVar8 + (int)(lVar10 + 1) < 0x60) {
LAB_0183e1bc:
    lVar12 = *(long *)(lVar9 + (ulong)(uVar8 + (int)lVar10 + 1) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x16;
      *(uint *)(lVar12 + 0xc) = (uint)(byte)uVar3;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0xb8) = lVar12;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar6 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_0183e1fc:
  uVar3 = *param_3;
  uVar8 = (uint)uVar14;
  uVar7 = uVar8;
  if (uVar8 < 0x61) {
    uVar7 = 0x60;
  }
  uVar13 = uVar14 << 5 | 8;
  lVar12 = 0;
  do {
    lVar10 = lVar12;
    if ((uVar14 - uVar7) + lVar10 == 0) goto LAB_0183e290;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar13) + 8);
    if (sVar2 == 0) goto LAB_0183e254;
    uVar13 = uVar13 + 0x20;
    lVar12 = lVar10 + 1;
  } while (sVar2 != 0x12);
  if ((uVar8 + (int)(lVar10 + 1)) - 1 < 0x60) {
LAB_0183e254:
    lVar12 = *(long *)(lVar9 + (ulong)(uVar8 + (int)lVar10) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x12;
      *(uint *)(lVar12 + 0xc) = (uint)uVar3;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x98) = lVar12;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar6 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_0183e290:
  uVar8 = (uint)uVar14;
  uVar7 = uVar8;
  if (uVar8 < 0x61) {
    uVar7 = 0x60;
  }
  uVar13 = uVar14 << 5 | 8;
  lVar12 = 0;
  do {
    lVar10 = lVar12;
    if ((uVar14 - uVar7) + lVar10 == 0) goto LAB_0183e320;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar13) + 8);
    if (sVar2 == 0) goto LAB_0183e2e4;
    uVar13 = uVar13 + 0x20;
    lVar12 = lVar10 + 1;
  } while (sVar2 != 0x62);
  if ((uVar8 + (int)(lVar10 + 1)) - 1 < 0x60) {
LAB_0183e2e4:
    lVar12 = *(long *)(lVar9 + (ulong)(uVar8 + (int)lVar10) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x62;
      *(undefined1 *)(lVar12 + 10) = 0;
      *(undefined8 *)(lVar12 + 0xc) = 0;
      *(undefined8 *)(lVar12 + 0x14) = 0;
      *(undefined4 *)(lVar12 + 0x1c) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x318) = lVar12;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar6 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_0183e320:
  uVar8 = (uint)uVar14;
  uVar7 = uVar8;
  if (uVar8 < 0x61) {
    uVar7 = 0x60;
  }
  uVar13 = uVar14 << 5 | 8;
  lVar12 = 0;
  do {
    lVar10 = lVar12;
    if ((uVar14 - uVar7) + lVar10 == 0) goto LAB_0183e3b0;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar13) + 8);
    if (sVar2 == 0) goto LAB_0183e374;
    uVar13 = uVar13 + 0x20;
    lVar12 = lVar10 + 1;
  } while (sVar2 != 0x61);
  if ((uVar8 + (int)(lVar10 + 1)) - 1 < 0x60) {
LAB_0183e374:
    lVar12 = *(long *)(lVar9 + (ulong)(uVar8 + (int)lVar10) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x61;
      *(undefined1 *)(lVar12 + 10) = 0;
      *(undefined8 *)(lVar12 + 0xc) = 0;
      *(undefined8 *)(lVar12 + 0x14) = 0;
      *(undefined4 *)(lVar12 + 0x1c) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x310) = lVar12;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar6 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_0183e3b0:
  uVar7 = (uint)uVar14;
  if (uVar7 < 0x61) {
    uVar7 = 0x60;
  }
  plVar11 = (long *)(lVar9 + uVar14 * 0x20 + 8);
  do {
    uVar13 = uVar14;
    if (uVar7 == uVar13) goto LAB_0183e428;
    lVar12 = *plVar11;
    if (*(short *)(lVar12 + 8) == 0) goto LAB_0183e3f8;
    plVar11 = plVar11 + 4;
    uVar14 = uVar13 + 1;
  } while (*(short *)(lVar12 + 8) != 4);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_0183e3f8:
    lVar9 = *(long *)(lVar9 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 4;
      *(int *)(lVar9 + 0xc) = param_4;
      *(undefined1 *)(lVar9 + 10) = 0;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x28) = lVar9;
      lVar6 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0183e428:
  FUN_0107b310(lVar6,0x30,8,1);
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x78);
  lVar9 = *(long *)(lVar6 + 0x28);
  if (lVar9 == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = *(int *)(lVar9 + 0xc);
  }
  lVar6 = *(long *)(lVar6 + 0x318);
  uVar5 = 0;
  if (lVar6 != 0) {
    uVar5 = (undefined1)*(undefined4 *)(lVar6 + 0xc);
  }
  *param_5 = uVar5;
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
      plVar11 = (long *)(lVar6 + uVar14 * 0x20 + 8);
      do {
        uVar14 = uVar14 + 1;
        if (*(short *)(*plVar11 + 8) == 0) break;
        *(undefined2 *)(*plVar11 + 8) = 0;
        plVar11 = plVar11 + 4;
      } while (((uint)uVar14 & 0xffff) != 0x60);
      uVar7 = *(uint *)(lVar6 + 0xc08);
    }
    *(uint *)(lVar6 + 0xc08) = uVar7 - 1;
    *(undefined2 *)(*(long *)(lVar6 + (ulong)(uVar7 - 1) * 0x20 + 8) + 8) = 0;
    uVar14 = (ulong)*(uint *)(lVar6 + 0xc08);
    do {
      if (uVar14 == 0) goto LAB_0183e538;
      uVar14 = uVar14 - 1;
      *(int *)(lVar6 + 0xc08) = (int)uVar14;
    } while (*(short *)(*(long *)(lVar6 + (uVar14 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar6 + 0xc08) = (int)uVar14 + 1;
  }
LAB_0183e538:
  iVar1 = 0;
  if (iVar15 != param_4) {
    iVar1 = iVar15;
  }
  return iVar1;
}


