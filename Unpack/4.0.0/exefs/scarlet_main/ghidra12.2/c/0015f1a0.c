/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0015f1a0; name: FUN_0015f1a0
 */


void FUN_0015f1a0(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  
  if (0 < param_2) {
    lVar2 = 0;
    iVar1 = 1;
    do {
      lVar2 = (ulong)*(byte *)(param_1 + lVar2) * 4;
      *(int *)(param_3 + lVar2) = *(int *)(param_3 + lVar2) + -1;
      *(int *)(param_4 + lVar2) = *(int *)(param_4 + lVar2) + 1;
      lVar2 = (long)iVar1;
      iVar1 = iVar1 + 1;
    } while (lVar2 < param_2);
  }
  return;
}


