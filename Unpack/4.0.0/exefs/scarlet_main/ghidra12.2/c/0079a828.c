/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079a828; name: FUN_0079a828
 */


void FUN_0079a828(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047d0a38 + 0x10);
  FUN_0078cb10(param_1 + 0x223);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x4a));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x3f));
  FUN_0078cb10(param_1 + 0x39);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x1f));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x1b));
  FUN_007ec33c(param_1);
  return;
}


