/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028f40e8; name: FUN_028f40e8
 */


void FUN_028f40e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045eb808;
  param_1[4] = &PTR_LAB_045eb838;
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x14));
  FUN_012c5b38(param_1 + 0xc);
  FUN_012c5a98(param_1 + 5,param_1[6]);
  return;
}


