/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026e392c; name: FUN_026e392c
 */


void FUN_026e392c(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  if ((param_2 & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x170);
    for (lVar2 = *(long *)(param_1 + 0x178); lVar2 != lVar1; lVar2 = lVar2 + -0x10) {
      FUN_01751d6c(lVar2 + -8);
    }
    *(long *)(param_1 + 0x178) = lVar1;
  }
  return;
}


