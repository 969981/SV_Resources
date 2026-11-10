/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00da7500; name: FUN_00da7500
 */


void FUN_00da7500(undefined8 *param_1)

{
  *param_1 = &DAT_0459c9e8;
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 0x20))();
  }
  FUN_00da7544(param_1);
  return;
}


