/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0037a670; name: FUN_0037a670
 */


undefined4 FUN_0037a670(uint param_1)

{
  if (param_1 < 0xf) {
    return *(undefined4 *)(&DAT_03cd7f38 + (long)(int)param_1 * 4);
  }
  return 2;
}


