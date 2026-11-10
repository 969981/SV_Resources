/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00584ffc; name: FUN_00584ffc
 */


long FUN_00584ffc(undefined *param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  
  pbVar4 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar4;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) goto LAB_0058501c;
LAB_0058506c:
    lVar6 = 0;
    pbVar4 = *(byte **)(param_1 + 0x18);
    uVar3 = (ulong)*pbVar4;
    if ((*pbVar4 & 1) != 0) goto LAB_0058507c;
LAB_00585058:
    uVar5 = uVar3 >> 1;
  }
  else {
    if (*(long *)(pbVar4 + 8) == 0) goto LAB_0058506c;
LAB_0058501c:
    uVar3 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar3 = *(ulong *)(pbVar4 + 8);
    }
    lVar6 = uVar3 + (((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    pbVar4 = *(byte **)(param_1 + 0x18);
    uVar3 = (ulong)*pbVar4;
    if ((*pbVar4 & 1) == 0) goto LAB_00585058;
LAB_0058507c:
    uVar5 = *(ulong *)(pbVar4 + 8);
  }
  if (uVar5 != 0) {
    uVar5 = uVar3 >> 1;
    if ((uVar3 & 1) != 0) {
      uVar5 = *(ulong *)(pbVar4 + 8);
    }
    lVar6 = lVar6 + uVar5 + (ulong)(((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  pbVar4 = *(byte **)(param_1 + 0x20);
  bVar1 = *pbVar4;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_0058510c;
  }
  else if (*(long *)(pbVar4 + 8) == 0) goto LAB_0058510c;
  uVar3 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar3 = *(ulong *)(pbVar4 + 8);
  }
  lVar6 = lVar6 + uVar3 + (ulong)(((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_0058510c:
  if ((param_1 != PTR_DAT_047ce030) && (*(long *)(param_1 + 0x28) != 0)) {
    lVar2 = FUN_004eb4b4();
    lVar6 = lVar6 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar1 = *(byte *)(uVar3 + 8);
    if ((bVar1 & 1) == 0) {
      uVar3 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar3 = *(ulong *)(uVar3 + 0x10);
    }
    lVar6 = uVar3 + lVar6;
  }
  *(int *)(param_1 + 0x30) = (int)lVar6;
  return lVar6;
}


