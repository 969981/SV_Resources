/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c9f14; name: FUN_007c9f14
 */


void FUN_007c9f14(long *param_1)

{
  FUN_007c3a5c();
  *param_1 = (long)(PTR_DAT_047d1120 + 0x10);
  nn::os::InitializeMutex((MutexType *)(param_1 + 4),true,0);
  return;
}


