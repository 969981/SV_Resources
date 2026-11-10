/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017dbde8; name: FUN_017dbde8
 */


void FUN_017dbde8(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &DAT_04599918;
  param_1[4] = &PTR_LAB_04599a58;
  param_1[5] = &DAT_04599aa8;
  if ((long *)param_1[0x5c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x5c] + 0x20))();
  }
  if ((long *)param_1[0x58] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x58] + 0x20))();
  }
  FUN_017dbf20(param_1 + 0x4e);
  pcVar1 = (code *)param_1[0x3f];
  if (pcVar1 != (code *)0x0) {
    param_1[0x41] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    (*pcVar1)(param_1 + 0x42);
  }
  if ((long *)param_1[0x3c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3c] + 0x20))();
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


