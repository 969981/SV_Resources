/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a92ac; name: FUN_007a92ac
 */


void FUN_007a92ac(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d0be0;
  param_1[0x1f] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0078cb10(param_1 + 0xc);
  thunk_FUN_0078ccbc(param_1);
  operator_delete(param_1);
  return;
}


