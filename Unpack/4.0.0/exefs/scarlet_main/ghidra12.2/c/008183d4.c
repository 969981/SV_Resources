/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008183d4; name: FUN_008183d4
 */


void FUN_008183d4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047d18f0 + 0x10);
  FUN_0284e3d4(param_1 + 0x93);
  thunk_FUN_0078ccbc(param_1);
  operator_delete(param_1);
  return;
}


