/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02151e3c; name: FUN_02151e3c
 */


void FUN_02151e3c(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_04597e10;
  param_1[4] = &PTR_LAB_04597f80;
  param_1[5] = &DAT_04597fd0;
  if ((long *)param_1[0x4a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4a] + 0x20))();
  }
  if ((long *)param_1[0x45] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x45] + 0x20))();
  }
  pcVar1 = (code *)param_1[0x33];
  if (pcVar1 != (code *)0x0) {
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    (*pcVar1)(param_1 + 0x36);
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


