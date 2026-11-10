/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0271d690; name: FUN_0271d690
 */


void FUN_0271d690(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045d3888;
  param_1[4] = &PTR_LAB_045d38c0;
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x48));
  FUN_0271d6e4(param_1 + 0x28);
  FUN_0271d784(param_1 + 0x1a);
  FUN_01765ca0(param_1 + 0xd);
  FUN_0271d7c4(param_1 + 6);
  return;
}


