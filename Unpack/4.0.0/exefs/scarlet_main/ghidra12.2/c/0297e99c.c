/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297e99c; name: FUN_0297e99c
 */


void FUN_0297e99c(long param_1,int param_2)

{
  if (param_2 < 4) {
    param_1 = param_1 + (long)param_2 * 4;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  return;
}


