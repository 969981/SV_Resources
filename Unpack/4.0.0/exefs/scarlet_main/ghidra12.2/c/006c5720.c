/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c5720; name: FUN_006c5720
 */


void FUN_006c5720(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cfab0 + 0x10);
  FUN_006c5b0c(param_1 + 1);
  nn::os::InitializeEvent(param_1 + 0x24,0,0);
  return;
}


