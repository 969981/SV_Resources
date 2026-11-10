/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028afc48; name: FUN_028afc48
 */


void FUN_028afc48(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d3f70;
  *param_1 = &PTR_LAB_045e6d20;
  *(undefined8 *)puVar1 = 0;
  if (param_1[3] != 0) {
    (**(code **)(*(long *)param_1[1] + 0xe8))();
  }
  if (param_1[7] != 0) {
    (**(code **)(*(long *)param_1[5] + 0xe8))();
  }
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)param_1[9] + 0xe8))();
  }
  if (param_1[0xf] != 0) {
    (**(code **)(*(long *)param_1[0xd] + 0xe8))();
  }
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)param_1[0x11] + 0xe8))();
  }
  if (param_1[0x17] != 0) {
    (**(code **)(*(long *)param_1[0x15] + 0xe8))();
  }
  if (param_1[0x1b] != 0) {
    (**(code **)(*(long *)param_1[0x19] + 0xe8))();
  }
  if (param_1[0x1f] != 0) {
    (**(code **)(*(long *)param_1[0x1d] + 0xe8))();
  }
  if (param_1[0x23] != 0) {
    (**(code **)(*(long *)param_1[0x21] + 0xe8))();
  }
  if (param_1[0x27] != 0) {
    (**(code **)(*(long *)param_1[0x25] + 0xe8))();
  }
  if (param_1[0x2b] != 0) {
    (**(code **)(*(long *)param_1[0x29] + 0xe8))();
  }
  FUN_01dadbd8(param_1);
  return;
}


