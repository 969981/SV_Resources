/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b53b0; name: FUN_008b53b0
 */


void FUN_008b53b0(float param_1,float param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  *(int *)(param_4 + 1) = (int)param_1;
  *(int *)((long)param_4 + 0xc) = (int)param_2;
  *param_3 = 0;
  *(float *)(param_3 + 1) = param_1;
  *(float *)((long)param_3 + 0xc) = param_2;
  return;
}


