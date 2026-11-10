/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bbcb40; name: FUN_00bbcb40
 */


int FUN_00bbcb40(long param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 3) == 0) {
    iVar7 = 0;
  }
  else {
    if ((uVar3 & 1) == 0) {
      iVar7 = 0;
    }
    else {
      bVar2 = **(byte **)(param_1 + 0x18);
      uVar4 = (uint)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar4 = *(uint *)(*(byte **)(param_1 + 0x18) + 8);
      }
      if (uVar4 < 0x80) {
        iVar7 = 1;
      }
      else if (uVar4 < 0x4000) {
        iVar7 = 2;
      }
      else if (uVar4 < 0x200000) {
        iVar7 = 3;
      }
      else {
        iVar7 = 4;
        if (uVar4 >> 0x1c != 0) {
          iVar7 = 5;
        }
      }
      iVar7 = uVar4 + iVar7 + 1;
    }
    if ((uVar3 >> 1 & 1) != 0) {
      bVar2 = **(byte **)(param_1 + 0x20);
      uVar4 = (uint)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar4 = *(uint *)(*(byte **)(param_1 + 0x20) + 8);
      }
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else if (uVar4 < 0x4000) {
        iVar5 = 2;
      }
      else if (uVar4 < 0x200000) {
        iVar5 = 3;
      }
      else {
        iVar5 = 4;
        if (uVar4 >> 0x1c != 0) {
          iVar5 = 5;
        }
      }
      iVar7 = iVar7 + uVar4 + iVar5 + 1;
    }
  }
  if ((uVar3 & 0xe00) != 0) {
    if ((uVar3 >> 9 & 1) != 0) {
      uVar3 = FUN_00bd1600(*(undefined8 *)(param_1 + 0xc0));
      if (uVar3 < 0x80) {
        iVar5 = 1;
      }
      else if (uVar3 < 0x4000) {
        iVar5 = 2;
      }
      else if (uVar3 < 0x200000) {
        iVar5 = 3;
      }
      else {
        iVar5 = 4;
        if (uVar3 >> 0x1c != 0) {
          iVar5 = 5;
        }
      }
      iVar7 = iVar7 + uVar3 + iVar5 + 1;
      uVar3 = *(uint *)(param_1 + 0x10);
    }
    if ((uVar3 >> 10 & 1) != 0) {
      lVar13 = *(long *)(param_1 + 200);
      uVar3 = *(uint *)(lVar13 + 0x20);
      if (0 < (int)uVar3) {
        lVar14 = 0;
        do {
          uVar6 = FUN_00bde1e0(*(undefined8 *)(*(long *)(lVar13 + 0x28) + lVar14 * 8 + 8));
          iVar5 = 4;
          if ((uVar6 >> 0x1c & 0xf) != 0) {
            iVar5 = 5;
          }
          uVar4 = (uint)uVar6;
          iVar11 = 3;
          if (0x1fffff < uVar4) {
            iVar11 = iVar5;
          }
          iVar5 = 2;
          if (0x3fff < uVar4) {
            iVar5 = iVar11;
          }
          iVar11 = 1;
          if (0x7f < uVar4) {
            iVar11 = iVar5;
          }
          uVar3 = uVar4 + uVar3 + iVar11;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *(int *)(lVar13 + 0x20));
      }
      if ((*(ulong *)(lVar13 + 8) & 1) != 0) {
        iVar5 = FUN_00c0358c(*(ulong *)(lVar13 + 8) & 0xfffffffffffffffe);
        uVar3 = iVar5 + uVar3;
      }
      *(uint *)(lVar13 + 0x14) = uVar3;
      iVar5 = 4;
      if (uVar3 >> 0x1c != 0) {
        iVar5 = 5;
      }
      iVar11 = 3;
      if (0x1fffff < uVar3) {
        iVar11 = iVar5;
      }
      iVar5 = 2;
      if (0x3fff < uVar3) {
        iVar5 = iVar11;
      }
      iVar11 = 1;
      if (0x7f < uVar3) {
        iVar11 = iVar5;
      }
      iVar7 = iVar7 + uVar3 + iVar11 + 1;
      uVar3 = *(uint *)(param_1 + 0x10);
    }
    if ((uVar3 >> 0xb & 1) != 0) {
      bVar2 = **(byte **)(param_1 + 0xd0);
      uVar3 = (uint)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar3 = *(uint *)(*(byte **)(param_1 + 0xd0) + 8);
      }
      if (uVar3 < 0x80) {
        iVar5 = 1;
      }
      else if (uVar3 < 0x4000) {
        iVar5 = 2;
      }
      else if (uVar3 < 0x200000) {
        iVar5 = 3;
      }
      else {
        iVar5 = 4;
        if (uVar3 >> 0x1c != 0) {
          iVar5 = 5;
        }
      }
      iVar7 = iVar7 + uVar3 + iVar5 + 1;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  uVar6 = (ulong)uVar3;
  iVar7 = uVar3 + iVar7;
  if (0 < (int)uVar3) {
    puVar8 = *(undefined8 **)(param_1 + 0x38);
    do {
      puVar8 = puVar8 + 1;
      bVar2 = *(byte *)*puVar8;
      uVar3 = (uint)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar3 = *(uint *)((byte *)*puVar8 + 8);
      }
      iVar5 = 4;
      if (uVar3 >> 0x1c != 0) {
        iVar5 = 5;
      }
      iVar11 = 3;
      if (0x1fffff < uVar3) {
        iVar11 = iVar5;
      }
      iVar5 = 2;
      if (0x3fff < uVar3) {
        iVar5 = iVar11;
      }
      iVar11 = 1;
      if (0x7f < uVar3) {
        iVar11 = iVar5;
      }
      iVar7 = iVar7 + uVar3 + iVar11;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x40);
  uVar6 = (ulong)uVar3;
  if ((int)uVar3 < 1) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    puVar9 = (uint *)(*(long *)(param_1 + 0x48) + 8);
    do {
      uVar4 = *puVar9;
      if ((int)uVar4 < 0) {
        iVar11 = 10;
      }
      else if (uVar4 < 0x80) {
        iVar11 = 1;
      }
      else if (uVar4 < 0x4000) {
        iVar11 = 2;
      }
      else {
        iVar10 = 4;
        if (uVar4 >> 0x1c != 0) {
          iVar10 = 5;
        }
        iVar11 = 3;
        if (0x1fffff < uVar4) {
          iVar11 = iVar10;
        }
      }
      iVar5 = iVar11 + iVar5;
      uVar6 = uVar6 - 1;
      puVar9 = puVar9 + 1;
    } while (uVar6 != 0);
  }
  uVar4 = *(uint *)(param_1 + 0x50);
  uVar6 = (ulong)uVar4;
  if ((int)uVar4 < 1) {
    iVar11 = 0;
  }
  else {
    iVar11 = 0;
    puVar9 = (uint *)(*(long *)(param_1 + 0x58) + 8);
    do {
      uVar1 = *puVar9;
      if ((int)uVar1 < 0) {
        iVar10 = 10;
      }
      else if (uVar1 < 0x80) {
        iVar10 = 1;
      }
      else if (uVar1 < 0x4000) {
        iVar10 = 2;
      }
      else {
        iVar12 = 4;
        if (uVar1 >> 0x1c != 0) {
          iVar12 = 5;
        }
        iVar10 = 3;
        if (0x1fffff < uVar1) {
          iVar10 = iVar12;
        }
      }
      iVar11 = iVar10 + iVar11;
      uVar6 = uVar6 - 1;
      puVar9 = puVar9 + 1;
    } while (uVar6 != 0);
  }
  iVar7 = uVar3 + iVar7 + iVar5 + uVar4 + iVar11 + *(int *)(param_1 + 0x68);
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar13 = 0;
    do {
      uVar6 = FUN_00bc2808(*(undefined8 *)(*(long *)(param_1 + 0x70) + lVar13 * 8 + 8));
      iVar5 = 4;
      if ((uVar6 >> 0x1c & 0xf) != 0) {
        iVar5 = 5;
      }
      uVar3 = (uint)uVar6;
      iVar11 = 3;
      if (0x1fffff < uVar3) {
        iVar11 = iVar5;
      }
      iVar5 = 2;
      if (0x3fff < uVar3) {
        iVar5 = iVar11;
      }
      iVar11 = 1;
      if (0x7f < uVar3) {
        iVar11 = iVar5;
      }
      iVar7 = uVar3 + iVar7 + iVar11;
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x68));
  }
  iVar7 = *(int *)(param_1 + 0x80) + iVar7;
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar13 = 0;
    do {
      uVar6 = FUN_00bc91f0(*(undefined8 *)(*(long *)(param_1 + 0x88) + lVar13 * 8 + 8));
      iVar5 = 4;
      if ((uVar6 >> 0x1c & 0xf) != 0) {
        iVar5 = 5;
      }
      uVar3 = (uint)uVar6;
      iVar11 = 3;
      if (0x1fffff < uVar3) {
        iVar11 = iVar5;
      }
      iVar5 = 2;
      if (0x3fff < uVar3) {
        iVar5 = iVar11;
      }
      iVar11 = 1;
      if (0x7f < uVar3) {
        iVar11 = iVar5;
      }
      iVar7 = uVar3 + iVar7 + iVar11;
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x80));
  }
  iVar7 = *(int *)(param_1 + 0x98) + iVar7;
  if (0 < *(int *)(param_1 + 0x98)) {
    lVar13 = 0;
    do {
      uVar6 = FUN_00bcc82c(*(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar13 * 8 + 8));
      iVar5 = 4;
      if ((uVar6 >> 0x1c & 0xf) != 0) {
        iVar5 = 5;
      }
      uVar3 = (uint)uVar6;
      iVar11 = 3;
      if (0x1fffff < uVar3) {
        iVar11 = iVar5;
      }
      iVar5 = 2;
      if (0x3fff < uVar3) {
        iVar5 = iVar11;
      }
      iVar11 = 1;
      if (0x7f < uVar3) {
        iVar11 = iVar5;
      }
      iVar7 = uVar3 + iVar7 + iVar11;
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x98));
  }
  iVar7 = *(int *)(param_1 + 0xb0) + iVar7;
  if (0 < *(int *)(param_1 + 0xb0)) {
    lVar13 = 0;
    do {
      uVar6 = FUN_00bc5be8(*(undefined8 *)(*(long *)(param_1 + 0xb8) + lVar13 * 8 + 8));
      iVar5 = 4;
      if ((uVar6 >> 0x1c & 0xf) != 0) {
        iVar5 = 5;
      }
      uVar3 = (uint)uVar6;
      iVar11 = 3;
      if (0x1fffff < uVar3) {
        iVar11 = iVar5;
      }
      iVar5 = 2;
      if (0x3fff < uVar3) {
        iVar5 = iVar11;
      }
      iVar11 = 1;
      if (0x7f < uVar3) {
        iVar11 = iVar5;
      }
      iVar7 = uVar3 + iVar7 + iVar11;
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0xb0));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    iVar5 = FUN_00c0358c(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    iVar7 = iVar5 + iVar7;
  }
  *(int *)(param_1 + 0x14) = iVar7;
  return iVar7;
}


