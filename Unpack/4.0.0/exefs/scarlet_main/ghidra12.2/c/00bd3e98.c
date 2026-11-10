/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bd3e98; name: FUN_00bd3e98
 */


int FUN_00bd3e98(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  if ((uVar2 & 0x3f) == 0) {
    iVar4 = 0;
  }
  else {
    if ((uVar2 & 1) == 0) {
      iVar4 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x38);
      if ((int)uVar1 < 0) {
        iVar4 = 0xb;
      }
      else if (uVar1 < 0x80) {
        iVar4 = 2;
      }
      else if (uVar1 < 0x4000) {
        iVar4 = 3;
      }
      else if (uVar1 < 0x200000) {
        iVar4 = 4;
      }
      else {
        iVar4 = 5;
        if (uVar1 >> 0x1c != 0) {
          iVar4 = 6;
        }
      }
    }
    if ((uVar2 & 2) != 0) {
      iVar4 = iVar4 + 2;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      uVar1 = *(uint *)(param_1 + 0x3c);
      iVar8 = 5;
      if (uVar1 >> 0x1c != 0) {
        iVar8 = 6;
      }
      iVar3 = 4;
      if (0x1fffff < uVar1) {
        iVar3 = iVar8;
      }
      iVar8 = 3;
      if (0x3fff < uVar1) {
        iVar8 = iVar3;
      }
      iVar3 = 2;
      if (0x7f < uVar1) {
        iVar3 = iVar8;
      }
      iVar8 = 0xb;
      if ((uVar1 & 0x80000000) == 0) {
        iVar8 = iVar3;
      }
      iVar4 = iVar8 + iVar4;
    }
    if ((uVar2 & 8) != 0) {
      iVar4 = iVar4 + 2;
    }
    if ((uVar2 & 0x10) != 0) {
      iVar4 = iVar4 + 2;
    }
    if ((uVar2 & 0x20) != 0) {
      iVar4 = iVar4 + 2;
    }
  }
  iVar4 = iVar4 + *(int *)(param_1 + 0x48) * 2;
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar9 = 0;
    do {
      uVar5 = FUN_00bdb9b8(*(undefined8 *)(*(long *)(param_1 + 0x50) + lVar9 * 8 + 8));
      iVar8 = 4;
      if ((uVar5 >> 0x1c & 0xf) != 0) {
        iVar8 = 5;
      }
      uVar2 = (uint)uVar5;
      iVar3 = 3;
      if (0x1fffff < uVar2) {
        iVar3 = iVar8;
      }
      iVar8 = 2;
      if (0x3fff < uVar2) {
        iVar8 = iVar3;
      }
      iVar3 = 1;
      if (0x7f < uVar2) {
        iVar3 = iVar8;
      }
      iVar4 = uVar2 + iVar4 + iVar3;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x48));
  }
  if (*(long **)(param_1 + 8) == (long *)(param_1 + 0x10)) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    plVar10 = *(long **)(param_1 + 8);
    do {
      iVar3 = FUN_00c2ba20(plVar10 + 5,(int)plVar10[4]);
      iVar8 = iVar3 + iVar8;
      plVar6 = (long *)plVar10[1];
      if ((long *)plVar10[1] == (long *)0x0) {
        plVar6 = plVar10 + 2;
        plVar7 = (long *)*plVar6;
        if ((long *)*plVar7 != plVar10) {
          do {
            lVar9 = *plVar6;
            plVar6 = (long *)(lVar9 + 0x10);
            plVar7 = (long *)*plVar6;
          } while (*plVar7 != lVar9);
        }
      }
      else {
        do {
          plVar7 = plVar6;
          plVar6 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      plVar10 = plVar7;
    } while (plVar7 != (long *)(param_1 + 0x10));
  }
  iVar8 = iVar8 + iVar4;
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    iVar4 = FUN_00c0358c(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffe);
    iVar8 = iVar4 + iVar8;
  }
  *(int *)(param_1 + 0x34) = iVar8;
  return iVar8;
}


