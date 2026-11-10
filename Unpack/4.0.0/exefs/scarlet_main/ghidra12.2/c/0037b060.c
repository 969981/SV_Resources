/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0037b060; name: FUN_0037b060
 */


void FUN_0037b060(long *param_1,long *param_2)

{
  *param_2 = *param_2 + *param_1;
  *param_1 = 0;
  param_2[1] = param_2[1] + param_1[1];
  param_1[1] = 0;
  param_2[2] = param_2[2] + param_1[2];
  param_1[2] = 0;
  param_2[3] = param_2[3] + param_1[3];
  param_1[3] = 0;
  param_2[4] = param_2[4] + param_1[4];
  param_1[4] = 0;
  param_2[5] = param_2[5] + param_1[5];
  param_1[5] = 0;
  return;
}


