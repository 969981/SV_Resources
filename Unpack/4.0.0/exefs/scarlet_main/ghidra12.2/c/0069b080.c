/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0069b080; name: FUN_0069b080
 */


long FUN_0069b080(long param_1)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  
  pbVar5 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_0069b0ec:
      lVar3 = 0;
      iVar1 = *(int *)(param_1 + 0x24);
      goto joined_r0x0069b0fc;
    }
  }
  else if (*(long *)(pbVar5 + 8) == 0) goto LAB_0069b0ec;
  uVar4 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar4 = *(ulong *)(pbVar5 + 8);
  }
  lVar3 = uVar4 + (((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  iVar1 = *(int *)(param_1 + 0x24);
joined_r0x0069b0fc:
  if (iVar1 - 2U < 4) {
                    /* WARNING: Could not recover jumptable at 0x0069b114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)(&UNK_0069b118 + (ulong)(byte)(&DAT_03d0a6cb)[iVar1 - 2U] * 4))();
    return lVar3;
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
    lVar3 = uVar4 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}


