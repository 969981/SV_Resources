/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02274dd8; name: FUN_02274dd8
 */


void FUN_02274dd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045aef98;
  param_1[4] = &PTR_LAB_045af0e0;
  param_1[5] = &DAT_045af208;
  param_1[6] = &PTR_LAB_045af260;
  param_1[7] = &PTR_LAB_045af288;
  if ((long *)param_1[0x2c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2c] + 0x20))();
  }
  if ((long *)param_1[0x28] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x28] + 0x20))();
  }
  FUN_02274d6c(param_1 + 0x24);
  FUN_00e6bfa4(param_1);
  return;
}


