/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


