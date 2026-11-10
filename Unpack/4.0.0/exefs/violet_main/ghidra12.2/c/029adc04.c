/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029adc04; name: FUN_029adc04
 */


void FUN_029adc04(undefined8 param_1,undefined8 *param_2)

{
  void *__dest;
  
  param_2 = (undefined8 *)*param_2;
  __dest = (void *)FUN_00ccbb30(param_1,0);
  memcpy(__dest,(void *)*param_2,0xb0);
  FUN_00ccbb18(param_1,0);
  return;
}


