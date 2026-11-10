/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bc5be8; name: FUN_00bc5be8
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_00bc5be8(long param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 0xff) == 0) {
    iVar6 = 0;
  }
  else {
    if ((uVar4 & 1) == 0) {
      iVar6 = 0;
    }
    else {
      bVar3 = **(byte **)(param_1 + 0x18);
      uVar2 = (uint)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar2 = *(uint *)(*(byte **)(param_1 + 0x18) + 8);
      }
      if (uVar2 < 0x80) {
        iVar6 = 1;
      }
      else if (uVar2 < 0x4000) {
        iVar6 = 2;
      }
      else if (uVar2 < 0x200000) {
        iVar6 = 3;
      }
      else {
        iVar6 = 4;
        if (uVar2 >> 0x1c != 0) {
          iVar6 = 5;
        }
      }
      iVar6 = uVar2 + iVar6 + 1;
    }
    if ((uVar4 >> 1 & 1) != 0) {
      uVar2 = *(uint *)(param_1 + 0x20);
      if ((int)uVar2 < 0) {
        iVar5 = 10;
      }
      else if (uVar2 < 0x80) {
        iVar5 = 1;
      }
      else if (uVar2 < 0x4000) {
        iVar5 = 2;
      }
      else if (uVar2 < 0x200000) {
        iVar5 = 3;
      }
      else {
        iVar5 = 4;
        if (uVar2 >> 0x1c != 0) {
          iVar5 = 5;
        }
      }
      iVar6 = iVar6 + iVar5 + 1;
    }
    if ((uVar4 >> 2 & 1) != 0) {
      uVar2 = *(uint *)(param_1 + 0x24);
      if ((int)uVar2 < 0) {
        iVar5 = 10;
      }
      else if (uVar2 < 0x80) {
        iVar5 = 1;
      }
      else if (uVar2 < 0x4000) {
        iVar5 = 2;
      }
      else if (uVar2 < 0x200000) {
        iVar5 = 3;
      }
      else {
        iVar5 = 4;
        if (uVar2 >> 0x1c != 0) {
          iVar5 = 5;
        }
      }
      iVar6 = iVar6 + iVar5 + 1;
    }
    if ((uVar4 >> 3 & 1) != 0) {
      uVar2 = *(uint *)(param_1 + 0x38);
      if ((int)uVar2 < 0) {
        iVar5 = 0xb;
      }
      else if (uVar2 < 0x80) {
        iVar5 = 2;
      }
      else {
        if (uVar2 < 0x4000) {
          iVar5 = 2;
        }
        else if (uVar2 < 0x200000) {
          iVar5 = 3;
        }
        else {
          iVar5 = 4;
          if (uVar2 >> 0x1c != 0) {
            iVar5 = 5;
          }
        }
        iVar5 = iVar5 + 1;
      }
      iVar6 = iVar5 + iVar6;
    }
    if ((uVar4 >> 4 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x28);
      uVar2 = (uint)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar2 = *(uint *)(*(byte **)(param_1 + 0x28) + 8);
      }
      if (uVar2 < 0x80) {
        iVar5 = 1;
      }
      else if (uVar2 < 0x4000) {
        iVar5 = 2;
      }
      else if (uVar2 < 0x200000) {
        iVar5 = 3;
      }
      else {
        iVar5 = 4;
        if (uVar2 >> 0x1c != 0) {
          iVar5 = 5;
        }
      }
      iVar6 = iVar6 + uVar2 + iVar5 + 1;
    }
    if ((uVar4 >> 5 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x30);
      uVar2 = (uint)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar2 = *(uint *)(*(byte **)(param_1 + 0x30) + 8);
      }
      if (uVar2 < 0x80) {
        iVar5 = 1;
      }
      else if (uVar2 < 0x4000) {
        iVar5 = 2;
      }
      else if (uVar2 < 0x200000) {
        iVar5 = 3;
      }
      else {
        iVar5 = 4;
        if (uVar2 >> 0x1c != 0) {
          iVar5 = 5;
        }
      }
      iVar6 = iVar6 + uVar2 + iVar5 + 1;
    }
    if ((uVar4 >> 6 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x40);
      uVar2 = (uint)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar2 = *(uint *)(*(byte **)(param_1 + 0x40) + 8);
      }
      if (uVar2 < 0x80) {
        iVar5 = 1;
      }
      else if (uVar2 < 0x4000) {
        iVar5 = 2;
      }
      else if (uVar2 < 0x200000) {
        iVar5 = 3;
      }
      else {
        iVar5 = 4;
        if (uVar2 >> 0x1c != 0) {
          iVar5 = 5;
        }
      }
      iVar6 = iVar6 + uVar2 + iVar5 + 1;
    }
    if ((uVar4 >> 7 & 1) != 0) {
      uVar2 = *(uint *)(param_1 + 0x3c);
      if ((int)uVar2 < 0) {
        iVar5 = 0xb;
      }
      else if (uVar2 < 0x80) {
        iVar5 = 2;
      }
      else if (uVar2 < 0x4000) {
        iVar5 = 3;
      }
      else if (uVar2 < 0x200000) {
        iVar5 = 4;
      }
      else {
        iVar5 = 5;
        if (uVar2 >> 0x1c != 0) {
          iVar5 = 6;
        }
      }
      iVar6 = iVar5 + iVar6;
    }
  }
  if ((uVar4 & 0x300) != 0) {
    if ((uVar4 >> 8 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x48);
      uVar2 = (uint)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar2 = *(uint *)(*(byte **)(param_1 + 0x48) + 8);
      }
      iVar5 = 4;
      if (uVar2 >> 0x1c != 0) {
        iVar5 = 5;
      }
      iVar1 = 3;
      if (0x1fffff < uVar2) {
        iVar1 = iVar5;
      }
      iVar5 = 2;
      if (0x3fff < uVar2) {
        iVar5 = iVar1;
      }
      iVar1 = 1;
      if (0x7f < uVar2) {
        iVar1 = iVar5;
      }
      iVar6 = iVar6 + uVar2 + iVar1 + 1;
    }
    if ((uVar4 >> 9 & 1) != 0) {
      uVar4 = FUN_00bd3e98(*(undefined8 *)(param_1 + 0x50));
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
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    iVar5 = FUN_00c0358c(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    iVar6 = iVar5 + iVar6;
  }
  *(int *)(param_1 + 0x14) = iVar6;
  return iVar6;
}


