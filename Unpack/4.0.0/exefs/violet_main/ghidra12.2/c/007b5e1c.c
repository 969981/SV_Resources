/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


