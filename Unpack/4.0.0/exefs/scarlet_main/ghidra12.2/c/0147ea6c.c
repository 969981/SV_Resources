/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0147ea6c; name: FUN_0147ea6c
 */


void FUN_0147ea6c(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x2b0) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x2b0) = param_2;
  return;
}


