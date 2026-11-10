/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001eda0c; name: FUN_001eda0c
 */


void FUN_001eda0c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(bool *)(param_1 + 2) = param_4 != 0;
  return;
}


