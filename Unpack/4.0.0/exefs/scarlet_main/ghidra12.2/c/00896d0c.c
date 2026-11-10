/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00896d0c; name: FUN_00896d0c
 */


void FUN_00896d0c(long *param_1,undefined8 param_2)

{
  FUN_008a5dac();
  *param_1 = (long)(PTR_DAT_047d21c0 + 0x10);
  param_1[4] = (long)(param_1 + 4);
  param_1[5] = (long)(param_1 + 4);
  FUN_008a68f8(param_1,param_2,0,0,0);
  *param_1 = (long)(PTR_DAT_047d2250 + 0x10);
  return;
}


