/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fad38; name: FUN_007fad38
 */


void FUN_007fad38(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047d15c0 + 0x10);
  if ((param_1[0xd] != 0) || (param_1[0xc] != 0)) {
    FUN_007fac9c(param_1);
  }
  thunk_FUN_007ec33c(param_1);
  operator_delete(param_1);
  return;
}


