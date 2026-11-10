/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f5086c; name: FUN_01f5086c
 */


undefined4 FUN_01f5086c(byte param_1)

{
  if (param_1 < 5) {
    return *(undefined4 *)(&DAT_03d5bad8 + (long)(char)param_1 * 4);
  }
  return 8;
}


