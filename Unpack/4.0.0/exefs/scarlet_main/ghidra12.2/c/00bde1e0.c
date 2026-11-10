/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bde1e0; name: FUN_00bde1e0
 */


int FUN_00bde1e0(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 0xc) == 0) {
    iVar8 = 0;
  }
  else {
    if ((uVar4 >> 2 & 1) == 0) {
      iVar8 = 0;
    }
    else {
      bVar2 = **(byte **)(param_1 + 0x48);
      uVar1 = (uint)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = *(uint *)(*(byte **)(param_1 + 0x48) + 8);
      }
      iVar8 = 5;
      if (uVar1 >> 0x1c != 0) {
        iVar8 = 6;
      }
      iVar3 = 4;
      if (0x1fffff < uVar1) {
        iVar3 = iVar8;
      }
      iVar9 = 3;
      if (0x3fff < uVar1) {
        iVar9 = iVar3;
      }
      iVar8 = 2;
      if (0x7f < uVar1) {
        iVar8 = iVar9;
      }
      iVar8 = iVar8 + uVar1;
    }
    if ((uVar4 >> 3 & 1) != 0) {
      bVar2 = **(byte **)(param_1 + 0x50);
      uVar4 = (uint)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar4 = *(uint *)(*(byte **)(param_1 + 0x50) + 8);
      }
      iVar3 = 4;
      if (uVar4 >> 0x1c != 0) {
        iVar3 = 5;
      }
      iVar9 = 3;
      if (0x1fffff < uVar4) {
        iVar9 = iVar3;
      }
      iVar3 = 2;
      if (0x3fff < uVar4) {
        iVar3 = iVar9;
      }
      iVar9 = 1;
      if (0x7f < uVar4) {
        iVar9 = iVar3;
      }
      iVar8 = iVar8 + uVar4 + iVar9 + 1;
    }
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x18);
  if ((int)*(uint *)(param_1 + 0x18) < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    puVar7 = (uint *)(*(long *)(param_1 + 0x20) + 8);
    do {
      uVar1 = *puVar7;
      if ((int)uVar1 < 0) {
        iVar3 = 10;
      }
      else if (uVar1 < 0x80) {
        iVar3 = 1;
      }
      else if (uVar1 < 0x4000) {
        iVar3 = 2;
      }
      else {
        iVar9 = 4;
        if (uVar1 >> 0x1c != 0) {
          iVar9 = 5;
        }
        iVar3 = 3;
        if (0x1fffff < uVar1) {
          iVar3 = iVar9;
        }
      }
      uVar4 = iVar3 + uVar4;
      uVar5 = uVar5 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar5 != 0);
    if (uVar4 < 0x80) {
      iVar3 = 2;
    }
    else if (uVar4 < 0x4000) {
      iVar3 = 3;
    }
    else if (uVar4 < 0x200000) {
      iVar3 = 4;
    }
    else {
      iVar3 = 5;
      if (uVar4 >> 0x1c != 0) {
        iVar3 = 6;
      }
    }
    iVar8 = iVar3 + iVar8;
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x30);
  iVar8 = iVar8 + uVar4;
  *(uint *)(param_1 + 0x28) = uVar4;
  if ((int)*(uint *)(param_1 + 0x30) < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    puVar7 = (uint *)(*(long *)(param_1 + 0x38) + 8);
    do {
      uVar1 = *puVar7;
      if ((int)uVar1 < 0) {
        iVar3 = 10;
      }
      else if (uVar1 < 0x80) {
        iVar3 = 1;
      }
      else if (uVar1 < 0x4000) {
        iVar3 = 2;
      }
      else {
        iVar9 = 4;
        if (uVar1 >> 0x1c != 0) {
          iVar9 = 5;
        }
        iVar3 = 3;
        if (0x1fffff < uVar1) {
          iVar3 = iVar9;
        }
      }
      uVar4 = iVar3 + uVar4;
      uVar5 = uVar5 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar5 != 0);
    if (uVar4 < 0x80) {
      iVar3 = 2;
    }
    else if (uVar4 < 0x4000) {
      iVar3 = 3;
    }
    else if (uVar4 < 0x200000) {
      iVar3 = 4;
    }
    else {
      iVar3 = 5;
      if (uVar4 >> 0x1c != 0) {
        iVar3 = 6;
      }
    }
    iVar8 = iVar3 + iVar8;
  }
  *(uint *)(param_1 + 0x40) = uVar4;
  uVar1 = *(uint *)(param_1 + 0x60);
  uVar5 = (ulong)uVar1;
  iVar8 = iVar8 + uVar4 + uVar1;
  if (0 < (int)uVar1) {
    puVar6 = *(undefined8 **)(param_1 + 0x68);
    do {
      puVar6 = puVar6 + 1;
      bVar2 = *(byte *)*puVar6;
      uVar4 = (uint)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar4 = *(uint *)((byte *)*puVar6 + 8);
      }
      iVar3 = 4;
      if (uVar4 >> 0x1c != 0) {
        iVar3 = 5;
      }
      iVar9 = 3;
      if (0x1fffff < uVar4) {
        iVar9 = iVar3;
      }
      iVar3 = 2;
      if (0x3fff < uVar4) {
        iVar3 = iVar9;
      }
      iVar9 = 1;
      if (0x7f < uVar4) {
        iVar9 = iVar3;
      }
      uVar5 = uVar5 - 1;
      iVar8 = iVar8 + uVar4 + iVar9;
    } while (uVar5 != 0);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    iVar3 = FUN_00c0358c(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    iVar8 = iVar3 + iVar8;
  }
  *(int *)(param_1 + 0x14) = iVar8;
  return iVar8;
}


