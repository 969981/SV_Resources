/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03535444; name: FUN_03535444
 */


void FUN_03535444(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_047c9540;
  param_1[3] = &PTR_LAB_047c9690;
  param_1[5] = &PTR_FUN_047c96b8;
  FUN_0352ef88(param_1 + 0x13);
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 0x30))();
  }
  FUN_0353190c(param_1);
  return;
}


