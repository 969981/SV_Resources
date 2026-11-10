/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021e8f7c; name: FUN_021e8f7c
 */


void FUN_021e8f7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045a82a0;
  param_1[1] = &PTR_LAB_045a83b8;
  FUN_021e8fb8();
  FUN_021d9eb0(param_1 + 7);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 5));
  return;
}


