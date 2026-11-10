/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00537f14; name: FUN_00537f14
 */


long FUN_00537f14(long param_1)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar4;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00537f78:
      lVar3 = 0;
      bVar2 = *(byte *)(param_1 + 8);
      goto joined_r0x00537f84;
    }
  }
  else if (*(long *)(pbVar4 + 8) == 0) goto LAB_00537f78;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar4 + 8);
  }
  lVar3 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  bVar2 = *(byte *)(param_1 + 8);
joined_r0x00537f84:
  if ((bVar2 & 1) == 0) {
    *(int *)(param_1 + 0x18) = (int)lVar3;
    return lVar3;
  }
  lVar3 = FUN_0051d510(param_1 + 8,lVar3,param_1 + 0x18);
  return lVar3;
}


