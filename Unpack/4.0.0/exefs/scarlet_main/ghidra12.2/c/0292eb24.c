/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0292eb24; name: FUN_0292eb24
 */


uint FUN_0292eb24(long param_1,undefined4 param_2,long *param_3,long *param_4,ushort *param_5)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
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
  int iVar16;
  undefined *local_60;
  ushort local_58;
  
  local_58 = *param_5;
  local_60 = PTR_DAT_047ddad8 + 0x10;
  uVar4 = FUN_014b1f10(&local_60);
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
  uVar5 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar6 = *(long *)(lVar9 + 0x38);
  uVar7 = *(uint *)(lVar6 + 0xc08);
  uVar14 = (ulong)uVar7;
  if (uVar7 < 0x61) {
    uVar7 = 0x60;
  }
  plVar11 = (long *)(lVar6 + uVar14 * 0x20 + 8);
  do {
    uVar13 = uVar14;
    if (uVar7 == uVar13) goto LAB_0292ec94;
    lVar12 = *plVar11;
    if (*(short *)(lVar12 + 8) == 0) goto LAB_0292ec64;
    plVar11 = plVar11 + 4;
    uVar14 = uVar13 + 1;
  } while (*(short *)(lVar12 + 8) != 3);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_0292ec64:
    lVar6 = *(long *)(lVar6 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 3;
      *(undefined4 *)(lVar6 + 0xc) = uVar5;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x78) + 0x20) = lVar6;
    }
  }
LAB_0292ec94:
  lVar9 = *(long *)(param_1 + 0x10);
  uVar5 = (**(code **)(*param_4 + 0x98))(param_4);
  lVar6 = *(long *)(lVar9 + 0x38);
  uVar7 = *(uint *)(lVar6 + 0xc08);
  uVar14 = (ulong)uVar7;
  if (uVar7 < 0x61) {
    uVar7 = 0x60;
  }
  plVar11 = (long *)(lVar6 + uVar14 * 0x20 + 8);
  do {
    uVar13 = uVar14;
    if (uVar7 == uVar13) goto LAB_0292ed24;
    lVar12 = *plVar11;
    if (*(short *)(lVar12 + 8) == 0) goto LAB_0292ecf8;
    plVar11 = plVar11 + 4;
    uVar14 = uVar13 + 1;
  } while (*(short *)(lVar12 + 8) != 4);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_0292ecf8:
    lVar6 = *(long *)(lVar6 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 4;
      *(undefined4 *)(lVar6 + 0xc) = uVar5;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x78) + 0x28) = lVar6;
    }
  }
LAB_0292ed24:
  lVar6 = *(long *)(param_1 + 0x10);
  uVar2 = *param_5;
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
    if ((uVar14 - uVar7) + lVar10 == -1) goto LAB_0292edc8;
    sVar3 = *(short *)(*(long *)(lVar9 + uVar13) + 8);
    if (sVar3 == 0) goto LAB_0292ed88;
    uVar13 = uVar13 + 0x20;
    lVar12 = lVar10 + 1;
  } while (sVar3 != 0x12);
  if (uVar8 + (int)(lVar10 + 1) < 0x60) {
LAB_0292ed88:
    lVar12 = *(long *)(lVar9 + (ulong)(uVar8 + (int)lVar10 + 1) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x12;
      *(uint *)(lVar12 + 0xc) = (uint)uVar2;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x98) = lVar12;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar6 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_0292edc8:
  bVar1 = *(byte *)((long)param_5 + 9);
  uVar8 = (uint)uVar14;
  uVar7 = uVar8;
  if (uVar8 < 0x61) {
    uVar7 = 0x60;
  }
  uVar13 = uVar14 << 5 | 8;
  lVar12 = 0;
  do {
    lVar10 = lVar12;
    if ((uVar14 - uVar7) + lVar10 == 0) goto LAB_0292ee5c;
    sVar3 = *(short *)(*(long *)(lVar9 + uVar13) + 8);
    if (sVar3 == 0) goto LAB_0292ee20;
    uVar13 = uVar13 + 0x20;
    lVar12 = lVar10 + 1;
  } while (sVar3 != 0x1b);
  if ((uVar8 + (int)(lVar10 + 1)) - 1 < 0x60) {
LAB_0292ee20:
    lVar12 = *(long *)(lVar9 + (ulong)(uVar8 + (int)lVar10) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x1b;
      *(uint *)(lVar12 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0xe0) = lVar12;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar6 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_0292ee5c:
  uVar8 = (uint)uVar14;
  uVar7 = uVar8;
  if (uVar8 < 0x61) {
    uVar7 = 0x60;
  }
  uVar13 = uVar14 << 5 | 8;
  lVar12 = 0;
  do {
    lVar10 = lVar12;
    if ((uVar14 - uVar7) + lVar10 == 0) goto LAB_0292eeec;
    sVar3 = *(short *)(*(long *)(lVar9 + uVar13) + 8);
    if (sVar3 == 0) goto LAB_0292eeb0;
    uVar13 = uVar13 + 0x20;
    lVar12 = lVar10 + 1;
  } while (sVar3 != 0x2e);
  if ((uVar8 + (int)(lVar10 + 1)) - 1 < 0x60) {
LAB_0292eeb0:
    lVar12 = *(long *)(lVar9 + (ulong)(uVar8 + (int)lVar10) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x2e;
      *(uint *)(lVar12 + 0xc) = uVar4 & 0xffff;
      *(undefined1 *)(lVar12 + 10) = 1;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x178) = lVar12;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar6 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_0292eeec:
  uVar7 = (uint)uVar14;
  if (uVar7 < 0x61) {
    uVar7 = 0x60;
  }
  plVar11 = (long *)(lVar9 + uVar14 * 0x20 + 8);
  do {
    uVar13 = uVar14;
    if (uVar7 == uVar13) goto LAB_0292ef78;
    lVar12 = *plVar11;
    if (*(short *)(lVar12 + 8) == 0) goto LAB_0292ef34;
    plVar11 = plVar11 + 4;
    uVar14 = uVar13 + 1;
  } while (*(short *)(lVar12 + 8) != 0x38);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_0292ef34:
    lVar9 = *(long *)(lVar9 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x38;
      *(undefined8 *)(lVar9 + 0xc) = 0x19a00001000;
      *(undefined4 *)(lVar9 + 0x14) = 0x20000;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(undefined1 *)(lVar9 + 10) = 3;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x1c8) = lVar9;
      lVar6 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0292ef78:
  FUN_0107b310(lVar6,param_2,8,1);
  lVar9 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(*(long *)(lVar9 + 0x78) + 0x178);
  if (lVar6 == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = *(int *)(lVar6 + 0xc);
  }
  lVar6 = *(long *)(*(long *)(lVar9 + 0x78) + 0x1c8);
  if (lVar6 == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(lVar6 + 0xc);
  }
  lVar6 = *(long *)(lVar9 + 0x58);
  if (*(uint *)(lVar6 + 0x408) == 0) {
    uVar14 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar6 + (ulong)*(uint *)(lVar6 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar6 + 0x408) = *(int *)(lVar6 + 0x408) + -1;
    lVar6 = *(long *)(lVar9 + 0x58);
    uVar14 = (ulong)*(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar9 + 0x78) = *(undefined8 *)(lVar6 + uVar14 * 0x20 + 8);
  lVar6 = *(long *)(lVar9 + 0x38);
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
      if (uVar14 == 0) goto LAB_0292f080;
      uVar14 = uVar14 - 1;
      *(int *)(lVar6 + 0xc08) = (int)uVar14;
    } while (*(short *)(*(long *)(lVar6 + (uVar14 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar6 + 0xc08) = (int)uVar14 + 1;
  }
LAB_0292f080:
  uVar7 = (uint)(iVar16 * iVar15) >> 0xc;
  if (0x800 < (iVar16 * iVar15 & 0xfffU)) {
    uVar7 = uVar7 + 1;
  }
  return uVar7;
}


