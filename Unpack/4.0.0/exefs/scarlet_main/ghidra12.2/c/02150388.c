/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02150388; name: FUN_02150388
 */


void FUN_02150388(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_045973e0;
  param_1[4] = &PTR_LAB_04597558;
  param_1[5] = &DAT_045975a8;
  if ((long *)param_1[0xab] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xab] + 0x20))();
  }
  if ((long *)param_1[0xa7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xa7] + 0x20))();
  }
  if ((long *)param_1[0xa3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xa3] + 0x20))();
  }
  if ((long *)param_1[0x9f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x9f] + 0x20))();
  }
  if ((long *)param_1[0x9b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x9b] + 0x20))();
  }
  if ((long *)param_1[0x97] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x97] + 0x20))();
  }
  pcVar1 = (code *)param_1[0x85];
  if (pcVar1 != (code *)0x0) {
    param_1[0x87] = 0;
    param_1[0x86] = 0;
    param_1[0x85] = 0;
    param_1[0x84] = 0;
    (*pcVar1)(param_1 + 0x88);
  }
  FUN_01209aa8(param_1);
  return;
}


