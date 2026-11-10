/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018121c0; name: FUN_018121c0
 */


void FUN_018121c0(undefined8 *param_1)

{
  FUN_01812200();
  *param_1 = &PTR_LAB_04581f18;
  param_1[4] = &PTR_LAB_04581f48;
  nn::os::InitializeMutex((MutexType *)(param_1 + 5),false,0);
  return;
}


