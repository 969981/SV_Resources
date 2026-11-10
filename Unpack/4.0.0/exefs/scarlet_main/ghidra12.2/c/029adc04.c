/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


