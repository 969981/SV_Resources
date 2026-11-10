/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0116e660; name: FUN_0116e660
 */


void FUN_0116e660(undefined8 *param_1)

{
  *param_1 = &DAT_04596bf8;
  param_1[4] = &PTR_LAB_04596d48;
  param_1[5] = &DAT_04596d98;
  if ((long *)param_1[0x24] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x24] + 0x20))();
  }
  FUN_0116e6b0(param_1);
  return;
}


