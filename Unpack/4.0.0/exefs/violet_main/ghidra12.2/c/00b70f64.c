/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b70f64; name: FUN_00b70f64
 */


int FUN_00b70f64(long param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  iVar4 = 0;
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      iVar4 = 0xb;
    }
    else if (uVar2 < 0x80) {
      iVar4 = 2;
    }
    else if (uVar2 < 0x4000) {
      iVar4 = 3;
    }
    else if (uVar2 < 0x200000) {
      iVar4 = 4;
    }
    else {
      iVar4 = 5;
      if (uVar2 >> 0x1c != 0) {
        iVar4 = 6;
      }
    }
  }
  uVar6 = *(ulong *)(param_1 + 0x18);
  if (uVar6 != 0) {
    if (uVar6 >> 0x23 == 0) {
      if (uVar6 < 0x80) {
        iVar5 = 1;
      }
      else if (uVar6 < 0x4000) {
        iVar5 = 2;
      }
      else if (uVar6 < 0x200000) {
        iVar5 = 3;
      }
      else {
        iVar5 = 4;
        if (uVar6 >> 0x1c != 0) {
          iVar5 = 5;
        }
      }
    }
    else if (uVar6 >> 0x2a == 0) {
      iVar5 = 6;
    }
    else if (uVar6 >> 0x31 == 0) {
      iVar5 = 7;
    }
    else if (uVar6 >> 0x38 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = 9;
      if ((long)uVar6 < 0) {
        iVar5 = 10;
      }
    }
    iVar4 = iVar4 + iVar5 + 1;
  }
  pbVar7 = *(byte **)(param_1 + 0x20);
  bVar3 = *pbVar7;
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 != 0) goto LAB_00b71070;
  }
  else if (*(long *)(pbVar7 + 8) != 0) {
LAB_00b71070:
    uVar2 = (uint)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar2 = *(uint *)(pbVar7 + 8);
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
    iVar4 = iVar4 + uVar2 + iVar1 + 1;
  }
  pbVar7 = *(byte **)(param_1 + 0x28);
  bVar3 = *pbVar7;
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 == 0) goto LAB_00b7113c;
  }
  else if (*(long *)(pbVar7 + 8) == 0) goto LAB_00b7113c;
  uVar2 = (uint)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar2 = *(uint *)(pbVar7 + 8);
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
  iVar4 = iVar4 + uVar2 + iVar5 + 1;
LAB_00b7113c:
  *(int *)(param_1 + 0x34) = iVar4;
  return iVar4;
}


