/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01209aa8; name: FUN_01209aa8
 */


void FUN_01209aa8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *param_1 = (long)&DAT_045969d8;
  param_1[4] = (long)&PTR_LAB_04596b50;
  param_1[5] = (long)&DAT_04596ba0;
  if ((long *)param_1[0x7a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x7a] + 0x20))();
  }
  if ((long *)param_1[0x76] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x76] + 0x20))();
  }
  if ((long *)param_1[0x72] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x72] + 0x20))();
  }
  if ((long *)param_1[0x6d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x6d] + 0x20))();
  }
  if ((long *)param_1[0x69] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x69] + 0x20))();
  }
  if ((long *)param_1[0x65] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x65] + 0x20))();
  }
  if ((long *)param_1[0x5f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x5f] + 0x20))();
  }
  if ((long *)param_1[0x5b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x5b] + 0x20))();
  }
  if ((long *)param_1[0x56] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x56] + 0x20))();
  }
  FUN_01209bf4(param_1 + 0x26);
  puVar1 = PTR_DAT_047dd098 + 0x160;
  puVar2 = PTR_DAT_047dd098 + 0x1b0;
  *param_1 = (long)(PTR_DAT_047dd098 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  if ((long *)param_1[0x24] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x24] + 0x20))();
  }
  FUN_0116e6b0(param_1);
  return;
}


