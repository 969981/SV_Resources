/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a6438; name: FUN_008a6438
 */


void FUN_008a6438(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d21c0;
  param_1[4] = (long)(param_1 + 4);
  param_1[5] = (long)(param_1 + 4);
  param_1[1] = (long)(param_1 + 1);
  param_1[2] = (long)(param_1 + 1);
  *param_1 = (long)(puVar1 + 0x10);
  FUN_008a5e04();
  return;
}


