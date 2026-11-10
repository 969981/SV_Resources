/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006894b8; name: FUN_006894b8
 */


long FUN_006894b8(undefined *param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if ((param_1 == PTR_DAT_047cf5d8) || (lVar3 = *(long *)(param_1 + 0x10), lVar3 == 0)) {
    lVar3 = 0;
    uVar1 = *(uint *)(param_1 + 0x18);
    goto joined_r0x00689528;
  }
  pbVar5 = *(byte **)(lVar3 + 0x10);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) goto LAB_006894e4;
LAB_00689538:
    lVar4 = 0;
    uVar6 = *(ulong *)(lVar3 + 8);
  }
  else {
    if (*(long *)(pbVar5 + 8) == 0) goto LAB_00689538;
LAB_006894e4:
    uVar6 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar6 = *(ulong *)(pbVar5 + 8);
    }
    lVar4 = uVar6 + (((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    uVar6 = *(ulong *)(lVar3 + 8);
  }
  if ((uVar6 & 1) != 0) {
    bVar2 = *(byte *)((uVar6 & 0xfffffffffffffffe) + 8);
    if ((bVar2 & 1) == 0) {
      uVar6 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar6 = *(ulong *)((uVar6 & 0xfffffffffffffffe) + 0x10);
    }
    lVar4 = uVar6 + lVar4;
  }
  *(uint *)(lVar3 + 0x18) = (uint)lVar4;
  lVar3 = lVar4 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  uVar1 = *(uint *)(param_1 + 0x18);
joined_r0x00689528:
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      uVar6 = 0xb;
    }
    else {
      uVar6 = (ulong)((((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
    }
    lVar3 = uVar6 + lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x1c) = (int)lVar3;
    return lVar3;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  bVar2 = *(byte *)(uVar6 + 8);
  if ((bVar2 & 1) == 0) {
    uVar6 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar6 = *(ulong *)(uVar6 + 0x10);
  }
  *(int *)(param_1 + 0x1c) = (int)(uVar6 + lVar3);
  return uVar6 + lVar3;
}


