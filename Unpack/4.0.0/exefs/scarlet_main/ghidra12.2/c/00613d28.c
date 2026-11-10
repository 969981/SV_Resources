/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00613d28; name: FUN_00613d28
 */


long FUN_00613d28(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  
  pbVar4 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar4;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00613d80:
      lVar3 = 0;
      uVar1 = *(uint *)(param_1 + 0x18);
      goto joined_r0x00613d70;
    }
  }
  else if (*(long *)(pbVar4 + 8) == 0) goto LAB_00613d80;
  uVar5 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar5 = *(ulong *)(pbVar4 + 8);
  }
  lVar3 = uVar5 + (((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  uVar1 = *(uint *)(param_1 + 0x18);
joined_r0x00613d70:
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      uVar5 = 0xb;
    }
    else {
      uVar5 = (ulong)((((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
    }
    lVar3 = uVar5 + lVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      uVar5 = 0xb;
    }
    else {
      uVar5 = (ulong)((((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
    }
    lVar3 = uVar5 + lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x20) = (int)lVar3;
    return lVar3;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  bVar2 = *(byte *)(uVar5 + 8);
  if ((bVar2 & 1) == 0) {
    uVar5 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar5 = *(ulong *)(uVar5 + 0x10);
  }
  *(int *)(param_1 + 0x20) = (int)(uVar5 + lVar3);
  return uVar5 + lVar3;
}


