/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b7330c; name: FUN_00b7330c
 */


int FUN_00b7330c(long param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  int iVar7;
  
  uVar5 = *(ulong *)(param_1 + 0x18);
  iVar4 = 0;
  if (uVar5 != 0) {
    if (uVar5 >> 0x23 == 0) {
      if (uVar5 < 0x80) {
        iVar4 = 1;
      }
      else if (uVar5 < 0x4000) {
        iVar4 = 2;
      }
      else if (uVar5 < 0x200000) {
        iVar4 = 3;
      }
      else {
        iVar4 = 4;
        if (uVar5 >> 0x1c != 0) {
          iVar4 = 5;
        }
      }
    }
    else if (uVar5 >> 0x2a == 0) {
      iVar4 = 6;
    }
    else if (uVar5 >> 0x31 == 0) {
      iVar4 = 7;
    }
    else if (uVar5 >> 0x38 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = 9;
      if ((long)uVar5 < 0) {
        iVar4 = 10;
      }
    }
    iVar4 = iVar4 + 1;
  }
  pbVar6 = *(byte **)(param_1 + 0x20);
  bVar3 = *pbVar6;
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 == 0) goto LAB_00b73410;
  }
  else if (*(long *)(pbVar6 + 8) == 0) goto LAB_00b73410;
  uVar1 = (uint)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(uint *)(pbVar6 + 8);
  }
  iVar7 = 4;
  if (uVar1 >> 0x1c != 0) {
    iVar7 = 5;
  }
  iVar2 = 3;
  if (0x1fffff < uVar1) {
    iVar2 = iVar7;
  }
  iVar7 = 2;
  if (0x3fff < uVar1) {
    iVar7 = iVar2;
  }
  iVar2 = 1;
  if (0x7f < uVar1) {
    iVar2 = iVar7;
  }
  iVar4 = iVar4 + uVar1 + iVar2 + 1;
LAB_00b73410:
  *(int *)(param_1 + 0x28) = iVar4;
  return iVar4;
}


