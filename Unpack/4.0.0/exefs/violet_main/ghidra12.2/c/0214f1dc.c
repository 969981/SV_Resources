/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0214f1dc; name: FUN_0214f1dc
 */


void FUN_0214f1dc(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_04597010;
  param_1[4] = &PTR_LAB_04597150;
  param_1[5] = &DAT_045971a0;
  if ((long *)param_1[0x80] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x80] + 0x20))();
  }
  pcVar1 = (code *)param_1[0x6b];
  if (pcVar1 != (code *)0x0) {
    param_1[0x6d] = 0;
    param_1[0x6c] = 0;
    param_1[0x6b] = 0;
    param_1[0x6a] = 0;
    (*pcVar1)(param_1 + 0x6e);
  }
  FUN_0214f384(param_1 + 0x60);
  pcVar1 = (code *)param_1[0x4f];
  if (pcVar1 != (code *)0x0) {
    param_1[0x51] = 0;
    param_1[0x50] = 0;
    param_1[0x4f] = 0;
    param_1[0x4e] = 0;
    (*pcVar1)(param_1 + 0x52);
  }
  if ((long *)param_1[0x4d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4d] + 0x20))();
  }
  if ((long *)param_1[0x49] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x49] + 0x20))();
  }
  if ((long *)param_1[0x45] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x45] + 0x20))();
  }
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 0x20))();
  }
  if ((long *)param_1[0x3d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3d] + 0x20))();
  }
  if ((long *)param_1[0x39] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x39] + 0x20))();
  }
  if ((long *)param_1[0x35] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x35] + 0x20))();
  }
  if ((long *)param_1[0x31] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x31] + 0x20))();
  }
  if ((long *)param_1[0x2d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2d] + 0x20))();
  }
  if ((long *)param_1[0x29] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x29] + 0x20))();
  }
  if ((long *)param_1[0x25] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x25] + 0x20))();
  }
  FUN_0116e6b0(param_1);
  return;
}


