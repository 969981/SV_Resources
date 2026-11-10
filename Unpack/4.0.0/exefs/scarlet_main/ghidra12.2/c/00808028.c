/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00808028; name: FUN_00808028
 */


void FUN_00808028(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047d1738 + 0x10);
  thunk_FUN_007e8810(param_1 + 0x192);
  *param_1 = (long)(PTR_DAT_047d15e8 + 0x10);
  nn::account::AsyncContext::~AsyncContext((AsyncContext *)(param_1 + 0x18d));
  FUN_007ae8ec(param_1);
  operator_delete(param_1);
  return;
}


