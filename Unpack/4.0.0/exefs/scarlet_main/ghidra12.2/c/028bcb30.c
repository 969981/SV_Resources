/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028bcb30; name: FUN_028bcb30
 */


void FUN_028bcb30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045e8828;
  param_1[4] = &PTR_LAB_045e88b8;
  param_1[5] = &PTR_LAB_045e8920;
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x10));
  FUN_028bcb78(param_1 + 8);
  FUN_028bcc18(param_1);
  return;
}


