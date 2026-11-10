/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0218b500; name: FUN_0218b500
 */


void FUN_0218b500(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0459f2c8;
  param_1[4] = &PTR_LAB_0459f410;
  param_1[5] = &DAT_0459f538;
  param_1[6] = &PTR_LAB_0459f590;
  param_1[7] = &PTR_LAB_0459f5b8;
  FUN_00db239c(param_1 + 0x28);
  if ((long *)param_1[0x27] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x27] + 0x20))();
  }
  FUN_00e6bfa4(param_1);
  return;
}


