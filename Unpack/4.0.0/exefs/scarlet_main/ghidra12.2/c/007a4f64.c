/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a4f64; name: FUN_007a4f64
 */


void FUN_007a4f64(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047d0b28 + 0x10);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_0078cb10(param_1 + 0xb);
  thunk_FUN_0078ccbc(param_1);
  operator_delete(param_1);
  return;
}


