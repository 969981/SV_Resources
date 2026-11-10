/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089dfc4; name: thunk_FUN_0088d0d0
 */


void thunk_FUN_0088d0d0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047d2080 + 0x10);
  if (param_1[6] != 0) {
    FUN_00896e98();
  }
  if (param_1[5] == 0) {
    return;
  }
  FUN_00896e98();
  return;
}


