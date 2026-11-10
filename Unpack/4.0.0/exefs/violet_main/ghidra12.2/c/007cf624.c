/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007cf624; name: FUN_007cf624
 */


void FUN_007cf624(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047d1230 + 0x10);
  FUN_0078cb10(param_1 + 0xc);
  thunk_FUN_0078ccbc(param_1);
  operator_delete(param_1);
  return;
}


