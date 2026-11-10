/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078a148; name: FUN_0078a148
 */


void FUN_0078a148(int param_1)

{
  if (param_1 - 2U < 0x13) {
    *(undefined4 *)PTR_DAT_047d08a8 = *(undefined4 *)(&DAT_03d0ab60 + (long)(int)(param_1 - 2U) * 4)
    ;
    return;
  }
  *(undefined4 *)PTR_DAT_047d08a8 = 0x13;
  return;
}


