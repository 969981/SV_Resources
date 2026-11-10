/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004d44f0; name: FUN_004d44f0
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_004d44f0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0xff) == 0) {
    lVar5 = 0;
  }
  else {
    if ((uVar2 & 1) == 0) {
      lVar5 = 0;
    }
    else {
      bVar3 = **(byte **)(param_1 + 0x18);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x18) + 8);
      }
      lVar5 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x20);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x20) + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x28);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x28) + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x30);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x30) + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 4 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x38);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x38) + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 5 & 1) != 0) {
      lVar4 = FUN_004de54c(*(undefined8 *)(param_1 + 0x40));
      lVar5 = lVar5 + lVar4 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 6 & 1) != 0) {
      if ((int)*(uint *)(param_1 + 0x48) < 0) {
        lVar5 = lVar5 + 0xb;
      }
      else {
        lVar5 = (ulong)((((uint)LZCOUNT(*(uint *)(param_1 + 0x48) | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1)
                + lVar5;
      }
    }
    if ((uVar2 >> 7 & 1) != 0) {
      if ((int)*(uint *)(param_1 + 0x4c) < 0) {
        lVar5 = lVar5 + 0xb;
      }
      else {
        lVar5 = (ulong)((((uint)LZCOUNT(*(uint *)(param_1 + 0x4c) | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1)
                + lVar5;
      }
    }
  }
  if ((uVar2 & 0x700) != 0) {
    if ((uVar2 & 0x100) != 0) {
      lVar5 = lVar5 + 3;
    }
    if ((uVar2 >> 9 & 1) != 0) {
      uVar1 = 0xb;
      if ((*(uint *)(param_1 + 0x54) & 0x80000000) == 0) {
        uVar1 = (ulong)((((uint)LZCOUNT(*(uint *)(param_1 + 0x54) | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1)
        ;
      }
      lVar5 = uVar1 + lVar5;
    }
    if ((uVar2 >> 10 & 1) != 0) {
      uVar1 = 0xb;
      if ((*(uint *)(param_1 + 0x58) & 0x80000000) == 0) {
        uVar1 = (ulong)((((uint)LZCOUNT(*(uint *)(param_1 + 0x58) | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1)
        ;
      }
      lVar5 = uVar1 + lVar5;
    }
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x14) = (int)lVar5;
    return lVar5;
  }
  lVar5 = FUN_0051d510((byte *)(param_1 + 8),lVar5,param_1 + 0x14);
  return lVar5;
}


