/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01634c4c; name: FUN_01634c4c
 */


bool FUN_01634c4c(long param_1,long *param_2,undefined4 param_3)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar5 + 0x38);
  uVar6 = *(uint *)(lVar9 + 0xc08);
  if (uVar6 < 0x60) {
    do {
      lVar14 = *(long *)(lVar9 + (ulong)uVar6 * 0x20 + 8);
      if (*(short *)(lVar14 + 8) == 0) {
        if (uVar6 < 0x5f) {
          *(undefined2 *)(lVar14 + 8) = 1;
          *(int *)(lVar9 + 0xc08) = *(int *)(lVar9 + 0xc08) + 1;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      *(uint *)(lVar9 + 0xc08) = uVar6;
    } while (uVar6 != 0x60);
  }
  lVar9 = *(long *)(lVar5 + 0x58);
  uVar6 = *(uint *)(lVar9 + 0x408);
  if (uVar6 < 0x1f) {
    *(uint *)(lVar9 + 0x408) = uVar6 + 1;
    lVar9 = *(long *)(lVar5 + 0x58);
    uVar6 = *(uint *)(lVar9 + 0x408);
  }
  *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar9 + (ulong)uVar6 * 0x20 + 8);
  lVar9 = *(long *)(param_1 + 0x10);
  uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar5 = *(long *)(lVar9 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar15 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar12 = (long *)(lVar5 + uVar15 * 0x20 + 8);
  do {
    uVar10 = uVar15;
    if (uVar6 == uVar10) goto LAB_01634d80;
    lVar14 = *plVar12;
    if (*(short *)(lVar14 + 8) == 0) goto LAB_01634d54;
    plVar12 = plVar12 + 4;
    uVar15 = uVar10 + 1;
  } while (*(short *)(lVar14 + 8) != 4);
  if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_01634d54:
    lVar5 = *(long *)(lVar5 + (uVar10 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 4;
      *(undefined4 *)(lVar5 + 0xc) = uVar4;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x78) + 0x28) = lVar5;
    }
  }
LAB_01634d80:
  lVar5 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar5 + 0x38);
  uVar7 = *(uint *)(lVar9 + 0xc08);
  uVar15 = (ulong)uVar7;
  uVar6 = uVar7;
  if (uVar7 < 0x61) {
    uVar6 = 0x60;
  }
  uVar10 = uVar15 << 5 | 8;
  lVar14 = -1;
  do {
    lVar16 = lVar14;
    if ((uVar15 - uVar6) + lVar16 == -1) goto LAB_01634e1c;
    sVar1 = *(short *)(*(long *)(lVar9 + uVar10) + 8);
    if (sVar1 == 0) goto LAB_01634de0;
    uVar10 = uVar10 + 0x20;
    lVar14 = lVar16 + 1;
  } while (sVar1 != 0x29);
  if (uVar7 + (int)(lVar16 + 1) < 0x60) {
LAB_01634de0:
    lVar14 = *(long *)(lVar9 + (ulong)(uVar7 + (int)lVar16 + 1) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x29;
      *(undefined4 *)(lVar14 + 0xc) = param_3;
      *(undefined1 *)(lVar14 + 10) = 0;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x150) = lVar14;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar5 + 0x38);
      uVar15 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_01634e1c:
  uVar6 = (uint)uVar15;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar12 = (long *)(lVar9 + uVar15 * 0x20 + 8);
  do {
    uVar10 = uVar15;
    if (uVar6 == uVar10) goto LAB_01634e9c;
    lVar14 = *plVar12;
    if (*(short *)(lVar14 + 8) == 0) goto LAB_01634e64;
    plVar12 = plVar12 + 4;
    uVar15 = uVar10 + 1;
  } while (*(short *)(lVar14 + 8) != 0x48);
  if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_01634e64:
    lVar9 = *(long *)(lVar9 + (uVar10 & 0xffffffff) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x48;
      *(undefined8 *)(lVar9 + 0xc) = 0;
      *(undefined8 *)(lVar9 + 0x14) = 0;
      *(undefined4 *)(lVar9 + 0x1c) = 0;
      *(undefined1 *)(lVar9 + 10) = 1;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x248) = lVar9;
      lVar5 = *(long *)(param_1 + 0x10);
    }
  }
LAB_01634e9c:
  FUN_0107b310(lVar5,0x8d,8,1);
  lVar9 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(*(long *)(lVar9 + 0x78) + 0x150);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(lVar5 + 0xc);
  }
  lVar5 = *(long *)(*(long *)(lVar9 + 0x78) + 0x248);
  if (lVar5 == 0) {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(lVar5 + 0xc) == 0;
  }
  lVar5 = *(long *)(lVar9 + 0x58);
  if (*(uint *)(lVar5 + 0x408) == 0) {
    uVar15 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar5 + 0x408) = *(int *)(lVar5 + 0x408) + -1;
    lVar5 = *(long *)(lVar9 + 0x58);
    uVar15 = (ulong)*(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar9 + 0x78) = *(undefined8 *)(lVar5 + uVar15 * 0x20 + 8);
  lVar5 = *(long *)(lVar9 + 0x38);
  uVar7 = *(uint *)(lVar5 + 0xc08);
  if (uVar7 != 0) {
    if ((uVar7 & 0xffff) < 0x60) {
      uVar15 = (ulong)uVar7 & 0xffff;
      plVar12 = (long *)(lVar5 + uVar15 * 0x20 + 8);
      do {
        uVar15 = uVar15 + 1;
        if (*(short *)(*plVar12 + 8) == 0) break;
        *(undefined2 *)(*plVar12 + 8) = 0;
        plVar12 = plVar12 + 4;
      } while (((uint)uVar15 & 0xffff) != 0x60);
      uVar7 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar7 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar7 - 1) * 0x20 + 8) + 8) = 0;
    uVar15 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar15 == 0) goto LAB_01634fac;
      uVar15 = uVar15 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar15;
    } while (*(short *)(*(long *)(lVar5 + (uVar15 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar15 + 1;
  }
LAB_01634fac:
  bVar3 = false;
  if (((bVar2) && (uVar6 != 0)) &&
     (((uint)*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x498) >> 0x15 & 1) == 0)) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
    *(long *)(lVar5 + 0x20) = *(long *)(lVar5 + 0x20) + 1;
    uVar15 = *(ulong *)(lVar5 + 8);
    uVar13 = uVar15 ^ *(ulong *)(lVar5 + 0x10);
    uVar10 = uVar13 >> 0x1b | uVar13 << 0x25;
    uVar13 = uVar13 ^ (uVar15 >> 0x28 | uVar15 << 0x18) ^ uVar13 << 0x10;
    uVar7 = (int)uVar15 + (int)*(ulong *)(lVar5 + 0x10);
    while (99 < (uVar7 & 0x7f)) {
      uVar15 = uVar13 ^ uVar10;
      iVar8 = (int)uVar10;
      iVar11 = (int)uVar13;
      uVar10 = uVar15 >> 0x1b | uVar15 << 0x25;
      uVar13 = uVar15 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar15 << 0x10;
      uVar7 = iVar11 + iVar8;
    }
    bVar3 = (uVar7 & 0x7f) < uVar6;
    *(ulong *)(lVar5 + 8) = uVar13;
    *(ulong *)(lVar5 + 0x10) = uVar10;
  }
  return bVar3;
}


