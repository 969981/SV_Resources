/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0178c688; name: FUN_0178c688
 */


void FUN_0178c688(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047dcda8;
  *param_1 = (long)(PTR_DAT_047dcda8 + 0x10);
  param_1[4] = (long)(puVar1 + 0x100);
  param_1[6] = (long)(puVar1 + 0x130);
  FUN_0178c6d0(param_1 + 0x14);
  FUN_0178c710(param_1 + 7);
  return;
}


