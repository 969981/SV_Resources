/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


