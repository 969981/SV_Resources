/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078f870; name: FUN_0078f870
 */


void FUN_0078f870(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x170;
  if (*(long *)(param_1 + 0x178) != lVar1) {
    lVar2 = (long)*(int *)(param_1 + 0x184);
    lVar3 = *(long *)(param_1 + 0x178) - lVar2;
    do {
      if (*(ulong *)(lVar3 + 0x10) <= *(ulong *)(param_2 + 0x10)) {
        FUN_0078f9e0(lVar1,lVar3 + lVar2,lVar2 + param_2);
        return;
      }
      lVar3 = *(long *)(lVar3 + lVar2 + 8) - lVar2;
    } while (lVar3 != lVar1 - lVar2);
  }
  FUN_007c9f04(param_1 + 0x120);
  FUN_0078f9e0(lVar1,lVar1,*(int *)(param_1 + 0x184) + param_2);
  return;
}


