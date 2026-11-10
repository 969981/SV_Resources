/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


