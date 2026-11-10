/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02158e70; name: FUN_02158e70
 */


void FUN_02158e70(float *param_1,float *param_2,float *param_3,float *param_4)

{
  *param_3 = *param_1 - *param_2 * 0.5;
  param_3[1] = param_1[1] + param_2[1] * 0.5;
  *param_4 = *param_1 + *param_2 * 0.5;
  param_4[1] = param_1[1] - param_2[1] * 0.5;
  return;
}


