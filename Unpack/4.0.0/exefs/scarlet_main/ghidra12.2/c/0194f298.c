/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0194f298; name: FUN_0194f298
 */


void FUN_0194f298(long param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x20) + -1;
    if (*(int *)(param_1 + 0x20) < 1) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x20) = iVar1;
  return;
}


