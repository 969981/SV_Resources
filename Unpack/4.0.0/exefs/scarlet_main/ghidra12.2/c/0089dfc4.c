/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


