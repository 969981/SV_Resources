/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00be0674; name: FUN_00be0674
 */


int FUN_00be0674(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 0xe) == 0) {
    iVar7 = 0;
  }
  else {
    if ((uVar4 >> 1 & 1) == 0) {
      iVar7 = 0;
    }
    else {
      bVar2 = **(byte **)(param_1 + 0x30);
      uVar1 = (uint)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = *(uint *)(*(byte **)(param_1 + 0x30) + 8);
      }
      iVar7 = 5;
      if (uVar1 >> 0x1c != 0) {
        iVar7 = 6;
      }
      iVar3 = 4;
      if (0x1fffff < uVar1) {
        iVar3 = iVar7;
      }
      iVar8 = 3;
      if (0x3fff < uVar1) {
        iVar8 = iVar3;
      }
      iVar7 = 2;
      if (0x7f < uVar1) {
        iVar7 = iVar8;
      }
      iVar7 = iVar7 + uVar1;
    }
    if ((uVar4 >> 2 & 1) != 0) {
      uVar1 = *(uint *)(param_1 + 0x38);
      if ((int)uVar1 < 0) {
        iVar3 = 0xb;
      }
      else if (uVar1 < 0x80) {
        iVar3 = 2;
      }
      else if (uVar1 < 0x4000) {
        iVar3 = 3;
      }
      else if (uVar1 < 0x200000) {
        iVar3 = 4;
      }
      else {
        iVar3 = 5;
        if (uVar1 >> 0x1c != 0) {
          iVar3 = 6;
        }
      }
      iVar7 = iVar3 + iVar7;
    }
    if ((uVar4 >> 3 & 1) != 0) {
      uVar4 = *(uint *)(param_1 + 0x3c);
      if ((int)uVar4 < 0) {
        iVar3 = 0xb;
      }
      else if (uVar4 < 0x80) {
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
      iVar7 = iVar3 + iVar7;
    }
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x18);
  if ((int)*(uint *)(param_1 + 0x18) < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    puVar6 = (uint *)(*(long *)(param_1 + 0x20) + 8);
    do {
      uVar1 = *puVar6;
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
        iVar8 = 4;
        if (uVar1 >> 0x1c != 0) {
          iVar8 = 5;
        }
        iVar3 = 3;
        if (0x1fffff < uVar1) {
          iVar3 = iVar8;
        }
      }
      uVar4 = iVar3 + uVar4;
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 1;
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
    iVar7 = iVar3 + iVar7;
  }
  iVar7 = iVar7 + uVar4;
  *(uint *)(param_1 + 0x28) = uVar4;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    iVar3 = FUN_00c0358c(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    iVar7 = iVar3 + iVar7;
  }
  *(int *)(param_1 + 0x14) = iVar7;
  return iVar7;
}


