/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


