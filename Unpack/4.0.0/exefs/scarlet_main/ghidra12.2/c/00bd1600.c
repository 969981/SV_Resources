/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bd1600; name: FUN_00bd1600
 */


int FUN_00bd1600(long param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  
  uVar3 = *(uint *)(param_1 + 0x30);
  if ((uVar3 & 0xff) == 0) {
    iVar5 = 0;
  }
  else {
    if ((uVar3 & 1) == 0) {
      iVar5 = 0;
    }
    else {
      bVar2 = **(byte **)(param_1 + 0x38);
      uVar1 = (uint)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = *(uint *)(*(byte **)(param_1 + 0x38) + 8);
      }
      if (uVar1 < 0x80) {
        iVar5 = 2;
      }
      else {
        if (uVar1 < 0x4000) {
          iVar5 = 2;
        }
        else {
          iVar9 = 4;
          if (uVar1 >> 0x1c != 0) {
            iVar9 = 5;
          }
          iVar5 = 3;
          if (0x1fffff < uVar1) {
            iVar5 = iVar9;
          }
        }
        iVar5 = iVar5 + 1;
      }
      iVar5 = iVar5 + uVar1;
    }
    if ((uVar3 >> 1 & 1) != 0) {
      bVar2 = **(byte **)(param_1 + 0x40);
      uVar1 = (uint)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = *(uint *)(*(byte **)(param_1 + 0x40) + 8);
      }
      iVar9 = 4;
      if (uVar1 >> 0x1c != 0) {
        iVar9 = 5;
      }
      iVar4 = 3;
      if (0x1fffff < uVar1) {
        iVar4 = iVar9;
      }
      iVar9 = 2;
      if (0x3fff < uVar1) {
        iVar9 = iVar4;
      }
      iVar4 = 1;
      if (0x7f < uVar1) {
        iVar4 = iVar9;
      }
      iVar5 = iVar5 + uVar1 + iVar4 + 1;
    }
    if ((uVar3 & 4) != 0) {
      iVar5 = iVar5 + 2;
    }
    if ((uVar3 & 8) != 0) {
      iVar5 = iVar5 + 3;
    }
    if ((uVar3 & 0x10) != 0) {
      iVar5 = iVar5 + 3;
    }
    if ((uVar3 >> 5 & 1) != 0) {
      uVar1 = *(uint *)(param_1 + 0x4c);
      if ((int)uVar1 < 0) {
        iVar9 = 0xb;
      }
      else if (uVar1 < 0x80) {
        iVar9 = 2;
      }
      else if (uVar1 < 0x4000) {
        iVar9 = 3;
      }
      else if (uVar1 < 0x200000) {
        iVar9 = 4;
      }
      else {
        iVar9 = 5;
        if (uVar1 >> 0x1c != 0) {
          iVar9 = 6;
        }
      }
      iVar5 = iVar9 + iVar5;
    }
    if ((uVar3 >> 6 & 1) != 0) {
      bVar2 = **(byte **)(param_1 + 0x50);
      uVar1 = (uint)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = *(uint *)(*(byte **)(param_1 + 0x50) + 8);
      }
      iVar9 = 4;
      if (uVar1 >> 0x1c != 0) {
        iVar9 = 5;
      }
      iVar4 = 3;
      if (0x1fffff < uVar1) {
        iVar4 = iVar9;
      }
      iVar9 = 2;
      if (0x3fff < uVar1) {
        iVar9 = iVar4;
      }
      iVar4 = 1;
      if (0x7f < uVar1) {
        iVar4 = iVar9;
      }
      iVar5 = iVar5 + uVar1 + iVar4 + 1;
    }
    if ((uVar3 & 0x80) != 0) {
      iVar5 = iVar5 + 3;
    }
  }
  if ((uVar3 & 0x3f00) != 0) {
    if ((uVar3 & 0x100) != 0) {
      iVar5 = iVar5 + 3;
    }
    if ((uVar3 & 0x200) != 0) {
      iVar5 = iVar5 + 3;
    }
    if ((uVar3 & 0x400) != 0) {
      iVar5 = iVar5 + 3;
    }
    if ((uVar3 & 0x800) != 0) {
      iVar5 = iVar5 + 3;
    }
    if ((uVar3 >> 0xc & 1) != 0) {
      bVar2 = **(byte **)(param_1 + 0x58);
      uVar1 = (uint)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = *(uint *)(*(byte **)(param_1 + 0x58) + 8);
      }
      iVar9 = 4;
      if (uVar1 >> 0x1c != 0) {
        iVar9 = 5;
      }
      iVar4 = 3;
      if (0x1fffff < uVar1) {
        iVar4 = iVar9;
      }
      iVar9 = 2;
      if (0x3fff < uVar1) {
        iVar9 = iVar4;
      }
      iVar4 = 1;
      if (0x7f < uVar1) {
        iVar4 = iVar9;
      }
      iVar5 = iVar5 + uVar1 + iVar4 + 2;
    }
    if ((uVar3 >> 0xd & 1) != 0) {
      bVar2 = **(byte **)(param_1 + 0x60);
      uVar3 = (uint)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar3 = *(uint *)(*(byte **)(param_1 + 0x60) + 8);
      }
      iVar9 = 4;
      if (uVar3 >> 0x1c != 0) {
        iVar9 = 5;
      }
      iVar4 = 3;
      if (0x1fffff < uVar3) {
        iVar4 = iVar9;
      }
      iVar9 = 2;
      if (0x3fff < uVar3) {
        iVar9 = iVar4;
      }
      iVar4 = 1;
      if (0x7f < uVar3) {
        iVar4 = iVar9;
      }
      iVar5 = iVar5 + uVar3 + iVar4 + 2;
    }
  }
  iVar5 = iVar5 + *(int *)(param_1 + 0x70) * 2;
  if (0 < *(int *)(param_1 + 0x70)) {
    lVar10 = 0;
    do {
      uVar6 = FUN_00bdb9b8(*(undefined8 *)(*(long *)(param_1 + 0x78) + lVar10 * 8 + 8));
      iVar9 = 4;
      if ((uVar6 >> 0x1c & 0xf) != 0) {
        iVar9 = 5;
      }
      uVar3 = (uint)uVar6;
      iVar4 = 3;
      if (0x1fffff < uVar3) {
        iVar4 = iVar9;
      }
      iVar9 = 2;
      if (0x3fff < uVar3) {
        iVar9 = iVar4;
      }
      iVar4 = 1;
      if (0x7f < uVar3) {
        iVar4 = iVar9;
      }
      iVar5 = uVar3 + iVar5 + iVar4;
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x70));
  }
  if (*(long **)(param_1 + 8) == (long *)(param_1 + 0x10)) {
    iVar9 = 0;
  }
  else {
    iVar9 = 0;
    plVar11 = *(long **)(param_1 + 8);
    do {
      iVar4 = FUN_00c2ba20(plVar11 + 5,(int)plVar11[4]);
      iVar9 = iVar4 + iVar9;
      plVar7 = (long *)plVar11[1];
      if ((long *)plVar11[1] == (long *)0x0) {
        plVar7 = plVar11 + 2;
        plVar8 = (long *)*plVar7;
        if ((long *)*plVar8 != plVar11) {
          do {
            lVar10 = *plVar7;
            plVar7 = (long *)(lVar10 + 0x10);
            plVar8 = (long *)*plVar7;
          } while (*plVar8 != lVar10);
        }
      }
      else {
        do {
          plVar8 = plVar7;
          plVar7 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      plVar11 = plVar8;
    } while (plVar8 != (long *)(param_1 + 0x10));
  }
  iVar9 = iVar9 + iVar5;
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    iVar5 = FUN_00c0358c(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffe);
    iVar9 = iVar5 + iVar9;
  }
  *(int *)(param_1 + 0x34) = iVar9;
  return iVar9;
}


