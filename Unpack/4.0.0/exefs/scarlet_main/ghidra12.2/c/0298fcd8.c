/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298fcd8; name: FUN_0298fcd8
 */


undefined4 FUN_0298fcd8(uint param_1)

{
  if (param_1 < 0x13) {
    return *(undefined4 *)(&DAT_03d6b0bc + *(long *)(&DAT_03d6b150 + (long)(int)param_1 * 8) * 8);
  }
  return 0;
}


