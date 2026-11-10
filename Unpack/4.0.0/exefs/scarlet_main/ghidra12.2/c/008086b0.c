/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008086b0; name: FUN_008086b0
 */


void FUN_008086b0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047d1750 + 0x10);
  FUN_0080ebe8(param_1 + 0x28c);
  FUN_0078cb10(param_1 + 0x285);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x27e));
  FUN_007fce5c(param_1);
  operator_delete(param_1);
  return;
}


