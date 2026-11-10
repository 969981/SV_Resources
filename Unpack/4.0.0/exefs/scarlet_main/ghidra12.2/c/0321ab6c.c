/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0321ab6c; name: FUN_0321ab6c
 */


void FUN_0321ab6c(long *param_1)

{
  *param_1 = (long)&PTR_LAB_046aa2c8;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 3));
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


