/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c9e8c; name: FUN_007c9e8c
 */


void FUN_007c9e8c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047d1118 + 0x10);
  nn::os::FinalizeEvent((EventType *)(param_1 + 4));
  FUN_007c3b34(param_1);
  return;
}


