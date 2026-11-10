/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002ebda0; name: FUN_002ebda0
 */


void FUN_002ebda0(undefined8 *param_1)

{
  free((void *)*param_1);
  free((void *)param_1[1]);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


