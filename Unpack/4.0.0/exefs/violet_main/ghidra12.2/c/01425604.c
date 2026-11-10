/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01425604; name: FUN_01425604
 */


void FUN_01425604(undefined8 *param_1)

{
  *param_1 = &DAT_045e8260;
  param_1[4] = &PTR_LAB_045e83b0;
  param_1[5] = &DAT_045e84d8;
  param_1[6] = &PTR_LAB_045e8530;
  param_1[7] = &PTR_LAB_045e8558;
  FUN_01425690(param_1 + 0x3a);
  if ((long *)param_1[0x38] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x38] + 0x20))();
  }
  if ((long *)param_1[0x37] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x37] + 0x20))();
  }
  FUN_00db239c(param_1 + 0x2f);
  FUN_00db239c(param_1 + 0x27);
  FUN_00e6bfa4(param_1);
  return;
}


