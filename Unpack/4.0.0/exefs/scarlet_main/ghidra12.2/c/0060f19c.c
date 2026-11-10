/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0060f19c; name: FUN_0060f19c
 */


long FUN_0060f19c(undefined *param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  
  pbVar3 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar3;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) {
LAB_0060f1bc:
      uVar4 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar4 = *(ulong *)(pbVar3 + 8);
      }
      lVar5 = uVar4 + (((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      pbVar3 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar3;
      goto joined_r0x0060f218;
    }
  }
  else if (*(long *)(pbVar3 + 8) != 0) goto LAB_0060f1bc;
  lVar5 = 0;
  pbVar3 = *(byte **)(param_1 + 0x18);
  bVar1 = *pbVar3;
joined_r0x0060f218:
  if ((bVar1 & 1) == 0) {
    uVar4 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar4 = *(ulong *)(pbVar3 + 8);
  }
  if (uVar4 != 0) {
    uVar4 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar4 = *(ulong *)(pbVar3 + 8);
    }
    lVar5 = lVar5 + uVar4 + (ulong)(((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((param_1 != PTR_DAT_047cedf8) && (*(long *)(param_1 + 0x20) != 0)) {
    lVar2 = FUN_006101ec();
    lVar5 = lVar5 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar1 = *(byte *)(uVar4 + 8);
    if ((bVar1 & 1) == 0) {
      uVar4 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar4 = *(ulong *)(uVar4 + 0x10);
    }
    lVar5 = uVar4 + lVar5;
  }
  *(int *)(param_1 + 0x28) = (int)lVar5;
  return lVar5;
}


