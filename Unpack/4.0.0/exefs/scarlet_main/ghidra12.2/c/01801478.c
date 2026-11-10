/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01801478; name: FUN_01801478
 */


void FUN_01801478(undefined8 *param_1)

{
  FUN_018014c4();
  *param_1 = &DAT_045401b8;
  param_1[4] = &PTR_LAB_045401e8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_018015f0(param_1 + 8);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xc),false,0);
  return;
}


