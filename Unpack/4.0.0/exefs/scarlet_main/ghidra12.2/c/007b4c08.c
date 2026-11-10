/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b4c08; name: FUN_007b4c08
 */


void FUN_007b4c08(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047d0e28 + 0x10);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x241));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x23d));
  FUN_0079a828(param_1);
  return;
}


