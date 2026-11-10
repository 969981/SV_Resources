/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c9e4c; name: FUN_007c9e4c
 */


void FUN_007c9e4c(long *param_1,uint param_2)

{
  FUN_007c3a5c();
  *param_1 = (long)(PTR_DAT_047d1118 + 0x10);
  nn::os::InitializeEvent(param_1 + 4,0,~param_2 & 1);
  return;
}


