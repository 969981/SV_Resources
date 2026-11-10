/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018c9df0; name: FUN_018c9df0
 */


void FUN_018c9df0(undefined8 *param_1)

{
  *param_1 = &DAT_045dd0d8;
  param_1[4] = &PTR_LAB_045dd240;
  param_1[5] = &DAT_045dd368;
  param_1[0x24] = &PTR_LAB_045dd420;
  param_1[6] = &PTR_LAB_045dd3c0;
  param_1[7] = &PTR_LAB_045dd3e8;
  FUN_018c9e6c(DAT_0485a0e8,param_1 + 0x24);
  FUN_018ca0dc(param_1 + 0x49);
  FUN_018c9f48(param_1 + 0x3a);
  FUN_018ca2c0(param_1 + 0x2b);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x28));
  FUN_00e6bfa4(param_1);
  return;
}


