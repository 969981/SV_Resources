/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e87c0; name: FUN_021e87c0
 */


void FUN_021e87c0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_045a7f40;
  DAT_04841fa0 = 0;
  if (param_1[3] != 0) {
    (**(code **)(*(long *)param_1[1] + 0xe8))();
  }
  if (param_1[7] != 0) {
    (**(code **)(*(long *)param_1[5] + 0xe8))();
  }
  FUN_01dadbd8(param_1);
  return;
}


