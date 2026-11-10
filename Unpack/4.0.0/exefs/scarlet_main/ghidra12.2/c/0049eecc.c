/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049eecc; name: FUN_0049eecc
 */


long FUN_0049eecc(long param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  
  pbVar3 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar3;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) {
LAB_0049eee0:
      uVar4 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar4 = *(ulong *)(pbVar3 + 8);
      }
      lVar2 = uVar4 + (((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      pbVar3 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar3;
      goto joined_r0x0049ef3c;
    }
  }
  else if (*(long *)(pbVar3 + 8) != 0) goto LAB_0049eee0;
  lVar2 = 0;
  pbVar3 = *(byte **)(param_1 + 0x18);
  bVar1 = *pbVar3;
joined_r0x0049ef3c:
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
    lVar2 = lVar2 + uVar4 + (ulong)(((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x20) = (int)lVar2;
    return lVar2;
  }
  lVar2 = FUN_0051d510((byte *)(param_1 + 8),lVar2,param_1 + 0x20);
  return lVar2;
}


