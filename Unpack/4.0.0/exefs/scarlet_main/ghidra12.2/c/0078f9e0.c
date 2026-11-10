/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078f9e0; name: FUN_0078f9e0
 */


void FUN_0078f9e0(long param_1,long *param_2,long *param_3)

{
  *param_3 = *param_2;
  param_3[1] = (long)param_2;
  *(long **)(*param_2 + 8) = param_3;
  *param_2 = (long)param_3;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}


