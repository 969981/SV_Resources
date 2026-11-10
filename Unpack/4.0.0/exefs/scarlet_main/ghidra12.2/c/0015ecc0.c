/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0015ecc0; name: FUN_0015ecc0
 */


int FUN_0015ecc0(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  if ((int)param_2 < 1) {
    return 0;
  }
  uVar4 = 0;
  iVar2 = 0;
  do {
    uVar3 = (uint)uVar4;
    iVar1 = *(int *)(param_1 + uVar4 * 4);
    uVar4 = uVar4 + 1;
    if (iVar1 != 0) {
      iVar2 = iVar2 + iVar1 * (param_3 + 0x3f +
                              (int)LZCOUNT((uVar3 >> (ulong)(param_3 & 0x1f)) + 1) * -2);
    }
  } while (param_2 != uVar4);
  return iVar2;
}


