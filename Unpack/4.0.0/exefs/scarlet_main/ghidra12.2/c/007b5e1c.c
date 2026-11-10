/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b5e1c; name: FUN_007b5e1c
 */


void FUN_007b5e1c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047d0e78 + 0x10);
  thunk_FUN_007e8810(param_1 + 2);
  FUN_007ae8ec(param_1);
  operator_delete(param_1);
  return;
}


