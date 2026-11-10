/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02151d44; name: FUN_02151d44
 */


void FUN_02151d44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04597c28;
  param_1[4] = &PTR_LAB_04597d68;
  param_1[5] = &DAT_04597db8;
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 0x20))();
  }
  if ((long *)param_1[0x3d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3d] + 0x20))();
  }
  if ((long *)param_1[0x38] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x38] + 0x20))();
  }
  if ((long *)param_1[0x34] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x34] + 0x20))();
  }
  if ((long *)param_1[0x30] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x30] + 0x20))();
  }
  if ((long *)param_1[0x2c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2c] + 0x20))();
  }
  if ((long *)param_1[0x28] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x28] + 0x20))();
  }
  if ((long *)param_1[0x24] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x24] + 0x20))();
  }
  FUN_0116e6b0(param_1);
  return;
}


