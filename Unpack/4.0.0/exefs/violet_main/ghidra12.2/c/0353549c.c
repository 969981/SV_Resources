/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0353549c; name: FUN_0353549c
 */


void FUN_0353549c(undefined8 *param_1)

{
  param_1[-3] = &PTR_LAB_047c9540;
  *param_1 = &PTR_LAB_047c9690;
  param_1[2] = &PTR_FUN_047c96b8;
  FUN_0352ef88(param_1 + 0x10);
  if ((long *)param_1[0xf] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf] + 0x30))();
  }
  FUN_0353190c(param_1 + -3);
  return;
}


