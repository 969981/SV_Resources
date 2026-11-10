/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bd9be8; name: FUN_00bd9be8
 */


int FUN_00bd9be8(long param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((~uVar2 & 3) == 0) {
    bVar3 = **(byte **)(param_1 + 0x18);
    uVar2 = (uint)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar2 = *(uint *)(*(byte **)(param_1 + 0x18) + 8);
    }
    iVar4 = 7;
    if (uVar2 >> 0x1c != 0) {
      iVar4 = 8;
    }
    iVar5 = 6;
    if (0x1fffff < uVar2) {
      iVar5 = iVar4;
    }
    iVar4 = 5;
    if (0x3fff < uVar2) {
      iVar4 = iVar5;
    }
    iVar5 = 4;
    if (0x7f < uVar2) {
      iVar5 = iVar4;
    }
    iVar5 = iVar5 + uVar2;
  }
  else {
    if ((uVar2 & 1) == 0) {
      iVar5 = 0;
    }
    else {
      bVar3 = **(byte **)(param_1 + 0x18);
      uVar1 = (uint)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(uint *)(*(byte **)(param_1 + 0x18) + 8);
      }
      iVar4 = 5;
      if (uVar1 >> 0x1c != 0) {
        iVar4 = 6;
      }
      iVar5 = 4;
      if (0x1fffff < uVar1) {
        iVar5 = iVar4;
      }
      iVar4 = 3;
      if (0x3fff < uVar1) {
        iVar4 = iVar5;
      }
      iVar5 = 2;
      if (0x7f < uVar1) {
        iVar5 = iVar4;
      }
      iVar5 = iVar5 + uVar1;
    }
    if ((uVar2 & 2) != 0) {
      iVar5 = iVar5 + 2;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    iVar4 = FUN_00c0358c(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    iVar5 = iVar4 + iVar5;
  }
  *(int *)(param_1 + 0x14) = iVar5;
  return iVar5;
}


