/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bdb9b8; name: FUN_00bdb9b8
 */


int FUN_00bdb9b8(long param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 0x7e) == 0) {
    iVar6 = 0;
  }
  else {
    if ((uVar4 >> 1 & 1) == 0) {
      iVar6 = 0;
    }
    else {
      bVar3 = **(byte **)(param_1 + 0x30);
      uVar1 = (uint)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(uint *)(*(byte **)(param_1 + 0x30) + 8);
      }
      if (uVar1 < 0x80) {
        iVar6 = 2;
      }
      else {
        if (uVar1 < 0x4000) {
          iVar6 = 2;
        }
        else if (uVar1 < 0x200000) {
          iVar6 = 3;
        }
        else {
          iVar6 = 4;
          if (uVar1 >> 0x1c != 0) {
            iVar6 = 5;
          }
        }
        iVar6 = iVar6 + 1;
      }
      iVar6 = iVar6 + uVar1;
    }
    if ((uVar4 >> 2 & 1) != 0) {
      uVar7 = *(ulong *)(param_1 + 0x38);
      if (uVar7 >> 0x23 == 0) {
        if (uVar7 < 0x80) {
          iVar5 = 1;
        }
        else if (uVar7 < 0x4000) {
          iVar5 = 2;
        }
        else if (uVar7 < 0x200000) {
          iVar5 = 3;
        }
        else {
          iVar5 = 4;
          if (uVar7 >> 0x1c != 0) {
            iVar5 = 5;
          }
        }
      }
      else if (uVar7 >> 0x2a == 0) {
        iVar5 = 6;
      }
      else if (uVar7 >> 0x31 == 0) {
        iVar5 = 7;
      }
      else if (uVar7 >> 0x38 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = 9;
        if ((long)uVar7 < 0) {
          iVar5 = 10;
        }
      }
      iVar6 = iVar6 + iVar5 + 1;
    }
    if ((uVar4 >> 3 & 1) != 0) {
      uVar7 = *(ulong *)(param_1 + 0x40);
      if (uVar7 >> 0x23 == 0) {
        if (uVar7 < 0x80) {
          iVar5 = 1;
        }
        else if (uVar7 < 0x4000) {
          iVar5 = 2;
        }
        else if (uVar7 < 0x200000) {
          iVar5 = 3;
        }
        else {
          iVar5 = 4;
          if (uVar7 >> 0x1c != 0) {
            iVar5 = 5;
          }
        }
      }
      else if (uVar7 >> 0x2a == 0) {
        iVar5 = 6;
      }
      else if (uVar7 >> 0x31 == 0) {
        iVar5 = 7;
      }
      else if (uVar7 >> 0x38 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = 9;
        if ((long)uVar7 < 0) {
          iVar5 = 10;
        }
      }
      iVar6 = iVar6 + iVar5 + 1;
    }
    if ((uVar4 & 0x10) != 0) {
      iVar6 = iVar6 + 9;
    }
    if ((uVar4 >> 5 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x50);
      uVar1 = (uint)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(uint *)(*(byte **)(param_1 + 0x50) + 8);
      }
      if (uVar1 < 0x80) {
        iVar5 = 1;
      }
      else if (uVar1 < 0x4000) {
        iVar5 = 2;
      }
      else if (uVar1 < 0x200000) {
        iVar5 = 3;
      }
      else {
        iVar5 = 4;
        if (uVar1 >> 0x1c != 0) {
          iVar5 = 5;
        }
      }
      iVar6 = iVar6 + uVar1 + iVar5 + 1;
    }
    if ((uVar4 >> 6 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x58);
      uVar4 = (uint)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar4 = *(uint *)(*(byte **)(param_1 + 0x58) + 8);
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
      iVar6 = iVar6 + uVar4 + iVar5 + 1;
    }
  }
  iVar6 = *(int *)(param_1 + 0x20) + iVar6;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar8 = 0;
    do {
      uVar7 = FUN_00bd9be8(*(undefined8 *)(*(long *)(param_1 + 0x28) + lVar8 * 8 + 8));
      iVar5 = 4;
      if ((uVar7 >> 0x1c & 0xf) != 0) {
        iVar5 = 5;
      }
      uVar4 = (uint)uVar7;
      iVar2 = 3;
      if (0x1fffff < uVar4) {
        iVar2 = iVar5;
      }
      iVar5 = 2;
      if (0x3fff < uVar4) {
        iVar5 = iVar2;
      }
      iVar2 = 1;
      if (0x7f < uVar4) {
        iVar2 = iVar5;
      }
      iVar6 = uVar4 + iVar6 + iVar2;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x20));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    iVar5 = FUN_00c0358c(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    iVar6 = iVar5 + iVar6;
  }
  *(int *)(param_1 + 0x14) = iVar6;
  return iVar6;
}


