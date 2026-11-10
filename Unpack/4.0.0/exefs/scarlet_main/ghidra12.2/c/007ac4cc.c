/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ac4cc; name: FUN_007ac4cc
 */


void FUN_007ac4cc(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d0ce8;
  param_1[0x16] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0078cb10(param_1 + 0xc);
  thunk_FUN_0078ccbc(param_1);
  return;
}


