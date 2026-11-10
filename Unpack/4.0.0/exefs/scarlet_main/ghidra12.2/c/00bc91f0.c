/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bc91f0; name: FUN_00bc91f0
 */


int FUN_00bc91f0(long param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 5) == 0) {
    iVar7 = 0;
  }
  else {
    if ((uVar4 & 1) == 0) {
      iVar7 = 0;
    }
    else {
      bVar3 = **(byte **)(param_1 + 0x18);
      uVar1 = (uint)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(uint *)(*(byte **)(param_1 + 0x18) + 8);
      }
      iVar7 = 5;
      if (uVar1 >> 0x1c != 0) {
        iVar7 = 6;
      }
      iVar5 = 4;
      if (0x1fffff < uVar1) {
        iVar5 = iVar7;
      }
      iVar2 = 3;
      if (0x3fff < uVar1) {
        iVar2 = iVar5;
      }
      iVar7 = 2;
      if (0x7f < uVar1) {
        iVar7 = iVar2;
      }
      iVar7 = iVar7 + uVar1;
    }
    if ((uVar4 >> 2 & 1) != 0) {
      uVar4 = FUN_00bd5d54(*(undefined8 *)(param_1 + 0x38));
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
  iVar7 = *(int *)(param_1 + 0x28) + iVar7;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar8 = 0;
    do {
      uVar6 = FUN_00bcab5c(*(undefined8 *)(*(long *)(param_1 + 0x30) + lVar8 * 8 + 8));
      iVar5 = 4;
      if ((uVar6 >> 0x1c & 0xf) != 0) {
        iVar5 = 5;
      }
      uVar4 = (uint)uVar6;
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
      iVar7 = uVar4 + iVar7 + iVar2;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x28));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    iVar5 = FUN_00c0358c(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    iVar7 = iVar5 + iVar7;
  }
  *(int *)(param_1 + 0x14) = iVar7;
  return iVar7;
}


