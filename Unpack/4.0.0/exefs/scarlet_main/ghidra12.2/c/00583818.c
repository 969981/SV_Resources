/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00583818; name: FUN_00583818
 */


long FUN_00583818(undefined *param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  
  pbVar5 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00583884:
      lVar6 = 0;
      goto joined_r0x00583874;
    }
  }
  else if (*(long *)(pbVar5 + 8) == 0) goto LAB_00583884;
  uVar4 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar4 = *(ulong *)(pbVar5 + 8);
  }
  lVar6 = uVar4 + (((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
joined_r0x00583874:
  if ((param_1 != PTR_DAT_047cdef0) && (*(long *)(param_1 + 0x18) != 0)) {
    lVar3 = FUN_00577bfc();
    lVar6 = lVar6 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      uVar4 = 0xb;
    }
    else {
      uVar4 = (ulong)((((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
    }
    lVar6 = uVar4 + lVar6;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar2 = *(byte *)(uVar4 + 8);
    if ((bVar2 & 1) == 0) {
      uVar4 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar4 = *(ulong *)(uVar4 + 0x10);
    }
    lVar6 = uVar4 + lVar6;
  }
  *(int *)(param_1 + 0x24) = (int)lVar6;
  return lVar6;
}


